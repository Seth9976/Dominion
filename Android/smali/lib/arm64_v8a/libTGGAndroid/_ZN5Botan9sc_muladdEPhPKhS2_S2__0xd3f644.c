// 函数: _ZN5Botan9sc_muladdEPhPKhS2_S2_
// 地址: 0xd3f644
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_4 = zx.q(*arg2) | (zx.q(zx.d(arg2[2]) << 0x10) & 0x1f0000)
int64_t x24_2 = zx.q(*(arg2 + 0x15)) | (zx.q(zx.d(arg2[0x17]) << 0x10) & 0x1f0000)
uint64_t x1_4 = zx.q(*(arg2 + 2)) u>> 5 & 0x1fffff
uint64_t x16_1 = zx.q(*(arg2 + 0x1c)) u>> 7
uint64_t x27_1 = zx.q(*(arg3 + 2)) u>> 5 & 0x1fffff
uint64_t x7_1 = zx.q(*(arg2 + 0xa)) u>> 4 & 0x1fffff
uint64_t x6_1 = (zx.q(*(arg2 + 5)) | zx.q(zx.d(arg2[7]) << 0x10)) u>> 2 & 0x1fffff
int64_t x28_2 = zx.q(*arg3) | (zx.q(zx.d(arg3[2]) << 0x10) & 0x1f0000)
uint64_t x21_2 = zx.q(*(arg2 + 7)) u>> 7 & 0x1fffff
uint64_t x23_2 = ((-0xff0001 & zx.q(*(arg2 + 0x12))) | zx.q(arg2[0x14]) << 0x10) u>> 3
int64_t x14_4 = (zx.q(*arg4) | (zx.q(zx.d(arg4[2]) << 0x10) & 0x1f0000)) + x28_2 * x0_4
uint64_t x22_1 = zx.q(*(arg2 + 0xf)) u>> 6 & 0x1fffff
uint64_t x25_1 = zx.q(*(arg2 + 0x17)) u>> 5 & 0x1fffff
uint64_t x20_1 = (zx.q(*(arg2 + 0xd)) | zx.q(zx.d(arg2[0xf]) << 0x10)) u>> 1 & 0x1fffff
int64_t x19_2 = zx.q(*(arg3 + 0x15)) | (zx.q(zx.d(arg3[0x17]) << 0x10) & 0x1f0000)
uint64_t x12_2 = (zx.q(*(arg2 + 0x1a)) | zx.q(zx.d(arg2[0x1c]) << 0x10)) u>> 2 & 0x1fffff
uint64_t x8_21 = zx.q(*(arg3 + 7)) u>> 7 & 0x1fffff
uint64_t x9_6 = zx.q(*(arg3 + 0xa)) u>> 4 & 0x1fffff
uint64_t x28_4 = zx.q(*(arg3 + 0xf)) u>> 6 & 0x1fffff
uint64_t x12_4 = ((-0xff0001 & zx.q(*(arg3 + 0x12))) | zx.q(arg3[0x14]) << 0x10) u>> 3
uint64_t x2 = zx.q(*(arg3 + 0x17)) u>> 5 & 0x1fffff
uint64_t x10_6 = (zx.q(*(arg3 + 5)) | zx.q(zx.d(arg3[7]) << 0x10)) u>> 2 & 0x1fffff
uint64_t x14_5 = zx.q(*(arg3 + 0x1c)) u>> 7
uint64_t x11_8 = (zx.q(*(arg3 + 0xd)) | zx.q(zx.d(arg3[0xf]) << 0x10)) u>> 1 & 0x1fffff
uint64_t x13_2 = (zx.q(*(arg3 + 0x1a)) | zx.q(zx.d(arg3[0x1c]) << 0x10)) u>> 2 & 0x1fffff
int64_t x8_24 = x12_4 * x16_1 + x2 * x25_1 + x19_2 * x12_2 + x23_2 * x14_5 + x13_2 * x24_2
int64_t x26_10 = x12_2 * x28_4 + x11_8 * x16_1 + x12_4 * x25_1 + x23_2 * x2 + x19_2 * x24_2
    + x20_1 * x14_5 + x13_2 * x22_1
