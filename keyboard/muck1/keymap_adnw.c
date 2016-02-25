#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*     B0   B1   B2   B3   B7   D0   F0   F1   F4   F5   F6   F7 */
    /* 0: adnw */
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   QUOT, /* B6 */ \ 
           MINS,B,   U,   DOT, COMM,SCLN,P,   C,   I,   M,   F,   X,    /* B5 */ \    
           LALT,H,   I,   E,   A,   O,   D,   T,   R,   N,   S,   RALT, /* B4 */ \ 
           TAB, K,   Y,   LBRC,RBRC,Q,   J,   G,   W,   V,   Z,   TAB, /*  D7 */ \ 
           LGUI,LCTL,SPC, CAPS,LSFT,FN0, FN0, RSFT,CAPS,SPC, RCTL,RGUI),/* D6 */   
    /* 0: neo layer 4 */
    KEYMAP(F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, \
           TRNS,PGUP,BSPC,INS, DEL, PGDN,NO,  P7,  P8,  P9,  NO,  TRNS, \
           TRNS,HOME,LEFT,UP,  RGHT,END, NO,  P4,  P5,  P6,  P0,  TRNS, \
           TRNS,ESC, NO,  DOWN,ENT, NO,  NO,  P1,  P2,  P3,  NO,  TRNS, \
           TRNS,TRNS,P0,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P0,  TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
