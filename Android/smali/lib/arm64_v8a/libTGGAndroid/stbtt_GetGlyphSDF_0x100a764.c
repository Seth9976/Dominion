// 函数: stbtt_GetGlyphSDF
// 地址: 0x100a764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t var_80 = arg12.q
int64_t var_78 = arg11.q
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t result

if (arg9.d f== 0f)
    result = 0
else
    int128_t v2
    v2.d = 0f
    int128_t v3
    v3.d = 0f
    int32_t var_b0
    int32_t var_ac
    int32_t var_a8
    int32_t var_a4
    stbtt_GetGlyphBitmapBoxSubpixel(arg1, arg2, &var_a4, &var_a8, &var_ac, &var_b0, arg9, arg9, v2, 
        v3)
    int32_t x8_1 = var_a4
    int32_t x10_1 = var_ac
    
    if (x8_1 == x10_1)
        result = 0
    else
        int32_t x12_1 = var_a8
        int32_t x11_1 = var_b0
        
        if (x12_1 != x11_1)
            int32_t x9_1 = x8_1 - arg3
            int32_t x8_2 = x12_1 - arg3
            int32_t x12_2 = x10_1 + arg3
            int32_t x10_2 = x11_1 + arg3
            int32_t x26_2 = x12_2 - x9_1
            var_a8 = x8_2
            var_a4 = x9_1
            var_b0 = x10_2
            var_ac = x12_2
            
            if (arg5 != 0)
                *arg5 = x26_2
            
            int32_t x25_2 = x10_2 - x8_2
            
            if (arg6 != 0)
                *arg6 = x25_2
            
            if (arg7 != 0)
                *arg7 = x9_1
            
            if (arg8 != 0)
                *arg8 = x8_2
            
            float v0 = fneg(arg9.d)
            int16_t* var_b8
            int32_t i_5 = stbtt_GetGlyphShape(arg1, zx.q(arg2), &var_b8, v0)
            result = malloc(sx.q(x25_2 * x26_2))
            int32_t* x0_5
            uint128_t v0_1
            uint128_t v1_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int64_t v7_1
            uint128_t v16_1
            int128_t v23_1
            int128_t v31_1
            x0_5, v0_1, v1_1, v4_1, v5_1, v6_1, v7_1, v16_1, v23_1, v31_1 =
                malloc(zx.q(i_5) << 0x20 s>> 0x1e)
            float v26_1 = v0
            int32_t x13_1 = i_5 - 1
            
            if (i_5 s>= 1)
                int16_t* x8_4 = var_b8
                int64_t i = 0
                v0_1:4.d = v26_1
                v1_1 = vdup_laneq_s32(arg9, 0)
                float v2_1 = fconvert.s(1f)
                int16_t* x12_3 = x8_4
                
                do
                    uint32_t x14_1 = zx.d(x12_3[6].b)
                    
                    if (x14_1 == 3)
                        void* x13_3 = x8_4 + muls.dp.d(x13_1, 0xe)
                        int32_t x13_4 = sx.d(*(x13_3 + 2))
                        v4_1.d = float.s(sx.d(x12_3[2]))
                        v5_1.d = float.s(sx.d(*x12_3))
                        v4_1:4.d = sx.d(x12_3[3])
                        v6_1.d = float.s(sx.d(*x13_3))
                        v5_1:4.d = sx.d(x12_3[1])
                        int128_t v4_2 = vcvt_f32_s32(v4_1)
                        v6_1:4.d = x13_4
                        int128_t v5_2 = vcvt_f32_s32(v5_1)
                        int128_t v4_3 = vmul_f32(v0_1, v4_2, 0)
                        int128_t v6_2 = vcvt_f32_s32(v6_1)
                        int128_t v5_3 = vmul_f32(v0_1, v5_2, 0)
                        int128_t v4_4 = vadd_f32(v4_3, v4_3)
                        v6_1 = vmul_f32(v1_1, v6_2, 0)
                        int128_t v4_5 = vsub_f32(v5_3, v4_4)
                        vadd_f32(v4_5, v6_1)
                        v5_1:4.d = vsub_f32(v4_5, v6_1):4.d
                        v4_1 = vmul_f32(v5_1, v5_1, 0)
                        v5_1.d = v4_1.d f+ v4_1:4.d
                        v4_1.d = 0f
                        
                        if (not(v5_1.d f== 0f))
                            v4_1.d = v2_1 f/ v5_1.d
                    else
                        v4_1.d = 0f
                        
                        if (x14_1 == 2)
                            int16_t* x13_2 = x8_4 + muls.dp.d(x13_1, 0xe)
                            v4_1.w = *x12_3
                            v5_1.w = x12_3[1]
                            v6_1.w = *x13_2
                            v7_1.w = x13_2[1]
                            v4_1.d = sx.d(v4_1.w)
                            v4_1:4.d = sx.d(v4_1:2.w)
                            v4_1:8.d = sx.d(v4_1:4.w)
                            v4_1:0xc.d = sx.d(v4_1:6.w)
                            v5_1.d = sx.d(v5_1.w)
                            v5_1:4.d = sx.d(v5_1:2.w)
                            v5_1:8.d = sx.d(v5_1:4.w)
                            v5_1:0xc.d = sx.d(v5_1:6.w)
                            v6_1.d = sx.d(v6_1.w)
                            v6_1:4.d = sx.d(v6_1:2.w)
                            v6_1:8.d = sx.d(v6_1:4.w)
                            v6_1:0xc.d = sx.d(v6_1:6.w)
                            v7_1.d = sx.d(v7_1.w)
                            v7_1:4.d = sx.d(v7_1:2.w)
                            v7_1:8.d = sx.d(v7_1:4.w)
                            v7_1:0xc.d = sx.d(v7_1:6.w)
                            v4_1.d = float.s(v4_1.d)
                            v5_1.d = float.s(v5_1.d)
                            v6_1.d = float.s(v6_1.d)
                            v7_1.d = float.s(v7_1.d)
                            v4_1.d = v4_1.d f* arg9.d
                            v5_1.d = v5_1.d f* arg9.d
                            v6_1.d = v6_1.d f* arg9.d
                            v7_1.d = v7_1.d f* arg9.d
                            v4_1.d = v6_1.d f- v4_1.d
                            v5_1.d = v5_1.d f- v7_1.d
                            v4_1.d = v4_1.d f* v4_1.d
                            v5_1.d = v5_1.d f* v5_1.d
                            v4_1.d = v4_1.d f+ v5_1.d
                            v4_1.d = sqrt(v4_1.d)
                            v5_1.d = v2_1 f/ v4_1.d
                            
                            if (v4_1.d f== 0f)
                                v4_1.d = 0f
                            else
                                v4_1.d = v5_1.d
                    
                    x0_5[i] = v4_1.d
                    x13_1 = i.d
                    i += 1
                    x12_3 = &x12_3[7]
                while (zx.q(i_5) != i)
            
            int32_t x8_5 = var_a8
            int32_t x9_2 = var_b0
            int16_t* x22_2
            
            if (x8_5 s>= x9_2)
                x22_2 = var_b8
            else
                x22_2 = var_b8
                int64_t x24_2 = sx.q(var_a4)
                int64_t x28_1 = sx.q(var_ac)
                uint64_t i_4 = zx.q(i_5)
                v0_1.d = float.s(zx.d(arg4))
                int32_t x23_2 = x8_5
                int32_t var_c8_1 = v0_1.d
                int64_t var_130_1 = x24_2
                int32_t var_f4_1 = arg10.d
                
                do
                    if (x24_2.d s< x28_1.d)
                        v0_1.d = float.s(x23_2)
                        v1_1.d = fconvert.s(0.5f)
                        v8.d = v0_1.d f+ v1_1.d
                        v9.d = v8.d f/ v26_1
                        v1_1.d = fconvert.s(1f)
                        int64_t v2_2
                        int64_t v3_2
                        int64_t v4_7
                        int64_t v5_4
                        v0_1, v1_1, v2_2, v3_2, v4_7, v5_4 = fmodf(v9.d, v1_1.d)
                        v1_1.d = float.s(0x3c23d70a)
                        v3_2.d = float.s(0x3f7d70a4)
                        v2_2.d = v9.d f+ v1_1.d
                        
                        if (v0_1.d f< v1_1.d)
                            v2_2.d = v2_2.d
                        else
                            v2_2.d = v9.d
                        
                        bool cond:6_1 = v0_1.d f> v3_2.d
                        v3_2.d = float.s(0xbc23d70a)
                        v26_1 = v0
                        int32_t v25_1 = arg9.d
                        bool n_2
                        
                        if (cond:6_1)
                            v0_1.d f- v1_1.d
                            n_2 = unimplemented  {fccmp s0, s1, #0x8, gt}
                        else
                            n_2 = true
                        
                        v0_1.d = v9.d f+ v3_2.d
                        v9.d = var_f4_1
                        int32_t v30_1 = v8.d
                        float v28_1 = 0f
                        
                        if (n_2)
                            v8.d = v2_2.d
                        else
                            v8.d = v0_1.d
                        
                        float v29_1 = fconvert.s(3f)
                        float v27_1 = fconvert.s(1f)
                        int32_t x25_3 = neg.d(x24_2.d) + (x23_2 - x8_5) * x26_2
                        v0_1.d = v8.d f* v28_1
                        int32_t var_10c_1 = v0_1.d
                        int32_t var_f8_1 = v30_1
                        int32_t var_c4_1 = v8.d
                        
                        do
                            if (i_5 s< 1)
                                v13.d = float.s(0xc97423f0)
                            else
                                v0_1.d = float.s(x24_2.d)
                                v2_2.d = fconvert.s(0.5f)
                                float v24_1 = v0_1.d f+ v2_2.d
                                v2_2.d = var_10c_1
                                v1_1.d = float.s(0x80000000)
                                uint64_t i_3 = i_4
                                v0_1.d = v24_1 f/ v25_1
                                v1_1.d = v0_1.d f* v1_1.d
                                int32_t x23_4 = 0
                                v1_1.d = v8.d f+ v1_1.d
                                v2_2.d = v0_1.d f+ v2_2.d
                                int16_t* x9_6 = x22_2
                                float var_bc_1 = v24_1
                                float v6_3
                                float v7_2
                                float v16_2
                                int32_t i_1
                                
                                do
                                    uint32_t x10_7 = zx.d(x9_6[6].b)
                                    bool cond:22_1
                                    
                                    if (x10_7 == 3)
                                        int32_t x15_2 = sx.d(x9_6[2])
                                        int32_t x13_6 = sx.d(*x9_6)
                                        int32_t x12_8 = sx.d(x9_6[-7])
                                        int32_t x14_5 = sx.d(x9_6[3])
                                        int32_t x11_3 = sx.d(x9_6[1])
                                        int32_t x10_10 = sx.d(x9_6[-6])
                                        int32_t x16_2
                                        
                                        x16_2 = x15_2 s< x13_6 ? x15_2 : x13_6
                                        
                                        int32_t x16_3
                                        
                                        x16_3 = x16_2 s> x12_8 ? x12_8 : x16_2
                                        
                                        int16_t x17_2
                                        
                                        if (x14_5 s< x11_3)
                                            x17_2 = x14_5.w
                                        else
                                            x17_2 = x11_3.w
                                        
                                        int16_t x0_7
                                        
                                        if (x14_5 s> x11_3)
                                            x0_7 = x14_5.w
                                        else
                                            x0_7 = x11_3.w
                                        
                                        v5_4.d = float.s(x16_3)
                                        int16_t x17_3
                                        
                                        if (x10_10 s< sx.d(x17_2))
                                            x17_3 = x10_10.w
                                        else
                                            x17_3 = x17_2
                                        
                                        int16_t x16_4
                                        
                                        if (x10_10 s> sx.d(x0_7))
                                            x16_4 = x10_10.w
                                        else
                                            x16_4 = x0_7
                                        
                                        if (not(v0_1.d f<= v5_4.d))
                                            v5_4.d = float.s(sx.d(x17_3))
                                            
                                            if (not(v8.d f<= v5_4.d))
                                                v5_4.d = float.s(sx.d(x16_4))
                                                
                                                if (not(v8.d f>= v5_4.d))
                                                    v5_4.d = float.s(x12_8)
                                                    float v17_1 = float.s(sx.d(x15_2.w & 0xffff))
                                                    v6_3 = float.s(x10_10)
                                                    float v19_1 = float.s(x14_5)
                                                    float v18_1
                                                    float v20_1
                                                    
                                                    if (v5_4.d f!= v17_1 || not(v6_3 == v19_1))
                                                        v18_1 = float.s(x13_6)
                                                        v20_1 = float.s(x11_3)
                                                    
                                                    if ((v5_4.d f!= v17_1 || not(v6_3 == v19_1))
                                                            && (v17_1 != v18_1 || v19_1 != v20_1))
                                                        v16_2 = v19_1 - v17_1 * v28_1
                                                        float v22_1 = v6_3 - v5_4.d f* v28_1
                                                        v7_2 = v22_1 - (v16_2 + v16_2) + v20_1
                                                            - v18_1 * v28_1
                                                        v16_2 = v16_2 - v22_1
                                                        float v21_1 = v22_1 f- v1_1.d
                                                        int32_t x10_17
                                                        
                                                        if (v7_2 == 0f)
                                                            v21_1 =
                                                                v21_1 / (v16_2 * fconvert.s(-2f))
                                                            
                                                            if (not(v21_1 < 0f)
                                                                    && not(v21_1 > v27_1))
                                                                x10_17 = 1
                                                                v22_1 = 0f
                                                            label_100ae40:
                                                                v6_3 = v6_3 * v28_1 f+ v5_4.d
                                                                v5_4.d = v19_1 * v28_1 + v17_1
                                                                v5_4.d = v5_4.d f- v6_3
                                                                v17_1 = v20_1 * v28_1 + v18_1 - v6_3
                                                                v6_3 = v6_3 f- v2_2.d
                                                                
                                                                if (x10_17 u>= 2)
                                                                    v3_2.d = v22_1 + v22_1
                                                                    v3_2.d = fconvert.s(2f) f- v3_2.d
                                                                    v3_2.d = v22_1 f* v3_2.d
                                                                    v4_7.d = v22_1 * v22_1
                                                                    v3_2.d = v5_4.d f* v3_2.d
                                                                    v4_7.d = v17_1 f* v4_7.d
                                                                    v3_2.d = v6_3 f+ v3_2.d
                                                                    v3_2.d = v4_7.d f+ v3_2.d
                                                                    v4_7.d = v16_2 + v7_2 * v22_1
                                                                
                                                                v5_4.d = v5_4.d f* v21_1
                                                                    * (fconvert.s(2f) - (v21_1 + v21_1))
                                                                v5_4.d = v6_3 f+ v5_4.d
                                                                v5_4.d = v17_1 * v21_1 * v21_1 f+ v5_4.d
                                                                int32_t x11_8
                                                                
                                                                if (v16_2 + v7_2 * v21_1 < 0f)
                                                                    x11_8 = -1
                                                                else
                                                                    x11_8 = 1
                                                                
                                                                int32_t x11_9
                                                                
                                                                x11_9 = v5_4.d f< 0f ? x11_8 : 0
                                                                
                                                                x23_4 += x11_9
                                                                
                                                                if (x10_17 u>= 2 && not(v3_2.d f>= 0f))
                                                                    int32_t x10_6
                                                                    
                                                                    x10_6 = v4_7.d f< 0f ? -1 : 1
                                                                    
                                                                    x23_4 += x10_6
                                                        else
                                                            v21_1 = v16_2 * v16_2 - v21_1 * v7_2
                                                            
                                                            if (not(v21_1 <= 0f))
                                                                v21_1 = sqrt(v21_1)
                                                                arg11 = v23_1
                                                                v22_1 = fconvert.s(-1f) / v7_2
                                                                v23_1.d = v16_2 + v21_1
                                                                v23_1.d = v22_1 f* v23_1.d
                                                                v22_1 = v22_1 * (v16_2 - v21_1)
                                                                int32_t x12_10 = (v23_1.d f< 0f ? 1 : 0)
                                                                    | (v23_1.d f> v27_1 ? 1 : 0)
                                                                int32_t x10_15 = (v22_1 > v27_1 ? 1 : 0)
                                                                    | (v21_1 <= 0f ? 1 : 0)
                                                                    | (v22_1 < 0f ? 1 : 0)
                                                                int32_t x11_7 = x10_15 ^ 1
                                                                
                                                                if ((x12_10 & x11_7) != 0)
                                                                    v21_1 = v22_1
                                                                else
                                                                    v21_1 = v23_1.d
                                                                
                                                                if ((x12_10 | x10_15) == 0)
                                                                    x10_17 = 2
                                                                else
                                                                    x10_17 = 1
                                                                
                                                                v23_1 = arg11
                                                                
                                                                if (x12_10 != 1)
                                                                    v24_1 = var_bc_1
                                                                    goto label_100ae40
                                                                
                                                                v24_1 = var_bc_1
                                                                
                                                                if ((x11_7 & 1) != 0)
                                                                    goto label_100ae40
                                                    else
                                                        int32_t x14_6
                                                        
                                                        x14_6 = x11_3 s< x10_10 ? x11_3 : x10_10
                                                        
                                                        if (not(v8.d f<= float.s(x14_6)))
                                                            int32_t x14_7
                                                            
                                                            x14_7 = x11_3 s> x10_10 ? x11_3 : x10_10
                                                            
                                                            if (not(v8.d f>= float.s(x14_7)))
                                                                int32_t x12_9
                                                                
                                                                x12_9 = x13_6 s> x12_8 ? x12_8 : x13_6
                                                                
                                                                if (not(v0_1.d f<= float.s(x12_9)))
                                                                    cond:22_1 = x11_3 s<= x10_10
                                                                    v5_4.d = (v8.d f- v6_3)
                                                                        / float.s(x11_3 - x10_10)
                                                                        * float.s(x13_6 - x12_8) f+ v5_4.d
                                                                    goto label_100ab88
                                    else if (x10_7 == 2)
                                        int32_t x10_8 = sx.d(x9_6[-6])
                                        int32_t x11_2 = sx.d(x9_6[1])
                                        int16_t x12_4
                                        
                                        if (x11_2 s< x10_8)
                                            x12_4 = x11_2.w
                                        else
                                            x12_4 = x10_8.w
                                        
                                        v5_4.d = float.s(sx.d(x12_4))
                                        
                                        if (not(v8.d f<= v5_4.d))
                                            int32_t x12_6
                                            
                                            x12_6 = x11_2 s> x10_8 ? x11_2 : x10_8
                                            
                                            v5_4.d = float.s(x12_6)
                                            
                                            if (not(v8.d f>= v5_4.d))
                                                int32_t x12_7 = sx.d(x9_6[-7])
                                                int32_t x14_3 = sx.d(*x9_6)
                                                int32_t x14_4
                                                
                                                x14_4 = x14_3 s> x12_7 ? x12_7 : x14_3
                                                
                                                v5_4.d = float.s(x14_4)
                                                
                                                if (not(v0_1.d f<= v5_4.d))
                                                    v5_4.d = float.s(x10_8)
                                                    cond:22_1 = x11_2 s<= x10_8
                                                    v5_4.d = v8.d f- v5_4.d
                                                    v5_4.d = v5_4.d f/ float.s(x11_2 - x10_8)
                                                    v5_4.d = v5_4.d f* float.s(x14_3 - x12_7)
                                                    v5_4.d = v5_4.d f+ float.s(x12_7)
                                                label_100ab88:
                                                    int32_t x10_5
                                                    
                                                    x10_5 = cond:22_1 ? -1 : 1
                                                    
                                                    if (v5_4.d f< v0_1.d)
                                                        x23_4 += x10_5
                                                    else
                                                        x23_4 = x23_4
                                    i_1 = i_3
                                    i_3 -= 1
                                    x9_6 = &x9_6[7]
                                while (i_1 != 1)
                                
                                if (i_5 s< 1)
                                    v13.d = float.s(0x497423f0)
                                else
                                    void* fp_1 = x22_2 - 0xe
                                    int64_t i_2 = 0
                                    v13.d = float.s(0x497423f0)
                                    
                                    do
                                        v0_1.w = *(fp_1 + 0xe)
                                        v1_1.w = *(fp_1 + 0x10)
                                        uint32_t x8_12 = zx.d(*(fp_1 + 0x1a))
                                        v2_2.d = v13.d f* v13.d
                                        v0_1.d = sx.d(v0_1.w)
                                        v0_1:4.d = sx.d(v0_1:2.w)
                                        v0_1:8.d = sx.d(v0_1:4.w)
                                        v0_1:0xc.d = sx.d(v0_1:6.w)
                                        v1_1.d = sx.d(v1_1.w)
                                        v1_1:4.d = sx.d(v1_1:2.w)
                                        v1_1:8.d = sx.d(v1_1:4.w)
                                        v1_1:0xc.d = sx.d(v1_1:6.w)
                                        v0_1.d = float.s(v0_1.d)
                                        v1_1.d = float.s(v1_1.d)
                                        arg12.d = v0_1.d f* v25_1
                                        v12.d = v26_1 f* v1_1.d
                                        v1_1.d = arg12.d f- v24_1
                                        v0_1.d = v12.d f- v30_1
                                        v3_2.d = v1_1.d f* v1_1.d
                                        v4_7.d = v0_1.d f* v0_1.d
                                        v3_2.d = v3_2.d f+ v4_7.d
                                        v4_7.d = sqrt(v3_2.d)
                                        
                                        if (v3_2.d f< v2_2.d)
                                            v13.d = v4_7.d
                                        else
                                            v13.d = v13.d
                                        
                                        if (x8_12 == 3)
                                            v5_4.w = *(fp_1 + 0x14)
                                            v4_7.w = *(fp_1 + 0x12)
                                            v2_2.w = *fp_1
                                            v3_2.w = *(fp_1 + 2)
                                            v5_4.d = sx.d(v5_4.w)
                                            v5_4:4.d = sx.d(v5_4:2.w)
                                            v5_4:8.d = sx.d(v5_4:4.w)
                                            v5_4:0xc.d = sx.d(v5_4:6.w)
                                            v4_7.d = sx.d(v4_7.w)
                                            v4_7:4.d = sx.d(v4_7:2.w)
                                            v4_7:8.d = sx.d(v4_7:4.w)
                                            v4_7:0xc.d = sx.d(v4_7:6.w)
                                            v5_4.d = float.s(v5_4.d)
                                            v2_2.d = sx.d(v2_2.w)
                                            v2_2:4.d = sx.d(v2_2:2.w)
                                            v2_2:8.d = sx.d(v2_2:4.w)
                                            v2_2:0xc.d = sx.d(v2_2:6.w)
                                            v4_7.d = float.s(v4_7.d)
                                            v8.d = v26_1 f* v5_4.d
                                            v3_2.d = sx.d(v3_2.w)
                                            v3_2:4.d = sx.d(v3_2:2.w)
                                            v3_2:8.d = sx.d(v3_2:4.w)
                                            v3_2:0xc.d = sx.d(v3_2:6.w)
                                            v2_2.d = float.s(v2_2.d)
                                            v14.d = v4_7.d f* v25_1
                                            v12.d f- v8.d
                                            v3_2.d = float.s(v3_2.d)
                                            arg11.d = v2_2.d f* v25_1
                                            
                                            if (v12.d f< v8.d)
                                                v2_2.d = v12.d
                                            else
                                                v2_2.d = v8.d
                                            
                                            if (v12.d f< v8.d)
                                                v5_4.d = v8.d
                                            else
                                                v5_4.d = v12.d
                                            
                                            arg12.d f- v14.d
                                            v15.d = v26_1 f* v3_2.d
                                            
                                            if (arg12.d f< v14.d)
                                                v3_2.d = arg12.d
                                            else
                                                v3_2.d = v14.d
                                            
                                            if (arg12.d f< v14.d)
                                                v4_7.d = v14.d
                                            else
                                                v4_7.d = arg12.d
                                            
                                            if (v3_2.d f< arg11.d)
                                                v3_2.d = v3_2.d
                                            else
                                                v3_2.d = arg11.d
                                            
                                            if (v2_2.d f< v15.d)
                                                v2_2.d = v2_2.d
                                            else
                                                v2_2.d = v15.d
                                            
                                            if (v4_7.d f< arg11.d)
                                                v4_7.d = arg11.d
                                            else
                                                v4_7.d = v4_7.d
                                            
                                            if (v5_4.d f< v15.d)
                                                v5_4.d = v15.d
                                            else
                                                v5_4.d = v5_4.d
                                            
                                            v5_4.d = v13.d f+ v5_4.d
                                            
                                            if (not(v30_1 f>= v5_4.d))
                                                v3_2.d = v3_2.d f- v13.d
                                                
                                                if (not(v24_1 f<= v3_2.d))
                                                    v3_2.d = v13.d f+ v4_7.d
                                                    
                                                    if (not(v24_1 f>= v3_2.d))
                                                        v2_2.d = v2_2.d f- v13.d
                                                        
                                                        if (not(v30_1 f<= v2_2.d))
                                                            v4_7.d = v14.d f+ v14.d
                                                            v5_4.d = *(x0_5 + i_2)
                                                            v4_7.d = arg12.d f- v4_7.d
                                                            v3_2.d = v14.d f- arg12.d
                                                            v2_2.d = v8.d f- v12.d
                                                            v7_2 = arg11.d f+ v4_7.d
                                                            v6_3 = v15.d f+ v12.d f- (v8.d f+ v8.d)
                                                            v4_7.d = v3_2.d f* v7_2
                                                            v4_7.d = v4_7.d f+ v2_2.d f* v6_3
                                                            v4_7.d = v4_7.d f* v29_1
                                                            int32_t x8_13
                                                            int32_t x9_7
                                                            
                                                            if (v5_4.d f!= 0f)
                                                                v7_2 = v1_1.d f* v7_2
                                                                v6_3 = v0_1.d f* v6_3
                                                                v0_1.d = v0_1.d f* v2_2.d
                                                                v2_2.d =
                                                                    v3_2.d f* v3_2.d + v2_2.d f* v2_2.d
                                                                v4_7.d = v4_7.d f* v5_4.d
                                                                v1_1.d = v1_1.d f* v3_2.d
                                                                v3_2.d = v7_2 + v6_3
                                                                v2_2.d = v2_2.d f+ v2_2.d
                                                                v0_1.d = v1_1.d f+ v0_1.d
                                                                v1_1.d = v4_7.d f* v4_7.d
                                                                v16_2 = fconvert.s(-3f)
                                                                v2_2.d = v2_2.d f+ v3_2.d
                                                                v7_2 = v0_1.d f* v5_4.d
                                                                v0_1.d = v1_1.d f/ v16_2
                                                                v2_2.d = v2_2.d f* v5_4.d
                                                                v3_2.d = fconvert.s(-9f)
                                                                v1_1.d = v4_7.d f* (v4_7.d f+ v4_7.d)
                                                                v0_1.d = v2_2.d f+ v0_1.d
                                                                v2_2.d = v2_2.d f* v3_2.d
                                                                v1_1.d = v1_1.d f+ v2_2.d
                                                                v2_2.d = v0_1.d f* v0_1.d
                                                                v3_2.d = v4_7.d f* v1_1.d
                                                                v5_4.d = fconvert.s(27f)
                                                                v1_1.d = v0_1.d f* v2_2.d
                                                                v2_2.d = v3_2.d f/ v5_4.d
                                                                v3_2.d = fconvert.s(4f)
                                                                v3_2.d = v1_1.d f* v3_2.d
                                                                v9.d = v7_2 f+ v2_2.d
                                                                v2_2.d = v9.d f* v9.d
                                                                v3_2.d = v3_2.d f/ v5_4.d
                                                                v2_2.d = v2_2.d f+ v3_2.d
                                                                v3_2.d = v4_7.d f/ v16_2
                                                                int32_t var_c0_1 = v3_2.d
                                                                
                                                                if (v2_2.d f>= 0f)
                                                                    v0_1.d = sqrt(v2_2.d)
                                                                    float var_108_1 = v0_1.d
                                                                    v0_1.d = v0_1.d f- v9.d
                                                                    v1_1.d = fconvert.s(0.5f)
                                                                    v0_1.d = v0_1.d f* v1_1.d
                                                                    int32_t var_100_2 = v23_1.d
                                                                    int32_t var_fc_2 = v31_1.d
                                                                    float x
                                                                    float y
                                                                    float x_1
                                                                    
                                                                    if (v0_1.d f>= 0f)
                                                                        v1_1.d = float.s(0x3eaaaaab)
                                                                        x, y, x_1 =
                                                                            powf(v0_1.d, v1_1.d, v2_2.d, v3_2.d)
                                                                    else
                                                                        v0_1.d = fneg(v0_1.d)
                                                                        v1_1.d = float.s(0x3eaaaaab)
                                                                        x, y, x_1 =
                                                                            powf(v0_1.d, v1_1.d, v2_2.d, v3_2.d)
                                                                        x = fneg(x)
                                                                    
                                                                    float x_2 = x
                                                                    x = (fneg(v9.d) - var_108_1)
                                                                        * fconvert.s(0.5f)
                                                                    
                                                                    if (x >= 0f)
                                                                        v0_1, v1_1, v2_2, v3_2, v4_7, v5_4, 
                                                                            v23_1, v31_1 =
                                                                            powf(x, float.s(0x3eaaaaab), y, x_1)
                                                                    else
                                                                        v0_1, v1_1, v2_2, v3_2, v4_7, v5_4, 
                                                                            v23_1, v31_1 = powf(fneg(x), 
                                                                            float.s(0x3eaaaaab), y, x_1)
                                                                        v0_1.d = fneg(v0_1.d)
                                                                    
                                                                    v1_1.d = var_c0_1
                                                                    v24_1 = var_bc_1
                                                                    v2_2.d = x_2
                                                                    v23_1.d = var_100_2
                                                                    v30_1 = var_f8_1
                                                                    v9.d = var_f4_1
                                                                    v26_1 = v0
                                                                    v25_1 = arg9.d
                                                                    v31_1.d = var_fc_2
                                                                    v1_1.d = v1_1.d f+ v2_2.d
                                                                    x9_7 = 0
                                                                    x8_13 = 0
                                                                    v0_1.d = v1_1.d f+ v0_1.d
                                                                    v27_1 = fconvert.s(1f)
                                                                    v28_1 = 0f
                                                                    v29_1 = fconvert.s(3f)
                                                                else
                                                                    v0_1.d = v0_1.d f/ v16_2
                                                                    v2_2.d = fconvert.s(-27f)
                                                                    v1_1.d = v2_2.d f/ v1_1.d
                                                                    v0_1.d = sqrt(v0_1.d)
                                                                    int32_t var_fc_1 = v0_1.d
                                                                    v0_1.d = sqrt(v1_1.d)
                                                                    v0_1.d = v9.d f* v0_1.d
                                                                    v1_1.d = fconvert.s(-0.5f)
                                                                    v0_1.d = v0_1.d f* v1_1.d
                                                                    v9.d = fconvert.s(3f)
                                                                    int64_t x0_8
                                                                    int64_t x1_1
                                                                    int32_t n
                                                                    float v0_3
                                                                    v0_3, x0_8, x1_1, n = acosf(v0_1.d)
                                                                    v9.d = v0_3 f/ v9.d
                                                                    int32_t var_100_1 =
                                                                        cosf(x0_8, x1_1, n, v9.d).d
                                                                    v0_1, v1_1, v2_2, v3_2, v4_7, v5_4, 
                                                                        v23_1, v31_1 = cos(fconvert.d(v9.d)
                                                                        + -1.5707960000000001)
                                                                    v3_2.d = var_fc_1
                                                                    v30_1 = var_f8_1
                                                                    v5_4.d = var_100_1
                                                                    v4_7.d = var_c0_1
                                                                    v24_1 = var_bc_1
                                                                    v0_1.d = fconvert.s(v0_1.q)
                                                                    v1_1.d = float.s(0x3fddb3d7)
                                                                    v26_1 = v0
                                                                    v25_1 = arg9.d
                                                                    v2_2.d = v3_2.d f+ v3_2.d
                                                                    v1_1.d = v0_1.d f* v1_1.d
                                                                    v9.d = var_f4_1
                                                                    v0_1.d = v2_2.d f* v5_4.d
                                                                    v2_2.d = v5_4.d f+ v1_1.d
                                                                    v1_1.d = v5_4.d f- v1_1.d
                                                                    v2_2.d = v3_2.d f* v2_2.d
                                                                    v1_1.d = v3_2.d f* v1_1.d
                                                                    v29_1 = fconvert.s(3f)
                                                                    v28_1 = 0f
                                                                    v27_1 = fconvert.s(1f)
                                                                    x9_7 = 1
                                                                    v0_1.d = v4_7.d f+ v0_1.d
                                                                    v23_1.d = v4_7.d f- v2_2.d
                                                                    v31_1.d = v4_7.d f- v1_1.d
                                                                    x8_13 = 1
                                                                
                                                                goto label_100b38c
                                                            
                                                            v5_4.d = v3_2.d f* v3_2.d
                                                            v16_2 = v2_2.d f* v2_2.d
                                                            v7_2 = v1_1.d f* v7_2
                                                            v6_3 = v0_1.d f* v6_3
                                                            v2_2.d = v0_1.d f* v2_2.d
                                                            v0_1.d = v5_4.d f+ v16_2
                                                            v1_1.d = v1_1.d f* v3_2.d
                                                            v3_2.d = v7_2 + v6_3
                                                            v0_1.d = v0_1.d f+ v0_1.d
                                                            v0_1.d = v0_1.d f+ v3_2.d
                                                            v1_1.d = v1_1.d f+ v2_2.d
                                                            
                                                            if (v4_7.d f!= 0f)
                                                                v3_2.d = fconvert.s(-4f)
                                                                v3_2.d = v4_7.d f* v3_2.d
                                                                v2_2.d = v0_1.d f* v0_1.d
                                                                v1_1.d = v1_1.d f* v3_2.d
                                                                v1_1.d = v2_2.d f+ v1_1.d
                                                                
                                                                if (not(v1_1.d f< 0f))
                                                                    v1_1.d = sqrt(v1_1.d)
                                                                    v2_2.d = fneg(v0_1.d)
                                                                    v3_2.d = v4_7.d f+ v4_7.d
                                                                    v2_2.d = v2_2.d f- v1_1.d
                                                                    v1_1.d = v1_1.d f- v0_1.d
                                                                    x8_13 = 0
                                                                    v0_1.d = v2_2.d f/ v3_2.d
                                                                    v23_1.d = v1_1.d f/ v3_2.d
                                                                    x9_7 = 1
                                                                label_100b38c:
                                                                    
                                                                    if (not(v0_1.d f< 0f)
                                                                            && not(v0_1.d f> v27_1))
                                                                        v1_1.d = v27_1 f- v0_1.d
                                                                        v2_2.d = v0_1.d f+ v0_1.d
                                                                        v3_2.d = v1_1.d f* v1_1.d
                                                                        v1_1.d = v2_2.d f* v1_1.d
                                                                        v0_1.d = v0_1.d f* v0_1.d
                                                                        v2_2.d = arg12.d f* v3_2.d
                                                                        v4_7.d = v14.d f* v1_1.d
                                                                        v3_2.d = v12.d f* v3_2.d
                                                                        v1_1.d = v8.d f* v1_1.d
                                                                        v2_2.d = v2_2.d f+ v4_7.d
                                                                        v4_7.d = arg11.d f* v0_1.d
                                                                        v0_1.d = v15.d f* v0_1.d
                                                                        v1_1.d = v3_2.d f+ v1_1.d
                                                                        v2_2.d = v4_7.d f+ v2_2.d
                                                                        v0_1.d = v0_1.d f+ v1_1.d
                                                                        v1_1.d = v2_2.d f- v24_1
                                                                        v0_1.d = v0_1.d f- v30_1
                                                                        v1_1.d = v1_1.d f* v1_1.d
                                                                        v0_1.d = v0_1.d f* v0_1.d
                                                                        v0_1.d = v1_1.d f+ v0_1.d
                                                                        v1_1.d = v13.d f* v13.d
                                                                        
                                                                        if (not(v0_1.d f>= v1_1.d))
                                                                            v13.d = sqrt(v0_1.d)
                                                                    
                                                                    if (x9_7 != 0)
                                                                        if (not(v23_1.d f< 0f)
                                                                                && not(v23_1.d f> v27_1))
                                                                            v0_1.d = v27_1 f- v23_1.d
                                                                            v1_1.d = v23_1.d f+ v23_1.d
                                                                            v3_2.d = v0_1.d f* v0_1.d
                                                                            v0_1.d = v1_1.d f* v0_1.d
                                                                            v2_2.d = v23_1.d f* v23_1.d
                                                                            v1_1.d = arg12.d f* v3_2.d
                                                                            v4_7.d = v14.d f* v0_1.d
                                                                            v3_2.d = v12.d f* v3_2.d
                                                                            v0_1.d = v8.d f* v0_1.d
                                                                            v1_1.d = v1_1.d f+ v4_7.d
                                                                            v4_7.d = arg11.d f* v2_2.d
                                                                            v2_2.d = v15.d f* v2_2.d
                                                                            v0_1.d = v3_2.d f+ v0_1.d
                                                                            v1_1.d = v4_7.d f+ v1_1.d
                                                                            v0_1.d = v2_2.d f+ v0_1.d
                                                                            v1_1.d = v1_1.d f- v24_1
                                                                            v0_1.d = v0_1.d f- v30_1
                                                                            v1_1.d = v1_1.d f* v1_1.d
                                                                            v0_1.d = v0_1.d f* v0_1.d
                                                                            v0_1.d = v1_1.d f+ v0_1.d
                                                                            v1_1.d = v13.d f* v13.d
                                                                            
                                                                            if (not(v0_1.d f>= v1_1.d))
                                                                                v13.d = sqrt(v0_1.d)
                                                                        
                                                                        if (x8_13 != 0 && not(v31_1.d f< 0f)
                                                                                && not(v31_1.d f> v27_1))
                                                                            v0_1.d = v27_1 f- v31_1.d
                                                                            v1_1.d = v31_1.d f+ v31_1.d
                                                                            v1_1.d = v1_1.d f* v0_1.d
                                                                            v0_1.d = v0_1.d f* v0_1.d
                                                                            v2_2.d = v31_1.d f* v31_1.d
                                                                            v4_7.d = arg12.d f* v0_1.d
                                                                            v5_4.d = v14.d f* v1_1.d
                                                                            v0_1.d = v12.d f* v0_1.d
                                                                            v1_1.d = v8.d f* v1_1.d
                                                                            v3_2.d = arg11.d f* v2_2.d
                                                                            v2_2.d = v15.d f* v2_2.d
                                                                            v4_7.d = v4_7.d f+ v5_4.d
                                                                            v0_1.d = v0_1.d f+ v1_1.d
                                                                            v1_1.d = v3_2.d f+ v4_7.d
                                                                            v0_1.d = v2_2.d f+ v0_1.d
                                                                            v1_1.d = v1_1.d f- v24_1
                                                                            v0_1.d = v0_1.d f- v30_1
                                                                            v1_1.d = v1_1.d f* v1_1.d
                                                                            v0_1.d = v0_1.d f* v0_1.d
                                                                            v0_1.d = v1_1.d f+ v0_1.d
                                                                            v1_1.d = v13.d f* v13.d
                                                                            
                                                                            if (not(v0_1.d f>= v1_1.d))
                                                                                v13.d = sqrt(v0_1.d)
                                                            else if (not(v0_1.d f== 0f))
                                                                v1_1.d = fneg(v1_1.d)
                                                                x9_7 = 0
                                                                x8_13 = 0
                                                                v0_1.d = v1_1.d f/ v0_1.d
                                                                goto label_100b38c
                                        else if (x8_12 == 2)
                                            if (i_2 == 0)
                                                int64_t x0_11
                                                int64_t x1_2
                                                int32_t x2_2
                                                int32_t x3_1
                                                int64_t x4_1
                                                int64_t x5_1
                                                int64_t x6
                                                int64_t x7
                                                int128_t v0_6
                                                int128_t v1_4
                                                x0_11, x1_2, x2_2, x3_1, x4_1, x5_1, x6, x7, v0_6, 
                                                    v1_4 = __assert2(
                                                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                                "ExternalCode/stb/stb_truetype.h", 
                                                    0x11fc, 
                                                    "unsigned char *stbtt_GetGlyphSDF(const "
                                                "stbtt_fontinfo *, float, int, int, unsigned char, "
                                                "float, int *, int *, int *, int *)", 
                                                    "i != 0")
                                                return stbtt_GetCodepointSDF(x0_11, x1_2, x2_2, 
                                                    x3_1, x4_1, x5_1, x6, x7, v0_6, v1_4) __tailcall
                                            
                                            v2_2.w = *fp_1
                                            v3_2.w = *(fp_1 + 2)
                                            v5_4.d = *(x0_5 + i_2)
                                            v2_2.d = sx.d(v2_2.w)
                                            v2_2:4.d = sx.d(v2_2:2.w)
                                            v2_2:8.d = sx.d(v2_2:4.w)
                                            v2_2:0xc.d = sx.d(v2_2:6.w)
                                            v3_2.d = sx.d(v3_2.w)
                                            v3_2:4.d = sx.d(v3_2:2.w)
                                            v3_2:8.d = sx.d(v3_2:4.w)
                                            v3_2:0xc.d = sx.d(v3_2:6.w)
                                            v2_2.d = float.s(v2_2.d)
                                            v3_2.d = float.s(v3_2.d)
                                            v2_2.d = v2_2.d f* v25_1
                                            v3_2.d = v26_1 f* v3_2.d
                                            v4_7.d = v2_2.d f- arg12.d
                                            v3_2.d = v3_2.d f- v12.d
                                            v2_2.d = v0_1.d f* v4_7.d
                                            v2_2.d = fabs(v2_2.d f- v1_1.d f* v3_2.d)
                                            v2_2.d = v5_4.d f* v2_2.d
                                            
                                            if (not(v2_2.d f>= v13.d))
                                                v1_1.d = v1_1.d f* v4_7.d
                                                v0_1.d = v0_1.d f* v3_2.d
                                                v4_7.d = v4_7.d f* v4_7.d
                                                v3_2.d = v3_2.d f* v3_2.d
                                                v0_1.d = v1_1.d f+ v0_1.d
                                                v0_1.d = fneg(v0_1.d)
                                                v1_1.d = v4_7.d f+ v3_2.d
                                                v0_1.d = v0_1.d f/ v1_1.d
                                                bool v_1
                                                bool n_3
                                                
                                                if (v0_1.d f<= v27_1)
                                                    v0_1.d f- v28_1
                                                    v_1 = unimplemented  {fccmp s0, s28, #0x8, ls}
                                                    n_3 = unimplemented  {fccmp s0, s28, #0x8, ls}
                                                else
                                                    n_3 = true
                                                    v_1 = false
                                                
                                                if (n_3 == v_1)
                                                    v13.d = v2_2.d
                                                else
                                                    v13.d = v13.d
                                        
                                        i_2 += 4
                                        fp_1 += 0xe
                                    while (i_4 << 2 != i_2)
                                
                                if (x23_4 == 0)
                                    v13.d = fneg(v13.d)
                            
                            v1_1.d = var_c8_1
                            v0_1.d = v13.d f* v9.d
                            v1_1.d = v0_1.d f+ v1_1.d
                            v0_1.d = 0f
                            
                            if (not(v1_1.d f< 0f))
                                v0_1.d = float.s(0x437f0000)
                                bool cond:10_1 = v1_1.d f<= v0_1.d
                                v0_1 = v1_1
                                
                                if (not(cond:10_1))
                                    v0_1.d = float.s(0x437f0000)
                            
                            v8.d = var_c4_1
                            int32_t x9_5 = x25_3 + x24_2.d
                            x24_2 += 1
                            *(result + sx.q(x9_5)) = vcvts_s32_f32(v0_1.d)
                        while (x24_2 s< x28_1)
                    
                    x24_2 = var_130_1
                    x23_2 += 1
                while (x23_2 s< x9_2)
            
            free(x0_5)
            free(x22_2)
        else
            result = 0

arg12.q = var_80
arg11.q = var_78
return result
