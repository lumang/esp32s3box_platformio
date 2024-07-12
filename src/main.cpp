#include <Arduino.h>
#include <lvgl.h>
#include <ESP_Panel_Library.h>
#include <ESP_IOExpander_Library.h>

#include <WiFi.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include "ui.h"

/* LVGL porting configurations */
#define LVGL_TICK_PERIOD_MS     (2)
#define LVGL_TASK_MAX_DELAY_MS  (500)
#define LVGL_TASK_MIN_DELAY_MS  (1)
#define LVGL_TASK_STACK_SIZE    (4 * 1024)
#define LVGL_TASK_PRIORITY      (2)
#define LVGL_BUF_SIZE           (ESP_PANEL_LCD_H_RES * 20)

// Set WiFi name and password
const char* ssid = "ss";
const char* password = "20170317";

// API service address
const char* apiServer = "http://api.m.taobao.com/rest/api3.do?api=mtop.common.getTimestamp";

// RTC info
struct timeval tv = {
    .tv_sec = 0,
    .tv_usec = 0,
};
struct tm* timeinfo;

// To update LVGL label
int gongde_count = 0;
char gongde_str[10];

// To play LVGL gif
LV_IMG_DECLARE(kapiWorking_gif);
lv_obj_t * img_gif;

// JSON parsing
static DynamicJsonDocument doc(1024);
// HTTP request
HTTPClient http;

ESP_Panel *panel = NULL;
SemaphoreHandle_t lvgl_mux = NULL;                  // LVGL mutex

void add_gongde(lv_event_t * e)
{
  if (gongde_count <= 999) {
    gongde_count += 1;
    snprintf(gongde_str, sizeof(gongde_str), "%d", gongde_count);
    lv_label_set_text_fmt(ui_gongdenumb, "%s", gongde_str);
  } else {
    lv_label_set_text_fmt(ui_gongdenumb, "%s", "MAX");
  }
}

void ui_gif_init()
{
  img_gif = lv_gif_create(ui_Screen1);
  lv_gif_set_src(img_gif, &kapiWorking_gif);
  lv_obj_align(img_gif, LV_ALIGN_CENTER, 0, 40);
}

static void calibrate_time(time_t epoch_time)
{
  tv.tv_sec = epoch_time;

  setenv("TZ", "CST-8", 1);
  tzset();

  if (settimeofday(&tv, NULL) == 0) {
    ESP_LOGI("RTC Calibration", "RTC time set successfully.");
  } else {
    ESP_LOGE("RTC Calibration", "Failed to set RTC time.");
  }
}

static void ui_time_calibrate(lv_timer_t *timer)
{
  http.begin(apiServer);
  int httpCode = http.GET();
  delay(500);

  if (httpCode == HTTP_CODE_OK) {
    String responseData = http.getString();
    deserializeJson(doc, responseData);

    String time_ms = doc["data"]["t"];
    long long time_long = atoll(time_ms.c_str());
    time_t current_time = time_long / 1000;

    calibrate_time(current_time);
  } else {
    Serial.println("Failed to retrieve data");
  }

  http.end();
}

static void ui_clock_update(lv_timer_t *timer)
{
  gettimeofday(&tv, NULL);

  timeinfo = localtime(&tv.tv_sec);

  // generate time in "HOUR:MINUTE:SECOND" format
  char time_str[9];
  sprintf(time_str, "%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

  // generate time in "YYYY/MM/DD" format
  char date_str[11];
  sprintf(date_str, "%04d/%02d/%02d", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday);

  lv_label_set_text_fmt(ui_timeLabel, "%s", time_str);
  lv_label_set_text_fmt(ui_dateLabel, "%s", date_str);
}

void ui_timer_init()
{
  // calibrate RTC every hour
  lv_timer_t *timer_calibrate = lv_timer_create(ui_time_calibrate, 60 * 60 * 1000, NULL);
  ui_time_calibrate(timer_calibrate);

  // refresh time lable every second
  lv_timer_t *timer_clock = lv_timer_create(ui_clock_update, 1000, NULL);
  ui_clock_update(timer_clock);
}

#if ESP_PANEL_LCD_BUS_TYPE == ESP_PANEL_BUS_TYPE_RGB
/* Display flushing */
void lvgl_port_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    panel->getLcd()->drawBitmap(area->x1, area->y1, area->x2 + 1, area->y2 + 1, color_p);
    lv_disp_flush_ready(disp);
}
#else
/* Display flushing */
void lvgl_port_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    panel->getLcd()->drawBitmap(area->x1, area->y1, area->x2 + 1, area->y2 + 1, color_p);
}

bool notify_lvgl_flush_ready(void *user_ctx)
{
    lv_disp_drv_t *disp_driver = (lv_disp_drv_t *)user_ctx;
    lv_disp_flush_ready(disp_driver);
    return false;
}
#endif /* ESP_PANEL_LCD_BUS_TYPE */

