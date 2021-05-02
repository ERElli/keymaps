#pragma once

#include "quantum.h"

enum layers {
    _QWERTY = 0,
    _FUNC,
    _MOUSE,
    _NAV,
    _NSL,
    _SNSL,
    _ADJUST,
    _WINDOWMANAGER
};

/*
 * Layer keys
 * https://docs.qmk.fm/#/keycodes?id=layer-switching
 */
#define ADJUST TG(_ADJUST)
#define FUNCL LT(_FUNC, KC_DEL)
#define MOUSE LT(_MOUSE, KC_TAB)
#define NAV LT(_NAV, KC_SPC)
#define NSL LT(_NSL, KC_BSPC)
#define SNSL LT(_SNSL, KC_ENT)
#define WINMAN LT(_WINDOWMANAGER, KC_ESC)

/*
 * One shot mod keys
 * https://docs.qmk.fm/#/one_shot_keys
*/
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RALT OSM(MOD_RALT)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_RSFT OSM(MOD_RSFT)

/*
 * Mod-tap keys
 * https://docs.qmk.fm/#/keycodes?id=mod-tap-keys
*/
#define CTL_TAB LCTL_T(KC_TAB)  /* Control when held, Tab when tapped */

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)      /* Control when held, A when tapped */
#define ALT_S LALT_T(KC_S)      /* Alt when held, S when tapped */
#define GUI_D LGUI_T(KC_D)      /* GUI when held, D when tapped */
#define SFT_F LSFT_T(KC_F)      /* Shift when held, F when tapped */

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)      /* Shift when held, J when tapped */
#define GUI_K RGUI_T(KC_K)      /* GUI when held, K when tapped */
#define ALT_L LALT_T(KC_L)      /* Alt when held, L when tapped */
#define CTL_SCN RCTL_T(KC_SCLN) /* Control when held, KC_SCLN when tapped */

/* Window manager shortcut keys */
#define CNR_BL C(S(G(KC_LEFT))) /* Move window to bottom left corner */
#define CNR_BR C(S(G(KC_RGHT))) /* Move window to bottom right corner */
#define CNR_TL C(G(KC_LEFT))    /* Move window to top left corner */
#define CNR_TR C(G(KC_RGHT))    /* Move window to top right corner */
#define DISP_L C(A(G(KC_LEFT))) /* Move window one display to the left */
#define DISP_R C(A(G(KC_RGHT))) /* Move window one display to the right */
#define HALF_B A(G(KC_DOWN))    /* Move window to bottom half */
#define HALF_L A(G(KC_LEFT))    /* Move window to left half */
#define HALF_R A(G(KC_RGHT))    /* Move window to right half */
#define HALF_T A(G(KC_UP))      /* Move window to top half */
#define WIN_CEN A(G(KC_C))      /* Move window to the center */
#define WIN_MAX A(G(KC_F))      /* Resize window to fill screen */
#define WIN_RES C(A(KC_BSPC))   /* Restore window to previous settings */
#define WS_LFT C(KC_LEFT)       /* Move one workspace to the left */
#define WS_RGT C(KC_RGHT)       /* Move one workspace to the right */

/*
 * Miscellaneous keys
*/
#define KC_BWD A(KC_LEFT)   /* Move right (backward) one word */
#define KC_FWD A(KC_RGHT)   /* Move left (forward) one word */
#define NEW_WIN G(S(KC_W))  /* System defined command to move chrome tab to new window */
#define SS_TOOL G(S(KC_5))  /* Open screenshot tool */
#define SS_SEL G(S(KC_4))   /* Take screenshot of selection */
#define U_CPY G(KC_C)       /* Copy */
#define U_CUT G(KC_X)       /* Cut */
#define U_PST G(KC_V)       /* Paste */
#define U_RDO SCMD(KC_Z)    /* Redo */
#define U_UDO G(KC_Z)       /* Undo */