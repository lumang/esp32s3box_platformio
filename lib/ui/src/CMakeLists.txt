SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_kapigongde2_png.c
    images/ui_img_kapigongde1_png.c
    images/ui_img_keyboard2_png.c
    images/kapiwork.c
    fonts/ui_font_clock.c
    fonts/ui_font_clock2.c
    fonts/ui_font_fans.c
    fonts/ui_font_gongde.c
    fonts/ui_font_market.c
    fonts/ui_font_weatherWatch.c)

add_library(ui ${SOURCES})
