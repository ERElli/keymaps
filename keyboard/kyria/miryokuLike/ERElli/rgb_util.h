uint8_t hue;
uint8_t sat;
uint8_t val;

#define HSV_DEFAULT 40, 180, 100
#define HSV_NSL 191, 255, 100
#define HSV_NUMNAV 128, 255, 100
#define HSV_WINMAN 234, 128, 100
#define HSV_CAPS 0, 255, 100

void rgblight_set_indicators(uint8_t hue, uint8_t val, uint8_t sat);

void rgblight_save_base(void);