#if ESP_PANEL_USE_LCD_TOUCH
/* Read the touchpad */
void lvgl_port_tp_read(lv_indev_drv_t * indev, lv_indev_data_t * data)
{
    panel->getLcdTouch()->readData();

    bool touched = panel->getLcdTouch()->getTouchState();
    if(!touched) {
        data->state = LV_INDEV_STATE_REL;
    } else {
        TouchPoint point = panel->getLcdTouch()->getPoint();

        data->state = LV_INDEV_STATE_PR;
        /*Set the coordinates*/
        data->point.x = point.x;
        data->point.y = point.y;

        // Serial.printf("Touch point: x %d, y %d\n", point.x, point.y);
    }
}
#endif

void lvgl_port_lock(int timeout_ms)
{
    const TickType_t timeout_ticks = (timeout_ms < 0) ? portMAX_DELAY : pdMS_TO_TICKS(timeout_ms);
    xSemaphoreTakeRecursive(lvgl_mux, timeout_ticks);
}

void lvgl_port_unlock(void)
{
    xSemaphoreGiveRecursive(lvgl_mux);
}

void lvgl_port_task(void *arg)
{
    Serial.println("Starting LVGL task");

    uint32_t task_delay_ms = LVGL_TASK_MAX_DELAY_MS;

    while (1) {
        // Lock the mutex due to the LVGL APIs are not thread-safe
        lvgl_port_lock(-1);
        task_delay_ms = lv_timer_handler();
        // Release the mutex
        lvgl_port_unlock();
        if (task_delay_ms > LVGL_TASK_MAX_DELAY_MS) {
            task_delay_ms = LVGL_TASK_MAX_DELAY_MS;
        } else if (task_delay_ms < LVGL_TASK_MIN_DELAY_MS) {
            task_delay_ms = LVGL_TASK_MIN_DELAY_MS;
        }
        vTaskDelay(pdMS_TO_TICKS(task_delay_ms));
    }
}

void setup()
{
    Serial.begin(115200); /* prepare for possible serial debug */
    sys_delay_ms(500);
    // Connect to Wi-Fi
    Serial.println("Connecting to WiFi!");
    WiFi.begin(ssid, password);
    // Wait for Wi-Fi connection
    while (WiFi.status() != WL_CONNECTED) {
      Serial.println("Connecting Wi-Fi");
      delay(500);
    }
    Serial.println("Wi-Fi connected");
    Serial.println(WiFi.localIP());

    String LVGL_Arduino = "Hello Squareline!";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println(LVGL_Arduino);
    Serial.println("I am ESP32_Display_Panel");

    panel = new ESP_Panel();

    /* Initialize LVGL core */
    lv_init();

    /* Initialize LVGL buffers */
    static lv_disp_draw_buf_t draw_buf;
    /* Using double buffers is more faster than single buffer */
    /* Using internal SRAM is more fast than PSRAM (Note: Memory allocated using `malloc` may be located in PSRAM.) */
    uint8_t *buf = (uint8_t *)heap_caps_calloc(1, LVGL_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_INTERNAL);
    assert(buf);
    lv_disp_draw_buf_init(&draw_buf, buf, NULL, LVGL_BUF_SIZE);

    /* Initialize the display device */
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = ESP_PANEL_LCD_H_RES;
    disp_drv.ver_res = ESP_PANEL_LCD_V_RES;
    disp_drv.flush_cb = lvgl_port_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

#if ESP_PANEL_USE_LCD_TOUCH
    /* Initialize the input device */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = lvgl_port_tp_read;
    lv_indev_drv_register(&indev_drv);
#endif

#if defined(ESP_PANEL_BOARD_ESP32_S3_LCD_EV_BOARD) || defined(ESP_PANEL_BOARD_ESP32_S3_KORVO_2)
    /**
     * These development boards require the use of an IO expander to configure the screen,
     * so it needs to be initialized in advance and registered with the panel for use.
     *
     */
    Serial.println("Initialize IO expander");
    /* Initialize IO expander */
    ESP_IOExpander *expander = new ESP_IOExpander_TCA95xx_8bit(ESP_PANEL_LCD_TOUCH_BUS_HOST_ID, ESP_IO_EXPANDER_I2C_TCA9554_ADDRESS_000, ESP_PANEL_LCD_TOUCH_I2C_IO_SCL, ESP_PANEL_LCD_TOUCH_I2C_IO_SDA);
    expander->init();
    expander->begin();
    /* Add into panel */
    panel->addIOExpander(expander);
#endif

    /* Initialize bus and device of panel */
    panel->init();
#if ESP_PANEL_LCD_BUS_TYPE != ESP_PANEL_BUS_TYPE_RGB
    /* Register a function to notify LVGL when the panel is ready to flush */
    /* This is useful for refreshing the screen using DMA transfers */
    panel->getLcd()->setCallback(notify_lvgl_flush_ready, &disp_drv);
#endif
    /* Start panel */
    panel->begin();

    /* Create a task to run the LVGL task periodically */
    lvgl_mux = xSemaphoreCreateRecursiveMutex();

    /* Lock the mutex due to the LVGL APIs are not thread-safe */
    lvgl_port_lock(-1);

    ui_init();
    ui_gif_init();
    ui_timer_init();

    lvgl_port_unlock();

    xTaskCreate(lvgl_port_task, "lvgl", LVGL_TASK_STACK_SIZE, NULL, LVGL_TASK_PRIORITY, NULL);

    Serial.println("Setup done");
}

void loop()
{
    sleep(1);
}