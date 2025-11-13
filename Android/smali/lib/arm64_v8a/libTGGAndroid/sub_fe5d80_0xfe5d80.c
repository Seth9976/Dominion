// 函数: sub_fe5d80
// 地址: 0xfe5d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
double v14
double var_98 = v14
double v13
double var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t var_78 = arg8.q
int128_t v8 = arg6
arg6.d = fconvert.s(1f)
int64_t result

if (v8.d f> arg6.d)
    int64_t x8_21 = (&data_1180548)[zx.q(arg3) * 2]
    arg8.d = arg6.d f/ v8.d
    uint128_t v0_12
    uint128_t v1_3
    float128 v2_1
    result, v0_12, v1_3, v2_1 = x8_21(arg8)
    
    if (arg5 s>= 1)
        int64_t x24_2 = 0
        v12.d = v0_12.d f* v8.d
        v13.d = fconvert.s(0.5f)
        
        while (true)
            v0_12.d = float.s(x24_2.d)
            v14.d = v0_12.d f+ v13.d
            v0_12.d = v14.d f- v12.d
            v1_3.d = v12.d f+ v14.d
            v0_12.d = v0_12.d f+ arg7
            v1_3.d = v1_3.d f+ arg7
            v0_12.d = v0_12.d f/ v8.d
            v1_3.d = v1_3.d f/ v8.d
            v0_12.q = fconvert.d(v0_12.d)
            v2_1.q = fconvert.d(0.5)
            v1_3.q = fconvert.d(v1_3.d)
            v0_12.q = v0_12.q f+ v2_1.q
            v2_1.q = fconvert.d(-0.5)
            v1_3.q = v1_3.q f+ v2_1.q
            uint32_t x21_3 = vcvtmd_s32_f64(v0_12.q)
            uint32_t temp0_8 = vcvtmd_s32_f64(v1_3.q)
            int64_t v0_14 = x8_21(arg8)
            uint32_t x23_3 = temp0_8 - x21_3
            float v0_16 = x8_21(arg8)
            
            if (x23_3 s> vcvtps_s32_f32(v0_16 + v0_16))
                goto label_fe65ec
            
            void* x27_3 = arg1 + (x24_2 << 3)
            *x27_3 = x21_3
            *(x27_3 + 4) = temp0_8
            
            if (temp0_8 s< x21_3)
                goto label_fe660c
            
            v14.d = (v14.d f+ arg7) f/ v8.d
            int64_t x25_2 = *(&data_1180540 + (zx.q(arg3) << 4))
            uint32_t temp0_10 = vcvtps_s32_f32(v0_14.d f+ v0_14.d)
            
            if ((x23_3 & 0x80000000) != 0)
                v11.d = 0f
            else
                int32_t x22_2 = 0
                v11.d = 0f
                
                while (true)
                    v0_16 = x25_2(v14.d f- (float.s(x22_2 + x21_3) f+ v13.d), arg8)
                    arg2[sx.q(x24_2.d * temp0_10) + sx.q(x22_2)] = v0_16
                    
                    if (x22_2 == 0 && not(v0_16 != 0f))
                        x21_3 += 1
                        *x27_3 = x21_3
                        x23_3 = temp0_8 - x21_3
                        x22_2 = 0
                        
                        if (0xffffffff s>= x23_3)
                            break
                        
                        continue
                    
                    v11.d = v11.d f+ v0_16
                    x23_3 = temp0_8 - x21_3
                    bool cond:4_1 = x22_2 s>= x23_3
                    x22_2 += 1
                    
                    if (cond:4_1)
                        break
            
            float128 v3_1
            result, v0_12, v1_3, v2_1, v3_1 = x25_2(float.s(temp0_8 + 1) f+ v13.d f- v14.d, arg8)
            
            if (v0_12.d f!= 0f)
                goto label_fe662c
            
            v0_12.q = fconvert.d(v11.d)
            
            if (v0_12.q f<= 0.90000000000000002)
                goto label_fe664c
            
            v0_12.d = float.s(0x3f8ccccd)
            
            if (v11.d f>= v0_12.d)
                break
            
            if ((x23_3 & 0x80000000) == 0)
                v0_12.d = fconvert.s(1f)
                v0_12.d = v0_12.d f/ v11.d
                uint64_t x8_31 = zx.q(x23_3 + 1)
                int64_t i_12
                
                if (x23_3 u>= 7)
                    i_12 = x8_31 & 0xfffffff8
                    v1_3 = vdupq_laneq_s32(v0_12, 0)
                    void* x10_6 = &arg2[4 + sx.q(temp0_10 * x24_2.d)]
                    int64_t i_9 = i_12
                    int64_t i
                    
                    do
                        v3_1 = *x10_6
                        i = i_9
                        i_9 -= 8
                        v2_1 = vmulq_f32(v1_3, *(x10_6 - 0x10), 0)
                        v3_1 = vmulq_f32(v1_3, v3_1, 0)
                        *(x10_6 - 0x10) = v2_1
                        *x10_6 = v3_1
                        x10_6 += 0x20
                    while (i != 8)
                    
                    if (i_12 != x8_31)
                        goto label_fe61ec
                else
                    i_12 = 0
                label_fe61ec:
                    int64_t i_6 = x8_31 - i_12
                    void* x9_9 = &arg2[i_12 + sx.q(temp0_10 * x24_2.d)]
                    int64_t i_1
                    
                    do
                        v1_3.d = *x9_9
                        i_1 = i_6
                        i_6 -= 1
                        v1_3.d = v0_12.d f* v1_3.d
                        *x9_9 = v1_3.d
                        x9_9 += 4
                    while (i_1 != 1)
                
                if ((x23_3 & 0x80000000) == 0)
                    uint64_t x8_32 = zx.q(x23_3)
                    int32_t x10_8 = x23_3 - 1
                    bool cond:16_1
                    
                    do
                        v0_12.d = arg2[sx.q(temp0_10 * x24_2.d) + x8_32]
                        
                        if (v0_12.d f!= 0f)
                            break
                        
                        cond:16_1 = x8_32 s> 0
                        x8_32 -= 1
                        int32_t x11_3 = x10_8 + *x27_3
                        x10_8 -= 1
                        *(x27_3 + 4) = x11_3
                    while (cond:16_1)
            
            x24_2 += 1
            
            if (x24_2 == zx.q(arg5))
                goto label_fe653c
        
        goto label_fe666c
