
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 174

#include "174.h"

#ifdef ENABLE_FACE_174

lv_obj_t *face_174;
lv_obj_t *face_174_0_24536;
lv_obj_t *face_174_1_10295;
lv_obj_t *face_174_2_14700;
lv_obj_t *face_174_3_6727;
lv_obj_t *face_174_5_13203;
lv_obj_t *face_174_7_14138;
lv_obj_t *face_174_9_2783;
lv_obj_t *face_174_11_9921;
lv_obj_t *face_174_13_24092;
lv_obj_t *face_174_14_3087;
lv_obj_t *face_174_15_3087;
lv_obj_t *face_174_16_3087;
lv_obj_t *face_174_17_3087;
lv_obj_t *face_174_18_3087;
lv_obj_t *face_174_19_3087;
lv_obj_t *face_174_20_3087;
lv_obj_t *face_174_21_3087;
lv_obj_t *face_174_22_3087;
lv_obj_t *face_174_23_3087;
lv_obj_t *face_174_24_3087;
lv_obj_t *face_174_25_3087;
lv_obj_t *face_174_26_4291;
lv_obj_t *face_174_27_4291;
lv_obj_t *face_174_28_6485;
lv_obj_t *face_174_29_4291;
lv_obj_t *face_174_30_4291;
lv_obj_t *face_174_31_27414;
lv_obj_t *face_174_32_27414;
lv_obj_t *face_174_33_66968;
lv_obj_t *face_174_34_66968;
lv_obj_t *face_174_36_124040;


#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit for watchfaces"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 for watchfaces"
#endif


const lv_img_dsc_t *face_174_dial_img_4_744_group[] = {
	&face_174_dial_img_4_744_0,
	&face_174_dial_img_4_744_1,
};
const lv_img_dsc_t *face_174_dial_img_5_13203_group[] = {
	&face_174_dial_img_5_13203_0,
	&face_174_dial_img_5_13203_1,
};
const lv_img_dsc_t *face_174_dial_img_6_1679_group[] = {
	&face_174_dial_img_6_1679_0,
	&face_174_dial_img_6_1679_1,
};
const lv_img_dsc_t *face_174_dial_img_7_14138_group[] = {
	&face_174_dial_img_7_14138_0,
	&face_174_dial_img_7_14138_1,
};
const lv_img_dsc_t *face_174_dial_img_14_3087_group[] = {
	&face_174_dial_img_14_3087_0,
	&face_174_dial_img_14_3087_1,
	&face_174_dial_img_14_3087_2,
	&face_174_dial_img_14_3087_3,
	&face_174_dial_img_14_3087_4,
	&face_174_dial_img_14_3087_5,
	&face_174_dial_img_14_3087_6,
	&face_174_dial_img_14_3087_7,
	&face_174_dial_img_14_3087_8,
	&face_174_dial_img_14_3087_9,
};
const lv_img_dsc_t *face_174_dial_img_26_4291_group[] = {
	&face_174_dial_img_26_4291_0,
	&face_174_dial_img_26_4291_1,
	&face_174_dial_img_26_4291_2,
	&face_174_dial_img_26_4291_3,
	&face_174_dial_img_26_4291_4,
	&face_174_dial_img_26_4291_5,
	&face_174_dial_img_26_4291_6,
	&face_174_dial_img_26_4291_7,
	&face_174_dial_img_26_4291_8,
	&face_174_dial_img_26_4291_9,
};
const lv_img_dsc_t *face_174_dial_img_31_27414_group[] = {
	&face_174_dial_img_31_27414_0,
	&face_174_dial_img_31_27414_1,
	&face_174_dial_img_31_27414_2,
	&face_174_dial_img_31_27414_3,
	&face_174_dial_img_31_27414_4,
	&face_174_dial_img_31_27414_5,
	&face_174_dial_img_31_27414_6,
	&face_174_dial_img_31_27414_7,
	&face_174_dial_img_31_27414_8,
	&face_174_dial_img_31_27414_9,
};
const lv_img_dsc_t *face_174_dial_img_33_66968_group[] = {
	&face_174_dial_img_33_66968_0,
	&face_174_dial_img_33_66968_1,
	&face_174_dial_img_33_66968_2,
	&face_174_dial_img_33_66968_3,
	&face_174_dial_img_33_66968_4,
	&face_174_dial_img_33_66968_5,
	&face_174_dial_img_33_66968_6,
	&face_174_dial_img_33_66968_7,
	&face_174_dial_img_33_66968_8,
	&face_174_dial_img_33_66968_9,
};
const lv_img_dsc_t *face_174_dial_img_35_117538_group[] = {
	&face_174_dial_img_35_117538_0,
	&face_174_dial_img_35_117538_1,
	&face_174_dial_img_35_117538_2,
	&face_174_dial_img_35_117538_3,
	&face_174_dial_img_35_117538_4,
	&face_174_dial_img_35_117538_5,
	&face_174_dial_img_35_117538_6,
};
const lv_img_dsc_t *face_174_dial_img_36_124040_group[] = {
	&face_174_dial_img_36_124040_0,
	&face_174_dial_img_36_124040_1,
	&face_174_dial_img_36_124040_2,
	&face_174_dial_img_36_124040_3,
	&face_174_dial_img_36_124040_4,
	&face_174_dial_img_36_124040_5,
	&face_174_dial_img_36_124040_6,
};


