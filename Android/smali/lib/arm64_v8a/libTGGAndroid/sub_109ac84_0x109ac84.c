// 函数: sub_109ac84
// 地址: 0x109ac84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t x11 = sx.d(*arg2)
int32_t x10 = sx.d(*arg1)
int32_t x9 = sx.d(*arg3)
int32_t x8

if (x11 s>= x10)
    if (x9 s>= x11)
        x8 = 0
    else
        *arg2 = x9.w
        *arg3 = x11.w
        int32_t x8_1 = sx.d(*arg2)
        int32_t x9_1 = sx.d(*arg1)
        
        if (x8_1 s>= x9_1)
            x8 = 1
            x9 = x11
        else
            *arg1 = x8_1.w
            *arg2 = x9_1.w
            x9 = zx.d(*arg3)
            x8 = 2
else if (x9 s>= x11)
    *arg1 = x11.w
    *arg2 = x10.w
    x9 = sx.d(*arg3)
    
    if (x9 s>= x10)
        x8 = 1
    else
        x8 = 2
        *arg2 = x9.w
        *arg3 = x10.w
        x9 = x10
else
    *arg1 = x9.w
    *arg3 = x10.w
    x8 = 1
    x9 = x10

int32_t x10_1 = sx.d(*arg4)

if (x10_1 s< sx.d(x9.w))
    *arg3 = x10_1.w
    *arg4 = x9.w
    int32_t x9_2 = sx.d(*arg3)
    int32_t x10_2 = sx.d(*arg2)
    
    if (x9_2 s>= x10_2)
        x8 += 1
    else
        *arg2 = x9_2.w
        *arg3 = x10_2.w
        int32_t x9_3 = sx.d(*arg2)
        int32_t x10_3 = sx.d(*arg1)
        
        if (x9_3 s>= x10_3)
            x8 += 2
        else
            x8 += 3
            *arg1 = x9_3.w
            *arg2 = x10_3.w

int32_t x9_4 = sx.d(*arg5)
int32_t x10_4 = sx.d(*arg4)

if (x9_4 s< x10_4)
    *arg4 = x9_4.w
    *arg5 = x10_4.w
    int32_t x9_5 = sx.d(*arg4)
    int32_t x10_5 = sx.d(*arg3)
    
    if (x9_5 s>= x10_5)
        return zx.q(x8 + 1)
    
    *arg3 = x9_5.w
    *arg4 = x10_5.w
    int32_t x9_6 = sx.d(*arg3)
    int32_t x10_6 = sx.d(*arg2)
    
    if (x9_6 s>= x10_6)
        return zx.q(x8 + 2)
    
    *arg2 = x9_6.w
    *arg3 = x10_6.w
    int32_t x9_7 = sx.d(*arg2)
    int32_t x10_7 = sx.d(*arg1)
    
    if (x9_7 s>= x10_7)
        return zx.q(x8 + 3)
    
    x8 += 4
    *arg1 = x9_7.w
    *arg2 = x10_7.w

return zx.q(x8)
