// 函数: _Z10ColorBlendRK10ColorRgbaIS1_f
// 地址: 0xc1de2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg3
uint32_t x20 = zx.d(*arg1)
uint32_t x21 = zx.d(*(arg1 + 1))
uint32_t x22 = zx.d(*(arg1 + 2))
arg3.b = *arg2
float v1
v1.b = *(arg2 + 1)
float v2
v2.b = *(arg2 + 2)
float v0
float v1_1
float v2_1
v0, v1_1, v2_1 = hue(arg1, arg2)
float v5_1 = float.s(0x437f0000)
uint32_t x9 = zx.d(*(arg1 + 3))
float temp0 = vrndm_f32(v0 * v5_1)
float v3_1 = fconvert.s(0.5f)
float v4_1 = fconvert.s(-0.5f)
float temp0_1 = vrndm_f32(v1_1 * v5_1)
float temp0_2 = vrndm_f32(v2_1 * v5_1)

v5_1 = temp0 < 0f ? v4_1 : v3_1

v0 = temp0 + v5_1

v5_1 = temp0_1 < 0f ? v4_1 : v3_1

char temp0_3 = vcvts_s32_f32(v0)

v1_1 = temp0_2 < 0f ? v4_1 : v3_1

char temp0_4 = vcvts_s32_f32(temp0_1 + v5_1)
v0 = float.s(zx.d(temp0_3) - x20) * v8
uint32_t x8_5 = zx.d(vcvts_s32_f32(temp0_2 + v1_1)) - x22
v1_1 = float.s(zx.d((not.d(x9)).b)) * v8
v2_1 = float.s(zx.d(temp0_4) - x21) * v8
v5_1 = float.s(x8_5) * v8
float v6_1

v6_1 = v0 < 0f ? v4_1 : v3_1

v0 = v0 + v6_1

v6_1 = v2_1 < 0f ? v4_1 : v3_1

char temp0_6 = vcvts_s32_f32(v0)
v0 = v2_1 + v6_1

v2_1 = v5_1 < 0f ? v4_1 : v3_1

char temp0_7 = vcvts_s32_f32(v0)
v0 = v5_1 + v2_1

v2_1 = v1_1 < 0f ? v4_1 : v3_1

char temp0_8 = vcvts_s32_f32(v0)
int64_t result = (-0xff0001 & ((-0xff01
    & ((-0xff000001 & zx.q(x20.b + temp0_6)) | zx.q(x9.b + vcvts_s32_f32(v1_1 + v2_1)) << 0x18))
    | zx.q(x21.b + temp0_7) << 8)) | zx.q(x22.b + temp0_8) << 0x10
return result
