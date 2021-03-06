![kyria](./layout-editor-files/kyria.png)
> Note: I wasn't able to add legends for WINDOWMANAGER and ADUST layers to this image
- [ERElli Kyria Keymap](#erelli-kyria-keymap)
  - [Custom Keys](#custom-keys)
    - [Mod Taps](#mod-taps)
    - [Layer Keys](#layer-keys)
    - [Window Manager Keys](#window-manager-keys)
  - [Layers](#layers)
    - [QWERTY](#qwerty)
    - [FUNCL](#funcl)
    - [MOUSE](#mouse)
    - [NAV](#nav)
    - [NSL](#nsl)
    - [SNSL](#snsl)
    - [ADJUST](#adjust)
    - [WINDOWMANAGER](#windowmanager)
# ERElli [Kyria](https://github.com/splitkb/kyria) Keymap
This keymap takes heavily from the [Miryoku](https://github.com/manna-harbour/qmk_firmware/tree/miryoku/users/manna-harbour_miryoku) layout
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

### [Layer Keys](https://docs.qmk.fm/#/feature_layers)
| Keycode | Description                                                                |
| ------- | -------------------------------------------------------------------------- |
| LOCK    | Lock current layer. Only available for MOUSE, NAV and WINDOWMANAGER layers.|
| ADJUST  | Toggle Adjust layer.                                                       |
| FUNCL   | Momentarily activate FUNCL layer when held, delete when tapped.            |
| MOUSE   | Momentarily activate MOUSE layer when held, tab when tapped.               |
| NAV     | Momentarily activate NAV layer when held, space when tapped.               |
| NSL     | Momentarily activate NSL layer when held, backspace when tapped.           |
| SNSL    | Momentarily activate SNSL layer when held, enter when tapped.              |
| WINMAN  | Momentarily activate WINMAN layer when held, escape when tapped.           |

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
 * |        |   Q    |   W    |   E    |   R    |   T    |                                      |   Y    |   U    |   I    |   O    |   P    |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        | CTL_A  | ALT_S  | GUI_D  | SFT_F  |   G    |                                      |   H    | SFT_J  | GUI_K  | ALT_L  | CTL_SCN|        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |   Z    |   X    |   C    |   G    |   B    | ADJUST | Leader |  | Leader |        |   N    |   M    |  ,  <  |  .  >  |  /  ?  |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |  Mute  |        | WINMAN |  Nav   | Mouse  |  |  SNSL  |  NSL   | FUNCL  |        |  DEL   |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### FUNCL
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |  F12   |   F7   |   F8   |   F9   |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |  F11   |   F4   |   F5   |   F6   |        |                                      |        | Shift  |  Cmd   |  Alt   |  Ctrl  |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |  F10   |   F1   |   F2   |   F3   |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |  Esc   | Space  |  Tab   |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### MOUSE
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |  Ctrl  |  Alt   |  Cmd   | Shift  |        |                                      |  MB1   |  MW L  |  MW D  |  MW U  |  MW R  |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |  LOCK  |        |  MB2   |  MC L  |  MC D  |  MC U  |  MC R  |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |  MB1   |  MB2   |  MB3   |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### NAV
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        |        |        |        |                                      |  Undo  |  Cut   |  Copy  | Paste  |  Redo  |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |  Ctrl  |  Alt   |  Cmd   | Shift  |        |                                      |  Caps  |  Left  |  Down  |   Up   | Right  |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |  LOCK  |        |        |  Home  | Pg Dn  | Pg Up  |  End   |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  | Enter  |  Bspc  | Delete |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
```

### NSL
```c
/*
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |   [    |   7    |   8    |   9    |   ]    |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |   ;    |   4    |   5    |   6    |   =    |                                      |        | Shift  |  Cmd   |  Alt   |  Ctrl  |        |
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
 * |        |   "    |   $    |   %    |   ^    |   +    |                                      |        | Shift  |  Cmd   |  Alt   |  Ctrl  |        |
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
 * |        |   F1   |   F2   |   F3   |   F4   |   F5   |                                      |   F6   |   F7   |   F8   |   F9   |  F10   |        |
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
 * |        |        |        |        |        |        |                                      |  Max   | CNR_TL | CNR_TR | CNR_BL | CNR_BR |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                                      |  Cen   | HALF_L | HALF_B | HALF_T | HALF_R |        |
 * |--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |  LOCK  |        | NewWin | DISP_L | MC_APP | MC_CTL | DISP_R |        |
 * `--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
 *                            |        |        |        |        |        |  |        | WS LFT | WS_RGT | MC_DSK |  Res   |
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
