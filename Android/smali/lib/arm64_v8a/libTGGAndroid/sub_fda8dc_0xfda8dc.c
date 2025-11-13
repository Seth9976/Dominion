// 函数: sub_fda8dc
// 地址: 0xfda8dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
double v12
double var_88 = v12
double v11
double var_80 = v11
int32_t x22 = arg8
uint64_t bytes_1 = arg5
int32_t x24 = arg4
float var_174 = arg9
float var_170 = arg10
float var_16c = arg11
float var_168 = arg12

if (arg13 == 0)
    float v4 = float.s(arg6)
    float v6 = float.s(arg7)
    arg11 = arg11 - arg9
    arg12 = arg12 - arg10
    float v5 = v4 / float.s(arg2)
    float v7 = v6 / float.s(arg3)
    v4 = v4 * arg9
    v6 = v6 * arg10
    arg10 = v5 / arg11
    arg9 = v7 / arg12
    arg11 = v4 / arg11
    arg12 = v6 / arg12
else
    arg10 = *arg13
    arg9 = arg13[1]
    arg11 = arg13[2]
    arg12 = arg13[3]

float var_164 = arg11
arg11 = fconvert.s(1f)
int32_t x12

x12 = arg10 <= arg11 ? 5 : 4

int32_t x9_1

x9_1 = arg18 == 0 ? x12 : arg18

int32_t x10_1

x10_1 = arg9 <= arg11 ? 5 : 4

int32_t x8_1

x8_1 = arg19 == 0 ? x10_1 : arg19

int64_t var_1a0
uint64_t bytes = zx.q(sub_fe57b4(&var_1a0))
void* x0_3 = malloc(bytes)
int32_t x20

if (x0_3 == 0)
    x20 = 0
else
    uint64_t x19_1 = zx.q(arg17)
    int32_t x0_5
    int128_t v8_1
    int128_t v10_1
    x0_5, v8_1, v10_1 = sub_fe57b4(&var_1a0)
    int32_t x8_2
    
    if (x24 != 0)
        x8_2 = arg14
        
        if (x22 == 0)
            goto label_fdab78
        
        goto label_fda9ec
    
    x24 = arg2 * arg14 * zx.d(*(&data_8667f8 + zx.q(x19_1.d)))
    x8_2 = arg14
    void* x11_1
    
    if (x22 == 0)
    label_fdab78:
        x22 = arg6 * x8_2 * zx.d(*(&data_8667f8 + zx.q(x19_1.d)))
        x11_1 = x0_3
        
        if ((x8_2 & 0x80000000) == 0)
            goto label_fda9f4
        
        goto label_fdaba0
    
