// 函数: _Z25FlanimGetCurrentFrameTimeP6FlanimP15FlanimFrameTime
// 地址: 0xf63c3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg1 + 0x10)
int32_t x9 = *(arg1 + 0x14) - 1
float v0 = *(arg1 + 8) * float.s(x9) + float.s(x8_3)
float temp0 = vrndm_f32(v0)
float v1

if (temp0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

int32_t x8 = x9 + x8_3
uint32_t temp0_1 = vcvts_s32_f32(temp0 + v1)
float v2 = 0f
uint32_t x8_1

if (x8 s> temp0_1)
    x8_1 = temp0_1 + 1
else
    x8_1 = temp0_1

if (x8 s> temp0_1)
    v0 = v0 - temp0
else
    v0 = v2

*arg2 = temp0_1
*(arg2 + 4) = x8_1
*(arg2 + 8) = v0

if (zx.d(*(arg1 + 0x9d)) != 0)
    v0 = v2

*(arg2 + 8) = v0
