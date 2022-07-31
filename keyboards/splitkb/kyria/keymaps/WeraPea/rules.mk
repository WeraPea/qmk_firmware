OLED_ENABLE = yes
OLED_DRIVER = SSD1306   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
# ENCODER_ENABLE = no       # Enables the use of one or more encoders
# RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
	
# MCU name
MCU = atmega32u4

# Bootloader selection

BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes      # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes          # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no          # Audio output
SPLIT_KEYBOARD = yes       # Split common
LTO_ENABLE = yes
RAW_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
LEADER_ENABLE = yes
WPM_ENABLE = yes
# CONSOLE_ENABLE = no
# COMMAND_ENABLE = no
# MOUSEKEY_ENABLE = no
# EXTRAKEY_ENABLE = no

# don't enable as it makes the keyboard unusable due to lag
# HAPTIC_ENABLE = yes

HAPTIC_DRIVER += DRV2605L
