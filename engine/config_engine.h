#include "engine.h"

// Configuration options for the engine

#define C_SIZE uint16_t  // type for chord
#define COMBO_MAX 4      // Longest Combo

// Key Aliases, must fit within C_SIZE!
// These are for Whitefox + Asetniop
#define GA STN(0)
#define GS STN(1)
#define GE STN(2)
#define GT STN(3)
#define GN STN(4)
#define GI STN(5)
#define GO STN(6)
#define GP STN(7)

#define GL STN(8)  // Left/Right thumbs
#define GR STN(9)

#define NUM STN(10)  // Sticky Layer 1
#define CMD STN(11)  // Sticky Layer 2
#define USR STN(12)  // Sticky Layer 3
#define SFT STN(13)  // Shift Bit Vector

// Chord to start buffering strokes
#define COMMAND_MODE (GL | GR)

// Mapping of QMK Keycodes to chord positions
#define ENGINE_CONFIG         \
    ENGINE_HOOK(KC_A, GA)     \
    ENGINE_HOOK(KC_S, GS)     \
    ENGINE_HOOK(KC_D, GE)     \
    ENGINE_HOOK(KC_F, GT)     \
    ENGINE_HOOK(KC_G, GL)     \
    ENGINE_HOOK(KC_H, GR)     \
    ENGINE_HOOK(KC_J, GN)     \
    ENGINE_HOOK(KC_K, GI)     \
    ENGINE_HOOK(KC_L, GO)     \
    ENGINE_HOOK(KC_SCLN, GP)
