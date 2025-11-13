// 函数: _Z19UI2TableGetRangeIntR3UI2i
// 地址: 0x1021280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v14
int64_t var_58 = v14
int64_t v13
int64_t var_50 = v13
int64_t v12
int64_t var_48 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
uint64_t x8_1

if (arg2 == 0xffffffff)
    x8_1 = zx.q(*(arg1 + 0x1970))
else
    x8_1 = zx.q(arg2)

if (x8_1.d == 0)
    return *V2I0

int32_t x20_1 = *(arg1 + 0x1528)

if (x20_1 == 0)
    return x8_1 << 0x20

float v2 = *(arg1 + 0x16b0)
v11.d = *(arg1 + 0x16b8)
float var_dc_1 = *(arg1 + 0x16c8)
float var_d8_1 = *(arg1 + 0x16c4)
v12.d = *(arg1 + 0x16bc)
v9.d = *(arg1 + 0x16c0)
v10.d = *(arg1 + 0x16b4)
float v3 = v2 * 0f
float var_c8_1 = v11.d f* v11.d
float var_c4_1 = *(arg1 + 0x175c) * v2
float v7 = *V20 * v2
float v6 = v12.d f* v12.d
float var_d4_1 = *(V20 + 4) * v2
float var_18_1 = v3 + v3
float v0 = *(arg1 + 0x1760) * v2
v13.d = v9.d f* v9.d
v14.d = v10.d f* v10.d
v15.d = v10.d f* v11.d
v8.d = v9.d f* v12.d
RectF var_80
RectF var_70
UI2TableTransform(arg1, 0, &var_70, &var_80, false)
UI2TableTransform(arg1, 1, &var_70, &var_80, false)
uint32_t x0_3
uint32_t x8_3
float v0_1
float v1_1
float v2_1
float v3_1
float v4_1
float v16_1
float v18_1

if (x20_1 == 1)
    v1_1 = v15.d f+ v8.d
    v2_1 = v13.d f- v14.d + var_c8_1 - v6
    v3_1 = var_18_1 * (v11.d f* v12.d - v9.d f* v10.d)
    v16_1 = *(arg1 + 0x13ac)
    v0_1 = (v7 + v7) * v1_1 + var_d4_1 * v2_1
    v1_1 = (var_c4_1 + var_c4_1) * v1_1 + v0 * v2_1
    float var_a8
    float var_88
    v2_1 = var_a8 - var_88
    v18_1 = fconvert.s(0.5f)
    v4_1 = fconvert.s(-0.5f)
    float temp0_2 = vrndm_f32(vmax_f32(fneg(v16_1) / v2_1, 0f))
    v0_1 = (var_dc_1 + v3_1 + v1_1 - (var_dc_1 + v3_1 + v0_1) - v16_1) / v2_1
    
    v2_1 = temp0_2 < 0f ? v4_1 : v18_1
    
    float temp0_3 = vrndp_f32(v0_1)
    x0_3 = vcvts_s32_f32(temp0_2 + v2_1)
    
    v1_1 = temp0_3 < 0f ? v4_1 : v18_1
    
    x8_3 = vcvts_s32_f32(temp0_3 + v1_1)
else
    if (x20_1 != 2)
        if (x20_1 == 3)
            return zx.q(*(arg1 + 0x1500)) << 0x20
        
        pthread_kill(pthread_self(), 6)
        UI2* x0_5
        int32_t x1
        int32_t x2_3
        x0_5, x1, x2_3 = XNoReturn()
        return UI2ClearChildrenOutsideRange(x0_5, x1, x2_3) __tailcall
    
    v2_1 = v15.d f- v8.d
    v0_1 = v13.d f+ v14.d - var_c8_1 - v6
    v1_1 = (var_d4_1 + var_d4_1) * v2_1
    float v21_1 = v7 * v0_1
    v0_1 = var_c4_1 * v0_1 + (v0 + v0) * v2_1
    float var_ac
    float var_8c
    v2_1 = var_ac - var_8c
    v16_1 = *(arg1 + 0x13a8)
    v3_1 = var_18_1 * (v9.d f* v11.d + v10.d f* v12.d)
    float temp0_6 = vrndm_f32(float.s(0xb727c5ac) - v16_1 / v2_1 + fconvert.s(1f))
    v18_1 = fconvert.s(0.5f)
    v4_1 = fconvert.s(-0.5f)
    v0_1 = (var_d8_1 + v3_1 + v0_1 - (var_d8_1 + v3_1 + v21_1 + v1_1) - v16_1) / v2_1
        + float.s(0x3727c5ac) + fconvert.s(-1f)
    
    v2_1 = temp0_6 < 0f ? v4_1 : v18_1
    
    float temp0_7 = vrndp_f32(v0_1)
    x0_3 = vcvts_s32_f32(temp0_6 + v2_1)
    
    v1_1 = temp0_7 < 0f ? v4_1 : v18_1
    
    x8_3 = vcvts_s32_f32(temp0_7 + v1_1) - 1
return zx.q(x0_3) | zx.q(x8_3) << 0x20