else
    void* x0
    int32_t x1
    float128 v0_30
    uint128_t v1_6
    uint128_t v2_2
    uint128_t v3_2
    
    if (arg3 == 0)
        x0, x1, v0_30, v1_6, v2_2, v3_2 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x372, "int stbir__get_filter_pixel_width(stbir_filter, float)", "filter != 0")
        return sub_fe66d0(x0, x1, v0_30, v1_6, v2_2, v3_2) __tailcall
    
    if (arg3 u>= 6)
        goto label_fe66ac
    
    int64_t x24_1 = (&data_1180548)[zx.q(arg3) * 2]
    float v0_1 = x24_1(v8)
    uint32_t temp0_1 = vcvtps_s32_f32((v0_1 + v0_1) f/ v8.d)
    uint32_t x8_3
    
    if (temp0_1 s< 0)
        x8_3 = temp0_1 + 1
    else
        x8_3 = temp0_1
    
    int32_t x21_1 = (x8_3 & 0xfffffffe) + arg4
    int32_t v0_3 = x24_1(v8)
    
    if (x21_1 s>= 1)
        int64_t x25_1 = 0
        v11.d = v0_3 f/ v8.d
        v12.d = fconvert.s(0.5f)
        
        while (true)
            double v0_5
            double v1
            v0_5, v1 = x24_1(v8)
            v0_5.d = v0_5.d f+ v0_5.d
            v0_5.d = v0_5.d f/ v8.d
            uint32_t temp0_2 = vcvtps_s32_f32(v0_5.d)
            uint32_t x8_9
            
            if (temp0_2 s< 0)
                x8_9 = temp0_2 + 1
            else
                x8_9 = temp0_2
            
            v0_5.d = float.s(x25_1.d - (x8_9 s>> 1))
            v15.d = v0_5.d f+ v12.d
            v0_5.d = v15.d f- v11.d
            v1.d = v11.d f+ v15.d
            v0_5.d = v0_5.d f* v8.d
            v1.d = v1.d f* v8.d
            v0_5.d = v0_5.d f- arg7
            v1.d = v1.d f- arg7
            uint32_t x23_2 = vcvtmd_s32_f64(fconvert.d(v0_5.d) + fconvert.d(0.5))
            uint32_t temp0_4 = vcvtmd_s32_f64(fconvert.d(v1.d) + fconvert.d(-0.5))
            int128_t v0_7 = x24_1(v8)
            uint32_t x22_1 = temp0_4 - x23_2
            float v0_9 = x24_1(v8)
            
            if (x22_1 s> vcvtps_s32_f32(v0_9 + v0_9))
                goto label_fe658c
            
            int32_t* x28_1 = arg1 + (x25_1 << 3)
            *x28_1 = x23_2
            uint32_t x8_13 = temp0_4 - x23_2
            x28_1[1] = temp0_4
            
            if (temp0_4 s< x23_2)
                goto label_fe65ac
            
            v15.d = v15.d f* v8.d - arg7
            int64_t x26_1 = *(&data_1180540 + (zx.q(arg3) << 4))
            uint32_t temp0_6 = vcvtps_s32_f32(v0_7.d f+ v0_7.d)
            
            if ((x22_1 & 0x80000000) == 0)
                uint64_t i_10 = zx.q(temp0_4 + 1 - x23_2)
                float* x21_2 = &arg2[sx.q(temp0_6 * x25_1.d)]
                uint64_t i_2
                
                do
                    i_2 = i_10
                    i_10 -= 1
                    *x21_2 = x26_1(float.s(x23_2) f+ v12.d f- v15.d, v8) f* v8.d
                    x21_2 = &x21_2[1]
                    x23_2 += 1
                while (i_2 != 1)
            
            if (x26_1(float.s(temp0_4 + 1) f+ v12.d f- v15.d, v8) f!= 0f)
                break
            
            if ((x22_1 & 0x80000000) == 0)
                int32_t x8_19 = x8_13 + 1
                int32_t* x9_6 = &arg2[sx.q(temp0_6 * x25_1.d) + zx.q(x22_1)]
                
                while (not(*x9_6 f!= 0f))
                    x9_6 -= 4
                    int32_t x10_2 = x8_19 + *x28_1
                    x8_19 -= 1
                    x28_1[1] = x10_2 - 2
                    
                    if (x8_19 s<= 0)
                        break
            
            x25_1 += 1
            
            if (x25_1 == zx.q(x21_1))
                if (arg3 u>= 6)
                    goto label_fe66ac
                
                goto label_fe6260
        
        goto label_fe65cc
    
