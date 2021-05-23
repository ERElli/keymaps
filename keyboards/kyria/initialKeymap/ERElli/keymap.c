/* Copyright 2021 Eric Roy Elli <EricRoy.Elli@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#ifdef ENCODER_ENABLE
    #include "encoder_util.h"
#endif

#ifdef OLED_DRIVER_ENABLE
    #include "oled_util.h"
#endif

#ifdef RGBLIGHT_ENABLE
    #include "rgb_util.h"
#endif

#ifdef TAP_DANCE_ENABLE
    #include "tap_dance.c"
#endif

#include "keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * | TD_ESC |   Q    |   W    |   E    |   R    |   T    |                                      |   Y    |   U    |   I    |   O    |   P    |   BS   |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * | LCTL_T | CTL_A  | ALT_S  | GUI_D  | SFT_F  |   G    |                                      |   H    | SFT_J  | GUI_K  | ALT_L  | CTL_SCN|  '  "  |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * | OS_LSFT|   Z    |   X    |   C    |   G    |   B    | ADJUST | Leader |  | Leader |        |   N    |   M    |  ,  <  |  .  >  |  /  ?  | OS_RSFT|
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |  Mute  | OS_LALT| OS_LGUI| Space  | SYMBOL |  | NUMNAV  | Enter  | OS_RGUI| OS_RALT|  DEL   |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
    [_QWERTY] = LAYOUT(
        TD_ESC ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
        CTL_TAB,   CTL_A,   ALT_S,   GUI_D,   SFT_F,    KC_G,                                        KC_H,   SFT_J,   GUI_K,   ALT_L, CTL_SCN, KC_QUOT,
        OS_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  ADJUST, KC_LEAD, KC_LEAD, XXXXXXX,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, OS_RSFT,
                                   KC_MUTE, OS_LALT, OS_LGUI,  KC_SPC,  SYMBOL,  NUMNAV,  KC_ENT, OS_RGUI, OS_RALT,  KC_DEL
    ),

/*
 * SYMBOL Layer
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |   !    |   @    |   {    |   }    |   |    |                                      |   \    |   _    |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |   #    |   $    |   (    |   )    |   `    |                                      |   +    |   -    |   <    |   >    |   ?    |   "    |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |   %    |   ^    |   [    |   ]    |   ~    |        |        |  |        |        |   &    |   *    |   ,    |   .    |   /    |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |   =    |   ;    |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
    [_SYMBOL] = LAYOUT(
        _______, KC_EXLM,   KC_AT, KC_LCBR, KC_RCBR, KC_PIPE,                                     KC_BSLS, KC_UNDS, _______, _______, _______, _______,
        _______, KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV,                                     KC_PLUS, KC_MINS, KC_LT  ,   KC_GT, KC_QUES,  KC_DQT,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______, _______, _______, _______, KC_AMPR, KC_ASTR, KC_COMM,  KC_DOT, KC_SLSH, _______,
                                   _______, _______, _______, _______, _______,  KC_EQL, KC_SCLN, _______, _______, _______
    ),

/*
 * NUMNAV Layer: Number, media, navigation
 * - add more navigation keys
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |   1    |   2    |   3    |   4    |   5    |                                      |   6    |   7    |   8    |   9    |   0    |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        |  Prev  |  Play  |  Next  |        |                                      |  Home  | Right  |   Up   |  Left  |        |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        | TD_CP  | TD_SC  |        |        |        |  |        |        |  End   | KC_BWD |  Down  | KC_FWD |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
    [_NUMNAV] = LAYOUT(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,                                     KC_HOME, KC_LEFT,   KC_UP, KC_RGHT, _______, _______,
        _______, _______, _______,   TD_CP,   TD_SC, _______, _______, _______, _______, _______,  KC_END,  KC_BWD, KC_DOWN,  KC_FWD, _______, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Adjust Layer: Function keys, RGB
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * | TO(0)  |   F1   |   F2   |   F3   |   F4   |   F5   |                                      |   F6   |   F7   |   F8   |   F9   |  F10   |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |  TOG   |  SAI   |  HUI   |  VAI   |  MOD   |                                      |        |  BRMU  |        |  F11   |  F12   |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |  SAD   |  HUD   |  VAD   |  RMOD  |        |        |  |        |        |        |  BRMD  |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
    [_ADJUST] = LAYOUT(
        TO(0)  ,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
        _______, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD,                                     _______, KC_BRMU, _______,  KC_F11,  KC_F12, _______,
        _______, _______, RGB_SAD, RGB_HUD, RGB_VAD,RGB_RMOD, _______, _______, _______, _______, _______, KC_BRMD, _______, _______, _______, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Window Manager Layer: This layer uses shortcuts from the Rectangle App
 * Rectangle can be found at https://github.com/rxhanson/Rectangle
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * | TO(0)  |        | NewWin |        |        |        |                                      | CNR_TL | CNR_TR | CNR_BL | CNR_BR |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        | DISP_L | DISP_R |  Max   |        |                                      | HALF_L | HALF_B | HALF_T | HALF_R |        |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        | Center |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |  Res   |        |        |        |        |  |        |        |        |        |  Res   |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
    [_WINDOWMANAGER] = LAYOUT(
        TO(0)  , XXXXXXX, NEW_WIN, XXXXXXX, XXXXXXX, XXXXXXX,                                      CNR_TL,  CNR_TR,  CNR_BL,  CNR_BR, XXXXXXX, _______,
        _______, XXXXXXX,  DISP_L,  DISP_R, WIN_MAX, XXXXXXX,                                      HALF_L,  HALF_B,  HALF_T,  HALF_R, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, WIN_CEN, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                   WIN_RES, _______, _______, _______, _______, _______, _______, _______, _______, WIN_RES
    ),

// /*
//  * Layer template
//  *
//  * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
//  * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
//  * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
//  * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
//  * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
//  * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
//  * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
//  *                            |        |        |        |        |        |  |        |        |        |        |        |
//  *                            `--------------------------------------------'  `--------------------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case RGB_HUI:
            if(record->event.pressed) {
                rgblight_increase_hue_noeeprom();
            }
            break;
        case RGB_HUD:
            if(record->event.pressed) {
                rgblight_decrease_hue_noeeprom();
            }
            break;
        case RGB_MOD:
            if(record->event.pressed) {
                rgblight_step_noeeprom();
            }
            break;
        case RGB_RMOD:
            if(record->event.pressed) {
                rgblight_step_reverse_noeeprom();
            }
            break;
        case RGB_SAI:
            if(record->event.pressed) {
                rgblight_increase_sat_noeeprom();
            }
            break;
        case RGB_SAD:
            if(record->event.pressed) {
                rgblight_decrease_sat_noeeprom();
            }
            break;
        case RGB_TOG:
            if(record->event.pressed) {
                rgblight_toggle_noeeprom();
            }
            break;
        case RGB_VAI:
            if(record->event.pressed) {
                rgblight_increase_val_noeeprom();
            }
            break;
        case RGB_VAD:
            if(record->event.pressed) {
                rgblight_decrease_val_noeeprom();
            }
            break;
        default:
            return true;
    }
    return false;
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

void oled_task_user(void) { render_status(); }
#endif

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    const uint8_t layer = get_highest_layer(layer_state);

    if (index == 0) {
        if (layer == _WINDOWMANAGER) {
            encoder_action_window_resize(clockwise);
        } else {
            encoder_action_volume(clockwise);
        }
    }
    else if (index == 1) {
        if (layer == _SYMBOL) {
            encoder_action_word_scroll(clockwise);
        } else if (layer == _WINDOWMANAGER) {
            encoder_action_move_space(clockwise);
        } else {
            encoder_action_mouse_wheel(clockwise);
        }
    }
}
#endif

const rgblight_segment_t PROGMEM caps_lock[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_CAPS},
    {3, 1, HSV_CAPS},
    {10, 2, HSV_CAPS},
    {13, 1, HSV_CAPS}
);

const rgblight_segment_t PROGMEM symbol_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_SYMBOL},
    {3, 1, HSV_SYMBOL},
    {10, 2, HSV_SYMBOL},
    {13, 1, HSV_SYMBOL}
);

const rgblight_segment_t PROGMEM numnav_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_NUMNAV},
    {3, 1, HSV_NUMNAV},
    {10, 2, HSV_NUMNAV},
    {13, 1, HSV_NUMNAV}
);

const rgblight_segment_t PROGMEM winman_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_WINMAN},
    {3, 1, HSV_WINMAN},
    {10, 2, HSV_WINMAN},
    {13, 1, HSV_WINMAN}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    caps_lock,
    symbol_layer,
    numnav_layer,
    winman_layer
);

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_DEFAULT);

    rgblight_layers = rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _SYMBOL, _NUMNAV, _WINDOWMANAGER);

    rgblight_set_layer_state(1, layer_state_cmp(state, _SYMBOL));
    rgblight_set_layer_state(2, layer_state_cmp(state, _NUMNAV));
    rgblight_set_layer_state(3, layer_state_cmp(state, _WINDOWMANAGER));

    return state;
}

#ifdef LEADER_ENABLE
LEADER_EXTERNS();
bool leader_success;

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leader_success = leading = false;

        SEQ_ONE_KEY(KC_P) {
            SEND_STRING(SS_LSFT(SS_LGUI("x")));
            leader_success = true;
        }
        SEQ_ONE_KEY(KC_Q) {
            SEND_STRING(SS_LGUI(SS_LCTL("q")));
            leader_success = true;
        }
        SEQ_ONE_KEY(KC_T) {
            SEND_STRING(SS_LGUI(SS_LSFT("t")));
            leader_success = true;
        }
        SEQ_TWO_KEYS(KC_S, KC_T) {
            SEND_STRING(SS_LGUI(SS_LSFT("5")));
            leader_success = true;
        }
        SEQ_TWO_KEYS(KC_S, KC_R) {
            SEND_STRING(SS_LGUI(SS_LSFT("4")));
            leader_success = true;
        }
        leader_end();
    }
}

void leader_start(void) {
    rgblight_save_base();
    rgblight_set_indicators(28, 255, 255);
}

void leader_end(void) {
    if (leader_success) {
        rgblight_set_indicators(HSV_GREEN);
        wait_ms(500);
        rgblight_set_indicators(hue, sat, val);
    } else {
        rgblight_set_indicators(HSV_RED);
        wait_ms(500);
        rgblight_set_indicators(hue, sat, val);
    }
}
#endif
