// 函数: _Z25FlanimGetCurrentTransformP6FlanimiP18DefFlanimTransform
// 地址: 0xf644d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8
int32_t x8 = *(arg1 + 0x10)
int32_t x9_1 = *(arg1 + 0x14) - 1
float v0 = *(arg1 + 8) * float.s(x9_1) + float.s(x8)
float temp0 = vrndm_f32(v0)
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

uint32_t var_40 = temp0_1
uint32_t var_3c = x8_2

if (((zx.d(*(arg1 + 0x9d)) == 0 ? 1 : 0) & (x8_1 s> temp0_1 ? 1 : 0)) != 0)
    v0 = v0 - temp0
else
    v0 = 0f

float var_38 = v0
int64_t result = FlanimGetTransformAtTime(FlanimGetDef(*arg1), arg2, &var_40, arg3)
int32_t x8_5 = *(arg1 + 0x80)
uint32_t x9_4 = zx.d(*(arg1 + 0x9c))

if (x8_5 s> 0 || x9_4 != 0)
    bool v_1
    bool z_1
    bool n_1
    
    if (x9_4 == 0)
        v_1 = add_overflow(x8_5, 0)
        z_1 = x8_5 == 0
        n_1 = x8_5 s< 0
    else
        n_1 = false
        z_1 = true
        v_1 = false
    
    DefFlanimTransform* x20_1 = *(arg1 + 0x70) + muls.dp.d(arg2, 0x70)
    
    if (not(z_1) && n_1 == v_1)
        v8.d = float.s(x8_5) / float.s(*(arg1 + 0x7c))
    else
        v8.d = fconvert.s(1f)
    
    if (*(x20_1 + 0x48) != 0)
        result = FlanimHasUnlerpableChange(arg3, x20_1)
        
        if ((result.d & 1) == 0)
            return FlanimLerpTransform(arg3, arg3, x20_1, v8.d)

return result
