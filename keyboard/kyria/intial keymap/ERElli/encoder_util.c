#include "keycodes.h"
#include "encoder_util.h"

void encoder_action_mouse_wheel(uint8_t clockwise) {
    if (clockwise) {
        tap_code(KC_WH_D);
    } else {
        tap_code(KC_WH_U);
    }
}

void encoder_action_move_space(uint8_t clockwise) {
    if (clockwise) {
        tap_code16(C(KC_LEFT));
    } else {
        tap_code16(C(KC_RIGHT));
    }
}

void encoder_action_volume(uint8_t clockwise) {
    if (clockwise) {
        tap_code(KC_VOLD);
    } else {
        tap_code(KC_VOLU);
    }
}

void encoder_action_window_resize(uint8_t clockwise) {
    if (clockwise) {
        tap_code16(C(A(S(KC_LEFT))));
    } else {
        tap_code16(C(A(S(KC_RIGHT))));
    }
}

void encoder_action_word_scroll(uint8_t clockwise) {
    if (clockwise) {
        tap_code16(LALT(KC_LEFT));
    } else {
        tap_code16(LALT(KC_RIGHT));
    }
}
