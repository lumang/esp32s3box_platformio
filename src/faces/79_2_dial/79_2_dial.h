
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 79_2_DIAL

#ifndef _FACE_79_2_DIAL_H
#define _FACE_79_2_DIAL_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"
#include "app_hal.h"

//#define ENABLE_FACE_79_2_DIAL // (Blue) uncomment to enable or define it elsewhere

#ifdef ENABLE_FACE_79_2_DIAL
    extern lv_obj_t *face_79_2_dial;
	extern lv_obj_t *face_79_2_dial_0_404;
	extern lv_obj_t *face_79_2_dial_1_59582;
	extern lv_obj_t *face_79_2_dial_2_59582;
	extern lv_obj_t *face_79_2_dial_3_123330;
	extern lv_obj_t *face_79_2_dial_4_123330;
	extern lv_obj_t *face_79_2_dial_5_58512;
	extern lv_obj_t *face_79_2_dial_6_58512;
	extern lv_obj_t *face_79_2_dial_7_58512;
	extern lv_obj_t *face_79_2_dial_8_58512;
	extern lv_obj_t *face_79_2_dial_9_59456;
	extern lv_obj_t *face_79_2_dial_10_58512;
	extern lv_obj_t *face_79_2_dial_11_58512;
	extern lv_obj_t *face_79_2_dial_12_58512;
	extern lv_obj_t *face_79_2_dial_13_58512;
	extern lv_obj_t *face_79_2_dial_14_58512;
	extern lv_obj_t *face_79_2_dial_15_58512;
	extern lv_obj_t *face_79_2_dial_16_58512;
	extern lv_obj_t *face_79_2_dial_17_58512;
	extern lv_obj_t *face_79_2_dial_19_144206;


	LV_IMG_DECLARE(face_79_2_dial_dial_img_0_404_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_1);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_2);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_3);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_4);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_5);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_6);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_7);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_8);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_1_59582_9);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_1);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_2);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_3);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_4);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_5);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_6);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_7);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_8);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_3_123330_9);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_1);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_2);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_3);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_4);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_5);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_6);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_7);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_8);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_5_58512_9);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_9_59456_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_1);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_2);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_3);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_4);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_5);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_18_138796_6);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_0);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_1);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_2);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_3);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_4);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_5);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_19_144206_6);
	LV_IMG_DECLARE(face_79_2_dial_dial_img_preview_0);


#endif
    void onFaceEvent(lv_event_t * e);

    void init_face_79_2_dial(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **));
    void update_time_79_2_dial(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday);
    void update_weather_79_2_dial(int temp, int icon);
    void update_status_79_2_dial(int battery, bool connection);
    void update_activity_79_2_dial(int steps, int distance, int kcal);
    void update_health_79_2_dial(int bpm, int oxygen);
    void update_all_79_2_dial(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
                int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen);
    void update_check_79_2_dial(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
                int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen);


#ifdef __cplusplus
}
#endif

#endif