int64_t x23_4 = x27_1 * x16_1 + x8_21 * x25_1 + x24_2 * x9_6 + x10_6 * x12_2 + x28_4 * x22_1
    + x11_8 * x23_2 + x12_4 * x20_1 + x2 * x21_2 + x19_2 * x7_1
int64_t x9_26 = x8_21 * x16_1 + x12_2 * x9_6 + x24_2 * x28_4 + x11_8 * x25_1 + x12_4 * x23_2
    + x20_1 * x2 + x19_2 * x22_1 + x14_5 * x21_2 + x13_2 * x7_1
int64_t x15_12 = x12_2 * x27_1 + x28_2 * x16_1 + x24_2 * x8_21 + x23_2 * x9_6 + x10_6 * x25_1
    + x20_1 * x28_4 + x11_8 * x22_1 + x12_4 * x7_1 + x6_1 * x2
int64_t x22_3 = x23_2 * x27_1 + x28_2 * x24_2 + x20_1 * x8_21 + x9_6 * x7_1 + x10_6 * x22_1
    + x6_1 * x28_4 + x11_8 * x21_2 + x12_4 * x1_4 + x19_2 * x0_4
int64_t x9_28 = x27_1 * x25_1 + x28_2 * x12_2 + x23_2 * x8_21 + x9_6 * x22_1 + x10_6 * x24_2
    + x28_4 * x7_1 + x11_8 * x20_1 + x12_4 * x21_2 + x2 * x1_4
int64_t x16_28 = x12_2 * x8_21 + x9_6 * x25_1 + x10_6 * x16_1 + x23_2 * x28_4 + x11_8 * x24_2
    + x12_4 * x22_1 + x2 * x7_1 + x19_2 * x20_1 + x6_1 * x14_5
int64_t x12_6 = x23_4 + x14_5 * x1_4 + x13_2 * x6_1
int64_t x11_11 = x24_2 * x27_1 + x28_2 * x25_1 + x8_21 * x22_1 + x20_1 * x9_6 + x10_6 * x23_2
    + x28_4 * x21_2 + x11_8 * x7_1 + x12_4 * x6_1 + x0_4 * x2
int64_t x9_30 = x2 * x16_1 + x14_5 * x25_1 + x13_2 * x12_2
int64_t x8_32 = x14_5 * x16_1
int64_t x23_5 = x27_1 * x1_4 + x28_2 * x6_1 + x10_6 * x0_4
    + ((zx.q(*(arg4 + 5)) | zx.q(zx.d(arg4[7]) << 0x10)) u>> 2 & 0x1fffff)
int64_t x27_8 = x0_4 * x27_1 + x28_2 * x1_4 + (zx.q(*(arg4 + 2)) u>> 5 & 0x1fffff)
    + ((x14_4 + 0x100000) u>> 0x15)
int64_t x11_13 = x12_2 * x14_5 + x13_2 * x16_1 + ((x9_30 + 0x100000) u>> 0x15)
int64_t x24_4 = x27_1 * x21_2 + x28_2 * x7_1 + x8_21 * x1_4 + x0_4 * x9_6 + x10_6 * x6_1
    + (zx.q(*(arg4 + 0xa)) u>> 4 & 0x1fffff)
int64_t x4_6 = x20_1 * x27_1 + x28_2 * x22_1 + x8_21 * x21_2 + x6_1 * x9_6 + x10_6 * x7_1
    + x0_4 * x28_4 + x11_8 * x1_4 + (zx.q(*(arg4 + 0xf)) u>> 6 & 0x1fffff)
int64_t x25_7 = x27_1 * x7_1 + x28_2 * x20_1 + x6_1 * x8_21 + x9_6 * x1_4 + x10_6 * x21_2
    + x11_8 * x0_4
    + (((0xff00ffff & zx.q(*(arg4 + 0xd))) | zx.q(zx.d(arg4[0xf]) << 0x10)) u>> 1 & 0x1fffff)
int64_t x19_3 = x8_32 - ((x8_32 + 0x100000) & 0x7ffffffe00000) + ((x11_13 + 0x100000) u>> 0x15)
int64_t x5_8 = x11_13 - ((x11_13 + 0x100000) & 0x1ffffffe00000)
int64_t x9_34 =
    x12_2 * x2 + x19_2 * x16_1 + x24_2 * x14_5 + x13_2 * x25_1 + ((x8_24 + 0x100000) s>> 0x15)
