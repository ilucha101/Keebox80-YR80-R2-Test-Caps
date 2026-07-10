# Keebox YR80 R2 / PTG80B Vial firmware.
# Max-macro variant: macro EEPROM is maximized mainly by reducing dynamic layers to 2 in config.h.
# RGBLight is kept with only static, static gradient and rainbow swirl.

LTO_ENABLE = yes
BOOTLOADER = uf2boot

VIA_ENABLE = yes
VIAL_ENABLE = yes

RGBLIGHT_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
NKRO_ENABLE = no
EXTRAKEY_ENABLE = yes

# Explicitly keep optional flash/EEPROM consumers off unless intentionally re-enabled later.
COMBO_ENABLE = no
TAP_DANCE_ENABLE = no
KEY_OVERRIDE_ENABLE = no
BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
