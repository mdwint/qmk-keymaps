#include QMK_KEYBOARD_H

// Left-hand home row mods
#define SFT_A LSFT_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define CMD_F LCMD_T(KC_F)

// Right-hand home row mods
#define CMD_J RCMD_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define SFT_SCLN RSFT_T(KC_SCLN)

enum Layer {
    _QWERTY = 0,
    _RIGHT,
    _LEFT,
    _TRI,
    _FUNCTION,
};
#define _QW _QWERTY
#define _RT _RIGHT
#define _LF _LEFT
#define _FN _FUNCTION

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12                13       14
    QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,          KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,          KC_RBRC, KC_BSLS,
    KC_CAPS, SFT_A,   ALT_S,   CTL_D,   CMD_F,   KC_G,    KC_H,    CMD_J,   CTL_K,   ALT_L,   SFT_SCLN, KC_QUOT,                  KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                            KC_RSFT,
    KC_LCTL, KC_LCMD, LT(_LF, KC_TAB),                    KC_SPC,                             KC_ENT,  LT(_RT, KC_BSPC), MO(_FN), KC_RCTL
  ),

  [_RIGHT] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_1,    KC_2,    KC_3,    _______, KC_HOME, XXXXXXX, XXXXXXX, KC_END,  KC_COLN, _______, _______, _______,
    _______, KC_DEL,  KC_4,    KC_5,    KC_6,    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN, _______,          _______,
    _______, CW_TOGG, KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  ),

  [_LEFT] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  ),

  [_TRI] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  ),

  [_FUNCTION] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, KC_INS,  _______, KC_UP,   KC_PAUS, KC_PGUP, KC_HOME, KC_PSCR, _______,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, KC_SCRL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END,           KC_ENT,
    _______, _______, KC_APP,  _______, _______, _______, KC_CALC, KC_MUTE, KC_VOLD, KC_VOLU, _______,                   _______,
    _______, KC_APP,  _______,                            _______,                            _______, KC_APP,  _______, _______
  ),

  /*
  [_TEMPLATE] = LAYOUT_60_ansi(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  ),
  */
};