int64_t x8_41 = x6_1 * x27_1 + x28_2 * x21_2 + x0_4 * x8_21 + x10_6 * x1_4
    + (zx.q(*(arg4 + 7)) u>> 7 & 0x1fffff) + ((x23_5 + 0x100000) s>> 0x15)
int64_t x2_1 = x25_7 + ((x24_4 + 0x100000) s>> 0x15)
uint64_t fp_7 = (x8_32 + 0x100000) u>> 0x15
int64_t x25_8 = x27_1 * x22_1 + x28_2 * x23_2 + x8_21 * x7_1 + x9_6 * x21_2 + x10_6 * x20_1
    + x28_4 * x1_4 + x11_8 * x6_1 + x12_4 * x0_4
    + (((-0xff0001 & zx.q(*(arg4 + 0x12))) | zx.q(arg4[0x14]) << 0x10) u>> 3)
int64_t x24_6 = x9_30 - ((x9_30 + 0x100000) & 0x1ffffffe00000) + ((x9_34 + 0x100000) s>> 0x15)
int64_t lr_6 = x9_34 - ((x9_34 + 0x100000) & 0xffffffffffe00000)
int64_t x15_21 = x28_4 * x16_1 + x12_4 * x12_2 + x24_2 * x2 + x19_2 * x25_1 + x14_5 * x22_1
    + x13_2 * x23_2 + ((x26_10 + 0x100000) s>> 0x15)
int64_t x27_11 = x22_3 + zx.q(*(arg4 + 0x15)) + (zx.q(zx.d(arg4[0x17]) << 0x10) & 0x1f0000)
int64_t x0_13 = x8_24 - ((x8_24 + 0x100000) & 0xffffffffffe00000) + ((x15_21 + 0x100000) s>> 0x15)
int64_t x7_3 = x9_6 * x16_1 + x28_4 * x25_1 + x11_8 * x12_2 + x12_4 * x24_2 + x2 * x22_1
    + x19_2 * x23_2 + x14_5 * x7_1 + x13_2 * x20_1 + ((x9_26 + 0x100000) s>> 0x15)
int64_t x6_3 = x9_28 + x19_2 * x6_1 + x13_2 * x0_4
    + ((zx.q(*(arg4 + 0x1a)) | zx.q(zx.d(arg4[0x1c]) << 0x10)) u>> 2 & 0x1fffff)
int64_t x25_9 = x25_8 + ((x4_6 + 0x100000) s>> 0x15)
int64_t x3_6 = x26_10 - fp_7 * 0xa6f7d - ((x26_10 + 0x100000) & 0xffffffffffe00000)
    + ((x7_3 + 0x100000) s>> 0x15)
int64_t fp_10 = x16_28 + x13_2 * x21_2 + ((x12_6 + 0x100000) s>> 0x15)
int64_t x1_6 =
    x11_11 + x19_2 * x1_4 + (zx.q(*(arg4 + 0x17)) u>> 5 & 0x1fffff) + ((x27_11 + 0x100000) s>> 0x15)
int64_t x24_12 = x24_6 * 0xa2c13 + lr_6 * 0x72d18 + x0_13 * 0x9fb67 + ((x25_9 + 0x100000) s>> 0x15)
    + x27_11 - ((x27_11 + 0x100000) & 0xffffffffffe00000)
int64_t x13_12 = x9_26 - fp_7 * 0xf39ad + x19_3 * 0x215d1 - x5_8 * 0xa6f7d
    - ((x9_26 + 0x100000) & 0xffffffffffe00000) + ((fp_10 + 0x100000) s>> 0x15)
int64_t x28_9 = x15_21 - ((x15_21 + 0x100000) & 0xffffffffffe00000) + ((x3_6 + 0x100000) s>> 0x15)
int64_t x0_16 =
    x4_6 + x0_13 * 0xa2c13 - ((x4_6 + 0x100000) & 0xffffffffffe00000) + ((x2_1 + 0x100000) s>> 0x15)
int64_t x25_11 = x15_12 + x19_2 * x21_2 + x0_4 * x14_5 + x13_2 * x1_4 + (zx.q(*(arg4 + 0x1c)) u>> 7)
    + ((x6_3 + 0x100000) s>> 0x15)
