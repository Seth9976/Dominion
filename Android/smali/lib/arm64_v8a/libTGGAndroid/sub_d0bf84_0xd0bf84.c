// 函数: sub_d0bf84
// 地址: 0xd0bf84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *arg3
int64_t x9 = arg3[1]
int64_t x8 = *arg2
int64_t x21 = arg2[1]
int64_t x11 = arg3[2]
int64_t x28 = arg3[3]
int64_t x7 = x10 & 0xffffffff
uint64_t x26 = x8 u>> 0x20
uint64_t x23 = x10 u>> 0x20
int64_t x22 = x8 & 0xffffffff
uint64_t x20 = x9 u>> 0x20
int64_t x5 = x9 & 0xffffffff
uint64_t x15 = mulu.dp.d(x8.d, x9.d)
int32_t x6 = x9.d
int64_t x13 = x11 & 0xffffffff
int64_t x9_1 = x26 * x7
uint64_t x4 = mulu.dp.d(x8.d, x10.d)
int32_t lr = x10.d
uint64_t x10_1 = x21 u>> 0x20
uint64_t x24 = x11 u>> 0x20
uint64_t x3 = mulu.dp.d(x8.d, x11.d)
int32_t var_188 = x11.d
int64_t x11_1 = x26 * x5
int64_t x14 = x26 * x13
int64_t x19 = x21 & 0xffffffff
uint64_t x17 = mulu.dp.d(x21.d, lr)
int64_t x12 = x10_1 * x7
int64_t x13_2 = x9_1 + x22 * x23 + (x4 u>> 0x20)
int64_t x15_1 = x11_1 + x22 * x20 + (x15 u>> 0x20)
int64_t x16_1 = x12 + x19 * x23 + (x17 u>> 0x20)
int64_t x12_1 = arg2[2]
int64_t x16_2 = arg2[3]
int64_t x9_4 = x14 + x22 * x24 + (x3 u>> 0x20)
uint64_t x27 = x12_1 u>> 0x20
int64_t x14_1 = x12_1 & 0xffffffff
uint64_t x13_3 = mulu.dp.d(x12_1.d, lr)
int64_t x9_6 = x27 * x7
int64_t x11_4 = x9_6 + x14_1 * x23 + (x13_3 u>> 0x20)
int64_t x9_7 = x10_1 * x5
uint64_t x12_3 = mulu.dp.d(x21.d, x6)
int64_t x12_4 = x9_7 + x19 * x20 + (x12_3 u>> 0x20)
int64_t x11_7 = x28 & 0xffffffff
uint64_t x17_1 = x28 u>> 0x20
int64_t x11_8 = x26 * x11_7
uint64_t x9_8 = mulu.dp.d(x8.d, x28.d)
int64_t x9_9 = x11_8 + x22 * x17_1 + (x9_8 u>> 0x20)
uint64_t x12_6 = x16_2 u>> 0x20
int64_t x14_3 = x16_2 & 0xffffffff
int64_t x11_9 = x12_6 * x7
uint64_t x9_10 = mulu.dp.d(x16_2.d, lr)
int64_t x13_4 = x11_9 + x14_3 * x23 + (x9_10 u>> 0x20)
int64_t x11_10 = x10_1 * x13
int64_t x2 = arg3[4]
uint64_t x9_11 = mulu.dp.d(x21.d, x11.d)
int64_t x4_1 = x11_10 + x19 * x24 + (x9_11 u>> 0x20)
int64_t x14_7 = x27 * x5
uint64_t x13_5 = mulu.dp.d(x12_1.d, x6)
int64_t x11_11 = x14_7 + x14_1 * x20 + (x13_5 u>> 0x20)
int64_t x15_4 = x2 & 0xffffffff
uint64_t x14_8 = x2 u>> 0x20
int64_t x16_4 = x26 * x15_4
uint64_t x8_1 = mulu.dp.d(x8.d, x2.d)
int64_t x9_14 = x16_4 + x22 * x14_8 + (x8_1 u>> 0x20)
int32_t var_e0 = x28.d
int64_t x10_2 = x10_1 * x11_7
int64_t x1 = arg2[4]
uint64_t x10_4 = mulu.dp.d(x21.d, x28.d)
int64_t x10_5 = x10_2 + x19 * x17_1 + (x10_4 u>> 0x20)
int32_t var_1c0 = x2.d
uint64_t x22_8 = x1 u>> 0x20
int64_t x10_6 = x22_8 * x7
int64_t x9_15 = x26 * x14_8 + x10_1 * x17_1 + x27 * x24 + x12_6 * x20 + (x9_14 u>> 0x20)
    + (x10_5 u>> 0x20) + (zx.q(x9_14 u< x16_4 ? 1 : 0) << 0x20) + x22_8 * x23
