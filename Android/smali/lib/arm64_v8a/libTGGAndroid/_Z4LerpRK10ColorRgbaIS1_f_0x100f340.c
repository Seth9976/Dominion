// 函数: _Z4LerpRK10ColorRgbaIS1_f
// 地址: 0x100f340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(arg3 != 0f))
    return zx.q(*arg1)

uint32_t x8_1 = zx.d(*arg1)
uint32_t x10 = zx.d(*(arg1 + 1))
uint32_t x12 = zx.d(*(arg1 + 3))
uint32_t x9_2 = zx.d(*(arg1 + 2))
float v1 = float.s(zx.d(*arg2) - x8_1) * arg3
float v3 = fconvert.s(0.5f)
float v4 = fconvert.s(-0.5f)
float v2 = float.s(zx.d(*(arg2 + 1)) - x10) * arg3
float v5 = float.s(zx.d(*(arg2 + 2)) - x9_2) * arg3
arg3 = float.s(zx.d(*(arg2 + 3)) - x12) * arg3
float v6

v6 = v1 < 0f ? v4 : v3

uint32_t temp0 = vcvts_s32_f32(v1 + v6)

v1 = v2 < 0f ? v4 : v3

char temp0_1 = vcvts_s32_f32(v2 + v1)

v1 = v5 < 0f ? v4 : v3

v2 = arg3 < 0f ? v4 : v3

int32_t x8_5 = (0xffffff & ((0xff00ffff
    & ((0xffff00ff & (x8_1 + temp0)) | zx.d(x10.b + temp0_1) << 8))
    | zx.d(x9_2.b + vcvts_s32_f32(v5 + v1)) << 0x10)) | zx.d(x12.b + vcvts_s32_f32(arg3 + v2)) << 0x18
return zx.q(x8_5)
