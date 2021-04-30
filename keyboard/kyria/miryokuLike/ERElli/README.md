- [ERElli Kyria Keymap](#erelli-kyria-keymap)
  - [Custom Keys](#custom-keys)
    - [Mod Taps](#mod-taps)
    - [One Shot Keys](#one-shot-keys)
    - [Layer Keys](#layer-keys)
    - [Window Manager Keys](#window-manager-keys)
  - [Layers](#layers)
    - [QWERTY](#qwerty)
    - [NSL](#nsl)
    - [SNSL](#snsl)
    - [ADJUST](#adjust)
    - [WINDOWMANAGER](#windowmanager)
# ERElli [Kyria](https://github.com/splitkb/kyria) Keymap
## Custom Keys
### [Mod Taps](https://docs.qmk.fm/#/mod_tap)
Note: Some of these keycodes are used for homerow mods. You can read more about it [here](https://precondition.github.io/home-row-mods)
| Keycode | Description                         |
| ------- | ----------------------------------- |
| CTL_TAB | Control when held, Tab when tapped. |
| CTL_A   | Control when held, a when tapped.   |
| ALT_S   | Alt when held, s when tapped.       |
| GUI_D   | GUI when held, d when tapped.       |
| SFT_F   | Shift when held, f when tapped.     |
| SFT_J   | Shift when held, j when tapped.     |
| GUI_K   | GUI when held, k when tapped.       |
| ALT_L   | Alt when held, l when tapped.       |
| CTL_SCN | Control when held, ; when tapped.   |

### [One Shot Keys](https://docs.qmk.fm/#/one_shot_keys)
Note: Tapping a one shot key activates it for one second, double tapping holds until it is pressed again
| Keycode | Description           |
| ------- | --------------------- |
| OS_LSFT | One shot left Shift.  |
| OS_LALT | One shot left Alt.    |
| OS_LGUI | One shot left GUI.    |
| OS_RGUI | One shot right GUI.   |
| OS_RALT | One shot right Alt.   |
| OS_RSFT | One shot right Shift. |

### [Layer Keys](https://docs.qmk.fm/#/feature_layers)
| Keycode | Description                                                                |
| ------- | -------------------------------------------------------------------------- |
| ADJUST  | Momentarily activate to toggle Adjust layer when held, escape when tapped. |
| NSL     | Momentarilty activate NSL layer when held, backspace when tapped.          |
| SNSL    | Momentarilty activate SNSL layer when held, enter when tapped.             |
| WINMAN  | Toggle Window Manager layer                                                |

### Window Manager Keys
I'm using the [Rectangle](https://github.com/rxhanson/Rectangle) window manager
| Keycode | Description                                      |
| ------- | ------------------------------------------------ |
| CNR_BL  | Move window to the bottom left corner.           |
| CNR_BR  | Move window to the bottom left corner.           |
| CNR_TL  | Move window to the top left corner.              |
| CNR_TR  | Move window to the top right corner.             |
| DISP_L  | Move window one display to the left.             |
| DISP_R  | Move window one display to the right.            |
| HALF_B  | Move the window to the bottom half of the screen |
| HALF_L  | Move the window to the left half of the screen   |
| HALF_R  | Move the window to the right half of the screen  |
| HALFT_T | Move the window to the top half of the screen    |
| WIN_CEN | Move the window the the centre of the screen     |
| WIN_MAX | Resize the window to fill the screen             |
| WIN_RES | Restore the window to previous settings          |


## Layers
### QWERTY
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * | TD_ESC |   Q    |   W    |   E    |   R    |   T    |                                      |   Y    |   U    |   I    |   O    |   P    |   BS   |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * | LCTL_T | CTL_A  | ALT_S  | GUI_D  | SFT_F  |   G    |                                      |   H    | SFT_J  | GUI_K  | ALT_L  | CTL_SCN|  '  "  |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * | OS_LSFT|   Z    |   X    |   C    |   G    |   B    | ADJUST | Leader |  | Leader |        |   N    |   M    |  ,  <  |  .  >  |  /  ?  | OS_RSFT|
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |  Mute  | OS_LALT| OS_LGUI| Space  | SYMBOL |  |  SNSL  |  NSL   | OS_RGUI| OS_RALT|  DEL   |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### NSL
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |   [    |   7    |   8    |   9    |   ]    |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |  Space |   ;    |   4    |   5    |   6    |   =    |                                      |        | Shift  |  Cmd   |  Alt   |  Ctrl  |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |   `    |   1    |   2    |   3    |   \    |        |        |  |        |        |        |        |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |   .    |   0    |   -    |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### SNSL
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |   {    |   &    |   *    |   (    |   }    |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |  Space |   :    |   $    |   %    |   ^    |   +    |                                      |        | Shift  |  Cmd   |  Alt   |  Ctrl  |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |   ~    |   !    |   @    |   #    |   |    |        |        |  |        |        |        |        |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |   (    |    )   |   _    |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### ADJUST
```c
/*
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
```

### WINDOWMANAGER
```c
/*
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
```

<!--
TEMPLATE
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
 -->
