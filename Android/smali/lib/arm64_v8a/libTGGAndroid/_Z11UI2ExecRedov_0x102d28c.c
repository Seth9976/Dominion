// 函数: _Z11UI2ExecRedov
// 地址: 0x102d28c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(gUI2Editor + 0x88060))

if (x8.d s>= *(gUI2Editor + 0x88064))
    return 

*(gUI2Editor + 0x8806a) = 1
*(gUI2Editor + 0x88060) = x8.d + 1
UI2RestoreUndoState(gUI2Editor + x8 * 0x1020 + 0x7060)
UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x8806a) = 0
