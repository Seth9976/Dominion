// 函数: sub_a07618
// 地址: 0xa07618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *arg2
int32_t x10 = *arg1
int32_t x9 = *arg3
int32_t x8
int32_t x10_1

if (x11 s< x10)
    if (x9 s< x11)
        *arg1 = x9
        *arg3 = x10
        x8 = 1
    label_a076a4:
        x9 = x10
        x10_1 = *arg4
        
        if (x10_1 s< x9)
            goto label_a076f4
        
        goto label_a07748
    
    *arg1 = x11
    *arg2 = x10
    x9 = *arg3
    
    if (x9 s< x10)
        x8 = 2
        *arg2 = x9
        *arg3 = x10
        goto label_a076a4
    
    x8 = 1
    x10_1 = *arg4
    
    if (x10_1 s>= x9)
        goto label_a07748
    
    goto label_a076f4

if (x9 s< x11)
    *arg2 = x9
    *arg3 = x11
    int32_t x8_1 = *arg2
    int32_t x9_1 = *arg1
    
    if (x8_1 s>= x9_1)
        x8 = 1
        x9 = x11
        x10_1 = *arg4
        
        if (x10_1 s< x9)
            goto label_a076f4
        
        goto label_a07748
    
    *arg1 = x8_1
    *arg2 = x9_1
    x9 = *arg3
    x8 = 2
    x10_1 = *arg4
    
    if (x10_1 s< x9)
        goto label_a076f4
    
    goto label_a07748

x8 = 0
x10_1 = *arg4

if (x10_1 s>= x9)
    goto label_a07748

label_a076f4:
*arg3 = x10_1
*arg4 = x9
int32_t x9_2 = *arg3
int32_t x10_2 = *arg2
int32_t x9_4
int32_t x10_4

if (x9_2 s>= x10_2)
    x8 += 1
label_a07748:
    x9_4 = *arg5
    x10_4 = *arg4
    
    if (x9_4 s< x10_4)
    label_a07758:
        *arg4 = x9_4
        *arg5 = x10_4
        int32_t x9_5 = *arg4
        int32_t x10_5 = *arg3
        
        if (x9_5 s>= x10_5)
            return zx.q(x8 + 1)
        
        *arg3 = x9_5
        *arg4 = x10_5
        int32_t x9_6 = *arg3
        int32_t x10_6 = *arg2
        
        if (x9_6 s>= x10_6)
            return zx.q(x8 + 2)
        
        *arg2 = x9_6
        *arg3 = x10_6
        int32_t x9_7 = *arg2
        int32_t x10_7 = *arg1
        
        if (x9_7 s>= x10_7)
            return zx.q(x8 + 3)
        
        x8 += 4
        *arg1 = x9_7
        *arg2 = x10_7
else
    *arg2 = x9_2
    *arg3 = x10_2
    int32_t x9_3 = *arg2
    int32_t x10_3 = *arg1
    
    if (x9_3 s>= x10_3)
        x8 += 2
        x9_4 = *arg5
        x10_4 = *arg4
        
        if (x9_4 s< x10_4)
            goto label_a07758
    else
        x8 += 3
        *arg1 = x9_3
        *arg2 = x10_3
        x9_4 = *arg5
        x10_4 = *arg4
        
        if (x9_4 s< x10_4)
            goto label_a07758
return zx.q(x8)