int64_t x21_1 = x21 * 0x13
uint64_t fp_3 = x21_1 u>> 0x20
int64_t x12_7 = x12_1 * 0x13
uint64_t x10_7 = x12_7 u>> 0x20
int64_t x11_12 = x16_2 * 0x13
uint64_t x9_19 = x11_12 u>> 0x20
int64_t fp_4 = fp_3 * x15_4
int64_t x6_1 = x10_7 * x11_7
int64_t x20_1 = x10_7 * x15_4
int64_t x5_1 = x9_19 * x11_7
int64_t lr_8 = x26 * x20 + x10_1 * x23 + (x15_1 u>> 0x20) + x10_7 * x14_8
    + (zx.q(x15_1 u< x11_1 ? 1 : 0) << 0x20) + (x16_1 u>> 0x20) + x9_19 * x17_1
    + (zx.q(x16_1 u< x12 ? 1 : 0) << 0x20)
int64_t x0_2 = x26 * x24 + x10_1 * x20 + x27 * x23 + (x9_4 u>> 0x20) + (x12_4 u>> 0x20)
    + (zx.q(x9_4 u< x14 ? 1 : 0) << 0x20) + x9_19 * x14_8 + (zx.q(x12_4 u< x9_7 ? 1 : 0) << 0x20)
int64_t x28_1 = x12_6 * x5
uint64_t x8_15 = mulu.dp.d(x1.d, lr)
int64_t x1_1 = x1 * 0x13
uint64_t x8_16 = x1_1 u>> 0x20
int64_t x23_3 = x27 * x13
int64_t x16_13 = x8_16 * x5
uint64_t x21_2 = mulu.dp.d(x21_1.d, var_1c0)
int64_t x19_2 = x9_19 * x13
int64_t x4_2 = x8_16 * x11_7
int64_t x3_2 = x9_19 * x15_4
int64_t x22_12 = x8_16 * x13
int64_t x2_5 = fp_4 + (x21_1 & 0xffffffff) * x14_8 + (x21_2 u>> 0x20)
int64_t x9_21 = x26 * x23 + fp_3 * x14_8 + (x13_2 u>> 0x20) + x10_7 * x17_1
    + (zx.q(x13_2 u< x9_1 ? 1 : 0) << 0x20) + x9_19 * x24 + (x2_5 u>> 0x20) + x8_16 * x20
int64_t x15_5 = x8_16 * x15_4
int64_t x8_17 = x26 * x17_1 + x10_1 * x24 + x27 * x20 + (x9_9 u>> 0x20) + x12_6 * x23
    + (x4_1 u>> 0x20) + (zx.q(x9_9 u< x11_8 ? 1 : 0) << 0x20) + x8_16 * x14_8