int64_t x6_6 = x19_3 * 0xa2c13 + x5_8 * 0x72d18 + x24_6 * 0x9fb67 - lr_6 * 0xf39ad + x0_13 * 0x215d1
    + ((x1_6 + 0x100000) s>> 0x15) + x6_3 - ((x6_3 + 0x100000) & 0xffffffffffe00000)
int64_t x8_52 = fp_7 * 0x72d18 + x19_3 * 0x9fb67 - x5_8 * 0xf39ad + x12_6 + x24_6 * 0x215d1
    - lr_6 * 0xa6f7d - ((x12_6 + 0x100000) & 0xffffffffffe00000) + ((x25_11 + 0x100000) s>> 0x15)
int64_t x5_17 = lr_6 * 0xa2c13 + x0_13 * 0x72d18 + x25_9 + ((x0_16 + 0x100000) s>> 0x15)
    - ((x25_9 + 0x100000) & 0xffffffffffe00000)
int64_t x4_11 = fp_7 * 0x215d1 - x19_3 * 0xa6f7d + x7_3 - ((x7_3 + 0x100000) & 0xffffffffffe00000)
    + ((x13_12 + 0x100000) s>> 0x15)
int64_t x9_47 = fp_7 * 0x9fb67 - x19_3 * 0xf39ad + x5_8 * 0x215d1 - x24_6 * 0xa6f7d + fp_10
    - ((fp_10 + 0x100000) & 0xffffffffffe00000) + ((x8_52 + 0x100000) s>> 0x15)
int64_t x3_8 = x3_6 - ((x3_6 + 0x100000) & 0xffffffffffe00000) + ((x4_11 + 0x100000) s>> 0x15)
int64_t x4_12 = x4_11 - ((x4_11 + 0x100000) & 0xffffffffffe00000)
int64_t x13_14 = x13_12 - ((x13_12 + 0x100000) & 0xffffffffffe00000) + ((x9_47 + 0x100000) s>> 0x15)
int64_t x9_48 = x9_47 - ((x9_47 + 0x100000) & 0xffffffffffe00000)
int64_t x1_10 = x5_8 * 0xa2c13 + x24_6 * 0x72d18 + lr_6 * 0x9fb67 - x0_13 * 0xf39ad + x1_6
    - ((x1_6 + 0x100000) & 0xffffffffffe00000) + ((x24_12 + 0x100000) s>> 0x15)
int64_t x10_21 = fp_7 * 0xa2c13 + x19_3 * 0x72d18 + x5_8 * 0x9fb67 - x24_6 * 0xf39ad
    + lr_6 * 0x215d1 - x0_13 * 0xa6f7d + x25_11 - ((x25_11 + 0x100000) & 0xffffffffffe00000)
    + ((x6_6 + 0x100000) s>> 0x15)
int64_t x8_54 = x8_52 - ((x8_52 + 0x100000) & 0xffffffffffe00000) + ((x10_21 + 0x100000) s>> 0x15)
int64_t x6_9 = ((x1_10 + 0x100000) s>> 0x15) - x28_9 * 0xa6f7d + x6_6
    - ((x6_6 + 0x100000) & 0xffffffffffe00000)
int64_t x7_16 = x14_4 - ((x14_4 + 0x100000) & 0xfffffe00000) + x8_54 * 0xa2c13
int64_t x0_22 = x0_16 + x28_9 * 0x72d18 - ((x0_16 + 0x100000) & 0xffffffffffe00000) + x3_8 * 0x9fb67
    - x4_12 * 0xf39ad + x13_14 * 0x215d1 - x9_48 * 0xa6f7d
int64_t x2_7 = x3_8 * 0x215d1 - x28_9 * 0xf39ad - x4_12 * 0xa6f7d + ((x5_17 + 0x100000) s>> 0x15)
    + x24_12 - ((x24_12 + 0x100000) & 0xffffffffffe00000)
int64_t x10_23 = x10_21 - ((x10_21 + 0x100000) & 0xffffffffffe00000) + ((x6_9 + 0x100000) s>> 0x15)
int64_t x5_21 = x23_5 + ((x27_8 + 0x100000) s>> 0x15) - ((x23_5 + 0x100000) & 0xffffffffffe00000)
    + x8_54 * 0x9fb67 + x13_14 * 0xa2c13 + x9_48 * 0x72d18
