// 函数: _Z22FlanimGetBaseTransformP6FlanimiP18DefFlanimTransform
// 地址: 0xf669b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x10)
float v0 = 0f
int32_t x9_1 = *(arg1 + 0x14) - 1
float v3 = float.s(x9_1) * v0 + float.s(x8)
float temp0 = vrndm_f32(v3)
float v1

if (temp0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

int32_t x8_1 = x9_1 + x8
uint32_t temp0_1 = vcvts_s32_f32(temp0 + v1)
uint32_t x8_2

if (x8_1 s> temp0_1)
    x8_2 = temp0_1 + 1
else
    x8_2 = temp0_1

if (x8_1 s> temp0_1)
    v0 = v3 - temp0

uint32_t var_30 = temp0_1
uint32_t var_2c = x8_2
float var_28 = v0
return FlanimGetTransformAtTime(FlanimGetDef(*arg1), arg2, &var_30, arg3)
