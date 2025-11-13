// 函数: _Z21WindowToSurfaceCoords5Vec2I
// 地址: 0x1066f3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *(gAndroidGlobals + 0x10)
int32_t x9 = *(gAndroidGlobals + 0x14)
uint64_t x10 = *gAppInterface
float v6 = fconvert.s(0.5f)
float v7 = fconvert.s(-0.5f)
float v2 = *(M3I + 0x18)
float v3 = *(M3I + 0x1c)
float v4 = *(M3I + 0x20)
float v16 = float.s(*(x10 + 0x28))
float v17 = float.s(*(x10 + 0x2c))
float v5 = float.s(x11) / v16
float v18 = float.s(x9) / v17

if (not(v5 < v18))
    v5 = v18

v17 = v5 * v17
v16 = v5 * v16

v18 = v17 < 0f ? v7 : v6

if (v16 < 0f)
    v6 = v7

int32_t x9_1 = x9 - vcvts_s32_f32(v17 + v18)
int32_t x10_2 = x11 - vcvts_s32_f32(v16 + v6)
int32_t x10_3

if (x10_2 s< 0)
    x10_3 = x10_2 + 1
else
    x10_3 = x10_2

float v0 = *(M3I + 0xc)
int32_t x9_2

if (x9_1 s< 0)
    x9_2 = x9_1 + 1
else
    x9_2 = x9_1

float v1 = *(M3I + 4)
v6 = float.s(x9_2 s>> 1)
v7 = float.s(x10_3 s>> 1)

if (fabs(v1 * v2 * v6 + v0 * v3 * v7 + v5 * v5 * v4 - v5 * v3 * v6 - v1 * v0 * v4 - v2 * v5 * v7)
        >= float.s(0x3727c5ac))
    return 

*M3I
*(M3I + 8)
*(M3I + 0x10)
*(M3I + 0x14)
