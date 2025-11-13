// 函数: sub_fe7a9c
// 地址: 0xfe7a9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x20))

if (x8.d s< 1)
    return 

int64_t x11_1 = sx.q(*(arg1 + 0x4c))
int64_t x12_1 = *(arg1 + 0x98)
int64_t x13_1 = *(arg1 + 0x70)
int64_t x14_1 = *(arg1 + 0x78)
int64_t x2_1 = x11_1 & 0xffffffff
int32_t x15_1 = *(arg1 + 0xa8)
int64_t x16_2 = sx.q(*(arg1 + 0xb8)) * x11_1
int64_t x5_1 = x12_1 + (x16_2 << 2)
int32_t x22_1 = 0
int32_t x9_1 = 0
int64_t x10_1 = 0
int64_t j_4 = x2_1 & 0xfffffff8

do
    int32_t* x6_1 = x13_1 + (x10_1 << 3)
    int32_t x6_2 = x6_1[1]
    int64_t x16_7 = sx.q(*x6_1)
    void* x0
    int32_t* x1
    
    if (x6_2 s< x16_7.d)
    label_fe7fa8:
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b2, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", "n1 >= n0")
    label_fe7fc8:
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b3, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
            "n0 >= -stbir_info->horizontal_filter_pixel_margin")
    label_fe7fe8:
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b4, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
            "n1 >= -stbir_info->horizontal_filter_pixel_margin")
    label_fe8008:
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b5, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
            "n0 < stbir_info->input_w + stbir_info->horizontal_filter_pixel_margin")
        x0, x1 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b6, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
            "n1 < stbir_info->input_w + stbir_info->horizontal_filter_pixel_margin")
        return sub_fe802c(x0, x1) __tailcall
    
    int32_t x7_1 = *(arg1 + 0xb8)
    int32_t x19_1 = neg.d(x7_1)
    
    if (x16_7.d s< x19_1)
        goto label_fe7fc8
    
    if (x6_2 s< x19_1)
        goto label_fe7fe8
    
    int32_t x7_2 = *(arg1 + 8) + x7_1
    
    if (x16_7.d s>= x7_2)
        goto label_fe8008
    
    if (x6_2 s>= x7_2)
        x0, x1 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x5b6, "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
            "n1 < stbir_info->input_w + stbir_info->horizontal_filter_pixel_margin")
        return sub_fe802c(x0, x1) __tailcall
    
    uint64_t x7_3 = zx.q(x11_1.d - 1)
    int64_t x23_1 = sx.q(x22_1)
    int32_t* x24_1 = x14_1 + (sx.q(x9_1) << 2)
    int32_t x26_1 = x2_1.d * x10_1.d
    uint128_t v0
    uint128_t v1
    float128 v2
    
    if (x7_3.d u<= 3)
        switch (x7_3)
            case 0
                uint64_t i_6 = zx.q(x6_2 - x16_7.d + 1)
                int32_t* x16_8 = x5_1 + (x16_7 << 2)
                uint64_t i
                
                do
                    v0.d = *x24_1
                    
                    if (v0.d f== 0f)
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x5be, 
                            "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
                            "coefficient != 0", v0)
                        goto label_fe7f28
                    
                    v1.d = *x16_8
                    x16_8 = &x16_8[1]
                    v2.d = arg2[sx.q(x26_1)]
                    i = i_6
                    i_6 -= 1
                    v0.d = v0.d f* v1.d
                    x24_1 = &x24_1[1]
                    v0.d = v2.d f+ v0.d
                    arg2[sx.q(x26_1)] = v0.d
                while (i != 1)
            case 1
                int64_t x22_4 = sx.q(x26_1)
                uint64_t i_8 = zx.q(x6_2 - x16_7.d + 1)
                int32_t x16_13 = x16_7.d << 1
                uint64_t i_1
                
                do
                    v0.d = *x24_1
                    
                    if (v0.d f== 0f)
                    label_fe7f28:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x5c7, 
                            "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
                            "coefficient != 0")
                        goto label_fe7f48
                    
                    v1.d = *(x5_1 + (sx.q(x16_13) << 2))
                    v2.d = arg2[x22_4]
                    x24_1 = &x24_1[1]
                    v1.d = v0.d f* v1.d
                    i_1 = i_8
                    i_8 -= 1
                    v1.d = v2.d f+ v1.d
                    arg2[x22_4] = v1.d
                    v1.d = *(x5_1 + (sx.q(x16_13 + 1) << 2))
                    v2.d = arg2[x22_4 + 1]
                    x16_13 += 2
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    arg2[x22_4 + 1] = v0.d
                while (i_1 != 1)
            case 2
                int64_t x22_5 = sx.q(x26_1)
                uint64_t i_9 = zx.q(x6_2 - x16_7.d + 1)
                void* x16_14 = x5_1 + 4 + x16_7 * 0xc
                uint64_t i_2
                
                do
                    v0.d = *x24_1
                    
                    if (v0.d f== 0f)
                    label_fe7f48:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x5d1, 
                            "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
                            "coefficient != 0")
                        goto label_fe7f68
                    
                    v1.d = *(x16_14 - 4)
                    v2.d = arg2[x22_5]
                    x24_1 = &x24_1[1]
                    v1.d = v0.d f* v1.d
                    i_2 = i_9
                    i_9 -= 1
                    v1.d = v2.d f+ v1.d
                    arg2[x22_5] = v1.d
                    v1.d = *x16_14
                    v2.d = arg2[x22_5 + 1]
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    arg2[x22_5 + 1] = v1.d
                    v1.d = *(x16_14 + 4)
                    v2.d = arg2[x22_5 + 2]
                    x16_14 += 0xc
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    arg2[x22_5 + 2] = v0.d
                while (i_2 != 1)
            case 3
                int64_t x22_6 = sx.q(x26_1)
                uint64_t i_10 = zx.q(x6_2 - x16_7.d + 1)
                int32_t x16_15 = x16_7.d << 2
                uint64_t i_3
                
                do
                    v0.d = *x24_1
                    
                    if (v0.d f== 0f)
                    label_fe7f68:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x5dc, 
                            "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
                            "coefficient != 0")
                    label_fe7f88:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                        "tb/stb_image_resize.h", 
                            0x5e9, 
                            "void stbir__resample_horizontal_upsample(stbir__info *, float *)", 
                            "coefficient != 0")
                        goto label_fe7fa8
                    
                    v1.d = *(x5_1 + (sx.q(x16_15) << 2))
                    v2.d = arg2[x22_6]
                    x24_1 = &x24_1[1]
                    v1.d = v0.d f* v1.d
                    i_3 = i_10
                    i_10 -= 1
                    v1.d = v2.d f+ v1.d
                    arg2[x22_6] = v1.d
                    v1.d = *(x5_1 + (sx.q(x16_15 + 1) << 2))
                    v2.d = arg2[x22_6 + 1]
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    arg2[x22_6 + 1] = v1.d
                    v1.d = *(x5_1 + (sx.q(x16_15 + 2) << 2))
                    v2.d = arg2[x22_6 + 2]
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    arg2[x22_6 + 2] = v1.d
                    v1.d = *(x5_1 + (sx.q(x16_15 + 3) << 2))
                    v2.d = arg2[x22_6 + 3]
                    x16_15 += 4
                    v0.d = v0.d f* v1.d
                    v0.d = v2.d f+ v0.d
                    arg2[x22_6 + 3] = v0.d
                while (i_3 != 1)
    else if (x11_1.d s<= 0)
        uint64_t i_7 = zx.q(x6_2 - x16_7.d + 1)
        uint64_t i_4
        
        do
            v0.d = *x24_1
            
            if (v0.d f== 0f)
                goto label_fe7f88
            
            i_4 = i_7
            i_7 -= 1
            x24_1 = &x24_1[1]
        while (i_4 != 1)
    else
        int64_t x19_4 = zx.q(x26_1) << 0x20 s>> 0x1e
        int64_t x26_2 = x11_1 * x16_7
        int64_t i_5 = 0
        int64_t x22_3 = x26_2 + x16_2
        int64_t x16_12 = x16_2 + x2_1 + x26_2
        int128_t* x21_3 = x5_1 + 0x10 + (x26_2 << 2)
        
        do
            v0.d = *(x14_1 + ((i_5 + sx.q(x15_1 * x10_1.d)) << 2))
            
            if (v0.d f== 0f)
                goto label_fe7f88
            
            int64_t x6_7
            
            if (x11_1.d u>= 8)
                x6_7 = i_5 * x11_1
            
            int64_t j_5
            
            if (x11_1.d u>= 8 && (arg2 + x19_4 u>= x12_1 + ((x16_12 + x6_7) << 2)
                    || x12_1 + ((x22_3 + x6_7) << 2) u>= &arg2[x2_1] + x19_4))
                v1 = vdupq_laneq_s32(v0, 0)
                void* x25_2 = &arg2[4 + sx.q(x22_1)]
                int128_t* x6_12 = x21_3
                int64_t j_3 = j_4
                int64_t j
                
                do
                    v2 = x6_12[-1]
                    float128 v3 = *x6_12
                    float128 v4 = *(x25_2 - 0x10)
                    float128 v5 = *x25_2
                    j = j_3
                    j_3 -= 8
                    x6_12 = &x6_12[2]
                    float128 v2_1 = vmulq_f32(v1, v2, 0)
                    float128 v3_1 = vmulq_f32(v1, v3, 0)
                    v2 = vaddq_f32(v4, v2_1)
                    v3 = vaddq_f32(v5, v3_1)
                    *(x25_2 - 0x10) = v2
                    *x25_2 = v3
                    x25_2 += 0x20
                while (j != 8)
                j_5 = j_4
                
                if (j_4 != x2_1)
                    goto label_fe7c98
            else
                j_5 = 0
            label_fe7c98:
                void* x25_1 = &arg2[x23_1 + j_5]
                int32_t* x6_11 = x5_1 + ((j_5 + x26_2) << 2)
                int64_t j_2 = x2_1 - j_5
                int64_t j_1
                
                do
                    v1.d = *x6_11
                    x6_11 = &x6_11[1]
                    v2.d = *x25_1
                    j_1 = j_2
                    j_2 -= 1
                    v1.d = v0.d f* v1.d
                    v1.d = v2.d f+ v1.d
                    *x25_1 = v1.d
                    x25_1 += 4
                while (j_1 != 1)
            i_5 += 1
            x21_3 += x11_1 << 2
            x26_2 += x11_1
        while (i_5 != zx.q(x6_2 - x16_7.d + 1))
    x10_1 += 1
    x9_1 += x15_1
    x22_1 = x23_1.d + x2_1.d
while (x10_1 != x8)
