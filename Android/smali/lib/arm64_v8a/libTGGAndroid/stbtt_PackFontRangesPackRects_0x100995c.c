// 函数: stbtt_PackFontRangesPackRects
// 地址: 0x100995c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (arg3 s< 1)
    x8 = 0
else
    int32_t* x9_1 = *(arg1 + 8)
    x8 = 0
    int32_t* x11_1 = arg2 + 0xc
    int32_t x13_1 = x9_1[2]
    
    while (true)
        int32_t x14_3
        
        if (*x11_1 + x13_1 s<= *x9_1)
            x14_3 = x9_1[3]
        else
            x14_3 = x9_1[4]
            x13_1 = 0
            x9_1[2] = 0
            x9_1[3] = x14_3
        
        if (x11_1[1] + x14_3 s> x9_1[1])
            break
        
        x11_1[-3] = x13_1
        int32_t x13_2 = x9_1[3]
        x11_1[2] = 1
        x11_1[-2] = x13_2
        int32_t x15_3 = x9_1[3]
        int32_t x16_2 = x9_1[4]
        x13_1 = x9_1[2] + *x11_1
        x9_1[2] = x13_1
        int32_t x14_7 = x11_1[1] + x15_3
        
        if (x14_7 s> x16_2)
            x9_1[4] = x14_7
        
        x8 += 1
        x11_1 = &x11_1[6]
        
        if (zx.q(arg3) == x8)
            return 

if (x8.d s>= arg3)
    return 

uint64_t x12_1 = zx.q(x8.d)
uint64_t x8_1 = zx.q(arg3)
uint64_t x10_2 = x8_1 - x12_1
uint64_t x9_2

if (x10_2 u>= 2)
    int64_t i_4 = x10_2 & 0xfffffffffffffffe
    x9_2 = i_4 + x12_1
    int32_t* x12_3 = arg2 + x12_1 * 0x18 + 0x2c
    int64_t i_3 = i_4
    int64_t i
    
    do
        x12_3[-6] = 0
        *x12_3 = 0
        x12_3 = &x12_3[0xc]
        i = i_3
        i_3 -= 2
    while (i != 2)
    
    if (x10_2 != i_4)
        goto label_1009a64
else
    x9_2 = x12_1
label_1009a64:
    uint64_t i_2 = x8_1 - x9_2
    int32_t* x9_4 = arg2 + x9_2 * 0x18 + 0x14
    uint64_t i_1
    
    do
        i_1 = i_2
        i_2 -= 1
        *x9_4 = 0
        x9_4 = &x9_4[6]
    while (i_1 != 1)
