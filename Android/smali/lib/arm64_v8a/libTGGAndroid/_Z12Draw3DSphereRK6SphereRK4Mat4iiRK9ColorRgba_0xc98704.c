// 函数: _Z12Draw3DSphereRK6SphereRK4Mat4iiRK9ColorRgba
// 地址: 0xc98704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t* x8

if (*(arg5 + 0xc) < fconvert.s(1f))
    x8 = &data_23e4f98
else
    x8 = &data_23e4f88

int128_t v0
v0.d = *(arg1 + 4)
int128_t v1
v1.d = *(arg1 + 8)
*(arg1 + 0xc)
int64_t result
int64_t x1_1
int32_t n
int64_t v0_1
result, x1_1, n, v0_1 = Draw3DQuadGroup(zx.q(arg4 * arg3), (data_23e4f78).d, *x8, arg4)

if (arg3 s>= 1)
    int64_t x10_1 = result + 0x60
    v0_1.d = float.s(arg3)
    float var_d0_1 = v0_1.d
    v0_1.d = float.s(arg4)
    float var_bc_1 = v0_1.d
    v0_1.d = *CIRCLE_HALF
    int32_t x27_1 = 0
    int32_t x28_1 = 0
    float var_d4_1 = v0_1.d
    v0_1.d = *CIRCLE_FULL
    float var_c0_1 = v0_1.d
    int32_t fp_1
    
    do
        fp_1 = x28_1 + 1
        v0_1.d = float.s(x28_1)
        v0_1.d = v0_1.d f/ var_d0_1
        v11.d = *arg1
        v8.d = v0_1.d f* var_d4_1
        v9.d = float.s(fp_1) / var_d0_1 * var_d4_1
        int64_t x0_1
        int64_t x1_2
        int32_t n_1
        int64_t v0_3
        v0_3, x0_1, x1_2, n_1 = cosf(result, x1_1, n, v8.d)
        v0_1, result, x1_1, n = cosf(x0_1, x1_2, n_1, v9.d)
        
        if (arg4 s>= 1)
            v0_1.d = v11.d f* v0_1.d
            float var_b8_1 = v0_1.d
            float var_b4_1 = v11.d f* v0_3.d
            int64_t v0_6 = sinf(v8.d)
            v9 = sinf(v9.d)
            void* fp_2 = x10_1 + muls.dp.d(x27_1, 0xc0)
            int32_t x27_2 = 1
            
            while (true)
                v0_1.d = float.s(x27_2)
                float v2_1 = v0_1.d f/ var_bc_1
                v0_1.d = float.s(x27_2 - 1) / var_bc_1
                v0_1.d = v0_1.d f* var_c0_1
                v10.d = v2_1 * var_c0_1
                float cosp
                float sinp
                sincosf(&sinp, &cosp, v0_1.d)
                v13.d = sinp
                v15.d = v11.d f* cosp
                float cosp_1
                float sinp_1
                result, x1_1, n, v0_1 = sincosf(&sinp_1, &cosp_1, v10.d)
                float v18_1 = *(arg1 + 4)
                v2_1 = *(arg1 + 8)
                float v19_1 = *(arg1 + 0xc)
                float v3_1 = *arg2
                float v4_1 = *(arg2 + 4)
                float v20_1 = *(arg2 + 0x10)
                float v21_1 = *(arg2 + 0x14)
                float v16_1 = v11.d f* v13.d
                float v23_1 = *(arg2 + 0x20)
                float v24_1 = *(arg2 + 0x24)
                float v7_1 = v11.d f* cosp_1
                float v6_1 = v11.d f* sinp_1
                float v17_1 = v18_1 + v0_6.d f* v15.d
                float v27_1 = v2_1 + v0_6.d f* v16_1
                float v28_1 = var_b4_1 + v19_1
                float v26_1 = v18_1 + v9.d f* v15.d
                v16_1 = v2_1 + v9.d f* v16_1
                v19_1 = var_b8_1 + v19_1
                v10.d = v3_1 * v17_1
                v11.d = v4_1 * v27_1
                v13.d = v17_1 * v20_1
                v15.d = v27_1 * v21_1
                float v5_1 = *(arg2 + 8)
                v0_1.d = *(arg2 + 0xc)
                float v22_1 = *(arg2 + 0x18)
                float v1_1 = *(arg2 + 0x1c)
                float v30_1 = v18_1 + v0_6.d f* v7_1
                v7_1 = v18_1 + v9.d f* v7_1
                float v31_1 = v2_1 + v0_6.d f* v6_1
                v2_1 = v2_1 + v9.d f* v6_1
                v10.d = v10.d f+ v11.d
                v11.d = v20_1 * v26_1
                v13.d = v13.d f+ v15.d
                v15.d = v21_1 * v16_1
                float v25_1 = *(arg2 + 0x28)
                float v29_1 = *(arg2 + 0x2c)
                v17_1 = v17_1 * v23_1 + v27_1 * v24_1
                v6_1 = v3_1 * v26_1 + v4_1 * v16_1
                v18_1 = v11.d f+ v15.d
                v16_1 = v23_1 * v26_1 + v24_1 * v16_1
                v11.d = v20_1 * v30_1
                v15.d = v21_1 * v31_1
                v26_1 = v3_1 * v30_1 + v4_1 * v31_1
                v11.d = v11.d f+ v15.d
                v15.d = v4_1 * v2_1
                v30_1 = v23_1 * v30_1 + v24_1 * v31_1
                v15.d = v3_1 * v7_1 f+ v15.d
                v31_1 = v20_1 * v7_1 + v21_1 * v2_1
                v27_1 = v5_1 * v28_1
                v2_1 = v23_1 * v7_1 + v24_1 * v2_1
                v7_1 = v28_1 * v22_1
                v12.d = v28_1 * v25_1
                v28_1 = v10.d f+ v27_1
                v10.d = v26_1 + v27_1
                v26_1 = v13.d f+ v7_1
                v13.d = v22_1 * v19_1
                v14.d = v5_1 * v19_1
                v11.d = v11.d f+ v7_1
                v19_1 = v25_1 * v19_1
                v7_1 = v17_1 f+ v12.d
                v17_1 = v18_1 f+ v13.d
                v18_1 = v16_1 + v19_1
                v27_1 = v1_1 + v26_1
                v26_1 = v29_1 + v7_1
                v7_1 = v1_1 + v17_1
                v17_1 = v30_1 f+ v12.d
                v16_1 = v0_1.d f+ v6_1 f+ v14.d
                v6_1 = v29_1 + v18_1
                v12.d = v2_1 + v19_1
                v19_1 = v0_1.d f+ v10.d
                v18_1 = v1_1 f+ v11.d
                v17_1 = v29_1 + v17_1
                v28_1 = v0_1.d f+ v28_1
                v2_1 = v0_1.d f+ v15.d f+ v14.d
                v1_1 = v1_1 + v31_1 f+ v13.d
                v0_1.d = v29_1 f+ v12.d
                v30_1 = v16_1 - v19_1
                v29_1 = v7_1 - v18_1
                v31_1 = v6_1 - v17_1
                
                if (x28_1 == 0)
                    v10.d = v2_1 - v16_1
                    v11.d = v1_1 - v7_1
                    v12.d = v0_1.d f- v6_1
                else
                    v10.d = v19_1 - v28_1
                    v11.d = v18_1 - v27_1
                    v12.d = v17_1 - v26_1
                
                v13.d = v29_1 f* v12.d
                v14.d = v31_1 f* v11.d
                v15.d = v31_1 f* v10.d
                v12.d = v30_1 f* v12.d
                v11.d = v30_1 f* v11.d
                v31_1 = v13.d f- v14.d
                v30_1 = v15.d f- v12.d
                v29_1 = v11.d f- v29_1 f* v10.d
                v10.d = v31_1 * v31_1
                v11.d = v30_1 * v30_1
                v10.d = v10.d f+ v11.d
                v11.d = v29_1 * v29_1
                v10.d = v11.d f+ v10.d
                v10.d = sqrt(v10.d)
                v11.d = float.s(0x3727c5ac)
                
                if (v10.d f>= v11.d)
                    v11.d = float.s(0x3727c5ac)
                    v10.d = v10.d f+ v11.d
                    v12.d = fconvert.s(1f)
                    v10.d = v12.d f/ v10.d
                    v31_1 = v31_1 f* v10.d
                    v30_1 = v30_1 f* v10.d
                    v10.d = v29_1 f* v10.d
                    v11.d = v30_1 * v30_1
                    v29_1 = v31_1 * v31_1 f+ v11.d
                    v11.d = v10.d f* v10.d
                    v11.d = v12.d f/ sqrt(v11.d f+ v29_1)
                    v29_1 = v31_1 f* v11.d
                    v30_1 = v30_1 f* v11.d
                    v31_1 = v10.d f* v11.d
                else
                    v29_1 = *V0
                    v30_1 = *(V0 + 4)
                    v31_1 = *(V0 + 8)
                
                v5_1 = v3_1 * v29_1 + v4_1 * v30_1 + v5_1 * v31_1
                v4_1 = v20_1 * v29_1 + v21_1 * v30_1 + v22_1 * v31_1
                v3_1 = v23_1 * v29_1 + v24_1 * v30_1 + v25_1 * v31_1
                *(fp_2 - 0x60) = v28_1
                *(fp_2 - 0x5c) = v27_1
                *(fp_2 - 0x58) = v26_1
                *(fp_2 - 0x54) = v5_1
                *(fp_2 - 0x50) = v4_1
                *(fp_2 - 0x4c) = v3_1
                v23_1 = *arg5
                v22_1 = *(arg5 + 4)
                v21_1 = *(arg5 + 8)
                v20_1 = *(arg5 + 0xc)
                v10.d = 0x3f000000
                v10:4.d = 0x3f000000
                v11.d = fconvert.s(0.5f)
                uint32_t x8_6
                
                if (v23_1 <= float.s(0x3f7fbe77))
                    if (v23_1 >= float.s(0x3a83126f))
                        x8_6 = vcvts_s32_f32(v23_1 * float.s(0x437f0000) f+ v11.d)
                        
                        if (v22_1 <= float.s(0x3f7fbe77))
                            goto label_c98bb8
                        
                        goto label_c98bf4
                    
                    x8_6 = 0
                    
                    if (v22_1 > float.s(0x3f7fbe77))
                        goto label_c98bf4
                    
                    goto label_c98bb8
                
                x8_6 = 0xff
                uint32_t x9_1
                
                if (v22_1 <= float.s(0x3f7fbe77))
                label_c98bb8:
                    
                    if (v22_1 >= float.s(0x3a83126f))
                        x9_1 = (zx.q(vcvts_s32_f32(v22_1 * float.s(0x437f0000) f+ v11.d)) << 8).d
                        
                        if (v21_1 > float.s(0x3f7fbe77))
                            goto label_c98c04
                        
                        goto label_c98c40
                    
                    x9_1 = 0
                    
                    if (v21_1 > float.s(0x3f7fbe77))
                        goto label_c98c04
                    
                    goto label_c98c40
                
            label_c98bf4:
                x9_1 = 0xff00
                uint32_t x10_2
                uint32_t x11_1
                
                if (v21_1 <= float.s(0x3f7fbe77))
                label_c98c40:
                    
                    if (v21_1 >= float.s(0x3a83126f))
                        x10_2 =
                            (zx.q(vcvts_s32_f32(v21_1 * float.s(0x437f0000) f+ v11.d)) << 0x10).d
                        
                        if (v20_1 <= float.s(0x3f7fbe77))
                            goto label_c98c5c
                        
                        x11_1 = -0x1000000
                    else
                        x10_2 = 0
                        
                        if (not(v20_1 > float.s(0x3f7fbe77)))
                            goto label_c98c5c
                        
                        x11_1 = -0x1000000
                else
                label_c98c04:
                    x10_2 = 0xff0000
                    
                    if (v20_1 <= float.s(0x3f7fbe77))
                    label_c98c5c:
                        
                        if (v20_1 >= float.s(0x3a83126f))
                            x11_1 = (zx.q(vcvts_s32_f32(v20_1 * float.s(0x437f0000) f+ v11.d))
                                << 0x18).d
                        else
                            x11_1 = 0
                    else
                        x11_1 = -0x1000000
                
                uint32_t x8_10 = x11_1 | x9_1 | x8_6 | x10_2
                *(fp_2 - 0x40) = 0x3f0000003f000000
                *(fp_2 - 0x30) = v19_1
                *(fp_2 - 0x2c) = v18_1
                *(fp_2 - 0x28) = v17_1
                *(fp_2 - 0x24) = v5_1
                *(fp_2 - 0x20) = v4_1
                *(fp_2 - 0x1c) = v3_1
                *(fp_2 - 0x48) = (x8_10 & 0xff00ff00) | x10_2 u>> 0x10 | (x8_10 & 0xff) << 0x10
                *(fp_2 - 0x44) = 0
                v20_1 = *arg5
                v19_1 = *(arg5 + 4)
                v18_1 = *(arg5 + 8)
                v17_1 = *(arg5 + 0xc)
                uint32_t x8_14
                
                if (v20_1 <= float.s(0x3f7fbe77))
                    if (v20_1 >= float.s(0x3a83126f))
                        x8_14 = vcvts_s32_f32(v20_1 * float.s(0x437f0000) f+ v11.d)
                        
                        if (v19_1 <= float.s(0x3f7fbe77))
                            goto label_c98d28
                        
                        goto label_c98d64
                    
                    x8_14 = 0
                    
                    if (v19_1 > float.s(0x3f7fbe77))
                        goto label_c98d64
                    
                    goto label_c98d28
                
                x8_14 = 0xff
                uint32_t x9_5
                
                if (v19_1 <= float.s(0x3f7fbe77))
                label_c98d28:
                    
                    if (v19_1 >= float.s(0x3a83126f))
                        x9_5 = (zx.q(vcvts_s32_f32(v19_1 * float.s(0x437f0000) f+ v11.d)) << 8).d
                        
                        if (v18_1 > float.s(0x3f7fbe77))
                            goto label_c98d74
                        
                        goto label_c98db0
                    
                    x9_5 = 0
                    
                    if (v18_1 > float.s(0x3f7fbe77))
                        goto label_c98d74
                    
                    goto label_c98db0
                
            label_c98d64:
                x9_5 = 0xff00
                uint32_t x10_5
                uint32_t x11_4
                
                if (v18_1 <= float.s(0x3f7fbe77))
                label_c98db0:
                    
                    if (v18_1 >= float.s(0x3a83126f))
                        x10_5 =
                            (zx.q(vcvts_s32_f32(v18_1 * float.s(0x437f0000) f+ v11.d)) << 0x10).d
                        
                        if (v17_1 <= float.s(0x3f7fbe77))
                            goto label_c98dcc
                        
                        x11_4 = -0x1000000
                    else
                        x10_5 = 0
                        
                        if (not(v17_1 > float.s(0x3f7fbe77)))
                            goto label_c98dcc
                        
                        x11_4 = -0x1000000
                else
                label_c98d74:
                    x10_5 = 0xff0000
                    
                    if (v17_1 <= float.s(0x3f7fbe77))
                    label_c98dcc:
                        
                        if (v17_1 >= float.s(0x3a83126f))
                            x11_4 = (zx.q(vcvts_s32_f32(v17_1 * float.s(0x437f0000) f+ v11.d))
                                << 0x18).d
                        else
                            x11_4 = 0
                    else
                        x11_4 = -0x1000000
                
                uint32_t x8_18 = x11_4 | x9_5 | x8_14 | x10_5
                *(fp_2 - 0x10) = 0x3f0000003f000000
                *fp_2 = v16_1
                *(fp_2 + 4) = v7_1
                *(fp_2 + 8) = v6_1
                *(fp_2 + 0xc) = v5_1
                *(fp_2 + 0x10) = v4_1
                *(fp_2 + 0x14) = v3_1
                *(fp_2 - 0x18) = (x8_18 & 0xff00ff00) | x10_5 u>> 0x10 | (x8_18 & 0xff) << 0x10
                *(fp_2 - 0x14) = 0
                v17_1 = *arg5
                v16_1 = *(arg5 + 4)
                v7_1 = *(arg5 + 8)
                v6_1 = *(arg5 + 0xc)
                uint32_t x8_22
                
                if (v17_1 <= float.s(0x3f7fbe77))
                    if (v17_1 >= float.s(0x3a83126f))
                        x8_22 = vcvts_s32_f32(v17_1 * float.s(0x437f0000) f+ v11.d)
                        
                        if (v16_1 <= float.s(0x3f7fbe77))
                            goto label_c98e98
                        
                        goto label_c98ed4
                    
                    x8_22 = 0
                    
                    if (v16_1 > float.s(0x3f7fbe77))
                        goto label_c98ed4
                    
                    goto label_c98e98
                
                x8_22 = 0xff
                uint32_t x9_9
                
                if (v16_1 <= float.s(0x3f7fbe77))
                label_c98e98:
                    
                    if (v16_1 >= float.s(0x3a83126f))
                        x9_9 = (zx.q(vcvts_s32_f32(v16_1 * float.s(0x437f0000) f+ v11.d)) << 8).d
                        
                        if (v7_1 > float.s(0x3f7fbe77))
                            goto label_c98ee4
                        
                        goto label_c98f20
                    
                    x9_9 = 0
                    
                    if (v7_1 > float.s(0x3f7fbe77))
                        goto label_c98ee4
                    
                    goto label_c98f20
                
            label_c98ed4:
                x9_9 = 0xff00
                uint32_t x10_8
                uint32_t x11_7
                
                if (v7_1 <= float.s(0x3f7fbe77))
                label_c98f20:
                    
                    if (v7_1 >= float.s(0x3a83126f))
                        x10_8 = (zx.q(vcvts_s32_f32(v7_1 * float.s(0x437f0000) f+ v11.d)) << 0x10).d
                        
                        if (v6_1 <= float.s(0x3f7fbe77))
                            goto label_c98f3c
                        
                        x11_7 = -0x1000000
                    else
                        x10_8 = 0
                        
                        if (not(v6_1 > float.s(0x3f7fbe77)))
                            goto label_c98f3c
                        
                        x11_7 = -0x1000000
                else
                label_c98ee4:
                    x10_8 = 0xff0000
                    
                    if (v6_1 <= float.s(0x3f7fbe77))
                    label_c98f3c:
                        
                        if (v6_1 >= float.s(0x3a83126f))
                            x11_7 =
                                (zx.q(vcvts_s32_f32(v6_1 * float.s(0x437f0000) f+ v11.d)) << 0x18).d
                        else
                            x11_7 = 0
                    else
                        x11_7 = -0x1000000
                
                uint32_t x8_26 = x11_7 | x9_9 | x8_22 | x10_8
                *(fp_2 + 0x20) = 0x3f0000003f000000
                *(fp_2 + 0x30) = v2_1
                *(fp_2 + 0x34) = v1_1
                *(fp_2 + 0x38) = v0_1.d
                *(fp_2 + 0x3c) = v5_1
                *(fp_2 + 0x40) = v4_1
                *(fp_2 + 0x44) = v3_1
                *(fp_2 + 0x18) = (x8_26 & 0xff00ff00) | x10_8 u>> 0x10 | (x8_26 & 0xff) << 0x10
                *(fp_2 + 0x1c) = 0
                v3_1 = *arg5
                v2_1 = *(arg5 + 4)
                v1_1 = *(arg5 + 8)
                v0_1.d = *(arg5 + 0xc)
                uint32_t x8_30
                
                if (v3_1 <= float.s(0x3f7fbe77))
                    if (v3_1 >= float.s(0x3a83126f))
                        x8_30 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) f+ v11.d)
                        
                        if (v2_1 <= float.s(0x3f7fbe77))
                            goto label_c99008
                        
                        goto label_c99044
                    
                    x8_30 = 0
                    
                    if (v2_1 > float.s(0x3f7fbe77))
                        goto label_c99044
                    
                    goto label_c99008
                
                x8_30 = 0xff
                uint32_t x9_13
                
                if (v2_1 <= float.s(0x3f7fbe77))
                label_c99008:
                    
                    if (v2_1 >= float.s(0x3a83126f))
                        x9_13 = (zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v11.d)) << 8).d
                        
                        if (v1_1 > float.s(0x3f7fbe77))
                            goto label_c99054
                        
                        goto label_c99090
                    
                    x9_13 = 0
                    
                    if (v1_1 > float.s(0x3f7fbe77))
                        goto label_c99054
                    
                    goto label_c99090
                
            label_c99044:
                x9_13 = 0xff00
                uint32_t x10_11
                uint32_t x11_10
                
                if (v1_1 <= float.s(0x3f7fbe77))
                label_c99090:
                    
                    if (v1_1 >= float.s(0x3a83126f))
                        x10_11 =
                            (zx.q(vcvts_s32_f32(v1_1 * float.s(0x437f0000) f+ v11.d)) << 0x10).d
                        
                        if (v0_1.d f<= float.s(0x3f7fbe77))
                            goto label_c990ac
                        
                        x11_10 = -0x1000000
                    else
                        x10_11 = 0
                        
                        if (not(v0_1.d f> float.s(0x3f7fbe77)))
                            goto label_c990ac
                        
                        x11_10 = -0x1000000
                else
                label_c99054:
                    x10_11 = 0xff0000
                    
                    if (v0_1.d f<= float.s(0x3f7fbe77))
                    label_c990ac:
                        
                        if (v0_1.d f>= float.s(0x3a83126f))
                            v0_1.d = v0_1.d f* float.s(0x437f0000)
                            v0_1.d = v0_1.d f+ v11.d
                            x11_10 = (zx.q(vcvts_s32_f32(v0_1.d)) << 0x18).d
                        else
                            x11_10 = 0
                    else
                        x11_10 = -0x1000000
                
                uint32_t x8_34 = x11_10 | x9_13 | x8_30 | x10_11
                *(fp_2 + 0x48) = (x8_34 & 0xff00ff00) | x10_11 u>> 0x10 | (x8_34 & 0xff) << 0x10
                *(fp_2 + 0x4c) = 0
                *(fp_2 + 0x50) = 0x3f0000003f000000
                
                if (arg4 == x27_2)
                    break
                
                v11.d = *arg1
                x27_2 += 1
                fp_2 += 0xc0
            
            x27_1 += x27_2
        
        x28_1 = fp_1
    while (fp_1 != arg3)

return result
