/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#pragma once

#ifdef ENCODER_ENABLE
    #define ENCODER_RESOLUTION 2
    #define TAP_CODE_DELAY 40
#endif

#ifdef OLED_DRIVER_ENABLE
    #define OLED_DISPLAY_128X64
#endif

#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 1000  /* Time (in ms) before the one shot key is released */

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_LIMIT_VAL 100
    #define RGBLIGHT_HUE_STEP 1
    #define RGBLIGHT_SAT_STEP 1
    #define RGBLIGHT_VAL_STEP 1
#endif

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 150
#define TAPPING_TOGGLE 2

#ifdef LEADER_ENABLE
    #define LEADER_PER_KEY_TIMING
    #define LEADER_TIMEOUT 250
#endif

#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
#define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK
