// 函数: _ZN5Botan19bigint_monty_redc_6EPjPKjjS0_
// 地址: 0xdbe1a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10_7 = zx.q(*arg1)
uint64_t x9 = zx.q(x10_7.d * arg3)
*arg4 = x9.d
int32_t x13 = arg1[1]
int64_t x10_1 = zx.q(arg2[1]) * x9 + ((x10_7 + zx.q(*arg2) * x9) u>> 0x20)
uint64_t x12_1 = zx.q(x13 + x10_1.d)
uint32_t x11_2 = (x10_1 u>> 0x20).d
uint64_t x10_2 = zx.q(x12_1.d * arg3)
arg4[1] = x10_2.d
int32_t x13_1 = x13 + x10_1.d u< x13 ? 1 : 0
int32_t x11_3 = x13_1 + x11_2
bool c_1 = x13_1 + x11_2 u< x13_1
uint32_t x12_3 = ((x12_1 + x10_2 * zx.q(*arg2)) u>> 0x20).d
int32_t x14

x14 = c_1 ? 2 : 1

int32_t x4 = arg1[2]
int64_t x11_5 = zx.q(x11_3 + x12_3) + zx.q(arg2[2]) * x9
int32_t x12_4

if (x11_3 + x12_3 u>= x11_3)
    x12_4 = c_1 ? 1 : 0
else
    x12_4 = x14

uint32_t x13_3 = (x11_5 u>> 0x20).d
int64_t x11_6 = x10_2 * zx.q(arg2[1]) + zx.q(x11_5.d)
int32_t x12_5 = x12_4 + x13_3
bool c_3 = x12_4 + x13_3 u< x12_4
uint32_t x13_4 = (x11_6 u>> 0x20).d
int32_t x15_2

x15_2 = c_3 ? 2 : 1

int32_t x13_5 = x12_5 + x13_4
int32_t x14_2

if (x12_5 + x13_4 u>= x12_5)
    x14_2 = c_3 ? 1 : 0
else
    x14_2 = x15_2

uint64_t x11_7 = zx.q(x4 + x11_6.d)
uint64_t x12_6 = zx.q(x11_7.d * arg3)
int32_t x15_3 = x4 + x11_6.d u< x4 ? 1 : 0
arg4[2] = x12_6.d
int32_t x13_6 = x13_5 + x15_3
int32_t x14_3

if (x13_5 + x15_3 u< x13_5)
    x14_3 = x14_2 + 1
else
    x14_3 = x14_2

int32_t x5 = arg1[3]
uint32_t x11_9 = ((x11_7 + x12_6 * zx.q(*arg2)) u>> 0x20).d
int64_t x11_11 = zx.q(x13_6 + x11_9) + zx.q(arg2[3]) * x9
int32_t x13_7

if (x13_6 + x11_9 u< x13_6)
    x13_7 = x14_3 + 1
else
    x13_7 = x14_3

uint32_t x14_4 = (x11_11 u>> 0x20).d
int64_t x11_12 = zx.q(arg2[2]) * x10_2 + zx.q(x11_11.d)
int32_t x13_8 = x13_7 + x14_4
bool c_8 = x13_7 + x14_4 u< x13_7
uint32_t x14_5 = (x11_12 u>> 0x20).d
int64_t x11_13 = x12_6 * zx.q(arg2[1]) + zx.q(x11_12.d)
int32_t x16_2

x16_2 = c_8 ? 2 : 1

int32_t x13_9 = x13_8 + x14_5
uint32_t x14_6 = (x11_13 u>> 0x20).d
int32_t x15_7

if (x13_8 + x14_5 u>= x13_8)
    x15_7 = c_8 ? 1 : 0
else
    x15_7 = x16_2

int32_t x13_10 = x13_9 + x14_6
int32_t x14_7

if (x13_9 + x14_6 u< x13_9)
    x14_7 = x15_7 + 1
else
    x14_7 = x15_7

