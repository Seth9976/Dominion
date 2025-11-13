// 函数: _Z21SurfaceToWindowCoords4Vec2
// 地址: 0x10695ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *(gAndroidGlobals + 0x10)
int32_t x8 = *(gAndroidGlobals + 0x14)
uint64_t x9 = *gAppInterface
float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
float v16 = float.s(*(x9 + 0x28))
float v17 = float.s(*(x9 + 0x2c))
float v6 = float.s(x11) / v16
float v7 = float.s(x8) / v17

if (not(v6 < v7))
    v6 = v7

v7 = v6 * v17
float entry_v0
float v5 = entry_v0 * *(M3I + 0xc)
v16 = v6 * v16
float entry_v1
entry_v0 = entry_v1 * *(M3I + 4) + entry_v0 * v6
float v4

v4 = v7 < 0f ? v3 : v2

entry_v1 = v5 + entry_v1 * v6

v5 = v16 < 0f ? v3 : v2

int32_t x8_1 = x8 - vcvts_s32_f32(v7 + v4)
int32_t x9_2 = x11 - vcvts_s32_f32(v16 + v5)
int32_t x9_3

if (x9_2 s< 0)
    x9_3 = x9_2 + 1
else
    x9_3 = x9_2

int32_t x8_2

if (x8_1 s< 0)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

entry_v0 = entry_v0 + float.s(x9_3 s>> 1)
entry_v1 = entry_v1 + float.s(x8_2 s>> 1)

v4 = entry_v0 < 0f ? v3 : v2

if (entry_v1 < 0f)
    v2 = v3

return zx.q(vcvts_s32_f32(entry_v0 + v4)) | zx.q(vcvts_s32_f32(entry_v1 + v2)) << 0x20
