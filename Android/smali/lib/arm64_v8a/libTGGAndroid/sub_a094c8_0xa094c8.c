// 函数: sub_a094c8
// 地址: 0xa094c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x9 = *arg3
int32_t x8_18

if (x8 s< *arg1)
    if (x9 s>= x8)
        int32_t x8_11 = arg1[2]
        int64_t x9_11 = *arg1
        int64_t x9_12 = *arg2
        arg1[2] = arg2[2]
        *arg1 = x9_12
        arg2[2] = x8_11
        *arg2 = x9_11
        
        if (*arg3 s>= (x9_11.d & 0xffffffff))
            goto label_a09620
        
        int32_t x8_15 = arg2[2]
        int64_t x9_15 = *arg2
        int64_t x9_16 = *arg3
        arg2[2] = arg3[2]
        *arg2 = x9_16
        arg3[2] = x8_15
        *arg3 = x9_15
        goto label_a09608
    
    int32_t x8_1 = arg1[2]
    int64_t x9_1 = *arg1
    int64_t x9_2 = *arg3
    arg1[2] = arg3[2]
    *arg1 = x9_2
    arg3[2] = x8_1
    *arg3 = x9_1
label_a09620:
    x8_18 = 1
    
    if (*arg4 s>= *arg3)
        return zx.q(x8_18)
else if (x9 s>= x8)
    x8_18 = 0
    
    if (*arg4 s>= *arg3)
        return zx.q(x8_18)
else
    int32_t x8_4 = arg2[2]
    int64_t x9_4 = *arg2
    int64_t x9_5 = *arg3
    arg2[2] = arg3[2]
    *arg2 = x9_5
    arg3[2] = x8_4
    *arg3 = x9_4
    
    if (*arg2 s>= *arg1)
        goto label_a09620
    
    int32_t x8_8 = arg1[2]
    int64_t x9_8 = *arg1
    int64_t x9_9 = *arg2
    arg1[2] = arg2[2]
    *arg1 = x9_9
    arg2[2] = x8_8
    *arg2 = x9_8
label_a09608:
    x8_18 = 2
    
    if (*arg4 s>= *arg3)
        return zx.q(x8_18)

int32_t x9_20 = arg3[2]
int64_t x10_3 = *arg3
int64_t x10_4 = *arg4
arg3[2] = arg4[2]
*arg3 = x10_4
arg4[2] = x9_20
*arg4 = x10_3

if (*arg3 s>= *arg2)
    return zx.q(x8_18 + 1)

int32_t x9_24 = arg2[2]
int64_t x10_7 = *arg2
int64_t x10_8 = *arg3
arg2[2] = arg3[2]
*arg2 = x10_8
arg3[2] = x9_24
*arg3 = x10_7

if (*arg2 s>= *arg1)
    return zx.q(x8_18 + 2)

int32_t x9_28 = arg1[2]
int64_t x10_11 = *arg1
int64_t x10_12 = *arg2
arg1[2] = arg2[2]
*arg1 = x10_12
arg2[2] = x9_28
*arg2 = x10_11
return zx.q(x8_18 + 3)
