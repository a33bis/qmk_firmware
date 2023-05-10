/* Copyright 2023 Gabriel Levrel (@a33bis)
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

enum _layer {
  _QWERTY,
  _QGMLWB,
  _ENGRAM,
  _OVERRIDE,
  _FN,
  _TOP,
  _FRONT,
  _ADJUST,
};

enum unicode_names {
    WEDGE,
    BWEDGE,
    VEE,
    BVEE,
    CAP,
    BCAP,
    CUP,
    BCUP,
    SUB,
    IN,
    SUP,
    NI,
    FORALL,
    PROD,
    INFTY,
    EXISTS,
    SUM,
    PARTIAL,
    BOT,
    TOP,
    VDASH,
    VVDASH,
    DASHV,
    DASHVV,
    UP,
    DUP,
    DOWN,
    DDOWN,
    LEFT,
    DLEFT,
    RIGHT,
    DRIGHT,
    LEFTRIGHT,
    DLEFTRIGHT,
    LFLOOR,
    RFLOOR,
    LCEIL,
    RCEIL,
    NEQ,
    SIMEQ,
    EQUIV,
    LEQ,
    GEQ,
    SECTION,
    DAGGER,
    DDAGGER,
    NABLA,
    INCREMENT,
    CENT,
    JOT,
    QUAD,
    DIV,
    MULT,
    PILCROW,
    CIRC,
    OVERLINE,
    APPROX,
    SQSUB,
    SQSUP,
    LLBRACKET,
    RRBRACKET,
    NEG,
    DIAERESIS,
    BULLET,
    LL,
    GG,
    INT,
    LALP,
    LBET,
    LGAM,
    LDEL,
    LEPS,
    LZET,
    LETA,
    LTHE,
    LIOT,
    LKAP,
    LLAM,
    LMU,
    LNU,
    LXI,
    LOMI,
    LPI,
    LRHO,
    FSIG,
    LSIG,
    LTAU,
    LUPS,
    LPHI,
    LCHI,
    LPSI,
    LOME,
    VTHE,
    UALP,
    UBET,
    UGAM,
    UDEL,
    UEPS,
    UZET,
    UETA,
    UTHE,
    UIOT,
    UKAP,
    ULAM,
    UMU,
    UNU,
    UXI,
    UOMI,
    UPI,
    URHO,
    USIG,
    UTAU,
    UUPS,
    UPHI,
    UCHI,
    UPSI,
    UOME,
};

const uint32_t unicode_map[] PROGMEM = {
    // TOP
    [WEDGE] = 0x2227, // ∧
    [BWEDGE] = 0x22C0, // ⋀

    [VEE] = 0x2228, // ∨
    [BVEE] = 0x22C1, // ⋁

    [CAP] = 0x2229, // ∩
    [BCAP] = 0x22C2, // ⋂

    [CUP] = 0x222A, // ∪
    [BCUP] = 0x22C3, // ⋃

    [SUB] = 0x2282, // ⊂
    [IN] = 0x2208,// ∈

    [SUP] = 0x2283, // ⊃
    [NI] = 0x220B, // ∋

    [FORALL] = 0x2200, // ∀
    [PROD] = 0x220F, // ∏

    [INFTY] = 0x221E, // ∞

    [EXISTS] = 0x2203, // ∃
    [SUM] = 0x2211,// ∑

    [PARTIAL] = 0x2202, // ∂

    [BOT] = 0x22A5, //  ⊥

    [TOP] = 0x22A4, // ⊤

    [VDASH] = 0x22A2, // ⊢
    [VVDASH] = 0x22A8, // ⊨

    [DASHV] = 0x22A3, // ⊣
    [DASHVV] = 0x2AE4, // ⫤

    [UP] = 0x2191, // ↑
    [DUP] = 0x21D1, // ⇑

    [DOWN] = 0x2193, // ↓
    [DDOWN] = 0x21D3, // ⇓

    [LEFT] = 0x2190, // ←
    [DLEFT] = 0x21D0, // ⇐

    [RIGHT] = 0x2192, // →
    [DRIGHT] = 0x21D2 , // ⇒

    [LEFTRIGHT] = 0x2194, // ↔
    [DLEFTRIGHT] = 0x21D4, // ⇔

    [LFLOOR] = 0x230A, // ⌊
    [RFLOOR] = 0x230B, // ⌋

    [LCEIL] = 0x2308, // ⌈
    [RCEIL] = 0x2309, // ⌉

    [NEQ] = 0x2260, // ≠

    [SIMEQ] = 0x2243, // ≃

    [EQUIV] = 0x2261, // ≡

    [LEQ] = 0x2264, // ≤

    [GEQ] = 0x2265, // ≥

    // ROW 0
    [SECTION] = 0x222E, // §

    [DAGGER] = 0x03EF, // †

    [DDAGGER] = 0x2021, // ‡

    [NABLA] = 0x2207, // ∇
    [INCREMENT] = 0x2206, // ∆

    [CENT] = 0x00A2, // ¢

    [JOT] = 0x2218, // ∘

    [QUAD] = 0x2395, // ⎕

    [DIV] = 0x00F7, // ÷

    [MULT] = 0x00D7, // ×

    [PILCROW] = 0x00B6, // ¶

    [CIRC] = 0x25CB, // ○

    [OVERLINE] = 0x203E, // ‾

    [APPROX] = 0x2248, // ≈

    [SQSUB] = 0x228F, // ⊏

    [SQSUP] = 0x2290, // ⊐

    // ROW 1
    [LTHE] = 0x03B8, // θ
    [UTHE] = 0x0398, // Θ

    [LOME] = 0x03C9, // ω
    [UOME] = 0x03A9, // Ω

    [LEPS] = 0x03B5, // ϵ
    [UEPS] = 0x0395, // Ε

    [LRHO] = 0x03C1, // ρ
    [URHO] = 0x03A1, // Ρ

    [LTAU] = 0x03C4, // τ
    [UTAU] = 0x03A4, // Τ

    [LPSI] = 0x03C8, // ψ
    [UPSI] = 0x03A8, // Ψ

    [LUPS] = 0x03C5, // υ
    [UUPS] = 0x03A5, // Υ

    [LIOT] = 0x03B9, // ι
    [UIOT] = 0x0399, // Ι

    [LOMI] = 0x03BF, // ο
    [UOMI] = 0x039F, // Ο

    [LPI] = 0x03C0, // π
    [UPI] = 0x03A0, // Π

    [LLBRACKET] = 0x27E6, // ⟦

    [RRBRACKET] = 0x27E7, // ⟧

    [NEG] = 0x00AC, // ¬

    // ROW 2
    [LALP] = 0x03B1, // α
    [UALP] = 0x0391, // Α

    [LDEL] = 0x03B4, // δ
    [UDEL] = 0x0394, // Δ

    [LSIG] = 0x03C3, // σ
    [USIG] = 0x03A3, // Σ

    [LPHI] = 0x03C6, // ϕ
    [UPHI] = 0x03A6, // Φ

    [LGAM] = 0x03B3, // γ
    [UGAM] = 0x0393, // Γ

    [LETA] = 0x03B7, // η
    [UETA] = 0x0397, // Η

    [VTHE] = 0x03D1, // ϑ

    [LKAP] = 0x03BA, // κ
    [UKAP] = 0x039A, // Κ

    [LLAM] = 0x03BB, // λ
    [ULAM] = 0x039B, // Λ

    [DIAERESIS] = 0x00A8, // ¨

    [BULLET] = 0x2022, // •

    // ROW 3
    [LZET] = 0x03B6, // ζ
    [UZET] = 0x0396, // Ζ

    [LXI] = 0x03BE, // ξ
    [UXI] = 0x039E, // Ξ

    [LCHI] = 0x03C7, // χ
    [UCHI] = 0x03A7, // Χ

    [FSIG] = 0x03C2,// ς

    [LBET] = 0x03B2, // β
    [UBET] = 0x0392, // Β

    [LNU] = 0x03BD, // ν
    [UNU] = 0x039D, // Ν

    [LMU] = 0x03BC, // μ
    [UMU] = 0x039C, // Μ

    [LL] = 0x226A, // ≪

    [GG] = 0x226B, // ≫

    [INT] = 0x222B, // ∫
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_60_hhkb(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
    KC_LSFT,             KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, TL_LOWR,
             KC_LGUI, KC_LALT,                             KC_SPC,                                     KC_RALT, TL_UPPR),

[_QGMLWB] = LAYOUT_60_hhkb(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV,
     KC_TAB,    KC_Q,    KC_G,    KC_M,    KC_L,    KC_W,    KC_B,    KC_Y,    KC_U,    KC_V, KC_SCLN, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL,    KC_D,    KC_S,    KC_T,    KC_N,    KC_R,    KC_I,    KC_A,    KC_E,    KC_O,    KC_H, KC_QUOT,           KC_ENT,
    KC_LSFT,             KC_Z,    KC_X,    KC_C,    KC_F,    KC_J,    KC_K,    KC_P, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, TL_LOWR,
             KC_LGUI, KC_LALT,                             KC_SPC,                                     KC_RALT, TL_UPPR),

[_ENGRAM] = LAYOUT_60_hhkb(
    KC_LBRC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_RBRC, KC_SLSH,   KC_AT,  KC_ESC,
     KC_TAB,    KC_B,    KC_Y,    KC_O,    KC_U, KC_QUOT, KC_DQUO,    KC_L,    KC_D,    KC_W,    KC_V,    KC_Z, KC_HASH, KC_BSPC,
    KC_LCTL,    KC_C,    KC_I,    KC_E,    KC_A, KC_COMM,  KC_DOT,    KC_H,    KC_T,    KC_S,    KC_N,    KC_Q,           KC_ENT,
    KC_LSFT,             KC_G,    KC_X,    KC_J,    KC_K, KC_MINS, KC_QUES,    KC_R,    KC_M,    KC_F,    KC_P, KC_RSFT, TL_LOWR,
             KC_LGUI, KC_LALT,                             KC_SPC,                                     KC_RALT, TL_UPPR),

[_OVERRIDE] = LAYOUT_60_hhkb(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
             _______, _______,                            _______,                                     _______, MO(_FRONT)),

[_FN] = LAYOUT_60_hhkb(
     KC_PWR,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, _______, KC_BRID, KC_BRIU, KC_PSCR, KC_SCRL, KC_PAUS,   KC_UP, _______,  KC_CLR,
    CW_TOGG, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          KC_PENT,
    DM_RSTP,          DM_REC1, DM_REC2, _______, _______, _______, KC_PPLS, KC_PMNS,  KC_END, KC_PGDN, KC_DOWN, _______, _______,
             DM_PLY1, DM_PLY2,                            _______,                                     KC_STOP, _______),

[_TOP] = LAYOUT_60_hhkb(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, XP(WEDGE, BWEDGE), XP(VEE, BVEE), XP(CAP, BCAP), XP(CUP, BCUP), XP(SUB, IN), XP(SUP, NI), XP(FORALL, PROD), X(INFTY), XP(EXISTS, SUM), X(PARTIAL), _______, _______, _______,
    _______, X(BOT), X(TOP), XP(VDASH, VVDASH), XP(DASHV, DASHVV), XP(UP, DUP), XP(DOWN, DDOWN), XP(LEFT, DLEFT), XP(RIGHT, DRIGHT), XP(LEFTRIGHT, DLEFTRIGHT), _______, _______,          _______,
    _______,          XP(LFLOOR, RFLOOR), XP(LCEIL, RCEIL), X(NEQ), X(SIMEQ), X(EQUIV), X(LEQ), X(GEQ), _______, _______, _______, _______, _______,
             _______, _______,                            _______,                                     MO(_FRONT), _______),

[_FRONT] = LAYOUT_60_hhkb(
    X(SECTION), X(DAGGER), X(DDAGGER), XP(NABLA, INCREMENT), X(CENT), X(JOT), X(QUAD), X(DIV), X(MULT), X(PILCROW), X(CIRC), X(OVERLINE), X(APPROX), X(SQSUB), X(SQSUP),
    _______, XP(LTHE, UTHE), XP(LOME, UOME), XP(LEPS, UEPS), XP(LRHO, URHO), XP(LTAU, UTAU), XP(LPSI, UPSI), XP(LUPS, UUPS), XP(LIOT, UIOT), XP(LOMI, UOMI), XP(LPI, UPI), X(LLBRACKET), X(RRBRACKET), X(NEG),
    _______, XP(LALP, UALP), XP(LSIG, USIG), XP(LDEL, UDEL), XP(LPHI, UPHI), XP(LGAM, UGAM), XP(LETA, UETA), XP(VTHE, UTHE), XP(LKAP, UKAP), XP(LLAM, ULAM), X(DIAERESIS), X(BULLET),          KC_PENT,
    _______,          XP(LZET, UZET), XP(LXI, UXI), XP(LCHI, UCHI), XP(FSIG, USIG), XP(LBET, UBET), XP(LNU, UNU), XP(LMU, UMU), X(LL), X(GG), X(INT), _______, _______,
             _______, _______,                            _______,                                     _______, _______),

[_ADJUST] = LAYOUT_60_hhkb(
    QK_BOOT, DF(_QWERTY), DF(_QGMLWB), DF(_ENGRAM), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EE_CLR,
    AG_TOGG, UC_PREV, UC_NEXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    GU_TOGG, UC_LINX, UC_EMAC,  UC_MAC, UC_WINC, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
             _______, _______,                            _______,                                     _______, _______),

};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This is called when the override activates and deactivates. Enable the fn layer on activation and disable on deactivation
bool momentary_layer(bool key_down, void *layer) {
    if (key_down) {
        layer_on((uint8_t)(uintptr_t)layer);
    } else {
        layer_off((uint8_t)(uintptr_t)layer);
    }

    return false;
}

const key_override_t ralt_override = {
    .trigger_mods          = MOD_BIT(KC_RALT),
    .layers                = ~(1 << _OVERRIDE),
    .suppressed_mods       = 0,
    .options               = ko_option_no_unregister_on_other_key_down,
    .negative_mod_mask     = (uint8_t) 0,
    .custom_action         = momentary_layer,
    .context               = (void *)_OVERRIDE,
    .trigger               = KC_NO,
    .replacement           = KC_NO,
    .enabled               = NULL
};

const key_override_t one_key_override   = ko_make_with_layers(MOD_MASK_SHIFT, KC_1,    KC_PIPE, (1 << _ENGRAM));
const key_override_t two_key_override   = ko_make_with_layers(MOD_MASK_SHIFT, KC_2,    KC_EQL,  (1 << _ENGRAM));
const key_override_t three_key_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_3,    KC_TILD, (1 << _ENGRAM));
const key_override_t four_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_4,    KC_PLUS, (1 << _ENGRAM));
const key_override_t five_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_5,    KC_LT,   (1 << _ENGRAM));
const key_override_t six_key_override   = ko_make_with_layers(MOD_MASK_SHIFT, KC_6,    KC_GT,   (1 << _ENGRAM));
const key_override_t seven_key_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_7,    KC_CIRC, (1 << _ENGRAM));
const key_override_t eight_key_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_8,    KC_AMPR, (1 << _ENGRAM));
const key_override_t nine_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_9,    KC_PERC, (1 << _ENGRAM));
const key_override_t zero_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_0,    KC_ASTR, (1 << _ENGRAM));
const key_override_t slsh_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS, (1 << _ENGRAM));
const key_override_t at_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, KC_AT,   KC_GRV,  (1 << _ENGRAM));
const key_override_t quot_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOT, KC_LPRN, (1 << _ENGRAM));
const key_override_t dquo_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_DQUO, KC_RCBR, (1 << _ENGRAM));
const key_override_t hash_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_HASH, KC_DLR,  (1 << _ENGRAM));
const key_override_t comm_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, KC_SCLN, (1 << _ENGRAM));
const key_override_t dot_key_override   = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT,  KC_COLN, (1 << _ENGRAM));
const key_override_t ques_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUES, KC_EXLM, (1 << _ENGRAM));

const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &ralt_override,
    &one_key_override,
    &two_key_override,
    &three_key_override,
    &four_key_override,
    &five_key_override,
    &six_key_override,
    &seven_key_override,
    &eight_key_override,
    &nine_key_override,
    &zero_key_override,
    &slsh_key_override,
    &at_key_override,
    &quot_key_override,
    &dquo_key_override,
    &hash_key_override,
    &comm_key_override,
    &dot_key_override,
    &ques_key_override,
    NULL
};
