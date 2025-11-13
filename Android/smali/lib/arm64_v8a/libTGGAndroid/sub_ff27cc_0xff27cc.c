// 函数: sub_ff27cc
// 地址: 0xff27cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = 0
void var_e0
void* x5 = &var_e0

while (true)
    int16_t* x19_1 = arg3 + 0x40 + x8
    int32_t x7_1 = sx.d(x19_1[-0x18])
    int16_t x20_1 = x19_1[-0x10]
    
    if ((zx.d(x7_1.w) | zx.d(x20_1)) == 0)
        if (zx.d(x19_1[-8]) == 0 && zx.d(*(arg3 + 0x40 + x8)) == 0)
            void* x20_4 = arg3 + 0x40 + x8
            
            if (zx.d(*(x20_4 + 0x10)) == 0 && zx.d(*(x20_4 + 0x20)) == 0
                    && zx.d(*(arg3 + 0x40 + x8 + 0x30)) == 0)
                int32_t x7_7 = sx.d(x19_1[-0x20]) << 2
                *(x5 + 0x60) = x7_7
                *(x5 + 0x40) = x7_7
                *(x5 + 0x20) = x7_7
                *x5 = x7_7
                *(x5 - 0x20) = x7_7
                *(x5 - 0x40) = x7_7
                *(x5 - 0x60) = x7_7
                *(x5 - 0x80) = x7_7
                x8 += 2
                x5 += 4
                
                if (x8.d == 0x10)
                    break
                
                continue
        
        x20_1 = 0
    
    int32_t x21_3 = sx.d(x19_1[0x10])
    int32_t x22_1 = sx.d(x19_1[-0x20])
    int32_t x23_1 = sx.d(*x19_1)
    int32_t x24_1 = sx.d(x19_1[0x18])
    int32_t x25_1 = sx.d(x19_1[8])
    int32_t x19_2 = sx.d(x19_1[-8])
    int32_t x20_8 = sx.d(x20_1)
    int32_t x23_2 = x19_2 + x24_1
    int32_t x28_1 = x25_1 + x7_1
    int32_t x26_2 = (x21_3 + x20_8) * 0x8a9
    int32_t x27_2 = (x23_1 + x22_1) << 0xc
    int32_t x22_3 = (x22_1 - x23_1) << 0xc
    int32_t x23_3 = x23_2 * 0xffffe09e
    int32_t x28_2 = x28_1 * 0xfffff9c3
    int32_t x21_4 = x26_2 + x21_3 * 0xffffe271
    int32_t x20_9 = x26_2 + x20_8 * 0xc3f
    int32_t x10_2 = (x23_2 + x28_1) * 0x12d0
    int32_t x28_3 = x10_2 + (x24_1 + x7_1) * 0xfffff19b
    int32_t x10_3 = x10_2 + (x19_2 + x25_1) * 0xffffd6ff
    int32_t x7_3 = x28_2 + x7_1 * 0x1805 + x28_3
    int32_t x19_4 = x23_3 + x19_2 * 0x312a + x10_3
    int32_t x10_4 = x28_2 + x25_1 * 0x20da + x10_3
    int32_t x22_4 = x23_3 + x24_1 * 0x4c7 + x28_3
    *(x5 - 0x80) = (x7_3 + x20_9 + x27_2 + 0x200) s>> 0xa
    *(x5 + 0x60) = (x20_9 + x27_2 + 0x200 - x7_3) s>> 0xa
    *(x5 - 0x60) = (x19_4 + x21_4 + x22_3 + 0x200) s>> 0xa
    *(x5 + 0x40) = (x21_4 + x22_3 + 0x200 - x19_4) s>> 0xa
    *(x5 - 0x40) = (x10_4 + x22_3 - x21_4 + 0x200) s>> 0xa
    *(x5 + 0x20) = (x22_3 - x21_4 + 0x200 - x10_4) s>> 0xa
    *(x5 - 0x20) = (x22_4 + x27_2 - x20_9 + 0x200) s>> 0xa
    *x5 = (x27_2 - x20_9 + 0x200 - x22_4) s>> 0xa
    x5 += 4
    x8 += 2
    
    if (x8.d == 0x10)
        break

int64_t x8_1 = 0
void* x10_8 = arg1 + 3

