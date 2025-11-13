// 函数: _Z31ParticleUpdateMatrixForWrappingP15ParticleEmitterP19ParticleRenderStateR9TransformR11SpriteColor
// 地址: 0xf99b84
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
v8.d = *(arg2 + 0x10)
float v0

if (not(v8.d f<= 0f))
    v9.d = *(arg3 + 0x14)
    v0, arg1 = fmodf(v9.d, v8.d)
    
    if (v9.d f< 0f)
        v0 = v8.d f+ v0
    
    *(arg3 + 0x14) = v0

v8.d = *(arg2 + 0x14)

if (not(v8.d f== 0f))
    v9.d = *(arg3 + 0x18)
    v0, arg1 = fmodf(v9.d, v8.d)
    
    if (v9.d f< 0f)
        v0 = v8.d f+ v0
    
    *(arg3 + 0x18) = v0

v8.d = *(arg2 + 0x18)

if (not(v8.d f== 0f))
    v9.d = *(arg3 + 0x1c)
    v0, arg1 = fmodf(v9.d, v8.d)
    
    if (v9.d f< 0f)
        v0 = v8.d f+ v0
    
    *(arg3 + 0x1c) = v0

v8.d = *(arg2 + 0x20)
float var_70
int32_t var_6c
float v1

if (v8.d f> 0f)
    v1 = fconvert.s(0.5f)
    float var_84_1 = *(arg2 + 0x1c) * v1
    v13.d = v8.d f* v1
    Draw3DGetEyePose(3)
    float var_80
    float var_7c
    float var_78
    float var_74
    float v7_1 = var_7c * var_80 - var_78 * var_74
    float v0_4 = var_7c * var_78 + var_80 * var_74
    float v3_1 = *(arg3 + 0x14)
    v12.d =
        var_6c f+ v13.d f* (var_7c * var_7c - var_78 * var_78 + var_74 * var_74 - var_80 * var_80)
    float v2_1 = *(arg3 + 0x1c)
    v14.d = var_70 + v13.d f* (v7_1 + v7_1)
    v9.d = *(arg3 + 0x18) f- v12.d
    int32_t var_68
    v15.d = var_68 f+ v13.d f* (v0_4 + v0_4)
    float temp0_1 = vrndm_f32(v9.d f/ v8.d)
    v10.d = v3_1 f- v14.d + temp0_1 * float.s(0x41de28f6)
    v11.d = v2_1 f- v15.d + temp0_1 * float.s(0x4210851f)
    float v0_6 = fmodf(v10.d, v8.d)
    
    if (v10.d f< 0f)
        v0_6 = v8.d f+ v0_6
    
    v10.d = v0_6 f- v13.d
    float v0_8 = fmodf(v9.d, v8.d)
    
    if (v9.d f< 0f)
        v0_8 = v8.d f+ v0_8
    
    v9.d = v0_8 f- v13.d
    v0, arg1 = fmodf(v11.d, v8.d)
    
    if (v11.d f< 0f)
        v0 = v8.d f+ v0
    
    v0 = v0 f- v13.d
    *(arg3 + 0x14) = v14.d f+ v10.d
    *(arg3 + 0x18) = v12.d f+ v9.d
    *(arg3 + 0x1c) = v15.d f+ v0
    v1 = (sqrt(v0 * v0 + v9.d f* v9.d + v10.d f* v10.d) - var_84_1) / (v13.d f- var_84_1)
    v0 = fconvert.s(1f)
    
    if (not(v1 <= 0f))
        float v2 = fconvert.s(1f)
        v0 = 0f
        
        if (not(v1 >= v2))
            v0 = v2 - v1
    
    v1.b = *(arg4 + 3)
    v0 = v0 * float.s(v1)
    char x8_1
    
    if (not(v0 <= float.s(0x3f7fbe77)))
        x8_1 = -1
    else if (v0 >= float.s(0x3a83126f))
        x8_1 = vcvts_s32_f32(v0 * float.s(0x437f0000) + fconvert.s(0.5f))
    else
        x8_1 = 0
    
    *(arg4 + 3) = x8_1
    v0 = *(arg2 + 0x44)
    v1 = *(arg2 + 0x48)
    
    if (v0 >= v1)
        goto label_f99c4c
    
    goto label_f99e54

v0 = *(arg2 + 0x44)
v1 = *(arg2 + 0x48)

