// 函数: _Z14ViewPortMatrixRK5RectF
// 地址: 0xc9e734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *arg1
float v3 = *(arg1 + 4)
float v0 = *(arg1 + 8) - v2
int128_t v6 = *(M40 + 0x10)
int128_t v5 = *(M40 + 0x20)
int128_t v4 = *(M40 + 0x2c)
float v1 = *(arg1 + 0xc) - v3
int128_t* entry_x8
*entry_x8 = *M40
entry_x8[1] = v6
*entry_x8 = v0
entry_x8[2] = v5
*(entry_x8 + 0x2c) = v4
*(entry_x8 + 0x28) = 0x3f800000
*(entry_x8 + 0xc) = v2 + v0
*(entry_x8 + 0x14) = fneg(v1)
*(entry_x8 + 0x1c) = v3 + v1
*(entry_x8 + 0x3c) = 0x3f800000