uint64_t x27_2 = mulu.dp.d(x12_7.d, var_1c0)
uint64_t x25_2 = mulu.dp.d(x16_2.d, x6)
uint64_t x13_7 = mulu.dp.d(x1_1.d, x6)
uint64_t x8_19 = mulu.dp.d(x1_1.d, var_188)
uint64_t x10_12 = mulu.dp.d(x12_1.d, var_188)
uint64_t x0_3 = mulu.dp.d(x11_12.d, var_188)
int64_t x9_25 = x12_7 & 0xffffffff
uint64_t x10_13 = mulu.dp.d(x12_7.d, var_e0)
uint64_t x12_8 = mulu.dp.d(x11_12.d, var_e0)
uint64_t x12_9 = mulu.dp.d(x1_1.d, var_1c0)
uint64_t x8_21 = mulu.dp.d(x1_1.d, var_e0)
int64_t x8_22 = x1_1 & 0xffffffff
uint64_t x1_2 = mulu.dp.d(x11_12.d, var_1c0)
int64_t x11_13 = x11_12 & 0xffffffff
int64_t x12_12 = x28_1 + x14_3 * x20 + (x25_2 u>> 0x20)
uint64_t x9_30 = zx.q(x4.d) | zx.q(x13_2.d) << 0x20
int64_t x6_2 = x16_13 + x8_22 * x20 + (x13_7 u>> 0x20)
uint64_t x8_26 = zx.q(x15.d) | zx.q(x15_1.d) << 0x20
int64_t x21_3 = (0xffffffff & x21_2) | (0xffffffff & x2_5) << 0x20
int64_t x13_8 = (0xffffffff & x13_7) | (0xffffffff & x6_2) << 0x20
uint64_t x8_28 = zx.q(x17.d) | zx.q(x16_1.d) << 0x20
int64_t x11_15 = x3_2 + x11_13 * x14_8 + (x1_2 u>> 0x20)
int64_t x1_3 = (0xffffffff & x1_2) | (0xffffffff & x11_15) << 0x20
uint64_t x8_30 = zx.q(x3.d) | zx.q(x9_4.d) << 0x20
int64_t x8_32 = zx.q(x13_3.d) | (0xffffffff & x11_4) << 0x20
uint64_t x8_34 = zx.q(x12_3.d) | zx.q(x12_4.d) << 0x20
uint64_t x8_36 = zx.q(x9_8.d) | zx.q(x9_9.d) << 0x20
uint64_t x8_38 = zx.q(x9_11.d) | zx.q(x4_1.d) << 0x20
uint64_t x8_40 = zx.q(x8_1.d) | zx.q(x9_14.d) << 0x20
int64_t x8_42 = x10_6 + (x1 & 0xffffffff) * x23 + (x8_15 u>> 0x20)
int64_t x14_20 = zx.q(x10_4.d) | (0xffffffff & x10_5) << 0x20
int64_t x15_7 = x6_1 + x9_25 * x17_1 + (x10_13 u>> 0x20)
int64_t x10_14 = (0xffffffff & x10_13) | (0xffffffff & x15_7) << 0x20
int64_t x19_4 = x23_3 + x14_1 * x24 + (x10_12 u>> 0x20)
int64_t lr_11 = (0xffffffff & x10_12) | (0xffffffff & x19_4) << 0x20
int64_t x7_4 = x19_2 + x11_13 * x24 + (x0_3 u>> 0x20)
int64_t x15_12 = x9_21 + (x15_7 u>> 0x20) + (zx.q(x2_5 u< fp_4 ? 1 : 0) << 0x20) + (x7_4 u>> 0x20)
    + (zx.q(x15_7 u< x6_1 ? 1 : 0) << 0x20) + (zx.q(x7_4 u< x19_2 ? 1 : 0) << 0x20)
int64_t x13_9 = x13_8 + x21_3
int64_t x15_14 = x15_12 + (x6_2 u>> 0x20) + (zx.q(x6_2 u< x16_13 ? 1 : 0) << 0x20)
int64_t x0_4 = (0xffffffff & x0_3) | (0xffffffff & x7_4) << 0x20
int64_t x15_15

if (x13_8 + x21_3 u< x13_8)
    x15_15 = x15_14 + 1
else
    x15_15 = x15_14

int64_t x10_15 = x13_9 + x10_14
int64_t x13_10

if (x13_9 + x10_14 u< x13_9)
    x13_10 = x15_15 + 1
else
    x13_10 = x15_15

int64_t x10_16 = x10_15 + x0_4
int64_t x13_11

if (x10_15 + x0_4 u< x10_15)
    x13_11 = x13_10 + 1
else
    x13_11 = x13_10

int64_t x24_2 = x10_16 + x9_30
int64_t x13_12

if (x10_16 + x9_30 u< x10_16)
    x13_12 = x13_11 + 1
else
    x13_12 = x13_11

