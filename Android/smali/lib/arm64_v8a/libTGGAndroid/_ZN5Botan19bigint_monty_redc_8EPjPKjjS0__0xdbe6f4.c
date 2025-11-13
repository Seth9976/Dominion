// 函数: _ZN5Botan19bigint_monty_redc_8EPjPKjjS0_
// 地址: 0xdbe6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
uint64_t x13 = zx.q(x9.d * arg3)
*arg4 = x13.d
int32_t x12 = arg1[1]
int64_t x9_2 = zx.q(arg2[1]) * x13 + ((x9 + zx.q(*arg2) * x13) u>> 0x20)
uint32_t x10_2 = (x9_2 u>> 0x20).d
uint64_t x9_3 = zx.q(x12 + x9_2.d)
uint64_t x12_1 = zx.q(x9_3.d * arg3)
arg4[1] = x12_1.d
int32_t x11_1 = x12 + x9_2.d u< x12 ? 1 : 0
int32_t x10_3 = x11_1 + x10_2
bool c_1 = x11_1 + x10_2 u< x11_1
uint32_t x9_5 = ((x9_3 + x12_1 * zx.q(*arg2)) u>> 0x20).d
int32_t x14

x14 = c_1 ? 2 : 1

int32_t x4 = arg1[2]
int64_t x9_7 = zx.q(x10_3 + x9_5) + zx.q(arg2[2]) * x13
int32_t x10_4

if (x10_3 + x9_5 u>= x10_3)
    x10_4 = c_1 ? 1 : 0
else
    x10_4 = x14

uint32_t x11_3 = (x9_7 u>> 0x20).d
int64_t x9_8 = x12_1 * zx.q(arg2[1]) + zx.q(x9_7.d)
int32_t x10_5 = x10_4 + x11_3
bool c_3 = x10_4 + x11_3 u< x10_4
uint32_t x11_4 = (x9_8 u>> 0x20).d
int32_t x15_2

x15_2 = c_3 ? 2 : 1

int32_t x11_5 = x10_5 + x11_4
int32_t x14_2

if (x10_5 + x11_4 u>= x10_5)
    x14_2 = c_3 ? 1 : 0
else
    x14_2 = x15_2

uint64_t x9_9 = zx.q(x4 + x9_8.d)
uint64_t x10_6 = zx.q(x9_9.d * arg3)
int32_t x15_3 = x4 + x9_8.d u< x4 ? 1 : 0
arg4[2] = x10_6.d
int32_t x11_6 = x11_5 + x15_3
int32_t x14_3

if (x11_5 + x15_3 u< x11_5)
    x14_3 = x14_2 + 1
else
    x14_3 = x14_2

