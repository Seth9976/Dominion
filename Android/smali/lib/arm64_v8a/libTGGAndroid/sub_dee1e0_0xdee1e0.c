// 函数: sub_dee1e0
// 地址: 0xdee1e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int64_t x9

if ((arg4 & 1) != 0)
    x9 = 0
else
    x9 = 0x10000000000

int64_t x7 = x8[3]
void* x6 = x8[4]
int64_t x5 = x8[5]

if (arg3 != 0)
    int64_t x13_1 = x8[1]
    int64_t x4_1 = x8[2]
    int64_t x11_1 = *x8
    int64_t x3 = x13_1 * 0x14
    int64_t x16_2 = x4_1 * 0x14
    uint64_t x10_1 = x11_1 u>> 0x20
    int64_t x11_2 = x11_1 & 0xffffffff
    uint64_t x12_1 = x13_1 u>> 0x20
    int64_t x13_2 = x13_1 & 0xffffffff
    uint64_t x14_1 = x4_1 u>> 0x20
    uint64_t x15_2 = x16_2 u>> 0x20
    int64_t x16_3 = x16_2 & 0xfffffffc
    uint64_t x17_1 = x3 u>> 0x20
    int64_t x3_1 = x3 & 0xfffffffc
    int64_t x4_2 = x4_1 & 0xffffffff
    int64_t i
    
    do
        int64_t x19_1 = *arg2
        int64_t x20_1 = arg2[1]
        arg2 = &arg2[2]
        int64_t x7_1 = (x19_1 & 0xfffffffffff) + x7
        int64_t x20_3 = (x9 | x20_1 u>> 0x18) + x5
        uint64_t x5_1 = x7_1 u>> 0x20
        int64_t x7_2 = x7_1 & 0xffffffff
        void* x22_1 = ((x20_1 << 0x40 | x19_1) u>> 0x2c & 0xfffffffffff) + x6
        int64_t x24_1 = x7_2 * x10_1
        uint64_t x6_1 = x20_3 u>> 0x20
        int64_t x21_2 = x20_3 & 0xffffffff
        int64_t x25_1 = x7_2 * x11_2
        void* x20_4 = x22_1 & 0xffffffff
        uint64_t x19_4 = x22_1 u>> 0x20
        int64_t lr_1 = x20_4 * x15_2
        int64_t fp_2 = x24_1 + x5_1 * x11_2 + (x25_1 u>> 0x20)
        int64_t x22_2 = x21_2 * x17_1
        int64_t x8_1 = x20_4 * x16_3
        int64_t x26_1 = x21_2 * x3_1
        int64_t x25_2 = (0xffffffff & x25_1) | (0xffffffff & fp_2) << 0x20
        int64_t x24_3 = lr_1 + x19_4 * x16_3 + (x8_1 u>> 0x20)
        int64_t x0_1 = x22_2 + x6_1 * x3_1 + (x26_1 u>> 0x20)
        int64_t x26_3 = (zx.q(x26_1.d) & 0xfffffffc) | (0xffffffff & x0_1) << 0x20
        int64_t x28_1 = x7_2 * x12_1
        int64_t x8_3 = (zx.q(x8_1.d) & 0xfffffffc) | (0xffffffff & x24_3) << 0x20
        int64_t x0_4 = x5_1 * x10_1 + x6_1 * x17_1 + x19_4 * x15_2 + (fp_2 u>> 0x20)
            + (zx.q(fp_2 u< x24_1 ? 1 : 0) << 0x20) + (x0_1 u>> 0x20) + (x24_3 u>> 0x20)
            + (zx.q(x0_1 u< x22_2 ? 1 : 0) << 0x20)
        int64_t x22_3 = x7_2 * x13_2
        int64_t x8_4 = x8_3 + x25_2
        int64_t x0_5 = x0_4 + (zx.q(x24_3 u< lr_1 ? 1 : 0) << 0x20)
        int64_t fp_5 = x20_4 * x10_1
        int64_t x0_6
        
        if (x8_3 + x25_2 u< x8_3)
            x0_6 = x0_5 + 1
        else
            x0_6 = x0_5
        
        int64_t x8_5 = x8_4 + x26_3
        int64_t x24_5 = x28_1 + x5_1 * x13_2 + (x22_3 u>> 0x20)
        int64_t x25_3 = x21_2 * x15_2
        int64_t lr_3 = x20_4 * x11_2
        int64_t x0_7
        
        if (x8_4 + x26_3 u< x8_4)
            x0_7 = x0_6 + 1
        else
            x0_7 = x0_6
        
        int64_t x23_6 = x21_2 * x16_3
        int64_t x22_4 = (0xffffffff & x22_3) | (0xffffffff & x24_5) << 0x20
        int64_t x28_3 = fp_5 + x19_4 * x11_2 + (lr_3 u>> 0x20)
        int64_t x26_5 = x25_3 + x6_1 * x16_3 + (x23_6 u>> 0x20)
        int64_t lr_4 = (0xffffffff & lr_3) | (0xffffffff & x28_3) << 0x20
        int64_t x24_10 = x5_1 * x12_1 + x6_1 * x15_2 + x19_4 * x10_1 + (x24_5 u>> 0x20)
            + (zx.q(x24_5 u< x28_1 ? 1 : 0) << 0x20) + (x26_5 u>> 0x20) + (x28_3 u>> 0x20)
            + (zx.q(x26_5 u< x25_3 ? 1 : 0) << 0x20)
        int64_t x22_5 = lr_4 + x22_4
        int64_t x23_8 = (zx.q(x23_6.d) & 0xfffffffc) | (0xffffffff & x26_5) << 0x20
        int64_t x24_11 = x24_10 + (zx.q(x28_3 u< fp_5 ? 1 : 0) << 0x20)
        int64_t x24_12
        
        if (lr_4 + x22_4 u< lr_4)
            x24_12 = x24_11 + 1
        else
            x24_12 = x24_11
        
        int64_t x22_6 = x22_5 + x23_8
        int64_t x23_9 = x7_2 * x14_1
        int64_t x7_3 = x7_2 * x4_2
        int64_t x0_8 = (x0_7 << 0x40 | x8_5) u>> 0x2c
        int64_t x24_13
        
        if (x22_5 + x23_8 u< x22_5)
            x24_13 = x24_12 + 1
        else
            x24_13 = x24_12
        
        int64_t x0_9 = x0_8 + x22_6
        int64_t x5_3 = x23_9 + x5_1 * x4_2 + (x7_3 u>> 0x20)
        int64_t x24_14
        
        if (x0_8 + x22_6 u< x0_8)
            x24_14 = x24_13 + 1
        else
            x24_14 = x24_13
        
        int64_t x23_10 = x20_4 * x12_1
        int64_t x22_7 = x21_2 * x10_1
        int64_t x20_5 = x20_4 * x13_2
        int64_t x21_3 = x21_2 * x11_2
        int64_t x7_4 = (0xffffffff & x7_3) | (0xffffffff & x5_3) << 0x20
        int64_t x19_6 = x23_10 + x19_4 * x13_2 + (x20_5 u>> 0x20)
        int64_t x6_3 = x22_7 + x6_1 * x11_2 + (x21_3 u>> 0x20)
        int64_t x20_6 = (0xffffffff & x20_5) | (0xffffffff & x19_6) << 0x20
        int64_t x5_8 = x5_1 * x14_1 + x6_1 * x10_1 + x19_4 * x12_1 + (x5_3 u>> 0x20)
            + (zx.q(x5_3 u< x23_9 ? 1 : 0) << 0x20) + (x6_3 u>> 0x20) + (x19_6 u>> 0x20)
            + (zx.q(x6_3 u< x22_7 ? 1 : 0) << 0x20)
        int64_t x7_5 = x20_6 + x7_4
        int64_t x21_4 = (0xffffffff & x21_3) | (0xffffffff & x6_3) << 0x20
        int64_t x5_9 = x5_8 + (zx.q(x19_6 u< x23_10 ? 1 : 0) << 0x20)
        int64_t x5_10
        
        if (x20_6 + x7_4 u< x20_6)
            x5_10 = x5_9 + 1
        else
            x5_10 = x5_9
        
        int64_t x6_4 = x7_5 + x21_4
        int64_t x7_6 = (x24_14 << 0x40 | x0_9) u>> 0x2c
        int64_t x5_11
        
        if (x7_5 + x21_4 u< x7_5)
            x5_11 = x5_10 + 1
        else
            x5_11 = x5_10
        
        int64_t x6_5 = x7_6 + x6_4
        int64_t x5_12
        
        if (x7_6 + x6_4 u< x7_6)
            x5_12 = x5_11 + 1
        else
            x5_12 = x5_11
        
        int64_t x8_7 = ((x5_12 << 0x40 | x6_5) u>> 0x2a) * 5 + (x8_5 & 0xfffffffffff)
        x5 = x6_5 & 0x3ffffffffff
        i = arg3
        arg3 -= 1
        x6 = (x0_9 & 0xfffffffffff) + (x8_7 u>> 0x2c)
        x7 = x8_7 & 0xfffffffffff
    while (i != 1)

x8[3] = x7
*(*arg1 + 0x20) = x6
*(*arg1 + 0x28) = x5
