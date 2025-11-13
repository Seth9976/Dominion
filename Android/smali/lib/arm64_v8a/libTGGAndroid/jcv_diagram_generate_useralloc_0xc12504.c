// 函数: jcv_diagram_generate_useralloc
// 地址: 0xc12504
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
int64_t var_70 = arg10.q
int64_t var_68 = arg9.q
int64_t* x19 = *arg8

if (x19 != 0)
    int64_t x20_1 = *(x19 + 0x9c)
    void* i = *(x19 + 0x4c)
    int64_t x21_1 = *(x19 + 0xac)
    
    for (; i != 0; i = *(x19 + 0x4c))
        *(x19 + 0x4c) = *(i + 8)
        x21_1(x20_1)
    
    x21_1(x20_1, *x19)

int64_t n_1 = sx.q(arg1)
int32_t x9 = arg1 << 1
int64_t x25 = zx.q(x9) << 0x20 s>> 0x1d
int64_t x21_2 = (n_1 + (sx.q(arg1) << 2)) << 2
int64_t x0_3 = arg6(arg5, x21_2 + x25 + 0xe4)
memset(x0_3, 0, x21_2 + x25 + 0xe4)
int64_t* x20_2 = (x0_3 + 7) & 0xfffffffffffffff8
void* x8_6 = (x20_2 + 0xcb) & 0xfffffffffffffff8
void* x9_3 = (x8_6 + x21_2 + 7) & 0xfffffffffffffff8
x20_2[5] = x9_3
x20_2[6] = x8_6
*x20_2 = x0_3
*(x20_2 + 0x9c) = arg5
*(x20_2 + 0xa4) = arg6
*(x20_2 + 0xac) = arg7
*(x20_2 + 0x64) = x9_3 + 0x10

