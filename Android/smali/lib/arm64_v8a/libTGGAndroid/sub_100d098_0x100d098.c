// 函数: sub_100d098
// 地址: 0x100d098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v5 = arg1[3]
float v2 = arg1[4]
float v4 = arg1[2]
float v3

if (not(v4 != v2))
    v3 = arg1[5]

if (v4 != v2 || not(v5 == v3))
    int32_t x10_1 = *arg1
    uint32_t temp0_1 = vcvts_s32_f32(v4)
    uint32_t temp0_2 = vcvts_s32_f32(v5)
    
    if (x10_1 == 0)
        uint16_t* x10_11 = *(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe
        x10_11[6].b = 2
        *x10_11 = temp0_1.w
        x10_11[1] = temp0_2.w
        *(x10_11 + 4) = 0
        *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 8) = 0
        *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 0xa) = 0
        v2 = arg1[4]
    else
        if (arg1[7] s>= temp0_1 && arg1[1] != 0)
            if (arg1[9] s>= temp0_2 && arg1[1] != 0)
                goto label_100d104
            
            goto label_100d110
        
        arg1[7] = temp0_1
        
        if (arg1[9] s>= temp0_2 && arg1[1] != 0)
        label_100d104:
            
            if (arg1[6] s<= temp0_1 && arg1[1] != 0)
                goto label_100d12c
            
            goto label_100d138
        
    label_100d110:
        arg1[9] = temp0_2
        
        if (arg1[6] s> temp0_1 || arg1[1] == 0)
        label_100d138:
            arg1[6] = temp0_1
            
            if (arg1[8] s> temp0_2 || arg1[1] == 0)
                arg1[8] = temp0_2
        else
        label_100d12c:
            
            if (arg1[8] s> temp0_2 || arg1[1] == 0)
                arg1[8] = temp0_2
        
        arg1[1] = 1
    
    v3 = arg1[5]
    arg1[0xc] += 1

int32_t x10_12 = *arg1
arg2 = v2 + arg2
arg3 = v3 + arg3
uint32_t temp0_3 = vcvts_s32_f32(arg2)
uint32_t temp0_4 = vcvts_s32_f32(arg3)
arg1[4] = arg2
arg1[5] = arg3
arg1[2] = arg2
arg1[3] = arg3

if (x10_12 == 0)
    uint16_t* x10_22 = *(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe
    x10_22[6].b = 1
    *x10_22 = temp0_3.w
    x10_22[1] = temp0_4.w
    *(x10_22 + 4) = 0
    *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 8) = 0
    *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 0xa) = 0
    arg1[0xc] += 1
    return arg2

if (arg1[7] s>= temp0_3 && arg1[1] != 0)
    if (arg1[9] s>= temp0_4 && arg1[1] != 0)
        goto label_100d220
    
    goto label_100d22c

arg1[7] = temp0_3

if (arg1[9] s>= temp0_4 && arg1[1] != 0)
label_100d220:
    
    if (arg1[6] s<= temp0_3 && arg1[1] != 0)
        goto label_100d248
    
    goto label_100d254

label_100d22c:
arg1[9] = temp0_4

if (arg1[6] s> temp0_3 || arg1[1] == 0)
label_100d254:
    arg1[6] = temp0_3
    
    if (arg1[8] s> temp0_4 || arg1[1] == 0)
        arg1[8] = temp0_4
else
label_100d248:
    
    if (arg1[8] s> temp0_4 || arg1[1] == 0)
        arg1[8] = temp0_4

arg1[1] = 1
arg1[0xc] += 1
return arg2