if (v0 < v1)
label_f99e54:
    v1 = (*(arg3 + 0x1c) - v0) / (v1 - v0)
    v0 = 0f
    
    if (not(v1 <= 0f))
        v0 = fconvert.s(1f)
        
        if (not(v1 >= v0))
            v0 = v1 + 0f
    
    v1.b = *(arg4 + 3)
    v0 = v0 * float.s(v1)
    
    if (v0 < 0f)
        v1 = fconvert.s(-0.5f)
    else
        v1 = fconvert.s(0.5f)
    
    *(arg4 + 3) = vcvts_s32_f32(v0 + v1)
    
    if (*(arg2 + 0x4c) >= *(arg2 + 0x50))
        goto label_f99c58
    
    goto label_f99eb4

label_f99c4c:

if (*(arg2 + 0x4c) < *(arg2 + 0x50))
label_f99eb4:
    int128_t v2_2
    int128_t v3_3
    arg1, v2_2, v3_3 = Draw3DGetEyePose(3)
    v2_2.q = *(arg3 + 0x18)
    v3_3.q = var_6c.q
    float v0_10 = *(arg3 + 0x14) - var_70
    int128_t v1_11 = vsub_f32(v2_2, v3_3)
    v2_2.d = *(arg2 + 0x4c)
    v3_3.d = *(arg2 + 0x50)
    double v1_12 = vmul_f32(v1_11, v1_11, 0)
    v0_10 = v0_10 * v0_10 f+ v1_12.d
    v1_12.d = v1_12:4.d
    v0_10 = sqrt(v0_10 f+ v1_12.d) f- v2_2.d
    v1_12.d = v3_3.d f- v2_2.d
    v1_12.d = v0_10 f/ v1_12.d
    v0_10 = fconvert.s(1f)
    
    if (not(v1_12.d f<= 0f))
        v2_2.d = fconvert.s(1f)
        v0_10 = 0f
        
        if (not(v1_12.d f>= v2_2.d))
            v0_10 = v2_2.d f- v1_12.d
    
    v1_12.b = *(arg4 + 3)
    v2_2.d = fconvert.s(0.5f)
    v1_12.d = float.s(v1_12.d)
    v0_10 = v0_10 f* v1_12.d
    v1_12.d = fconvert.s(-0.5f)
    
    if (v0_10 < 0f)
        v1_12.d = v1_12.d
    else
        v1_12.d = v2_2.d
    
    *(arg4 + 3) = vcvts_s32_f32(v0_10 f+ v1_12.d)
    v1_12.d = *(arg2 + 0x58)
    
    if (not(*(arg2 + 0x54) f>= v1_12.d))
        goto label_f99f54
else
label_f99c58:
    
    if (*(arg2 + 0x54) < *(arg2 + 0x58))
    label_f99f54:
        int128_t v2_3
        int128_t v3_4
        arg1, v2_3, v3_4 = Draw3DGetEyePose(3)
        v2_3.q = *(arg3 + 0x18)
        v3_4.q = var_6c.q
        float v0_11 = *(arg3 + 0x14) - var_70
        int128_t v1_14 = vsub_f32(v2_3, v3_4)
        v2_3.d = *(arg2 + 0x54)
        v3_4.d = *(arg2 + 0x58)
        double v1_15 = vmul_f32(v1_14, v1_14, 0)
        v0_11 = v0_11 * v0_11 f+ v1_15.d
        v1_15.d = v1_15:4.d
        v0_11 = sqrt(v0_11 f+ v1_15.d) f- v2_3.d
        v1_15.d = v3_4.d f- v2_3.d
        v1_15.d = v0_11 f/ v1_15.d
        v0_11 = 0f
        
        if (not(v1_15.d f<= 0f))
            v0_11 = fconvert.s(1f)
            
            if (not(v1_15.d f>= v0_11))
                v0_11 = v1_15.d f+ 0f
        
        v1_15.b = *(arg4 + 3)
        v2_3.d = fconvert.s(0.5f)
        v1_15.d = float.s(v1_15.d)
        v0_11 = v0_11 f* v1_15.d
        v1_15.d = fconvert.s(-0.5f)
        
        if (v0_11 < 0f)
            v1_15.d = v1_15.d
        else
            v1_15.d = v2_3.d
        
        *(arg4 + 3) = vcvts_s32_f32(v0_11 f+ v1_15.d)