uint64_t x15_8 = zx.q(x5 + x11_13.d)
uint64_t x11_14 = zx.q(x15_8.d * arg3)
int32_t x16_3 = x5 + x11_13.d u< x5 ? 1 : 0
arg4[3] = x11_14.d
int32_t x13_11 = x13_10 + x16_3
int32_t x14_8

if (x13_10 + x16_3 u< x13_10)
    x14_8 = x14_7 + 1
else
    x14_8 = x14_7

uint32_t x15_10 = ((x15_8 + x11_14 * zx.q(*arg2)) u>> 0x20).d
int64_t x13_13 = zx.q(x13_11 + x15_10) + zx.q(arg2[4]) * x9
int32_t x14_9

if (x13_11 + x15_10 u< x13_11)
    x14_9 = x14_8 + 1
else
    x14_9 = x14_8

uint32_t x17_4 = (x13_13 u>> 0x20).d
int64_t x13_14 = zx.q(arg2[3]) * x10_2 + zx.q(x13_13.d)
int32_t x15_11 = arg1[4]
int32_t x14_10 = x14_9 + x17_4
bool c_14 = x14_9 + x17_4 u< x14_9
uint32_t x16_7 = (x13_14 u>> 0x20).d
int64_t x13_15 = x12_6 * zx.q(arg2[2]) + zx.q(x13_14.d)
int32_t x5_3

x5_3 = c_14 ? 2 : 1

int32_t x14_11 = x14_10 + x16_7
uint32_t x16_8 = (x13_15 u>> 0x20).d
int64_t x13_16 = x11_14 * zx.q(arg2[1]) + zx.q(x13_15.d)
int32_t x17_6

if (x14_10 + x16_7 u>= x14_10)
    x17_6 = c_14 ? 1 : 0
else
    x17_6 = x5_3

int32_t x14_12 = x14_11 + x16_8
uint32_t x16_9 = (x13_16 u>> 0x20).d
int32_t x17_7

if (x14_11 + x16_8 u< x14_11)
    x17_7 = x17_6 + 1
else
    x17_7 = x17_6

int32_t x14_13 = x14_12 + x16_9
int32_t x16_10

if (x14_12 + x16_9 u< x14_12)
    x16_10 = x17_7 + 1
else
    x16_10 = x17_7

uint64_t x15_12 = zx.q(x15_11 + x13_16.d)
uint64_t x13_17 = zx.q(x15_12.d * arg3)
int32_t x17_8 = x15_11 + x13_16.d u< x15_11 ? 1 : 0
arg4[4] = x13_17.d
int32_t x14_14 = x14_13 + x17_8
int32_t x16_11

if (x14_13 + x17_8 u< x14_13)
    x16_11 = x16_10 + 1
else
    x16_11 = x16_10

uint32_t x15_14 = ((x15_12 + x13_17 * zx.q(*arg2)) u>> 0x20).d
int32_t x16_12

if (x14_14 + x15_14 u< x14_14)
    x16_12 = x16_11 + 1
else
    x16_12 = x16_11

int64_t x9_1 = zx.q(x14_14 + x15_14) + zx.q(arg2[5]) * x9
uint32_t x5_5 = (x9_1 u>> 0x20).d
int64_t x9_2 = zx.q(arg2[4]) * x10_2 + zx.q(x9_1.d)
int32_t x16_13 = x16_12 + x5_5
bool c_21 = x16_12 + x5_5 u< x16_12
uint32_t x4_7 = (x9_2 u>> 0x20).d
int64_t x15_17 = zx.q(arg2[3]) * x12_6 + zx.q(x9_2.d)
int32_t x6

x6 = c_21 ? 2 : 1

int32_t x16_14 = x16_13 + x4_7
int32_t x4_8

if (x16_13 + x4_7 u>= x16_13)
    x4_8 = c_21 ? 1 : 0
else
    x4_8 = x6

