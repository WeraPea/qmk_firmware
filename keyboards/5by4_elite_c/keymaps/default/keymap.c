#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_P00 = SAFE_RANGE
};

enum layers {
    _NUMPAD = 0,
    _MEDIA,
    _MOUSE,
    _LAYERS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ % │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ = │
     * ├───┼───┼───┼───┤
     * │ 0 │00 │ . │Ent│
     * └───┴───┴───┴───┘
     */
    [_NUMPAD] = LAYOUT_ortho_5x4(
        KC_NUM_LOCK,   KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PERC,
        KC_P1,   KC_P2,   KC_P3,   KC_EQL,
        KC_P0,LT(_MOUSE,KC_P00),KC_PDOT,LT(_LAYERS,KC_PENT)
    ),
    /*
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ┌───┬───┐───┼───┤
     * │NUM│MED│   │   │
     * └───┴───┘───┼───┤
     * │   │   │   │   │
     * └───┴───┴───┴───┘
     */
    [_LAYERS] = LAYOUT_ortho_5x4(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        TO(_NUMPAD),TO(_MEDIA),_______,_______,
        _______, _______, _______, _______
    ),
    /*
     * ┌───┬───┌───┬───┐
     * │   │   │ , │ . │
     * ┌───┬───┼───┼───┤
     * │ [ │ ↑ │ ] │Vl+│
     * ├───┼───┼───┼───┤
     * │ ← │ ↓ │ → │Vl-│
     * ├───┼───┼───┼───┤
     * │Prv│Ply│Nxt│Mut│
     * ├───┼───┴───┴───┘
     * │SfS│   │   │   │
     * └───┘───┴───┴───┘
     */
    [_MEDIA] = LAYOUT_ortho_5x4(
        _______, _______, KC_COMM, KC_DOT ,
        KC_LBRC, KC_UP  , KC_RBRC, KC_VOLU,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,
        KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,
        MT(MOD_LSFT, KC_SPC),_______,_______,
    ),
    /*
     * ┌───┌───┐───┬───┐
     * │   │M3 │   │   │
     * ┌───┼───┼───┬───┐
     * │M1 │Ms↑│M2 │Wh↑│
     * ├───┼───┼───┼───┤
     * │Ms←│Ms↓│Ms→│Wh↓│
     * └───┴───┴───┴───┘
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * └───┴───┴───┴───┘
     */
    [_MOUSE] = LAYOUT_ortho_5x4(
        _______, KC_BTN3, _______, _______,
        KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
        KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
    // [_] = LAYOUT_ortho_5x4(
    //     _______, _______, _______, _______,
    //     _______, _______, _______, _______,
    //     _______, _______, _______, _______,
    //     _______, _______, _______, _______,
    //     _______, _______, _______, _______
    // )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case KC_P00:
                tap_code(KC_P0);
                tap_code(KC_P0);
                return false;
        }
    }
    return true;
}
