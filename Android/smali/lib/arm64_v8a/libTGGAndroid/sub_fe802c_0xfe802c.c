// 函数: sub_fe802c
// 地址: 0xfe802c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v0
v0.d = *(arg1 + 0x44)
uint128_t v1
v1.d = fconvert.s(1f)

if (not(v0.d f> v1.d))
    uint64_t x12_1 = zx.q(*(arg1 + 0x4c))
    int32_t x11_1 = *(arg1 + 0xb8)
    int64_t x2_1 = *(arg1 + 0x98)
    int64_t x8_1 = *(arg1 + 0x70)
    int64_t x9_1 = *(arg1 + 0x78)
    int32_t x10_1 = *(arg1 + 0xa8)
    uint64_t x13_1 = zx.q(x12_1.d - 1)
    int32_t x14_1 = x11_1 * x12_1.d
    int32_t x15_2 = *(arg1 + 8) + (x11_1 << 1)
    float128 v2
    float128 v3
    
    if (x13_1.d u> 3)
        if (x15_2 s< 1)
            return 
        
        if (x12_1.d s<= 0)
            int32_t x11_2 = 0
            int64_t x12_3 = 0
            int32_t x14_7
            int32_t x15_8
            
            while (true)
                int32_t* x15_7 = x8_1 + (x12_3 << 3)
                x14_7 = *x15_7
                x15_8 = x15_7[1]
                
                if (x14_7 s<= x15_8)
                    break
                
            label_fe850c:
                x12_3 += 1
                x11_2 += x10_1
                
                if (x12_3 == zx.q(x15_2))
                    return 
            
            int32_t x14_9 = x15_8 - x14_7 + 1
            int32_t x15_9 = x11_2
            
            while (true)
                v0.d = *(x9_1 + (sx.q(x15_9) << 2))
                
                if (v0.d f== 0f)
                    break
                
                int32_t temp0_1 = x14_9
                x14_9 -= 1
                x15_9 += 1
                
                if (temp0_1 == 1)
                    goto label_fe850c
        else
            int64_t x0_3 = sx.q(x14_1)
            int64_t x17_9 = x2_1 + (x0_3 << 2)
            int64_t x13_6 = 0
            int64_t i_4 = x12_1 & 0xfffffff8
            int32_t x7_1 = 0 - x11_1 * x12_1.d
            int64_t x4_9
            int64_t x5_4
            int32_t x19_1
            
            while (true)
                int32_t* x4_8 = x8_1 + (x13_6 << 3)
                x19_1 = x4_8[1]
                x4_9 = sx.q(x7_1)
                x5_4 = sx.q(*x4_8)
                
                if (x5_4.d s<= x19_1)
                    break
                
            label_fe83b8:
                x13_6 += 1
                x7_1 = x4_9.d + x12_1.d
                
                if (x13_6 == zx.q(x15_2))
                    return 
            
            int64_t x20_1 = x12_1 * x5_4
            int32_t x21_2 = neg.d(x5_4.d) + x10_1 * x13_6.d
            int64_t x24_2 = zx.q(x12_1.d * (x13_6.d - x11_1)) << 0x20 s>> 0x1e
            int64_t x6_8 = 0
            int64_t x22_3 = ((x5_4 << 2) + 4) * x12_1
            void* x25_1 = &arg2[4 + x20_1]
            int64_t x26_1 = x20_1
            
            while (true)
                v0.d = *(x9_1 + (sx.q(x21_2 + x5_4.d) << 2))
                
                if (v0.d f== 0f)
                    break
                
                int64_t x27_2
                
                if (x12_1.d u>= 8)
                    x27_2 = x6_8 * x12_1
                
                int64_t i_5
                
                if (x12_1.d u>= 8 && (&arg2[x20_1 + x27_2] u>= x2_1 + ((x0_3 + x12_1) << 2) + x24_2
                        || &arg2[x27_2] + x22_3 u<= x17_9 + x24_2))
                    v1 = vdupq_laneq_s32(v0, 0)
                    void* x27_7 = x25_1
                    int128_t* x28_5 = x17_9 + 0x10 + (sx.q(x7_1) << 2)
                    int64_t i_3 = i_4
                    int64_t i
                    
                    do
                        v2 = x28_5[-1]
                        v3 = *x28_5
                        float128 v4 = *(x27_7 - 0x10)
                        float128 v5 = *x27_7
                        i = i_3
                        i_3 -= 8
                        x28_5 = &x28_5[2]
                        float128 v2_1 = vmulq_f32(v1, v2, 0)
                        float128 v3_1 = vmulq_f32(v1, v3, 0)
                        v2 = vaddq_f32(v4, v2_1)
                        v3 = vaddq_f32(v5, v3_1)
                        *(x27_7 - 0x10) = v2
                        *x27_7 = v3
                        x27_7 += 0x20
                    while (i != 8)
                    i_5 = i_4
                    
                    if (i_4 != x12_1)
                        goto label_fe8484
                else
                    i_5 = 0
                label_fe8484:
                    void* x27_6 = &arg2[i_5 + x26_1]
                    int32_t* x28_4 = x17_9 + ((x4_9 + i_5) << 2)
                    int64_t i_2 = x12_1 - i_5
                    int64_t i_1
                    
                    do
                        v1.d = *x28_4
                        x28_4 = &x28_4[1]
                        v2.d = *x27_6
                        i_1 = i_2
                        i_2 -= 1
                        v1.d = v0.d f* v1.d
                        v1.d = v2.d f+ v1.d
                        *x27_6 = v1.d
                        x27_6 += 4
                    while (i_1 != 1)
                x5_4 += 1
                x6_8 += 1
                x25_1 += x12_1 << 2
                x26_1 += x12_1
                
                if (x19_1 + 1 == x5_4.d)
                    goto label_fe83b8
    else
        int64_t x12_2 = x2_1 + (sx.q(x14_1) << 2)
        
        switch (x13_1)
            case 0
                if (x15_2 s< 1)
                    return 
                
                int32_t x13_2 = 0
                int64_t x14_2 = 0
                int64_t x17_3
                
                while (true)
                    int32_t* x16_2 = x8_1 + (x14_2 << 3)
                    arg1 = zx.q(x16_2[1])
                    x17_3 = sx.q(*x16_2)
                    
                    if (x17_3.d s<= arg1.d)
                        break
                    
                label_fe80b4:
                    x14_2 += 1
                    x13_2 += x10_1
                    
                    if (x14_2 == zx.q(x15_2))
                        return 
                
                void* x16_3 = &arg2[x17_3]
                arg1 = zx.q(arg1.d - x17_3.d + 1)
                int32_t x2_3 = x13_2
                
                while (true)
                    v0.d = *(x9_1 + (sx.q(x2_3) << 2))
                    
                    if (v0.d f== 0f)
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x610, 
                            "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                            "coefficient != 0", v0)
                        break
                    
                    v1.d = *(x12_2 + (sx.q(x14_2.d - x11_1) << 2))
                    v2.d = *x16_3
                    int32_t temp1_1 = arg1.d
                    arg1 = zx.q(arg1.d - 1)
                    x2_3 += 1
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    *x16_3 = v0.d
                    x16_3 += 4
                    
                    if (temp1_1 == 1)
                        goto label_fe80b4
                
            label_fe85ac:
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x625, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x63b, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x652, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
            case 1
                if (x15_2 s< 1)
                    return 
                
                int32_t x13_3 = 0
                int64_t x14_3 = 0
                int32_t x17_5
                
                while (true)
                    int32_t* x16_4 = x8_1 + (x14_3 << 3)
                    x17_5 = *x16_4
                    arg1 = zx.q(x16_4[1])
                    
                    if (x17_5 s<= arg1.d)
                        break
                    
                label_fe8138:
                    x14_3 += 1
                    x13_3 += x10_1
                    
                    if (x14_3 == zx.q(x15_2))
                        return 
                
                int64_t x0_1 = zx.q(x14_3.d - x11_1) << 0x20 s>> 0x1f
                int32_t x16_5 = x17_5 << 1
                int32_t x2_5 = arg1.d - x17_5 + 1
                int32_t x3_2 = x13_3
                
                while (true)
                    v0.d = *(x9_1 + (sx.q(x3_2) << 2))
                    
                    if (v0.d f== 0f)
                        break
                    
                    v1.d = *(x12_2 + (sx.q(x0_1.d) << 2))
                    int64_t x4_1 = zx.q(x16_5) << 0x20 s>> 0x1e
                    v2.d = *(arg2 + x4_1)
                    x3_2 += 1
                    v1.d = v0.d f* v1.d
                    int32_t temp2_1 = x2_5
                    x2_5 -= 1
                    v1.d = v2.d f+ v1.d
                    *(arg2 + x4_1) = v1.d
                    int64_t x4_3 = zx.q(x16_5 + 1) << 0x20 s>> 0x1e
                    v1.d = *(x12_2 + ((x0_1 | 1) << 2))
                    v2.d = *(arg2 + x4_3)
                    x16_5 += 2
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    *(arg2 + x4_3) = v0.d
                    
                    if (temp2_1 == 1)
                        goto label_fe8138
                
                goto label_fe85ac
            case 2
                if (x15_2 s< 1)
                    return 
                
                int32_t x13_4 = 0
                int64_t x14_4 = 0
                int64_t x1_1
                int32_t x2_6
                
                while (true)
                    arg1 = x8_1 + (x14_4 << 3)
                    x2_6 = *(arg1 + 4)
                    x1_1 = sx.q(*arg1)
                    
                    if (x1_1.d s<= x2_6)
                        break
                    
                label_fe81ec:
                    x14_4 += 1
                    x13_4 += x10_1
                    
                    if (x14_4 == zx.q(x15_2))
                        return 
                
                arg1 = &arg2[2] + x1_1 * 0xc
                int64_t x2_7 = sx.q(x14_4.d - x11_1) * 3
                int32_t x4_5 = x2_6 - x1_1.d + 1
                int64_t x2_8 = sx.q(x2_7.d)
                int32_t x5_1 = x13_4
                
                while (true)
                    v0.d = *(x9_1 + (sx.q(x5_1) << 2))
                    
                    if (v0.d f== 0f)
                        break
                    
                    v1.d = *(x12_2 + (x2_8 << 2))
                    v2.d = *(arg1 - 8)
                    v3.d = *(arg1 - 4)
                    int32_t temp3_1 = x4_5
                    x4_5 -= 1
                    x5_1 += 1
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    *(arg1 - 8) = v1.d
                    v1.d = *(x12_2 + ((x2_7 + 1) << 2))
                    v2.d = *arg1
                    v1.d = v0.d f* v1.d
                    v1.d = v3.d f+ v1.d
                    *(arg1 - 4) = v1.d
                    v1.d = *(x12_2 + ((x2_8 + 2) << 2))
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    *arg1 = v0.d
                    arg1 += 0xc
                    
                    if (temp3_1 == 1)
                        goto label_fe81ec
                
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x63b, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x652, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
            case 3
                if (x15_2 s< 1)
                    return 
                
                int32_t x13_5 = 0
                int64_t x14_5 = 0
                int32_t x17_7
                
                while (true)
                    int32_t* x16_7 = x8_1 + (x14_5 << 3)
                    x17_7 = *x16_7
                    arg1 = zx.q(x16_7[1])
                    
                    if (x17_7 s<= arg1.d)
                        break
                    
                label_fe82a4:
                    x14_5 += 1
                    x13_5 += x10_1
                    
                    if (x14_5 == zx.q(x15_2))
                        return 
                
                int64_t x0_2 = zx.q(x14_5.d - x11_1) << 0x20 s>> 0x1e
                int32_t x16_8 = x17_7 << 2
                int32_t x4_7 = arg1.d - x17_7 + 1
                arg1 = sx.q(x0_2.d)
                int32_t x5_2 = x13_5
                
                while (true)
                    v0.d = *(x9_1 + (sx.q(x5_2) << 2))
                    
                    if (v0.d f== 0f)
                        break
                    
                    v1.d = *(x12_2 + (arg1 << 2))
                    int64_t x6_1 = zx.q(x16_8) << 0x20 s>> 0x1e
                    v2.d = *(arg2 + x6_1)
                    x5_2 += 1
                    v1.d = v0.d f* v1.d
                    int32_t temp4_1 = x4_7
                    x4_7 -= 1
                    v1.d = v2.d f+ v1.d
                    *(arg2 + x6_1) = v1.d
                    int64_t x6_3 = zx.q(x16_8 + 1) << 0x20 s>> 0x1e
                    v1.d = *(x12_2 + ((x0_2 | 1) << 2))
                    v2.d = *(arg2 + x6_3)
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    *(arg2 + x6_3) = v1.d
                    int64_t x6_5 = zx.q(x16_8 + 2) << 0x20 s>> 0x1e
                    v1.d = *(x12_2 + ((arg1 | 2) << 2))
                    v2.d = *(arg2 + x6_5)
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    *(arg2 + x6_5) = v1.d
                    int64_t x6_7 = zx.q(x16_8 + 3) << 0x20 s>> 0x1e
                    v1.d = *(x12_2 + ((arg1 | 3) << 2))
                    v2.d = *(arg2 + x6_7)
                    x16_8 += 4
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    *(arg2 + x6_7) = v0.d
                    
                    if (temp4_1 == 1)
                        goto label_fe82a4
                
                __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                    0x652, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
                    "coefficient != 0")
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x66b, "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
        "coefficient != 0")

void* x0_5
int32_t x1_4
char* x2_12
int32_t* x3_7
int32_t x4_10
int32_t x5_5
int32_t x6_9
int128_t v0_1
int128_t v1_1
double v2_2
float128 v3_2
float128 v4_1
x0_5, x1_4, x2_12, x3_7, x4_10, x5_5, x6_9, v0_1, v1_1, v2_2, v3_2, v4_1 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 0x5fe, 
    "void stbir__resample_horizontal_downsample(stbir__info *, float *)", 
    "!stbir__use_width_upsampling(stbir_info)")
return sub_fe8630(x0_5, x1_4, x2_12, x3_7, x4_10, x5_5, x6_9, v0_1, v1_1, v2_2, v3_2, v4_1)
    __tailcall