#endif

void init_face_174(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **)){
#ifdef ENABLE_FACE_174
    face_174 = lv_obj_create(NULL);
    lv_obj_clear_flag(face_174, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(face_174, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(face_174, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(face_174, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(face_174, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(face_174, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(face_174, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(face_174, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

    lv_obj_add_event_cb(face_174, onFaceEvent, LV_EVENT_ALL, NULL);

    
    face_174_0_24536 = lv_img_create(face_174);
    lv_img_set_src(face_174_0_24536, &face_174_dial_img_0_24536_0);
    lv_obj_set_width(face_174_0_24536, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_0_24536, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_0_24536, 11);
    lv_obj_set_y(face_174_0_24536, 94);
    lv_obj_add_flag(face_174_0_24536, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_0_24536, LV_OBJ_FLAG_SCROLLABLE );

    face_174_1_10295 = lv_img_create(face_174);
    lv_img_set_src(face_174_1_10295, &face_174_dial_img_1_10295_0);
    lv_obj_set_width(face_174_1_10295, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_1_10295, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_1_10295, 11);
    lv_obj_set_y(face_174_1_10295, 164);
    lv_obj_add_flag(face_174_1_10295, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_1_10295, LV_OBJ_FLAG_SCROLLABLE );

    face_174_2_14700 = lv_img_create(face_174);
    lv_img_set_src(face_174_2_14700, &face_174_dial_img_2_14700_0);
    lv_obj_set_width(face_174_2_14700, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_2_14700, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_2_14700, 11);
    lv_obj_set_y(face_174_2_14700, 231);
    lv_obj_add_flag(face_174_2_14700, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_2_14700, LV_OBJ_FLAG_SCROLLABLE );

    face_174_3_6727 = lv_img_create(face_174);
    lv_img_set_src(face_174_3_6727, &face_174_dial_img_3_6727_0);
    lv_obj_set_width(face_174_3_6727, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_3_6727, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_3_6727, 11);
    lv_obj_set_y(face_174_3_6727, 25);
    lv_obj_add_flag(face_174_3_6727, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_3_6727, LV_OBJ_FLAG_SCROLLABLE );

    face_174_5_13203 = lv_img_create(face_174);
    lv_img_set_src(face_174_5_13203, &face_174_dial_img_5_13203_0);
    lv_obj_set_width(face_174_5_13203, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_5_13203, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_5_13203, 94);
    lv_obj_set_y(face_174_5_13203, 241);
    lv_obj_add_flag(face_174_5_13203, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_5_13203, LV_OBJ_FLAG_SCROLLABLE );

    face_174_7_14138 = lv_img_create(face_174);
    lv_img_set_src(face_174_7_14138, &face_174_dial_img_7_14138_0);
    lv_obj_set_width(face_174_7_14138, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_7_14138, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_7_14138, 94);
    lv_obj_set_y(face_174_7_14138, 246);
    lv_obj_add_flag(face_174_7_14138, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_7_14138, LV_OBJ_FLAG_SCROLLABLE );

    face_174_9_2783 = lv_img_create(face_174);
    lv_img_set_src(face_174_9_2783, &face_174_dial_img_9_2783_0);
    lv_obj_set_width(face_174_9_2783, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_9_2783, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_9_2783, 79);
    lv_obj_set_y(face_174_9_2783, 36);
    lv_obj_add_flag(face_174_9_2783, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_9_2783, LV_OBJ_FLAG_SCROLLABLE );

    face_174_11_9921 = lv_img_create(face_174);
    lv_img_set_src(face_174_11_9921, &face_174_dial_img_11_9921_0);
    lv_obj_set_width(face_174_11_9921, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_11_9921, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_11_9921, 75);
    lv_obj_set_y(face_174_11_9921, 171);
    lv_obj_add_flag(face_174_11_9921, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_11_9921, LV_OBJ_FLAG_SCROLLABLE );

    face_174_13_24092 = lv_img_create(face_174);
    lv_img_set_src(face_174_13_24092, &face_174_dial_img_13_24092_0);
    lv_obj_set_width(face_174_13_24092, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_13_24092, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_13_24092, 72);
    lv_obj_set_y(face_174_13_24092, 109);
    lv_obj_add_flag(face_174_13_24092, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_13_24092, LV_OBJ_FLAG_SCROLLABLE );

    face_174_14_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_14_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_14_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_14_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_14_3087, 97);
    lv_obj_set_y(face_174_14_3087, 56);
    lv_obj_add_flag(face_174_14_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_14_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_15_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_15_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_15_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_15_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_15_3087, 88);
    lv_obj_set_y(face_174_15_3087, 56);
    lv_obj_add_flag(face_174_15_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_15_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_16_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_16_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_16_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_16_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_16_3087, 79);
    lv_obj_set_y(face_174_16_3087, 56);
    lv_obj_add_flag(face_174_16_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_16_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_17_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_17_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_17_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_17_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_17_3087, 101);
    lv_obj_set_y(face_174_17_3087, 191);
    lv_obj_add_flag(face_174_17_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_17_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_18_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_18_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_18_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_18_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_18_3087, 92);
    lv_obj_set_y(face_174_18_3087, 191);
    lv_obj_add_flag(face_174_18_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_18_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_19_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_19_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_19_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_19_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_19_3087, 83);
    lv_obj_set_y(face_174_19_3087, 191);
    lv_obj_add_flag(face_174_19_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_19_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_20_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_20_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_20_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_20_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_20_3087, 74);
    lv_obj_set_y(face_174_20_3087, 191);
    lv_obj_add_flag(face_174_20_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_20_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_21_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_21_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_21_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_21_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_21_3087, 106);
    lv_obj_set_y(face_174_21_3087, 128);
    lv_obj_add_flag(face_174_21_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_21_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_22_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_22_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_22_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_22_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_22_3087, 97);
    lv_obj_set_y(face_174_22_3087, 128);
    lv_obj_add_flag(face_174_22_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_22_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_23_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_23_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_23_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_23_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_23_3087, 88);
    lv_obj_set_y(face_174_23_3087, 128);
    lv_obj_add_flag(face_174_23_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_23_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_24_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_24_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_24_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_24_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_24_3087, 79);
    lv_obj_set_y(face_174_24_3087, 128);
    lv_obj_add_flag(face_174_24_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_24_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_25_3087 = lv_img_create(face_174);
    lv_img_set_src(face_174_25_3087, &face_174_dial_img_14_3087_0);
    lv_obj_set_width(face_174_25_3087, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_25_3087, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_25_3087, 70);
    lv_obj_set_y(face_174_25_3087, 128);
    lv_obj_add_flag(face_174_25_3087, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_25_3087, LV_OBJ_FLAG_SCROLLABLE );

    face_174_26_4291 = lv_img_create(face_174);
    lv_img_set_src(face_174_26_4291, &face_174_dial_img_26_4291_0);
    lv_obj_set_width(face_174_26_4291, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_26_4291, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_26_4291, 158);
    lv_obj_set_y(face_174_26_4291, 244);
    lv_obj_add_flag(face_174_26_4291, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_26_4291, LV_OBJ_FLAG_SCROLLABLE );

    face_174_27_4291 = lv_img_create(face_174);
    lv_img_set_src(face_174_27_4291, &face_174_dial_img_26_4291_0);
    lv_obj_set_width(face_174_27_4291, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_27_4291, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_27_4291, 146);
    lv_obj_set_y(face_174_27_4291, 244);
    lv_obj_add_flag(face_174_27_4291, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_27_4291, LV_OBJ_FLAG_SCROLLABLE );

    face_174_28_6485 = lv_img_create(face_174);
    lv_img_set_src(face_174_28_6485, &face_174_dial_img_28_6485_0);
    lv_obj_set_width(face_174_28_6485, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_28_6485, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_28_6485, 170);
    lv_obj_set_y(face_174_28_6485, 243);
    lv_obj_add_flag(face_174_28_6485, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_28_6485, LV_OBJ_FLAG_SCROLLABLE );

    face_174_29_4291 = lv_img_create(face_174);
    lv_img_set_src(face_174_29_4291, &face_174_dial_img_26_4291_0);
    lv_obj_set_width(face_174_29_4291, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_29_4291, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_29_4291, 192);
    lv_obj_set_y(face_174_29_4291, 244);
    lv_obj_add_flag(face_174_29_4291, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_29_4291, LV_OBJ_FLAG_SCROLLABLE );

    face_174_30_4291 = lv_img_create(face_174);
    lv_img_set_src(face_174_30_4291, &face_174_dial_img_26_4291_0);
    lv_obj_set_width(face_174_30_4291, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_30_4291, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_30_4291, 180);
    lv_obj_set_y(face_174_30_4291, 244);
    lv_obj_add_flag(face_174_30_4291, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_30_4291, LV_OBJ_FLAG_SCROLLABLE );

    face_174_31_27414 = lv_img_create(face_174);
    lv_img_set_src(face_174_31_27414, &face_174_dial_img_31_27414_0);
    lv_obj_set_width(face_174_31_27414, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_31_27414, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_31_27414, 178);
    lv_obj_set_y(face_174_31_27414, 27);
    lv_obj_add_flag(face_174_31_27414, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_31_27414, LV_OBJ_FLAG_SCROLLABLE );

    face_174_32_27414 = lv_img_create(face_174);
    lv_img_set_src(face_174_32_27414, &face_174_dial_img_31_27414_0);
    lv_obj_set_width(face_174_32_27414, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_32_27414, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_32_27414, 126);
    lv_obj_set_y(face_174_32_27414, 27);
    lv_obj_add_flag(face_174_32_27414, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_32_27414, LV_OBJ_FLAG_SCROLLABLE );

    face_174_33_66968 = lv_img_create(face_174);
    lv_img_set_src(face_174_33_66968, &face_174_dial_img_33_66968_0);
    lv_obj_set_width(face_174_33_66968, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_33_66968, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_33_66968, 176);
    lv_obj_set_y(face_174_33_66968, 130);
    lv_obj_add_flag(face_174_33_66968, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_33_66968, LV_OBJ_FLAG_SCROLLABLE );

    face_174_34_66968 = lv_img_create(face_174);
    lv_img_set_src(face_174_34_66968, &face_174_dial_img_33_66968_0);
    lv_obj_set_width(face_174_34_66968, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_34_66968, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_34_66968, 116);
    lv_obj_set_y(face_174_34_66968, 130);
    lv_obj_add_flag(face_174_34_66968, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_34_66968, LV_OBJ_FLAG_SCROLLABLE );

    face_174_36_124040 = lv_img_create(face_174);
    lv_img_set_src(face_174_36_124040, &face_174_dial_img_36_124040_0);
    lv_obj_set_width(face_174_36_124040, LV_SIZE_CONTENT);
    lv_obj_set_height(face_174_36_124040, LV_SIZE_CONTENT);
    lv_obj_set_x(face_174_36_124040, 31);
    lv_obj_set_y(face_174_36_124040, 245);
    lv_obj_add_flag(face_174_36_124040, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_174_36_124040, LV_OBJ_FLAG_SCROLLABLE );


    callback("174", &face_174_dial_img_preview_0, &face_174);

#endif
}

void update_time_174(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday)
{
#ifdef ENABLE_FACE_174
    if (!face_174)
    {
        return;
    }
	if (mode)
	{
		lv_obj_add_flag(face_174_5_13203, LV_OBJ_FLAG_HIDDEN);
	} else {
		lv_obj_clear_flag(face_174_5_13203, LV_OBJ_FLAG_HIDDEN);
	}
	lv_img_set_src(face_174_5_13203, face_174_dial_img_5_13203_group[(am ? 0 : 1) % 2]);
	if (mode)
	{
		lv_obj_add_flag(face_174_7_14138, LV_OBJ_FLAG_HIDDEN);
	} else {
		lv_obj_clear_flag(face_174_7_14138, LV_OBJ_FLAG_HIDDEN);
	}
	lv_img_set_src(face_174_7_14138, face_174_dial_img_7_14138_group[(am ? 0 : 1) % 2]);
	lv_img_set_src(face_174_26_4291, face_174_dial_img_26_4291_group[(month / 1) % 10]);
	lv_img_set_src(face_174_27_4291, face_174_dial_img_26_4291_group[(month / 10) % 10]);
	lv_img_set_src(face_174_29_4291, face_174_dial_img_26_4291_group[(day / 1) % 10]);
	lv_img_set_src(face_174_30_4291, face_174_dial_img_26_4291_group[(day / 10) % 10]);
	lv_img_set_src(face_174_31_27414, face_174_dial_img_31_27414_group[(hour / 1) % 10]);
	lv_img_set_src(face_174_32_27414, face_174_dial_img_31_27414_group[(hour / 10) % 10]);
	lv_img_set_src(face_174_33_66968, face_174_dial_img_33_66968_group[(minute / 1) % 10]);
	lv_img_set_src(face_174_34_66968, face_174_dial_img_33_66968_group[(minute / 10) % 10]);
	lv_img_set_src(face_174_36_124040, face_174_dial_img_36_124040_group[((weekday + 6) / 1) % 7]);

#endif
}

void update_weather_174(int temp, int icon)
{
#ifdef ENABLE_FACE_174
    if (!face_174)
    {
        return;
    }

#endif
}

void update_status_174(int battery, bool connection){
#ifdef ENABLE_FACE_174
    if (!face_174)
    {
        return;
    }

#endif
}

void update_activity_174(int steps, int distance, int kcal)
{
#ifdef ENABLE_FACE_174
    if (!face_174)
    {
        return;
    }
	lv_img_set_src(face_174_17_3087, face_174_dial_img_14_3087_group[(kcal / 1) % 10]);
	lv_img_set_src(face_174_18_3087, face_174_dial_img_14_3087_group[(kcal / 10) % 10]);
	lv_img_set_src(face_174_19_3087, face_174_dial_img_14_3087_group[(kcal / 100) % 10]);
	lv_img_set_src(face_174_20_3087, face_174_dial_img_14_3087_group[(kcal / 1000) % 10]);
	lv_img_set_src(face_174_21_3087, face_174_dial_img_14_3087_group[(steps / 1) % 10]);
	lv_img_set_src(face_174_22_3087, face_174_dial_img_14_3087_group[(steps / 10) % 10]);
	lv_img_set_src(face_174_23_3087, face_174_dial_img_14_3087_group[(steps / 100) % 10]);
	lv_img_set_src(face_174_24_3087, face_174_dial_img_14_3087_group[(steps / 1000) % 10]);
	lv_img_set_src(face_174_25_3087, face_174_dial_img_14_3087_group[(steps / 10000) % 10]);

#endif
}

void update_health_174(int bpm, int oxygen)
{
#ifdef ENABLE_FACE_174
    if (!face_174)
    {
        return;
    }
	lv_img_set_src(face_174_14_3087, face_174_dial_img_14_3087_group[(bpm / 1) % 10]);
	lv_img_set_src(face_174_15_3087, face_174_dial_img_14_3087_group[(bpm / 10) % 10]);
	lv_img_set_src(face_174_16_3087, face_174_dial_img_14_3087_group[(bpm / 100) % 10]);

#endif
}

void update_all_174(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_174
    update_time_174(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_174(temp, icon);
    update_status_174(battery, connection);
    update_activity_174(steps, distance, kcal);
    update_health_174(bpm, oxygen);
#endif
}

void update_check_174(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_174
    if (root != face_174)
    {
        return;
    }
    update_time_174(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_174(temp, icon);
    update_status_174(battery, connection);
    update_activity_174(steps, distance, kcal);
    update_health_174(bpm, oxygen);
#endif
}


