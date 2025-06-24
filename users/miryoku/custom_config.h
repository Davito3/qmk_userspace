// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO


//#define ESC KC_ESC
#define ESC QK_GESC
#define TAB KC_TAB
#define COL KC_SCLN
#define CTL KC_LCTL
#define ALT KC_LALT
//MIRYOKU_NAV=VI

//#define MIRYOKU_LAYERMAPPING_<layer> for per-layer mapping if needed
#define MIRYOKU_MAPPING(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT(\
ESC, KC_1,KC_2,KC_3,KC_4,KC_5,               KC_6,KC_7,KC_8,KC_9,KC_0,XXX,\
TAB, K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, XXX,\
CTL, K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, XXX,\
ALT, K20, K21, K22, K23, K24, XXX,      XXX, K25, K26, K27, K28, K29, XXX,\
                    K32, K33, K34,      K35, K36, K37\
)

// Modified thumb keys. Added number to right side, sym layer overhaul
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_ESC),  LT(U_NUM,KC_ENT),  LT(U_SYM,KC_SPC),  LT(U_MEDIA,KC_BSPC),LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,               KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),       LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_ESC),  LT(U_NUM,KC_ENT),  LT(U_SYM,KC_SPC),  LT(U_MEDIA,KC_BSPC),LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_ASTR,           KC_7,               KC_8,              KC_9,              U_NA,              \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_PPLS,           KC_4,               KC_5,              KC_6,              KC_SCLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_NUM),    U_NA,              KC_MINS,           KC_1,               KC_2,              KC_3,              KC_SLSH,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_EQL,            KC_0,               KC_DOT,            U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NA,              KC_LCBR,           S(KC_LCBR),        KC_LPRN,           S(KC_COMM),        S(KC_DOT),         KC_RPRN,           S(KC_RCBR),         KC_RCBR,           U_NA,              \
KC_EXLM,           KC_AT,             KC_HASH,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_AMPR,           KC_ASTR,            KC_LPRN,           KC_RPRN,           \
KC_TILD,           U_NA,              U_NA,              U_NA,              KC_PIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_NUM),     KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,               U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_APP,            KC_ESC,            KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// info on customization: https://github.com/manna-harbour/miryoku/discussions/85

// to add layer:
// MIRYOKU_X(GAME,    "Game")
// #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING // for default

// to remove layer:
// remove from above list
// and add a #define U_FUN U_NUM
// (for example) to remap all references to the Num layer instead (since layers are referenced from other layers)


