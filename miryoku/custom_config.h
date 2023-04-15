// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_CLIPBOARD_WIN
//#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(MAGIC,  "Magic")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_MAGIC  10
#define U_GAME   11

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MAGIC MIRYOKU_MAPPING

#if defined (MIRYOKU_KEYBOARD_GLOVE80)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_GLOVE80( \
     K00, K01, K02, K03, K04,                                    K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                    K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                    K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                    K35, K36, K37, N38, N39 \
) \
&kp F1   &kp F2   &kp F3   &kp F4   &kp F5                                           &kp F6   &kp F7   &kp F8   &kp F9   &kp F10 \
&kp KP_N1  &kp KP_N2  &kp KP_N3  &kp KP_N4  &kp KP_N5                                &kp KP_N6  &kp KP_N7  &kp KP_N8  &kp KP_N9  &kp KP_N0 \
&kp TAB  K00  K01  K02  K03  K04                                     K05  K06  K07  K08  K09  &kp BSLH \
&kp ESC  K10  K11  K12  K13  K14                                     K15  K16  K17  K18  K19  &kp APOS \
&kp GRAVE K20  K21  K22  K23  K24  &kp LSHFT  &kp LCTRL  &kp LALT       &kp RALT  &kp RCTRL  &kp RSHFT K25  K26  K27  K28  K29  XXX \
&magic  XXX  XXX  XXX  XXX       K33  K32  K34       K35  K37  K36       XXX  XXX  XXX  XXX  XXX

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,                                    K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                    K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                    K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                    K35, K36, K37, N38, N39 \
) \
&kp F1   &kp F2   &kp F3   &kp F4   &kp F5                                           &kp F6   &kp F7   &kp F8   &kp F9   &kp F10 \
&kp KP_N1  &kp KP_N2  &kp KP_N3  &kp KP_N4  &kp KP_N5                                &kp KP_N6  &kp KP_N7  &kp KP_N8  &kp KP_N9  &kp KP_N0 \
&kp TAB  &kp TAB  K00  K01  K02  K03  K04                                     K05  K06  K07  K08  K09  \
&kp ESC  &kp LSHFT  K10  K11  K12  K13  K14                                     K15  K16  K17  K18  K19 \
&kp GRAVE  &kp LCTRL  K20  K21  K22  K23  K24  &kp LSHFT  &kp LCTRL  &kp LALT       &kp RALT  &kp RCTRL  &kp RSHFT K25  K26  K27  K28  K29  \
&magic  XXX  XXX  XXX  XXX       K33  K32  K34       K35  K37  K36       XXX  XXX  XXX  XXX  XXX

#define MIRYOKU_LAYERMAPPING_MAGIC( \
     K00, K01, K02, K03, K04,                                    K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                    K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                    K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                    K35, K36, K37, N38, N39 \
) \
&bt BT_CLR            &none            &none            &none            &none                                                                                  &none   &none   &none   &none  &bt BT_CLR_ALL \
&none            &to U_BASE      &to U_GAME     &none            &none                                                         &none   &none   &none   &none   &none           &none \
&trans  &rgb_ug RGB_SPI  &rgb_ug RGB_SAI  &rgb_ug RGB_HUI  &rgb_ug RGB_BRI  &rgb_ug RGB_TOG                                                         &none   &none   &none   &none   &none           &none \
&bootloader  &rgb_ug RGB_SPD  &rgb_ug RGB_SAD  &rgb_ug RGB_HUD  &rgb_ug RGB_BRD  &rgb_ug RGB_EFF                                                         &none   &none   &none   &none   &none     &bootloader \
&reset            &none            &none            &none            &none            &none   &bt_2   &bt_3         &none   &none   &none   &none   &none   &none   &none   &none   &none          &reset \
&none            &none            &none            &none            &none                    &bt_0   &bt_1  &out OUT_USB   &none   &none   &none           &none   &none   &none   &none           &none

#endif
