SET(SOURCES screens/ui_Screen1.c
    ui.c
    ui_helpers.c
    images/ui_img_wzy_png.c
    fonts/ui_font_day.c
    contentChange.c)

idf_component_register(SRCS ${SOURCES}
                            INCLUDE_DIRS "."
                            REQUIRES lvgl)
