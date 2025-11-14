// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

//#define ESC KC_ESC
#define ESC QK_GESC
#define QKR QK_REP
#define TAB KC_TAB
#define COL KC_SCLN
#define CTL KC_LCTL
#define ALT KC_LALT

#define CHORDAL_HOLD
#define PERMISSIVE_HOLD
//#define HOLD_ON_OTHER_KEY_PRESS
#define COMBO_TERM TAPPING_TERM
#define EXTRA_SHORT_COMBOS

#define MIRYOKU_CLIPBOARD_WIN

//#define MIRYOKU_LAYERMAPPING_<layer> for per-layer mapping if needed
#define MIRYOKU_MAPPING(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39\
)\
LAYOUT(\
ESC, KC_1,KC_2,KC_3,KC_4,KC_5,               KC_6,KC_7,KC_8,KC_9,KC_0,TD(U_TD_U_BASE),\
TAB, K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, QKR,\
CTL, K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, COL,\
ALT, K20, K21, K22, K23, K24, XXX,      XXX, K25, K26, K27, K28, K29, XXX,\
                    K32, K33, K34,      K35, K36, K37\
)

// ALT, K20, K21, K22, K23, K24, DT_DOWN,DT_UP, K25, K26, K27, K28, K29, DT_PRNT


// Modified thumb keys. Sym layer overhaul
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MOUSE,LTOSM), LT(U_NAV,KC_BSPC), LT(U_NUM,KC_ENT),  LT(U_MEDIA,KC_SPC),LT(U_SYM,KC_DEL),   LT(U_FUN,KC_ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,               KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),       LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MOUSE,LTOSM), LT(U_NAV,KC_BSPC), LT(U_NUM,KC_ENT),  LT(U_MEDIA,KC_SPC),LT(U_SYM,KC_DEL),   LT(U_FUN,KC_ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_ASTR,           KC_7,               KC_8,              KC_9,              KC_EQL,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_PPLS,           KC_4,               KC_5,              KC_6,              KC_COLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_MEDIA),  TD(U_TD_U_NUM),    U_NA,              KC_MINS,           KC_1,               KC_2,              KC_3,              KC_SLSH,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_SPC,            KC_0,               KC_DOT,            U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
LABPWD,            KC_LBRC,           KC_LCBR,           KC_LPRN,           KC_LT,             KC_GT,             KC_RPRN,           KC_RCBR,            KC_RBRC,           KC_PPLS,           \
KC_EXLM,           KC_AT,             KC_HASH,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_AMPR,           KC_ASTR,            KC_SCLN,           KC_COLN,           \
KC_TILD,           KC_LT,             KC_GT,             KC_EQL,            KC_PIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_NAV),     KC_ALGR,           KC_BSLS,           \
U_NP,              U_NP,              KC_MINS,           KC_UNDS,           KC_ENT,            U_NA,              U_NA,              U_NA,               U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_COLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_SPC,            KC_DEL,            KC_ESC,            U_NP,              U_NP

// non-vi motion positions (home-row nav)
/*
#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_MEDIA),  TD(U_TD_U_NAV),    U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_SPC,            KC_BSPC,           KC_DEL,            U_NP,              U_NP
*/

#define MIRYOKU_LAYER_MEDIA \
UG_NEXT,           UG_HUEU,           UG_SATU,           UG_VALU,           UG_TOGG,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              OU_AUTO,           U_NA,              TD(U_TD_U_MEDIA),  TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Vim motions mouse
/*
#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              MS_LEFT,           MS_DOWN,           MS_UP,             MS_RGHT,           U_NU,              \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MOUSE),  U_NA,              MS_WHLL,           MS_WHLD,           MS_WHLU,           MS_WHLR,           U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              MS_BTN2,           MS_BTN1,           MS_BTN3,           U_NP,              U_NP
*/

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_NU,              MS_WHLL,           MS_UP,             MS_WHLR,           MS_WHLU,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              MS_LEFT,           MS_DOWN,           MS_RGHT,           MS_WHLD,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MOUSE),  U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              MS_BTN2,           MS_BTN1,           MS_BTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_APP,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_TAB,            KC_BSPC,           KC_ENT,            KC_SPC,            KC_DEL,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_DEL,            U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              MS_BTN3,           MS_BTN1,           MS_BTN2,           MS_BTN2,           MS_BTN1,           MS_BTN3,           U_NP,              U_NP

// info on customization: https://github.com/manna-harbour/miryoku/discussions/85

// to add layer ex:
// MIRYOKU_X(GAME,    "Game")
// #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING // for default, or add custom

// to remove layer:
// remove from above list
// and add a #define U_FUN U_NUM
// (for example) to remap all references to the Num layer instead (since layers are referenced from other layers)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")