int32_t x5_7 = arg1[5]
int64_t x14_18 = x11_14 * zx.q(arg2[2]) + zx.q(x15_17.d)
uint32_t x15_18 = (x15_17 u>> 0x20).d
int32_t x15_19 = x16_14 + x15_18
uint32_t x16_15 = (x14_18 u>> 0x20).d
int64_t x14_19 = x13_17 * zx.q(arg2[1]) + zx.q(x14_18.d)
int32_t x17_11

if (x16_14 + x15_18 u< x16_14)
    x17_11 = x4_8 + 1
else
    x17_11 = x4_8

int32_t x15_20 = x15_19 + x16_15
uint32_t x16_16 = (x14_19 u>> 0x20).d
int32_t x17_12

if (x15_19 + x16_15 u< x15_19)
    x17_12 = x17_11 + 1
else
    x17_12 = x17_11

int32_t x15_21 = x15_20 + x16_16
int32_t x16_17

if (x15_20 + x16_16 u< x15_20)
    x16_17 = x17_12 + 1
else
    x16_17 = x17_12

uint64_t x17_13 = zx.q(x5_7 + x14_19.d)
uint64_t x14_20 = zx.q(x17_13.d * arg3)
int32_t x4_9 = x5_7 + x14_19.d u< x5_7 ? 1 : 0
void* x9_4 = &arg4[5]
*x9_4 = x14_20.d
int32_t x15_22 = x15_21 + x4_9
int32_t x16_18

if (x15_21 + x4_9 u< x15_21)
    x16_18 = x16_17 + 1
else
    x16_18 = x16_17

uint32_t x17_15 = ((x17_13 + x14_20 * zx.q(*arg2)) u>> 0x20).d
int32_t x16_19

if (x15_22 + x17_15 u< x15_22)
    x16_19 = x16_18 + 1
else
    x16_19 = x16_18

int64_t x10_3 = zx.q(x15_22 + x17_15) + zx.q(arg2[5]) * x10_2
uint32_t x5_9 = (x10_3 u>> 0x20).d
int64_t x10_4 = zx.q(arg2[4]) * x12_6 + zx.q(x10_3.d)
int32_t x16_20 = x16_19 + x5_9
bool c_29 = x16_19 + x5_9 u< x16_19
uint32_t x2_3 = (x10_4 u>> 0x20).d
int64_t x17_18 = x11_14 * zx.q(arg2[3]) + zx.q(x10_4.d)
int32_t x6_1

x6_1 = c_29 ? 2 : 1

int32_t x16_21 = x16_20 + x2_3
int32_t x2_4

if (x16_20 + x2_3 u>= x16_20)
    x2_4 = c_29 ? 1 : 0
else
    x2_4 = x6_1

int32_t x5_11 = arg1[6]
int64_t x15_26 = x13_17 * zx.q(arg2[2]) + zx.q(x17_18.d)
uint32_t x17_19 = (x17_18 u>> 0x20).d
int32_t x16_22 = x16_21 + x17_19
uint32_t x17_20 = (x15_26 u>> 0x20).d
int64_t x15_27 = x14_20 * zx.q(arg2[1]) + zx.q(x15_26.d)
int32_t x2_5

if (x16_21 + x17_19 u< x16_21)
    x2_5 = x2_4 + 1
else
    x2_5 = x2_4

int32_t x16_23 = x16_22 + x17_20
uint32_t x17_21 = (x15_27 u>> 0x20).d
int32_t x2_6

if (x16_22 + x17_20 u< x16_22)
    x2_6 = x2_5 + 1
else
    x2_6 = x2_5

int32_t x16_24 = x16_23 + x17_21
int32_t x17_22

if (x16_23 + x17_21 u< x16_23)
    x17_22 = x2_6 + 1
else
    x17_22 = x2_6

uint32_t x15_28 = x5_11 + x15_27.d
*arg4 = x15_28
int32_t x4_12 = x5_11 + x15_27.d u< x5_11 ? 1 : 0
int32_t x17_23

if (x16_24 + x4_12 u< x16_24)
    x17_23 = x17_22 + 1
else
    x17_23 = x17_22

