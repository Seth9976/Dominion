// 函数: _Z28AndroidMatrixLogicalToScreenv
// 地址: 0x10694e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x12 = *(gAndroidGlobals + 0x10)
int32_t x9 = *(gAndroidGlobals + 0x14)
uint64_t x10 = *gAppInterface
float v0 = fconvert.s(0.5f)
int128_t v2 = *(M3I + 0x10)
float v5 = *(x10 + 0x28)
int32_t v6 = *(x10 + 0x2c)
float v1 = fconvert.s(-0.5f)
int128_t* entry_x8
*entry_x8 = *M3I
entry_x8[1] = v2
v2.d = float.s(x9)
int128_t v3
v3.d = float.s(v5)
v5 = float.s(v6)
float v4 = float.s(x12) f/ v3.d
v2.d = v2.d f/ v5

if (v4 f< v2.d)
    v2.d = v4
else
    v2.d = v2.d

v4 = v2.d f* v5
v3.d = v2.d f* v3.d

v5 = v4 < 0f ? v1 : v0

if (v3.d f< 0f)
    v0 = v1

int32_t x13 = *(M3I + 0x20)
int32_t x9_1 = x9 - vcvts_s32_f32(v4 + v5)
int32_t x10_2 = x12 - vcvts_s32_f32(v3.d f+ v0)
int32_t x10_3

if (x10_2 s< 0)
    x10_3 = x10_2 + 1
else
    x10_3 = x10_2

int32_t x9_2

if (x9_1 s< 0)
    x9_2 = x9_1 + 1
else
    x9_2 = x9_1

entry_x8[2].d = x13
*entry_x8 = v2.d
*(entry_x8 + 8) = float.s(x10_3 s>> 1)
entry_x8[1].d = v2.d
*(entry_x8 + 0x14) = float.s(x9_2 s>> 1)