int32_t x5 = arg1[3]
uint32_t x9_11 = ((x9_9 + x10_6 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_13 = zx.q(x11_6 + x9_11) + zx.q(arg2[3]) * x13
int32_t x11_7

if (x11_6 + x9_11 u< x11_6)
    x11_7 = x14_3 + 1
else
    x11_7 = x14_3

uint32_t x14_4 = (x9_13 u>> 0x20).d
int64_t x9_14 = zx.q(arg2[2]) * x12_1 + zx.q(x9_13.d)
int32_t x11_8 = x11_7 + x14_4
bool c_8 = x11_7 + x14_4 u< x11_7
uint32_t x14_5 = (x9_14 u>> 0x20).d
int64_t x9_15 = x10_6 * zx.q(arg2[1]) + zx.q(x9_14.d)
int32_t x16_2

x16_2 = c_8 ? 2 : 1

int32_t x11_9 = x11_8 + x14_5
uint32_t x14_6 = (x9_15 u>> 0x20).d
int32_t x15_7

if (x11_8 + x14_5 u>= x11_8)
    x15_7 = c_8 ? 1 : 0
else
    x15_7 = x16_2

int32_t x11_10 = x11_9 + x14_6
int32_t x14_7

if (x11_9 + x14_6 u< x11_9)
    x14_7 = x15_7 + 1
else
    x14_7 = x15_7

uint64_t x15_8 = zx.q(x5 + x9_15.d)
uint64_t x9_16 = zx.q(x15_8.d * arg3)
int32_t x16_3 = x5 + x9_15.d u< x5 ? 1 : 0
arg4[3] = x9_16.d
int32_t x11_11 = x11_10 + x16_3
int32_t x14_8

if (x11_10 + x16_3 u< x11_10)
    x14_8 = x14_7 + 1
else
    x14_8 = x14_7

uint32_t x15_10 = ((x15_8 + x9_16 * zx.q(*arg2)) u>> 0x20).d
int64_t x11_13 = zx.q(x11_11 + x15_10) + zx.q(arg2[4]) * x13
int32_t x14_9

if (x11_11 + x15_10 u< x11_11)
    x14_9 = x14_8 + 1
else
    x14_9 = x14_8

uint32_t x15_11 = (x11_13 u>> 0x20).d
int64_t x11_14 = zx.q(arg2[3]) * x12_1 + zx.q(x11_13.d)
int32_t x7 = arg1[4]
int32_t x14_10 = x14_9 + x15_11
bool c_14 = x14_9 + x15_11 u< x14_9
uint32_t x15_12 = (x11_14 u>> 0x20).d
int64_t x11_15 = x10_6 * zx.q(arg2[2]) + zx.q(x11_14.d)
int32_t x17_4

x17_4 = c_14 ? 2 : 1

int32_t x14_11 = x14_10 + x15_12
uint32_t x15_13 = (x11_15 u>> 0x20).d
int64_t x11_16 = x9_16 * zx.q(arg2[1]) + zx.q(x11_15.d)
int32_t x16_7

if (x14_10 + x15_12 u>= x14_10)
    x16_7 = c_14 ? 1 : 0
else
    x16_7 = x17_4

int32_t x14_12 = x14_11 + x15_13
uint32_t x15_14 = (x11_16 u>> 0x20).d
int32_t x16_8

if (x14_11 + x15_13 u< x14_11)
    x16_8 = x16_7 + 1
else
    x16_8 = x16_7

int32_t x14_13 = x14_12 + x15_14
int32_t x15_15

if (x14_12 + x15_14 u< x14_12)
    x15_15 = x16_8 + 1
else
    x15_15 = x16_8

uint64_t x16_9 = zx.q(x7 + x11_16.d)
uint64_t x11_17 = zx.q(x16_9.d * arg3)
int32_t x17_5 = x7 + x11_16.d u< x7 ? 1 : 0
arg4[4] = x11_17.d
int32_t x14_14 = x14_13 + x17_5
int32_t x15_16

if (x14_13 + x17_5 u< x14_13)
    x15_16 = x15_15 + 1
else
    x15_16 = x15_15

uint32_t x16_11 = ((x16_9 + x11_17 * zx.q(*arg2)) u>> 0x20).d
int64_t x14_16 = zx.q(x14_14 + x16_11) + zx.q(arg2[5]) * x13
int32_t x15_17

if (x14_14 + x16_11 u< x14_14)
    x15_17 = x15_16 + 1
else
    x15_17 = x15_16

uint32_t x4_5 = (x14_16 u>> 0x20).d
int64_t x14_17 = zx.q(arg2[4]) * x12_1 + zx.q(x14_16.d)
int32_t x15_18 = x15_17 + x4_5
bool c_21 = x15_17 + x4_5 u< x15_17
uint32_t x4_6 = (x14_17 u>> 0x20).d
int64_t x14_18 = zx.q(arg2[3]) * x10_6 + zx.q(x14_17.d)
int32_t x16_12 = arg1[5]
int32_t x5_5

x5_5 = c_21 ? 2 : 1

int32_t x15_19 = x15_18 + x4_6
uint32_t x4_7 = (x14_18 u>> 0x20).d
int64_t x14_19 = x9_16 * zx.q(arg2[2]) + zx.q(x14_18.d)
int32_t x17_10

if (x15_18 + x4_6 u>= x15_18)
    x17_10 = c_21 ? 1 : 0
else
    x17_10 = x5_5

int32_t x15_20 = x15_19 + x4_7
uint32_t x4_8 = (x14_19 u>> 0x20).d
int64_t x14_20 = x11_17 * zx.q(arg2[1]) + zx.q(x14_19.d)
int32_t x17_11

if (x15_19 + x4_7 u< x15_19)
    x17_11 = x17_10 + 1
else
    x17_11 = x17_10

int32_t x15_21 = x15_20 + x4_8
uint32_t x4_9 = (x14_20 u>> 0x20).d
int32_t x17_12

if (x15_20 + x4_8 u< x15_20)
    x17_12 = x17_11 + 1
else
    x17_12 = x17_11

int32_t x15_22 = x15_21 + x4_9
int32_t x17_13

if (x15_21 + x4_9 u< x15_21)
    x17_13 = x17_12 + 1
else
    x17_13 = x17_12

uint64_t x16_13 = zx.q(x16_12 + x14_20.d)
uint64_t x14_21 = zx.q(x16_13.d * arg3)
int32_t x4_10 = x16_12 + x14_20.d u< x16_12 ? 1 : 0
arg4[5] = x14_21.d
int32_t x15_23 = x15_22 + x4_10
int32_t x17_14

if (x15_22 + x4_10 u< x15_22)
    x17_14 = x17_13 + 1
else
    x17_14 = x17_13

uint32_t x16_15 = ((x16_13 + x14_21 * zx.q(*arg2)) u>> 0x20).d
int64_t x15_25 = zx.q(x15_23 + x16_15) + zx.q(arg2[6]) * x13
int32_t x16_16

if (x15_23 + x16_15 u< x15_23)
    x16_16 = x17_14 + 1
else
    x16_16 = x17_14

uint32_t x17_15 = (x15_25 u>> 0x20).d
int64_t x15_26 = zx.q(arg2[5]) * x12_1 + zx.q(x15_25.d)
int32_t x16_17 = x16_16 + x17_15
bool c_29 = x16_16 + x17_15 u< x16_16
uint32_t x17_16 = (x15_26 u>> 0x20).d
int64_t x15_27 = zx.q(arg2[4]) * x10_6 + zx.q(x15_26.d)
int32_t x5_8

x5_8 = c_29 ? 2 : 1

int32_t x16_18 = x16_17 + x17_16
int32_t x4_14

if (x16_17 + x17_16 u>= x16_17)
    x4_14 = c_29 ? 1 : 0
else
    x4_14 = x5_8

int32_t x5_9 = arg1[6]
int64_t x17_19 = x9_16 * zx.q(arg2[3]) + zx.q(x15_27.d)
uint32_t x15_28 = (x15_27 u>> 0x20).d
int32_t x15_29 = x16_18 + x15_28
uint32_t x16_19 = (x17_19 u>> 0x20).d
int64_t x17_20 = x11_17 * zx.q(arg2[2]) + zx.q(x17_19.d)
int32_t x4_15

if (x16_18 + x15_28 u< x16_18)
    x4_15 = x4_14 + 1
else
    x4_15 = x4_14

int32_t x15_30 = x15_29 + x16_19
uint32_t x16_20 = (x17_20 u>> 0x20).d
int64_t x17_21 = x14_21 * zx.q(arg2[1]) + zx.q(x17_20.d)
int32_t x4_16

if (x15_29 + x16_19 u< x15_29)
    x4_16 = x4_15 + 1
else
    x4_16 = x4_15

int32_t x15_31 = x15_30 + x16_20
uint32_t x16_21 = (x17_21 u>> 0x20).d
int32_t x4_17

if (x15_30 + x16_20 u< x15_30)
    x4_17 = x4_16 + 1
else
    x4_17 = x4_16

int32_t x16_22 = x15_31 + x16_21
int32_t x4_18

if (x15_31 + x16_21 u< x15_31)
    x4_18 = x4_17 + 1
else
    x4_18 = x4_17

uint64_t x17_22 = zx.q(x5_9 + x17_21.d)
uint64_t x15_32 = zx.q(x17_22.d * arg3)
int32_t x5_10 = x5_9 + x17_21.d u< x5_9 ? 1 : 0
arg4[6] = x15_32.d
int32_t x16_23 = x16_22 + x5_10
int32_t x4_19

if (x16_22 + x5_10 u< x16_22)
    x4_19 = x4_18 + 1
else
    x4_19 = x4_18

uint32_t x17_24 = ((x17_22 + x15_32 * zx.q(*arg2)) u>> 0x20).d
int32_t x4_20

if (x16_23 + x17_24 u< x16_23)
    x4_20 = x4_19 + 1
else
    x4_20 = x4_19

int64_t x13_1 = zx.q(x16_23 + x17_24) + zx.q(arg2[7]) * x13
uint32_t x7_6 = (x13_1 u>> 0x20).d
int64_t x13_2 = zx.q(arg2[6]) * x12_1 + zx.q(x13_1.d)
int32_t x4_21 = x4_20 + x7_6
bool c_38 = x4_20 + x7_6 u< x4_20
uint32_t x6_10 = (x13_2 u>> 0x20).d
int64_t x17_27 = zx.q(arg2[5]) * x10_6 + zx.q(x13_2.d)
int32_t x19

x19 = c_38 ? 2 : 1

int32_t x4_22 = x4_21 + x6_10
int64_t x16_27 = zx.q(arg2[4]) * x9_16 + zx.q(x17_27.d)
uint32_t x17_28 = (x17_27 u>> 0x20).d
int32_t x6_11

if (x4_21 + x6_10 u>= x4_21)
    x6_11 = c_38 ? 1 : 0
else
    x6_11 = x19

int32_t x17_29 = x4_22 + x17_28
int32_t x6_12

if (x4_22 + x17_28 u< x4_22)
    x6_12 = x6_11 + 1
else
    x6_12 = x6_11

int64_t x7_10 = x11_17 * zx.q(arg2[3]) + zx.q(x16_27.d)
uint32_t x16_28 = (x16_27 u>> 0x20).d
int32_t x16_29 = x17_29 + x16_28
int32_t x17_30 = arg1[7]
int64_t x4_25 = x14_21 * zx.q(arg2[2]) + zx.q(x7_10.d)
uint32_t x7_11 = (x7_10 u>> 0x20).d
int32_t x6_13

if (x17_29 + x16_28 u< x17_29)
    x6_13 = x6_12 + 1
else
    x6_13 = x6_12

int32_t x16_30 = x16_29 + x7_11
uint32_t x7_12 = (x4_25 u>> 0x20).d
int64_t x4_26 = x15_32 * zx.q(arg2[1]) + zx.q(x4_25.d)
int32_t x5_13

if (x16_29 + x7_11 u< x16_29)
    x5_13 = x6_13 + 1
else
    x5_13 = x6_13

int32_t x16_31 = x16_30 + x7_12
uint32_t x6_14 = (x4_26 u>> 0x20).d
int32_t x5_14

if (x16_30 + x7_12 u< x16_30)
    x5_14 = x5_13 + 1
else
    x5_14 = x5_13

int32_t x6_15 = x16_31 + x6_14
int32_t x5_15

if (x16_31 + x6_14 u< x16_31)
    x5_15 = x5_14 + 1
else
    x5_15 = x5_14

uint64_t x17_31 = zx.q(x17_30 + x4_26.d)
uint64_t x16_32 = zx.q(x17_31.d * arg3)
int32_t x4_27 = x17_30 + x4_26.d u< x17_30 ? 1 : 0
void* x13_4 = &arg4[7]
*x13_4 = x16_32.d
int32_t x4_28 = x6_15 + x4_27
int32_t x5_16

if (x6_15 + x4_27 u< x6_15)
    x5_16 = x5_15 + 1
else
    x5_16 = x5_15

uint32_t x17_33 = ((x17_31 + x16_32 * zx.q(*arg2)) u>> 0x20).d
int32_t x5_17

if (x4_28 + x17_33 u< x4_28)
    x5_17 = x5_16 + 1
else
    x5_17 = x5_16

int64_t x12_2 = zx.q(x4_28 + x17_33) + zx.q(arg2[7]) * x12_1
uint32_t x7_14 = (x12_2 u>> 0x20).d
int64_t x12_3 = zx.q(arg2[6]) * x10_6 + zx.q(x12_2.d)
int32_t x2_3 = x5_17 + x7_14
bool c_48 = x5_17 + x7_14 u< x5_17
uint32_t x5_18 = (x12_3 u>> 0x20).d
int64_t x4_31 = zx.q(arg2[5]) * x9_16 + zx.q(x12_3.d)
int32_t x19_1

x19_1 = c_48 ? 2 : 1

int32_t x2_4 = x2_3 + x5_18
int64_t x17_37 = zx.q(arg2[4]) * x11_17 + zx.q(x4_31.d)
uint32_t x4_32 = (x4_31 u>> 0x20).d
int32_t x5_19

if (x2_3 + x5_18 u>= x2_3)
    x5_19 = c_48 ? 1 : 0
else
    x5_19 = x19_1

int32_t x2_5 = x2_4 + x4_32
int32_t x5_20

if (x2_4 + x4_32 u< x2_4)
    x5_20 = x5_19 + 1
else
    x5_20 = x5_19

int64_t x7_18 = x14_21 * zx.q(arg2[3]) + zx.q(x17_37.d)
uint32_t x17_38 = (x17_37 u>> 0x20).d
int32_t x17_39 = x2_5 + x17_38
int32_t x2_6 = arg1[8]
int64_t x4_35 = x15_32 * zx.q(arg2[2]) + zx.q(x7_18.d)
uint32_t x7_19 = (x7_18 u>> 0x20).d
int32_t x5_21

if (x2_5 + x17_38 u< x2_5)
    x5_21 = x5_20 + 1
else
    x5_21 = x5_20

int32_t x17_40 = x17_39 + x7_19
uint32_t x7_20 = (x4_35 u>> 0x20).d
int64_t x4_36 = x16_32 * zx.q(arg2[1]) + zx.q(x4_35.d)
int32_t x5_22

if (x17_39 + x7_19 u< x17_39)
    x5_22 = x5_21 + 1
else
    x5_22 = x5_21

int32_t x17_41 = x17_40 + x7_20
uint32_t x6_18 = (x4_36 u>> 0x20).d
int32_t x5_23

if (x17_40 + x7_20 u< x17_40)
    x5_23 = x5_22 + 1
else
    x5_23 = x5_22

int32_t x6_19 = x17_41 + x6_18
int32_t x5_24

if (x17_41 + x6_18 u< x17_41)
    x5_24 = x5_23 + 1
else
    x5_24 = x5_23

uint32_t x17_42 = x2_6 + x4_36.d
*arg4 = x17_42
int32_t x4_37 = x2_6 + x4_36.d u< x2_6 ? 1 : 0
int32_t x5_25

if (x6_19 + x4_37 u< x6_19)
    x5_25 = x5_24 + 1
else
    x5_25 = x5_24

int64_t x10_7 = zx.q(x6_19 + x4_37) + zx.q(arg2[7]) * x10_6
uint32_t x7_21 = (x10_7 u>> 0x20).d
int64_t x10_8 = zx.q(arg2[6]) * x9_16 + zx.q(x10_7.d)
int32_t x5_26 = x5_25 + x7_21
bool c_57 = x5_25 + x7_21 u< x5_25
uint32_t x6_22 = (x10_8 u>> 0x20).d
int64_t x10_9 = zx.q(arg2[5]) * x11_17 + zx.q(x10_8.d)
int32_t x7_22

x7_22 = c_57 ? 2 : 1

int32_t x5_27 = x5_26 + x6_22
int32_t x2_11

if (x5_26 + x6_22 u>= x5_26)
    x2_11 = c_57 ? 1 : 0
else
    x2_11 = x7_22

int64_t x4_41 = x14_21 * zx.q(arg2[4]) + zx.q(x10_9.d)
uint32_t x10_10 = (x10_9 u>> 0x20).d
int32_t x10_11 = x5_27 + x10_10
int32_t x5_28 = arg1[9]
int64_t x6_25 = x15_32 * zx.q(arg2[3]) + zx.q(x4_41.d)
uint32_t x4_42 = (x4_41 u>> 0x20).d
int32_t x2_12

if (x5_27 + x10_10 u< x5_27)
    x2_12 = x2_11 + 1
else
    x2_12 = x2_11

int32_t x10_12 = x10_11 + x4_42
uint32_t x4_43 = (x6_25 u>> 0x20).d
int64_t x6_26 = x16_32 * zx.q(arg2[2]) + zx.q(x6_25.d)
int32_t x2_13

if (x10_11 + x4_42 u< x10_11)
    x2_13 = x2_12 + 1
else
    x2_13 = x2_12

int32_t x10_13 = x10_12 + x4_43
uint32_t x4_44 = (x6_26 u>> 0x20).d
int32_t x2_14

if (x10_12 + x4_43 u< x10_12)
    x2_14 = x2_13 + 1
else
    x2_14 = x2_13

int32_t x4_45 = x10_13 + x4_44
int32_t x2_15

if (x10_13 + x4_44 u< x10_13)
    x2_15 = x2_14 + 1
else
    x2_15 = x2_14

int32_t x10_14 = x5_28 + x6_26.d
int32_t x5_29 = x5_28 + x6_26.d u< x5_28 ? 1 : 0
arg4[1] = x10_14
int32_t x2_16

if (x4_45 + x5_29 u< x4_45)
    x2_16 = x2_15 + 1
else
    x2_16 = x2_15

int64_t x9_17 = zx.q(x4_45 + x5_29) + zx.q(arg2[7]) * x9_16
uint32_t x6_28 = (x9_17 u>> 0x20).d
int64_t x9_18 = zx.q(arg2[6]) * x11_17 + zx.q(x9_17.d)
int32_t x2_17 = x2_16 + x6_28
bool c_65 = x2_16 + x6_28 u< x2_16
uint32_t x4_48 = (x9_18 u>> 0x20).d
int64_t x9_19 = x14_21 * zx.q(arg2[5]) + zx.q(x9_18.d)
int32_t x6_29

x6_29 = c_65 ? 2 : 1

int32_t x2_18 = x2_17 + x4_48
int32_t x5_33

if (x2_17 + x4_48 u>= x2_17)
    x5_33 = c_65 ? 1 : 0
else
    x5_33 = x6_29

int32_t x6_30 = arg1[0xa]
int64_t x4_51 = x15_32 * zx.q(arg2[4]) + zx.q(x9_19.d)
uint32_t x9_20 = (x9_19 u>> 0x20).d
int32_t x9_21 = x2_18 + x9_20
uint32_t x2_19 = (x4_51 u>> 0x20).d
int64_t x4_52 = x16_32 * zx.q(arg2[3]) + zx.q(x4_51.d)
int32_t x5_34

if (x2_18 + x9_20 u< x2_18)
    x5_34 = x5_33 + 1
else
    x5_34 = x5_33

int32_t x9_22 = x9_21 + x2_19
uint32_t x2_20 = (x4_52 u>> 0x20).d
int32_t x5_35

if (x9_21 + x2_19 u< x9_21)
    x5_35 = x5_34 + 1
else
    x5_35 = x5_34

int32_t x2_21 = x9_22 + x2_20
int32_t x5_36

if (x9_22 + x2_20 u< x9_22)
    x5_36 = x5_35 + 1
else
    x5_36 = x5_35

int32_t x9_23 = x6_30 + x4_52.d
arg4[2] = x9_23
int32_t x6_31 = x6_30 + x4_52.d u< x6_30 ? 1 : 0
int32_t x5_37

if (x2_21 + x6_31 u< x2_21)
    x5_37 = x5_36 + 1
else
    x5_37 = x5_36

int64_t x11_18 = zx.q(x2_21 + x6_31) + zx.q(arg2[7]) * x11_17
uint32_t x7_28 = (x11_18 u>> 0x20).d
int64_t x11_19 = zx.q(arg2[6]) * x14_21 + zx.q(x11_18.d)
int32_t x5_38 = x5_37 + x7_28
bool c_72 = x5_37 + x7_28 u< x5_37
uint32_t x6_34 = (x11_19 u>> 0x20).d
int64_t x11_20 = x15_32 * zx.q(arg2[5]) + zx.q(x11_19.d)
int32_t x7_29

x7_29 = c_72 ? 2 : 1

int32_t x5_39 = x5_38 + x6_34
int32_t x6_35 = arg1[0xb]
int64_t x4_56 = x16_32 * zx.q(arg2[4]) + zx.q(x11_20.d)
uint32_t x11_21 = (x11_20 u>> 0x20).d
int32_t x2_26

if (x5_38 + x6_34 u>= x5_38)
    x2_26 = c_72 ? 1 : 0
else
    x2_26 = x7_29

int32_t x11_22 = x5_39 + x11_21
uint32_t x5_40 = (x4_56 u>> 0x20).d
int32_t x2_27

if (x5_39 + x11_21 u< x5_39)
    x2_27 = x2_26 + 1
else
    x2_27 = x2_26

int32_t x5_41 = x11_22 + x5_40
int32_t x2_28

if (x11_22 + x5_40 u< x11_22)
    x2_28 = x2_27 + 1
else
    x2_28 = x2_27

int32_t x11_23 = x6_35 + x4_56.d
int32_t x4_57 = x6_35 + x4_56.d u< x6_35 ? 1 : 0
arg4[3] = x11_23
int32_t x2_29

if (x5_41 + x4_57 u< x5_41)
    x2_29 = x2_28 + 1
else
    x2_29 = x2_28

int64_t x14_22 = zx.q(x5_41 + x4_57) + zx.q(arg2[7]) * x14_21
uint32_t x6_37 = (x14_22 u>> 0x20).d
int64_t x14_23 = x15_32 * zx.q(arg2[6]) + zx.q(x14_22.d)
int32_t x2_30 = x2_29 + x6_37
bool c_78 = x2_29 + x6_37 u< x2_29
uint32_t x4_60 = (x14_23 u>> 0x20).d
int64_t x14_24 = x16_32 * zx.q(arg2[5]) + zx.q(x14_23.d)
int32_t x6_38

x6_38 = c_78 ? 2 : 1

int32_t x2_31 = x2_30 + x4_60
int32_t x4_61 = arg1[0xc]
int32_t x5_45

if (x2_30 + x4_60 u>= x2_30)
    x5_45 = c_78 ? 1 : 0
else
    x5_45 = x6_38

uint32_t x6_39 = (x14_24 u>> 0x20).d
int32_t x2_32 = x2_31 + x6_39
int32_t x5_46

if (x2_31 + x6_39 u< x2_31)
    x5_46 = x5_45 + 1
else
    x5_46 = x5_45

int32_t x14_25 = x4_61 + x14_24.d
arg4[4] = x14_25
int32_t x6_40 = x4_61 + x14_24.d u< x4_61 ? 1 : 0
int64_t x15_33 = zx.q(x2_32 + x6_40) + x15_32 * zx.q(arg2[7])
int32_t x2_34 = arg1[0xd]
int32_t x4_63

if (x2_32 + x6_40 u< x2_32)
    x4_63 = x5_46 + 1
else
    x4_63 = x5_46

uint32_t x6_42 = (x15_33 u>> 0x20).d
int64_t x15_34 = x16_32 * zx.q(arg2[6]) + zx.q(x15_33.d)
int32_t x4_64 = x4_63 + x6_42
bool c_83 = x4_63 + x6_42 u< x4_63
uint32_t x5_48 = (x15_34 u>> 0x20).d
int32_t x8

x8 = c_83 ? 2 : 1

int32_t x4_65 = x4_64 + x5_48
int32_t x8_1

if (x4_64 + x5_48 u>= x4_64)
    x8_1 = c_83 ? 1 : 0
else
    x8_1 = x8

int32_t x15_35 = x2_34 + x15_34.d
arg4[5] = x15_35
int32_t x2_35 = x2_34 + x15_34.d u< x2_34 ? 1 : 0
int32_t x4_66 = arg1[0xe]
int64_t x16_33 = zx.q(x4_65 + x2_35) + x16_32 * zx.q(arg2[7])
int32_t x8_2

if (x4_65 + x2_35 u< x4_65)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

uint32_t x2_37 = (x16_33 u>> 0x20).d
int32_t x16_34 = x4_66 + x16_33.d
arg4[6] = x16_34
int32_t x4_67 = arg1[0xf]
int32_t x6_44 = x4_66 + x16_33.d u< x4_66 ? 1 : 0
*x13_4 = x8_2 + x2_37 + x6_44 + x4_67
int32_t x5_53 = arg1[0x11]
int32_t x8_3 = x8_2 + x2_37
int32_t x2_38

if (x8_2 + x2_37 u< x8_2)
    x2_38 = x5_53 + 1
else
    x2_38 = x5_53

int32_t x8_4 = x8_3 + x6_44
int32_t x2_39

if (x8_3 + x6_44 u< x8_3)
    x2_39 = x2_38 + 1
else
    x2_39 = x2_38

int32_t x4_68 = x8_4 + x4_67
int32_t x2_40

if (x8_4 + x4_67 u< x8_4)
    x2_40 = x2_39 + 1
else
    x2_40 = x2_39

arg4[8] = x2_40
arg4[9] = x2_40 u< x5_53 ? 1 : 0
uint32_t const x8_6 = *arg2
uint32_t x8_7 = x17_42 - x8_6
arg4[9] = x8_7
int32_t x17_43 = arg2[1]
int32_t x5_54 = x17_42 u< x8_6 ? 1 : 0
int32_t x10_15 = x10_14 - x17_43
arg4[0xa] = x10_15 - x5_54
int32_t x10_17 = arg2[2]
int32_t x17_45 = (x10_14 u< x17_43 ? 1 : 0) | (x10_15 u< x5_54 ? 1 : 0)
int32_t x9_24 = x9_23 - x10_17
arg4[0xb] = x9_24 - x17_45
int32_t x9_26 = arg2[3]
int32_t x10_19 = (x9_23 u< x10_17 ? 1 : 0) | (x9_24 u< x17_45 ? 1 : 0)
int32_t x9_27 = x11_23 - x9_26
arg4[0xc] = x9_27 - x10_19
int32_t x9_29 = arg2[4]
int32_t x10_21 = (x11_23 u< x9_26 ? 1 : 0) | (x9_27 u< x10_19 ? 1 : 0)
int32_t x9_30 = x14_25 - x9_29
arg4[0xd] = x9_30 - x10_21
int32_t x9_32 = arg2[5]
int32_t x10_23 = (x14_25 u< x9_29 ? 1 : 0) | (x9_30 u< x10_21 ? 1 : 0)
int32_t x9_33 = x15_35 - x9_32
arg4[0xe] = x9_33 - x10_23
int32_t x9_35 = arg2[6]
int32_t x10_25 = (x15_35 u< x9_32 ? 1 : 0) | (x9_33 u< x10_23 ? 1 : 0)
int32_t x9_36 = x16_34 - x9_35
arg4[0xf] = x9_36 - x10_25
int32_t x9_38 = arg2[7]
int32_t x10_27 = (x16_34 u< x9_35 ? 1 : 0) | (x9_36 u< x10_25 ? 1 : 0)
int32_t x9_39 = x4_68 - x9_38
int32_t x10_29 = (x4_68 u< x9_38 ? 1 : 0) | (x9_39 u< x10_27 ? 1 : 0)
arg4[0x10] = x9_39 - x10_27
arg4[0x11] = x2_40 - x10_29
int32_t x8_14

if (x2_40 u>= x10_29)
    *arg1 = x8_7
    x13_4 = &arg4[0x10]
    arg1[1] = arg4[0xa]
    arg1[2] = arg4[0xb]
    arg1[3] = arg4[0xc]
    arg1[4] = arg4[0xd]
    arg1[5] = arg4[0xe]
    x8_14 = arg4[0xf]
else
    *arg1 = *arg4
    arg1[1] = arg4[1]
    arg1[2] = arg4[2]
    arg1[3] = arg4[3]
    arg1[4] = arg4[4]
    arg1[5] = arg4[5]
    x8_14 = arg4[6]

arg1[6] = x8_14
arg1[7] = *x13_4
__builtin_memset(&arg1[8], 0, 0x28)
