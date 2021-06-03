#include "keycodes.h"

void turnOffCurrentLayer(void) {
    switch (get_highest_layer(layer_state)) {
        case _MOUSE:
            layer_off(_MOUSE);
            break;
        case _NAV:
            layer_off(_NAV);
            break;
        case _WINDOWMANAGER:
            layer_off(_WINDOWMANAGER);
            break;
        default:
            break;
    }
    layer_on(_QWERTY);
}
