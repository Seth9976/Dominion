// 函数: _ZN5Botan8FE_255198sqr_iterERKS0_m
// 地址: 0xd44df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x14 = *arg1
int32_t x12 = *(arg1 + 4)
int32_t x9 = *(arg1 + 8)
int32_t x10 = *(arg1 + 0xc)
int32_t x11 = *(arg1 + 0x10)
int32_t x17 = *(arg1 + 0x14)
int32_t x16 = *(arg1 + 0x18)
int32_t x2 = *(arg1 + 0x1c)
int32_t x13 = *(arg1 + 0x20)
int32_t x15 = *(arg1 + 0x24)

if (arg2 != 0)
    int32_t x6_9
    int32_t x7_3
    int32_t x19_4
    uint64_t i
    
    do
        int32_t x22_1 = x11 << 1
        int32_t x28_1 = x16 * 0x13
        int32_t x7_1 = x17 << 1
        int32_t fp_1 = x2 * 0x26
        int32_t x23_1 = x13 * 0x13
        int32_t x21_1 = x15 * 0x26
        int32_t x6_1 = x10 << 1
        int32_t x20_1 = x2 << 1
        int32_t x19_1 = x9 << 1
        int32_t lr_7 = x12 << 1
        int32_t x25_7 = x14 << 1
        int64_t x14_1 = muls.dp.d(x22_1, x28_1) + muls.dp.d(x17 * 0x26, x17) + muls.dp.d(x6_1, fp_1)
            + muls.dp.d(x19_1, x23_1) + muls.dp.d(lr_7, x21_1) + muls.dp.d(x14, x14)
        int64_t x11_1 = muls.dp.d(x16 << 1, x23_1) + muls.dp.d(fp_1, x2) + muls.dp.d(x7_1, x21_1)
            + muls.dp.d(x9, x9) + muls.dp.d(lr_7, x6_1) + muls.dp.d(x25_7, x11)
        int64_t x12_2 = muls.dp.d(x7_1, x28_1) + muls.dp.d(x11, fp_1) + muls.dp.d(x9, x21_1)
            + muls.dp.d(x6_1, x23_1) + muls.dp.d(x25_7, x12) + ((x14_1 + 0x2000000) s>> 0x1a)
        int64_t x17_2 = muls.dp.d(x20_1, x23_1) + muls.dp.d(x16, x21_1) + muls.dp.d(x19_1, x10)
            + muls.dp.d(lr_7, x11) + muls.dp.d(x25_7, x17) + ((x11_1 + 0x2000000) s>> 0x1a)
        int64_t x9_2 = muls.dp.d(x7_1, fp_1) + muls.dp.d(x28_1, x16) + muls.dp.d(x22_1, x23_1)
            + muls.dp.d(x6_1, x21_1) + muls.dp.d(lr_7, x12) + muls.dp.d(x25_7, x9)
            + ((x12_2 + 0x1000000) s>> 0x19)
        int64_t x16_2 = muls.dp.d(x20_1, x21_1) + muls.dp.d(x23_1, x13) + muls.dp.d(x6_1, x10)
            + muls.dp.d(x19_1, x11) + muls.dp.d(lr_7, x7_1) + muls.dp.d(x25_7, x16)
            + ((x17_2 + 0x1000000) s>> 0x19)
        int64_t x10_2 = muls.dp.d(x11, x21_1) + muls.dp.d(x16, fp_1) + muls.dp.d(x7_1, x23_1)
            + muls.dp.d(lr_7, x9) + muls.dp.d(x25_7, x10) + ((x9_2 + 0x2000000) s>> 0x1a)
        int64_t x0_5 = muls.dp.d(x6_1, x11) + muls.dp.d(x13, x21_1) + muls.dp.d(x19_1, x17)
            + muls.dp.d(lr_7, x16) + muls.dp.d(x25_7, x2) + ((x16_2 + 0x2000000) s>> 0x1a)
        x9 = x9_2.d - ((x9_2 + 0x2000000).d & 0xfc000000)
        x6_9 = x16_2.d - ((x16_2 + 0x2000000).d & 0xfc000000)
        int64_t x11_3 =
            x11_1 - ((x11_1 + 0x2000000) & 0xfffffffffc000000) + ((x10_2 + 0x1000000) s>> 0x19)
        int64_t x13_2 = muls.dp.d(x11, x11) + muls.dp.d(x21_1, x15) + muls.dp.d(x6_1, x7_1)
            + muls.dp.d(x19_1, x16) + muls.dp.d(lr_7, x20_1) + muls.dp.d(x25_7, x13)
            + ((x0_5 + 0x1000000) s>> 0x19)
        x10 = x10_2.d - ((x10_2 + 0x1000000).d & 0xfe000000)
        x19_4 = x0_5.d - ((x0_5 + 0x1000000).d & 0xfe000000)
        x7_3 = x17_2.d - ((x17_2 + 0x1000000).d & 0xfe000000) + ((x11_3 + 0x2000000) u>> 0x1a).d
        int64_t x15_2 = muls.dp.d(x6_1, x16) + muls.dp.d(x22_1, x17) + muls.dp.d(x19_1, x2)
            + muls.dp.d(lr_7, x13) + muls.dp.d(x25_7, x15) + ((x13_2 + 0x2000000) s>> 0x1a)
        x11 = x11_3.d - ((x11_3 + 0x2000000).d & 0xfc000000)
        x13 = x13_2.d - ((x13_2 + 0x2000000).d & 0xfc000000)
        int64_t x14_3 = x14_1 - ((x14_1 + 0x2000000) & 0xfffffffffc000000)
            + ((x15_2 + 0x1000000) s>> 0x19) * 0x13
        x15 = x15_2.d - ((x15_2 + 0x1000000).d & 0xfe000000)
        x12 = x12_2.d - ((x12_2 + 0x1000000).d & 0xfe000000) + ((x14_3 + 0x2000000) u>> 0x1a).d
        i = arg2
        arg2 -= 1
        x14 = x14_3.d - ((x14_3 + 0x2000000).d & 0xfc000000)
        x17 = x7_3
        x16 = x6_9
        x2 = x19_4
    while (i != 1)
    x2 = x19_4
    x16 = x6_9
    x17 = x7_3

int32_t* entry_x8
*entry_x8 = x14
entry_x8[1] = x12
entry_x8[2] = x9
entry_x8[3] = x10
entry_x8[4] = x11
entry_x8[5] = x17
entry_x8[6] = x16
entry_x8[7] = x2
entry_x8[8] = x13
entry_x8[9] = x15