int64_t x13_13 = (x13_12 << 0x40 | x24_2) u>> 0x33
int64_t x14_26 = x22_12 + x8_22 * x24 + (x8_19 u>> 0x20)
int64_t x9_34 = x20_1 + x9_25 * x14_8 + (x27_2 u>> 0x20)
int64_t x27_3 = (0xffffffff & x27_2) | (0xffffffff & x9_34) << 0x20
int64_t x5_3 = x5_1 + x11_13 * x17_1 + (x12_8 u>> 0x20)
int64_t x10_19 = (0xffffffff & x12_8) | (0xffffffff & x5_3) << 0x20
int64_t x9_37 =
    lr_8 + x8_16 * x24 + (x9_34 u>> 0x20) + (x5_3 u>> 0x20) + (zx.q(x9_34 u< x20_1 ? 1 : 0) << 0x20)
int64_t x10_22 = zx.q(x13_5.d) | (0xffffffff & x11_11) << 0x20
int64_t x21_4 = x4_2 + x8_22 * x17_1 + (x8_21 u>> 0x20)
int64_t x11_18 = x0_2 + (x11_4 u>> 0x20) + x8_16 * x17_1 + (zx.q(x11_4 u< x9_6 ? 1 : 0) << 0x20)
    + (x11_15 u>> 0x20) + (zx.q(x11_15 u< x3_2 ? 1 : 0) << 0x20) + (x21_4 u>> 0x20)
int64_t fp_6 = zx.q(x9_10.d) | (0xffffffff & x13_4) << 0x20
int64_t x4_6 = zx.q(x25_2.d) | (0xffffffff & x12_12) << 0x20
int64_t x3_4 = zx.q(x8_21.d) | (0xffffffff & x21_4) << 0x20
int64_t x5_9 = x8_17 + (x11_11 u>> 0x20) + (zx.q(x4_1 u< x11_10 ? 1 : 0) << 0x20)
    + (zx.q(x11_11 u< x14_7 ? 1 : 0) << 0x20) + (x13_4 u>> 0x20)
    + (zx.q(x13_4 u< x11_9 ? 1 : 0) << 0x20)
int64_t x19_5 = x15_5 + x8_22 * x14_8 + (x12_9 u>> 0x20)
int64_t x0_13 = (0xffffffff & x12_9) | (0xffffffff & x19_5) << 0x20
int64_t result = zx.q(x8_15.d) | (0xffffffff & x8_42) << 0x20
int64_t x12_14 = x9_15 + (x19_4 u>> 0x20) + (zx.q(x10_5 u< x10_2 ? 1 : 0) << 0x20)
    + (zx.q(x19_4 u< x23_3 ? 1 : 0) << 0x20) + (x12_12 u>> 0x20)
    + (zx.q(x12_12 u< x28_1 ? 1 : 0) << 0x20)
int64_t x16_18 = zx.q(x8_19.d) | (0xffffffff & x14_26) << 0x20
int64_t x8_44 = x12_14 + (x8_42 u>> 0x20) + (zx.q(x8_42 u< x10_6 ? 1 : 0) << 0x20)
uint64_t x17_5 = x8_28 + x8_26
int64_t x9_38

if (x8_28 + x8_26 u< x8_28)
    x9_38 = x9_37 + 1
else
    x9_38 = x9_37

int64_t x16_19 = x16_18 + x27_3
int64_t x9_41 = x9_38 + (zx.q(x5_3 u< x5_1 ? 1 : 0) << 0x20) + (x14_26 u>> 0x20)
    + (zx.q(x14_26 u< x22_12 ? 1 : 0) << 0x20)
int64_t x9_42

if (x16_18 + x27_3 u< x16_18)
    x9_42 = x9_41 + 1
else
    x9_42 = x9_41

int64_t x14_27 = x16_19 + x10_19
int64_t x9_43

if (x16_19 + x10_19 u< x16_19)
    x9_43 = x9_42 + 1
else
    x9_43 = x9_42

int64_t x14_28 = x14_27 + x17_5
int64_t x9_44

if (x14_27 + x17_5 u< x14_27)
    x9_44 = x9_43 + 1
else
    x9_44 = x9_43

int64_t x13_14 = x13_13 + x14_28
int64_t x9_45

if (x13_13 + x14_28 u< x13_13)
    x9_45 = x9_44 + 1
else
    x9_45 = x9_44

