#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*     B0   B1   B2   B3   B7   D0   F0   F1   F4   F5   F6   F7 */
    /* 0: neo */
    KEYMAP(GRV, P1,  P2,  P3,  P4,  P5,  P6,  P7,  P8,  P9,  P0,  MINS, /* B6 */ \ 
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   TAB, /* B5 */ \    
           LBRC,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, /* B4 */ \ 
           LALT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RALT, /*  D7 */ \ 
           LGUI,LCTL,SPC, CAPS,LSFT,FN0, FN0, RSFT,CAPS,SPC, RCTL,RGUI),/* D6 */   
    /* 0: neo layer 4 */
    KEYMAP(F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, \
           TRNS,PGUP,BSPC,INS, DEL, PGDN,NO,  7,   8,   9,   EQL, TRNS, \
           TRNS,HOME,LEFT,UP,  RGHT,END, NO,  4,   5,   6,   P0,  TRNS, \
           TRNS,ESC, NO,  DOWN,ENT, NO,  NO,  1,   2,   3,   NO,  TRNS, \
           TRNS,TRNS,0,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0,   TRNS,TRNS),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    /*[0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),*/
    [0] = ACTION_LAYER_MOMENTARY(1),
};