int64_t x19_23 = x24_4 - ((x24_4 + 0x100000) & 0xffffffffffe00000) + ((x8_41 + 0x100000) s>> 0x15)
    + x3_8 * 0xa2c13 + x4_12 * 0x72d18 + x8_54 * 0x215d1 + x13_14 * 0x9fb67 - x9_48 * 0xf39ad
int64_t x21_6 = x27_8 - ((x27_8 + 0x100000) & 0xffffffffffe00000) + x8_54 * 0x72d18
    + x9_48 * 0xa2c13 + ((x7_16 + 0x100000) s>> 0x15)
int64_t x9_49 = x28_9 * 0x9fb67 - x3_8 * 0xf39ad + x4_12 * 0x215d1 + x5_17
    - ((x5_17 + 0x100000) & 0xffffffffffe00000) - x13_14 * 0xa6f7d + ((x0_22 + 0x100000) s>> 0x15)
int64_t x0_23 = x28_9 * 0x215d1 - x3_8 * 0xa6f7d + x1_10 - ((x1_10 + 0x100000) & 0xffffffffffe00000)
    + ((x2_7 + 0x100000) s>> 0x15)
int64_t x22_11 = (x10_23 + 0x100000) s>> 0x15
int64_t x20_9 = x8_41 - ((x8_41 + 0x100000) & 0xffffffffffe00000) + x4_12 * 0xa2c13
    - x8_54 * 0xf39ad + x13_14 * 0x72d18 + x9_48 * 0x9fb67 + ((x5_21 + 0x100000) s>> 0x15)
int64_t x8_58 = x2_1 + x28_9 * 0xa2c13 - ((x2_1 + 0x100000) & 0xffffffffffe00000) + x3_8 * 0x72d18
    + x4_12 * 0x9fb67 - x8_54 * 0xa6f7d - x13_14 * 0xf39ad + x9_48 * 0x215d1
    + ((x19_23 + 0x100000) s>> 0x15)
int64_t x6_12 = x7_16 - ((x7_16 + 0x100000) & 0xffffffffffe00000) + x22_11 * 0xa2c13
int64_t x19_27 =
    x21_6 + x22_11 * 0x72d18 - ((x21_6 + 0x100000) & 0xffffffffffe00000) + (x6_12 s>> 0x15)
int64_t x2_15 = x5_21 + x22_11 * 0x9fb67 - ((x5_21 + 0x100000) & 0xffffffffffe00000)
    + ((x21_6 + 0x100000) s>> 0x15) + (x19_27 s>> 0x15)
int64_t x4_20 =
    x20_9 - x22_11 * 0xf39ad - ((x20_9 + 0x100000) & 0xffffffffffe00000) + (x2_15 s>> 0x15)
int64_t x5_27 = x19_23 + x22_11 * 0x215d1 - ((x19_23 + 0x100000) & 0xffffffffffe00000)
    + ((x20_9 + 0x100000) s>> 0x15) + (x4_20 s>> 0x15)
int64_t x7_19 =
    x8_58 - x22_11 * 0xa6f7d - ((x8_58 + 0x100000) & 0xffffffffffe00000) + (x5_27 s>> 0x15)
int64_t x20_10 = x0_22 - ((x0_22 + 0x100000) & 0xffffffffffe00000) + ((x8_58 + 0x100000) s>> 0x15)
    + (x7_19 s>> 0x15)
int64_t x1_19 = x9_49 - ((x9_49 + 0x100000) & 0xffffffffffe00000) + (x20_10 s>> 0x15)
int64_t x9_51 = x2_7 - ((x2_7 + 0x100000) & 0xffffffffffe00000) + ((x9_49 + 0x100000) s>> 0x15)
    + (x1_19 s>> 0x15)
int64_t x13_19 = x0_23 - ((x0_23 + 0x100000) & 0xffffffffffe00000) + (x9_51 s>> 0x15)
int64_t x8_62 = x6_9 + ((x0_23 + 0x100000) s>> 0x15) - ((x6_9 + 0x100000) & 0xffffffffffe00000)
    + (x13_19 s>> 0x15)
