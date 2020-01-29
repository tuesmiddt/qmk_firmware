/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H

// #define BASE 0
// #define NUM 1
// #define MOD 2
// #define MSE 3

// Combos
// enum combos {
// 	WE,AS,SD,DF,XC,OP,CV,
// 	UI,HJ,JK,KL,MC,NM,
// 	FV,GB,HN,
// 	SDJK
// };

// NOTE: If you're using MT,LT or anything you must
// define it here. Note this if you change your layout!
/* Keymap 0: Basic layer
 *
 * ,-----------------------------.       ,--------------------------------.
 * |  TAB |    ESC    |     |     |      |     |    ESC    |    BSLH      |
 * |-----+-----+-----+-----+------|      |--------------------------------|
 * |      |   LCTRL   ENT    |     |      |    LES   COLN  GRT    |        |
 * |-----+-----+-----+--RMB+-LMB--+		   |--------------------------------|
 * |      | LSHFT  |      |      |      |    QUO   UNDR   |     |        |
 * `------+-----+-----+------+----'		   `--------------------------------'
 *  .-------------------------.           .-----------------.
 *  |        |       |        |           |        |    |   |
 *  '-------------------------'           '-----------------'
 */
// const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
// //const uint16_t PROGMEM as_combo[] = {MT(MOD_LCTL, KC_A), KC_S, COMBO_END};
// const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};

// const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
// const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};
// const uint16_t PROGMEM mc_combo[] = {KC_M, KC_COMM, COMBO_END};

// const uint16_t PROGMEM gb_combo[] = {KC_G, KC_B, COMBO_END};
// const uint16_t PROGMEM fv_combo[] = {KC_F, KC_V, COMBO_END};
// const uint16_t PROGMEM hn_combo[] = {KC_H, KC_N, COMBO_END};

// const uint16_t PROGMEM sdjk_combo[] = {KC_J, KC_K, KC_S, KC_D, COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
// 	// Horizontal Chords
//   [WE] = COMBO(we_combo, KC_ESC),
//   //[AS] = COMBO(as_combo, KC_ENT),
//   [SD] = COMBO(sd_combo, KC_BSPC),
//   [DF] = COMBO(df_combo, KC_TAB),
//   [XC] = COMBO(xc_combo, KC_MINS),
//   [CV] = COMBO(cv_combo, KC_ENT),

//   [OP] = COMBO(op_combo, KC_BSLS),
//   [UI] = COMBO(ui_combo, KC_ESC),
//   [HJ] = COMBO(hj_combo, KC_LT),
//   [JK] = COMBO(jk_combo, KC_COLN),
//   [KL] = COMBO(kl_combo, KC_GT),
//   [MC] = COMBO(mc_combo, KC_UNDS), // m,
//   [NM] = COMBO(nm_combo, KC_QUOT),

// 	// Vertical
//   [GB] = COMBO(gb_combo, KC_BTN1),
//   [FV] = COMBO(fv_combo, KC_BTN2),
//   [HN] = COMBO(hn_combo, KC_ENT)
// };


