#include "bananasplit.h"

#define DEFAULT_LAYER 0
#define LAYER_1       1

/*
KEYMAP(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
    KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,   KC_QUOT, KC_ENT, \
    KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),  RSFT_T(KC_SLSH), KC_UP, \
    KC_LCTL,  KC_LALT,  KC_LGUI, KC_ENT,      KC_SPC,      MO(LAYER_1),  MO(LAYER_1), KC_RGUI2,  KC_LEFT, KC_RIGHT, KC_DOWN
  ),

*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT_LAYER] = KEYMAP_ALL( \
      KC_GRV, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL,  KC_BSPC, KC_DEL, \
      KC_TAB, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC, KC_RBRC,      KC_BSLS,     \
      KC_CAPS,      KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,   KC_QUOT, KC_ENT,    \
      KC_LSFT,MO(LAYER_1), KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  RSFT_T(KC_RSFT), KC_UP, \
      KC_LCTL,  KC_LALT,  KC_LGUI,             KC_ENT, KC_SPC, MO(LAYER_1),             KC_LGUI, KC_LALT,  KC_LEFT, KC_RIGHT, KC_DOWN \
  ),


  [LAYER_1] = KEYMAP_ALL( \
    KC_ESC ,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, _______, \
    _______, _______, _______, _______,   RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, \
    _______, _______, _______,              _______, KC_MPLY, _______,               _______, _______, KC_MPRV, KC_MNXT, KC_VOLD  \
   ),
};

const uint16_t PROGMEM fn_actions[] = {
};