do
    void var_150
    void* x19_7 = &var_150 + x8_1
    int32_t x21_9 = *(x19_7 - 8)
    int32_t x26_4 = *(x19_7 - 4)
    int32_t x22_7 = *(x19_7 + 8)
    int32_t x23_8 = *(x19_7 + 0xc)
    void var_160
    int32_t x20_14 = *(&var_160 + x8_1)
    int32_t x24_5 = *x19_7
    int32_t x25_4 = *(x19_7 + 4)
    int32_t x19_8 = *(x19_7 - 0xc)
    int32_t x27_4 = (x22_7 + x21_9) * 0x8a9
    int32_t x24_6 = x26_4 + x23_8
    int32_t fp_2 = x19_8 + x25_4
    int32_t x22_8 = x27_4 + x22_7 * 0xffffe271
    int32_t x21_10 = x27_4 + x21_9 * 0xc3f
    int32_t x27_5 = fp_2 * 0xfffff9c3
    int32_t x24_7 = x24_6 * 0xffffe09e
    int32_t x24_8 = (x24_5 + x20_14) << 0xc
    int32_t x28_5 = (fp_2 + x24_6) * 0x12d0
    int32_t x20_16 = (x20_14 - x24_5) << 0xc
    int32_t fp_4 = x28_5 + (x19_8 + x23_8) * 0xfffff19b
    int32_t x25_6 = x28_5 + (x26_4 + x25_4) * 0xffffd6ff
    int32_t x19_10 = x27_5 + x19_8 * 0x1805 + fp_4
    int32_t x22_9 = x24_7 + x26_4 * 0x312a + x25_6
    int32_t x25_7 = x27_5 + x25_4 * 0x20da + x25_6
    int32_t x23_10 = x24_7 + x23_8 * 0x4c7 + fp_4
    int32_t x27_7 = x19_10 + x21_10 + x24_8 + 0x1010000
    int32_t x19_11 = x21_10 + x24_8 + 0x1010000 - x19_10
    int32_t x21_13 = x22_9 + x22_8 + x20_16 + 0x1010000
    int32_t x20_19 = x22_8 + x20_16 + 0x1010000 - x22_9
    int32_t x22_10 = x25_7 + x20_16 - x22_8 + 0x1010000
    int32_t x24_11 = x20_16 - x22_8 + 0x1010000 - x25_7
    int32_t x25_8 = x23_10 + x24_8 - x21_10 + 0x1010000
    int32_t x23_11 = x24_8 - x21_10 + 0x1010000 - x23_10
    int32_t x26_7 = x27_7 s>> 0x11
    char x26_8
    
    if (x26_7 u<= 0xff)
        x26_8 = x26_7.b
    else
        x26_8 = (not.d(x27_7 s>> 0x1f)).b
    
    *(x10_8 - 3) = x26_8
    int32_t x26_9 = x19_11 s>> 0x11
    char x19_13
    
    if (x26_9 u<= 0xff)
        x19_13 = x26_9.b
    else
        x19_13 = (not.d(x19_11 s>> 0x1f)).b
    
    *(x10_8 + 4) = x19_13
    int32_t x19_14 = x21_13 s>> 0x11
    char x19_15
    
    if (x19_14 u<= 0xff)
        x19_15 = x19_14.b
    else
        x19_15 = (not.d(x21_13 s>> 0x1f)).b
    
    *(x10_8 - 2) = x19_15
    int32_t x19_16 = x20_19 s>> 0x11
    char x19_17
    
    if (x19_16 u<= 0xff)
        x19_17 = x19_16.b
    else
        x19_17 = (not.d(x20_19 s>> 0x1f)).b
    
    *(x10_8 + 3) = x19_17
    int32_t x19_18 = x22_10 s>> 0x11
    char x19_19
    
    if (x19_18 u<= 0xff)
        x19_19 = x19_18.b
    else
        x19_19 = (not.d(x22_10 s>> 0x1f)).b
    
    *(x10_8 - 1) = x19_19
    int32_t x19_20 = x24_11 s>> 0x11
    char x19_21
    
    if (x19_20 u<= 0xff)
        x19_21 = x19_20.b
    else
        x19_21 = (not.d(x24_11 s>> 0x1f)).b
    
    *(x10_8 + 2) = x19_21
    int32_t x19_22 = x25_8 s>> 0x11
    char x19_23
    
    if (x19_22 u<= 0xff)
        x19_23 = x19_22.b
    else
        x19_23 = (not.d(x25_8 s>> 0x1f)).b
    
    *x10_8 = x19_23
    int32_t x19_24 = x23_11 s>> 0x11
    char x19_25
    
    if (x19_24 u<= 0xff)
        x19_25 = x19_24.b
    else
        x19_25 = (not.d(x23_11 s>> 0x1f)).b
    
    x8_1 += 0x20
    *(x10_8 + 1) = x19_25
    x10_8 += sx.q(arg2)
while (x8_1.d != 0x100)

return 0x312a