enum combos {
  QW, WE,
  FG, VB,
  AS, SD, DF, XC,
  UI, IO,
  HJ, NM,
  JK, KL, COMMA_PERIOD,
  F7_F8, F8_F9, F12_F13,
  BSPACE_SHIFT
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM vb_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM comma_period_combo[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM f7_f8_combo[] = {KC_F7, KC_F8, COMBO_END};
const uint16_t PROGMEM f8_f9_combo[] = {KC_F8, KC_F9, COMBO_END};
const uint16_t PROGMEM f12_f13_combo[] = {KC_F12, KC_F13, COMBO_END};
const uint16_t PROGMEM bspace_shift_combo[] = {KC_BSPACE, KC_RSHIFT, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  [QW] = COMBO(qw_combo, KC_TAB),
  [WE] = COMBO(we_combo, KC_ESCAPE),
  [FG] = COMBO(fg_combo, KC_GRAVE),
  [VB] = COMBO_ACTION(vb_combo),
  [AS] = COMBO_ACTION(as_combo),
  [SD] = COMBO(sd_combo, KC_LCTRL),
  [DF] = COMBO_ACTION(df_combo),
  [XC] = COMBO(xc_combo, KC_LSHIFT),
  [UI] = COMBO_ACTION(ui_combo),
  [IO] = COMBO(io_combo, KC_QUOTE),
  [HJ] = COMBO(hj_combo, KC_BSLASH),
  [NM] = COMBO_ACTION(nm_combo),
  [JK] = COMBO_ACTION(jk_combo),
  [KL] = COMBO(kl_combo, KC_RCTRL),
  [COMMA_PERIOD] = COMBO(comma_period_combo, KC_RSHIFT),
  [F7_F8] = COMBO(f7_f8_combo, KC_LCTRL),
  [F8_F9] = COMBO_ACTION(f8_f9_combo),
  [F12_F13] = COMBO(f12_f13_combo, KC_LSHIFT),
  [BSPACE_SHIFT] = COMBO(bspace_shift_combo, KC_RALT)
};

void process_combo_event(uint8_t combo_index, bool pressed) {
  switch(combo_index) {
    case DF: case JK: case F8_F9:
      if (pressed) {
        register_code16(KC_LCTRL);
        register_code16(KC_LSHIFT);
      } else {
        unregister_code16(KC_LCTRL);
        unregister_code16(KC_LSHIFT);
      }
      break;
    case VB:
      if (pressed) {
        tap_code16(LSFT(KC_GRAVE));
      }
      break;
    case AS:
      if (pressed) {
        tap_code16(LSFT(KC_TAB));
      }
      break;
    case UI:
      if (pressed) {
        tap_code16(LSFT(KC_QUOTE));
      }
      break;
    case NM:
      if (pressed) {
        tap_code16(LSFT(KC_BSLASH));
      }
      break;
  }
}

// Blank template at the bottom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-----------------------------.      ,-----------------------------.
 * |  Q  |  W  |  E  |  R  |  T  |      |  Y  |  U  |  I  |  O  |  P  |
 * |-----+-----+-----+-----+-----|      |-----------------------------|
 * |  A  |  S  |  D  |  F  |  G  |      |  H  |  J  |  K  |  L  |  ;  |
 * |-----+-----+-----+-----+-----|      |-----------------------------|
 * |  Z  |  X  |  C  |  V  |  B  |      |  N  |  M  |  <  |  >  |  ?  |
 * `-----+-----+-----+-----+-----'		  `-----------------------------'
 *  .-------------------------.           .-----------------.
 *  |ESC/META|ENT/ALT|SPC(SYM)|           |SPC(NUM)|BSPC|TAB|
 *  '-------------------------'           '-----------------'
 */
[0] = LAYOUT_gergoplex(
    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,
    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,
                                    KC_LGUI,        LT(1,KC_TAB),   KC_SPACE,       LT(2,KC_ENTER), KC_BSPACE,      KC_RSHIFT

    // KC_Q ,KC_W, KC_E, KC_R, KC_T,  	KC_Y, KC_U, KC_I,    KC_O, 	 KC_P,
    // KC_A ,KC_S, KC_D, KC_F, KC_G,  	KC_H, KC_J, KC_K,    KC_L, 	 KC_SCLN,
    // KC_Z ,KC_X, KC_C, KC_V, KC_B,  	KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

 		// KC_LGUI, LT(NUMB, KC_TAB), KC_SPC,									// Left
		// LT(MODS, KC_ENTER), KC_BSPACE, KC_RSHIFT						// Right
    ),

/* Keymap 2: Pad/Function layer
 * ,-----------------------------.       ,-------------------------------.
 * |  1   |  2  |  3  |  4  |  5  |      |  6  |  7  |  8  |  9  |   0   |
 * |-----+-----+-----+-----+------|      |-------------------------------|
 * |  F1  | F2  | F3  | F4  |  F5 |      | LFT | DWN | UP  | RGT | VOLUP |
 * |-----+-----+-----+-----+------+		   |-------------------------------|
 * |  F6  | F7  | F8  | F9  | F10 |      |MLFT | MDWN| MUP | MRGT| VOLDN |
 * `------+-----+-----+------+----'		   `-------------------------------'
 *  				.-----------------.           .-----------------.
 *  				| F11 | F12|	  	|						|     | PLY | SKP |
 *  				'-----------------'           '-----------------'
 */
[1] = LAYOUT_gergoplex(
    KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                  KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,
    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
[2] = LAYOUT_gergoplex(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                    KC_GRAVE,       KC_LBRACKET,    KC_RBRACKET,    KC_LCBR,        KC_RCBR,
    KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                   KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MINUS,
    KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,                   KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_EQUAL,
                                    KC_TRANSPARENT, MO(3),          KC_TRANSPARENT,           KC_TRANSPARENT, KC_RCTRL,       KC_RSHIFT
    ),
[3] = LAYOUT_gergoplex(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,           KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_MS_BTN2,
    KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,           KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_MS_BTN3,
                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,           KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT
    )
};
