OLED_ENABLE = yes
OLED_DRIVER = ssd1306   # Enables the use of OLED displays
	
# MCU name
MCU = atmega32u4

# Bootloader selection

BOOTLOADER = atmel-dfu

# Build Options
#
# EXTRAKEY_ENABLE = no       # Audio control and System control
ENCODER_ENABLE = no       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 

NKRO_ENABLE = yes          # Enable N-Key Rollover
SPLIT_KEYBOARD = yes       # Split common
LTO_ENABLE = yes
MAGIC_ENABLE = no
LEADER_ENABLE = yes
WPM_ENABLE = yes
MOUSEKEY_ENABLE = yes
KEY_OVERRIDE_ENABLE = no
