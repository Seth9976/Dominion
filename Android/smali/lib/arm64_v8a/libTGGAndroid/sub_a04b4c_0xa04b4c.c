// 函数: sub_a04b4c
// 地址: 0xa04b4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = sub_a04990(arg1, arg2, arg3)
int32_t x10 = *arg4
int32_t x11 = *arg3
int32_t x8_2

if (x10 == x11)
    x8_2 = arg4[1] s< arg3[1] ? 1 : 0
else
    x8_2 = x10 s< x11 ? 1 : 0

if (x8_2 == 1)
    int32_t x8_3 = arg3[2]
    int64_t x9_2 = *arg3
    int64_t x9_3 = *arg4
    arg3[2] = arg4[2]
    *arg3 = x9_3
    arg4[2] = x8_3
    *arg4 = x9_2
    int32_t x10_1 = *arg3
    int32_t x11_1 = *arg2
    int32_t x8_8
    
    if (x10_1 == x11_1)
        x8_8 = arg3[1] s< arg2[1] ? 1 : 0
    else
        x8_8 = x10_1 s< x11_1 ? 1 : 0
    
    if (x8_8 != 1)
        result += 1
    else
        int32_t x8_9 = arg2[2]
        int64_t x9_7 = *arg2
        int64_t x9_8 = *arg3
        arg2[2] = arg3[2]
        *arg2 = x9_8
        arg3[2] = x8_9
        *arg3 = x9_7
        int32_t x10_2 = *arg2
        int32_t x11_2 = *arg1
        int32_t x8_14
        
        if (x10_2 == x11_2)
            x8_14 = arg2[1] s< arg1[1] ? 1 : 0
        else
            x8_14 = x10_2 s< x11_2 ? 1 : 0
        
        if (x8_14 != 1)
            result += 2
        else
            int32_t x8_15 = arg1[2]
            int64_t x9_12 = *arg1
            result += 3
            int64_t x9_13 = *arg2
            arg1[2] = arg2[2]
            *arg1 = x9_13
            arg2[2] = x8_15
            *arg2 = x9_12

int32_t x10_3 = *arg5
int32_t x11_3 = *arg4
int32_t x8_20

if (x10_3 == x11_3)
    x8_20 = arg5[1] s< arg4[1] ? 1 : 0
else
    x8_20 = x10_3 s< x11_3 ? 1 : 0

if (x8_20 == 1)
    int32_t x8_21 = arg4[2]
    int64_t x9_17 = *arg4
    int64_t x9_18 = *arg5
    arg4[2] = arg5[2]
    *arg4 = x9_18
    arg5[2] = x8_21
    *arg5 = x9_17
    int32_t x10_4 = *arg4
    int32_t x11_4 = *arg3
    int32_t x8_26
    
    if (x10_4 == x11_4)
        x8_26 = arg4[1] s< arg3[1] ? 1 : 0
    else
        x8_26 = x10_4 s< x11_4 ? 1 : 0
    
    if (x8_26 != 1)
        return result + 1
    
    int32_t x8_27 = arg3[2]
    int64_t x9_22 = *arg3
    int64_t x9_23 = *arg4
    arg3[2] = arg4[2]
    *arg3 = x9_23
    arg4[2] = x8_27
    *arg4 = x9_22
    int32_t x10_5 = *arg3
    int32_t x11_5 = *arg2
    int32_t x8_32
    
    if (x10_5 == x11_5)
        x8_32 = arg3[1] s< arg2[1] ? 1 : 0
    else
        x8_32 = x10_5 s< x11_5 ? 1 : 0
    
    if (x8_32 != 1)
        return result + 2
    
    int32_t x8_33 = arg2[2]
    int64_t x9_27 = *arg2
    int64_t x9_28 = *arg3
    arg2[2] = arg3[2]
    *arg2 = x9_28
    arg3[2] = x8_33
    *arg3 = x9_27
    int32_t x10_6 = *arg2
    int32_t x11_6 = *arg1
    int32_t x8_38
    
    if (x10_6 == x11_6)
        x8_38 = arg2[1] s< arg1[1] ? 1 : 0
    else
        x8_38 = x10_6 s< x11_6 ? 1 : 0
    
    if (x8_38 != 1)
        return result + 3
    
    int32_t x8_39 = arg1[2]
    int64_t x9_32 = *arg1
    result += 4
    int64_t x9_33 = *arg2
    arg1[2] = arg2[2]
    *arg1 = x9_33
    arg2[2] = x8_39
    *arg2 = x9_32

return result
