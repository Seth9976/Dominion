// 函数: _ZN10SpookyHash6UpdateEPKvm
// 地址: 0xc74e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x128))
uint64_t x20 = arg2
size_t entry_x2
int64_t x21 = x8 + entry_x2
int64_t result

if (x21 u> 0xbf)
    int64_t x9_1 = *(arg1 + 0x120)
    int64_t x26_1 = *(arg1 + 0xc0)
    int64_t x24_1 = *(arg1 + 0xc8)
    int64_t x3_1
    int64_t x4_1
    int64_t x5_1
    int64_t x21_1
    int64_t x22_1
    int64_t x23_1
    int64_t x25_1
    int64_t x27_1
    int64_t x28_1
    int64_t fp_1
    int128_t v0
    int128_t v1
    int128_t v2
    
    if (x9_1 u>= 0xc0)
        x22_1 = *(arg1 + 0xd0)
        x4_1 = *(arg1 + 0xd8)
        x3_1 = *(arg1 + 0xe0)
        x5_1 = *(arg1 + 0xe8)
        x23_1 = *(arg1 + 0xf0)
        x27_1 = *(arg1 + 0xf8)
        x28_1 = *(arg1 + 0x100)
        x21_1 = *(arg1 + 0x108)
        fp_1 = *(arg1 + 0x110)
        x25_1 = *(arg1 + 0x118)
        *(arg1 + 0x120) = x9_1 + entry_x2
        
        if (x8.d != 0)
        label_c74f68:
            size_t x8_3 = zx.q(-0x40 - x8.b)
            int128_t v3
            v0, v1, v2, v3 = memcpy(arg1 + x8, x20, x8_3)
            int64_t x10_1 = fp_1 ^ x22_1
            int64_t x8_5 = *arg1 + x26_1
            int64_t x9_6 = *(arg1 + 8) + x24_1
            int64_t x11_2 = *(arg1 + 0x10) + x10_1
            int64_t x8_7 = (x9_6 ^ ror.q(x8_5, 0x35)) + x10_1
            int64_t x12_2 = (x8_5 ^ x25_1) + x24_1
            int64_t x15_2 = x8_7 ^ x3_1
            int64_t x10_3 = x12_2 ^ x4_1
            int64_t x9_8 = (x11_2 ^ ror.q(x9_6, 0x20)) + x10_3
            int64_t x10_4 = x10_3 + *(arg1 + 0x18)
            int64_t x16_2 = x9_8 ^ x5_1
            int64_t x11_4 = (x10_4 ^ ror.q(x11_2, 0x15)) + x15_2
            int64_t x14_2 = x15_2 + *(arg1 + 0x20)
            int64_t x10_6 = (x14_2 ^ ror.q(x10_4, 0x21)) + x16_2
            int64_t x13_3 = x16_2 + *(arg1 + 0x28)
            int64_t x17_1 = x11_4 ^ x23_1
            int64_t x0_2 = x10_6 ^ x27_1
            int64_t x15_4 = x17_1 + *(arg1 + 0x30)
            int64_t x14_4 = (x13_3 ^ ror.q(x14_2, 0x2f)) + x17_1
            int64_t x16_4 = x0_2 + *(arg1 + 0x38)
            int64_t x13_5 = (x15_4 ^ ror.q(x13_3, 0x24)) + x0_2
            int64_t x1_2 = x14_4 ^ x28_1
            int64_t x15_6 = (x16_4 ^ ror.q(x15_4, 0x19)) + x1_2
            int64_t x17_3 = x1_2 + *(arg1 + 0x40)
            int64_t x1_3 = x13_5 ^ x21_1
            int64_t x16_6 = (x17_3 ^ ror.q(x16_4, 7)) + x1_3
            int64_t x0_4 = x1_3 + *(arg1 + 0x48)
            int64_t x3_2 = x15_6 ^ fp_1
            int64_t x12_3 = x16_6 ^ x12_2
            int64_t x2_2 = x3_2 + *(arg1 + 0x50)
            int64_t x17_5 = (x0_4 ^ ror.q(x17_3, 9)) + x3_2
            int64_t x0_6 = (x2_2 ^ ror.q(x0_4, 0xa)) + x12_3
            int64_t x12_4 = x12_3 + *(arg1 + 0x58)
            int64_t x8_8 = x17_5 ^ x8_7
            int64_t x2_4 = (x12_4 ^ ror.q(x2_2, 0x2a)) + x8_8
            int64_t x8_9 = x8_8 + *(arg1 + 0x60)
            int64_t x9_9 = x0_6 ^ x9_8
            int64_t x1_6 = x9_9 + *(arg1 + 0x68)
            int64_t x9_10 = (x8_9 ^ ror.q(x12_4, 0x12)) + x9_9
            int64_t x11_5 = x2_4 ^ x11_4
            int64_t x8_11 = (x1_6 ^ ror.q(x8_9, 0x35)) + x11_5
            int64_t x11_6 = x11_5 + *(arg1 + 0x70)
            int64_t x10_7 = x9_10 ^ x10_6
            int64_t x12_8 = (x11_6 ^ ror.q(x1_6, 0x20)) + x10_7
            int64_t x10_8 = x10_7 + *(arg1 + 0x78)
            int64_t x14_5 = x8_11 ^ x14_4
            int64_t x13_6 = x12_8 ^ x13_5
            int64_t x1_8 = x14_5 + *(arg1 + 0x80)
            x22_1 = (x10_8 ^ ror.q(x11_6, 0x15)) + x14_5
            x4_1 = (x1_8 ^ ror.q(x10_8, 0x21)) + x13_6
            int64_t x10_10 = x13_6 + *(arg1 + 0x88)
            int64_t x14_6 = x22_1 ^ x15_6
            int64_t x15_7 = x4_1 ^ x16_6
            int64_t x11_9 = x14_6 + *(arg1 + 0x90)
            x3_1 = (x10_10 ^ ror.q(x1_8, 0x2f)) + x14_6
            x5_1 = (x11_9 ^ ror.q(x10_10, 0x24)) + x15_7
            int64_t x13_8 = x15_7 + *(arg1 + 0x98)
            int64_t x15_8 = x3_1 ^ x17_5
            int64_t x10_13 = x15_8 + *(arg1 + 0xa0)
            x23_1 = (x13_8 ^ ror.q(x11_9, 0x19)) + x15_8
            int64_t x11_11 = x5_1 ^ x0_6
            x27_1 = (x10_13 ^ ror.q(x13_8, 7)) + x11_11
            int64_t x11_12 = x11_11 + *(arg1 + 0xa8)
            int64_t x15_9 = x23_1 ^ x2_4
            x28_1 = (x11_12 ^ ror.q(x10_13, 9)) + x15_9
            int64_t x13_11 = x15_9 + *(arg1 + 0xb0)
            int64_t x9_11 = x27_1 ^ x9_10
            x21_1 = (x13_11 ^ ror.q(x11_12, 0xa)) + x9_11
            int64_t x9_12 = x9_11 + *(arg1 + 0xb8)
            x26_1 = x28_1 ^ x8_11
            x20 += x8_3
            x24_1 = x21_1 ^ x12_8
            x25_1 = ror.q(x9_12, 0x12)
            fp_1 = (x9_12 ^ ror.q(x13_11, 0x2a)) + x26_1
            entry_x2 -= x8_3
    else
        x22_1 = -0x2152411021524111
        x4_1 = x26_1
        x3_1 = x24_1
        x5_1 = -0x2152411021524111
        x23_1 = x26_1
        x27_1 = x24_1
        x28_1 = -0x2152411021524111
        x21_1 = x26_1
        fp_1 = x24_1
        x25_1 = -0x2152411021524111
        *(arg1 + 0x120) = x9_1 + entry_x2
        
        if (x8.d != 0)
            goto label_c74f68
    
    int64_t x1_9 = x20 + entry_x2 u/ 0x60 * 0x60
    char x8_16 = x20.b - x1_9.b + entry_x2.b
    
    if ((x20 & 7) == 0)
        while (x1_9 u> x20)
            int64_t x11_17 = fp_1 ^ x22_1
            int64_t x9_19 = *x20 + x26_1
            int64_t x10_19 = *(x20 + 8) + x24_1
            int64_t x13_22 = (x9_19 ^ x25_1) + x24_1
            int64_t x12_21 = *(x20 + 0x10) + x11_17
            int64_t x9_21 = (x10_19 ^ ror.q(x9_19, 0x35)) + x11_17
            int64_t x11_18 = x13_22 ^ x4_1
            int64_t x10_21 = (x12_21 ^ ror.q(x10_19, 0x20)) + x11_18
            int64_t x11_19 = x11_18 + *(x20 + 0x18)
            int64_t x16_12 = x9_21 ^ x3_1
            int64_t x17_9 = x10_21 ^ x5_1
            int64_t x15_16 = x16_12 + *(x20 + 0x20)
            x22_1 = (x11_19 ^ ror.q(x12_21, 0x15)) + x16_12
            x4_1 = (x15_16 ^ ror.q(x11_19, 0x21)) + x17_9
            int64_t x11_21 = x17_9 + *(x20 + 0x28)
            int64_t x16_13 = x22_1 ^ x23_1
            int64_t x17_10 = x4_1 ^ x27_1
            int64_t x12_24 = x16_13 + *(x20 + 0x30)
            x3_1 = (x11_21 ^ ror.q(x15_16, 0x2f)) + x16_13
            x5_1 = (x12_24 ^ ror.q(x11_21, 0x24)) + x17_10
            int64_t x14_19 = x17_10 + *(x20 + 0x38)
            int64_t x16_14 = x3_1 ^ x28_1
            int64_t x11_24 = x16_14 + *(x20 + 0x40)
            x23_1 = (x14_19 ^ ror.q(x12_24, 0x19)) + x16_14
            int64_t x12_26 = x5_1 ^ x21_1
            x27_1 = (x11_24 ^ ror.q(x14_19, 7)) + x12_26
            int64_t x12_27 = x12_26 + *(x20 + 0x48)
            int64_t x16_15 = x23_1 ^ fp_1
            x28_1 = (x12_27 ^ ror.q(x11_24, 9)) + x16_15
            int64_t x14_22 = x16_15 + *(x20 + 0x50)
            int64_t x11_26 = x27_1 ^ x13_22
            x21_1 = (x14_22 ^ ror.q(x12_27, 0xa)) + x11_26
            int64_t x11_27 = x11_26 + *(x20 + 0x58)
            x20 += 0x60
            x26_1 = x28_1 ^ x9_21
            x24_1 = x21_1 ^ x10_21
            x25_1 = ror.q(x11_27, 0x12)
            fp_1 = (x11_27 ^ ror.q(x14_22, 0x2a)) + x26_1
    else
        while (x1_9 u> x20)
            v1 = *(x20 + 0x10)
            int64_t x10_16 = fp_1 ^ x22_1
            *arg1 = *x20
            *(arg1 + 0x10) = v1
            int64_t x14_9 = *(arg1 + 0x18)
            v2 = *(x20 + 0x30)
            v1 = *(x20 + 0x40)
            v0 = *(x20 + 0x50)
            int64_t x12_9 = *arg1 + x26_1
            int64_t x11_14 = *(arg1 + 8) + x24_1
            int64_t x9_15 = (x12_9 ^ x25_1) + x24_1
            int64_t x13_13 = *(arg1 + 0x10) + x10_16
            *(arg1 + 0x20) = *(x20 + 0x20)
            *(arg1 + 0x30) = v2
            int64_t x10_17 = (x11_14 ^ ror.q(x12_9, 0x35)) + x10_16
            int64_t x12_11 = x9_15 ^ x4_1
            int64_t x11_16 = (x13_13 ^ ror.q(x11_14, 0x20)) + x12_11
            int64_t x12_12 = x12_11 + x14_9
            int64_t x16_8 = x10_17 ^ x3_1
            int64_t x17_6 = x11_16 ^ x5_1
            int64_t x14_11 = x16_8 + *(arg1 + 0x20)
            x22_1 = (x12_12 ^ ror.q(x13_13, 0x15)) + x16_8
            int64_t x13_15 = x17_6 + *(arg1 + 0x28)
            x4_1 = (x14_11 ^ ror.q(x12_12, 0x21)) + x17_6
            int64_t x12_14 = *(arg1 + 0x30)
            int64_t x15_12 = *(arg1 + 0x38)
            int64_t x16_9 = x22_1 ^ x23_1
            *(arg1 + 0x40) = v1
            *(arg1 + 0x50) = v0
            int64_t x12_15 = x16_9 + x12_14
            int64_t x17_7 = x4_1 ^ x27_1
            x3_1 = (x13_15 ^ ror.q(x14_11, 0x2f)) + x16_9
            int64_t x14_13 = x17_7 + x15_12
            x5_1 = (x12_15 ^ ror.q(x13_15, 0x24)) + x17_7
            int64_t x16_10 = x3_1 ^ x28_1
            int64_t x17_8 = x5_1 ^ x21_1
            int64_t x13_18 = x16_10 + *(arg1 + 0x40)
            x23_1 = (x14_13 ^ ror.q(x12_15, 0x19)) + x16_10
            x27_1 = (x13_18 ^ ror.q(x14_13, 7)) + x17_8
            int64_t x12_18 = x17_8 + *(arg1 + 0x48)
            int64_t x16_11 = x23_1 ^ fp_1
            int64_t x9_16 = x27_1 ^ x9_15
            int64_t x14_15 = x16_11 + *(arg1 + 0x50)
            x28_1 = (x12_18 ^ ror.q(x13_18, 9)) + x16_11
            int64_t x13_20 = x9_16 + *(arg1 + 0x58)
            x20 += 0x60
            x26_1 = x28_1 ^ x10_17
            x21_1 = (x14_15 ^ ror.q(x12_18, 0xa)) + x9_16
            x25_1 = ror.q(x13_20, 0x12)
            x24_1 = x21_1 ^ x11_16
            fp_1 = (x13_20 ^ ror.q(x14_15, 0x2a)) + x26_1
    
    *(arg1 + 0x128) = x8_16
    result = memcpy(arg1, x1_9, zx.q(x8_16))
    *(arg1 + 0xc0) = x26_1
    *(arg1 + 0xc8) = x24_1
    *(arg1 + 0xd0) = x22_1
    *(arg1 + 0xd8) = x4_1
    *(arg1 + 0xf0) = x23_1
    *(arg1 + 0xf8) = x27_1
    *(arg1 + 0xe0) = x3_1
    *(arg1 + 0xe8) = x5_1
    *(arg1 + 0x100) = x28_1
    *(arg1 + 0x108) = x21_1
    *(arg1 + 0x110) = fp_1
    *(arg1 + 0x118) = x25_1
else
    result = memcpy(arg1 + x8, x20, entry_x2)
    int64_t x8_1 = *(arg1 + 0x120)
    *(arg1 + 0x128) = (x21.d).b
    *(arg1 + 0x120) = x8_1 + entry_x2

return result
