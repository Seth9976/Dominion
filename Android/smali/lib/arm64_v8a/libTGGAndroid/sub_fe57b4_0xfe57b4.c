// 函数: sub_fe57b4
// 地址: 0xfe57b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1[0x17])

if (x8.d == 0)
label_fe5a9c:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x372, "int stbir__get_filter_pixel_width(stbir_filter, float)", "filter != 0")
label_fe5abc:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x373, "int stbir__get_filter_pixel_width(stbir_filter, float)", 
        "filter < (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
label_fe5adc:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x8d7, "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
        "info->horizontal_filter != 0")
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x8d8, "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
        "info->horizontal_filter < 
            (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
        0x8d9, "stbir_uint32 stbir__calculate_memory(stbir__info *)", "info->vertical_filter != 0")
else
    if (x8.d u>= 6)
        goto label_fe5abc
    
    int128_t v8
    v8.d = arg1[0x11]
    int64_t x8_2 = (&data_1180548)[x8 * 2]
    float v0 = fconvert.s(1f)
    float v0_2
    
    if (v8.d f> v0)
        v0_2 = x8_2(v0 f/ v8.d)
        v0_2 = v0_2 + v0_2
    else
        v0_2 = x8_2(v8)
        v0_2 = (v0_2 + v0_2) f/ v8.d
    
    uint64_t x8_3 = zx.q(arg1[0x18])
    uint32_t temp0_1 = vcvtps_s32_f32(v0_2)
    uint32_t x21_1
    
    if (temp0_1 s< 0)
        x21_1 = temp0_1 + 1
    else
        x21_1 = temp0_1
    
    if (x8_3.d == 0)
        goto label_fe5a9c
    
    if (x8_3.d u>= 6)
        goto label_fe5abc
    
    v8.d = arg1[0x12]
    int64_t x8_5 = (&data_1180548)[x8_3 * 2]
    v0_2 = fconvert.s(1f)
    float v0_4
    int64_t v9
    int64_t v10
    
    if (not(v8.d f> v0_2))
        v0_4 = x8_5(v8)
        v9.d = (v0_4 + v0_4) f/ v8.d
        v8.d = arg1[0x11]
        v10.d = fconvert.s(1f)
        
        if (v8.d f<= v10.d)
            goto label_fe58e8
        
        goto label_fe5870
    
    v0_4 = x8_5(v0_2 f/ v8.d)
    v9.d = v0_4 + v0_4
    v8.d = arg1[0x11]
    v10.d = fconvert.s(1f)
    int32_t x8_12
    int32_t x22_1
    
    if (v8.d f> v10.d)
    label_fe5870:
        x22_1 = arg1[8]
        v8.d = arg1[0x12]
        arg1[0x30] = x22_1
        
        if (v8.d f> v10.d)
            x8_12 = arg1[9]
        else
        label_fe5884:
            uint64_t x8_6 = zx.q(arg1[0x18])
            
            if (x8_6.d == 0)
                goto label_fe5a9c
            
            if (x8_6.d u>= 6)
                goto label_fe5abc
            
            int32_t x23_1 = arg1[3]
            v0_4 = (&data_1180548)[x8_6 * 2](v8)
            uint32_t temp0_2 = vcvtps_s32_f32((v0_4 + v0_4) f/ v8.d)
            x22_1 = arg1[0x30]
            uint32_t x8_10
            
            if (temp0_2 s< 0)
                x8_10 = temp0_2 + 1
            else
                x8_10 = temp0_2
            
            x8_12 = (x8_10 & 0xfffffffe) + x23_1
    else
    label_fe58e8:
        uint64_t x8_13 = zx.q(arg1[0x17])
        
        if (x8_13.d == 0)
            goto label_fe5a9c
        
        if (x8_13.d u>= 6)
            goto label_fe5abc
        
        int32_t x22_2 = arg1[2]
        v0_4 = (&data_1180548)[x8_13 * 2](v8)
        uint32_t temp0_3 = vcvtps_s32_f32((v0_4 + v0_4) f/ v8.d)
        uint32_t x8_17
        
        if (temp0_3 s< 0)
            x8_17 = temp0_3 + 1
        else
            x8_17 = temp0_3
        
        x22_1 = (x8_17 & 0xfffffffe) + x22_2
        v8.d = arg1[0x12]
        arg1[0x30] = x22_1
        
        if (v8.d f<= v10.d)
            goto label_fe5884
        
        x8_12 = arg1[9]
    
    uint64_t x10_1 = zx.q(arg1[0x17])
    arg1[0x31] = x8_12
    v0_4 = arg1[0x11]
    arg1[0x3c] = x22_1 << 3
    int64_t x8_21 = (&data_1180548)[x10_1 * 2]
    v8.d = fconvert.s(1f)
    float v1_1 = v8.d f/ v0_4
    int32_t x9_3 = vcvtps_s32_f32(v9.d) + 1
    
    if (not(v0_4 f<= v8.d))
        v0_4 = v1_1
    
    arg1[0x33] = x9_3
    float v0_7 = x8_21(v0_4, v1_1)
    uint64_t x8_22 = zx.q(arg1[0x18])
    uint32_t temp0_5 = vcvtps_s32_f32(v0_7 + v0_7)
    v0_7 = arg1[0x12]
    int32_t x22_3 = arg1[0x31]
    int64_t x8_24 = (&data_1180548)[x8_22 * 2]
    float v1_2 = v8.d f/ v0_7
    
    if (not(v0_7 f<= v8.d))
        v0_7 = v1_2
    
    arg1[0x3d] = (x22_1 * temp0_5) << 2
    arg1[0x3e] = x22_3 << 3
    float v0_8 = x8_24(v0_7, v1_2)
    int32_t x8_25 = arg1[2]
    int32_t x9_7 = arg1[0x13]
    int32_t x10_3 = arg1[8]
    int32_t x13_1 = arg1[0x33]
    uint32_t temp0_6 = vcvtps_s32_f32(v0_8 + v0_8)
    int32_t x12_1 = arg1[0x17]
    int32_t x8_27 = (x22_3 * temp0_6) << 2
    int32_t x11_3 = (x10_3 * x9_7) << 2
    int32_t x9_9 = (x9_7 * (x8_25 + (x21_1 s>> 1 << 1))) << 2
    int32_t x10_5 = x11_3 * x13_1
    arg1[0x41] = x11_3
    arg1[0x3f] = x8_27
    arg1[0x40] = x9_9
    arg1[0x42] = x10_5
    arg1[0x43] = x11_3
    
    if (x12_1 == 0)
        goto label_fe5adc
    
    if (x12_1 u>= 6)
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x8d8, "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
            "info->horizontal_filter < 
                (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
            0x8d9, "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
            "info->vertical_filter != 0")
    else
        int32_t x12_2 = arg1[0x18]
        
        if (x12_2 == 0)
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 
                0x8d9, "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
                "info->vertical_filter != 0")
        else if (x12_2 u< 6)
            v0_8 = arg1[0x12]
            float v1_3 = fconvert.s(1f)
            v0_8 - v1_3
            int64_t x12_3
            
            x12_3 = v0_8 <= v1_3 ? 0x10c : 0x104
            
            *(arg1 + x12_3) = 0
            int32_t x13_2
            
            x13_2 = v0_8 <= v1_3 ? 0 : x11_3
            
            int32_t x11_4
            
            x11_4 = v0_8 <= v1_3 ? x11_3 : 0
            
            return zx.q(x9_9 + x8_27 + x10_5 + arg1[0x3c] + arg1[0x3d] + arg1[0x3e] + x11_4 + x13_2)

int64_t result
int128_t v0_9
result, v0_9 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 0x8da, 
    "stbir_uint32 stbir__calculate_memory(stbir__info *)", 
    "info->vertical_filter < (sizeof((stbir__filter_info_table))/sizeof((stbir__filter_info_table)[0]))")
v0_9.d = 0f
return result