int64_t x12_7 = zx.q(x16_24 + x4_12) + zx.q(arg2[5]) * x12_6
uint32_t x5_12 = (x12_7 u>> 0x20).d
int64_t x12_8 = zx.q(arg2[4]) * x11_14 + zx.q(x12_7.d)
int32_t x17_24 = x17_23 + x5_12
bool c_36 = x17_23 + x5_12 u< x17_23
uint32_t x4_15 = (x12_8 u>> 0x20).d
int64_t x12_9 = x13_17 * zx.q(arg2[3]) + zx.q(x12_8.d)
int32_t x5_13

x5_13 = c_36 ? 2 : 1

int32_t x17_25 = x17_24 + x4_15
int32_t x4_16 = arg1[7]
int64_t x2_10 = x14_20 * zx.q(arg2[2]) + zx.q(x12_9.d)
uint32_t x12_10 = (x12_9 u>> 0x20).d
int32_t x16_29

if (x17_24 + x4_15 u>= x17_24)
    x16_29 = c_36 ? 1 : 0
else
    x16_29 = x5_13

int32_t x12_11 = x17_25 + x12_10
uint32_t x17_26 = (x2_10 u>> 0x20).d
int32_t x16_30

if (x17_25 + x12_10 u< x17_25)
    x16_30 = x16_29 + 1
else
    x16_30 = x16_29

int32_t x17_27 = x12_11 + x17_26
int32_t x16_31

if (x12_11 + x17_26 u< x12_11)
    x16_31 = x16_30 + 1
else
    x16_31 = x16_30

int32_t x12_12 = x4_16 + x2_10.d
int32_t x2_11 = x4_16 + x2_10.d u< x4_16 ? 1 : 0
arg4[1] = x12_12
int32_t x16_32

if (x17_27 + x2_11 u< x17_27)
    x16_32 = x16_31 + 1
else
    x16_32 = x16_31

int64_t x11_15 = zx.q(x17_27 + x2_11) + zx.q(arg2[5]) * x11_14
uint32_t x4_18 = (x11_15 u>> 0x20).d
int64_t x11_16 = x13_17 * zx.q(arg2[4]) + zx.q(x11_15.d)
int32_t x16_33 = x16_32 + x4_18
bool c_42 = x16_32 + x4_18 u< x16_32
uint32_t x17_30 = (x11_16 u>> 0x20).d
int64_t x11_17 = x14_20 * zx.q(arg2[3]) + zx.q(x11_16.d)
int32_t x4_19

x4_19 = c_42 ? 2 : 1

int32_t x16_34 = x16_33 + x17_30
int32_t x17_31 = arg1[8]
int32_t x2_15

if (x16_33 + x17_30 u>= x16_33)
    x2_15 = c_42 ? 1 : 0
else
    x2_15 = x4_19

uint32_t x4_20 = (x11_17 u>> 0x20).d
int32_t x16_35 = x16_34 + x4_20
int32_t x2_16

if (x16_34 + x4_20 u< x16_34)
    x2_16 = x2_15 + 1
else
    x2_16 = x2_15

int32_t x11_18 = x17_31 + x11_17.d
arg4[2] = x11_18
int32_t x4_21 = x17_31 + x11_17.d u< x17_31 ? 1 : 0
int64_t x13_18 = zx.q(x16_35 + x4_21) + x13_17 * zx.q(arg2[5])
int32_t x16_37 = arg1[9]
int32_t x17_33

if (x16_35 + x4_21 u< x16_35)
    x17_33 = x2_16 + 1
else
    x17_33 = x2_16

uint32_t x4_23 = (x13_18 u>> 0x20).d
int64_t x13_19 = x14_20 * zx.q(arg2[4]) + zx.q(x13_18.d)
int32_t x17_34 = x17_33 + x4_23
bool c_47 = x17_33 + x4_23 u< x17_33
uint32_t x2_18 = (x13_19 u>> 0x20).d
int32_t x8

x8 = c_47 ? 2 : 1

int32_t x17_35 = x17_34 + x2_18
int32_t x8_1

