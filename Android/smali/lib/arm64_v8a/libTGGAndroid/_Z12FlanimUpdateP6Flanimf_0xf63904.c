// 函数: _Z12FlanimUpdateP6Flanimf
// 地址: 0xf63904
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
float v1 = *(arg1 + 0x18)
float v2 = *(arg1 + 8)
v1 - 0f
arg2 = v2 + v1 * arg2
*(arg1 + 8) = arg2
*(arg1 + 0xc) = v2
int32_t x8_2

if (not(v1 <= 0f))
    int32_t x8_1 = *(arg1 + 0x1c)
    
    if (x8_1 == 2)
        if (not(arg2 <= fconvert.s(1f)))
            *(arg1 + 8) = 0x3f800000
            *(arg1 + 0x20) = 1
    else if (x8_1 == 1)
        if (not(arg2 <= fconvert.s(1f)))
            *(arg1 + 8) = 0x3f800000
            *(arg1 + 0x88) = 1
            *(arg1 + 0x20) = 1
    else if (x8_1 == 0)
        v1 = fconvert.s(1f)
        
        if (not(arg2 <= v1))
            x8_2 = *(arg1 + 0x20)
            
            do
                arg2 = arg2 + fconvert.s(-1f)
                x8_2 += 1
            while (arg2 > v1)
            
            *(arg1 + 8) = arg2
            *(arg1 + 0x20) = x8_2
else if (not(v1 >= 0f))
    int32_t x8_3 = *(arg1 + 0x1c)
    
    if (x8_3 == 2)
        if (not(arg2 >= 0f))
            *(arg1 + 8) = 0
            *(arg1 + 0x20) = 1
    else if (x8_3 == 1)
        if (not(arg2 >= 0f))
            *(arg1 + 8) = 0
            *(arg1 + 0x88) = 1
            *(arg1 + 0x20) = 1
    else if (x8_3 == 0 && not(arg2 >= 0f))
        x8_2 = *(arg1 + 0x20)
        
        do
            arg2 = arg2 + fconvert.s(1f)
            x8_2 += 1
        while (arg2 < 0f)
        
        *(arg1 + 8) = arg2
        *(arg1 + 0x20) = x8_2
int32_t x8_4 = *(arg1 + 0x80)

if (x8_4 s>= 1)
    *(arg1 + 0x80) = x8_4 - 1

DefFlanim* result = FlanimGetDef(*arg1)
int32_t x8_6 = *(result + 0x28)

if (x8_6 s>= 1)
    DefFlanim* result_1 = result
    int64_t i = 0
    int64_t x26_1 = 0x68
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    v11.d = 0f
    
    do
        AttachmentID* x24_1 = *(arg1 + 0x70) + x26_1
        
        if (*x24_1 != 0)
            int32_t x8_7 = *(arg1 + 0x10)
            uint32_t x10_1 = zx.d(*(arg1 + 0x9d))
            int32_t x9_4 = *(arg1 + 0x14) - 1
            float v0 = *(arg1 + 8) * float.s(x9_4) + float.s(x8_7)
            float temp0_1 = vrndm_f32(v0)
            float v2_1
            
            if (temp0_1 < 0f)
                v2_1 = v10.d
            else
                v2_1 = v9.d
            
            int32_t x8_8 = x9_4 + x8_7
            int32_t temp0_2 = vcvts_s32_f32(temp0_1 + v2_1)
            bool z_1
            
            if (x8_8 s> temp0_2)
                z_1 = x10_1 == 0
            else
                z_1 = false
            
            if (z_1)
                v8.d = v0 - temp0_1
            else
                v8.d = v11.d
            
            int128_t var_150
            int32_t var_108
            int32_t var_c8
            
            if (v8.d f!= 0f)
                int32_t x25_1
                
                if (x8_8 s> temp0_2)
                    x25_1 = temp0_2 + 1
                else
                    x25_1 = temp0_2
                
                FlanimGetShapeTransformAtFrame(result_1, i.d, temp0_2, &var_108)
                FlanimGetShapeTransformAtFrame(result_1, i.d, x25_1, &var_150)
                FlanimLerpShapeTransform(&var_c8, &var_108, &var_150, v8.d)
            else
                FlanimGetShapeTransformAtFrame(result_1, i.d, temp0_2, &var_c8)
            
            float y
            float cosp_1
            float sinp_1
            sincosf(&sinp_1, &cosp_1, y)
            int32_t var_c0
            v8.d = cosp_1 f* var_c0
            v12.d = sinp_1 f* var_c0
            float cosp
            float sinp
            float y_1
            sincosf(&sinp, &cosp, y_1)
            float var_bc
            float v1_3 = var_bc * fneg(sinp)
            int32_t var_100_1 = 0
            int32_t var_f0_1 = 0
            int64_t var_e8_1 = 0
            int32_t var_e0_1 = 0x3f800000
            int32_t var_fc_1 = var_c8
            int32_t var_f8_1 = v12.d
            int32_t var_c4
            int32_t var_ec_1 = var_c4
            float var_f4_1 = cosp * var_bc
            var_108 = v8.d
            float var_104_1 = v1_3
            int64_t var_dc_1 = 0
            int64_t var_d4_1 = 0
            int32_t var_cc_1 = 0x3f800000
            int128_t v0_5
            int128_t v1_4
            int128_t v2_4
            int128_t v3_3
            v0_5, v1_4, v2_4, v3_3 = Mat4Multiply(&var_108, arg1 + 0x24)
            int128_t var_190
            var_150 = var_190
            int128_t var_180
            int128_t var_140_1 = var_180
            int128_t var_170
            int128_t var_130_1 = var_170
            int128_t var_160
            int128_t var_120_1 = var_160
            TransformFromMat4(&var_150)
            result = AttachPointUpdate(x24_1, &var_190, gSpriteWhite)
            x8_6 = *(result_1 + 0x28)
        
        i += 1
        x26_1 += 0x70
    while (i s< sx.q(x8_6))

return result
