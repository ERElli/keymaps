uint8_t hue;
uint8_t sat;
uint8_t val;

#define HSV_DEFAULT 40, 180, 100
#define HSV_FUNC 170, 255, 100      /* Blue */
#define HSV_MOUSE 36, 255, 100      /* Gold */
#define HSV_NAV 213, 255, 100       /* Magenta */
#define HSV_NSL 191, 255, 100       /* Purple */
#define HSV_SNSL 128, 255, 100      /* Teal */
#define HSV_WINMAN 234, 128, 100    /* Pink */
#define HSV_CAPS 0, 255, 100        /* Red */

void rgblight_set_indicators(uint8_t hue, uint8_t val, uint8_t sat);

void rgblight_save_base(void);