if (x17_34 + x2_18 u>= x17_34)
    x8_1 = c_47 ? 1 : 0
else
    x8_1 = x8

int32_t x13_20 = x16_37 + x13_19.d
arg4[3] = x13_20
int32_t x16_38 = x16_37 + x13_19.d u< x16_37 ? 1 : 0
int32_t x17_36 = arg1[0xa]
int64_t x14_21 = zx.q(x17_35 + x16_38) + x14_20 * zx.q(arg2[5])
int32_t x8_2

if (x17_35 + x16_38 u< x17_35)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

uint32_t x16_40 = (x14_21 u>> 0x20).d
int32_t x14_22 = x17_36 + x14_21.d
arg4[4] = x14_22
int32_t x17_37 = arg1[0xb]
int32_t x4_25 = x17_36 + x14_21.d u< x17_36 ? 1 : 0
*x9_4 = x8_2 + x16_40 + x4_25 + x17_37
int32_t x2_23 = arg1[0xd]
int32_t x8_3 = x8_2 + x16_40
int32_t x16_41

if (x8_2 + x16_40 u< x8_2)
    x16_41 = x2_23 + 1
else
    x16_41 = x2_23

int32_t x8_4 = x8_3 + x4_25
int32_t x16_42

if (x8_3 + x4_25 u< x8_3)
    x16_42 = x16_41 + 1
else
    x16_42 = x16_41

int32_t x17_38 = x8_4 + x17_37
int32_t x16_43

if (x8_4 + x17_37 u< x8_4)
    x16_43 = x16_42 + 1
else
    x16_43 = x16_42

arg4[6] = x16_43
arg4[7] = x16_43 u< x2_23 ? 1 : 0
uint32_t const x8_6 = *arg2
uint32_t x8_7 = x15_28 - x8_6
arg4[7] = x8_7
int32_t x15_29 = arg2[1]
int32_t x2_24 = x15_28 u< x8_6 ? 1 : 0
int32_t x12_13 = x12_12 - x15_29
arg4[8] = x12_13 - x2_24
int32_t x12_15 = arg2[2]
int32_t x15_31 = (x12_12 u< x15_29 ? 1 : 0) | (x12_13 u< x2_24 ? 1 : 0)
int32_t x11_19 = x11_18 - x12_15
arg4[9] = x11_19 - x15_31
int32_t x11_21 = arg2[3]
int32_t x12_17 = (x11_18 u< x12_15 ? 1 : 0) | (x11_19 u< x15_31 ? 1 : 0)
int32_t x11_22 = x13_20 - x11_21
arg4[0xa] = x11_22 - x12_17
int32_t x11_24 = arg2[4]
int32_t x12_19 = (x13_20 u< x11_21 ? 1 : 0) | (x11_22 u< x12_17 ? 1 : 0)
int32_t x11_25 = x14_22 - x11_24
arg4[0xb] = x11_25 - x12_19
int32_t x11_27 = arg2[5]
int32_t x12_21 = (x14_22 u< x11_24 ? 1 : 0) | (x11_25 u< x12_19 ? 1 : 0)
int32_t x11_28 = x17_38 - x11_27
int32_t x12_23 = (x17_38 u< x11_27 ? 1 : 0) | (x11_28 u< x12_21 ? 1 : 0)
arg4[0xc] = x11_28 - x12_21
arg4[0xd] = x16_43 - x12_23
int32_t x8_12

if (x16_43 u>= x12_23)
    *arg1 = x8_7
    x9_4 = &arg4[0xc]
    arg1[1] = arg4[8]
    arg1[2] = arg4[9]
    arg1[3] = arg4[0xa]
    x8_12 = arg4[0xb]
else
    *arg1 = *arg4
    arg1[1] = arg4[1]
    arg1[2] = arg4[2]
    arg1[3] = arg4[3]
    x8_12 = arg4[4]

arg1[4] = x8_12
arg1[5] = *x9_4
__builtin_memset(&arg1[6], 0, 0x20)
