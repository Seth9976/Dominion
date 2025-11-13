// 函数: _Z13RectIFromRectRK5RectF
// 地址: 0xc924c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v2 = *(arg1 + 4)
float v1 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
float v4

v4 = v0 < 0f ? v3 : v1

v0 = v0 + v4

v4 = v2 < 0f ? v3 : v1

uint32_t temp0 = vcvts_s32_f32(v0)
v2 = v2 + v4
v0 = *(arg1 + 8)
v4 = *(arg1 + 0xc)
uint64_t result = zx.q(temp0) | zx.q(vcvts_s32_f32(v2)) << 0x20

v2 = v0 < 0f ? v3 : v1

if (v4 < 0f)
    v1 = v3

vcvts_s32_f32(v0 + v2)
vcvts_s32_f32(v4 + v1)
return result