int64_t x10_25 = x10_23 - ((x10_23 + 0x100000) & 0xffffffffffe00000) + (x8_62 s>> 0x15)
int64_t x0_25 = x10_25 s>> 0x15
int64_t x17_16 = (x6_12 & 0x1fffff) + x0_25 * 0xa2c13
int64_t x16_31 = (x19_27 & 0x1fffff) + x0_25 * 0x72d18 + (x17_16 s>> 0x15)
*arg1 = (x17_16.d).b
arg1[1] = (x17_16 u>> 8).b
int64_t x15_25 = (x2_15 & 0x1fffff) + x0_25 * 0x9fb67 + (x16_31 s>> 0x15)
arg1[3] = (x16_31 u>> 3).b
uint64_t result = x16_31 u>> 0xb
arg1[2] = ((x17_16.d u>> 0x10).b & 0x1f) | ((x16_31.d & 0x1fffff) << 5).b
int64_t x14_11 = (x4_20 & 0x1fffff) - x0_25 * 0xf39ad + (x15_25 s>> 0x15)
arg1[5] = ((x16_31.d u>> 0x13).b & 3) | ((x15_25.d & 0x1fffff) << 2).b
int64_t x11_23 = (x5_27 & 0x1fffff) + x0_25 * 0x215d1 + (x14_11 s>> 0x15)
arg1[8] = (x14_11 u>> 1).b
arg1[7] = ((x15_25.d u>> 0xe).b & 0x7f) | ((x14_11.d & 0x1fffff) << 7).b
int64_t x12_16 = (x7_19 & 0x1fffff) - x0_25 * 0xa6f7d + (x11_23 s>> 0x15)
arg1[0xb] = (x11_23 u>> 4).b
arg1[0xa] = ((x14_11.d u>> 0x11).b & 0xf) | ((x11_23.d & 0x1fffff) << 4).b
arg1[0xe] = (x12_16 u>> 7).b
int64_t x14_17 = (x20_10 & 0x1fffff) + (x12_16 s>> 0x15)
arg1[0xd] = ((x11_23.d u>> 0x14).b & 1) | ((x12_16.d & 0x1fffff) << 1).b
arg1[0x10] = (x14_17 u>> 2).b
arg1[0x11] = (x14_17 u>> 0xa).b
arg1[0xf] = ((x12_16.d u>> 0xf).b & 0x3f) | ((x14_17.d & 0x1fffff) << 6).b
int64_t x11_30 = (x1_19 & 0x1fffff) + (x14_17 s>> 0x15)
arg1[0x12] = ((x14_17.d u>> 0x12).b & 7) | ((0x1fffffff & x11_30.d) << 3).b
arg1[0x13] = (x11_30 u>> 5).b
int64_t x9_53 = (x9_51 & 0x1fffff) + (x11_30 s>> 0x15)
int64_t x12_23 = (x13_19 & 0x1fffff) + (x9_53 s>> 0x15)
arg1[0x14] = (x11_30 u>> 0xd).b
arg1[0x15] = (x9_53.d).b
arg1[0x16] = (x9_53 u>> 8).b
arg1[0x18] = (x12_23 u>> 3).b
int64_t x8_64 = (x8_62 & 0x1fffff) + (x12_23 s>> 0x15)
arg1[0x19] = (x12_23 u>> 0xb).b
arg1[0x17] = ((x9_53.d u>> 0x10).b & 0x1f) | ((x12_23.d & 0x1fffff) << 5).b
arg1[0x1b] = (x8_64 u>> 6).b
int64_t x9_59 = (x10_25 & 0x1fffff) + (x8_64 s>> 0x15)
arg1[0x1c] = ((x8_64.d u>> 0xe).b & 0x7f) | ((0x1ffffff & x9_59.d) << 7).b
arg1[0x1d] = (x9_59 u>> 1).b
arg1[0x1e] = (x9_59 u>> 9).b
arg1[4] = (result.d).b
arg1[6] = (x15_25 u>> 6).b
arg1[9] = (x14_11 u>> 9).b
arg1[0xc] = (x11_23 u>> 0xc).b
arg1[0x1a] = ((x12_23.d u>> 0x13).b & 3) | ((x8_64.d & 0x1fffff) << 2).b
arg1[0x1f] = (x9_59 u>> 0x11).b
return result
