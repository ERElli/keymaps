#include "quantum.h"
#include "rgb_util.h"

rgblight_config_t rgblight_config;

void rgblight_set_indicators(uint8_t hue, uint8_t val, uint8_t sat) {
    rgblight_sethsv_at(hue, val, sat, 0);
    rgblight_sethsv_at(hue, val, sat, 1);
    rgblight_sethsv_at(hue, val, sat, 3);
}

void rgblight_save_base(void) {
    hue = rgblight_config.hue;
    sat = rgblight_config.sat;
    val = rgblight_config.val;
}
