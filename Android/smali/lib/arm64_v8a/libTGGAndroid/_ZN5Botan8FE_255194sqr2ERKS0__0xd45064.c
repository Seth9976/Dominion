// 函数: _ZN5Botan8FE_255194sqr2ERKS0_
// 地址: 0xd45064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x6 = *arg1
int64_t x7 = *(arg1 + 4)
int64_t x10 = *(arg1 + 8)
int64_t x19 = *(arg1 + 0xc)
int64_t x13 = *(arg1 + 0x10)
int64_t x4 = *(arg1 + 0x14)
int64_t x14 = *(arg1 + 0x18)
int64_t x17 = *(arg1 + 0x1c)
int64_t x15 = x6 << 1
int64_t x2 = x7 << 1
int64_t x20 = x10 << 1
int64_t x12 = *(arg1 + 0x20)
int64_t x11 = *(arg1 + 0x24)
int64_t x16 = x19 << 1
int64_t x3 = x13 << 1
int64_t x0 = x4 << 1
int64_t x22 = x14 * 0x13
int64_t x23 = x17 * 0x26
int64_t x1 = x12 * 0x13
int64_t x17_1 = x17 << 1
int64_t x5 = x11 * 0x26
int64_t x16_1 = (x6 * x6 + x4 * x4 * 0x26 + x22 * x3 + x23 * x16 + x1 * x20 + x5 * x2) << 1
int64_t x17_2 = (x10 * x10 + x16 * x2 + x13 * x15 + x23 * x17 + ((x14 * x1) << 1) + x5 * x0) << 1
int64_t x2_3 =
    ((x16_1 + 0x2000000) s>> 0x1a) + ((x15 * x7 + x22 * x0 + x23 * x13 + x1 * x16 + x5 * x10) << 1)
int64_t x14_2 = ((x17_2 + 0x2000000) s>> 0x1a)
    + ((x20 * x19 + x13 * x2 + x4 * x15 + x1 * x17_1 + x5 * x14) << 1)
int64_t x3_4 = ((x2_3 + 0x1000000) s>> 0x19)
    + ((x2 * x7 + x10 * x15 + x22 * x14 + x23 * x0 + x1 * x3 + x5 * x16) << 1)
int64_t x0_6 = ((x14_2 + 0x1000000) s>> 0x19)
    + ((x13 * x20 + x16 * x19 + x0 * x2 + x14 * x15 + x1 * x12 + x5 * x17_1) << 1)
int64_t x1_7 =
    ((x0_6 + 0x2000000) s>> 0x1a) + ((x16 * x13 + x4 * x20 + x14 * x2 + x17 * x15 + x5 * x12) << 1)
int64_t x4_7 = ((x1_7 + 0x1000000) s>> 0x19)
    + ((x13 * x13 + x14 * x20 + x0 * x16 + x17_1 * x2 + x12 * x15 + x5 * x11) << 1)
int64_t x15_2 =
    ((x4_7 + 0x2000000) s>> 0x1a) + ((x3 * x4 + x14 * x16 + x17 * x20 + x12 * x2 + x11 * x15) << 1)
int64_t x9 =
    x16_1 - ((x16_1 + 0x2000000) & 0xfffffffffc000000) + ((x15_2 + 0x1000000) s>> 0x19) * 0x13
int64_t x13_2 =
    ((x3_4 + 0x2000000) s>> 0x1a) + ((x2 * x10 + x19 * x15 + x23 * x14 + x1 * x0 + x5 * x13) << 1)
int64_t x17_4 = x17_2 - ((x17_2 + 0x2000000) & 0xfffffffffc000000) + ((x13_2 + 0x1000000) s>> 0x19)
uint64_t result = zx.q(x1_7.d - ((x1_7 + 0x1000000).d & 0xfe000000))
int32_t* entry_x8
entry_x8[2] = x3_4.d - ((x3_4 + 0x2000000).d & 0xfc000000)
entry_x8[3] = x13_2.d - ((x13_2 + 0x1000000).d & 0xfe000000)
entry_x8[6] = x0_6.d - ((x0_6 + 0x2000000).d & 0xfc000000)
entry_x8[7] = result.d
entry_x8[4] = x17_4.d - ((x17_4 + 0x2000000).d & 0xfc000000)
entry_x8[5] = x14_2.d - ((x14_2 + 0x1000000).d & 0xfe000000) + ((x17_4 + 0x2000000) u>> 0x1a).d
*entry_x8 = x9.d - ((x9 + 0x2000000).d & 0xfc000000)
entry_x8[1] = x2_3.d - ((x2_3 + 0x1000000).d & 0xfe000000) + ((x9 + 0x2000000) u>> 0x1a).d
entry_x8[8] = x4_7.d - ((x4_7 + 0x2000000).d & 0xfc000000)
entry_x8[9] = x15_2.d - ((x15_2 + 0x1000000).d & 0xfe000000)
return result