label_fe6260:
    float v0_18 = x24_1(v8)
    uint32_t temp0_11 = vcvtps_s32_f32((v0_18 + v0_18) f/ v8.d)
    uint32_t x8_35
    
    if (temp0_11 s< 0)
        x8_35 = temp0_11 + 1
    else
        x8_35 = temp0_11
    
    uint32_t x8_37 = (x8_35 & 0xfffffffe) + arg4
    float v0_20
    result, v0_20 = x24_1(v8)
    float v9_1 = v0_20
    
    if (arg5 s>= 1)
        if (x8_37 s< 1)
        label_fe656c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x472, 
                "void stbir__normalize_downsample_coefficients(stbir__contributors *, float *, "
            "stbir_filter, float, int, int)", 
                "total > 0.9f")
        label_fe658c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x441, 
                "void stbir__calculate_coefficients_downsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "out_last_pixel - out_first_pixel <= (int)ceil(stbir__filter_info_table[filter]."
            "support(scale_ratio) * 2)")
        label_fe65ac:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x446, 
                "void stbir__calculate_coefficients_downsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "contributor->n1 >= contributor->n0")
        label_fe65cc:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x44f, 
                "void stbir__calculate_coefficients_downsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "stbir__filter_info_table[filter].kernel((float)(out_last_pixel + 1) + 0.5f - "
            "out_center_of_in, scale_ratio) == 0")
        label_fe65ec:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x411, 
                "void stbir__calculate_coefficients_upsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "in_last_pixel - in_first_pixel <= (int)ceil(stbir__filter_info_table[filter]."
            "support(1/scale) * 2)")
        label_fe660c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x416, 
                "void stbir__calculate_coefficients_upsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "contributor->n1 >= contributor->n0")
        label_fe662c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x428, 
                "void stbir__calculate_coefficients_upsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "stbir__filter_info_table[filter].kernel((float)(in_last_pixel + 1) + 0.5f - "
            "in_center_of_out, 1/scale) == 0")
        label_fe664c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x42a, 
                "void stbir__calculate_coefficients_upsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "total_filter > 0.9")
        label_fe666c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x42b, 
                "void stbir__calculate_coefficients_upsample(stbir_filter, float, int, int, float, "
            "stbir__contributors *, float *)", 
                "total_filter < 1.1f")
        label_fe668c:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x473, 
                "void stbir__normalize_downsample_coefficients(stbir__contributors *, float *, "
            "stbir_filter, float, int, int)", 
                "total < 1.1f")
        label_fe66ac:
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x373, "int stbir__get_filter_pixel_width(stbir_filter, float)", 
                "filter < (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
            x0, x1, v0_30, v1_6, v2_2, v3_2 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x372, "int stbir__get_filter_pixel_width(stbir_filter, float)", "filter != 0")
            return sub_fe66d0(x0, x1, v0_30, v1_6, v2_2, v3_2) __tailcall
        
        int32_t x25_3 = 0
        uint64_t x26_3 = zx.q(x8_37)
        arg8.d = fconvert.s(1f)
        
        do
            int64_t x19_3 = 0
            v11.d = 0f
            void* x21_4 = arg1 + 4
            
            do
                int32_t x8_41 = *(x21_4 - 4)
                
                if (x25_3 s< x8_41)
                    break
                
                if (x25_3 s<= *x21_4)
                    result, v0_20 = x24_1(v8)
                    v11.d =
                        v11.d f+ arg2[sx.q(x25_3 - x8_41 + vcvtps_s32_f32(v0_20 + v0_20) * x19_3.d)]
                
                x19_3 += 1
                x21_4 += 8
            while (x26_3 != x19_3)
            
            if (v11.d f<= float.s(0x3f666666))
                goto label_fe656c
            
            if (v11.d f>= float.s(0x3f8ccccd))
                goto label_fe668c
            
            int64_t x19_4 = 0
            v11.d = arg8.d f/ v11.d
            void* x21_5 = arg1 + 4
            
            do
                int32_t x8_45 = *(x21_5 - 4)
                
                if (x25_3 s< x8_45)
                    break
                
                if (x25_3 s<= *x21_5)
                    result, v0_20 = x24_1(v8)
                    int64_t x8_49 = zx.q(x25_3 - x8_45 + vcvtps_s32_f32(v0_20 + v0_20) * x19_4.d)
                        << 0x20 s>> 0x1e
                    *(arg2 + x8_49) = v11.d f* *(arg2 + x8_49)
                
                x19_4 += 1
                x21_5 += 8
            while (x26_3 != x19_4)
            
            x25_3 += 1
        while (x25_3 != arg5)
    
    if (x8_37 s>= 1)
        int64_t x25_4 = 0
        uint32_t temp0_15 = vcvtps_s32_f32(v9_1 + v9_1)
        uint64_t x21_6 = zx.q(x8_37)
        
        do
            int32_t x19_5 = -1
            float i_3
            
            do
                i_3 = x24_1(v8)
                i_3 = arg2[sx.q(x19_5 + x25_4.d * vcvtps_s32_f32(i_3 + i_3) + 1)]
                x19_5 += 1
            while (i_3 == 0f)
            void* x8_55 = arg1 + (x25_4 << 3)
            int32_t fp_4 = *x8_55
            int32_t x9_12 = *(x8_55 + 4)
            int32_t x28_5 = fp_4 + x19_5
            int32_t x10_9
            
            x10_9 = x28_5 s< 0 ? 0 : x28_5
            
            *x8_55 = x10_9
            int32_t x8_56 = x9_12 - x10_9
            uint32_t x19_6
            
            if (x8_56 s>= temp0_15)
                x19_6 = temp0_15
            else
                x19_6 = x8_56 + 1
            
            float v0_25
            result, v0_25 = x24_1(v8)
            
            if (x19_6 s>= 1)
                int32_t x27_5 = 0
                uint32_t temp0_17 = vcvtps_s32_f32(v0_25 + v0_25)
                
                do
                    int32_t x23_6 = neg.d(fp_4) + (x28_5 & not.d(x28_5 s>> 0x1f)) + x27_5
                    
                    if (x23_6 s>= temp0_17)
                        break
                    
                    float v0_27 = x24_1(v8)
                    v9_1 = arg2[sx.q(x23_6 + x25_4.d * vcvtps_s32_f32(v0_27 + v0_27))]
                    float v0_29
                    result, v0_29 = x24_1(v8)
                    int32_t x8_61 = x27_5 + x25_4.d * vcvtps_s32_f32(v0_29 + v0_29)
                    x27_5 += 1
                    arg2[sx.q(x8_61)] = v9_1
                while (x19_6 != x27_5)
            
            x25_4 += 1
        while (x25_4 != x21_6)
        
        int64_t i_11
        
        if (x8_37 u>= 3)
            i_11 = x21_6 & 0xfffffffe
            int64_t i_8 = i_11
            void* x9_15 = arg1 + 0xc
            int64_t i_4
            
            do
                int32_t x11_4 = *(x9_15 - 8)
                int32_t x12_1 = *x9_15
                int32_t x11_5
                
                if (x11_4 s< arg5 - 1)
                    x11_5 = x11_4
                else
                    x11_5 = arg5 - 1
                
                int32_t x12_2
                
                if (x12_1 s< arg5 - 1)
                    x12_2 = x12_1
                else
                    x12_2 = arg5 - 1
                
                *(x9_15 - 8) = x11_5
                i_4 = i_8
                i_8 -= 2
                *x9_15 = x12_2
                x9_15 += 0x10
            while (i_4 != 2)
            
            if (i_11 != x21_6)
                goto label_fe64fc
        else
            i_11 = 0
        label_fe64fc:
            int64_t i_7 = x21_6 - i_11
            void* x8_64 = arg1 + (i_11 << 3) + 4
            int64_t i_5
            
            do
                int32_t x10_11 = *x8_64
                int32_t x10_12
                
                if (x10_11 s< arg5 - 1)
                    x10_12 = x10_11
                else
                    x10_12 = arg5 - 1
                
                i_5 = i_7
                i_7 -= 1
                *x8_64 = x10_12
                x8_64 += 8
            while (i_5 != 1)

label_fe653c:
arg8.q = var_78
return result
