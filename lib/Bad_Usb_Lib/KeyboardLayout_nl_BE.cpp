#include "KeyboardLayout.h"

extern const uint8_t KeyboardLayout_nl_BE[128] PROGMEM = 
{
    // ASCII 0x00 - 0x1F (control chars)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x00 - 0x07
    0x00, 0x2a, 0x2b, 0x28, 0x00, 0x00, 0x00, 0x00, // 0x08 - 0x0F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x10 - 0x17
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x18 - 0x1F

    // ASCII 0x20 - 0x2F
    0x2c,             // SPACE
    0x1e|SHIFT,       // !
    0x1f|ALT_GR,      // "
    0x20|SHIFT,       // #
    0x21|SHIFT,       // $
    0x22|SHIFT,       // %
    0x23|SHIFT,       // &
    0x31,             // '
    0x25|SHIFT,       // (
    0x26|SHIFT,       // )
    0x30|SHIFT,       // *
    0x30,             // +
    0x36,             // ,
    0x38,             // -
    0x37,             // .
    0x24|SHIFT,       // /

    // ASCII 0x30 - 0x39 (digits)
    0x27,             // 0
    0x1e,             // 1
    0x1f,             // 2
    0x20,             // 3
    0x21,             // 4
    0x22,             // 5
    0x23,             // 6
    0x24,             // 7
    0x25,             // 8
    0x26,             // 9

    // ASCII 0x3A - 0x40
    0x33|SHIFT,       // :
    0x33,             // ;
    0x36|SHIFT,       // <
    0x27|SHIFT,       // =
    0x37|SHIFT,       // >
    0x2d|SHIFT,       // ?
    0x1f|SHIFT,       // @ (AZERTY does not have @ directly; usually ALTGR+2)

    // ASCII 0x41 - 0x5A (uppercase letters)
    0x14|SHIFT,       // A
    0x05|SHIFT,       // B
    0x06|SHIFT,       // C
    0x07|SHIFT,       // D
    0x08|SHIFT,       // E
    0x09|SHIFT,       // F
    0x0a|SHIFT,       // G
    0x0b|SHIFT,       // H
    0x0c|SHIFT,       // I
    0x0d|SHIFT,       // J
    0x0e|SHIFT,       // K
    0x0f|SHIFT,       // L
    0x10|SHIFT,       // M
    0x11|SHIFT,       // N
    0x12|SHIFT,       // O
    0x13|SHIFT,       // P
    0x04|SHIFT,       // Q
    0x15|SHIFT,       // R
    0x16|SHIFT,       // S
    0x17|SHIFT,       // T
    0x18|SHIFT,       // U
    0x19|SHIFT,       // V
    0x1d|SHIFT,       // W
    0x1b|SHIFT,       // X
    0x1c|SHIFT,       // Y
    0x1a|SHIFT,       // Z

    // ASCII 0x5B - 0x60
    0x2f|ALT_GR,      // [
    0x64,             // backslash (non-US ISO)
    0x30|ALT_GR,      // ]
    0x23|ALT_GR,      // ^
    0x2e|ALT_GR,      // _
    0x14|ALT_GR,      // ` (not directly on AZERTY)

    // ASCII 0x61 - 0x7A (lowercase letters)
    0x14,             // a
    0x05,             // b
    0x06,             // c
    0x07,             // d
    0x08,             // e
    0x09,             // f
    0x0a,             // g
    0x0b,             // h
    0x0c,             // i
    0x0d,             // j
    0x0e,             // k
    0x0f,             // l
    0x10,             // m
    0x11,             // n
    0x12,             // o
    0x13,             // p
    0x04,             // q
    0x15,             // r
    0x16,             // s
    0x17,             // t
    0x18,             // u
    0x19,             // v
    0x1d,             // w
    0x1b,             // x
    0x1c,             // y
    0x1a,             // z

    // ASCII 0x7B - 0x7F
    0x2f|SHIFT,       // {
    0x64|SHIFT,       // |
    0x30|SHIFT,       // }
    0x23|SHIFT,       // ~
    0x00              // DEL (not mapped)
};