label_fda9ec:
    x11_1 = x0_3
    uint64_t bytes_2
    int32_t var_178
    int32_t var_150
    int32_t var_148
    int32_t var_134
    uint32_t var_f4
    int64_t x8_10
    float v0_2
    float v0_4
    
    if ((x8_2 & 0x80000000) != 0)
    label_fdaba0:
        x8_10, v0_2 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x906, 
            "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
        "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, size_t)", 
            "info->channels >= 0")
    label_fdaba8:
        v0_4 = x8_10(v0_2 f/ v8_1.d)
        v0_4 = v0_4 + v0_4
    label_fdabb0:
        uint64_t x8_13 = zx.q(x8_1)
        uint32_t var_f0_1 = vcvtps_s32_f32(v0_4)
        
        if (x8_13.d == 0)
            goto label_fdc0e8
        
        if (x8_13.d u>= 6)
            goto label_fdc108
        
        v8_1.d = arg9
        int64_t x8_15 = *(x19_1 + (x8_13 << 4) + 8)
        v0_4 = fconvert.s(1f)
        float v0_6
        
        if (v8_1.d f> v0_4)
            v0_6 = x8_15(v0_4 f/ v8_1.d)
            v0_6 = v0_6 + v0_6
        else
            v0_6 = x8_15(v8_1)
            v0_6 = (v0_6 + v0_6) f/ v8_1.d
        
        uint64_t x8_16 = zx.q(x9_1)
        uint32_t var_ec_1 = vcvtps_s32_f32(v0_6)
        
        if (x8_16.d == 0)
            goto label_fdc0e8
        
        if (x8_16.d u>= 6)
            goto label_fdc108
        
        v8_1.d = arg10
        int64_t x8_18 = *(x19_1 + (x8_16 << 4) + 8)
        v0_6 = fconvert.s(1f)
        float v0_8
        
        if (v8_1.d f> v0_6)
            v0_8 = x8_18(v0_6 f/ v8_1.d)
            v0_8 = v0_8 + v0_8
        else
            v0_8 = x8_18(v8_1)
            v0_8 = (v0_8 + v0_8) f/ v8_1.d
        
        uint32_t temp0_5 = vcvtps_s32_f32(v0_8)
        uint64_t x8_19 = zx.q(x8_1)
        uint32_t x9_13
        
        if (temp0_5 s< 0)
            x9_13 = temp0_5 + 1
        else
            x9_13 = temp0_5
        
        if (x8_19.d == 0)
            goto label_fdc0e8
        
        if (x8_19.d u>= 6)
            goto label_fdc108
        
        v8_1.d = arg9
        int64_t x8_21 = *(x19_1 + (x8_19 << 4) + 8)
        v0_8 = fconvert.s(1f)
        int128_t v0_10
        
        if (v8_1.d f> v0_8)
            v0_10 = x8_21(v0_8 f/ v8_1.d)
            v0_10.d = v0_10.d f+ v0_10.d
        else
            v0_10 = x8_21(v8_1)
            v0_10.d = v0_10.d f+ v0_10.d
            v0_10.d = v0_10.d f/ v8_1.d
        
        int32_t x3 = arg2
        int32_t x4 = arg6
        uint32_t temp0_6 = vcvtps_s32_f32(v0_10.d)
        int32_t var_110_1 = x3 + (x9_13 s>> 1 << 1)
        void* x0_7 = x0_3
        uint32_t x10_6
        
        if (temp0_6 s< 0)
            x10_6 = temp0_6 + 1
        else
            x10_6 = temp0_6
        
        int32_t x9_17 = (x4 * arg14) << 2
        int32_t x10_7 = x10_6 s>> 1
        v0_10.d = arg9
        int32_t var_b0
        float* x1 = x0_7 + sx.q(var_b0)
        int32_t var_ac
        void* x8_25 = x1 + sx.q(var_ac)
        float v1_2 = fconvert.s(1f)
        int32_t var_a8
        void* x9_19 = x8_25 + sx.q(var_a8)
        int32_t var_a4
        void* x8_26 = x9_19 + sx.q(var_a4)
        void* var_130_1 = x0_7
        float* var_128_1 = x1
        void* var_108_1 = x8_26
        
        if (v0_10.d f> v1_2)
            goto label_fdad7c
        
        int32_t var_a0
        void* x8_27 = x8_26 + sx.q(var_a0)
        int32_t var_9c
        void* x9_21 = x8_27 + sx.q(var_9c)
        void* var_100_1 = x8_27
        void* var_c0_1 = x9_21
        void* var_b8_1 = nullptr
        int32_t var_98
        
        if (x0_7 + bytes_1 != x9_21 + sx.q(var_98))
            x0_7, x1, x3, x4, x8_26, v0_10 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x956, 
                "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
            "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
            "size_t)", 
                "(size_t)(unsigned char*)(((unsigned char*)info->ring_buffer) + info->ring_buffer_size) "
            "== (size_t)tempmem + tempmem_size_in_bytes", v0_10, v1_2)
        label_fdad7c:
            var_100_1 = nullptr
            void* x8_29 = x8_26 + sx.q(var_a0)
            var_c0_1 = x8_29
            void* x8_30 = x8_29 + sx.q(var_98)
            var_b8_1 = x8_30
            int32_t var_94
            
            if (x0_7 + bytes_1 != x8_30 + sx.q(var_94))
                goto label_fdc1e8
        
        v0_10.d = arg10
        int32_t var_c8_1 = 0xffffffff
        int128_t v0_11
        int128_t v10_2
        v0_11, v10_2 = sub_fe5d80(x0_7, x1, x9_1, x3, x4, v0_10, var_164, v10_1)
        v0_11.d = arg9
        int128_t v0_12
        int128_t v8_2
        v0_12, v8_2, v13 = sub_fe5d80(x8_25, x9_19, x8_1, arg3, arg7, v0_11, arg12, v10_2)
        v8_2.d = arg9
        float v9_1 = fconvert.s(1f)
        int32_t var_d4
        uint32_t var_d0
        uint32_t var_cc
        float v10_3
        
        if (v8_2.d f> v9_1)
            v0_12.d = v9_1 f/ v8_2.d
            float128 v0_16
            uint128_t v1_5
            uint128_t v2_3
            uint128_t v3_3
            v0_16, v1_5, v2_3, v3_3 = (*(x19_1 + (zx.q(x8_1) << 4) + 8))(v0_12)
            v1_5.d = arg9
            void var_220
            uint64_t x0_41
            int32_t x1_23
            int32_t x2_19
            int32_t x3_35
            uint64_t x4_21
            int32_t x5_6
            int32_t x6_14
            int32_t x7_8
            
            if (v1_5.d f<= v9_1)
                x0_41, x1_23, x2_19, x3_35, x4_21, x5_6, x6_14, x7_8 = __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x813, "void stbir__buffer_loop_upsample(stbir__info *)", 
                    "stbir__use_height_upsampling(stbir_info)")
                return stbir_resize_float(x0_41, x1_23, x2_19, x3_35, x4_21, x5_6, x6_14, x7_8, 
                    var_220) __tailcall
            
            if (arg7 s>= 1)
                int64_t x22_5 = 0
                v9_1 = v8_2.d f* v0_16.d
                v10_3 = fconvert.s(0.5f)
                v13.d = fconvert.s(1f)
                
                while (true)
                    v0_16.d = arg12
                    v1_5.d = float.s(x22_5.d)
                    v1_5.d = v1_5.d f+ v10_3
                    v2_3.d = v1_5.d f- v9_1
                    v1_5.d = v9_1 f+ v1_5.d
                    v2_3.d = v0_16.d f+ v2_3.d
                    v0_16.d = v0_16.d f+ v1_5.d
                    v1_5.d = v2_3.d f/ v8_2.d
                    v0_16.d = v0_16.d f/ v8_2.d
                    v1_5.q = fconvert.d(v1_5.d)
                    v0_16.q = fconvert.d(v0_16.d)
                    v1_5.q = v1_5.q f+ fconvert.d(0.5)
                    v0_16.q = v0_16.q f+ fconvert.d(-0.5)
                    uint32_t x20_2 = vcvtmd_s32_f64(v1_5.q)
                    uint32_t temp0_10 = vcvtmd_s32_f64(v0_16.q)
                    
                    if (temp0_10 - x20_2 s>= var_d4)
                        goto label_fdc088
                    
                    int32_t x10_18 = var_c8_1
                    
                    if ((x10_18 & 0x80000000) == 0)
                        uint32_t x9_45 = var_d0
                        
                        if (x9_45 s>= x20_2)
                            goto label_fdb778
                        
                        while (true)
                            if (var_cc == x9_45)
                                var_c8_1 = 0xffffffff
                                var_d0.q = 0
                                break
                            
                            x9_45 += 1
                            x10_18 = (x10_18 + 1) s% var_d4
                            var_d0 = x9_45
                            var_c8_1 = x10_18
                            
                            if (x20_2 == x9_45)
                                if ((x10_18 & 0x80000000) == 0)
                                    goto label_fdb778
                                
                                break
                    
                    sub_fe66d0(&var_1a0, x20_2, v0_16, v1_5, v2_3, v3_3)
                    int32_t x8_59 = var_c8_1
                    var_cc = x20_2
                    uint32_t x8_61
                    
                    if (arg10 f> v13.d)
                        while (true)
                            int32_t x9_48
                            
                            if ((x8_59 & 0x80000000) != 0)
                                x9_48 = 0
                                var_c8_1 = 0
                                var_d0 = x20_2
                            else
                                x9_48 = (x8_59 + x20_2 - var_d0) s% var_d4
                                
                                if (x9_48 == x8_59)
                                    goto label_fdc068
                            
                            size_t x2_8 = sx.q(x9_17)
                            int32_t* x20_3 = var_c0_1 + (sx.q((x2_8.d s>> 2) * x9_48) << 2)
                            memset(x20_3, 0, x2_8)
                            v0_16, v1_5, v2_3, v3_3 = sub_fe7a9c(&var_1a0, x20_3)
                        label_fdb778:
                            x8_61 = var_cc
                            
                            if (x8_61 s>= temp0_10)
                                goto label_fdb804
                            
                        label_fdb784:
                            x20_2 = x8_61 + 1
                            sub_fe66d0(&var_1a0, x20_2, v0_16, v1_5, v2_3, v3_3)
                            x8_59 = var_c8_1
                            var_cc = x20_2
                            
                            if (not(arg10 f> v13.d))
                                if ((x8_59 & 0x80000000) != 0)
                                    break
                                
                                goto label_fdb7b8
                        
                        goto label_fdb708
                    
                    int32_t x9_52
                    
                    if ((x8_59 & 0x80000000) == 0)
                    label_fdb7b8:
                        x9_52 = (x8_59 + x20_2 - var_d0) s% var_d4
                        
                        if (x9_52 == x8_59)
                            break
                    else
                    label_fdb708:
                        x9_52 = 0
                        var_c8_1 = 0
                        var_d0 = x20_2
                    
                    size_t x2_9 = sx.q(x9_17)
                    int32_t* x20_4 = var_c0_1 + (sx.q((x2_9.d s>> 2) * x9_52) << 2)
                    memset(x20_4, 0, x2_9)
                    v0_16, v1_5, v2_3, v3_3 = sub_fe802c(&var_1a0, x20_4)
                    x8_61 = var_cc
                    
                    if (x8_61 s< temp0_10)
                        goto label_fdb784
                    
                label_fdb804:
                    v0_16.d = arg9
                    
                    if (v0_16.d f<= v13.d)
                        goto label_fdc0a8
                    
                    int64_t x12_4 = sx.q(arg6)
                    void* x8_64 = x8_25 + (x22_5 << 3)
                    int64_t x21_9 = sx.q(arg14)
                    int32_t x25_3 = *x8_64
                    int32_t x19_25 = *(x8_64 + 4)
                    int32_t var_1c8
                    var_1c8.q = bytes_2
                    int64_t x28_4 = x12_4 & 0xffffffff
                    int64_t x20_5 = x21_9 & 0xffffffff
                    uint64_t var_1a8
                    var_1a8.d = x9_17 s>> 2
                    int64_t x22_7 = sx.q(var_f4) * sx.q(x22_5.d)
                    int32_t x27_4 = x12_4.d
                    uint128_t v0_17
                    float128 v1_6
                    float128 v2_4
                    float128 v3_4
                    float128 v4_2
                    float128 v5_2
                    float128 v6_4
                    float128 v7_2
                    float128 v16_2
                    float128 v17_2
                    float128 v18_2
                    float128 v19_2
                    v0_17, v1_6, v2_4, v3_4, v4_2, v5_2, v6_4, v7_2, v16_2, v17_2, v18_2, v19_2 =
                        memset(var_b8_1, 0, (x12_4 * x21_9) << 2)
                    uint64_t x8_66 = zx.q(x20_5.d - 1)
                    int32_t x5_3
                    int64_t fp_4
                    int32_t lr_2
                    
                    if (x8_66.d u> 3)
                        lr_2 = x27_4
                        x5_3 = var_134
                        fp_4 = var_1c8.q
                        int32_t x3_29 = var_1a8.d
                        
                        if (x25_3 s<= x19_25 && x28_4.d s>= 1 && x20_5.d s>= 1)
                            int64_t x8_68 = 0
                            int64_t i_44 = x20_5 & 0xfffffff8
                            int64_t x13_5 = x21_9 << 2
                            uint64_t x14_5 = zx.q(x19_25 - x25_3 + 1)
                            
                            do
                                v0_17.d = *(x9_19 + ((x8_68 + sx.q(x22_7.d)) << 2))
                                int32_t x1_15 = (var_c8_1 - var_d0 + x25_3) s% var_d4
                                int64_t x0_29 = muls.dp.d(x1_15, x3_29)
                                int64_t x3_30 = x0_29 << 2
                                int64_t x16_3 = 0
                                int64_t x17_8 = 0
                                v1_6 = vdupq_laneq_s32(v0_17, 0)
                                void* x2_13 = var_c0_1 + 0x10 + x3_30
                                int128_t* x4_18 = var_b8_1 + 0x10
                                
                                do
                                    int64_t x22_8
                                    
                                    if (x21_9.d u>= 8)
                                        x22_8 = x17_8 * x21_9
                                    
                                    int64_t i_56
                                    
                                    if (x21_9.d u>= 8 && (var_b8_1 + (x22_8 << 2) u>= var_c0_1
                                            + ((x20_5 + muls.dp.d(x1_15, x3_29) + x22_8) << 2)
                                            || var_c0_1 + ((x22_8 + x0_29) << 2)
                                            u>= var_b8_1 + ((x22_8 + x20_5) << 2)))
                                        int64_t i_37 = i_44
                                        void* x6_10 = x2_13
                                        int128_t* x7_7 = x4_18
                                        int64_t i
                                        
                                        do
                                            v2_4 = *(x6_10 - 0x10)
                                            v3_4 = *x6_10
                                            v4_2 = x7_7[-1]
                                            v5_2 = *x7_7
                                            i = i_37
                                            i_37 -= 8
                                            x6_10 += 0x20
                                            float128 v2_6 = vmulq_f32(v1_6, v2_4, 0)
                                            float128 v3_6 = vmulq_f32(v1_6, v3_4, 0)
                                            v2_4 = vaddq_f32(v4_2, v2_6)
                                            v3_4 = vaddq_f32(v5_2, v3_6)
                                            x7_7[-1] = v2_4
                                            *x7_7 = v3_4
                                            x7_7 = &x7_7[2]
                                        while (i != 8)
                                        i_56 = i_44
                                        
                                        if (i_44 != x20_5)
                                            goto label_fdbaec
                                    else
                                        i_56 = 0
                                    label_fdbaec:
                                        int64_t i_36 = x20_5 - i_56
                                        int64_t x7_5 = (i_56 + x16_3) << 2
                                        void* x6_9 = var_b8_1 + x7_5
                                        void* x7_6 = var_c0_1 + x3_30 + x7_5
                                        int64_t i_1
                                        
                                        do
                                            v2_4.d = *x7_6
                                            x7_6 += 4
                                            v3_4.d = *x6_9
                                            i_1 = i_36
                                            i_36 -= 1
                                            v2_4.d = v0_17.d f* v2_4.d
                                            v2_4.d = v3_4.d f+ v2_4.d
                                            *x6_9 = v2_4.d
                                            x6_9 += 4
                                        while (i_1 != 1)
                                    x17_8 += 1
                                    x4_18 += x13_5
                                    x2_13 += x13_5
                                    x16_3 += x21_9
                                while (x17_8 != x28_4)
                                
                                x3_29 = var_1a8.d
                                x8_68 += 1
                                x25_3 += 1
                            while (x8_68 != x14_5)
                    else
                        switch (x8_66)
                            case 0
                                x5_3 = var_134
                                fp_4 = var_1c8.q
                                lr_2 = x27_4
                                
                                if (x25_3 s<= x19_25 && x28_4.d s>= 1)
                                    int64_t x15_3 = x28_4 << 2
                                    int64_t x8_67 = 0
                                    int64_t i_43 = x28_4 & 0xfffffff8
                                    uint64_t x13_4 = zx.q(x19_25 - x25_3 + 1)
                                    
                                    do
                                        v0_17.d = *(x9_19 + ((x8_67 + sx.q(x22_7.d)) << 2))
                                        int64_t x17_5 = muls.dp.d(
                                            (var_c8_1 - var_d0 + x25_3) s% var_d4, var_1a8.d)
                                        int64_t i_50
                                        
                                        if (lr_2 u< 8 || (
                                                var_b8_1 u< var_c0_1 + x15_3 + (x17_5 << 2)
                                                && var_c0_1 + (x17_5 << 2) u< var_b8_1 + x15_3))
                                            i_50 = 0
                                        label_fdb974:
                                            int64_t i_20 = x28_4 - i_50
                                            int32_t* x1_13 = var_b8_1 + (i_50 << 2)
                                            int32_t* x17_7 = var_c0_1 + ((i_50 + x17_5) << 2)
                                            int32_t i_2
                                            
                                            do
                                                v1_6.d = *x17_7
                                                x17_7 = &x17_7[1]
                                                v2_4.d = *x1_13
                                                i_2 = i_20
                                                i_20 -= 1
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *x1_13 = v1_6.d
                                                x1_13 = &x1_13[1]
                                            while (i_2 != 1)
                                        else
                                            v1_6 = vdupq_laneq_s32(v0_17, 0)
                                            void* x0_27 = var_c0_1 + 0x10 + (x17_5 << 2)
                                            int64_t i_24 = i_43
                                            int128_t* x2_11 = var_b8_1 + 0x10
                                            int64_t i_3
                                            
                                            do
                                                v2_4 = *(x0_27 - 0x10)
                                                v3_4 = *x0_27
                                                v4_2 = x2_11[-1]
                                                v5_2 = *x2_11
                                                x0_27 += 0x20
                                                i_3 = i_24
                                                i_24 -= 8
                                                float128 v2_5 = vmulq_f32(v1_6, v2_4, 0)
                                                float128 v3_5 = vmulq_f32(v1_6, v3_4, 0)
                                                v2_4 = vaddq_f32(v4_2, v2_5)
                                                v3_4 = vaddq_f32(v5_2, v3_5)
                                                x2_11[-1] = v2_4
                                                *x2_11 = v3_4
                                                x2_11 = &x2_11[2]
                                            while (i_3 != 8)
                                            i_50 = i_43
                                            
                                            if (i_43 != x28_4)
                                                goto label_fdb974
                                        x8_67 += 1
                                        x25_3 += 1
                                    while (x8_67 != x13_4)
                            case 1
                                x5_3 = var_134
                                fp_4 = var_1c8.q
                                lr_2 = x27_4
                                
                                if (x25_3 s<= x19_25 && x28_4.d s>= 1)
                                    int64_t x15_6 = x28_4 << 3
                                    int64_t x8_69 = 0
                                    int64_t i_45 = x28_4 & 0xfffffffc
                                    uint64_t x13_7 = zx.q(x19_25 - x25_3 + 1)
                                    
                                    do
                                        v0_17.d = *(x9_19 + ((x8_69 + sx.q(x22_7.d)) << 2))
                                        int64_t x17_11 = muls.dp.d(
                                            (var_c8_1 - var_d0 + x25_3) s% var_d4, var_1a8.d)
                                        void* x0_32
                                        
                                        if (x28_4.d u>= 4)
                                            x0_32 = var_c0_1 + (x17_11 << 2)
                                        
                                        int64_t i_51
                                        
                                        if (x28_4.d u>= 4 && (
                                                var_b8_1 u>= var_c0_1 + x15_6 + (x17_11 << 2)
                                                || x0_32 u>= var_b8_1 + x15_6))
                                            v1_6 = vdupq_laneq_s32(v0_17, 0)
                                            int64_t i_25 = i_45
                                            void* x2_14 = var_b8_1
                                            int64_t i_4
                                            
                                            do
                                                v2_4.d = *x0_32
                                                v3_4.d = *(x0_32 + 4)
                                                v2_4:4.d = *(x0_32 + 8)
                                                v3_4:4.d = *(x0_32 + 0xc)
                                                v2_4:8.d = *(x0_32 + 0x10)
                                                v3_4:8.d = *(x0_32 + 0x14)
                                                v2_4:0xc.d = *(x0_32 + 0x18)
                                                v3_4:0xc.d = *(x0_32 + 0x1c)
                                                x0_32 += 0x20
                                                v4_2.d = *x2_14
                                                v5_2.d = *(x2_14 + 4)
                                                v4_2:4.d = *(x2_14 + 8)
                                                v5_2:4.d = *(x2_14 + 0xc)
                                                v4_2:8.d = *(x2_14 + 0x10)
                                                v5_2:8.d = *(x2_14 + 0x14)
                                                v4_2:0xc.d = *(x2_14 + 0x18)
                                                v5_2:0xc.d = *(x2_14 + 0x1c)
                                                i_4 = i_25
                                                i_25 -= 4
                                                float128 v6_5 = vmulq_f32(v1_6, v2_4, 0)
                                                v2_4 = vmulq_f32(v1_6, v3_4, 0)
                                                float128 v6_6 = vaddq_f32(v4_2, v6_5)
                                                float128 v7_3 = vaddq_f32(v5_2, v2_4)
                                                *x2_14 = v6_6.d
                                                *(x2_14 + 4) = v7_3.d
                                                *(x2_14 + 8) = v6_6:4.d
                                                *(x2_14 + 0xc) = v7_3:4.d
                                                *(x2_14 + 0x10) = v6_6:8.d
                                                *(x2_14 + 0x14) = v7_3:8.d
                                                *(x2_14 + 0x18) = v6_6:0xc.d
                                                *(x2_14 + 0x1c) = v7_3:0xc.d
                                                x2_14 += 0x20
                                            while (i_4 != 4)
                                            i_51 = i_45
                                            
                                            if (i_45 != x28_4)
                                                goto label_fdbc14
                                        else
                                            i_51 = 0
                                        label_fdbc14:
                                            int64_t i_21 = x28_4 - i_51
                                            int32_t* x1_18 = var_b8_1 + 4 + (i_51 << 3)
                                            int32_t* x17_13 =
                                                var_c0_1 + 4 + ((x17_11 + (i_51 << 1)) << 2)
                                            int64_t i_5
                                            
                                            do
                                                v1_6.d = x17_13[-1]
                                                v2_4.d = x1_18[-1]
                                                i_5 = i_21
                                                i_21 -= 1
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                x1_18[-1] = v1_6.d
                                                v1_6.d = *x17_13
                                                x17_13 = &x17_13[2]
                                                v2_4.d = *x1_18
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *x1_18 = v1_6.d
                                                x1_18 = &x1_18[2]
                                            while (i_5 != 1)
                                        x8_69 += 1
                                        x25_3 += 1
                                    while (x8_69 != x13_7)
                            case 2
                                x5_3 = var_134
                                fp_4 = var_1c8.q
                                lr_2 = x27_4
                                
                                if (x25_3 s<= x19_25 && x28_4.d s>= 1)
                                    int64_t x15_8 = x28_4 * 0xc
                                    int64_t x8_70 = 0
                                    int64_t i_46 = x28_4 & 0xfffffffc
                                    uint64_t x13_9 = zx.q(x19_25 - x25_3 + 1)
                                    
                                    do
                                        v0_17.d = *(x9_19 + ((x8_70 + sx.q(x22_7.d)) << 2))
                                        int64_t x17_16 = muls.dp.d(
                                            (var_c8_1 - var_d0 + x25_3) s% var_d4, var_1a8.d)
                                        void* x0_35
                                        
                                        if (x28_4.d u>= 4)
                                            x0_35 = var_c0_1 + (x17_16 << 2)
                                        
                                        int64_t i_48
                                        
                                        if (x28_4.d u>= 4 && (
                                                var_b8_1 u>= var_c0_1 + x15_8 + (x17_16 << 2)
                                                || x0_35 u>= var_b8_1 + x15_8))
                                            v1_6 = vdupq_laneq_s32(v0_17, 0)
                                            int64_t i_26 = i_46
                                            void* x2_16 = var_b8_1
                                            int64_t i_6
                                            
                                            do
                                                v2_4.d = *x0_35
                                                v3_4.d = *(x0_35 + 4)
                                                v4_2.d = *(x0_35 + 8)
                                                v2_4:4.d = *(x0_35 + 0xc)
                                                v3_4:4.d = *(x0_35 + 0x10)
                                                v4_2:4.d = *(x0_35 + 0x14)
                                                v2_4:8.d = *(x0_35 + 0x18)
                                                v3_4:8.d = *(x0_35 + 0x1c)
                                                v4_2:8.d = *(x0_35 + 0x20)
                                                v2_4:0xc.d = *(x0_35 + 0x24)
                                                v3_4:0xc.d = *(x0_35 + 0x28)
                                                v4_2:0xc.d = *(x0_35 + 0x2c)
                                                x0_35 += 0x30
                                                v5_2.d = *x2_16
                                                v6_4.d = *(x2_16 + 4)
                                                v7_2.d = *(x2_16 + 8)
                                                v5_2:4.d = *(x2_16 + 0xc)
                                                v6_4:4.d = *(x2_16 + 0x10)
                                                v7_2:4.d = *(x2_16 + 0x14)
                                                v5_2:8.d = *(x2_16 + 0x18)
                                                v6_4:8.d = *(x2_16 + 0x1c)
                                                v7_2:8.d = *(x2_16 + 0x20)
                                                v5_2:0xc.d = *(x2_16 + 0x24)
                                                v6_4:0xc.d = *(x2_16 + 0x28)
                                                v7_2:0xc.d = *(x2_16 + 0x2c)
                                                i_6 = i_26
                                                i_26 -= 4
                                                float128 v16_3 = vmulq_f32(v1_6, v2_4, 0)
                                                float128 v17_3 = vmulq_f32(v1_6, v3_4, 0)
                                                float128 v18_3 = vaddq_f32(v5_2, v16_3)
                                                v2_4 = vmulq_f32(v1_6, v4_2, 0)
                                                float128 v19_3 = vaddq_f32(v6_4, v17_3)
                                                float128 v20_3 = vaddq_f32(v7_2, v2_4)
                                                *x2_16 = v18_3.d
                                                *(x2_16 + 4) = v19_3.d
                                                *(x2_16 + 8) = v20_3.d
                                                *(x2_16 + 0xc) = v18_3:4.d
                                                *(x2_16 + 0x10) = v19_3:4.d
                                                *(x2_16 + 0x14) = v20_3:4.d
                                                *(x2_16 + 0x18) = v18_3:8.d
                                                *(x2_16 + 0x1c) = v19_3:8.d
                                                *(x2_16 + 0x20) = v20_3:8.d
                                                *(x2_16 + 0x24) = v18_3:0xc.d
                                                *(x2_16 + 0x28) = v19_3:0xc.d
                                                *(x2_16 + 0x2c) = v20_3:0xc.d
                                                x2_16 += 0x30
                                            while (i_6 != 4)
                                            i_48 = i_46
                                            
                                            if (i_46 != x28_4)
                                                goto label_fdbd40
                                        else
                                            i_48 = 0
                                        label_fdbd40:
                                            int64_t x2_15 = i_48 * 3
                                            int64_t i_22 = x28_4 - i_48
                                            void* x1_20 = var_b8_1 + 4 + (x2_15 << 2)
                                            int32_t* x17_18 = var_c0_1 + 8 + ((x2_15 + x17_16) << 2)
                                            int64_t i_7
                                            
                                            do
                                                v1_6.d = x17_18[-2]
                                                v2_4.d = *(x1_20 - 4)
                                                i_7 = i_22
                                                i_22 -= 1
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *(x1_20 - 4) = v1_6.d
                                                v1_6.d = x17_18[-1]
                                                v2_4.d = *x1_20
                                                v3_4.d = *(x1_20 + 4)
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *x1_20 = v1_6.d
                                                v1_6.d = *x17_18
                                                x17_18 = &x17_18[3]
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v3_4.d f+ v1_6.d
                                                *(x1_20 + 4) = v1_6.d
                                                x1_20 += 0xc
                                            while (i_7 != 1)
                                        x8_70 += 1
                                        x25_3 += 1
                                    while (x8_70 != x13_9)
                            case 3
                                x5_3 = var_134
                                fp_4 = var_1c8.q
                                lr_2 = x27_4
                                
                                if (x25_3 s<= x19_25 && x28_4.d s>= 1)
                                    int64_t x14_9 = x28_4 << 4
                                    int64_t x8_71 = 0
                                    int64_t i_42 = x28_4 & 0xfffffffc
                                    uint64_t x12_10 = zx.q(x19_25 - x25_3 + 1)
                                    
                                    do
                                        v0_17.d = *(x9_19 + ((x8_71 + x22_7) << 2))
                                        int64_t x16_8 = muls.dp.d(
                                            (var_c8_1 - var_d0 + x25_3) s% var_d4, var_1a8.d)
                                        void* x17_21
                                        
                                        if (x28_4.d u>= 4)
                                            x17_21 = var_c0_1 + (x16_8 << 2)
                                        
                                        int64_t i_49
                                        
                                        if (x28_4.d u>= 4 && (
                                                var_b8_1 u>= var_c0_1 + x14_9 + (x16_8 << 2)
                                                || x17_21 u>= var_b8_1 + x14_9))
                                            v1_6 = vdupq_laneq_s32(v0_17, 0)
                                            int64_t i_23 = i_42
                                            void* x1_21 = var_b8_1
                                            int64_t i_8
                                            
                                            do
                                                v2_4.d = *x17_21
                                                v3_4.d = *(x17_21 + 4)
                                                v4_2.d = *(x17_21 + 8)
                                                v5_2.d = *(x17_21 + 0xc)
                                                v2_4:4.d = *(x17_21 + 0x10)
                                                v3_4:4.d = *(x17_21 + 0x14)
                                                v4_2:4.d = *(x17_21 + 0x18)
                                                v5_2:4.d = *(x17_21 + 0x1c)
                                                v2_4:8.d = *(x17_21 + 0x20)
                                                v3_4:8.d = *(x17_21 + 0x24)
                                                v4_2:8.d = *(x17_21 + 0x28)
                                                v5_2:8.d = *(x17_21 + 0x2c)
                                                v2_4:0xc.d = *(x17_21 + 0x30)
                                                v3_4:0xc.d = *(x17_21 + 0x34)
                                                v4_2:0xc.d = *(x17_21 + 0x38)
                                                v5_2:0xc.d = *(x17_21 + 0x3c)
                                                x17_21 += 0x40
                                                v16_2.d = *x1_21
                                                v17_2.d = *(x1_21 + 4)
                                                v18_2.d = *(x1_21 + 8)
                                                v19_2.d = *(x1_21 + 0xc)
                                                v16_2:4.d = *(x1_21 + 0x10)
                                                v17_2:4.d = *(x1_21 + 0x14)
                                                v18_2:4.d = *(x1_21 + 0x18)
                                                v19_2:4.d = *(x1_21 + 0x1c)
                                                v16_2:8.d = *(x1_21 + 0x20)
                                                v17_2:8.d = *(x1_21 + 0x24)
                                                v18_2:8.d = *(x1_21 + 0x28)
                                                v19_2:8.d = *(x1_21 + 0x2c)
                                                v16_2:0xc.d = *(x1_21 + 0x30)
                                                v17_2:0xc.d = *(x1_21 + 0x34)
                                                v18_2:0xc.d = *(x1_21 + 0x38)
                                                v19_2:0xc.d = *(x1_21 + 0x3c)
                                                i_8 = i_23
                                                i_23 -= 4
                                                float128 v6_7 = vmulq_f32(v1_6, v2_4, 0)
                                                float128 v7_4 = vmulq_f32(v1_6, v3_4, 0)
                                                float128 v20_4 = vmulq_f32(v1_6, v4_2, 0)
                                                v2_4 = vmulq_f32(v1_6, v5_2, 0)
                                                v3_4 = vaddq_f32(v16_2, v6_7)
                                                v4_2 = vaddq_f32(v17_2, v7_4)
                                                v5_2 = vaddq_f32(v18_2, v20_4)
                                                float128 v6_8 = vaddq_f32(v19_2, v2_4)
                                                *x1_21 = v3_4.d
                                                *(x1_21 + 4) = v4_2.d
                                                *(x1_21 + 8) = v5_2.d
                                                *(x1_21 + 0xc) = v6_8.d
                                                *(x1_21 + 0x10) = v3_4:4.d
                                                *(x1_21 + 0x14) = v4_2:4.d
                                                *(x1_21 + 0x18) = v5_2:4.d
                                                *(x1_21 + 0x1c) = v6_8:4.d
                                                *(x1_21 + 0x20) = v3_4:8.d
                                                *(x1_21 + 0x24) = v4_2:8.d
                                                *(x1_21 + 0x28) = v5_2:8.d
                                                *(x1_21 + 0x2c) = v6_8:8.d
                                                *(x1_21 + 0x30) = v3_4:0xc.d
                                                *(x1_21 + 0x34) = v4_2:0xc.d
                                                *(x1_21 + 0x38) = v5_2:0xc.d
                                                *(x1_21 + 0x3c) = v6_8:0xc.d
                                                x1_21 += 0x40
                                            while (i_8 != 4)
                                            i_49 = i_42
                                            
                                            if (i_42 != x28_4)
                                                goto label_fdbe8c
                                        else
                                            i_49 = 0
                                        label_fdbe8c:
                                            int64_t i_34 = x28_4 - i_49
                                            void* x0_37 = var_b8_1 + 8 + (i_49 << 4)
                                            void* x16_10 =
                                                var_c0_1 + 8 + ((x16_8 + (i_49 << 2)) << 2)
                                            int64_t i_9
                                            
                                            do
                                                v1_6.d = *(x16_10 - 8)
                                                v2_4.d = *(x0_37 - 8)
                                                v3_4.d = *(x0_37 - 4)
                                                i_9 = i_34
                                                i_34 -= 1
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *(x0_37 - 8) = v1_6.d
                                                v1_6.d = *(x16_10 - 4)
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v3_4.d f+ v1_6.d
                                                *(x0_37 - 4) = v1_6.d
                                                v1_6.d = *x16_10
                                                v2_4.d = *x0_37
                                                v3_4.d = *(x0_37 + 4)
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v2_4.d f+ v1_6.d
                                                *x0_37 = v1_6.d
                                                v1_6.d = *(x16_10 + 4)
                                                x16_10 += 0x10
                                                v1_6.d = v0_17.d f* v1_6.d
                                                v1_6.d = v3_4.d f+ v1_6.d
                                                *(x0_37 + 4) = v1_6.d
                                                x0_37 += 0x10
                                            while (i_9 != 1)
                                        x8_71 += 1
                                        x25_3 += 1
                                    while (x8_71 != x12_10)
                    
                    v0_16, v1_5, v2_3, v3_3, v8_2, v9_1, v10_3 = sub_fe8630(&var_1a0, lr_2, 
                        fp_4 + sx.q(var_178) * sx.q(x22_5.d), var_b8_1, x21_9.d, var_150, 
                        x5_3 + (var_148 << 1), v0_17, v1_6, v2_4.q, v3_4, v4_2)
                    x22_5 += 1
                    
                    if (x22_5 s>= sx.q(arg7))
                        goto label_fdc00c
                
            label_fdc068:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x595, "float *stbir__add_empty_ring_buffer_entry(stbir__info *, int)", 
                    "ring_buffer_index != stbir_info->ring_buffer_begin_index")
            label_fdc088:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x81c, "void stbir__buffer_loop_upsample(stbir__info *)", 
                    "in_last_scanline - in_first_scanline + 1 <= stbir_info->ring_buffer_num_entries")
            label_fdc0a8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x767, "void stbir__resample_vertical_upsample(stbir__info *, int)", 
                    "stbir__use_height_upsampling(stbir_info)")
            label_fdc0c8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x881, "void stbir__buffer_loop_downsample(stbir__info *)", 
                    "out_last_scanline - out_first_scanline + 1 <= stbir_info->ring_buffer_num_entries")
            label_fdc0e8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x372, "int stbir__get_filter_pixel_width(stbir_filter, float)", "filter != 0")
            label_fdc108:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x373, "int stbir__get_filter_pixel_width(stbir_filter, float)", 
                    "filter < (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
            label_fdc128:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x7d2, "void stbir__resample_vertical_downsample(stbir__info *, int)", 
                    "!stbir__use_height_upsampling(stbir_info)")
            label_fdc148:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x907, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "info->channels <= 64")
            label_fdc168:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x90c, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "info->horizontal_filter < 
                    (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
            label_fdc188:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x90d, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "info->vertical_filter < 
                    (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
            label_fdc1a8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x918, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "alpha_channel >= 0 && alpha_channel < info->channels")
            label_fdc1c8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x922, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "tempmem_size_in_bytes >= memory_required")
            label_fdc1e8:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x94e, 
                    "int stbir__resize_allocated(stbir__info *, const void *, int, void *, int, int, "
                "stbir_uint32, stbir_datatype, stbir_edge, stbir_edge, stbir_colorspace, void *, "
                "size_t)", 
                    "(size_t)(unsigned char*)(((unsigned char*)info->encode_buffer) + "
                "info->encode_buffer_size) == (size_t)tempmem + tempmem_size_in_bytes")
            label_fdc208:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x878, "void stbir__buffer_loop_downsample(stbir__info *)", 
                    "!stbir__use_height_upsampling(stbir_info)")
                x0_41, x1_23, x2_19, x3_35, x4_21, x5_6, x6_14, x7_8 = __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x813, "void stbir__buffer_loop_upsample(stbir__info *)", 
                    "stbir__use_height_upsampling(stbir_info)")
                return stbir_resize_float(x0_41, x1_23, x2_19, x3_35, x4_21, x5_6, x6_14, x7_8, 
                    var_220) __tailcall
        else
            float128 v0_14
            float128 v1_4
            float128 v2
            float128 v3
            float128 v4_1
            v0_14, v1_4, v2, v3, v4_1 = (*(x19_1 + (zx.q(x8_1) << 4) + 8))(v8_2)
            v1_4.d = arg9
            
            if (v1_4.d f> v9_1)
                goto label_fdc208
            
            int32_t x20_1 = neg.d(x10_7)
            int32_t x9_27 = arg3 + x10_7
            
            if (x9_27 s> x20_1)
                v9_1 = v0_14.d f/ v8_2.d
                v10_3 = fconvert.s(0.5f)
                v13.d = fconvert.s(1f)
                
                while (true)
                    v0_14.d = arg12
                    v1_4.d = float.s(x20_1)
                    v1_4.d = v1_4.d f+ v10_3
                    v2.d = v1_4.d f- v9_1
                    v1_4.d = v9_1 f+ v1_4.d
                    v2.d = v8_2.d f* v2.d
                    v1_4.d = v8_2.d f* v1_4.d
                    v2.d = v2.d f- v0_14.d
                    v0_14.d = v1_4.d f- v0_14.d
                    v1_4.q = fconvert.d(v2.d)
                    v0_14.q = fconvert.d(v0_14.d)
                    v1_4.q = v1_4.q f+ fconvert.d(0.5)
                    v0_14.q = v0_14.q f+ fconvert.d(-0.5)
                    uint32_t temp0_7 = vcvtmd_s32_f64(v1_4.q)
                    uint32_t temp0_8 = vcvtmd_s32_f64(v0_14.q)
                    
                    if (temp0_8 - temp0_7 s>= var_d4)
                        break
                    
                    if ((temp0_8 & 0x80000000) == 0 && arg7 s> temp0_7)
                        int32_t x9_29 = var_c8_1
                        
                        if ((x9_29 & 0x80000000) == 0)
                            uint32_t x8_38 = var_d0
                            
                            while (x8_38 s< temp0_7)
                                if ((x8_38 & 0x80000000) == 0 && x8_38 s< arg7)
                                    v0_14, v1_4, v2, v3, v4_1 = sub_fe8630(&var_1a0, arg6, 
                                        bytes_2 + sx.q(x8_38) * sx.q(var_178), 
                                        var_c0_1 + (sx.q(x9_29 * (x9_17 s>> 2)) << 2), arg14, 
                                        var_150, var_134 + (var_148 << 1), v0_14, v1_4, v2.q, v3, 
                                        v4_1)
                                    x8_38 = var_d0
                                
                                if (x8_38 == var_cc)
                                    var_c8_1 = 0xffffffff
                                    var_d0.q = 0
                                    break
                                
                                x8_38 += 1
                                x9_29 = (var_c8_1 + 1) s% var_d4
                                var_d0 = x8_38
                                var_c8_1 = x9_29
                        
                        sub_fe66d0(&var_1a0, x20_1, v0_14, v1_4, v2, v3)
                        memset(var_100_1, 0, zx.q(arg14 * arg6) << 0x20 s>> 0x1e)
                        int32_t* x1_4 = var_100_1
                        void* x0_12 = &var_1a0
                        float128 v5_1
                        float128 v6_1
                        float128 v7_1
                        float128 v16_1
                        float128 v17_1
                        float128 v18_1
                        float128 v19_1
                        
                        if (not(arg10 f> v13.d))
                            v0_14, v1_4, v2, v3, v4_1, v5_1, v6_1, v7_1, v8_2, v9_1, v10_3, v16_1, 
                                v17_1, v18_1, v19_1 = sub_fe802c(x0_12, x1_4)
                            
                            if ((var_c8_1 & 0x80000000) == 0)
                                goto label_fdafe4
                            
                            goto label_fdafc0
                        
                        v0_14, v1_4, v2, v3, v4_1, v5_1, v6_1, v7_1, v8_2, v9_1, v10_3, v16_1, 
                            v17_1, v18_1, v19_1 = sub_fe7a9c(x0_12, x1_4)
                        void* x0_13
                        int64_t x2_5
                        
                        if ((var_c8_1 & 0x80000000) != 0)
                        label_fdafc0:
                            x0_13 = var_c0_1
                            x2_5 = sx.q(x9_17)
                            var_c8_1 = 0
                            var_cc = temp0_7
                            var_d0 = temp0_7
                            goto label_fdafd8
                        
                    label_fdafe4:
                        
                        while (var_cc s< temp0_8)
                            uint32_t x9_35 = var_cc + 1
                            var_cc = x9_35
                            int32_t x8_47
                            
                            if ((var_c8_1 & 0x80000000) != 0)
                                x8_47 = 0
                                var_c8_1 = 0
                                var_d0 = x9_35
                            else
                                x8_47 = (var_c8_1 + x9_35 - var_d0) s% var_d4
                                
                                if (x8_47 == var_c8_1)
                                    goto label_fdc068
                            
                            x2_5 = sx.q(x9_17)
                            x0_13 = var_c0_1 + (sx.q((x2_5.d s>> 2) * x8_47) << 2)
                        label_fdafd8:
                            v0_14, v1_4, v2, v3, v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, 
                                v19_1 = memset(x0_13, 0, x2_5)
                        
                        v0_14.d = arg9
                        
                        if (v0_14.d f> v13.d)
                            goto label_fdc128
                        
                        int32_t x0_14 = x10_7 + x20_1
                        void* x9_40 = x8_25 + (sx.q(x0_14) << 3)
                        uint64_t x8_50 = zx.q(*x9_40)
                        int32_t x15_1 = *(x9_40 + 4)
                        
                        if (x8_50.d s<= x15_1)
                            uint64_t x9_41 = zx.q(arg6)
                            int64_t x10_17 = sx.q(arg14)
                            int32_t x0_15 = neg.d(x8_50.d) + x0_14 * var_f4
                            uint64_t x3_4 = x9_41 << 2
                            uint64_t x4_4 = x9_41 << 3
                            uint64_t x21_3 = x9_41 << 4
                            int32_t var_1d8
                            var_1d8.q = var_100_1 + x3_4
                            int64_t x16_1 = x10_17 & 0xffffffff
                            int64_t i_41 = x9_41 & 0xfffffff8
                            int32_t var_1e8
                            var_1e8.q = var_100_1 + x21_3
                            int32_t var_1e0
                            var_1e0.q = var_100_1 + x4_4
                            uint64_t x3_8 = x9_41 * 0xc
                            int64_t i_40 = x9_41 & 0xfffffffc
                            int64_t i_47 = x16_1 & 0xfffffff8
                            int64_t x22_4 = x10_17 << 2
                            int32_t var_1f0
                            var_1f0.q = var_100_1 + x3_8
                            
                            do
                                v0_14.d = *(x9_19 + (sx.q(x0_15 + x8_50.d) << 2))
                                uint64_t x3_10 = zx.q(x16_1.d - 1)
                                int32_t x4_11 =
                                    (var_c8_1 - var_d0 + x8_50.d) s% var_d4 * (x9_17 s>> 2)
                                int64_t x26_3 = sx.q(x4_11)
                                
                                if (x3_10.d u<= 3)
                                    void* x23_3 = var_c0_1 + (sx.q(x4_11) << 2)
                                    
                                    switch (x3_10)
                                        case 0
                                            if (x9_41.d s>= 1)
                                                int64_t i_52
                                                
                                                if (x9_41.d u< 8 || (x23_3 u< var_1d8.q && var_100_1
                                                        u< var_c0_1 + x3_4 + (x26_3 << 2)))
                                                    i_52 = 0
                                                label_fdb1c4:
                                                    int64_t i_27 = x9_41 - i_52
                                                    void* x19_8 = var_c0_1 + ((i_52 + x26_3) << 2)
                                                    int32_t* x4_12 = var_100_1 + (i_52 << 2)
                                                    int64_t i_10
                                                    
                                                    do
                                                        v1_4.d = *x4_12
                                                        x4_12 = &x4_12[1]
                                                        v2.d = *x19_8
                                                        i_10 = i_27
                                                        i_27 -= 1
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        *x19_8 = v1_4.d
                                                        x19_8 += 4
                                                    while (i_10 != 1)
                                                else
                                                    int64_t i_35 = i_41
                                                    v1_4 = vdupq_laneq_s32(v0_14, 0)
                                                    void* x4_16 = var_100_1 + 0x10
                                                    int128_t* x3_26 = var_c0_1 + 0x10 + (x26_3 << 2)
                                                    int64_t i_11
                                                    
                                                    do
                                                        v2 = *(x4_16 - 0x10)
                                                        v3 = *x4_16
                                                        v4_1 = x3_26[-1]
                                                        v5_1 = *x3_26
                                                        x4_16 += 0x20
                                                        i_11 = i_35
                                                        i_35 -= 8
                                                        float128 v2_2 = vmulq_f32(v1_4, v2, 0)
                                                        float128 v3_2 = vmulq_f32(v1_4, v3, 0)
                                                        v2 = vaddq_f32(v4_1, v2_2)
                                                        v3 = vaddq_f32(v5_1, v3_2)
                                                        x3_26[-1] = v2
                                                        *x3_26 = v3
                                                        x3_26 = &x3_26[2]
                                                    while (i_11 != 8)
                                                    i_52 = i_41
                                                    
                                                    if (i_52 != x9_41)
                                                        goto label_fdb1c4
                                        case 1
                                            if (x9_41.d s>= 1)
                                                int64_t i_53
                                                
                                                if (x9_41.d u< 4 || (x23_3 u< var_1e0.q && var_100_1
                                                        u< var_c0_1 + x4_4 + (x26_3 << 2)))
                                                    i_53 = 0
                                                label_fdb228:
                                                    int64_t i_28 = x9_41 - i_53
                                                    int32_t* x19_10 =
                                                        var_c0_1 + 4 + ((x26_3 + (i_53 << 1)) << 2)
                                                    int32_t* x23_4 = var_100_1 + 4 + (i_53 << 3)
                                                    int64_t i_12
                                                    
                                                    do
                                                        v1_4.d = x23_4[-1]
                                                        v2.d = x19_10[-1]
                                                        i_12 = i_28
                                                        i_28 -= 1
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        x19_10[-1] = v1_4.d
                                                        v1_4.d = *x23_4
                                                        x23_4 = &x23_4[2]
                                                        v2.d = *x19_10
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        *x19_10 = v1_4.d
                                                        x19_10 = &x19_10[2]
                                                    while (i_12 != 1)
                                                else
                                                    v1_4 = vdupq_laneq_s32(v0_14, 0)
                                                    int64_t i_31 = i_40
                                                    void* x19_21 = var_100_1
                                                    int64_t i_13
                                                    
                                                    do
                                                        v2.d = *x19_21
                                                        v3.d = *(x19_21 + 4)
                                                        v2:4.d = *(x19_21 + 8)
                                                        v3:4.d = *(x19_21 + 0xc)
                                                        v2:8.d = *(x19_21 + 0x10)
                                                        v3:8.d = *(x19_21 + 0x14)
                                                        v2:0xc.d = *(x19_21 + 0x18)
                                                        v3:0xc.d = *(x19_21 + 0x1c)
                                                        x19_21 += 0x20
                                                        v4_1.d = *x23_3
                                                        v5_1.d = *(x23_3 + 4)
                                                        v4_1:4.d = *(x23_3 + 8)
                                                        v5_1:4.d = *(x23_3 + 0xc)
                                                        v4_1:8.d = *(x23_3 + 0x10)
                                                        v5_1:8.d = *(x23_3 + 0x14)
                                                        v4_1:0xc.d = *(x23_3 + 0x18)
                                                        v5_1:0xc.d = *(x23_3 + 0x1c)
                                                        i_13 = i_31
                                                        i_31 -= 4
                                                        float128 v6_2 = vmulq_f32(v1_4, v2, 0)
                                                        v2 = vmulq_f32(v1_4, v3, 0)
                                                        v6_1 = vaddq_f32(v4_1, v6_2)
                                                        v7_1 = vaddq_f32(v5_1, v2)
                                                        *x23_3 = v6_1.d
                                                        *(x23_3 + 4) = v7_1.d
                                                        *(x23_3 + 8) = v6_1:4.d
                                                        *(x23_3 + 0xc) = v7_1:4.d
                                                        *(x23_3 + 0x10) = v6_1:8.d
                                                        *(x23_3 + 0x14) = v7_1:8.d
                                                        *(x23_3 + 0x18) = v6_1:0xc.d
                                                        *(x23_3 + 0x1c) = v7_1:0xc.d
                                                        x23_3 += 0x20
                                                    while (i_13 != 4)
                                                    i_53 = i_40
                                                    
                                                    if (i_40 != x9_41)
                                                        goto label_fdb228
                                        case 2
                                            if (x9_41.d s>= 1)
                                                int64_t i_54
                                                
                                                if (x9_41.d u< 4 || (x23_3 u< var_1f0.q && var_100_1
                                                        u< var_c0_1 + x3_8 + (x26_3 << 2)))
                                                    i_54 = 0
                                                label_fdb298:
                                                    int64_t i_29 = x9_41 - i_54
                                                    int64_t x4_13 = i_54 * 3
                                                    int32_t* x19_12 =
                                                        var_c0_1 + 4 + ((x4_13 + x26_3) << 2)
                                                    int32_t* x23_5 = var_100_1 + 8 + (x4_13 << 2)
                                                    int64_t i_14
                                                    
                                                    do
                                                        v1_4.d = x23_5[-2]
                                                        v2.d = x19_12[-1]
                                                        i_14 = i_29
                                                        i_29 -= 1
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        x19_12[-1] = v1_4.d
                                                        v1_4.d = x23_5[-1]
                                                        v2.d = *x19_12
                                                        v3.d = x19_12[1]
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        *x19_12 = v1_4.d
                                                        v1_4.d = *x23_5
                                                        x23_5 = &x23_5[3]
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v3.d f+ v1_4.d
                                                        x19_12[1] = v1_4.d
                                                        x19_12 = &x19_12[3]
                                                    while (i_14 != 1)
                                                else
                                                    v1_4 = vdupq_laneq_s32(v0_14, 0)
                                                    int64_t i_32 = i_40
                                                    void* x19_22 = var_100_1
                                                    int64_t i_15
                                                    
                                                    do
                                                        v2.d = *x19_22
                                                        v3.d = *(x19_22 + 4)
                                                        v4_1.d = *(x19_22 + 8)
                                                        v2:4.d = *(x19_22 + 0xc)
                                                        v3:4.d = *(x19_22 + 0x10)
                                                        v4_1:4.d = *(x19_22 + 0x14)
                                                        v2:8.d = *(x19_22 + 0x18)
                                                        v3:8.d = *(x19_22 + 0x1c)
                                                        v4_1:8.d = *(x19_22 + 0x20)
                                                        v2:0xc.d = *(x19_22 + 0x24)
                                                        v3:0xc.d = *(x19_22 + 0x28)
                                                        v4_1:0xc.d = *(x19_22 + 0x2c)
                                                        x19_22 += 0x30
                                                        v5_1.d = *x23_3
                                                        v6_1.d = *(x23_3 + 4)
                                                        v7_1.d = *(x23_3 + 8)
                                                        v5_1:4.d = *(x23_3 + 0xc)
                                                        v6_1:4.d = *(x23_3 + 0x10)
                                                        v7_1:4.d = *(x23_3 + 0x14)
                                                        v5_1:8.d = *(x23_3 + 0x18)
                                                        v6_1:8.d = *(x23_3 + 0x1c)
                                                        v7_1:8.d = *(x23_3 + 0x20)
                                                        v5_1:0xc.d = *(x23_3 + 0x24)
                                                        v6_1:0xc.d = *(x23_3 + 0x28)
                                                        v7_1:0xc.d = *(x23_3 + 0x2c)
                                                        i_15 = i_32
                                                        i_32 -= 4
                                                        v16_1 = vmulq_f32(v1_4, v2, 0)
                                                        v17_1 = vmulq_f32(v1_4, v3, 0)
                                                        v18_1 = vaddq_f32(v5_1, v16_1)
                                                        v2 = vmulq_f32(v1_4, v4_1, 0)
                                                        v19_1 = vaddq_f32(v6_1, v17_1)
                                                        float128 v20_1 = vaddq_f32(v7_1, v2)
                                                        *x23_3 = v18_1.d
                                                        *(x23_3 + 4) = v19_1.d
                                                        *(x23_3 + 8) = v20_1.d
                                                        *(x23_3 + 0xc) = v18_1:4.d
                                                        *(x23_3 + 0x10) = v19_1:4.d
                                                        *(x23_3 + 0x14) = v20_1:4.d
                                                        *(x23_3 + 0x18) = v18_1:8.d
                                                        *(x23_3 + 0x1c) = v19_1:8.d
                                                        *(x23_3 + 0x20) = v20_1:8.d
                                                        *(x23_3 + 0x24) = v18_1:0xc.d
                                                        *(x23_3 + 0x28) = v19_1:0xc.d
                                                        *(x23_3 + 0x2c) = v20_1:0xc.d
                                                        x23_3 += 0x30
                                                    while (i_15 != 4)
                                                    i_54 = i_40
                                                    
                                                    if (i_40 != x9_41)
                                                        goto label_fdb298
                                        case 3
                                            if (x9_41.d s>= 1)
                                                int64_t i_55
                                                
                                                if (x9_41.d u< 4 || (x23_3 u< var_1e8.q && var_100_1
                                                        u< var_c0_1 + x21_3 + (x26_3 << 2)))
                                                    i_55 = 0
                                                label_fdb32c:
                                                    int64_t i_30 = x9_41 - i_55
                                                    void* x23_6 = var_100_1 + 8 + (i_55 << 4)
                                                    int32_t* x19_14 =
                                                        var_c0_1 + 8 + ((x26_3 + (i_55 << 2)) << 2)
                                                    int64_t i_16
                                                    
                                                    do
                                                        v1_4.d = *(x23_6 - 8)
                                                        v2.d = x19_14[-2]
                                                        v3.d = x19_14[-1]
                                                        i_16 = i_30
                                                        i_30 -= 1
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        x19_14[-2] = v1_4.d
                                                        v1_4.d = *(x23_6 - 4)
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v3.d f+ v1_4.d
                                                        x19_14[-1] = v1_4.d
                                                        v1_4.d = *x23_6
                                                        v2.d = *x19_14
                                                        v3.d = x19_14[1]
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v2.d f+ v1_4.d
                                                        *x19_14 = v1_4.d
                                                        v1_4.d = *(x23_6 + 4)
                                                        x23_6 += 0x10
                                                        v1_4.d = v0_14.d f* v1_4.d
                                                        v1_4.d = v3.d f+ v1_4.d
                                                        x19_14[1] = v1_4.d
                                                        x19_14 = &x19_14[4]
                                                    while (i_16 != 1)
                                                else
                                                    v1_4 = vdupq_laneq_s32(v0_14, 0)
                                                    int64_t i_33 = i_40
                                                    void* x19_23 = var_100_1
                                                    int64_t i_17
                                                    
                                                    do
                                                        v2.d = *x19_23
                                                        v3.d = *(x19_23 + 4)
                                                        v4_1.d = *(x19_23 + 8)
                                                        v5_1.d = *(x19_23 + 0xc)
                                                        v2:4.d = *(x19_23 + 0x10)
                                                        v3:4.d = *(x19_23 + 0x14)
                                                        v4_1:4.d = *(x19_23 + 0x18)
                                                        v5_1:4.d = *(x19_23 + 0x1c)
                                                        v2:8.d = *(x19_23 + 0x20)
                                                        v3:8.d = *(x19_23 + 0x24)
                                                        v4_1:8.d = *(x19_23 + 0x28)
                                                        v5_1:8.d = *(x19_23 + 0x2c)
                                                        v2:0xc.d = *(x19_23 + 0x30)
                                                        v3:0xc.d = *(x19_23 + 0x34)
                                                        v4_1:0xc.d = *(x19_23 + 0x38)
                                                        v5_1:0xc.d = *(x19_23 + 0x3c)
                                                        x19_23 += 0x40
                                                        v16_1.d = *x23_3
                                                        v17_1.d = *(x23_3 + 4)
                                                        v18_1.d = *(x23_3 + 8)
                                                        v19_1.d = *(x23_3 + 0xc)
                                                        v16_1:4.d = *(x23_3 + 0x10)
                                                        v17_1:4.d = *(x23_3 + 0x14)
                                                        v18_1:4.d = *(x23_3 + 0x18)
                                                        v19_1:4.d = *(x23_3 + 0x1c)
                                                        v16_1:8.d = *(x23_3 + 0x20)
                                                        v17_1:8.d = *(x23_3 + 0x24)
                                                        v18_1:8.d = *(x23_3 + 0x28)
                                                        v19_1:8.d = *(x23_3 + 0x2c)
                                                        v16_1:0xc.d = *(x23_3 + 0x30)
                                                        v17_1:0xc.d = *(x23_3 + 0x34)
                                                        v18_1:0xc.d = *(x23_3 + 0x38)
                                                        v19_1:0xc.d = *(x23_3 + 0x3c)
                                                        i_17 = i_33
                                                        i_33 -= 4
                                                        float128 v6_3 = vmulq_f32(v1_4, v2, 0)
                                                        v7_1 = vmulq_f32(v1_4, v3, 0)
                                                        float128 v20_2 = vmulq_f32(v1_4, v4_1, 0)
                                                        v2 = vmulq_f32(v1_4, v5_1, 0)
                                                        v3 = vaddq_f32(v16_1, v6_3)
                                                        v4_1 = vaddq_f32(v17_1, v7_1)
                                                        v5_1 = vaddq_f32(v18_1, v20_2)
                                                        v6_1 = vaddq_f32(v19_1, v2)
                                                        *x23_3 = v3.d
                                                        *(x23_3 + 4) = v4_1.d
                                                        *(x23_3 + 8) = v5_1.d
                                                        *(x23_3 + 0xc) = v6_1.d
                                                        *(x23_3 + 0x10) = v3:4.d
                                                        *(x23_3 + 0x14) = v4_1:4.d
                                                        *(x23_3 + 0x18) = v5_1:4.d
                                                        *(x23_3 + 0x1c) = v6_1:4.d
                                                        *(x23_3 + 0x20) = v3:8.d
                                                        *(x23_3 + 0x24) = v4_1:8.d
                                                        *(x23_3 + 0x28) = v5_1:8.d
                                                        *(x23_3 + 0x2c) = v6_1:8.d
                                                        *(x23_3 + 0x30) = v3:0xc.d
                                                        *(x23_3 + 0x34) = v4_1:0xc.d
                                                        *(x23_3 + 0x38) = v5_1:0xc.d
                                                        *(x23_3 + 0x3c) = v6_1:0xc.d
                                                        x23_3 += 0x40
                                                    while (i_17 != 4)
                                                    i_55 = i_40
                                                    
                                                    if (i_40 != x9_41)
                                                        goto label_fdb32c
                                else if ((((x16_1.d s< 1 ? 1 : 0) | (x9_41.d s< 1 ? 1 : 0)) & 1)
                                        == 0)
                                    int64_t x3_23 = x26_3 << 2
                                    int64_t x23_7 = 0
                                    int64_t fp_3 = 0
                                    v1_4 = vdupq_laneq_s32(v0_14, 0)
                                    int128_t* x21_7 = var_c0_1 + 0x10 + x3_23
                                    void* x4_15 = var_100_1 + 0x10
                                    
                                    do
                                        int64_t x19_15
                                        
                                        if (x10_17.d u>= 8)
                                            x19_15 = fp_3 * x10_17
                                        
                                        int64_t i_57
                                        
                                        if (x10_17.d u>= 8 && (var_c0_1 + ((x19_15 + x26_3) << 2)
                                                u>= var_100_1 + ((x19_15 + x16_1) << 2)
                                                || var_100_1 + (x19_15 << 2)
                                                u>= var_c0_1 + ((x16_1 + x26_3 + x19_15) << 2)))
                                            int64_t i_39 = i_47
                                            void* x19_20 = x4_15
                                            int128_t* x24_7 = x21_7
                                            int64_t i_18
                                            
                                            do
                                                v2 = *(x19_20 - 0x10)
                                                v3 = *x19_20
                                                v4_1 = x24_7[-1]
                                                v5_1 = *x24_7
                                                i_18 = i_39
                                                i_39 -= 8
                                                x19_20 += 0x20
                                                float128 v2_1 = vmulq_f32(v1_4, v2, 0)
                                                float128 v3_1 = vmulq_f32(v1_4, v3, 0)
                                                v2 = vaddq_f32(v4_1, v2_1)
                                                v3 = vaddq_f32(v5_1, v3_1)
                                                x24_7[-1] = v2
                                                *x24_7 = v3
                                                x24_7 = &x24_7[2]
                                            while (i_18 != 8)
                                            i_57 = i_47
                                            
                                            if (i_47 != x16_1)
                                                goto label_fdb414
                                        else
                                            i_57 = 0
                                        label_fdb414:
                                            int64_t i_38 = x16_1 - i_57
                                            int64_t x24_5 = (i_57 + x23_7) << 2
                                            void* x19_19 = var_c0_1 + x3_23 + x24_5
                                            int32_t* x24_6 = var_100_1 + x24_5
                                            int64_t i_19
                                            
                                            do
                                                v2.d = *x24_6
                                                x24_6 = &x24_6[1]
                                                v3.d = *x19_19
                                                i_19 = i_38
                                                i_38 -= 1
                                                v2.d = v0_14.d f* v2.d
                                                v2.d = v3.d f+ v2.d
                                                *x19_19 = v2.d
                                                x19_19 += 4
                                            while (i_19 != 1)
                                        fp_3 += 1
                                        x21_7 += x22_4
                                        x4_15 += x22_4
                                        x23_7 += x10_17
                                    while (fp_3 != x9_41)
                                
                                x8_50 += 1
                            while (x15_1 + 1 != x8_50.d)
                    
                    x20_1 += 1
                    
                    if (x20_1 == x9_27)
                        goto label_fdbf44
                
                goto label_fdc0c8
            
        label_fdbf44:
            int32_t x9_71 = var_c8_1
            
            if ((x9_71 & 0x80000000) == 0)
                uint32_t x8_72 = var_d0
                
                if (x8_72 s< arg7)
                    int32_t x10_37 = arg7
                    
                    if ((x8_72 & 0x80000000) != 0)
                        goto label_fdbfc4
                    
                    while (true)
                        if (x8_72 s< x10_37)
                            v0_14, v1_4, v2, v3, v4_1 = sub_fe8630(&var_1a0, arg6, 
                                bytes_2 + sx.q(x8_72) * sx.q(var_178), 
                                var_c0_1 + (sx.q(x9_71 * (x9_17 s>> 2)) << 2), arg14, var_150, 
                                var_134 + (var_148 << 1), v0_14, v1_4, v2.q, v3, v4_1)
                            x8_72 = var_d0
                        
                    label_fdbfc4:
                        
                        if (x8_72 == var_cc)
                            var_d0.q = 0
                            int32_t var_c8_2 = 0xffffffff
                            break
                        
                        x8_72 += 1
                        x9_71 = (var_c8_1 + 1) s% var_d4
                        var_d0 = x8_72
                        var_c8_1 = x9_71
                        
                        if (x8_72 s>= arg7)
                            goto label_fdc00c
                        
                        x10_37 = arg7
                        
                        if ((x8_72 & 0x80000000) != 0)
                            goto label_fdbfc4
    label_fdc00c:
        x11_1 = x0_3
        x20 = 1
    else
    label_fda9f4:
        
        if (x8_2 s>= 0x41)
            goto label_fdc148
        
        uint64_t x25_1 = zx.q(x9_1)
        
        if (x25_1.d u>= 6)
            goto label_fdc168
        
        if (x8_1 u>= 6)
            goto label_fdc188
        
        int32_t x27_1
        
        if (arg15 s< 0)
            x27_1 = arg16 | 3
        else
            x27_1 = arg16
        
        if ((not.d(x27_1) & 3) != 0 && ((arg15 & 0x80000000) != 0 || x8_2 s<= arg15))
            goto label_fdc1a8
        
        if (x8_2 s> arg15)
            if (x0_5 u> bytes.d)
                goto label_fdc1c8
            
            memset(x11_1, 0, bytes)
            var_148 = x19_1.d
            x19_1 = &data_1180540
            int64_t x8_4 = (&data_1180548)[x25_1 * 2]
            v8_1.d = fconvert.s(1f)
            float v1 = v8_1.d f/ arg10
            float v0
            
            v0 = arg10 f<= v8_1.d ? arg10 : v1
            
            var_1a0 = arg1
            int32_t var_190_1 = x24
            bytes_2 = bytes_1
            var_178 = x22
            var_150 = arg15
            int32_t var_14c_1 = x27_1
            int32_t var_13c_1 = arg20
            int32_t var_138_1 = arg21
            var_134 = arg22
            float v0_1 = x8_4(v0, v1)
            uint32_t var_f8_1 = vcvtps_s32_f32(v0_1 + v0_1)
            float v1_1 = v8_1.d f/ arg9
            
            v0_1 = arg9 f<= v8_1.d ? arg9 : v1_1
            
            v0_2 = (&data_1180548)[zx.q(x8_1) * 2](v0_1, v1_1)
            uint64_t x8_8 = zx.q(x9_1)
            var_f4 = vcvtps_s32_f32(v0_2 + v0_2)
            
            if (x8_8.d == 0)
                goto label_fdc0e8
            
            if (x8_8.d u>= 6)
                goto label_fdc108
            
            v8_1.d = arg10
            x8_10 = (&data_1180548)[x8_8 * 2]
            bytes_1 = bytes
            v0_2 = fconvert.s(1f)
            
            if (v8_1.d f> v0_2)
                goto label_fdaba8
            
            v0_4 = x8_10(v8_1)
            v0_4 = (v0_4 + v0_4) f/ v8_1.d
            goto label_fdabb0
        
        x20 = 0
    free(x11_1)

return zx.q(x20)
