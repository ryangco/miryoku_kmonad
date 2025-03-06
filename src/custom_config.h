// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_LAYER_NAV \
pgup,              home,              up,                end,               ins,               U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_NA,              \
pgdn,              left,              down,              right,             caps,              U_NA,              sft,               ctl,               alt,               met,               \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_DF(U_NAV),       U_DF(U_NUM),       ralt,              U_NA,              \
U_NP,              U_NP,              esc,               spc,               tab,               U_NA,               U_NA,              U_NA,               U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,              U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              sysrq,             f7,                f8,                f9,                f12,               \
met,               alt,               ctl,               sft,               U_NA,              slck,              f4,                f5,                f6,                f11,               \
U_NA,              ralt,              U_DF(U_MEDIA),     U_DF(U_FUN),       U_NA,              pause,             f1,                f2,                f3,                f10,               \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              ent,               bspc,              del,               U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NU,              U_NU,              volu,              U_NU,              U_NU,              U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_NA,              \
U_NU,              previoussong,      vold,              nextsong,          U_NU,              U_NA,              sft,               ctl,               alt,               met,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NA,              U_DF(U_MEDIA),     U_DF(U_FUN),       ralt,              U_NA,              \
U_NP,              U_NP,              mute,              playpause,         stopcd,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
q,                 w,                 f,                 p,                 b,                 j,                 l,                 u,                 y,                 U_QUOT,            \
U_MT(a, met),      U_MT(r, alt),      U_MT(s, ctl),      U_MT(t, sft),      g,                 m,                 U_MT(n, sft),      U_MT(e, ctl),      U_MT(i, alt),      U_MT(o, met),      \
U_LT(z, U_BUTTON), U_MT(x, ralt),     c,                 d,                 v,                 k,                 h,                 U_COMM,            U_MT(., ralt),     U_LT(/, U_BUTTON), \
U_NP,              U_NP,              U_LT(esc, U_FUN),U_LT(spc, U_NUM),  U_LT(tab, U_SYM),U_LT(ent, U_MOUSE),  U_LT(bspc, U_NAV), U_LT(del, U_MEDIA),  U_NP,              U_NP
