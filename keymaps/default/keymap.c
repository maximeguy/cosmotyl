#include QMK_KEYBOARD_H
// #include "cosmotyl.h"
#include <stdint.h>
// #include "quantum.h"
#include "keymap_french.h"

enum custom_layers {
    _BASE,
    _NAV,
    _FNUM,
    _SYMB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, _______,                                           FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_RPRN, _______,
        KC_CAPS_LOCK, FR_A, FR_Z, FR_E, FR_R, FR_T, _______,                                                    FR_Y, FR_U, FR_I, FR_O, FR_P, FR_CIRC, _______,
        KC_LSFT, MT(MOD_LGUI, FR_Q), MT(MOD_LALT, FR_S), MT(MOD_LSFT, FR_D), MT(MOD_LCTL, FR_F), FR_G, _______,     FR_H, MT(MOD_RCTL, FR_J), MT(MOD_RSFT, FR_K), MT(MOD_RALT, FR_L), MT(MOD_RGUI, FR_M), FR_UGRV, _______,
        KC_LEFT_CTRL, FR_W, FR_X, FR_C, FR_V, FR_B, LT(_FNUM, _______),                                         FR_N, FR_COMM, FR_SCLN, FR_COLN, FR_EXLM, FR_LABK, KC_DEL,
        _______, _______, _______, LT(_SYMB, KC_ESC), KC_SPC, _______, LT(_NAV, KC_TAB),                         _______, KC_BSPC, KC_ENT, _______, _______ , _______, KC_RALT),

    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,                                    _______, _______, _______, _______, _______, _______, _______,
        _______, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, _______, _______, _______,            _______, KC_HOME, KC_UP, KC_END, KC_PAGE_UP, _______, _______,
        _______, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK,_______,_______,_______,   _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PAGE_DOWN, _______, _______,
        _______, KC_PRINT_SCREEN, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, KC_UP,
        _______, _______, _______, _______, _______, _______, _______,                                    _______, KC_DOWN, KC_RIGHT, _______, _______, _______, KC_LEFT),
    
    [_FNUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,      FR_SUP2, FR_CIRC, KC_LABK, KC_RABK, _______, KC_NUM_LOCK, _______,
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______,                KC_KP_MINUS, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, _______, _______,
        _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,               KC_KP_SLASH, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, _______, _______,
        _______, KC_F11, KC_F12, _______, _______, _______, _______,        KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_EQL, _______, KC_KP_DOT,
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, KC_EQL),


    [_SYMB] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
        _______, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, _______,           FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_DEG, _______, _______,
        _______, FR_LCBR, FR_LBRC, FR_LPRN, FR_PIPE, FR_HASH, _______,           FR_LPRN, FR_TILD, FR_RPRN, FR_RBRC, FR_RCBR, _______, _______,
        _______, FR_PLUS, FR_ASTR, FR_PERC, KC_EQL,  _______, _______,           FR_DLR, FR_CIRC, FR_GRV, FR_BSLS, FR_AT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______),
    };