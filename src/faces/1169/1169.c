
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 1169

#include "1169.h"

#ifdef ENABLE_FACE_1169

lv_obj_t *face_1169;
lv_obj_t *face_1169_0_144;
lv_obj_t *face_1169_1_69774;
lv_obj_t *face_1169_2_69774;
lv_obj_t *face_1169_3_129032;
lv_obj_t *face_1169_4_74398;
lv_obj_t *face_1169_5_74398;
lv_obj_t *face_1169_6_129032;


#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit for watchfaces"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 for watchfaces"
#endif


const lv_img_dsc_t *face_1169_dial_img_1_69774_group[] = {
	&face_1169_dial_img_1_69774_0,
	&face_1169_dial_img_1_69774_1,
	&face_1169_dial_img_1_69774_2,
	&face_1169_dial_img_1_69774_3,
	&face_1169_dial_img_1_69774_4,
	&face_1169_dial_img_1_69774_5,
	&face_1169_dial_img_1_69774_6,
	&face_1169_dial_img_1_69774_7,
	&face_1169_dial_img_1_69774_8,
	&face_1169_dial_img_1_69774_9,
};
const lv_img_dsc_t *face_1169_dial_img_3_129032_group[] = {
	&face_1169_dial_img_3_129032_0,
	&face_1169_dial_img_3_129032_1,
	&face_1169_dial_img_3_129032_2,
	&face_1169_dial_img_3_129032_3,
	&face_1169_dial_img_3_129032_4,
	&face_1169_dial_img_3_129032_5,
	&face_1169_dial_img_3_129032_6,
	&face_1169_dial_img_3_129032_7,
	&face_1169_dial_img_3_129032_8,
	&face_1169_dial_img_3_129032_9,
};
const lv_img_dsc_t *face_1169_dial_img_4_74398_group[] = {
	&face_1169_dial_img_4_74398_0,
	&face_1169_dial_img_4_74398_1,
	&face_1169_dial_img_4_74398_2,
	&face_1169_dial_img_4_74398_3,
	&face_1169_dial_img_4_74398_4,
	&face_1169_dial_img_4_74398_5,
	&face_1169_dial_img_4_74398_6,
	&face_1169_dial_img_4_74398_7,
	&face_1169_dial_img_4_74398_8,
	&face_1169_dial_img_4_74398_9,
};


#endif

void init_face_1169(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **)){
#ifdef ENABLE_FACE_1169
    face_1169 = lv_obj_create(NULL);
    lv_obj_clear_flag(face_1169, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(face_1169, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(face_1169, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(face_1169, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(face_1169, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(face_1169, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(face_1169, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(face_1169, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

    lv_obj_add_event_cb(face_1169, onFaceEvent, LV_EVENT_ALL, NULL);

    
    face_1169_0_144 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_0_144, &face_1169_dial_img_0_144_0);
    lv_obj_set_width(face_1169_0_144, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_0_144, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_0_144, 0);
    lv_obj_set_y(face_1169_0_144, 0);
    lv_obj_add_flag(face_1169_0_144, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_0_144, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_1_69774 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_1_69774, &face_1169_dial_img_1_69774_0);
    lv_obj_set_width(face_1169_1_69774, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_1_69774, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_1_69774, 51);
    lv_obj_set_y(face_1169_1_69774, 219);
    lv_obj_add_flag(face_1169_1_69774, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_1_69774, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_2_69774 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_2_69774, &face_1169_dial_img_1_69774_0);
    lv_obj_set_width(face_1169_2_69774, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_2_69774, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_2_69774, 33);
    lv_obj_set_y(face_1169_2_69774, 219);
    lv_obj_add_flag(face_1169_2_69774, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_2_69774, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_3_129032 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_3_129032, &face_1169_dial_img_3_129032_0);
    lv_obj_set_width(face_1169_3_129032, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_3_129032, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_3_129032, 57);
    lv_obj_set_y(face_1169_3_129032, 109);
    lv_obj_add_flag(face_1169_3_129032, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_3_129032, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_4_74398 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_4_74398, &face_1169_dial_img_4_74398_0);
    lv_obj_set_width(face_1169_4_74398, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_4_74398, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_4_74398, 4);
    lv_obj_set_y(face_1169_4_74398, 109);
    lv_obj_add_flag(face_1169_4_74398, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_4_74398, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_5_74398 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_5_74398, &face_1169_dial_img_4_74398_0);
    lv_obj_set_width(face_1169_5_74398, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_5_74398, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_5_74398, 156);
    lv_obj_set_y(face_1169_5_74398, 194);
    lv_obj_add_flag(face_1169_5_74398, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_5_74398, LV_OBJ_FLAG_SCROLLABLE );

    face_1169_6_129032 = lv_img_create(face_1169);
    lv_img_set_src(face_1169_6_129032, &face_1169_dial_img_3_129032_0);
    lv_obj_set_width(face_1169_6_129032, LV_SIZE_CONTENT);
    lv_obj_set_height(face_1169_6_129032, LV_SIZE_CONTENT);
    lv_obj_set_x(face_1169_6_129032, 96);
    lv_obj_set_y(face_1169_6_129032, 194);
    lv_obj_add_flag(face_1169_6_129032, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_1169_6_129032, LV_OBJ_FLAG_SCROLLABLE );


    callback("1169", &face_1169_dial_img_preview_0, &face_1169);

#endif
}

void update_time_1169(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday)
{
#ifdef ENABLE_FACE_1169
    if (!face_1169)
    {
        return;
    }
	lv_img_set_src(face_1169_1_69774, face_1169_dial_img_1_69774_group[(day / 1) % 10]);
	lv_img_set_src(face_1169_2_69774, face_1169_dial_img_1_69774_group[(day / 10) % 10]);
	lv_img_set_src(face_1169_3_129032, face_1169_dial_img_3_129032_group[(hour / 1) % 10]);
	lv_img_set_src(face_1169_4_74398, face_1169_dial_img_4_74398_group[(hour / 10) % 10]);
	lv_img_set_src(face_1169_5_74398, face_1169_dial_img_4_74398_group[(minute / 1) % 10]);
	lv_img_set_src(face_1169_6_129032, face_1169_dial_img_3_129032_group[(minute / 10) % 10]);

#endif
}

void update_weather_1169(int temp, int icon)
{
#ifdef ENABLE_FACE_1169
    if (!face_1169)
    {
        return;
    }

#endif
}

void update_status_1169(int battery, bool connection){
#ifdef ENABLE_FACE_1169
    if (!face_1169)
    {
        return;
    }

#endif
}

void update_activity_1169(int steps, int distance, int kcal)
{
#ifdef ENABLE_FACE_1169
    if (!face_1169)
    {
        return;
    }

#endif
}

void update_health_1169(int bpm, int oxygen)
{
#ifdef ENABLE_FACE_1169
    if (!face_1169)
    {
        return;
    }

#endif
}

void update_all_1169(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_1169
    update_time_1169(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_1169(temp, icon);
    update_status_1169(battery, connection);
    update_activity_1169(steps, distance, kcal);
    update_health_1169(bpm, oxygen);
#endif
}

void update_check_1169(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_1169
    if (root != face_1169)
    {
        return;
    }
    update_time_1169(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_1169(temp, icon);
    update_status_1169(battery, connection);
    update_activity_1169(steps, distance, kcal);
    update_health_1169(bpm, oxygen);
#endif
}


