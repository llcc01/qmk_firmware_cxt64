/* Copyright 2020 noroadsleft
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT_64_ansi(
//         KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
//         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,
//         KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
//         KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   MO(1),
//         KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
//     ),
//     [1] = LAYOUT_64_ansi(
//         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_DEL,
//         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL,          KC_PAUS,
//         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
//         _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
//         _______, _______, _______,                            _______,                            _______, MO(2),   KC_HOME, KC_PGDN, KC_END
//     ),
//     [2] = LAYOUT_64_ansi(
//         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
//         _______, _______, _______, _______, QK_BOOT,   _______, _______, _______, _______, _______, _______, _______, _______,          _______,
//         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
//         _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//         _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______
//     )
// };

#include "cxt64.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_HOME, KC_UP, KC_END,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT),

	KEYMAP(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, RGB_HUD, KC_TRNS, RGB_VAD, KC_PGUP, RGB_VAI,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_PGDN, KC_TRNS),

};

led_config_t g_led_config = {

{
	{ 65,  64,  63,  62,  61,  60,  59,  58,  57,  56,  55,  54,  53,  52 },
	{ 51,  50,  49,  48,  47,  46,  45,  44,  43,  42,  41,  40,  39,  38 },
	{ 37,  36,  35,  34,  33,  32,  31,  30,  29,  28,  27,  26, NO_LED,  25 },
	{ 24,  23,  22,  21,  20,  19,  18,  17,  16,  15,  14,  13,  12,     11 },
	{ 10,  9,   8,   7,  NO_LED,  6,  NO_LED,  5,  NO_LED,  4,  3,  2,  1,  0 }
},
{
	/* LED Index to Physical Position */
	{224,64},{207,64},{190,64},{172,64},{155,64},           {121,64},         {86,64},       {52,64},{34,64},{17,64},{0,64},
	{224,48},{207,48},{190,48},{172,48},{155,48},{138,48}, {121,48},{103,48},{86,48},{69,48},{52,48},{34,48},{17,48},{0,48},
	{224,32},         {190,32},{172,32},{155,32},{138,32}, {121,32},{103,32},{86,32},{69,32},{52,32},{34,32},{17,32},{0,32},
	{224,16},{207,16},{190,16},{172,16},{155,16},{138,16}, {121,16},{103,16},{86,16},{69,16},{52,16},{34,16},{17,16},{0,16},
	{224,0}, {207,0}, {190,0}, {172,0}, {155,0}, {138,0},  {121,0}, {103,0}, {86,0}, {69,0}, {52,0}, {34,0}, {17,0}, {0,0}
},

// 分组，如果没有自己做灯光的需求用处其实不大
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1,    1,    1,    1, 1, 1, 1, 1
}
};

bool rgb_matrix_indicators_user(void) {
	if (IS_LED_ON(host_keyboard_leds(), USB_LED_CAPS_LOCK)) {
		rgb_matrix_set_color(37, 0xFF, 0xFF, 0xFF);
		rgb_matrix_set_color(24, 0xFF, 0xFF, 0xFF);
		return true;
	}
	return false;
}
