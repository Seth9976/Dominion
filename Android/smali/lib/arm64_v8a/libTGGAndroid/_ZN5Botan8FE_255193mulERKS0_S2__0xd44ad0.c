// 函数: _ZN5Botan8FE_255193mulERKS0_S2_
// 地址: 0xd44ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x13 = *(arg1 + 4)
int64_t x11 = *(arg1 + 8)
int64_t x16 = *(arg1 + 0xc)
int64_t x10 = *(arg1 + 0x10)
int64_t x17 = *(arg1 + 0x14)
int64_t x14 = *(arg1 + 0x18)
int64_t x2 = *(arg1 + 0x1c)
int64_t x12 = *(arg1 + 0x20)
int64_t x0 = *(arg1 + 0x24)
int64_t x21 = *arg2
int64_t x19 = *(arg2 + 4)
int64_t x4 = x13 << 1
int64_t x5 = x16 << 1
int64_t x3 = x0 << 1
int64_t x7 = x17 << 1
int64_t x6 = x2 << 1
int64_t lr = *(arg2 + 8)
int64_t x20_1 = *(arg2 + 0xc)
int64_t lr_1 = lr * 0x13
int64_t lr_2 = x20_1 * 0x13
int64_t x21_4 = *(arg2 + 0x10)
int64_t lr_3 = *(arg2 + 0x14)
int64_t x21_5 = x21_4 * 0x13
int64_t x21_6 = lr_3 * 0x13
int64_t lr_4 = *(arg2 + 0x18)
int64_t x21_7 = *(arg2 + 0x1c)
int64_t lr_5 = lr_4 * 0x13
int64_t lr_6 = *(arg2 + 0x20)
int64_t x1 = *(arg2 + 0x24)
int64_t x21_8 = x21_7 * 0x13
int64_t x19_8 = x21 * x9 + x19 * x3 * 0x13 + lr_1 * x12 + lr_2 * x6 + x21_5 * x14 + x21_6 * x7
    + lr_5 * x10 + x21_8 * x5
int64_t x21_9 = lr_6 * 0x13
int64_t x16_1 = x21 * x13 + x19 * x9 + lr_1 * x0 + lr_2 * x12 + x21_5 * x2 + x21_6 * x14
    + lr_5 * x17 + x21_8 * x10 + x21_9 * x16
int64_t x2_1 = x21 * x17 + x19 * x10 + lr * x16 + x20_1 * x11 + x21_4 * x13 + lr_3 * x9 + lr_5 * x0
    + x21_8 * x12 + x21_9 * x2
int64_t x17_1 = x21 * x16 + x19 * x11 + lr * x13 + x20_1 * x9 + x21_5 * x0 + x21_6 * x12 + lr_5 * x2
    + x21_8 * x14 + x21_9 * x17
int64_t x0_1 = x21 * x2 + x19 * x14 + lr * x17 + x20_1 * x10 + x21_4 * x16 + lr_3 * x11 + lr_4 * x13
    + x21_7 * x9 + x21_9 * x0
int64_t x13_1 = x21 * x0 + x19 * x12 + lr * x2 + x20_1 * x14 + x21_4 * x17 + lr_3 * x10 + lr_4 * x16
    + x21_7 * x11 + lr_6 * x13
int64_t x20_7 = x21 * x12 + x19 * x6 + lr * x14 + x20_1 * x7 + x21_4 * x10 + lr_3 * x5 + lr_4 * x11
    + x21_7 * x4 + lr_6 * x9
int64_t x22_8 = x21 * x10 + x19 * x5 + lr * x11 + x20_1 * x4 + x21_4 * x9 + x21_6 * x3 + lr_5 * x12
    + x21_8 * x6 + x21_9 * x14
int64_t x23_8 = x21 * x11 + x19 * x4 + lr * x9 + lr_2 * x3 + x21_5 * x12 + x21_6 * x6 + lr_5 * x14
    + x21_8 * x7 + x21_9 * x10
int64_t x24_8 = x21 * x14 + x19 * x7 + lr * x10 + x20_1 * x5 + x21_4 * x11 + lr_3 * x4 + lr_4 * x9
    + x21_8 * x3 + x21_9 * x12
int64_t x21_10 = x1 * 0x13
int64_t x7_1 = x22_8 + x21_10 * x7
int64_t x13_2 = x19_8 + x21_9 * x11 + x21_10 * x4
int64_t x14_2 = x2_1 + x21_10 * x14 + ((x7_1 + 0x2000000) s>> 0x1a)
int64_t x3_2 = x24_8 + x21_10 * x6 + ((x14_2 + 0x1000000) s>> 0x19)
int64_t x12_2 = x0_1 + x21_10 * x12 + ((x3_2 + 0x2000000) s>> 0x1a)
int64_t x17_3 = x20_7 + x21_10 * x3 + ((x12_2 + 0x1000000) s>> 0x19)
int64_t x9_2 = x13_1 + x1 * x9 + ((x17_3 + 0x2000000) s>> 0x1a)
int64_t x13_4 =
    x13_2 - ((x13_2 + 0x2000000) & 0xfffffffffc000000) + ((x9_2 + 0x1000000) s>> 0x19) * 0x13
int64_t x11_2 = x16_1 + x21_10 * x11 + ((x13_2 + 0x2000000) s>> 0x1a)
int64_t x1_2 = x23_8 + x21_10 * x5 + ((x11_2 + 0x1000000) s>> 0x19)
int64_t x10_2 = x17_1 + x21_10 * x10 + ((x1_2 + 0x2000000) s>> 0x1a)
uint64_t result = zx.q(x3_2.d - ((x3_2 + 0x2000000).d & 0xfc000000))
int64_t x15_2 = x7_1 - ((x7_1 + 0x2000000) & 0xfffffffffc000000) + ((x10_2 + 0x1000000) s>> 0x19)
int32_t* entry_x8
entry_x8[6] = result.d
entry_x8[7] = x12_2.d - ((x12_2 + 0x1000000).d & 0xfe000000)
entry_x8[2] = x1_2.d - ((x1_2 + 0x2000000).d & 0xfc000000)
entry_x8[3] = x10_2.d - ((x10_2 + 0x1000000).d & 0xfe000000)
entry_x8[4] = x15_2.d - ((x15_2 + 0x2000000).d & 0xfc000000)
entry_x8[5] = x14_2.d - ((x14_2 + 0x1000000).d & 0xfe000000) + ((x15_2 + 0x2000000) u>> 0x1a).d
*entry_x8 = x13_4.d - ((x13_4 + 0x2000000).d & 0xfc000000)
entry_x8[1] = x11_2.d - ((x11_2 + 0x1000000).d & 0xfe000000) + ((x13_4 + 0x2000000) u>> 0x1a).d
entry_x8[8] = x17_3.d - ((x17_3 + 0x2000000).d & 0xfc000000)
entry_x8[9] = x9_2.d - ((x9_2 + 0x1000000).d & 0xfe000000)
return result
