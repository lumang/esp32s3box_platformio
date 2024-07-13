

#include <WiFi.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include "ui.h"
#include "app_hal.h"
#include <ESP_IOExpander_Library.h>



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



// JSON parsing
static DynamicJsonDocument doc(1024);
// HTTP request
HTTPClient http;



void add_gongde(lv_event_t * e)
{
  if (gongde_count <= 999) {
    gongde_count += 1;
    snprintf(gongde_str, sizeof(gongde_str), "%d", gongde_count);
    lv_label_set_text_fmt(ui_gongdenumb, "%s", gongde_str);
  } else {
    lv_label_set_text_fmt(ui_gongdenumb, "%s", "MAX");
    gongde_count = 0;
  }
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
    hal_setup();
    
    Serial.println("Setup done");
}

void loop()
{
  hal_loop();
}