if (x9_3 + 0x10 + x25 u<= x0_3 + x21_2 + x25 + 0xe4)
    void* x8_8 = *(x20_2 + 0x5c)
    int64_t* x19_2
    int64_t n
    
    if (x8_8 == 0)
        int64_t* x0_4 = *(x20_2 + 0x4c)
        x19_2 = arg4
        n = n_1
        
        if (x0_4 == 0 || *x0_4 u<= 0x33)
            x0_4 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
            *x0_4 = 0xffe8
            x0_4[1] = *(x20_2 + 0x4c)
            x0_4[2] = &x0_4[3]
            *(x20_2 + 0x4c) = x0_4
        
        int64_t x9_7 = x0_4[2]
        x8_8 = (x9_7 + 7) & 0xfffffffffffffff8
        x0_4[2] = x8_8 + 0x2c
        void** x10_2 = *(x20_2 + 0x4c)
        *x10_2 = *x10_2 + x9_7 - x8_8 - 0x2c
    else
        x19_2 = arg4
        n = n_1
        *(x20_2 + 0x5c) = *(x8_8 + 0x10)
    
    *(x8_8 + 0x24) = 0
    *(x8_8 + 0x28) = 0
    __builtin_memset(x8_8, 0, 0x18)
    void* x9_11 = *(x20_2 + 0x5c)
    x20_2[2] = x8_8
    
    if (x9_11 == 0)
        int64_t* x0_6 = *(x20_2 + 0x4c)
        
        if (x0_6 == 0 || *x0_6 u<= 0x33)
            x0_6 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
            *x0_6 = 0xffe8
            x0_6[1] = *(x20_2 + 0x4c)
            x0_6[2] = &x0_6[3]
            *(x20_2 + 0x4c) = x0_6
        
        int64_t x8_17 = x0_6[2]
        x9_11 = (x8_17 + 7) & 0xfffffffffffffff8
        x0_6[2] = x9_11 + 0x2c
        void** x10_4 = *(x20_2 + 0x4c)
        *x10_4 = *x10_4 + x8_17 - x9_11 - 0x2c
    else
        *(x20_2 + 0x5c) = *(x9_11 + 0x10)
    
    *(x9_11 + 0x24) = 0
    *(x9_11 + 0x28) = 0
    __builtin_memset(x9_11, 0, 0x18)
    void* x8_21 = x20_2[2]
    x20_2[3] = x9_11
    *(x8_21 + 8) = 0
    *(x20_2[2] + 0x10) = x20_2[3]
    *(x20_2[3] + 8) = x20_2[2]
    *(x20_2[3] + 0x10) = 0
    int32_t* x8_25 = x20_2[5]
    int64_t x10_5 = *(x20_2 + 0x64)
    x20_2[4] = 0
    *x8_25 = x9
    x8_25[1] = 1
    *(x8_25 + 8) = x10_5
    void* b = x20_2[6]
    x20_2[8].d = arg1
    
    if (arg1 s>= 1)
        int64_t i_1 = 0
        void* x10_6 = b + 0xc
        
        do
            int64_t x11_3 = *(arg2 + (i_1 << 3))
            *(x10_6 - 4) = i_1.d
            i_1 += 1
            *x10_6 = 0
            *(x10_6 - 0xc) = x11_3
            x10_6 += 0x14
        while (zx.q(arg1) != i_1)
    
    int64_t* result
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v4_1
    result, v0_1, v1_1, v2_1, v4_1 = qsort(b, n, 0x14, sub_c13c10)
    
    if (x19_2 == 0)
        int64_t (* const var_d0)()
        x19_2 = &var_d0
        var_d0 = jcv_boxshape_test
        int64_t (* const var_c8_1)() = jcv_boxshape_clip
        int64_t (* const var_c0_1)() = jcv_boxshape_fillgaps
    
    uint64_t x12_1 = zx.q(x20_2[8].d)
    v1_1 = *(x19_2 + 0x10)
    v2_1 = *x19_2
    *(x20_2 + 0x8c) = *(x19_2 + 0x20)
    *(x20_2 + 0x7c) = v1_1
    *(x20_2 + 0x6c) = v2_1
    int32_t x8_26
    float v3_1
    float v5_1
    
    if (x12_1.d s< 1)
        v1_1.d = float.s(0x7f7fffff)
        v0_1.d = float.s(0xff7fffff)
        x8_26 = 0
        v2_1 = v0_1
        v3_1 = v1_1.d
    else
        int32_t* x9_17 = x20_2[6]
        v1_1.d = float.s(0x7f7fffff)
        v0_1.d = *x9_17
        v4_1.d = x9_17[1]
        v5_1 = float.s(0xff7fffff)
        v3_1 = vmin_f32(v0_1.d, v1_1.d)
        v1_1.d = vmin_f32(v4_1.d, v1_1.d)
        v2_1.d = vmax_f32(v0_1.d, v5_1)
        v0_1.d = vmax_f32(v4_1.d, v5_1)
        
        if (x12_1.d != 1)
            int64_t i_2 = 0
            x8_26 = 0
            void* x11_5 = &x9_17[5]
            
            do
                int64_t x15_4 = i_2 & 0xffffffff
                v4_1.d = *(x11_5 + 4)
                v4_1.d = v4_1.d f- *(x9_17 + x15_4 * 0x14 + 4)
                
                if (v4_1.d f< 0f)
                    v4_1.d = fneg(v4_1.d)
                else
                    v4_1.d = v4_1.d
                
                if (v4_1.d f>= float.s(0x34000000))
                label_c12994:
                    v4_1 = *x11_5
                    void* x15_3 = x9_17 + muls.dp.d(i_2.d - x8_26 + 1, 0x14)
                    *(x15_3 + 0x10) = *(x11_5 + 0x10)
                    *x15_3 = v4_1
                    v4_1.d = *x11_5
                    v5_1 = *(x11_5 + 4)
                    
                    if (not(v3_1 f< v4_1.d))
                        v3_1 = v4_1.d
                    
                    if (v1_1.d f< v5_1)
                        v1_1.d = v1_1.d
                    else
                        v1_1.d = v5_1
                    
                    if (v2_1.d f> v4_1.d)
                        v2_1.d = v2_1.d
                    else
                        v2_1.d = v4_1.d
                    
                    if (v0_1.d f> v5_1)
                        v0_1.d = v0_1.d
                    else
                        v0_1.d = v5_1
                else
                    v4_1.d = *x11_5
                    v4_1.d = v4_1.d f- x9_17[x15_4 * 5]
                    
                    if (v4_1.d f< 0f)
                        v4_1.d = fneg(v4_1.d)
                    else
                        v4_1.d = v4_1.d
                    
                    if (v4_1.d f>= float.s(0x34000000))
                        goto label_c12994
                    
                    x8_26 += 1
                
                i_2 += 1
                x11_5 += 0x14
            while (x12_1 - 1 != i_2)
        else
            x8_26 = 0
        
        x12_1 = zx.q(x20_2[8].d)
    
    int32_t x9_21 = x12_1.d - x8_26
    x20_2[8].d = x9_21
    float var_e0 = v3_1
    int32_t var_dc_1 = v1_1.d
    int32_t var_d8_1 = v2_1.d
    int32_t var_d4_1 = v0_1.d
    int64_t x8_27 = *(x20_2 + 0x6c)
    
    if (x8_27 != 0)
        float* x10_7
        
        x10_7 = arg3 == 0 ? &var_e0 : arg3
        
        *(x20_2 + 0x84) = *x10_7
        void* x10_9
        
        if (arg3 == 0)
            x10_9 = &var_e0 | 8
        else
            x10_9 = &arg3[2]
        
        *(x20_2 + 0x8c) = *x10_9
        int32_t x19_3
        
        if (x9_21 s< 1)
            arg11.d = float.s(0x7f7fffff)
            arg10.d = float.s(0xff7fffff)
            x19_3 = 0
            arg9 = arg10
            arg12 = arg11
        else
            int32_t* x23_1 = x20_2[6]
            arg9.d = float.s(0xff7fffff)
            arg12.d = float.s(0x7f7fffff)
            int64_t x21_3 = 0
            x19_3 = 0
            int32_t* x26_1 = x23_1
            arg11 = arg12
            arg10 = arg9
            v0_1.d = *x26_1
            v1_1.d = x26_1[1]
            result, v0_1, v1_1, v2_1, v4_1 = x8_27(x20_2 + 0x6c, v0_1, v1_1)
            
            if (result.d == 0)
            label_c12944:
                x19_3 += 1
                
                if (zx.q(x9_21) - 1 != x21_3)
                    goto label_c12954
            else
                while (true)
                    v0_1 = *x26_1
                    void* x9_20 = x23_1 + muls.dp.d(x21_3.d - x19_3, 0x14)
                    *(x9_20 + 0x10) = x26_1[4]
                    *x9_20 = v0_1
                    v0_1.d = *x26_1
                    v1_1.d = x26_1[1]
                    
                    if (arg12.d f< v0_1.d)
                        arg12.d = arg12.d
                    else
                        arg12.d = v0_1.d
                    
                    if (arg11.d f< v1_1.d)
                        arg11.d = arg11.d
                    else
                        arg11.d = v1_1.d
                    
                    if (arg9.d f> v0_1.d)
                        arg9.d = arg9.d
                    else
                        arg9.d = v0_1.d
                    
                    if (arg10.d f> v1_1.d)
                        arg10.d = arg10.d
                    else
                        arg10.d = v1_1.d
                    
                    if (zx.q(x9_21) - 1 == x21_3)
                        break
                    
                label_c12954:
                    x21_3 += 1
                    x26_1 = &x26_1[5]
                    v0_1.d = *x26_1
                    v1_1.d = x26_1[1]
                    result, v0_1, v1_1, v2_1, v4_1 = (*(x20_2 + 0x6c))(x20_2 + 0x6c, v0_1, v1_1)
                    
                    if (result.d == 0)
                        goto label_c12944
            
            x9_21 = x20_2[8].d
        
        x20_2[8].d = x9_21 - x19_3
        var_e0 = arg12.d
        int32_t var_dc_2 = arg11.d
        int32_t var_d8_2 = arg9.d
        int32_t var_d4_2 = arg10.d
        
        if (arg3 == 0)
            v0_1.d = fconvert.s(-1f)
            v1_1.d = float.s(sx.d(vcvts_s32_f32(arg12.d)))
            v2_1.d = float.s(sx.d(vcvts_s32_f32(arg11.d)))
            uint32_t temp0_7 = vcvts_s32_f32(arg9.d)
            
            if (arg12.d f< v1_1.d)
                v1_1.d = v1_1.d f+ v0_1.d
            else
                v1_1.d = v1_1.d
            
            v3_1 = fconvert.s(1f)
            v4_1.d = float.s(temp0_7)
            v0_1.d = v2_1.d f+ v0_1.d
            uint32_t temp0_8 = vcvts_s32_f32(arg10.d)
            
            if (arg11.d f< v2_1.d)
                v0_1.d = v0_1.d
            else
                v0_1.d = v2_1.d
            
            if (arg9.d f> v4_1.d)
                v4_1.d = v4_1.d f+ v3_1
            else
                v4_1.d = v4_1.d
            
            v5_1 = float.s(temp0_8)
            v2_1.d = fconvert.s(-10f)
            float v6_1 = fconvert.s(10f)
            v1_1.d = v1_1.d f+ v2_1.d
            v0_1.d = v0_1.d f+ v2_1.d
            
            if (arg10.d f> v5_1)
                v2_1.d = v5_1 + v3_1
            else
                v2_1.d = v5_1
            
            var_e0 = v1_1.d
            int32_t var_dc_3 = v0_1.d
            v0_1.d = v4_1.d f+ v6_1
            v1_1.d = v2_1.d f+ v6_1
            int32_t var_d8_3 = v0_1.d
            int32_t var_d4_3 = v1_1.d
            *(x20_2 + 0x84) = var_e0.o
    
    float* x8_35
    
    x8_35 = arg3 == 0 ? &var_e0 : arg3
    
    *(x20_2 + 0xb4) = *x8_35
    *(arg8 + 0xc) = *(x20_2 + 0xb4)
    *(arg8 + 0x14) = *(x20_2 + 0xbc)
    int32_t x8_38 = x20_2[8].d
    *arg8 = x20_2
    arg8[1].d = x8_38
    int32_t x9_23 = x20_2[8].d
    int32_t x8_39 = *(x20_2 + 0x44)
    int32_t* x21_4
    void* x24_2
    
    if (x8_39 s>= x9_23)
        x24_2 = x20_2[5]
        x20_2[7] = 0
        
        if (x8_39 s>= x9_23)
            x21_4 = nullptr
        else
        label_c12b6c:
            int64_t x9_24 = x20_2[6]
            *(x20_2 + 0x44) = x8_39 + 1
            x21_4 = x9_24 + muls.dp.d(x8_39, 0x14)
    else
        x24_2 = x20_2[5]
        int64_t x10_11 = sx.q(x8_39)
        x8_39 += 1
        int64_t x10_12 = x20_2[6] + x10_11 * 0x14
        *(x20_2 + 0x44) = x8_39
        x20_2[7] = x10_12
        
        if (x8_39 s< x9_23)
            goto label_c12b6c
        
        x21_4 = nullptr
    
    arg10.q = 1
    arg9.d = fconvert.s(0.5f)
    
    while (true)
        if (*(x24_2 + 4) != 1)
            bool cond:16_1
            
            if (x21_4 != 0)
                v1_1.d = x21_4[1]
                void* x8_42 = *(*(x24_2 + 8) + 8)
                v0_1.d = *(x8_42 + 0x20)
                v1_1.d f- v0_1.d
                cond:16_1 = v1_1.d f>= v0_1.d
                
                if (not(v1_1.d f!= v0_1.d))
                    v0_1.d = *(x8_42 + 0x18)
                    v1_1.d = *x21_4
                    cond:16_1 = v1_1.d f>= v0_1.d
            
            if (x21_4 == 0 || cond:16_1)
                void* x0_10 = x20_2[5]
                void* x8_43 = *(x0_10 + 8)
                int64_t x9_26 = sx.q(*(x0_10 + 4)) - 1
                int64_t* x28_1 = *(x8_43 + 8)
                *(x0_10 + 4) = x9_26.d
                *(x8_43 + 8) = *(x8_43 + (x9_26 << 3))
                sub_c1fd50(x0_10, 1)
                int64_t* x27_2 = x28_1[1]
                int64_t* fp_1 = x28_1[2]
                int64_t x8_44 = *fp_1
                int32_t* x24_3
                
                if (x8_44 == 0)
                    x24_3 = nullptr
                else
                    x24_3 = *(x8_44 + ((1 - sx.q(*(fp_1 + 0x24))) << 3) + 8)
                
                void* x1_6 = *x28_1
                int64_t x9_32 = sx.q(*(x28_1 + 0x24))
                int64_t* x10_14 = fp_1[2]
                int64_t x26_2 = x28_1[3]
                int32_t* x19_5 = *(x1_6 + (x9_32 << 3) + 8)
                *(x1_6 + 0x18 + (x9_32 << 3)) = x26_2
                v1_1.d = float.s(0xff7fffff)
                
                if (*(x1_6 + 0x18 + ((1 - x9_32) << 3)) f== v1_1.d)
                    v1_1.d = float.s(0xff7fffff)
                    
                    if (*(x1_6 + ((1 - x9_32) << 3) + 0x1c) f!= v1_1.d)
                        v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x1_6)
                else
                    v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x1_6)
                
                void* x1_7 = *fp_1
                int64_t x9_34 = sx.q(*(fp_1 + 0x24))
                *(x1_7 + 0x18 + (x9_34 << 3)) = x26_2
                v1_1.d = float.s(0xff7fffff)
                
                if (*(x1_7 + 0x18 + ((1 - x9_34) << 3)) f== v1_1.d)
                    v1_1.d = float.s(0xff7fffff)
                    
                    if (*(x1_7 + ((1 - x9_34) << 3) + 0x1c) f!= v1_1.d)
                        v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x1_7)
                else
                    v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x1_7)
                
                void* x0_18 = x20_2[5]
                x20_2[4] = x10_14
                int32_t x8_54 = *(x0_18 + 4)
                
                if (x8_54 != 1)
                    int32_t x22_4 = fp_1[5].d
                    
                    if (x22_4 != 0)
                        int64_t x9_36 = *(x0_18 + 8)
                        *(x0_18 + 4) = x8_54 - 1
                        int64_t x11_8 = sx.q(x22_4)
                        void* x8_56 = *(x9_36 + (sx.q(x8_54 - 1) << 3))
                        *(x9_36 + (x11_8 << 3)) = x8_56
                        float v0_2 = fp_1[4].d
                        v1_1.d = *(x8_56 + 0x20)
                        v0_2 f- v1_1.d
                        bool cond:19_1 = v0_2 f<= v1_1.d
                        
                        if (not(v0_2 f!= v1_1.d))
                            v1_1.d = *(x8_56 + 0x18)
                            cond:19_1 = fp_1[3].d f<= v1_1.d
                        
                        if (cond:19_1)
                            sub_c1fd50(x0_18, x22_4)
                        else
                            int64_t x8_57 = *(x0_18 + 8)
                            uint64_t x10_17 = zx.q(x22_4)
                            void* x9_37 = *(x8_57 + (x11_8 << 3))
                            
                            if (x22_4 s>= 2)
                                int32_t x12_4 = x22_4
                                
                                while (true)
                                    x10_17 = zx.q(x12_4)
                                    x12_4 s>>= 1
                                    void* x11_9 = *(x8_57 + (sx.q(x12_4) << 3))
                                    v1_1.d = *(x9_37 + 0x20)
                                    v0_2 = *(x11_9 + 0x20)
                                    v0_2 f- v1_1.d
                                    bool cond:22_1 = v0_2 f<= v1_1.d
                                    
                                    if (not(v0_2 f!= v1_1.d))
                                        v1_1.d = *(x9_37 + 0x18)
                                        cond:22_1 = *(x11_9 + 0x18) f<= v1_1.d
                                    
                                    if (cond:22_1)
                                        x11_8 = sx.q(x10_17.d)
                                        break
                                    
                                    *(x8_57 + (zx.q(x10_17.d) << 3)) = x11_9
                                    *(x11_9 + 0x28) = x10_17.d
                                    
                                    if (x10_17.d s<= 3)
                                        x11_8 = (x10_17 & 0xfffffffe) << 0x20 s>> 0x21
                                        x10_17 = zx.q(x12_4)
                                        break
                            
                            *(x9_37 + 0x28) = x10_17.d
                            *(x8_57 + (x11_8 << 3)) = x9_37
                        
                        fp_1[5].d = x22_4
                
                *(x28_1[1] + 0x10) = x28_1[2]
                *(x28_1[2] + 8) = x28_1[1]
                x28_1[1] = 0
                x28_1[2] = 0
                *(fp_1[1] + 0x10) = fp_1[2]
                *(fp_1[2] + 8) = fp_1[1]
                fp_1[1] = 0
                fp_1[2] = 0
                x28_1[2] = *(x20_2 + 0x5c)
                fp_1[2] = x28_1
                *(x20_2 + 0x5c) = fp_1
                arg11.d = x19_5[1]
                arg12.d = x24_3[1]
                result = *(x20_2 + 0x4c)
                arg11.d f- arg12.d
                int32_t x25_3 = arg11.d f> arg12.d ? 1 : 0
                int32_t* x28_3
                
                if (arg11.d f> arg12.d)
                    x28_3 = x19_5
                else
                    x28_3 = x24_3
                
                int32_t* fp_2
                
                if (arg11.d f> arg12.d)
                    fp_2 = x24_3
                else
                    fp_2 = x19_5
                
                if (result == 0 || *result u<= 0x3b)
                    result, v1_1, v2_1, v4_1 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
                    *result = 0xffe8
                    result[1] = *(x20_2 + 0x4c)
                    result[2] = &result[3]
                    *(x20_2 + 0x4c) = result
                
                int64_t x8_103 = result[2]
                int64_t* x22_5 = (x8_103 + 7) & 0xfffffffffffffff8
                result[2] = x22_5 + 0x34
                void** x9_60 = *(x20_2 + 0x4c)
                *x9_60 = *x9_60 + x8_103 - x22_5 - 0x34
                *x22_5 = 0
                x22_5[1] = fp_2
                x22_5[2] = x28_3
                *(x22_5 + 0x18) = not.o(zx.o(0x800000))
                v1_1.d = *x28_3
                v0_1.d = *fp_2
                v2_1.d = fp_2[1]
                v1_1.d = v1_1.d f- v0_1.d
                v3_1 = x28_3[1] f- v2_1.d
                v4_1.d = v1_1.d f* v1_1.d
                float v6_3
                
                if (v4_1.d f<= v3_1 * v3_1)
                    v5_1 = v1_1.d f/ v3_1
                    v4_1.d = fconvert.s(1f)
                    v6_3 = v3_1
                else
                    v4_1.d = v3_1 f/ v1_1.d
                    v5_1 = fconvert.s(1f)
                    v6_3 = v1_1.d
                
                v0_1.d = v0_1.d f+ v1_1.d f* arg9.d
                v2_1.d = v2_1.d f+ v3_1 f* arg9.d
                v0_1.d = v1_1.d f* v0_1.d
                v1_1.d = v3_1 f* v2_1.d
                v0_1.d = v0_1.d f+ v1_1.d
                v0_1.d = v0_1.d f/ v6_3
                x22_5[5].d = v5_1
                *(x22_5 + 0x2c) = v4_1.d
                x22_5[6].d = v0_1.d
                *x22_5 = x20_2[1]
                int64_t* x28_4 = *(x20_2 + 0x5c)
                x20_2[1] = x22_5
                
                if (x28_4 == 0)
                    result = *(x20_2 + 0x4c)
                    
                    if (result == 0 || *result u<= 0x33)
                        result, v0_1, v1_1, v2_1, v4_1 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
                        *result = 0xffe8
                        result[1] = *(x20_2 + 0x4c)
                        result[2] = &result[3]
                        *(x20_2 + 0x4c) = result
                    
                    int64_t x8_112 = result[2]
                    x28_4 = (x8_112 + 7) & 0xfffffffffffffff8
                    result[2] = x28_4 + 0x2c
                    void** x9_64 = *(x20_2 + 0x4c)
                    *x9_64 = *x9_64 + x8_112 - x28_4 - 0x2c
                else
                    *(x20_2 + 0x5c) = x28_4[2]
                
                x28_4[1] = x27_2
                x28_4[2] = 0
                *(x28_4 + 0x24) = x25_3
                x28_4[5].d = 0
                *x28_4 = x22_5
                x28_4[2] = x27_2[2]
                *(x27_2[2] + 8) = x28_4
                uint64_t x8_118 = zx.q(arg11.d f> arg12.d ? 1 : 0)
                x27_2[2] = x28_4
                x22_5[3 + (zx.q(x25_3) ^ 1)] = x26_2
                v0_1.d = x22_5[3 + x8_118 * 2]
                v1_1.d = float.s(0xff7fffff)
                
                if (v0_1.d f== v1_1.d)
                    v0_1.d = *(&x22_5[x8_118] + 0x1c)
                    v1_1.d = float.s(0xff7fffff)
                    
                    if (v0_1.d f!= v1_1.d)
                        v0_1, result, v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x22_5)
                else
                    v0_1, result, v1_1, v2_1, v4_1, arg9, arg10 = sub_c13c40(x20_2, x22_5)
                
                void* x9_67 = *x27_2
                void* x8_120 = *x28_4
                
                if (x9_67 != 0 && x8_120 != 0)
                    int32_t* x10_27 = *(x9_67 + 0x10)
                    float* x11_13 = *(x8_120 + 0x10)
                    
                    if (x10_27 != x11_13)
                        arg11.d = *(x9_67 + 0x28)
                        v0_1.d = *(x9_67 + 0x2c)
                        arg12.d = *(x8_120 + 0x28)
                        v1_1.d = *(x8_120 + 0x2c)
                        v2_1.d = arg11.d f* v1_1.d
                        v12.d = v2_1.d f- v0_1.d f* arg12.d
                        v2_1.d = float.s(0xaedbe6ff)
                        
                        if (v12.d f<= v2_1.d)
                        label_c134d8:
                            v2_1.d = x10_27[1]
                            v3_1 = x11_13[1]
                            v2_1.d f- v3_1
                            bool cond:30_1 = v2_1.d f< v3_1
                            
                            if (not(v2_1.d f!= v3_1))
                                v2_1.d = *x10_27
                                v3_1 = *x11_13
                                cond:30_1 = v2_1.d f< v3_1
                            
                            int32_t x10_28 = cond:30_1 ? 1 : 0
                            v13.d = *(x9_67 + 0x30)
                            v14.d = *(x8_120 + 0x30)
                            void* x9_68
                            
                            x9_68 = x10_28 != 0 ? x9_67 : x8_120
                            
                            v1_1.d = v1_1.d f* v13.d
                            v0_1.d = v0_1.d f* v14.d
                            v0_1.d = v1_1.d f- v0_1.d
                            v1_1.d = **(x9_68 + 0x10)
                            int64_t* x9_70
                            
                            x9_70 = x10_28 != 0 ? x27_2 : x28_4
                            
                            int32_t x9_71 = *(x9_70 + 0x24)
                            v15.d = v0_1.d f/ v12.d
                            
                            if (v15.d f>= v1_1.d)
                                if (x9_71 != 0)
                                label_c13540:
                                    result = x20_2[5]
                                    int32_t x8_121 = *(result + 4)
                                    
                                    if (x8_121 != 1)
                                        int32_t x22_6 = x27_2[5].d
                                        
                                        if (x22_6 != 0)
                                            int64_t x9_72 = result[1]
                                            *(result + 4) = x8_121 - 1
                                            int64_t x11_14 = sx.q(x22_6)
                                            void* x8_123 = *(x9_72 + (sx.q(x8_121 - 1) << 3))
                                            *(x9_72 + (x11_14 << 3)) = x8_123
                                            v0_1.d = x27_2[4].d
                                            v1_1.d = *(x8_123 + 0x20)
                                            v0_1.d f- v1_1.d
                                            bool cond:44_1 = v0_1.d f<= v1_1.d
                                            
                                            if (not(v0_1.d f!= v1_1.d))
                                                v0_1.d = x27_2[3].d
                                                v1_1.d = *(x8_123 + 0x18)
                                                cond:44_1 = v0_1.d f<= v1_1.d
                                            
                                            if (cond:44_1)
                                                v0_1, v1_1 = sub_c1fd50(result, x22_6)
                                            else
                                                int64_t x8_124 = result[1]
                                                uint64_t x10_29 = zx.q(x22_6)
                                                void* x9_73 = *(x8_124 + (x11_14 << 3))
                                                
                                                if (x22_6 s>= 2)
                                                    int32_t x12_6 = x22_6
                                                    
                                                    while (true)
                                                        x10_29 = zx.q(x12_6)
                                                        x12_6 s>>= 1
                                                        void* x11_15 =
                                                            *(x8_124 + (sx.q(x12_6) << 3))
                                                        v1_1.d = *(x9_73 + 0x20)
                                                        v0_1.d = *(x11_15 + 0x20)
                                                        v0_1.d f- v1_1.d
                                                        bool cond:54_1 = v0_1.d f<= v1_1.d
                                                        
                                                        if (not(v0_1.d f!= v1_1.d))
                                                            v0_1.d = *(x11_15 + 0x18)
                                                            v1_1.d = *(x9_73 + 0x18)
                                                            cond:54_1 = v0_1.d f<= v1_1.d
                                                        
                                                        if (cond:54_1)
                                                            x11_14 = sx.q(x10_29.d)
                                                            break
                                                        
                                                        *(x8_124 + (zx.q(x10_29.d) << 3)) = x11_15
                                                        *(x11_15 + 0x28) = x10_29.d
                                                        
                                                        if (x10_29.d s<= 3)
                                                            x11_14 =
                                                                (x10_29 & 0xfffffffe) << 0x20 s>> 0x21
                                                            x10_29 = zx.q(x12_6)
                                                            break
                                                
                                                *(x9_73 + 0x28) = x10_29.d
                                                *(x8_124 + (x11_14 << 3)) = x9_73
                                            
                                            x27_2[5].d = x22_6
                                    
                                    v0_1.d = arg11.d f* v14.d
                                    v1_1.d = arg12.d f* v13.d
                                    v0_1.d = v0_1.d f- v1_1.d
                                    v0_1.d = v0_1.d f/ v12.d
                                    x27_2[3].d = v15.d
                                    *(x27_2 + 0x1c) = v0_1.d
                                    v1_1.d = *fp_2
                                    v2_1.d = fp_2[1]
                                    v1_1.d = v1_1.d f- v15.d
                                    v2_1.d = v2_1.d f- v0_1.d
                                    v1_1.d = v1_1.d f* v1_1.d
                                    v2_1.d = v2_1.d f* v2_1.d
                                    v1_1.d = v1_1.d f+ v2_1.d
                                    v1_1.d = sqrt(v1_1.d)
                                    v0_1.d = v0_1.d f+ v1_1.d
                                    x27_2[4].d = v0_1.d
                                    int32_t* x9_81 = x20_2[5]
                                    int32_t x8_134 = x9_81[1]
                                    
                                    if (x8_134 s>= *x9_81)
                                        break
                                    
                                    int64_t** x10_40 = *(x9_81 + 8)
                                    int64_t x12_11 = sx.q(x8_134)
                                    x9_81[1] = x8_134 + 1
                                    x10_40[x12_11] = x27_2
                                    int64_t* x9_82 = *(x9_81 + 8)
                                    void* x10_41 = x9_82[x12_11]
                                    uint64_t x11_25
                                    
                                    if (x8_134 s>= 2)
                                        do
                                            x11_25 = zx.q(x8_134)
                                            x8_134 s>>= 1
                                            void* x12_12 = x9_82[sx.q(x8_134)]
                                            v1_1.d = *(x10_41 + 0x20)
                                            v0_1.d = *(x12_12 + 0x20)
                                            v0_1.d f- v1_1.d
                                            bool cond:48_1 = v0_1.d f<= v1_1.d
                                            
                                            if (not(v0_1.d f!= v1_1.d))
                                                v0_1.d = *(x12_12 + 0x18)
                                                v1_1.d = *(x10_41 + 0x18)
                                                cond:48_1 = v0_1.d f<= v1_1.d
                                            
                                            if (cond:48_1)
                                                x12_11 = sx.q(x11_25.d)
                                                goto label_c13958
                                            
                                            x9_82[zx.q(x11_25.d)] = x12_12
                                            *(x12_12 + 0x28) = x11_25.d
                                        while (x11_25.d s> 3)
                                        
                                        x12_11 = (x11_25 & 0xfffffffe) << 0x20 s>> 0x21
                                    
                                    x11_25 = zx.q(x8_134)
                                label_c13958:
                                    *(x10_41 + 0x28) = x11_25.d
                                    x9_82[x12_11] = x10_41
                                    x8_120 = *x28_4
                            else if (x9_71 != 1)
                                goto label_c13540
                        else
                            v2_1.d = float.s(0x2edbe6ff)
                            
                            if (not(v12.d f< v2_1.d))
                                goto label_c134d8
                
                if (x8_120 == 0)
                    continue
                else
                    void* x9_84 = *x10_14
                    
                    if (x9_84 == 0)
                        continue
                    else
                        float* x10_42 = *(x8_120 + 0x10)
                        float* x11_26 = *(x9_84 + 0x10)
                        
                        if (x10_42 == x11_26)
                            continue
                        else
                            v0_1.d = *(x8_120 + 0x28)
                            v3_1 = *(x8_120 + 0x2c)
                            v1_1.d = *(x9_84 + 0x28)
                            v4_1.d = *(x9_84 + 0x2c)
                            v2_1.d = v0_1.d f* v4_1.d
                            v2_1.d = v2_1.d f- v3_1 f* v1_1.d
                            
                            if (not(v2_1.d f<= float.s(0xaedbe6ff))
                                    && v2_1.d f< float.s(0x2edbe6ff))
                                continue
                            
                            v5_1 = x10_42[1]
                            v6_3 = x11_26[1]
                            v5_1 - v6_3
                            bool cond:33_1 = v5_1 < v6_3
                            
                            if (not(v5_1 != v6_3))
                                cond:33_1 = *x10_42 < *x11_26
                            
                            int32_t x10_43 = cond:33_1 ? 1 : 0
                            v5_1 = *(x8_120 + 0x30)
                            v6_3 = *(x9_84 + 0x30)
                            void* x8_135
                            
                            x8_135 = x10_43 != 0 ? x8_120 : x9_84
                            
                            v4_1.d = v4_1.d f* v5_1
                            v3_1 = v4_1.d f- v3_1 * v6_3
                            v4_1.d = **(x8_135 + 0x10)
                            v3_1 = v3_1 f/ v2_1.d
                            int64_t* x8_138
                            
                            x8_138 = x10_43 != 0 ? x28_4 : x10_14
                            
                            int32_t x8_139 = *(x8_138 + 0x24)
                            
                            if (v3_1 f>= v4_1.d)
                                if (x8_139 == 0)
                                    continue
                            else if (x8_139 == 1)
                                continue
                            
                            v0_1.d = v0_1.d f* v6_3
                            v1_1.d = v1_1.d f* v5_1
                            v0_1.d = v0_1.d f- v1_1.d
                            v0_1.d = v0_1.d f/ v2_1.d
                            x28_4[3].d = v3_1
                            *(x28_4 + 0x1c) = v0_1.d
                            v1_1.d = *fp_2
                            v2_1.d = fp_2[1]
                            v1_1.d = v1_1.d f- v3_1
                            v2_1.d = v2_1.d f- v0_1.d
                            v1_1.d = v1_1.d f* v1_1.d
                            v2_1.d = v2_1.d f* v2_1.d
                            v1_1.d = v1_1.d f+ v2_1.d
                            v1_1.d = sqrt(v1_1.d)
                            v0_1.d = v0_1.d f+ v1_1.d
                            x28_4[4].d = v0_1.d
                            int32_t* x9_85 = x20_2[5]
                            int32_t x8_140 = x9_85[1]
                            
                            if (x8_140 s>= *x9_85)
                                break
                            
                            int64_t** x10_45 = *(x9_85 + 8)
                            int64_t x12_13 = sx.q(x8_140)
                            x9_85[1] = x8_140 + 1
                            x10_45[x12_13] = x28_4
                            int64_t* x9_86 = *(x9_85 + 8)
                            void* x10_46 = x9_86[x12_13]
                            uint64_t x11_29
                            
                            if (x8_140 s>= 2)
                                do
                                    x11_29 = zx.q(x8_140)
                                    x8_140 s>>= 1
                                    void* x12_14 = x9_86[sx.q(x8_140)]
                                    v1_1.d = *(x10_46 + 0x20)
                                    v0_1.d = *(x12_14 + 0x20)
                                    v0_1.d f- v1_1.d
                                    bool cond:47_1 = v0_1.d f<= v1_1.d
                                    
                                    if (not(v0_1.d f!= v1_1.d))
                                        v0_1.d = *(x12_14 + 0x18)
                                        v1_1.d = *(x10_46 + 0x18)
                                        cond:47_1 = v0_1.d f<= v1_1.d
                                    
                                    if (cond:47_1)
                                        x12_13 = sx.q(x11_29.d)
                                        goto label_c13ae8
                                    
                                    x9_86[zx.q(x11_29.d)] = x12_14
                                    *(x12_14 + 0x28) = x11_29.d
                                while (x11_29.d s> 3)
                                
                                x12_13 = (x11_29 & 0xfffffffe) << 0x20 s>> 0x21
                            
                            x11_29 = zx.q(x8_140)
                        label_c13ae8:
                            *(x10_46 + 0x28) = x11_29.d
                            x9_86[x12_13] = x10_46
                            continue
        else if (x21_4 == 0)
            for (void** i_3 = *(x20_2[2] + 0x10); i_3 != x20_2[3]; i_3 = i_3[2])
                result, arg9, arg10 = sub_c13c40(x20_2, *i_3)
            
            void* x19_7 = *arg8
            int64_t x8_144 = *(x19_7 + 0x7c)
            
            if (x8_144 != 0 && *(x19_7 + 0x40) s>= 1)
                result = x8_144(x19_7 + 0x6c, x19_7, *(x19_7 + 0x30))
                
                if (*(x19_7 + 0x40) s>= 2)
                    int64_t i_4 = 1
                    int64_t x22_7 = 0x14
                    
                    do
                        result = (*(x19_7 + 0x7c))(x19_7 + 0x6c, x19_7, *(x19_7 + 0x30) + x22_7)
                        i_4 += 1
                        x22_7 += 0x14
                    while (i_4 s< sx.q(*(x19_7 + 0x40)))
            
            arg10.q = var_70
            arg9.q = var_68
            arg12.q = var_80
            arg11.q = var_78
            return result
        
        int64_t* x22_3 = x20_2[4]
        int64_t* x19_4
        void* x23_2
        
        if (x22_3 == 0)
            v0_1.d = *(x20_2 + 0xbc)
            v1_1.d = *(x20_2 + 0xb4)
            v2_1.d = *x21_4
            v0_1.d = v0_1.d f- v1_1.d
            v0_1.d = v0_1.d f* arg9.d
            int64_t x8_46
            
            if (v2_1.d f< v0_1.d)
                x8_46 = 0x10
            else
                x8_46 = 0x18
            
            x22_3 = *(x20_2 + x8_46)
            x19_4 = x20_2[2]
            x23_2 = x20_2[3]
            
            if (x22_3 == x19_4)
                goto label_c12ca0
            
            goto label_c12c74
        
        x19_4 = x20_2[2]
        x23_2 = x20_2[3]
        int64_t x8_47
        int64_t* x27_3
        
        if (x22_3 != x19_4)
        label_c12c74:
            int32_t x0_12
            
            if (x22_3 != x23_2)
                x0_12, v1_1, v2_1, v4_1 = sub_c1fbd0(x22_3, x21_4)
            
            if (x22_3 != x23_2 && x0_12 != 0)
                goto label_c12ca0
            
            while (true)
                x22_3 = x22_3[1]
                
                if (x22_3 == x19_4)
                    break
                
                int32_t x0_15
                x0_15, v1_1, v2_1, v4_1 = sub_c1fbd0(x22_3, x21_4)
                
                if (x0_15 != 0)
                label_c12ce0:
                    x8_47 = *x22_3
                    x27_3 = x22_3[2]
                    
                    if (x8_47 == 0)
                        goto label_c12e90
                    
                    goto label_c12cf8
            
            x22_3 = x19_4
            x8_47 = *x22_3
            x27_3 = x22_3[2]
            
            if (x8_47 != 0)
                goto label_c12cf8
            
            goto label_c12e90
        
    label_c12ca0:
        int32_t i_5
        
        do
            x22_3 = x22_3[2]
            
            if (x22_3 == x23_2)
                x22_3 = *(x23_2 + 8)
                goto label_c12ce0
            
            i_5, v1_1, v2_1, v4_1 = sub_c1fbd0(x22_3, x21_4)
        while (i_5 != 0)
        x22_3 = x22_3[1]
        x8_47 = *x22_3
        x27_3 = x22_3[2]
        int32_t* x23_4
        
        if (x8_47 != 0)
        label_c12cf8:
            x23_4 = *(x8_47 + ((1 - sx.q(*(x22_3 + 0x24))) << 3) + 8)
            
            if (x23_4 == 0)
                goto label_c12e90
            
            result = *(x20_2 + 0x4c)
            
            if (result == 0 || *result u<= 0x3b)
                goto label_c12eb4
        else
        label_c12e90:
            x23_4 = x20_2[7]
            result = *(x20_2 + 0x4c)
            
            if (result == 0 || *result u<= 0x3b)
            label_c12eb4:
                result, v1_1, v2_1, v4_1 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
                *result = 0xffe8
                result[1] = *(x20_2 + 0x4c)
                result[2] = &result[3]
                *(x20_2 + 0x4c) = result
        
        int64_t x8_61 = result[2]
        int64_t* x19_6 = (x8_61 + 7) & 0xfffffffffffffff8
        result[2] = x19_6 + 0x34
        int64_t* x9_41 = *(x20_2 + 0x4c)
        *x9_41 = *x9_41 + x8_61 - x19_6 - 0x34
        *x19_6 = 0
        x19_6[1] = x23_4
        x19_6[2] = x21_4
        *(x19_6 + 0x18) = not.o(zx.o(0x800000))
        v1_1.d = *x21_4
        v0_1.d = *x23_4
        v2_1.d = x23_4[1]
        v1_1.d = v1_1.d f- v0_1.d
        v3_1 = x21_4[1] f- v2_1.d
        v4_1.d = v1_1.d f* v1_1.d
        float v6_2
        
        if (v4_1.d f<= v3_1 * v3_1)
            v5_1 = v1_1.d f/ v3_1
            v4_1.d = fconvert.s(1f)
            v6_2 = v3_1
        else
            v4_1.d = v3_1 f/ v1_1.d
            v5_1 = fconvert.s(1f)
            v6_2 = v1_1.d
        
        v0_1.d = v0_1.d f+ v1_1.d f* arg9.d
        v2_1.d = v2_1.d f+ v3_1 f* arg9.d
        v0_1.d = v1_1.d f* v0_1.d
        v1_1.d = v3_1 f* v2_1.d
        v0_1.d = v0_1.d f+ v1_1.d
        v0_1.d = v0_1.d f/ v6_2
        x19_6[5].d = v5_1
        *(x19_6 + 0x2c) = v4_1.d
        x19_6[6].d = v0_1.d
        *x19_6 = x20_2[1]
        int64_t* x23_5 = *(x20_2 + 0x5c)
        x20_2[1] = x19_6
        
        if (x23_5 == 0)
            result = *(x20_2 + 0x4c)
            
            if (result == 0 || *result u<= 0x33)
                result, v0_1, v1_1, v2_1, v4_1 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
                *result = 0xffe8
                result[1] = *(x20_2 + 0x4c)
                result[2] = &result[3]
                *(x20_2 + 0x4c) = result
            
            int64_t x8_70 = result[2]
            x23_5 = (x8_70 + 7) & 0xfffffffffffffff8
            result[2] = x23_5 + 0x2c
            void** x9_45 = *(x20_2 + 0x4c)
            *x9_45 = *x9_45 + x8_70 - x23_5 - 0x2c
        else
            *(x20_2 + 0x5c) = x23_5[2]
        
        x23_5[1] = 0
        x23_5[2] = 0
        *x23_5 = x19_6
        *(x23_5 + 0x24) = 0
        x23_5[5].d = 0
        int64_t* x28_2 = *(x20_2 + 0x5c)
        
        if (x28_2 == 0)
            result = *(x20_2 + 0x4c)
            
            if (result == 0 || *result u<= 0x33)
                result, v0_1, v1_1, v2_1, v4_1 = (*(x20_2 + 0xa4))(*(x20_2 + 0x9c), 0x10000)
                *result = 0xffe8
                result[1] = *(x20_2 + 0x4c)
                result[2] = &result[3]
                *(x20_2 + 0x4c) = result
            
            int64_t x8_78 = result[2]
            x28_2 = (x8_78 + 7) & 0xfffffffffffffff8
            result[2] = x28_2 + 0x2c
            void** x9_49 = *(x20_2 + 0x4c)
            *x9_49 = *x9_49 + x8_78 - x28_2 - 0x2c
        else
            *(x20_2 + 0x5c) = x28_2[2]
        
        x28_2[1] = 0
        x28_2[2] = 0
        *x28_2 = x19_6
        *(x28_2 + 0x24) = arg10.q
        x23_5[1] = x22_3
        x23_5[2] = x22_3[2]
        *(x22_3[2] + 8) = x23_5
        x22_3[2] = x23_5
        x28_2[1] = x23_5
        x28_2[2] = x23_5[2]
        *(x23_5[2] + 8) = x28_2
        x23_5[2] = x28_2
        x20_2[4] = x27_3
        void* x8_86 = *x22_3
        
        if (x8_86 != 0)
            void* x9_50 = *x23_5
            
            if (x9_50 != 0)
                int32_t* x10_21 = *(x8_86 + 0x10)
                float* x11_10 = *(x9_50 + 0x10)
                
                if (x10_21 != x11_10)
                    arg11.d = *(x8_86 + 0x28)
                    v0_1.d = *(x8_86 + 0x2c)
                    arg12.d = *(x9_50 + 0x28)
                    v1_1.d = *(x9_50 + 0x2c)
                    v2_1.d = arg11.d f* v1_1.d
                    v12.d = v2_1.d f- v0_1.d f* arg12.d
                    v2_1.d = float.s(0xaedbe6ff)
                    
                    if (v12.d f<= v2_1.d)
                    label_c1311c:
                        v2_1.d = x10_21[1]
                        v3_1 = x11_10[1]
                        v2_1.d f- v3_1
                        bool cond:24_1 = v2_1.d f< v3_1
                        
                        if (not(v2_1.d f!= v3_1))
                            v2_1.d = *x10_21
                            v3_1 = *x11_10
                            cond:24_1 = v2_1.d f< v3_1
                        
                        int32_t x10_22 = cond:24_1 ? 1 : 0
                        v13.d = *(x8_86 + 0x30)
                        v14.d = *(x9_50 + 0x30)
                        void* x8_87
                        
                        x8_87 = x10_22 != 0 ? x8_86 : x9_50
                        
                        v1_1.d = v1_1.d f* v13.d
                        v0_1.d = v0_1.d f* v14.d
                        v0_1.d = v1_1.d f- v0_1.d
                        v1_1.d = **(x8_87 + 0x10)
                        int64_t* x8_89
                        
                        x8_89 = x10_22 != 0 ? x22_3 : x23_5
                        
                        int32_t x8_90 = *(x8_89 + 0x24)
                        v15.d = v0_1.d f/ v12.d
                        
                        if (v15.d f>= v1_1.d)
                            if (x8_90 != 0)
                            label_c13190:
                                result = x20_2[5]
                                int32_t x8_91 = *(result + 4)
                                
                                if (x8_91 != 1)
                                    int32_t x23_6 = x22_3[5].d
                                    
                                    if (x23_6 != 0)
                                        int64_t x9_51 = result[1]
                                        *(result + 4) = x8_91 - 1
                                        int64_t x11_11 = sx.q(x23_6)
                                        void* x8_93 = *(x9_51 + (sx.q(x8_91 - 1) << 3))
                                        *(x9_51 + (x11_11 << 3)) = x8_93
                                        v0_1.d = x22_3[4].d
                                        v1_1.d = *(x8_93 + 0x20)
                                        v0_1.d f- v1_1.d
                                        bool cond:38_1 = v0_1.d f<= v1_1.d
                                        
                                        if (not(v0_1.d f!= v1_1.d))
                                            v0_1.d = x22_3[3].d
                                            v1_1.d = *(x8_93 + 0x18)
                                            cond:38_1 = v0_1.d f<= v1_1.d
                                        
                                        if (cond:38_1)
                                            v0_1, v1_1 = sub_c1fd50(result, x23_6)
                                        else
                                            int64_t x8_94 = result[1]
                                            uint64_t x10_23 = zx.q(x23_6)
                                            void* x9_52 = *(x8_94 + (x11_11 << 3))
                                            
                                            if (x23_6 s>= 2)
                                                int32_t x12_5 = x23_6
                                                
                                                while (true)
                                                    x10_23 = zx.q(x12_5)
                                                    x12_5 s>>= 1
                                                    void* x11_12 = *(x8_94 + (sx.q(x12_5) << 3))
                                                    v1_1.d = *(x9_52 + 0x20)
                                                    v0_1.d = *(x11_12 + 0x20)
                                                    v0_1.d f- v1_1.d
                                                    bool cond:50_1 = v0_1.d f<= v1_1.d
                                                    
                                                    if (not(v0_1.d f!= v1_1.d))
                                                        v0_1.d = *(x11_12 + 0x18)
                                                        v1_1.d = *(x9_52 + 0x18)
                                                        cond:50_1 = v0_1.d f<= v1_1.d
                                                    
                                                    if (cond:50_1)
                                                        x11_11 = sx.q(x10_23.d)
                                                        break
                                                    
                                                    *(x8_94 + (zx.q(x10_23.d) << 3)) = x11_12
                                                    *(x11_12 + 0x28) = x10_23.d
                                                    
                                                    if (x10_23.d s<= 3)
                                                        x11_11 =
                                                            (x10_23 & 0xfffffffe) << 0x20 s>> 0x21
                                                        x10_23 = zx.q(x12_5)
                                                        break
                                            
                                            *(x9_52 + 0x28) = x10_23.d
                                            *(x8_94 + (x11_11 << 3)) = x9_52
                                        
                                        x22_3[5].d = x23_6
                                
                                v0_1.d = arg11.d f* v14.d
                                v1_1.d = arg12.d f* v13.d
                                v0_1.d = v0_1.d f- v1_1.d
                                v0_1.d = v0_1.d f/ v12.d
                                x22_3[3].d = v15.d
                                *(x22_3 + 0x1c) = v0_1.d
                                v1_1.d = *x21_4
                                v2_1.d = x21_4[1]
                                v1_1.d = v1_1.d f- v15.d
                                v2_1.d = v2_1.d f- v0_1.d
                                v1_1.d = v1_1.d f* v1_1.d
                                v2_1.d = v2_1.d f* v2_1.d
                                v1_1.d = v1_1.d f+ v2_1.d
                                v1_1.d = sqrt(v1_1.d)
                                v0_1.d = v0_1.d f+ v1_1.d
                                x22_3[4].d = v0_1.d
                                int32_t* x9_74 = x20_2[5]
                                int32_t x8_125 = x9_74[1]
                                
                                if (x8_125 s>= *x9_74)
                                    break
                                
                                void** x10_31 = *(x9_74 + 8)
                                int64_t x12_7 = sx.q(x8_125)
                                x9_74[1] = x8_125 + 1
                                x10_31[x12_7] = x22_3
                                int64_t* x9_75 = *(x9_74 + 8)
                                void* x10_32 = x9_75[x12_7]
                                uint64_t x11_18
                                
                                if (x8_125 s>= 2)
                                    do
                                        x11_18 = zx.q(x8_125)
                                        x8_125 s>>= 1
                                        void* x12_8 = x9_75[sx.q(x8_125)]
                                        v1_1.d = *(x10_32 + 0x20)
                                        v0_1.d = *(x12_8 + 0x20)
                                        v0_1.d f- v1_1.d
                                        bool cond:42_1 = v0_1.d f<= v1_1.d
                                        
                                        if (not(v0_1.d f!= v1_1.d))
                                            v0_1.d = *(x12_8 + 0x18)
                                            v1_1.d = *(x10_32 + 0x18)
                                            cond:42_1 = v0_1.d f<= v1_1.d
                                        
                                        if (cond:42_1)
                                            x12_7 = sx.q(x11_18.d)
                                            goto label_c136d0
                                        
                                        x9_75[zx.q(x11_18.d)] = x12_8
                                        *(x12_8 + 0x28) = x11_18.d
                                    while (x11_18.d s> 3)
                                    
                                    x12_7 = (x11_18 & 0xfffffffe) << 0x20 s>> 0x21
                                
                                x11_18 = zx.q(x8_125)
                            label_c136d0:
                                *(x10_32 + 0x28) = x11_18.d
                                x9_75[x12_7] = x10_32
                        else if (x8_90 != 1)
                            goto label_c13190
                    else
                        v2_1.d = float.s(0x2edbe6ff)
                        
                        if (not(v12.d f< v2_1.d))
                            goto label_c1311c
        
        void* x8_126 = *x28_2
        
        if (x8_126 != 0)
            void* x9_76 = *x27_3
            
            if (x9_76 != 0)
                float* x10_33 = *(x8_126 + 0x10)
                int32_t* x11_19 = *(x9_76 + 0x10)
                
                if (x10_33 != x11_19)
                    v0_1.d = *(x8_126 + 0x28)
                    v3_1 = *(x8_126 + 0x2c)
                    v1_1.d = *(x9_76 + 0x28)
                    v4_1.d = *(x9_76 + 0x2c)
                    v2_1.d = v0_1.d f* v4_1.d
                    v2_1.d = v2_1.d f- v3_1 f* v1_1.d
                    
                    if (v2_1.d f<= float.s(0xaedbe6ff) || not(v2_1.d f< float.s(0x2edbe6ff)))
                        v5_1 = x10_33[1]
                        v6_2 = x11_19[1]
                        v5_1 - v6_2
                        bool cond:27_1 = v5_1 < v6_2
                        
                        if (not(v5_1 != v6_2))
                            cond:27_1 = *x10_33 < *x11_19
                        
                        int32_t x10_34 = cond:27_1 ? 1 : 0
                        v5_1 = *(x8_126 + 0x30)
                        v6_2 = *(x9_76 + 0x30)
                        void* x8_127
                        
                        x8_127 = x10_34 != 0 ? x8_126 : x9_76
                        
                        v4_1.d = v4_1.d f* v5_1
                        v3_1 = v4_1.d f- v3_1 * v6_2
                        v4_1.d = **(x8_127 + 0x10)
                        int64_t* x8_129
                        
                        x8_129 = x10_34 != 0 ? x28_2 : x27_3
                        
                        int32_t x8_130 = *(x8_129 + 0x24)
                        v3_1 = v3_1 f/ v2_1.d
                        
                        if (v3_1 f>= v4_1.d)
                            if (x8_130 != 0)
                            label_c1379c:
                                v0_1.d = v0_1.d f* v6_2
                                v1_1.d = v1_1.d f* v5_1
                                v0_1.d = v0_1.d f- v1_1.d
                                v0_1.d = v0_1.d f/ v2_1.d
                                x28_2[3].d = v3_1
                                *(x28_2 + 0x1c) = v0_1.d
                                v1_1.d = *x21_4
                                v2_1.d = x21_4[1]
                                v1_1.d = v1_1.d f- v3_1
                                v2_1.d = v2_1.d f- v0_1.d
                                v1_1.d = v1_1.d f* v1_1.d
                                v2_1.d = v2_1.d f* v2_1.d
                                v1_1.d = v1_1.d f+ v2_1.d
                                v1_1.d = sqrt(v1_1.d)
                                v0_1.d = v0_1.d f+ v1_1.d
                                x28_2[4].d = v0_1.d
                                int32_t* x9_77 = x20_2[5]
                                int32_t x8_131 = x9_77[1]
                                
                                if (x8_131 s>= *x9_77)
                                    break
                                
                                void** x10_36 = *(x9_77 + 8)
                                int64_t x12_9 = sx.q(x8_131)
                                x9_77[1] = x8_131 + 1
                                x10_36[x12_9] = x28_2
                                int64_t* x9_78 = *(x9_77 + 8)
                                void* x10_37 = x9_78[x12_9]
                                uint64_t x11_22
                                
                                if (x8_131 s>= 2)
                                    do
                                        x11_22 = zx.q(x8_131)
                                        x8_131 s>>= 1
                                        void* x12_10 = x9_78[sx.q(x8_131)]
                                        v1_1.d = *(x10_37 + 0x20)
                                        v0_1.d = *(x12_10 + 0x20)
                                        v0_1.d f- v1_1.d
                                        bool cond:41_1 = v0_1.d f<= v1_1.d
                                        
                                        if (not(v0_1.d f!= v1_1.d))
                                            v0_1.d = *(x12_10 + 0x18)
                                            v1_1.d = *(x10_37 + 0x18)
                                            cond:41_1 = v0_1.d f<= v1_1.d
                                        
                                        if (cond:41_1)
                                            x12_9 = sx.q(x11_22.d)
                                            goto label_c13858
                                        
                                        x9_78[zx.q(x11_22.d)] = x12_10
                                        *(x12_10 + 0x28) = x11_22.d
                                    while (x11_22.d s> 3)
                                    
                                    x12_9 = (x11_22 & 0xfffffffe) << 0x20 s>> 0x21
                                
                                x11_22 = zx.q(x8_131)
                            label_c13858:
                                *(x10_37 + 0x28) = x11_22.d
                                x9_78[x12_9] = x10_37
                        else if (x8_130 != 1)
                            goto label_c1379c
        
        x21_4 = nullptr
        int64_t x8_133 = sx.q(*(x20_2 + 0x44))
        
        if (x8_133.d s< x20_2[8].d)
            int64_t x9_80 = x20_2[6]
            *(x20_2 + 0x44) = x8_133.d + 1
            x21_4 = x9_80 + x8_133 * 0x14
    
    __assert2("..\..\..\code/jc_voronoi.h", 0x3ae, "int jcv_pq_push(jcv_priorityqueue *, void *)", 
        "pq->numitems < pq->maxnumitems", v0_1, v1_1, v2_1, v3_1)

return malloc(__assert2("..\..\..\code/jc_voronoi.h", 0x5e9, 
    "jcv_context_internal *jcv_alloc_internal(int, void *, FJCVAllocFn, FJCVFreeFn)", 
    "(mem+eventssize) <= (originalmem+memsize)")) __tailcall
