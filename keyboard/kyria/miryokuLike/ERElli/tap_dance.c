#include "quantum.h"
#include "keycodes.h"

enum tapdances{
    TD_ESC_CAPS = 0,
    TD_TOOL_SEL,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ESC_CAPS]     = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
    [TD_TOOL_SEL]     = ACTION_TAP_DANCE_DOUBLE(SS_TOOL, SS_SEL),
};