int64_t x9_46 = (x9_45 << 0x40 | x13_14) u>> 0x33
int64_t x12_17 = x5_9 + (x19_5 u>> 0x20) + (zx.q(x19_5 u< x15_5 ? 1 : 0) << 0x20)
int64_t x14_30 = x8_32 + x8_30
int64_t x11_19

if (x8_32 + x8_30 u< x8_32)
    x11_19 = x11_18 + 1
else
    x11_19 = x11_18

int64_t x11_20 = x11_19 + (zx.q(x21_4 u< x4_2 ? 1 : 0) << 0x20)
int64_t x14_31 = x14_30 + x8_34
int64_t x11_21

if (x14_30 + x8_34 u< x14_30)
    x11_21 = x11_20 + 1
else
    x11_21 = x11_20

int64_t x15_19 = x3_4 + x1_3
int64_t x11_22

if (x3_4 + x1_3 u< x3_4)
    x11_22 = x11_21 + 1
else
    x11_22 = x11_21

int64_t x14_32 = x15_19 + x14_31
int64_t x11_23

if (x15_19 + x14_31 u< x15_19)
    x11_23 = x11_22 + 1
else
    x11_23 = x11_22

int64_t x9_47 = x9_46 + x14_32
int64_t x11_24

if (x9_46 + x14_32 u< x9_46)
    x11_24 = x11_23 + 1
else
    x11_24 = x11_23

int64_t x11_25 = (x11_24 << 0x40 | x9_47) u>> 0x33
int64_t x14_34 = fp_6 + x8_36
int64_t x12_18

if (fp_6 + x8_36 u< fp_6)
    x12_18 = x12_17 + 1
else
    x12_18 = x12_17

int64_t x14_35 = x14_34 + x8_38
int64_t x12_19

if (x14_34 + x8_38 u< x14_34)
    x12_19 = x12_18 + 1
else
    x12_19 = x12_18

int64_t x14_36 = x14_35 + x10_22
int64_t x12_20

if (x14_35 + x10_22 u< x14_35)
    x12_20 = x12_19 + 1
else
    x12_20 = x12_19

int64_t x14_37 = x14_36 + x0_13
int64_t x12_21

if (x14_36 + x0_13 u< x14_36)
    x12_21 = x12_20 + 1
else
    x12_21 = x12_20

int64_t x11_26 = x11_25 + x14_37
int64_t x12_22

if (x11_25 + x14_37 u< x11_25)
    x12_22 = x12_21 + 1
else
    x12_22 = x12_21

int64_t x14_38 = result + x8_40
int64_t x8_45

if (result + x8_40 u< result)
    x8_45 = x8_44 + 1
else
    x8_45 = x8_44

int64_t x14_39 = x14_38 + x4_6
int64_t x8_46

if (x14_38 + x4_6 u< x14_38)
    x8_46 = x8_45 + 1
else
    x8_46 = x8_45

int64_t x14_40 = x14_39 + x14_20
int64_t x8_47

if (x14_39 + x14_20 u< x14_39)
    x8_47 = x8_46 + 1
else
    x8_47 = x8_46

int64_t x14_41 = x14_40 + lr_11
int64_t x12_23 = (x12_22 << 0x40 | x11_26) u>> 0x33
int64_t x8_48

if (x14_40 + lr_11 u< x14_40)
    x8_48 = x8_47 + 1
else
    x8_48 = x8_47

int64_t x12_24 = x12_23 + x14_41
int64_t x8_49

if (x12_23 + x14_41 u< x12_23)
    x8_49 = x8_48 + 1
else
    x8_49 = x8_48

int64_t x8_51 = (x24_2 & 0x7ffffffffffff) + ((x8_49 << 0x40 | x12_24) u>> 0x33) * 0x13
int64_t x10_27 = (x13_14 & 0x7ffffffffffff) + (x8_51 u>> 0x33)
*arg1 = x8_51 & 0x7ffffffffffff
arg1[1] = x10_27 & 0x7ffffffffffff
arg1[2] = (x9_47 & 0x7ffffffffffff) + (x10_27 u>> 0x33)
arg1[3] = x11_26 & 0x7ffffffffffff
arg1[4] = x12_24 & 0x7ffffffffffff
return result
