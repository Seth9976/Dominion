// 函数: sub_109b638
// 地址: 0x109b638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint32_t x11 = zx.d(*arg2)
uint32_t x10 = zx.d(*arg1)
uint32_t x9 = zx.d(*arg3)
int32_t x8

if (x11 u>= x10)
    if (x9 u>= x11)
        x8 = 0
    else
        *arg2 = x9.w
        *arg3 = x11.w
        uint32_t x8_1 = zx.d(*arg2)
        uint32_t x9_1 = zx.d(*arg1)
        
        if (x8_1 u>= x9_1)
            x8 = 1
            x9 = x11
        else
            *arg1 = x8_1.w
            *arg2 = x9_1.w
            x9 = zx.d(*arg3)
            x8 = 2
else if (x9 u>= x11)
    *arg1 = x11.w
    *arg2 = x10.w
    x9 = zx.d(*arg3)
    
    if (x9 u>= x10)
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

uint32_t x10_1 = zx.d(*arg4)

if (x10_1 u< x9)
    *arg3 = x10_1.w
    *arg4 = x9.w
    uint32_t x9_2 = zx.d(*arg3)
    uint32_t x10_2 = zx.d(*arg2)
    
    if (x9_2 u>= x10_2)
        x8 += 1
    else
        *arg2 = x9_2.w
        *arg3 = x10_2.w
        uint32_t x9_3 = zx.d(*arg2)
        uint32_t x10_3 = zx.d(*arg1)
        
        if (x9_3 u>= x10_3)
            x8 += 2
        else
            x8 += 3
            *arg1 = x9_3.w
            *arg2 = x10_3.w

uint32_t x9_4 = zx.d(*arg5)
uint32_t x10_4 = zx.d(*arg4)

if (x9_4 u< x10_4)
    *arg4 = x9_4.w
    *arg5 = x10_4.w
    uint32_t x9_5 = zx.d(*arg4)
    uint32_t x10_5 = zx.d(*arg3)
    
    if (x9_5 u>= x10_5)
        return zx.q(x8 + 1)
    
    *arg3 = x9_5.w
    *arg4 = x10_5.w
    uint32_t x9_6 = zx.d(*arg3)
    uint32_t x10_6 = zx.d(*arg2)
    
    if (x9_6 u>= x10_6)
        return zx.q(x8 + 2)
    
    *arg2 = x9_6.w
    *arg3 = x10_6.w
    uint32_t x9_7 = zx.d(*arg2)
    uint32_t x10_7 = zx.d(*arg1)
    
    if (x9_7 u>= x10_7)
        return zx.q(x8 + 3)
    
    x8 += 4
    *arg1 = x9_7.w
    *arg2 = x10_7.w

return zx.q(x8)
