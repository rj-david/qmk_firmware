#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define NO_TH ALGR(KC_T)
#define NO_ETH ALGR(KC_D)

enum custom_keycodes {
    RGB_SLD = SAFE_RANGE,  // can always be here
    TOGGLE_LAYER_COLOR,
    EPRM,
    ILOVE_MACRO_1,
    ILOVE_MACRO_2,
    ILOVE_MACRO_3,
    ILOVE_MACRO_4,
    ILOVE_MACRO_A,
    ILOVE_MACRO_C,
    ILOVE_MACRO_D,
    ILOVE_MACRO_I,
    ILOVE_MACRO_P,
    ILOVE_MACRO_R,
    ILOVE_MACRO_W
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ergodox(KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PC_CUT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PC_PASTE, MO(6), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PC_COPY, KC_LCTRL, KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN, KC_LGUI, OSL(1), MO(3), KC_BSPACE, KC_LALT, MO(2), LCTL(KC_C), KC_6, KC_7, KC_8, KC_9, KC_0, MO(5), LCTL(LSFT(KC_P)), KC_Y, KC_U, KC_I, KC_O, KC_P, OSL(1), KC_H, KC_J, KC_K, KC_L, KC_SCOLON, MO(6), LCTL(KC_P), KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, MO(4), KC_GRAVE, KC_QUOTE, KC_LBRACKET, KC_RBRACKET, KC_BSLASH, KC_HOME, KC_END, KC_PGUP, KC_PGDOWN, KC_ENTER, KC_SPACE),

    [1] = LAYOUT_ergodox(KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [2] = LAYOUT_ergodox(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT, KC_MS_BTN3, KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [3] = LAYOUT_ergodox(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [4] = LAYOUT_ergodox(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_1)), LALT(LCTL(KC_2)), LALT(LCTL(KC_3)), LALT(LCTL(KC_4)), LALT(LCTL(KC_5)), KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_6)), LALT(LCTL(KC_7)), LALT(LCTL(LSFT(KC_0))), LALT(LCTL(LSFT(KC_1))), KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_8)), LALT(LCTL(KC_9)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [5] = LAYOUT_ergodox(KC_TRANSPARENT, RGB_MOD, RGB_SLD, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAI, RGB_VAD, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI, RGB_HUD, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [6] = LAYOUT_ergodox(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_X)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_V)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_BSLASH)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_B), LCTL(LSFT(KC_C)), KC_TRANSPARENT, LCTL(KC_LEFT), LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_C), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_P)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_P), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_SLASH)), KC_TRANSPARENT, LCTL(KC_GRAVE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    [7] = LAYOUT_ergodox(KC_TRANSPARENT, ILOVE_MACRO_1, ILOVE_MACRO_2, ILOVE_MACRO_3, ILOVE_MACRO_4, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ILOVE_MACRO_W, KC_TRANSPARENT, ILOVE_MACRO_R, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ILOVE_MACRO_A, KC_TRANSPARENT, ILOVE_MACRO_D, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ILOVE_MACRO_C, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ILOVE_MACRO_I, KC_TRANSPARENT, ILOVE_MACRO_P, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

};

extern bool         g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool                disable_layer_color = 0;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgblight_mode(RGB_MATRIX_SOLID_REACTIVE);
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}, {159, 217, 230}},

    [1] = {{50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {50, 153, 244}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0}, {243, 222, 234}, {32, 176, 255}, {243, 222, 234}, {0, 0, 0}, {243, 222, 234}, {32, 176, 255}, {85, 203, 158}, {32, 176, 255}, {0, 0, 0}, {243, 222, 234}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {134, 255, 213}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {249, 228, 255}, {249, 228, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {0, 0, 0}, {154, 255, 255}, {154, 255, 255}, {35, 255, 255}, {35, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {35, 255, 255}, {35, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [5] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {32, 176, 255}, {32, 176, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {243, 222, 234}, {243, 222, 234}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [6] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {30, 96, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {141, 255, 233}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {33, 255, 255}, {0, 0, 0}, {0, 0, 0}, {14, 255, 255}, {14, 255, 255}},

    [7] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {85, 203, 158}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {134, 255, 213}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB rgb = hsv_to_rgb(hsv);
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (g_suspend_state || disable_layer_color) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        case 6:
            set_layer_color(6);
            break;
        case 7:
            set_layer_color(7);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case EPRM:
            if (record->event.pressed) {
                eeconfig_init();
            }
            return false;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
                if (rgb_matrix_config.val) {
                    rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 0);
                } else {
                    rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 255);
                }
            }
            return false;
        case TOGGLE_LAYER_COLOR:
            if (record->event.pressed) {
                disable_layer_color ^= 1;
            }
            return false;
        case ILOVE_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("git fetch");
            }
            return false;
        case ILOVE_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("git checkout ");
            }
            return false;
        case ILOVE_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("git add -A");
            }
            return false;
        case ILOVE_MACRO_4:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("git commit -m ''");
                SEND_STRING(SS_TAP(X_LEFT));
            }
            return false;
        case ILOVE_MACRO_A:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run android");
            }
            return false;
        case ILOVE_MACRO_C:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run cypress:gui");
            }
            return false;
        case ILOVE_MACRO_D:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run deploy:server");
            }
            return false;
        case ILOVE_MACRO_I:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm install");
            }
            return false;
        case ILOVE_MACRO_P:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run push");
            }
            return false;
        case ILOVE_MACRO_R:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run rebase");
            }
            return false;
        case ILOVE_MACRO_W:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTRL("u"));
                SEND_STRING(SS_LCTRL("k"));
                SEND_STRING("meteor npm run web");
            }
            return false;
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    return state;
};