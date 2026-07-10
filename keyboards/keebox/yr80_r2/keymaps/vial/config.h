#pragma once

// Keebox YR80 R2 / PTG80B matrix pins recovered from original CURRENT.UF2.
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { B3, B4, B5, A3, A4, A5, A6, B14, B13, B12, B11, B10, B2, B1, B15, A8, A9 }

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { B6, A0, A1, A2, A7, B7 }

// Maximize Vial macro storage: fewer dynamic layers means more EEPROM left for macros.
// Keebox80 matrix size is 6 x 17; each dynamic layer costs 6*17*2 = 204 bytes.
// 2 layers is the maximum-macro variant. Use 3 if you need a third layer later.
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

// Unique Vial keyboard identifier for this custom Keebox80 R2 build.
#define VIAL_KEYBOARD_UID {0x4B, 0x38, 0x30, 0x52, 0x32, 0xAA, 0x96, 0x0D}

// Unlock combo: ESC + F1, i.e. matrix positions (0,0) and (0,1).
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// RGBLight kept deliberately small:
// - static light
// - static gradient
// - rainbow swirl (animated gradient moving across the LED order)
// Removed to save flash: breathing, snake, knight, christmas, etc.
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define RGBLIGHT_STATIC_GRADIENT_RANGE 9
#define RGBLIGHT_RAINBOW_MOOD_RANGE 3
#define RGBLIGHT_RAINBOW_SWIRL_RANGE 6

#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_TWINKLE

#undef RGBLIGHT_DEFAULT_MODE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_GRADIENT
