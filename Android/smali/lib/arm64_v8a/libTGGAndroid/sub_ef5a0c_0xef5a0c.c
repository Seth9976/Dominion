// 函数: sub_ef5a0c
// 地址: 0xef5a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x4 = *arg2
int64_t x11 = arg2[1]
int64_t x10 = arg2[2]
int64_t x16 = arg2[3]
int64_t x25 = arg2[4]
int64_t var_f8 = arg1

if (arg3 != 0)
    int64_t var_68_1 = arg3
    bool cond:15_1
    
    do
        uint64_t x20_1 = x4 u>> 0x20
        int64_t x24_1 = x25 * 0x26
        int64_t x22_2 = (x4 & 0xffffffff) * x20_1
        int64_t x21_1 = x10 * 0x26
        uint64_t x1 = mulu.dp.d(x4.d, x4.d)
        uint64_t x17_1 = x11 u>> 0x20
        int64_t x28_1 = x24_1 & 0xfffffffe
        int64_t x3_1 = x11 & 0xffffffff
        uint64_t x2 = x16 u>> 0x20
        uint64_t x27_1 = x24_1 u>> 0x20
        uint64_t lr_1 = x21_1 u>> 0x20
        int64_t x9_1 = x17_1 * x28_1
        int64_t x0_1 = (x22_2 << 1) + (x1 u>> 0x20)
        int64_t x7_1 = x25 * 0x13
        int64_t x12_1 = x16 & 0xffffffff
        uint64_t fp_1 = mulu.dp.d(x11.d, x24_1.d)
        int64_t x8_2 = (x21_1 & 0xfffffffe) * x2
        uint64_t x21_2 = mulu.dp.d(x21_1.d, x16.d)
        int64_t x22_4 = x9_1 + x3_1 * x27_1 + (fp_1 u>> 0x20)
        uint32_t x14_1 = (x4 u>> 0x1f).d
        int64_t lr_3 = x8_2 + lr_1 * x12_1 + (x21_2 u>> 0x20)
        int32_t x14_2 = x10.d
        uint64_t x6_1 = x10 u>> 0x20
        int64_t x23_1 = x10 & 0xffffffff
        uint64_t x8_3 = x7_1 u>> 0x20
        uint64_t x19_1 = x25 u>> 0x20
        int64_t x21_4 = (zx.q(x21_2.d) & 0xfffffffe) | (0xffffffff & lr_3) << 0x20
        int64_t x10_2 = x8_3 * (x25 & 0xffffffff)
        uint64_t x7_2 = mulu.dp.d(x7_1.d, x25.d)
        int64_t x10_3 = x10_2 + (x7_1 & 0xffffffff) * x19_1 + (x7_2 u>> 0x20)
        uint64_t x26_1 = x11 u>> 0x1f & 0xffffffff
        int64_t fp_3 = (zx.q(fp_1.d) & 0xfffffffe) | (0xffffffff & x22_4) << 0x20
        int64_t x1_1 = (0xffffffff & x1) | (0xffffffff & x0_1) << 0x20
        int64_t x1_2 = x1_1 + fp_3
        int64_t fp_4 = x16 * 0x13
        int64_t x9_3 = lr_1 * x2 + x17_1 * x27_1 + x20_1 * x20_1 + (lr_3 u>> 0x20)
            + (x22_4 u>> 0x20) + (zx.q(lr_3 u< x8_2 ? 1 : 0) << 0x20)
            + (zx.q(x22_4 u< x9_1 ? 1 : 0) << 0x20)
        uint64_t x26_3 = fp_4 u>> 0x20
        int64_t x9_5 = x9_3 + (x0_1 u>> 0x20) + (zx.q(x0_1 u< x22_2 ? 1 : 0) << 0x20)
        int64_t x20_3 = x26_3 * x12_1
        uint64_t fp_5 = mulu.dp.d(fp_4.d, x16.d)
        int64_t x0_2 = x6_1 * x28_1
        int64_t x28_2 = x28_1 * x2
        int64_t x9_6
        
        if (x1_1 + fp_3 u< x1_1)
            x9_6 = x9_5 + 1
        else
            x9_6 = x9_5
        
        int64_t x10_4 = x1_2 + x21_4
        uint64_t x23_2 = mulu.dp.d(x14_2, x24_1.d)
        int64_t x7_3 = x20_3 + (fp_4 & 0xffffffff) * x2 + (fp_5 u>> 0x20)
        int64_t x27_3 = x0_2 + x23_1 * x27_1 + (x23_2 u>> 0x20)
        uint64_t x15_1 = zx.q(x4.d << 1)
        uint64_t x4_1 = x4 u>> 0x1f & 0xffffffff
        int64_t x5_1 = x3_1 * x17_1
        int64_t x17_2 = x15_1 * x17_1
        uint64_t x10_6 = mulu.dp.d(x11.d, x15_1.d)
        int64_t x4_4 = x17_2 + mulu.dp.d(x14_1, x11.d) + (x10_6 u>> 0x20)
        int64_t x9_7
        
        if (x1_2 + x21_4 u< x1_2)
            x9_7 = x9_6 + 1
        else
            x9_7 = x9_6
        
        int64_t x20_4 = x15_1 * x6_1
        uint64_t x9_10 = mulu.dp.d(x14_2, x15_1.d)
        int64_t x6_4 = x20_4 + mulu.dp.d(x14_1, x14_2) + (x9_10 u>> 0x20)
        uint64_t x20_5 = mulu.dp.d(x11.d, x11.d)
        int64_t x2_1 = (x5_1 << 1) + (x20_5 u>> 0x20)
        uint64_t lr_6 = mulu.dp.d(x24_1.d, x16.d)
        int64_t x5_2 = x28_2 + x27_1 * x12_1 + (lr_6 u>> 0x20)
        int64_t x28_3 = x23_1 * x6_1
        uint64_t x24_2 = mulu.dp.d(x14_2, x14_2)
        int64_t x26_9 = (x28_3 << 1) + (x24_2 u>> 0x20)
        int64_t x8_10 = x15_1 * x2
        uint64_t x22_8 = mulu.dp.d(x16.d, x15_1.d)
        int64_t x12_6 = x8_10 + mulu.dp.d(x14_1, x16.d) + (x22_8 u>> 0x20)
        int64_t x0_3 = x15_1 * x19_1
        uint64_t x15_2 = mulu.dp.d(x25.d, x15_1.d)
        uint64_t x8_11 = zx.q(x11.d << 1)
        uint32_t x10_8 = (x11 u>> 0x1f).d
        uint64_t x19_3 = mulu.dp.d(x14_2, x8_11.d)
        int64_t x9_16 = x8_11 * x6_1
        int64_t x11_4 = x9_16 + mulu.dp.d(x10_8, x14_2) + (x19_3 u>> 0x20)
        int64_t fp_6 = (0xffffffff & fp_5) | (0xffffffff & x7_3) << 0x20
        int64_t x1_7 = x0_3 + mulu.dp.d(x14_1, x25.d) + (x15_2 u>> 0x20)
        int64_t x7_5 = zx.q(x7_2.d) | (0xffffffff & x10_3) << 0x20
        int64_t x25_2 = x8_11 * x2
        uint64_t x8_12 = mulu.dp.d(x16.d, x8_11.d)
        int64_t x3_4 = x26_3 * x2 + x6_1 * x27_1 + (x7_3 u>> 0x20) + (x27_3 u>> 0x20) + x4_1 * x17_1
            + (zx.q(x7_3 u< x20_3 ? 1 : 0) << 0x20) + (zx.q(x27_3 u< x0_2 ? 1 : 0) << 0x20)
        int64_t x16_2 = (zx.q(lr_6.d) & 0xfffffffe) | (0xffffffff & x5_2) << 0x20
        int64_t x10_11 = x25_2 + mulu.dp.d(x10_8, x16.d) + (x8_12 u>> 0x20)
        int64_t x3_6 = x3_4 + (x4_4 u>> 0x20) + (zx.q(x4_4 u< x17_2 ? 1 : 0) << 0x20)
        int64_t x9_25 = x27_1 * x2 + x17_1 * x17_1 + (x5_2 u>> 0x20)
            + (zx.q(x5_2 u< x28_2 ? 1 : 0) << 0x20) + x4_1 * x6_1 + (x2_1 u>> 0x20)
            + (zx.q(x2_1 u< x5_1 ? 1 : 0) << 0x20)
        int64_t x9_27 = x9_25 + (x6_4 u>> 0x20) + (zx.q(x6_4 u< x20_4 ? 1 : 0) << 0x20)
        int64_t x23_4 = (zx.q(x23_2.d) & 0xfffffffe) | (0xffffffff & x27_3) << 0x20
        int64_t x5_4 = (zx.q(x10_6.d) & 0xfffffffe) | (0xffffffff & x4_4) << 0x20
        int64_t x17_8 = (zx.q(x19_3.d) & 0xfffffffe) | (0xffffffff & x11_4) << 0x20
        int64_t x20_6 = (0xffffffff & x20_5) | (0xffffffff & x2_1) << 0x20
        int64_t x4_5 = x5_4 + x23_4
        int64_t x11_6 = x8_3 * x19_1 + (x10_3 u>> 0x20) + x26_1 * x6_1
            + (zx.q(x10_3 u< x10_2 ? 1 : 0) << 0x20) + x4_1 * x2 + (x11_4 u>> 0x20)
            + (zx.q(x11_4 u< x9_16 ? 1 : 0) << 0x20)
        int64_t x3_7
        
        if (x5_4 + x23_4 u< x5_4)
            x3_7 = x3_6 + 1
        else
            x3_7 = x3_6
        
        int64_t x4_6 = x4_5 + fp_6
        int64_t x2_3 = (x9_7 << 0x40 | x10_4) u>> 0x33
        int64_t x13_14 = (zx.q(x9_10.d) & 0xfffffffe) | (0xffffffff & x6_4) << 0x20
        int64_t x3_8
        
        if (x4_5 + fp_6 u< x4_5)
            x3_8 = x3_7 + 1
        else
            x3_8 = x3_7
        
        int64_t x2_4 = x2_3 + x4_6
        arg1 = (zx.q(x22_8.d) & 0xfffffffe) | (0xffffffff & x12_6) << 0x20
        int64_t x12_7
        
        if (x2_3 + x4_6 u< x2_3)
            x12_7 = x3_8 + 1
        else
            x12_7 = x3_8
        
        int64_t x13_15 = x13_14 + x20_6
        int64_t x9_28
        
        if (x13_14 + x20_6 u< x13_14)
            x9_28 = x9_27 + 1
        else
            x9_28 = x9_27
        
        int64_t x13_16 = x13_15 + x16_2
        int64_t x12_8 = (x12_7 << 0x40 | x2_4) u>> 0x33
        int64_t x8_14 = (zx.q(x8_12.d) & 0xfffffffe) | (0xffffffff & x10_11) << 0x20
        int64_t x9_29
        
        if (x13_15 + x16_2 u< x13_15)
            x9_29 = x9_28 + 1
        else
            x9_29 = x9_28
        
        int64_t x12_9 = x12_8 + x13_16
        int64_t x10_13 = x6_1 * x6_1 + x26_1 * x2 + (x26_9 u>> 0x20) + x4_1 * x19_1
            + (zx.q(x26_9 u< x28_3 ? 1 : 0) << 0x20) + (x10_11 u>> 0x20)
            + (zx.q(x10_11 u< x25_2 ? 1 : 0) << 0x20)
        int64_t x11_8 = x11_6 + (x12_6 u>> 0x20) + (zx.q(x12_6 u< x8_10 ? 1 : 0) << 0x20)
        int64_t x10_15 = x10_13 + (x1_7 u>> 0x20) + (zx.q(x1_7 u< x0_3 ? 1 : 0) << 0x20)
        int64_t x9_30
        
        if (x12_8 + x13_16 u< x12_8)
            x9_30 = x9_29 + 1
        else
            x9_30 = x9_29
        
        int64_t x13_18 = arg1 + x17_8
        int64_t x11_9
        
        if (arg1 + x17_8 u< arg1)
            x11_9 = x11_8 + 1
        else
            x11_9 = x11_8
        
        int64_t x13_19 = x13_18 + x7_5
        int64_t x9_31 = (x9_30 << 0x40 | x12_9) u>> 0x33
        int64_t x15_9 = (zx.q(x15_2.d) & 0xfffffffe) | (0xffffffff & x1_7) << 0x20
        int64_t x11_10
        
        if (x13_18 + x7_5 u< x13_18)
            x11_10 = x11_9 + 1
        else
            x11_10 = x11_9
        
        int64_t x9_32 = x9_31 + x13_19
        int64_t x24_3 = (0xffffffff & x24_2) | (0xffffffff & x26_9) << 0x20
        int64_t x11_11
        
        if (x9_31 + x13_19 u< x9_31)
            x11_11 = x11_10 + 1
        else
            x11_11 = x11_10
        
        int64_t x8_15 = x15_9 + x8_14
        int64_t x10_16
        
        if (x15_9 + x8_14 u< x15_9)
            x10_16 = x10_15 + 1
        else
            x10_16 = x10_15
        
        int64_t x8_16 = x8_15 + x24_3
        int64_t x11_12 = (x11_11 << 0x40 | x9_32) u>> 0x33
        int64_t x10_17
        
        if (x8_15 + x24_3 u< x8_15)
            x10_17 = x10_16 + 1
        else
            x10_17 = x10_16
        
        int64_t x8_17 = x11_12 + x8_16
        int64_t x10_18
        
        if (x11_12 + x8_16 u< x11_12)
            x10_18 = x10_17 + 1
        else
            x10_18 = x10_17
        
        x25 = x8_17 & 0x7ffffffffffff
        int64_t x10_20 = (x10_4 & 0x7ffffffffffff) + ((x10_18 << 0x40 | x8_17) u>> 0x33) * 0x13
        cond:15_1 = var_68_1 != 1
        var_68_1 -= 1
        int64_t x8_20 = (x2_4 & 0x7ffffffffffff) + (x10_20 u>> 0x33)
        x16 = x9_32 & 0x7ffffffffffff
        x4 = x10_20 & 0x7ffffffffffff
        x10 = (x12_9 & 0x7ffffffffffff) + (x8_20 u>> 0x33)
        x11 = x8_20 & 0x7ffffffffffff
    while (cond:15_1)

*(var_f8 + 0x20) = x25
*var_f8 = x4
*(var_f8 + 8) = x11
*(var_f8 + 0x10) = x10
*(var_f8 + 0x18) = x16
