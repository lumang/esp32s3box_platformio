#ifndef DRIVER_H
#define DRIVER_H

#define ENABLE_FACE_34_2_DIAL // (Shadow) 
#define ENABLE_FACE_75_2_DIAL // (Analog)
// #define ENABLE_FACE_79_2_DIAL // (Blue)
#define ENABLE_FACE_116_2_DIAL // (Outline)
// #define ENABLE_FACE_756_2_DIAL // (Red)
// #define ENABLE_FACE_B_W_RESIZED // (B & W)
// #define ENABLE_FACE_KENYA // (Kenya)
#define ENABLE_FACE_PIXEL_RESIZED // (Pixel)
// #define ENABLE_FACE_RADAR // (Radar)
#define ENABLE_FACE_SMART_RESIZED // (Smart)

/* LVGL porting configurations */
#define LVGL_TICK_PERIOD_MS     (2)
#define LVGL_TASK_MAX_DELAY_MS  (500)
#define LVGL_TASK_MIN_DELAY_MS  (1)
#define LVGL_TASK_STACK_SIZE    (4 * 1024)
#define LVGL_TASK_PRIORITY      (2)
#define LVGL_BUF_SIZE           (ESP_PANEL_LCD_H_RES * 20)

void hal_setup();
void hal_loop();

#endif 