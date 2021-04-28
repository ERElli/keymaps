ENCODER_ENABLE = yes		# Enables the use of one or more encoders
LEADER_ENABLE = yes			# Enables the use of the leader key
OLED_DRIVER_ENABLE = yes	# Enables the use of OLED displays
RGBLIGHT_ENABLE = yes		# Enable keyboard RGB underglow
TAP_DANCE_ENABLE = yes

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
	SRC += oled_util.c
endif

ifeq ($(strip $(ENCODER_ENABLE)), yes)
	SRC += encoder_util.c
endif

ifeq ($(strip $(LEADER_ENABLE)), yes)
	SRC += rgb_util.c
endif
