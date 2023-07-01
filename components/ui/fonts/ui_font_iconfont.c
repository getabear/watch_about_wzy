/*******************************************************************************
 * Size: 32 px
 * Bpp: 4
 * Opts: --bpp 4 --size 32 --font D:\Projects\esp32idf\project\UI\assets\iconfont.ttf -o D:\Projects\esp32idf\project\UI\assets\ui_font_iconfont.c --format lvgl -r 0xe66c -r 0xe689 -r 0xe609 -r 0xe620 -r 0xe66b --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ICONFONT
#define UI_FONT_ICONFONT 1
#endif

#if UI_FONT_ICONFONT

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E609 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0xff, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x0,
    0x1, 0xef, 0x65, 0xff, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xf6, 0x0, 0xb, 0xfa,
    0x0, 0x9f, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0x30, 0x6f, 0xd0, 0x0, 0xc,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xbf, 0xe3, 0xff, 0x30, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xf9, 0xb, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xd0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0x30, 0x0, 0xef, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xf9, 0x0,
    0x8, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xc0, 0x0, 0x0, 0x4f, 0xe0, 0x0, 0x1f, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xf6, 0x0,
    0x0, 0xdf, 0x50, 0x0, 0x8b, 0xc, 0xdb, 0x71,
    0x0, 0x0, 0x0, 0x3, 0xfe, 0x0, 0x5, 0xfc,
    0x0, 0x0, 0xe0, 0xdf, 0xff, 0xff, 0x60, 0x0,
    0x0, 0x0, 0xbf, 0x60, 0xc, 0xf5, 0x0, 0x6,
    0x95, 0xff, 0xff, 0xff, 0xfc, 0x20, 0x0, 0x0,
    0x4f, 0xd0, 0x2f, 0xe0, 0x0, 0xb, 0x4b, 0xff,
    0xff, 0xff, 0xff, 0xf9, 0x30, 0x0, 0xd, 0xf2,
    0x6f, 0x90, 0x0, 0xe, 0x5f, 0xff, 0xff, 0xf9,
    0xdf, 0xff, 0xfe, 0xba, 0xa1, 0xa6, 0x7f, 0x70,
    0x0, 0xe, 0xcf, 0xff, 0xff, 0xc0, 0x4f, 0xff,
    0xff, 0xff, 0xf9, 0x78, 0x6f, 0x90, 0x0, 0xf,
    0xbf, 0xff, 0xff, 0xa0, 0x5f, 0xff, 0xff, 0xff,
    0xf8, 0x77, 0x3f, 0xd0, 0x0, 0xd, 0x7f, 0xff,
    0xff, 0x60, 0x8f, 0xff, 0xff, 0xff, 0xf6, 0xa5,
    0xe, 0xf4, 0x0, 0xa, 0xf, 0xff, 0xfe, 0x0,
    0xdf, 0xff, 0xff, 0xff, 0xf1, 0xe1, 0x6, 0xfe,
    0x10, 0x4, 0xbf, 0xff, 0xf3, 0x5, 0xff, 0xff,
    0xff, 0xff, 0x94, 0xc0, 0x0, 0xaf, 0xe3, 0x0,
    0xc3, 0xff, 0xfa, 0x4f, 0xff, 0xff, 0xff, 0xfd,
    0xd, 0x40, 0x0, 0xa, 0xff, 0xc7, 0x8f, 0x9,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x99, 0x0,
    0x0, 0x0, 0x6e, 0xff, 0xff, 0xf4, 0xdf, 0xff,
    0xff, 0xff, 0xff, 0x85, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x47, 0x88, 0xae, 0x3f, 0xff, 0xff, 0xff,
    0xfd, 0x2a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xbb, 0x7, 0xbc, 0xb6, 0x1a, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x7b, 0xdd, 0xc9, 0x50, 0x0, 0x0, 0x0,

    /* U+E620 "" */
    0x0, 0x0, 0x3, 0xcf, 0xe6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xa0, 0x0, 0x0, 0x42, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xf2,
    0x0, 0x1d, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xf6, 0x0, 0x8b, 0x8,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xf7, 0x1, 0xf3, 0x0, 0xe7, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xf7, 0x8,
    0xb0, 0x0, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xf7, 0x8, 0x30, 0x0, 0x1f,
    0x60, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0x8, 0xe0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x1, 0xf6, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x9d,
    0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xd0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x2, 0xf5,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xad, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x50, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xb0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xf0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xf1, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x52, 0x1, 0xf0, 0x6,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0xd5, 0x2, 0xf0, 0xe, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x1, 0xf3, 0x4,
    0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x0, 0x8, 0xd0, 0x8, 0xa0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0x7f,
    0x40, 0xe, 0x50, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x20, 0x2e, 0xe4, 0x0, 0x7d, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x4, 0x0, 0x3, 0xf4, 0x0, 0xa, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x4f,
    0x70, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf1, 0x0, 0x1, 0x4a, 0xf6, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0x40, 0xa, 0xff,
    0xfa, 0x20, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xf2, 0x0, 0x1, 0x32, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x58, 0x61, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+E66B "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4, 0x9d, 0xff, 0xff, 0xea, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0xff,
    0xb8, 0x66, 0x8a, 0xff, 0xd5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xe5, 0x0, 0x8, 0xb0,
    0x0, 0x5d, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0x80, 0x0, 0x0, 0xff, 0x30, 0x0, 0x6,
    0xfd, 0x10, 0x0, 0x0, 0x0, 0xbf, 0x50, 0x0,
    0x0, 0x6, 0x80, 0x0, 0x0, 0x4, 0xfc, 0x0,
    0x0, 0x0, 0x8f, 0x60, 0x31, 0x0, 0x2, 0x44,
    0x20, 0x0, 0x0, 0x4, 0xfa, 0x0, 0x0, 0x2f,
    0x90, 0x6f, 0xd1, 0x5c, 0xff, 0xff, 0xe7, 0x0,
    0x0, 0x7, 0xf3, 0x0, 0xa, 0xf1, 0x5, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x10, 0x0, 0xe,
    0xc0, 0x1, 0xf8, 0x0, 0x8, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x6f, 0x30, 0x6f,
    0x30, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x1, 0xf8, 0xa, 0xe0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0xc, 0xc0, 0xcb, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x65, 0x30, 0x0, 0x9e, 0xe,
    0xac, 0xf2, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x8, 0x2e, 0xd8, 0xf0, 0xea, 0xdf, 0x33,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x13, 0x10,
    0xff, 0x8f, 0xd, 0xb0, 0x20, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf5, 0x1, 0x19, 0xf0,
    0xad, 0x0, 0x0, 0xdf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x10, 0x0, 0xbc, 0x7, 0xf2, 0x0,
    0x6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0,
    0x0, 0xf, 0x90, 0x2f, 0x70, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe1, 0x0, 0x5, 0xf4,
    0x0, 0xbe, 0x0, 0x0, 0x1c, 0xff, 0xff, 0xff,
    0xff, 0xe3, 0x0, 0x0, 0xdd, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x7, 0xef, 0xff, 0xff, 0x91, 0x0,
    0x0, 0x6f, 0x50, 0x0, 0x9, 0xf4, 0x0, 0x0,
    0x0, 0x46, 0x64, 0x10, 0x0, 0x0, 0x3f, 0xb0,
    0x0, 0x0, 0xc, 0xe3, 0x0, 0x0, 0x0, 0x46,
    0x0, 0x0, 0x0, 0x2e, 0xe1, 0x0, 0x0, 0x0,
    0x1d, 0xf5, 0x0, 0x0, 0xf, 0xf3, 0x0, 0x0,
    0x4e, 0xe2, 0x0, 0x0, 0x0, 0x0, 0x1b, 0xfc,
    0x30, 0x0, 0xad, 0x0, 0x2, 0xbf, 0xc1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xef, 0xd9, 0x64,
    0x46, 0x8d, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6b, 0xff, 0xff, 0xff, 0xc7,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x23, 0x32, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+E66C "" */
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x10, 0x0,
    0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0xde,
    0x20, 0x0, 0xdf, 0x20, 0x0, 0xde, 0x0, 0x0,
    0x0, 0x4, 0xcf, 0xe0, 0xa, 0xff, 0xe0, 0x9,
    0xff, 0xf0, 0xc, 0xfe, 0x70, 0x4, 0xff, 0xfe,
    0x0, 0xaf, 0xff, 0x0, 0xaf, 0xff, 0x0, 0xdf,
    0xff, 0x80, 0xcf, 0xff, 0xf4, 0x2e, 0xff, 0xf4,
    0x1d, 0xff, 0xf4, 0x2f, 0xff, 0xff, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x4f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0xf9, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8e,
    0x4f, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc4, 0xf1, 0x0, 0x0,
    0x1, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x4f, 0x10, 0x0, 0xa, 0xff, 0x0, 0x0,
    0x7e, 0xff, 0xb1, 0x0, 0x0, 0xc4, 0xf1, 0x0,
    0x9, 0xff, 0xf0, 0x0, 0x7f, 0xfc, 0xef, 0xd0,
    0x0, 0xc, 0x4f, 0x10, 0x6e, 0xff, 0xff, 0x0,
    0xd, 0xfd, 0x3, 0xff, 0x40, 0x0, 0xc4, 0xf1,
    0xa, 0xfb, 0xef, 0xf0, 0x0, 0xff, 0x90, 0xf,
    0xf7, 0x0, 0xc, 0x4f, 0x10, 0x64, 0xd, 0xff,
    0x0, 0x1f, 0xf8, 0x0, 0xef, 0x80, 0x0, 0xc4,
    0xf1, 0x0, 0x0, 0xdf, 0xf0, 0x1, 0xff, 0x90,
    0xe, 0xf9, 0x0, 0xc, 0x4f, 0x10, 0x0, 0xd,
    0xff, 0x0, 0xf, 0xfa, 0x0, 0xff, 0x70, 0x0,
    0xc4, 0xf1, 0x0, 0x0, 0xdf, 0xf0, 0x0, 0xcf,
    0xe1, 0x4f, 0xf4, 0x0, 0xc, 0x4f, 0x10, 0x0,
    0xd, 0xff, 0x0, 0x4, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0xc4, 0xf1, 0x0, 0x0, 0xac, 0xb0, 0x0,
    0x5, 0xce, 0xd9, 0x10, 0x0, 0xc, 0x4f, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc4, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x4e,
    0x40, 0x0, 0x2c, 0xdd, 0x90, 0x0, 0x2, 0xcd,
    0xdb, 0x0, 0x0, 0xe3, 0x8d, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xac,
    0x0, 0x9f, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xfc, 0x10, 0x0, 0x13, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32,
    0x0, 0x0,

    /* U+E689 "" */
    0x0, 0x0, 0x1, 0x77, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0xeb, 0x0, 0x8f, 0x10, 0x0, 0x0, 0x2, 0xf4,
    0x0, 0xf, 0x50, 0x0, 0x0, 0x4, 0xff, 0xf8,
    0xf, 0x50, 0x0, 0x0, 0x3, 0xfa, 0x73, 0xf,
    0x50, 0x0, 0x0, 0x3, 0xfa, 0x66, 0x6f, 0x60,
    0x0, 0x0, 0x4, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x50, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x60, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x3, 0xf3, 0x1,
    0x1f, 0x70, 0x0, 0x0, 0x3, 0xcc, 0xff, 0xf5,
    0x50, 0x0, 0x0, 0x3, 0xcc, 0xff, 0xf5, 0x50,
    0x0, 0x0, 0x3, 0xcc, 0xff, 0xf5, 0x50, 0x0,
    0x0, 0x3, 0xcc, 0xff, 0xf5, 0x50, 0x0, 0x0,
    0x3, 0xcc, 0xff, 0xf5, 0x50, 0x0, 0x0, 0x3,
    0xcc, 0xff, 0xf5, 0x50, 0x0, 0x0, 0x1b, 0xad,
    0xff, 0xf0, 0x92, 0x0, 0x0, 0xd6, 0xaf, 0xff,
    0xfc, 0x27, 0x10, 0xa, 0x3d, 0xa3, 0xef, 0xff,
    0xe2, 0x90, 0x1b, 0x9a, 0x5, 0xff, 0xff, 0xfb,
    0x73, 0x65, 0xf2, 0x5f, 0xff, 0xff, 0xff, 0x38,
    0x80, 0xe0, 0xbf, 0xff, 0xff, 0x6e, 0xa, 0x85,
    0xe0, 0xaf, 0xff, 0xfe, 0xc, 0x9, 0x5c, 0xe2,
    0x4f, 0xff, 0xf7, 0xe, 0x37, 0xe, 0x5b, 0x3,
    0xab, 0x50, 0x98, 0xc1, 0x7, 0x7a, 0xb2, 0x0,
    0x19, 0xb6, 0x90, 0x0, 0xaa, 0x5d, 0xed, 0xd6,
    0x7a, 0x0, 0x0, 0x6, 0xd8, 0x64, 0x5d, 0x70,
    0x0, 0x0, 0x0, 0x4, 0x67, 0x40, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 512, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 392, .adv_w = 512, .box_w = 26, .box_h = 30, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 782, .adv_w = 512, .box_w = 27, .box_h = 28, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1160, .adv_w = 512, .box_w = 25, .box_h = 27, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 1498, .adv_w = 512, .box_w = 14, .box_h = 32, .ofs_x = 9, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x17, 0x62, 0x63, 0x80
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58889, .range_length = 129, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_iconfont = {
#else
lv_font_t ui_font_iconfont = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 32,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ICONFONT*/

