// 函数: _ZN5Botan20bigint_monty_redc_16EPjPKjjS0_
// 地址: 0xdbef78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
uint64_t x6 = zx.q(x9.d * arg3)
*arg4 = x6.d
int32_t x12 = arg1[1]
int64_t x9_2 = zx.q(arg2[1]) * x6 + ((x9 + zx.q(*arg2) * x6) u>> 0x20)
uint32_t x10_2 = (x9_2 u>> 0x20).d
uint64_t x9_3 = zx.q(x12 + x9_2.d)
uint64_t x4 = zx.q(x9_3.d * arg3)
arg4[1] = x4.d
int32_t x11_1 = x12 + x9_2.d u< x12 ? 1 : 0
int32_t x10_3 = x11_1 + x10_2
bool c_1 = x11_1 + x10_2 u< x11_1
uint32_t x9_5 = ((x9_3 + x4 * zx.q(*arg2)) u>> 0x20).d
int32_t x12_1

x12_1 = c_1 ? 2 : 1

int32_t x16 = arg1[2]
int64_t x9_7 = zx.q(x10_3 + x9_5) + zx.q(arg2[2]) * x6
int32_t x10_4

if (x10_3 + x9_5 u>= x10_3)
    x10_4 = c_1 ? 1 : 0
else
    x10_4 = x12_1

uint32_t x11_3 = (x9_7 u>> 0x20).d
int64_t x9_8 = x4 * zx.q(arg2[1]) + zx.q(x9_7.d)
int32_t x10_5 = x10_4 + x11_3
bool c_3 = x10_4 + x11_3 u< x10_4
uint32_t x11_4 = (x9_8 u>> 0x20).d
int32_t x13_2

x13_2 = c_3 ? 2 : 1

int32_t x10_6 = x10_5 + x11_4
int32_t x11_5

if (x10_5 + x11_4 u>= x10_5)
    x11_5 = c_3 ? 1 : 0
else
    x11_5 = x13_2

uint64_t x9_9 = zx.q(x16 + x9_8.d)
uint64_t x1 = zx.q(x9_9.d * arg3)
int32_t x12_3 = x16 + x9_8.d u< x16 ? 1 : 0
arg4[2] = x1.d
int32_t x10_7 = x10_6 + x12_3
int32_t x11_6

if (x10_6 + x12_3 u< x10_6)
    x11_6 = x11_5 + 1
else
    x11_6 = x11_5

int32_t x16_1 = arg1[3]
uint32_t x9_11 = ((x9_9 + x1 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_13 = zx.q(x10_7 + x9_11) + zx.q(arg2[3]) * x6
int32_t x10_8

if (x10_7 + x9_11 u< x10_7)
    x10_8 = x11_6 + 1
else
    x10_8 = x11_6

uint32_t x11_7 = (x9_13 u>> 0x20).d
int64_t x9_14 = zx.q(arg2[2]) * x4 + zx.q(x9_13.d)
int32_t x10_9 = x10_8 + x11_7
bool c_8 = x10_8 + x11_7 u< x10_8
uint32_t x11_8 = (x9_14 u>> 0x20).d
int64_t x9_15 = x1 * zx.q(arg2[1]) + zx.q(x9_14.d)
int32_t x13_4

x13_4 = c_8 ? 2 : 1

int32_t x10_10 = x10_9 + x11_8
uint32_t x11_9 = (x9_15 u>> 0x20).d
int32_t x12_7

if (x10_9 + x11_8 u>= x10_9)
    x12_7 = c_8 ? 1 : 0
else
    x12_7 = x13_4

int32_t x10_11 = x10_10 + x11_9
int32_t x11_10

if (x10_10 + x11_9 u< x10_10)
    x11_10 = x12_7 + 1
else
    x11_10 = x12_7

uint64_t x9_16 = zx.q(x16_1 + x9_15.d)
uint64_t x17 = zx.q(x9_16.d * arg3)
int32_t x12_8 = x16_1 + x9_15.d u< x16_1 ? 1 : 0
arg4[3] = x17.d
int32_t x10_12 = x10_11 + x12_8
int32_t x11_11

if (x10_11 + x12_8 u< x10_11)
    x11_11 = x11_10 + 1
else
    x11_11 = x11_10

uint32_t x9_18 = ((x9_16 + x17 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_20 = zx.q(x10_12 + x9_18) + zx.q(arg2[4]) * x6
int32_t x10_13

if (x10_12 + x9_18 u< x10_12)
    x10_13 = x11_11 + 1
else
    x10_13 = x11_11

uint32_t x11_12 = (x9_20 u>> 0x20).d
int64_t x9_21 = zx.q(arg2[3]) * x4 + zx.q(x9_20.d)
int32_t x0 = arg1[4]
int32_t x10_14 = x10_13 + x11_12
bool c_14 = x10_13 + x11_12 u< x10_13
uint32_t x11_13 = (x9_21 u>> 0x20).d
int64_t x9_22 = x1 * zx.q(arg2[2]) + zx.q(x9_21.d)
int32_t x13_6

x13_6 = c_14 ? 2 : 1

int32_t x10_15 = x10_14 + x11_13
uint32_t x11_14 = (x9_22 u>> 0x20).d
int64_t x9_23 = x17 * zx.q(arg2[1]) + zx.q(x9_22.d)
int32_t x12_12

if (x10_14 + x11_13 u>= x10_14)
    x12_12 = c_14 ? 1 : 0
else
    x12_12 = x13_6

int32_t x10_16 = x10_15 + x11_14
uint32_t x11_15 = (x9_23 u>> 0x20).d
int32_t x12_13

if (x10_15 + x11_14 u< x10_15)
    x12_13 = x12_12 + 1
else
    x12_13 = x12_12

int32_t x10_17 = x10_16 + x11_15
int32_t x11_16

if (x10_16 + x11_15 u< x10_16)
    x11_16 = x12_13 + 1
else
    x11_16 = x12_13

uint64_t x9_24 = zx.q(x0 + x9_23.d)
uint64_t x15_4 = zx.q(x9_24.d * arg3)
int32_t x12_14 = x0 + x9_23.d u< x0 ? 1 : 0
arg4[4] = x15_4.d
int32_t x10_18 = x10_17 + x12_14
int32_t x11_17

if (x10_17 + x12_14 u< x10_17)
    x11_17 = x11_16 + 1
else
    x11_17 = x11_16

uint32_t x9_26 = ((x9_24 + x15_4 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_28 = zx.q(x10_18 + x9_26) + zx.q(arg2[5]) * x6
int32_t x10_19

if (x10_18 + x9_26 u< x10_18)
    x10_19 = x11_17 + 1
else
    x10_19 = x11_17

uint32_t x11_18 = (x9_28 u>> 0x20).d
int64_t x9_29 = zx.q(arg2[4]) * x4 + zx.q(x9_28.d)
int32_t x10_20 = x10_19 + x11_18
bool c_21 = x10_19 + x11_18 u< x10_19
uint32_t x11_19 = (x9_29 u>> 0x20).d
int64_t x9_30 = zx.q(arg2[3]) * x1 + zx.q(x9_29.d)
int32_t x7 = arg1[5]
int32_t x13_8

x13_8 = c_21 ? 2 : 1

int32_t x10_21 = x10_20 + x11_19
uint32_t x11_20 = (x9_30 u>> 0x20).d
int64_t x9_31 = x17 * zx.q(arg2[2]) + zx.q(x9_30.d)
int32_t x12_18

if (x10_20 + x11_19 u>= x10_20)
    x12_18 = c_21 ? 1 : 0
else
    x12_18 = x13_8

int32_t x10_22 = x10_21 + x11_20
uint32_t x11_21 = (x9_31 u>> 0x20).d
int64_t x9_32 = x15_4 * zx.q(arg2[1]) + zx.q(x9_31.d)
int32_t x12_19

if (x10_21 + x11_20 u< x10_21)
    x12_19 = x12_18 + 1
else
    x12_19 = x12_18

int32_t x10_23 = x10_22 + x11_21
uint32_t x11_22 = (x9_32 u>> 0x20).d
int32_t x12_20

if (x10_22 + x11_21 u< x10_22)
    x12_20 = x12_19 + 1
else
    x12_20 = x12_19

int32_t x10_24 = x10_23 + x11_22
int32_t x11_23

if (x10_23 + x11_22 u< x10_23)
    x11_23 = x12_20 + 1
else
    x11_23 = x12_20

uint64_t x9_33 = zx.q(x7 + x9_32.d)
uint64_t x13_9 = zx.q(x9_33.d * arg3)
int32_t x12_21 = x7 + x9_32.d u< x7 ? 1 : 0
arg4[5] = x13_9.d
int32_t x10_25 = x10_24 + x12_21
int32_t x11_24

if (x10_24 + x12_21 u< x10_24)
    x11_24 = x11_23 + 1
else
    x11_24 = x11_23

uint32_t x9_35 = ((x9_33 + x13_9 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_37 = zx.q(x10_25 + x9_35) + zx.q(arg2[6]) * x6
int32_t x10_26

if (x10_25 + x9_35 u< x10_25)
    x10_26 = x11_24 + 1
else
    x10_26 = x11_24

uint32_t x11_25 = (x9_37 u>> 0x20).d
int64_t x9_38 = zx.q(arg2[5]) * x4 + zx.q(x9_37.d)
int32_t x10_27 = x10_26 + x11_25
bool c_29 = x10_26 + x11_25 u< x10_26
uint32_t x11_26 = (x9_38 u>> 0x20).d
int64_t x9_39 = zx.q(arg2[4]) * x1 + zx.q(x9_38.d)
int32_t x14_8

x14_8 = c_29 ? 2 : 1

int32_t x10_28 = x10_27 + x11_26
uint32_t x11_27 = (x9_39 u>> 0x20).d
int64_t x9_40 = x17 * zx.q(arg2[3]) + zx.q(x9_39.d)
int32_t x22 = arg1[6]
int32_t x12_25

if (x10_27 + x11_26 u>= x10_27)
    x12_25 = c_29 ? 1 : 0
else
    x12_25 = x14_8

int32_t x10_29 = x10_28 + x11_27
uint32_t x11_28 = (x9_40 u>> 0x20).d
int64_t x9_41 = x15_4 * zx.q(arg2[2]) + zx.q(x9_40.d)
int32_t x12_26

if (x10_28 + x11_27 u< x10_28)
    x12_26 = x12_25 + 1
else
    x12_26 = x12_25

int32_t x10_30 = x10_29 + x11_28
uint32_t x11_29 = (x9_41 u>> 0x20).d
int64_t x9_42 = x13_9 * zx.q(arg2[1]) + zx.q(x9_41.d)
int32_t x12_27

if (x10_29 + x11_28 u< x10_29)
    x12_27 = x12_26 + 1
else
    x12_27 = x12_26

int32_t x10_31 = x10_30 + x11_29
uint32_t x11_30 = (x9_42 u>> 0x20).d
int32_t x12_28

if (x10_30 + x11_29 u< x10_30)
    x12_28 = x12_27 + 1
else
    x12_28 = x12_27

int32_t x10_32 = x10_31 + x11_30
int32_t x12_29

if (x10_31 + x11_30 u< x10_31)
    x12_29 = x12_28 + 1
else
    x12_29 = x12_28

uint64_t x14_9 = zx.q(x22 + x9_42.d)
int32_t x9_43 = x22 + x9_42.d u< x22 ? 1 : 0
uint64_t x11_31 = zx.q(x14_9.d * arg3)
int32_t x9_44 = x10_32 + x9_43
arg4[6] = x11_31.d
int32_t x10_33

if (x10_32 + x9_43 u< x10_32)
    x10_33 = x12_29 + 1
else
    x10_33 = x12_29

uint32_t x12_32 = ((x14_9 + x11_31 * zx.q(*arg2)) u>> 0x20).d
int64_t x9_46 = zx.q(x9_44 + x12_32) + zx.q(arg2[7]) * x6
int32_t x10_34

if (x9_44 + x12_32 u< x9_44)
    x10_34 = x10_33 + 1
else
    x10_34 = x10_33

uint32_t x12_33 = (x9_46 u>> 0x20).d
int64_t x9_47 = zx.q(arg2[6]) * x4 + zx.q(x9_46.d)
int32_t x10_35 = x10_34 + x12_33
bool c_38 = x10_34 + x12_33 u< x10_34
uint32_t x12_34 = (x9_47 u>> 0x20).d
int64_t x9_48 = zx.q(arg2[5]) * x1 + zx.q(x9_47.d)
int32_t x16_8

x16_8 = c_38 ? 2 : 1

int32_t x10_36 = x10_35 + x12_34
uint32_t x12_35 = (x9_48 u>> 0x20).d
int64_t x9_49 = zx.q(arg2[4]) * x17 + zx.q(x9_48.d)
int32_t x14_12

if (x10_35 + x12_34 u>= x10_35)
    x14_12 = c_38 ? 1 : 0
else
    x14_12 = x16_8

int32_t x10_37 = x10_36 + x12_35
uint32_t x12_36 = (x9_49 u>> 0x20).d
int64_t x9_50 = x15_4 * zx.q(arg2[3]) + zx.q(x9_49.d)
int32_t x24 = arg1[7]
int32_t x14_13

if (x10_36 + x12_35 u< x10_36)
    x14_13 = x14_12 + 1
else
    x14_13 = x14_12

int32_t x10_38 = x10_37 + x12_36
uint32_t x12_37 = (x9_50 u>> 0x20).d
int64_t x9_51 = x13_9 * zx.q(arg2[2]) + zx.q(x9_50.d)
int32_t x14_14

if (x10_37 + x12_36 u< x10_37)
    x14_14 = x14_13 + 1
else
    x14_14 = x14_13

int32_t x10_39 = x10_38 + x12_37
uint32_t x12_38 = (x9_51 u>> 0x20).d
int64_t x9_52 = x11_31 * zx.q(arg2[1]) + zx.q(x9_51.d)
int32_t x14_15

if (x10_38 + x12_37 u< x10_38)
    x14_15 = x14_14 + 1
else
    x14_15 = x14_14

int32_t x10_40 = x10_39 + x12_38
uint32_t x12_39 = (x9_52 u>> 0x20).d
int32_t x14_16

if (x10_39 + x12_38 u< x10_39)
    x14_16 = x14_15 + 1
else
    x14_16 = x14_15

int32_t x10_41 = x10_40 + x12_39
int32_t x12_40

if (x10_40 + x12_39 u< x10_40)
    x12_40 = x14_16 + 1
else
    x12_40 = x14_16

uint64_t x14_17 = zx.q(x24 + x9_52.d)
uint64_t x9_53 = zx.q(x14_17.d * arg3)
arg4[7] = x9_53.d
int32_t x16_9 = x24 + x9_52.d u< x24 ? 1 : 0
int32_t x10_42 = x10_41 + x16_9
uint32_t x14_19 = ((x14_17 + x9_53 * zx.q(*arg2)) u>> 0x20).d
int32_t x12_41

if (x10_41 + x16_9 u< x10_41)
    x12_41 = x12_40 + 1
else
    x12_41 = x12_40

int64_t x10_44 = zx.q(x10_42 + x14_19) + zx.q(arg2[8]) * x6
int32_t x12_42

if (x10_42 + x14_19 u< x10_42)
    x12_42 = x12_41 + 1
else
    x12_42 = x12_41

uint32_t x14_20 = (x10_44 u>> 0x20).d
int64_t x10_45 = zx.q(arg2[7]) * x4 + zx.q(x10_44.d)
int32_t x12_43 = x12_42 + x14_20
bool c_48 = x12_42 + x14_20 u< x12_42
uint32_t x14_21 = (x10_45 u>> 0x20).d
int64_t x10_46 = zx.q(arg2[6]) * x1 + zx.q(x10_45.d)
int32_t x0_9

x0_9 = c_48 ? 2 : 1

int32_t x12_44 = x12_43 + x14_21
uint32_t x14_22 = (x10_46 u>> 0x20).d
int64_t x10_47 = zx.q(arg2[5]) * x17 + zx.q(x10_46.d)
int32_t x16_12

if (x12_43 + x14_21 u>= x12_43)
    x16_12 = c_48 ? 1 : 0
else
    x16_12 = x0_9

int32_t x12_45 = x12_44 + x14_22
uint32_t x14_23 = (x10_47 u>> 0x20).d
int64_t x10_48 = zx.q(arg2[4]) * x15_4 + zx.q(x10_47.d)
int32_t x16_13

if (x12_44 + x14_22 u< x12_44)
    x16_13 = x16_12 + 1
else
    x16_13 = x16_12

int32_t x12_46 = x12_45 + x14_23
uint32_t x14_24 = (x10_48 u>> 0x20).d
int64_t x10_49 = x13_9 * zx.q(arg2[3]) + zx.q(x10_48.d)
int32_t x26 = arg1[8]
int32_t x16_14

if (x12_45 + x14_23 u< x12_45)
    x16_14 = x16_13 + 1
else
    x16_14 = x16_13

int32_t x12_47 = x12_46 + x14_24
uint32_t x14_25 = (x10_49 u>> 0x20).d
int64_t x10_50 = x11_31 * zx.q(arg2[2]) + zx.q(x10_49.d)
int32_t x16_15

if (x12_46 + x14_24 u< x12_46)
    x16_15 = x16_14 + 1
else
    x16_15 = x16_14

int32_t x12_48 = x12_47 + x14_25
uint32_t x14_26 = (x10_50 u>> 0x20).d
int64_t x10_51 = x9_53 * zx.q(arg2[1]) + zx.q(x10_50.d)
int32_t x16_16

if (x12_47 + x14_25 u< x12_47)
    x16_16 = x16_15 + 1
else
    x16_16 = x16_15

int32_t x12_49 = x12_48 + x14_26
uint32_t x14_27 = (x10_51 u>> 0x20).d
int32_t x16_17

if (x12_48 + x14_26 u< x12_48)
    x16_17 = x16_16 + 1
else
    x16_17 = x16_16

int32_t x12_50 = x12_49 + x14_27
int32_t x14_28

if (x12_49 + x14_27 u< x12_49)
    x14_28 = x16_17 + 1
else
    x14_28 = x16_17

uint64_t x16_18 = zx.q(x26 + x10_51.d)
uint64_t x10_52 = zx.q(x16_18.d * arg3)
arg4[8] = x10_52.d
int32_t x0_10 = x26 + x10_51.d u< x26 ? 1 : 0
int32_t x0_11 = x12_50 + x0_10
int32_t x12_51

if (x12_50 + x0_10 u< x12_50)
    x12_51 = x14_28 + 1
else
    x12_51 = x14_28

uint32_t x16_20 = ((x16_18 + x10_52 * zx.q(*arg2)) u>> 0x20).d
int64_t x14_30 = zx.q(x0_11 + x16_20) + zx.q(arg2[9]) * x6
int32_t x12_52

if (x0_11 + x16_20 u< x0_11)
    x12_52 = x12_51 + 1
else
    x12_52 = x12_51

uint32_t x16_22 = (x14_30 u>> 0x20).d
int64_t x14_31 = zx.q(arg2[8]) * x4 + zx.q(x14_30.d)
int32_t x12_53 = x12_52 + x16_22
bool c_59 = x12_52 + x16_22 u< x12_52
uint32_t x16_23 = (x14_31 u>> 0x20).d
int64_t x14_32 = zx.q(arg2[7]) * x1 + zx.q(x14_31.d)
int32_t x21_7

x21_7 = c_59 ? 2 : 1

int32_t x12_54 = x12_53 + x16_23
uint32_t x16_24 = (x14_32 u>> 0x20).d
int64_t x14_33 = zx.q(arg2[6]) * x17 + zx.q(x14_32.d)
int32_t x7_10

if (x12_53 + x16_23 u>= x12_53)
    x7_10 = c_59 ? 1 : 0
else
    x7_10 = x21_7

int32_t x12_55 = x12_54 + x16_24
uint32_t x16_25 = (x14_33 u>> 0x20).d
int64_t x14_34 = zx.q(arg2[5]) * x15_4 + zx.q(x14_33.d)
int32_t x7_11

if (x12_54 + x16_24 u< x12_54)
    x7_11 = x7_10 + 1
else
    x7_11 = x7_10

int32_t x12_56 = x12_55 + x16_25
uint32_t x16_26 = (x14_34 u>> 0x20).d
int64_t x14_35 = x13_9 * zx.q(arg2[4]) + zx.q(x14_34.d)
int32_t x7_12

if (x12_55 + x16_25 u< x12_55)
    x7_12 = x7_11 + 1
else
    x7_12 = x7_11

int32_t x12_57 = x12_56 + x16_26
uint32_t x16_27 = (x14_35 u>> 0x20).d
int64_t x14_36 = x11_31 * zx.q(arg2[3]) + zx.q(x14_35.d)
int32_t x0_12 = arg1[9]
int32_t x5_10

if (x12_56 + x16_26 u< x12_56)
    x5_10 = x7_12 + 1
else
    x5_10 = x7_12

int32_t x12_58 = x12_57 + x16_27
uint32_t x16_28 = (x14_36 u>> 0x20).d
int64_t x14_37 = x9_53 * zx.q(arg2[2]) + zx.q(x14_36.d)
int32_t x5_11

if (x12_57 + x16_27 u< x12_57)
    x5_11 = x5_10 + 1
else
    x5_11 = x5_10

int32_t x12_59 = x12_58 + x16_28
uint32_t x16_29 = (x14_37 u>> 0x20).d
int64_t x14_38 = x10_52 * zx.q(arg2[1]) + zx.q(x14_37.d)
int32_t x5_12

if (x12_58 + x16_28 u< x12_58)
    x5_12 = x5_11 + 1
else
    x5_12 = x5_11

int32_t x12_60 = x12_59 + x16_29
uint32_t x16_30 = (x14_38 u>> 0x20).d
int32_t x5_13

if (x12_59 + x16_29 u< x12_59)
    x5_13 = x5_12 + 1
else
    x5_13 = x5_12

int32_t x7_13 = x12_60 + x16_30
int32_t x5_14

if (x12_60 + x16_30 u< x12_60)
    x5_14 = x5_13 + 1
else
    x5_14 = x5_13

uint64_t x16_31 = zx.q(x0_12 + x14_38.d)
int32_t x14_39 = x0_12 + x14_38.d u< x0_12 ? 1 : 0
uint64_t x12_61 = zx.q(x16_31.d * arg3)
int32_t x14_40 = x7_13 + x14_39
arg4[9] = x12_61.d
int32_t x0_13

if (x7_13 + x14_39 u< x7_13)
    x0_13 = x5_14 + 1
else
    x0_13 = x5_14

uint32_t x16_33 = ((x16_31 + x12_61 * zx.q(*arg2)) u>> 0x20).d
int64_t x14_42 = zx.q(x14_40 + x16_33) + zx.q(arg2[0xa]) * x6
int32_t x16_34

if (x14_40 + x16_33 u< x14_40)
    x16_34 = x0_13 + 1
else
    x16_34 = x0_13

uint32_t x0_14 = (x14_42 u>> 0x20).d
int64_t x14_43 = zx.q(arg2[9]) * x4 + zx.q(x14_42.d)
int32_t x16_35 = x16_34 + x0_14
bool c_71 = x16_34 + x0_14 u< x16_34
uint32_t x0_15 = (x14_43 u>> 0x20).d
int32_t x22_9

x22_9 = c_71 ? 2 : 1

int32_t x16_36 = x16_35 + x0_15
int64_t x14_44 = zx.q(arg2[8]) * x1 + zx.q(x14_43.d)
int64_t x21_10 = zx.q(arg2[7]) * x17 + zx.q(x14_44.d)
uint32_t x14_45 = (x14_44 u>> 0x20).d
int32_t x7_16

if (x16_35 + x0_15 u>= x16_35)
    x7_16 = c_71 ? 1 : 0
else
    x7_16 = x22_9

int32_t x14_46 = x16_36 + x14_45
uint32_t x16_37 = (x21_10 u>> 0x20).d
int64_t x21_11 = zx.q(arg2[6]) * x15_4 + zx.q(x21_10.d)
int32_t x7_17

if (x16_36 + x14_45 u< x16_36)
    x7_17 = x7_16 + 1
else
    x7_17 = x7_16

int32_t x14_47 = x14_46 + x16_37
uint32_t x16_38 = (x21_11 u>> 0x20).d
int64_t x5_18 = zx.q(arg2[5]) * x13_9 + zx.q(x21_11.d)
int32_t x7_18

if (x14_46 + x16_37 u< x14_46)
    x7_18 = x7_17 + 1
else
    x7_18 = x7_17

int32_t x14_48 = x14_47 + x16_38
uint32_t x16_39 = (x5_18 u>> 0x20).d
int64_t x5_19 = x11_31 * zx.q(arg2[4]) + zx.q(x5_18.d)
int32_t x7_19

if (x14_47 + x16_38 u< x14_47)
    x7_19 = x7_18 + 1
else
    x7_19 = x7_18

int32_t x14_49 = x14_48 + x16_39
uint32_t x16_40 = (x5_19 u>> 0x20).d
int64_t x0_18 = x9_53 * zx.q(arg2[3]) + zx.q(x5_19.d)
int32_t x22_10 = arg1[0xa]
int32_t x5_20

if (x14_48 + x16_39 u< x14_48)
    x5_20 = x7_19 + 1
else
    x5_20 = x7_19

int32_t x14_50 = x14_49 + x16_40
uint32_t x16_41 = (x0_18 u>> 0x20).d
int64_t x0_19 = x10_52 * zx.q(arg2[2]) + zx.q(x0_18.d)
int32_t x5_21

if (x14_49 + x16_40 u< x14_49)
    x5_21 = x5_20 + 1
else
    x5_21 = x5_20

int32_t x14_51 = x14_50 + x16_41
uint32_t x16_42 = (x0_19 u>> 0x20).d
int64_t x0_20 = x12_61 * zx.q(arg2[1]) + zx.q(x0_19.d)
int32_t x5_22

if (x14_50 + x16_41 u< x14_50)
    x5_22 = x5_21 + 1
else
    x5_22 = x5_21

int32_t x14_52 = x14_51 + x16_42
uint32_t x16_43 = (x0_20 u>> 0x20).d
int32_t x5_23

if (x14_51 + x16_42 u< x14_51)
    x5_23 = x5_22 + 1
else
    x5_23 = x5_22

int32_t x16_44 = x14_52 + x16_43
int32_t x7_20

if (x14_52 + x16_43 u< x14_52)
    x7_20 = x5_23 + 1
else
    x7_20 = x5_23

uint64_t x5_24 = zx.q(x22_10 + x0_20.d)
int32_t x0_21 = x22_10 + x0_20.d u< x22_10 ? 1 : 0
uint64_t x14_53 = zx.q(x5_24.d * arg3)
int32_t x16_45 = x16_44 + x0_21
arg4[0xa] = x14_53.d
int32_t x0_22

if (x16_44 + x0_21 u< x16_44)
    x0_22 = x7_20 + 1
else
    x0_22 = x7_20

uint32_t x5_26 = ((x5_24 + x14_53 * zx.q(*arg2)) u>> 0x20).d
int64_t x16_47 = zx.q(x16_45 + x5_26) + zx.q(arg2[0xb]) * x6
int32_t x0_23

if (x16_45 + x5_26 u< x16_45)
    x0_23 = x0_22 + 1
else
    x0_23 = x0_22

uint32_t x5_27 = (x16_47 u>> 0x20).d
int64_t x16_48 = zx.q(arg2[0xa]) * x4 + zx.q(x16_47.d)
int32_t x0_24 = x0_23 + x5_27
bool c_84 = x0_23 + x5_27 u< x0_23
uint32_t x5_28 = (x16_48 u>> 0x20).d
int64_t x16_49 = zx.q(arg2[9]) * x1 + zx.q(x16_48.d)
int32_t x22_13

x22_13 = c_84 ? 2 : 1

int32_t x0_25 = x0_24 + x5_28
int64_t x23_11 = zx.q(arg2[8]) * x17 + zx.q(x16_49.d)
uint32_t x16_50 = (x16_49 u>> 0x20).d
int32_t x21_14

if (x0_24 + x5_28 u>= x0_24)
    x21_14 = c_84 ? 1 : 0
else
    x21_14 = x22_13

int32_t x16_51 = x0_25 + x16_50
int64_t x7_24 = zx.q(arg2[7]) * x15_4 + zx.q(x23_11.d)
uint32_t x23_12 = (x23_11 u>> 0x20).d
int32_t x21_15

if (x0_25 + x16_50 u< x0_25)
    x21_15 = x21_14 + 1
else
    x21_15 = x21_14

int32_t x16_52 = x16_51 + x23_12
int64_t x26_7 = zx.q(arg2[6]) * x13_9 + zx.q(x7_24.d)
uint32_t x7_25 = (x7_24 u>> 0x20).d
int32_t x21_16

if (x16_51 + x23_12 u< x16_51)
    x21_16 = x21_15 + 1
else
    x21_16 = x21_15

int32_t x16_53 = x16_52 + x7_25
uint32_t x7_26 = (x26_7 u>> 0x20).d
int64_t x5_31 = x11_31 * zx.q(arg2[5]) + zx.q(x26_7.d)
int32_t x21_17

if (x16_52 + x7_25 u< x16_52)
    x21_17 = x21_16 + 1
else
    x21_17 = x21_16

int32_t x16_54 = x16_53 + x7_26
uint32_t x7_27 = (x5_31 u>> 0x20).d
int64_t x5_32 = x9_53 * zx.q(arg2[4]) + zx.q(x5_31.d)
int32_t x21_18

if (x16_53 + x7_26 u< x16_53)
    x21_18 = x21_17 + 1
else
    x21_18 = x21_17

int32_t x16_55 = x16_54 + x7_27
uint32_t x7_28 = (x5_32 u>> 0x20).d
int64_t x0_28 = x10_52 * zx.q(arg2[3]) + zx.q(x5_32.d)
int32_t x23_13 = arg1[0xb]
int32_t x5_33

if (x16_54 + x7_27 u< x16_54)
    x5_33 = x21_18 + 1
else
    x5_33 = x21_18

int32_t x16_56 = x16_55 + x7_28
uint32_t x7_29 = (x0_28 u>> 0x20).d
int64_t x0_29 = x12_61 * zx.q(arg2[2]) + zx.q(x0_28.d)
int32_t x5_34

if (x16_55 + x7_28 u< x16_55)
    x5_34 = x5_33 + 1
else
    x5_34 = x5_33

int32_t x16_57 = x16_56 + x7_29
uint32_t x7_30 = (x0_29 u>> 0x20).d
int64_t x0_30 = x14_53 * zx.q(arg2[1]) + zx.q(x0_29.d)
int32_t x5_35

if (x16_56 + x7_29 u< x16_56)
    x5_35 = x5_34 + 1
else
    x5_35 = x5_34

int32_t x16_58 = x16_57 + x7_30
uint32_t x7_31 = (x0_30 u>> 0x20).d
int32_t x5_36

if (x16_57 + x7_30 u< x16_57)
    x5_36 = x5_35 + 1
else
    x5_36 = x5_35

int32_t x21_19 = x16_58 + x7_31
int32_t x5_37

if (x16_58 + x7_31 u< x16_58)
    x5_37 = x5_36 + 1
else
    x5_37 = x5_36

uint64_t x7_32 = zx.q(x23_13 + x0_30.d)
uint64_t x16_59 = zx.q(x7_32.d * arg3)
int32_t x0_31 = x23_13 + x0_30.d u< x23_13 ? 1 : 0
arg4[0xb] = x16_59.d
int32_t x0_32 = x21_19 + x0_31
int32_t x5_38

if (x21_19 + x0_31 u< x21_19)
    x5_38 = x5_37 + 1
else
    x5_38 = x5_37

uint32_t x7_34 = ((x7_32 + x16_59 * zx.q(*arg2)) u>> 0x20).d
int64_t x0_34 = zx.q(x0_32 + x7_34) + zx.q(arg2[0xc]) * x6
int32_t x5_39

if (x0_32 + x7_34 u< x0_32)
    x5_39 = x5_38 + 1
else
    x5_39 = x5_38

uint32_t x7_35 = (x0_34 u>> 0x20).d
int64_t x0_35 = zx.q(arg2[0xb]) * x4 + zx.q(x0_34.d)
int32_t x5_40 = x5_39 + x7_35
bool c_98 = x5_39 + x7_35 u< x5_39
uint32_t x7_36 = (x0_35 u>> 0x20).d
int32_t x23_16

x23_16 = c_98 ? 2 : 1

int32_t x5_41 = x5_40 + x7_36
int64_t x0_36 = zx.q(arg2[0xa]) * x1 + zx.q(x0_35.d)
int64_t x21_23 = zx.q(arg2[9]) * x17 + zx.q(x0_36.d)
uint32_t x0_37 = (x0_36 u>> 0x20).d
int32_t x22_18

if (x5_40 + x7_36 u>= x5_40)
    x22_18 = c_98 ? 1 : 0
else
    x22_18 = x23_16

int32_t x0_38 = x5_41 + x0_37
int64_t x26_10 = zx.q(arg2[8]) * x15_4 + zx.q(x21_23.d)
uint32_t x21_24 = (x21_23 u>> 0x20).d
int32_t x22_19

if (x5_41 + x0_37 u< x5_41)
    x22_19 = x22_18 + 1
else
    x22_19 = x22_18

int32_t x0_39 = x0_38 + x21_24
uint32_t x21_25 = (x26_10 u>> 0x20).d
int32_t x22_20

if (x0_38 + x21_24 u< x0_38)
    x22_20 = x22_19 + 1
else
    x22_20 = x22_19

int32_t x0_40 = x0_39 + x21_25
int64_t x7_39 = zx.q(arg2[7]) * x13_9 + zx.q(x26_10.d)
int64_t x24_15 = zx.q(arg2[6]) * x11_31 + zx.q(x7_39.d)
uint32_t x7_40 = (x7_39 u>> 0x20).d
int32_t x22_21

if (x0_39 + x21_25 u< x0_39)
    x22_21 = x22_20 + 1
else
    x22_21 = x22_20

int32_t x0_41 = x0_40 + x7_40
int64_t x5_44 = x9_53 * zx.q(arg2[5]) + zx.q(x24_15.d)
uint32_t x24_16 = (x24_15 u>> 0x20).d
int32_t x22_22

if (x0_40 + x7_40 u< x0_40)
    x22_22 = x22_21 + 1
else
    x22_22 = x22_21

int32_t x0_42 = x0_41 + x24_16
uint32_t x24_17 = (x5_44 u>> 0x20).d
int64_t x5_45 = x10_52 * zx.q(arg2[4]) + zx.q(x5_44.d)
int32_t x22_23

if (x0_41 + x24_16 u< x0_41)
    x22_23 = x22_22 + 1
else
    x22_23 = x22_22

int32_t x0_43 = x0_42 + x24_17
uint32_t x23_19 = (x5_45 u>> 0x20).d
int64_t x5_46 = x12_61 * zx.q(arg2[3]) + zx.q(x5_45.d)
int32_t x7_41 = arg1[0xc]
int32_t x21_28

if (x0_42 + x24_17 u< x0_42)
    x21_28 = x22_23 + 1
else
    x21_28 = x22_23

int32_t x0_44 = x0_43 + x23_19
uint32_t x22_24 = (x5_46 u>> 0x20).d
int64_t x5_47 = x14_53 * zx.q(arg2[2]) + zx.q(x5_46.d)
int32_t x21_29

if (x0_43 + x23_19 u< x0_43)
    x21_29 = x21_28 + 1
else
    x21_29 = x21_28

int32_t x0_45 = x0_44 + x22_24
uint32_t x22_25 = (x5_47 u>> 0x20).d
int64_t x5_48 = x16_59 * zx.q(arg2[1]) + zx.q(x5_47.d)
int32_t x21_30

if (x0_44 + x22_24 u< x0_44)
    x21_30 = x21_29 + 1
else
    x21_30 = x21_29

int32_t x0_46 = x0_45 + x22_25
uint32_t x22_26 = (x5_48 u>> 0x20).d
int32_t x21_31

if (x0_45 + x22_25 u< x0_45)
    x21_31 = x21_30 + 1
else
    x21_31 = x21_30

int32_t x22_27 = x0_46 + x22_26
int32_t x21_32

if (x0_46 + x22_26 u< x0_46)
    x21_32 = x21_31 + 1
else
    x21_32 = x21_31

uint64_t x7_42 = zx.q(x7_41 + x5_48.d)
uint64_t x0_47 = zx.q(x7_42.d * arg3)
int32_t x5_49 = x7_41 + x5_48.d u< x7_41 ? 1 : 0
arg4[0xc] = x0_47.d
int32_t x5_50 = x22_27 + x5_49
int32_t x21_33

if (x22_27 + x5_49 u< x22_27)
    x21_33 = x21_32 + 1
else
    x21_33 = x21_32

uint32_t x7_44 = ((x7_42 + x0_47 * zx.q(*arg2)) u>> 0x20).d
int64_t x5_52 = zx.q(x5_50 + x7_44) + zx.q(arg2[0xd]) * x6
int32_t x7_45

if (x5_50 + x7_44 u< x5_50)
    x7_45 = x21_33 + 1
else
    x7_45 = x21_33

uint32_t x21_34 = (x5_52 u>> 0x20).d
int64_t x5_53 = zx.q(arg2[0xc]) * x4 + zx.q(x5_52.d)
int32_t x7_46 = x7_45 + x21_34
bool c_113 = x7_45 + x21_34 u< x7_45
uint32_t x21_35 = (x5_53 u>> 0x20).d
int64_t x5_54 = zx.q(arg2[0xb]) * x1 + zx.q(x5_53.d)
int32_t x24_20

x24_20 = c_113 ? 2 : 1

int32_t x7_47 = x7_46 + x21_35
int64_t x22_31 = zx.q(arg2[0xa]) * x17 + zx.q(x5_54.d)
uint32_t x5_55 = (x5_54 u>> 0x20).d
int32_t x23_22

if (x7_46 + x21_35 u>= x7_46)
    x23_22 = c_113 ? 1 : 0
else
    x23_22 = x24_20

int32_t x5_56 = x7_47 + x5_55
int64_t x21_38 = zx.q(arg2[9]) * x15_4 + zx.q(x22_31.d)
uint32_t x22_32 = (x22_31 u>> 0x20).d
int32_t x23_23

if (x7_47 + x5_55 u< x7_47)
    x23_23 = x23_22 + 1
else
    x23_23 = x23_22

int32_t x5_57 = x5_56 + x22_32
uint32_t x22_33 = (x21_38 u>> 0x20).d
int64_t x21_39 = zx.q(arg2[8]) * x13_9 + zx.q(x21_38.d)
int32_t x23_24

if (x5_56 + x22_32 u< x5_56)
    x23_24 = x23_23 + 1
else
    x23_24 = x23_23

int32_t x5_58 = x5_57 + x22_33
int64_t x7_50 = zx.q(arg2[7]) * x11_31 + zx.q(x21_39.d)
uint32_t x21_40 = (x21_39 u>> 0x20).d
int32_t x23_25

if (x5_57 + x22_33 u< x5_57)
    x23_25 = x23_24 + 1
else
    x23_25 = x23_24

int32_t x5_59 = x5_58 + x21_40
uint32_t x21_41 = (x7_50 u>> 0x20).d
int64_t x7_51 = zx.q(arg2[6]) * x9_53 + zx.q(x7_50.d)
int32_t x23_26

if (x5_58 + x21_40 u< x5_58)
    x23_26 = x23_25 + 1
else
    x23_26 = x23_25

int32_t x5_60 = x5_59 + x21_41
int64_t x22_36 = x10_52 * zx.q(arg2[5]) + zx.q(x7_51.d)
uint32_t x7_52 = (x7_51 u>> 0x20).d
int32_t x23_27

if (x5_59 + x21_41 u< x5_59)
    x23_27 = x23_26 + 1
else
    x23_27 = x23_26

int32_t x5_61 = x5_60 + x7_52
int64_t x26_19 = x12_61 * zx.q(arg2[4]) + zx.q(x22_36.d)
uint32_t x22_37 = (x22_36 u>> 0x20).d
int32_t x23_28

if (x5_60 + x7_52 u< x5_60)
    x23_28 = x23_27 + 1
else
    x23_28 = x23_27

int32_t x5_62 = x5_61 + x22_37
uint32_t x22_38 = (x26_19 u>> 0x20).d
int64_t x21_44 = x14_53 * zx.q(arg2[3]) + zx.q(x26_19.d)
int32_t x7_53 = arg1[0xd]
int32_t x23_29

if (x5_61 + x22_37 u< x5_61)
    x23_29 = x23_28 + 1
else
    x23_29 = x23_28

int32_t x5_63 = x5_62 + x22_38
uint32_t x22_39 = (x21_44 u>> 0x20).d
int64_t x21_45 = x16_59 * zx.q(arg2[2]) + zx.q(x21_44.d)
int32_t x23_30

if (x5_62 + x22_38 u< x5_62)
    x23_30 = x23_29 + 1
else
    x23_30 = x23_29

int32_t x5_64 = x5_63 + x22_39
uint32_t x22_40 = (x21_45 u>> 0x20).d
int64_t x21_46 = x0_47 * zx.q(arg2[1]) + zx.q(x21_45.d)
int32_t x23_31

if (x5_63 + x22_39 u< x5_63)
    x23_31 = x23_30 + 1
else
    x23_31 = x23_30

int32_t x5_65 = x5_64 + x22_40
uint32_t x22_41 = (x21_46 u>> 0x20).d
int32_t x23_32

if (x5_64 + x22_40 u< x5_64)
    x23_32 = x23_31 + 1
else
    x23_32 = x23_31

int32_t x22_42 = x5_65 + x22_41
int32_t x23_33

if (x5_65 + x22_41 u< x5_65)
    x23_33 = x23_32 + 1
else
    x23_33 = x23_32

uint64_t x7_54 = zx.q(x7_53 + x21_46.d)
int32_t x21_47 = x7_53 + x21_46.d u< x7_53 ? 1 : 0
uint64_t x5_66 = zx.q(x7_54.d * arg3)
int32_t x21_48 = x22_42 + x21_47
arg4[0xd] = x5_66.d
int32_t x22_43

if (x22_42 + x21_47 u< x22_42)
    x22_43 = x23_33 + 1
else
    x22_43 = x23_33

uint32_t x7_56 = ((x7_54 + x5_66 * zx.q(*arg2)) u>> 0x20).d
int64_t x7_58 = zx.q(x21_48 + x7_56) + zx.q(arg2[0xe]) * x6
int32_t x21_49

if (x21_48 + x7_56 u< x21_48)
    x21_49 = x22_43 + 1
else
    x21_49 = x22_43

uint32_t x22_44 = (x7_58 u>> 0x20).d
int64_t x7_59 = zx.q(arg2[0xd]) * x4 + zx.q(x7_58.d)
int32_t x21_50 = x21_49 + x22_44
bool c_129 = x21_49 + x22_44 u< x21_49
uint32_t x22_45 = (x7_59 u>> 0x20).d
int64_t x7_60 = zx.q(arg2[0xc]) * x1 + zx.q(x7_59.d)
int32_t x25_13

x25_13 = c_129 ? 2 : 1

int32_t x21_51 = x21_50 + x22_45
int32_t x23_37

if (x21_50 + x22_45 u>= x21_50)
    x23_37 = c_129 ? 1 : 0
else
    x23_37 = x25_13

int64_t x24_29 = zx.q(arg2[0xb]) * x17 + zx.q(x7_60.d)
uint32_t x7_61 = (x7_60 u>> 0x20).d
int32_t x7_62 = x21_51 + x7_61
int64_t x22_48 = zx.q(arg2[0xa]) * x15_4 + zx.q(x24_29.d)
uint32_t x24_30 = (x24_29 u>> 0x20).d
int32_t x23_38

if (x21_51 + x7_61 u< x21_51)
    x23_38 = x23_37 + 1
else
    x23_38 = x23_37

int32_t x7_63 = x7_62 + x24_30
uint32_t x24_31 = (x22_48 u>> 0x20).d
int64_t x22_49 = zx.q(arg2[9]) * x13_9 + zx.q(x22_48.d)
int32_t x23_39

if (x7_62 + x24_30 u< x7_62)
    x23_39 = x23_38 + 1
else
    x23_39 = x23_38

int32_t x7_64 = x7_63 + x24_31
int64_t x21_54 = zx.q(arg2[8]) * x11_31 + zx.q(x22_49.d)
uint32_t x22_50 = (x22_49 u>> 0x20).d
int32_t x23_40

if (x7_63 + x24_31 u< x7_63)
    x23_40 = x23_39 + 1
else
    x23_40 = x23_39

int32_t x7_65 = x7_64 + x22_50
uint32_t x22_51 = (x21_54 u>> 0x20).d
int64_t x21_55 = zx.q(arg2[7]) * x9_53 + zx.q(x21_54.d)
int32_t x23_41

if (x7_64 + x22_50 u< x7_64)
    x23_41 = x23_40 + 1
else
    x23_41 = x23_40

int32_t x7_66 = x7_65 + x22_51
int64_t x24_34 = x10_52 * zx.q(arg2[6]) + zx.q(x21_55.d)
uint32_t x21_56 = (x21_55 u>> 0x20).d
int32_t x23_42

if (x7_65 + x22_51 u< x7_65)
    x23_42 = x23_41 + 1
else
    x23_42 = x23_41

int32_t x7_67 = x7_66 + x21_56
uint32_t x21_57 = (x24_34 u>> 0x20).d
int64_t x24_35 = x12_61 * zx.q(arg2[5]) + zx.q(x24_34.d)
int32_t x23_43

if (x7_66 + x21_56 u< x7_66)
    x23_43 = x23_42 + 1
else
    x23_43 = x23_42

int32_t x7_68 = x7_67 + x21_57
int64_t x22_54 = x14_53 * zx.q(arg2[4]) + zx.q(x24_35.d)
uint32_t x24_36 = (x24_35 u>> 0x20).d
int32_t x23_44

if (x7_67 + x21_57 u< x7_67)
    x23_44 = x23_43 + 1
else
    x23_44 = x23_43

int32_t x7_69 = x7_68 + x24_36
int64_t x21_60 = x16_59 * zx.q(arg2[3]) + zx.q(x22_54.d)
uint32_t x22_55 = (x22_54 u>> 0x20).d
int32_t x24_37 = arg1[0xe]
int32_t x23_45

if (x7_68 + x24_36 u< x7_68)
    x23_45 = x23_44 + 1
else
    x23_45 = x23_44

int32_t x7_70 = x7_69 + x22_55
uint32_t x22_56 = (x21_60 u>> 0x20).d
int64_t x21_61 = x0_47 * zx.q(arg2[2]) + zx.q(x21_60.d)
int32_t x23_46

if (x7_69 + x22_55 u< x7_69)
    x23_46 = x23_45 + 1
else
    x23_46 = x23_45

int32_t x7_71 = x7_70 + x22_56
uint32_t x22_57 = (x21_61 u>> 0x20).d
int64_t x21_62 = x5_66 * zx.q(arg2[1]) + zx.q(x21_61.d)
int32_t x23_47

if (x7_70 + x22_56 u< x7_70)
    x23_47 = x23_46 + 1
else
    x23_47 = x23_46

int32_t x7_72 = x7_71 + x22_57
uint32_t x22_58 = (x21_62 u>> 0x20).d
int32_t x23_48

if (x7_71 + x22_57 u< x7_71)
    x23_48 = x23_47 + 1
else
    x23_48 = x23_47

int32_t x25_22 = x7_72 + x22_58
int32_t x26_22

if (x7_72 + x22_58 u< x7_72)
    x26_22 = x23_48 + 1
else
    x26_22 = x23_48

uint64_t x22_59 = zx.q(x24_37 + x21_62.d)
uint64_t x7_73 = zx.q(x22_59.d * arg3)
int32_t x21_63 = x24_37 + x21_62.d u< x24_37 ? 1 : 0
arg4[0xe] = x7_73.d
int32_t x23_49 = x25_22 + x21_63
int32_t x21_64

if (x25_22 + x21_63 u< x25_22)
    x21_64 = x26_22 + 1
else
    x21_64 = x26_22

uint32_t x22_61 = ((x22_59 + x7_73 * zx.q(*arg2)) u>> 0x20).d
int32_t x21_65

if (x23_49 + x22_61 u< x23_49)
    x21_65 = x21_64 + 1
else
    x21_65 = x21_64

int64_t x6_1 = zx.q(x23_49 + x22_61) + zx.q(arg2[0xf]) * x6
uint32_t x26_24 = (x6_1 u>> 0x20).d
int64_t x6_2 = zx.q(arg2[0xe]) * x4 + zx.q(x6_1.d)
int32_t x21_66 = x21_65 + x26_24
bool c_146 = x21_65 + x26_24 u< x21_65
uint32_t x24_41 = (x6_2 u>> 0x20).d
int64_t x6_3 = zx.q(arg2[0xd]) * x1 + zx.q(x6_2.d)
int32_t x26_25

x26_25 = c_146 ? 2 : 1

int32_t x21_67 = x21_66 + x24_41
int32_t x23_53

if (x21_66 + x24_41 u>= x21_66)
    x23_53 = c_146 ? 1 : 0
else
    x23_53 = x26_25

int64_t x22_65 = zx.q(arg2[0xc]) * x17 + zx.q(x6_3.d)
uint32_t x6_4 = (x6_3 u>> 0x20).d
int32_t x6_5 = x21_67 + x6_4
uint32_t x21_68 = (x22_65 u>> 0x20).d
int64_t x22_66 = zx.q(arg2[0xb]) * x15_4 + zx.q(x22_65.d)
int32_t x23_54

if (x21_67 + x6_4 u< x21_67)
    x23_54 = x23_53 + 1
else
    x23_54 = x23_53

int32_t x6_6 = x6_5 + x21_68
int64_t x26_28 = zx.q(arg2[0xa]) * x13_9 + zx.q(x22_66.d)
uint32_t x22_67 = (x22_66 u>> 0x20).d
int32_t x23_55

if (x6_5 + x21_68 u< x6_5)
    x23_55 = x23_54 + 1
else
    x23_55 = x23_54

int32_t x6_7 = x6_6 + x22_67
uint32_t x22_68 = (x26_28 u>> 0x20).d
int64_t x24_46 = zx.q(arg2[9]) * x11_31 + zx.q(x26_28.d)
int32_t x23_56

if (x6_6 + x22_67 u< x6_6)
    x23_56 = x23_55 + 1
else
    x23_56 = x23_55

int32_t x6_8 = x6_7 + x22_68
int64_t x21_71 = zx.q(arg2[8]) * x9_53 + zx.q(x24_46.d)
uint32_t x24_47 = (x24_46 u>> 0x20).d
int32_t x23_57

if (x6_7 + x22_68 u< x6_7)
    x23_57 = x23_56 + 1
else
    x23_57 = x23_56

int32_t x6_9 = x6_8 + x24_47
uint32_t x24_48 = (x21_71 u>> 0x20).d
int64_t x21_72 = zx.q(arg2[7]) * x10_52 + zx.q(x21_71.d)
int32_t x23_58

if (x6_8 + x24_47 u< x6_8)
    x23_58 = x23_57 + 1
else
    x23_58 = x23_57

int32_t x6_10 = x6_9 + x24_48
int64_t x22_71 = x12_61 * zx.q(arg2[6]) + zx.q(x21_72.d)
uint32_t x21_73 = (x21_72 u>> 0x20).d
int32_t x23_59

if (x6_9 + x24_48 u< x6_9)
    x23_59 = x23_58 + 1
else
    x23_59 = x23_58

int32_t x6_11 = x6_10 + x21_73
int64_t x21_75 = x14_53 * zx.q(arg2[5]) + zx.q(x22_71.d)
uint32_t x22_72 = (x22_71 u>> 0x20).d
int32_t x23_60

if (x6_10 + x21_73 u< x6_10)
    x23_60 = x23_59 + 1
else
    x23_60 = x23_59

int32_t x6_12 = x6_11 + x22_72
uint32_t x22_73 = (x21_75 u>> 0x20).d
int64_t x21_76 = x16_59 * zx.q(arg2[4]) + zx.q(x21_75.d)
int32_t x23_61

if (x6_11 + x22_72 u< x6_11)
    x23_61 = x23_60 + 1
else
    x23_61 = x23_60

int32_t x6_13 = x6_12 + x22_73
int32_t x23_62

if (x6_12 + x22_73 u< x6_12)
    x23_62 = x23_61 + 1
else
    x23_62 = x23_61

int64_t x24_53 = x0_47 * zx.q(arg2[3]) + zx.q(x21_76.d)
uint32_t x21_77 = (x21_76 u>> 0x20).d
int32_t x6_14 = x6_13 + x21_77
int32_t x21_78 = arg1[0xf]
int64_t x22_76 = x5_66 * zx.q(arg2[2]) + zx.q(x24_53.d)
uint32_t x24_54 = (x24_53 u>> 0x20).d
int32_t x23_63

if (x6_13 + x21_77 u< x6_13)
    x23_63 = x23_62 + 1
else
    x23_63 = x23_62

int32_t x6_15 = x6_14 + x24_54
uint32_t x24_55 = (x22_76 u>> 0x20).d
int64_t x22_77 = x7_73 * zx.q(arg2[1]) + zx.q(x22_76.d)
int32_t x23_64

if (x6_14 + x24_54 u< x6_14)
    x23_64 = x23_63 + 1
else
    x23_64 = x23_63

int32_t x6_16 = x6_15 + x24_55
uint32_t x24_56 = (x22_77 u>> 0x20).d
int32_t x23_65

if (x6_15 + x24_55 u< x6_15)
    x23_65 = x23_64 + 1
else
    x23_65 = x23_64

int32_t x6_17 = x6_16 + x24_56
int32_t x24_57

if (x6_16 + x24_56 u< x6_16)
    x24_57 = x23_65 + 1
else
    x24_57 = x23_65

uint64_t x21_79 = zx.q(x21_78 + x22_77.d)
int32_t x22_78 = x21_78 + x22_77.d u< x21_78 ? 1 : 0
uint64_t x2 = zx.q(x21_79.d * arg3)
arg4[0xf] = x2.d
int32_t x22_79 = x6_17 + x22_78
int32_t x6_18

if (x6_17 + x22_78 u< x6_17)
    x6_18 = x24_57 + 1
else
    x6_18 = x24_57

uint32_t x21_81 = ((x21_79 + x2 * zx.q(*arg2)) u>> 0x20).d
int32_t x6_19

if (x22_79 + x21_81 u< x22_79)
    x6_19 = x6_18 + 1
else
    x6_19 = x6_18

int64_t x4_1 = zx.q(x22_79 + x21_81) + zx.q(arg2[0xf]) * x4
uint32_t x25_26 = (x4_1 u>> 0x20).d
int64_t x4_2 = zx.q(arg2[0xe]) * x1 + zx.q(x4_1.d)
int32_t x6_20 = x6_19 + x25_26
bool c_164 = x6_19 + x25_26 u< x6_19
uint32_t x23_69 = (x4_2 u>> 0x20).d
int64_t x4_3 = zx.q(arg2[0xd]) * x17 + zx.q(x4_2.d)
int32_t x25_27

x25_27 = c_164 ? 2 : 1

int32_t x6_21 = x6_20 + x23_69
int32_t x22_83

if (x6_20 + x23_69 u>= x6_20)
    x22_83 = c_164 ? 1 : 0
else
    x22_83 = x25_27

int64_t x21_85 = zx.q(arg2[0xc]) * x15_4 + zx.q(x4_3.d)
uint32_t x4_4 = (x4_3 u>> 0x20).d
int32_t x4_5 = x6_21 + x4_4
uint32_t x6_22 = (x21_85 u>> 0x20).d
int64_t x21_86 = zx.q(arg2[0xb]) * x13_9 + zx.q(x21_85.d)
int32_t x22_84

if (x6_21 + x4_4 u< x6_21)
    x22_84 = x22_83 + 1
else
    x22_84 = x22_83

int32_t x4_6 = x4_5 + x6_22
int64_t x25_30 = zx.q(arg2[0xa]) * x11_31 + zx.q(x21_86.d)
uint32_t x21_87 = (x21_86 u>> 0x20).d
int32_t x22_85

if (x4_5 + x6_22 u< x4_5)
    x22_85 = x22_84 + 1
else
    x22_85 = x22_84

int32_t x4_7 = x4_6 + x21_87
uint32_t x21_88 = (x25_30 u>> 0x20).d
int64_t x23_74 = zx.q(arg2[9]) * x9_53 + zx.q(x25_30.d)
int32_t x22_86

if (x4_6 + x21_87 u< x4_6)
    x22_86 = x22_85 + 1
else
    x22_86 = x22_85

int32_t x4_8 = x4_7 + x21_88
int64_t x6_25 = zx.q(arg2[8]) * x10_52 + zx.q(x23_74.d)
uint32_t x23_75 = (x23_74 u>> 0x20).d
int32_t x22_87

if (x4_7 + x21_88 u< x4_7)
    x22_87 = x22_86 + 1
else
    x22_87 = x22_86

int32_t x4_9 = x4_8 + x23_75
uint32_t x23_76 = (x6_25 u>> 0x20).d
int64_t x6_26 = zx.q(arg2[7]) * x12_61 + zx.q(x6_25.d)
int32_t x22_88

if (x4_8 + x23_75 u< x4_8)
    x22_88 = x22_87 + 1
else
    x22_88 = x22_87

int32_t x4_10 = x4_9 + x23_76
int64_t x21_91 = x14_53 * zx.q(arg2[6]) + zx.q(x6_26.d)
uint32_t x6_27 = (x6_26 u>> 0x20).d
int32_t x22_89

if (x4_9 + x23_76 u< x4_9)
    x22_89 = x22_88 + 1
else
    x22_89 = x22_88

int32_t x4_11 = x4_10 + x6_27
int64_t x6_29 = x16_59 * zx.q(arg2[5]) + zx.q(x21_91.d)
uint32_t x21_92 = (x21_91 u>> 0x20).d
int32_t x22_90

if (x4_10 + x6_27 u< x4_10)
    x22_90 = x22_89 + 1
else
    x22_90 = x22_89

int32_t x4_12 = x4_11 + x21_92
uint32_t x21_93 = (x6_29 u>> 0x20).d
int64_t x6_30 = x0_47 * zx.q(arg2[4]) + zx.q(x6_29.d)
int32_t x22_91

if (x4_11 + x21_92 u< x4_11)
    x22_91 = x22_90 + 1
else
    x22_91 = x22_90

int32_t x4_13 = x4_12 + x21_93
int32_t x22_92

if (x4_12 + x21_93 u< x4_12)
    x22_92 = x22_91 + 1
else
    x22_92 = x22_91

int64_t x23_81 = x5_66 * zx.q(arg2[3]) + zx.q(x6_30.d)
uint32_t x6_31 = (x6_30 u>> 0x20).d
int32_t x4_14 = x4_13 + x6_31
int32_t x6_32 = arg1[0x10]
int64_t x21_96 = x7_73 * zx.q(arg2[2]) + zx.q(x23_81.d)
uint32_t x23_82 = (x23_81 u>> 0x20).d
int32_t x22_93

if (x4_13 + x6_31 u< x4_13)
    x22_93 = x22_92 + 1
else
    x22_93 = x22_92

int32_t x4_15 = x4_14 + x23_82
uint32_t x23_83 = (x21_96 u>> 0x20).d
int64_t x21_97 = x2 * zx.q(arg2[1]) + zx.q(x21_96.d)
int32_t x22_94

if (x4_14 + x23_82 u< x4_14)
    x22_94 = x22_93 + 1
else
    x22_94 = x22_93

int32_t x4_16 = x4_15 + x23_83
uint32_t x23_84 = (x21_97 u>> 0x20).d
int32_t x22_95

if (x4_15 + x23_83 u< x4_15)
    x22_95 = x22_94 + 1
else
    x22_95 = x22_94

int32_t x4_17 = x4_16 + x23_84
int32_t x22_96

if (x4_16 + x23_84 u< x4_16)
    x22_96 = x22_95 + 1
else
    x22_96 = x22_95

int32_t x21_98 = x6_32 + x21_97.d u< x6_32 ? 1 : 0
*arg4 = x6_32 + x21_97.d
int32_t x22_97

if (x4_17 + x21_98 u< x4_17)
    x22_97 = x22_96 + 1
else
    x22_97 = x22_96

int64_t x1_1 = zx.q(x4_17 + x21_98) + zx.q(arg2[0xf]) * x1
uint32_t x21_100 = (x1_1 u>> 0x20).d
int64_t x1_2 = zx.q(arg2[0xe]) * x17 + zx.q(x1_1.d)
int32_t x4_20 = x22_97 + x21_100
bool c_181 = x22_97 + x21_100 u< x22_97
uint32_t x21_101 = (x1_2 u>> 0x20).d
int64_t x1_3 = zx.q(arg2[0xd]) * x15_4 + zx.q(x1_2.d)
int32_t x22_98

x22_98 = c_181 ? 2 : 1

int32_t x4_21 = x4_20 + x21_101
int64_t x24_62 = zx.q(arg2[0xc]) * x13_9 + zx.q(x1_3.d)
uint32_t x1_4 = (x1_3 u>> 0x20).d
int32_t x6_37

if (x4_20 + x21_101 u>= x4_20)
    x6_37 = c_181 ? 1 : 0
else
    x6_37 = x22_98

int32_t x1_5 = x4_21 + x1_4
int64_t x21_104 = zx.q(arg2[0xb]) * x11_31 + zx.q(x24_62.d)
uint32_t x24_63 = (x24_62 u>> 0x20).d
int32_t x6_38

if (x4_21 + x1_4 u< x4_21)
    x6_38 = x6_37 + 1
else
    x6_38 = x6_37

int32_t x1_6 = x1_5 + x24_63
uint32_t x24_64 = (x21_104 u>> 0x20).d
int64_t x21_105 = zx.q(arg2[0xa]) * x9_53 + zx.q(x21_104.d)
int32_t x6_39

if (x1_5 + x24_63 u< x1_5)
    x6_39 = x6_38 + 1
else
    x6_39 = x6_38

int32_t x1_7 = x1_6 + x24_64
int64_t x4_24 = zx.q(arg2[9]) * x10_52 + zx.q(x21_105.d)
uint32_t x21_106 = (x21_105 u>> 0x20).d
int32_t x6_40

if (x1_6 + x24_64 u< x1_6)
    x6_40 = x6_39 + 1
else
    x6_40 = x6_39

int32_t x1_8 = x1_7 + x21_106
uint32_t x21_107 = (x4_24 u>> 0x20).d
int64_t x4_25 = zx.q(arg2[8]) * x12_61 + zx.q(x4_24.d)
int32_t x6_41

if (x1_7 + x21_106 u< x1_7)
    x6_41 = x6_40 + 1
else
    x6_41 = x6_40

int32_t x1_9 = x1_8 + x21_107
int64_t x23_90 = x14_53 * zx.q(arg2[7]) + zx.q(x4_25.d)
uint32_t x4_26 = (x4_25 u>> 0x20).d
int32_t x6_42

if (x1_8 + x21_107 u< x1_8)
    x6_42 = x6_41 + 1
else
    x6_42 = x6_41

int32_t x1_10 = x1_9 + x4_26
uint32_t x4_27 = (x23_90 u>> 0x20).d
int64_t x23_91 = x16_59 * zx.q(arg2[6]) + zx.q(x23_90.d)
int32_t x6_43

if (x1_9 + x4_26 u< x1_9)
    x6_43 = x6_42 + 1
else
    x6_43 = x6_42

int32_t x1_11 = x1_10 + x4_27
int64_t x21_110 = x0_47 * zx.q(arg2[5]) + zx.q(x23_91.d)
uint32_t x23_92 = (x23_91 u>> 0x20).d
int32_t x6_44

if (x1_10 + x4_27 u< x1_10)
    x6_44 = x6_43 + 1
else
    x6_44 = x6_43

int32_t x1_12 = x1_11 + x23_92
int64_t x22_103 = x5_66 * zx.q(arg2[4]) + zx.q(x21_110.d)
uint32_t x21_111 = (x21_110 u>> 0x20).d
int32_t x23_93 = arg1[0x11]
int32_t x6_45

if (x1_11 + x23_92 u< x1_11)
    x6_45 = x6_44 + 1
else
    x6_45 = x6_44

int32_t x1_13 = x1_12 + x21_111
uint32_t x21_112 = (x22_103 u>> 0x20).d
int64_t x4_30 = x7_73 * zx.q(arg2[3]) + zx.q(x22_103.d)
int32_t x6_46

if (x1_12 + x21_111 u< x1_12)
    x6_46 = x6_45 + 1
else
    x6_46 = x6_45

int32_t x1_14 = x1_13 + x21_112
uint32_t x21_113 = (x4_30 u>> 0x20).d
int64_t x4_31 = x2 * zx.q(arg2[2]) + zx.q(x4_30.d)
int32_t x6_47

if (x1_13 + x21_112 u< x1_13)
    x6_47 = x6_46 + 1
else
    x6_47 = x6_46

int32_t x1_15 = x1_14 + x21_113
uint32_t x21_114 = (x4_31 u>> 0x20).d
int32_t x6_48

if (x1_14 + x21_113 u< x1_14)
    x6_48 = x6_47 + 1
else
    x6_48 = x6_47

int32_t x1_16 = x1_15 + x21_114
int32_t x6_49

if (x1_15 + x21_114 u< x1_15)
    x6_49 = x6_48 + 1
else
    x6_49 = x6_48

int32_t x21_115 = x23_93 + x4_31.d u< x23_93 ? 1 : 0
arg4[1] = x23_93 + x4_31.d
int32_t x6_50

if (x1_16 + x21_115 u< x1_16)
    x6_50 = x6_49 + 1
else
    x6_50 = x6_49

int64_t x17_1 = zx.q(x1_16 + x21_115) + zx.q(arg2[0xf]) * x17
uint32_t x21_117 = (x17_1 u>> 0x20).d
int64_t x17_2 = zx.q(arg2[0xe]) * x15_4 + zx.q(x17_1.d)
int32_t x1_19 = x6_50 + x21_117
bool c_197 = x6_50 + x21_117 u< x6_50
uint32_t x6_51 = (x17_2 u>> 0x20).d
int64_t x17_3 = zx.q(arg2[0xd]) * x13_9 + zx.q(x17_2.d)
int32_t x21_118

x21_118 = c_197 ? 2 : 1

int32_t x1_20 = x1_19 + x6_51
int64_t x23_96 = zx.q(arg2[0xc]) * x11_31 + zx.q(x17_3.d)
uint32_t x17_4 = (x17_3 u>> 0x20).d
int32_t x4_36

if (x1_19 + x6_51 u>= x1_19)
    x4_36 = c_197 ? 1 : 0
else
    x4_36 = x21_118

int32_t x17_5 = x1_20 + x17_4
int64_t x24_71 = zx.q(arg2[0xb]) * x9_53 + zx.q(x23_96.d)
uint32_t x23_97 = (x23_96 u>> 0x20).d
int32_t x4_37

if (x1_20 + x17_4 u< x1_20)
    x4_37 = x4_36 + 1
else
    x4_37 = x4_36

int32_t x17_6 = x17_5 + x23_97
uint32_t x23_98 = (x24_71 u>> 0x20).d
int64_t x6_54 = zx.q(arg2[0xa]) * x10_52 + zx.q(x24_71.d)
int32_t x4_38

if (x17_5 + x23_97 u< x17_5)
    x4_38 = x4_37 + 1
else
    x4_38 = x4_37

int32_t x17_7 = x17_6 + x23_98
int64_t x22_107 = zx.q(arg2[9]) * x12_61 + zx.q(x6_54.d)
uint32_t x6_55 = (x6_54 u>> 0x20).d
int32_t x4_39

if (x17_6 + x23_98 u< x17_6)
    x4_39 = x4_38 + 1
else
    x4_39 = x4_38

int32_t x17_8 = x17_7 + x6_55
uint32_t x6_56 = (x22_107 u>> 0x20).d
int32_t x4_40

if (x17_7 + x6_55 u< x17_7)
    x4_40 = x4_39 + 1
else
    x4_40 = x4_39

int32_t x17_9 = x17_8 + x6_56
int64_t x1_23 = zx.q(arg2[8]) * x14_53 + zx.q(x22_107.d)
int64_t x21_121 = x16_59 * zx.q(arg2[7]) + zx.q(x1_23.d)
uint32_t x1_24 = (x1_23 u>> 0x20).d
int32_t x4_41

if (x17_8 + x6_56 u< x17_8)
    x4_41 = x4_40 + 1
else
    x4_41 = x4_40

int32_t x17_10 = x17_9 + x1_24
int64_t x23_101 = x0_47 * zx.q(arg2[6]) + zx.q(x21_121.d)
uint32_t x21_122 = (x21_121 u>> 0x20).d
int32_t x4_42

if (x17_9 + x1_24 u< x17_9)
    x4_42 = x4_41 + 1
else
    x4_42 = x4_41

int32_t x17_11 = x17_10 + x21_122
uint32_t x21_123 = (x23_101 u>> 0x20).d
int64_t x23_102 = x5_66 * zx.q(arg2[5]) + zx.q(x23_101.d)
int32_t x1_25 = arg1[0x12]
int32_t x4_43

if (x17_10 + x21_122 u< x17_10)
    x4_43 = x4_42 + 1
else
    x4_43 = x4_42

int32_t x17_12 = x17_11 + x21_123
uint32_t x21_124 = (x23_102 u>> 0x20).d
int64_t x6_59 = x7_73 * zx.q(arg2[4]) + zx.q(x23_102.d)
int32_t x4_44

if (x17_11 + x21_123 u< x17_11)
    x4_44 = x4_43 + 1
else
    x4_44 = x4_43

int32_t x17_13 = x17_12 + x21_124
uint32_t x21_125 = (x6_59 u>> 0x20).d
int64_t x6_60 = x2 * zx.q(arg2[3]) + zx.q(x6_59.d)
int32_t x4_45

if (x17_12 + x21_124 u< x17_12)
    x4_45 = x4_44 + 1
else
    x4_45 = x4_44

int32_t x17_14 = x17_13 + x21_125
uint32_t x21_126 = (x6_60 u>> 0x20).d
int32_t x4_46

if (x17_13 + x21_125 u< x17_13)
    x4_46 = x4_45 + 1
else
    x4_46 = x4_45

int32_t x17_15 = x17_14 + x21_126
int32_t x4_47

if (x17_14 + x21_126 u< x17_14)
    x4_47 = x4_46 + 1
else
    x4_47 = x4_46

int32_t x6_61 = x1_25 + x6_60.d u< x1_25 ? 1 : 0
arg4[2] = x1_25 + x6_60.d
int32_t x4_48

if (x17_15 + x6_61 u< x17_15)
    x4_48 = x4_47 + 1
else
    x4_48 = x4_47

int64_t x15_5 = zx.q(x17_15 + x6_61) + zx.q(arg2[0xf]) * x15_4
uint32_t x6_63 = (x15_5 u>> 0x20).d
int64_t x15_6 = zx.q(arg2[0xe]) * x13_9 + zx.q(x15_5.d)
int32_t x17_18 = x4_48 + x6_63
bool c_212 = x4_48 + x6_63 u< x4_48
uint32_t x4_49 = (x15_6 u>> 0x20).d
int64_t x15_7 = zx.q(arg2[0xd]) * x11_31 + zx.q(x15_6.d)
int32_t x6_64

x6_64 = c_212 ? 2 : 1

int32_t x17_19 = x17_18 + x4_49
int64_t x22_112 = zx.q(arg2[0xc]) * x9_53 + zx.q(x15_7.d)
uint32_t x15_8 = (x15_7 u>> 0x20).d
int32_t x1_30

if (x17_18 + x4_49 u>= x17_18)
    x1_30 = c_212 ? 1 : 0
else
    x1_30 = x6_64

int32_t x15_9 = x17_19 + x15_8
int64_t x23_105 = zx.q(arg2[0xb]) * x10_52 + zx.q(x22_112.d)
uint32_t x22_113 = (x22_112 u>> 0x20).d
int32_t x1_31

if (x17_19 + x15_8 u< x17_19)
    x1_31 = x1_30 + 1
else
    x1_31 = x1_30

int32_t x15_10 = x15_9 + x22_113
uint32_t x22_114 = (x23_105 u>> 0x20).d
int64_t x23_106 = zx.q(arg2[0xa]) * x12_61 + zx.q(x23_105.d)
int32_t x1_32

if (x15_9 + x22_113 u< x15_9)
    x1_32 = x1_31 + 1
else
    x1_32 = x1_31

int32_t x15_11 = x15_10 + x22_114
int64_t x4_52 = zx.q(arg2[9]) * x14_53 + zx.q(x23_106.d)
uint32_t x23_107 = (x23_106 u>> 0x20).d
int32_t x1_33

if (x15_10 + x22_114 u< x15_10)
    x1_33 = x1_32 + 1
else
    x1_33 = x1_32

int32_t x15_12 = x15_11 + x23_107
int64_t x21_130 = x16_59 * zx.q(arg2[8]) + zx.q(x4_52.d)
uint32_t x4_53 = (x4_52 u>> 0x20).d
int32_t x1_34

if (x15_11 + x23_107 u< x15_11)
    x1_34 = x1_33 + 1
else
    x1_34 = x1_33

int32_t x15_13 = x15_12 + x4_53
uint32_t x4_54 = (x21_130 u>> 0x20).d
int64_t x17_22 = x0_47 * zx.q(arg2[7]) + zx.q(x21_130.d)
int32_t x1_35

if (x15_12 + x4_53 u< x15_12)
    x1_35 = x1_34 + 1
else
    x1_35 = x1_34

int32_t x15_14 = x15_13 + x4_54
uint32_t x4_55 = (x17_22 u>> 0x20).d
int64_t x17_23 = x5_66 * zx.q(arg2[6]) + zx.q(x17_22.d)
int32_t x23_108 = arg1[0x13]
int32_t x1_36

if (x15_13 + x4_54 u< x15_13)
    x1_36 = x1_35 + 1
else
    x1_36 = x1_35

int32_t x15_15 = x15_14 + x4_55
uint32_t x4_56 = (x17_23 u>> 0x20).d
int64_t x17_24 = x7_73 * zx.q(arg2[5]) + zx.q(x17_23.d)
int32_t x1_37

if (x15_14 + x4_55 u< x15_14)
    x1_37 = x1_36 + 1
else
    x1_37 = x1_36

int32_t x15_16 = x15_15 + x4_56
uint32_t x4_57 = (x17_24 u>> 0x20).d
int64_t x17_25 = x2 * zx.q(arg2[4]) + zx.q(x17_24.d)
int32_t x1_38

if (x15_15 + x4_56 u< x15_15)
    x1_38 = x1_37 + 1
else
    x1_38 = x1_37

int32_t x15_17 = x15_16 + x4_57
uint32_t x4_58 = (x17_25 u>> 0x20).d
int32_t x1_39

if (x15_16 + x4_57 u< x15_16)
    x1_39 = x1_38 + 1
else
    x1_39 = x1_38

int32_t x15_18 = x15_17 + x4_58
int32_t x1_40

if (x15_17 + x4_58 u< x15_17)
    x1_40 = x1_39 + 1
else
    x1_40 = x1_39

int32_t x4_59 = x23_108 + x17_25.d u< x23_108 ? 1 : 0
arg4[3] = x23_108 + x17_25.d
int32_t x1_41

if (x15_18 + x4_59 u< x15_18)
    x1_41 = x1_40 + 1
else
    x1_41 = x1_40

int64_t x13_10 = zx.q(x15_18 + x4_59) + zx.q(arg2[0xf]) * x13_9
uint32_t x4_61 = (x13_10 u>> 0x20).d
int64_t x13_11 = zx.q(arg2[0xe]) * x11_31 + zx.q(x13_10.d)
int32_t x15_21 = x1_41 + x4_61
bool c_226 = x1_41 + x4_61 u< x1_41
uint32_t x1_42 = (x13_11 u>> 0x20).d
int64_t x13_12 = zx.q(arg2[0xd]) * x9_53 + zx.q(x13_11.d)
int32_t x4_62

x4_62 = c_226 ? 2 : 1

int32_t x15_22 = x15_21 + x1_42
int64_t x21_133 = zx.q(arg2[0xc]) * x10_52 + zx.q(x13_12.d)
uint32_t x13_13 = (x13_12 u>> 0x20).d
int32_t x17_30

if (x15_21 + x1_42 u>= x15_21)
    x17_30 = c_226 ? 1 : 0
else
    x17_30 = x4_62

int32_t x13_14 = x15_22 + x13_13
int64_t x22_119 = zx.q(arg2[0xb]) * x12_61 + zx.q(x21_133.d)
uint32_t x21_134 = (x21_133 u>> 0x20).d
int32_t x17_31

if (x15_22 + x13_13 u< x15_22)
    x17_31 = x17_30 + 1
else
    x17_31 = x17_30

int32_t x13_15 = x13_14 + x21_134
int64_t x23_111 = zx.q(arg2[0xa]) * x14_53 + zx.q(x22_119.d)
uint32_t x22_120 = (x22_119 u>> 0x20).d
int32_t x17_32

if (x13_14 + x21_134 u< x13_14)
    x17_32 = x17_31 + 1
else
    x17_32 = x17_31

int32_t x13_16 = x13_15 + x22_120
uint32_t x22_121 = (x23_111 u>> 0x20).d
int64_t x23_112 = zx.q(arg2[9]) * x16_59 + zx.q(x23_111.d)
int32_t x17_33

if (x13_15 + x22_120 u< x13_15)
    x17_33 = x17_32 + 1
else
    x17_33 = x17_32

int32_t x13_17 = x13_16 + x22_121
uint32_t x22_122 = (x23_112 u>> 0x20).d
int64_t x1_45 = x0_47 * zx.q(arg2[8]) + zx.q(x23_112.d)
int32_t x17_34

if (x13_16 + x22_121 u< x13_16)
    x17_34 = x17_33 + 1
else
    x17_34 = x17_33

int32_t x13_18 = x13_17 + x22_122
uint32_t x22_123 = (x1_45 u>> 0x20).d
int64_t x1_46 = x5_66 * zx.q(arg2[7]) + zx.q(x1_45.d)
int32_t x21_135 = arg1[0x14]
int32_t x17_35

if (x13_17 + x22_122 u< x13_17)
    x17_35 = x17_34 + 1
else
    x17_35 = x17_34

int32_t x13_19 = x13_18 + x22_123
uint32_t x6_70 = (x1_46 u>> 0x20).d
int64_t x15_25 = x7_73 * zx.q(arg2[6]) + zx.q(x1_46.d)
int32_t x17_36

if (x13_18 + x22_123 u< x13_18)
    x17_36 = x17_35 + 1
else
    x17_36 = x17_35

int32_t x13_20 = x13_19 + x6_70
uint32_t x1_47 = (x15_25 u>> 0x20).d
int64_t x15_26 = x2 * zx.q(arg2[5]) + zx.q(x15_25.d)
int32_t x17_37

if (x13_19 + x6_70 u< x13_19)
    x17_37 = x17_36 + 1
else
    x17_37 = x17_36

int32_t x13_21 = x13_20 + x1_47
uint32_t x1_48 = (x15_26 u>> 0x20).d
int32_t x17_38

if (x13_20 + x1_47 u< x13_20)
    x17_38 = x17_37 + 1
else
    x17_38 = x17_37

int32_t x13_22 = x13_21 + x1_48
int32_t x17_39

if (x13_21 + x1_48 u< x13_21)
    x17_39 = x17_38 + 1
else
    x17_39 = x17_38

int32_t x1_49 = x21_135 + x15_26.d u< x21_135 ? 1 : 0
arg4[4] = x21_135 + x15_26.d
int64_t x11_32 = zx.q(x13_22 + x1_49) + zx.q(arg2[0xf]) * x11_31
int32_t x17_40

if (x13_22 + x1_49 u< x13_22)
    x17_40 = x17_39 + 1
else
    x17_40 = x17_39

uint32_t x1_51 = (x11_32 u>> 0x20).d
int64_t x11_33 = zx.q(arg2[0xe]) * x9_53 + zx.q(x11_32.d)
int32_t x13_25 = x17_40 + x1_51
bool c_239 = x17_40 + x1_51 u< x17_40
uint32_t x17_41 = (x11_33 u>> 0x20).d
int64_t x11_34 = zx.q(arg2[0xd]) * x10_52 + zx.q(x11_33.d)
int32_t x1_52

x1_52 = c_239 ? 2 : 1

int32_t x13_26 = x13_25 + x17_41
int64_t x6_73 = zx.q(arg2[0xc]) * x12_61 + zx.q(x11_34.d)
uint32_t x11_35 = (x11_34 u>> 0x20).d
int32_t x15_31

if (x13_25 + x17_41 u>= x13_25)
    x15_31 = c_239 ? 1 : 0
else
    x15_31 = x1_52

int32_t x11_36 = x13_26 + x11_35
uint32_t x13_27 = (x6_73 u>> 0x20).d
int64_t x6_74 = zx.q(arg2[0xb]) * x14_53 + zx.q(x6_73.d)
int32_t x15_32

if (x13_26 + x11_35 u< x13_26)
    x15_32 = x15_31 + 1
else
    x15_32 = x15_31

int32_t x11_37 = x11_36 + x13_27
uint32_t x13_28 = (x6_74 u>> 0x20).d
int64_t x6_75 = zx.q(arg2[0xa]) * x16_59 + zx.q(x6_74.d)
int32_t x15_33

if (x11_36 + x13_27 u< x11_36)
    x15_33 = x15_32 + 1
else
    x15_33 = x15_32

int32_t x11_38 = x11_37 + x13_28
uint32_t x13_29 = (x6_75 u>> 0x20).d
int64_t x6_76 = x0_47 * zx.q(arg2[9]) + zx.q(x6_75.d)
int32_t x15_34

if (x11_37 + x13_28 u< x11_37)
    x15_34 = x15_33 + 1
else
    x15_34 = x15_33

int32_t x11_39 = x11_38 + x13_29
uint32_t x13_30 = (x6_76 u>> 0x20).d
int64_t x6_77 = x5_66 * zx.q(arg2[8]) + zx.q(x6_76.d)
int32_t x1_53 = arg1[0x15]
int32_t x15_35

if (x11_38 + x13_29 u< x11_38)
    x15_35 = x15_34 + 1
else
    x15_35 = x15_34

int32_t x11_40 = x11_39 + x13_30
uint32_t x13_31 = (x6_77 u>> 0x20).d
int64_t x17_44 = x7_73 * zx.q(arg2[7]) + zx.q(x6_77.d)
int32_t x15_36

if (x11_39 + x13_30 u< x11_39)
    x15_36 = x15_35 + 1
else
    x15_36 = x15_35

int32_t x11_41 = x11_40 + x13_31
uint32_t x13_32 = (x17_44 u>> 0x20).d
int64_t x17_45 = x2 * zx.q(arg2[6]) + zx.q(x17_44.d)
int32_t x15_37

if (x11_40 + x13_31 u< x11_40)
    x15_37 = x15_36 + 1
else
    x15_37 = x15_36

int32_t x11_42 = x11_41 + x13_32
uint32_t x13_33 = (x17_45 u>> 0x20).d
int32_t x15_38

if (x11_41 + x13_32 u< x11_41)
    x15_38 = x15_37 + 1
else
    x15_38 = x15_37

int32_t x13_34 = x11_42 + x13_33
int32_t x11_43

if (x11_42 + x13_33 u< x11_42)
    x11_43 = x15_38 + 1
else
    x11_43 = x15_38

int32_t x17_46 = x1_53 + x17_45.d u< x1_53 ? 1 : 0
arg4[5] = x1_53 + x17_45.d
int64_t x9_54 = zx.q(x13_34 + x17_46) + zx.q(arg2[0xf]) * x9_53
int32_t x11_44

if (x13_34 + x17_46 u< x13_34)
    x11_44 = x11_43 + 1
else
    x11_44 = x11_43

uint32_t x24_83 = (x9_54 u>> 0x20).d
int64_t x9_55 = zx.q(arg2[0xe]) * x10_52 + zx.q(x9_54.d)
int32_t x11_45 = x11_44 + x24_83
bool c_251 = x11_44 + x24_83 u< x11_44
uint32_t x15_42 = (x9_55 u>> 0x20).d
int64_t x9_56 = zx.q(arg2[0xd]) * x12_61 + zx.q(x9_55.d)
int32_t x24_84

x24_84 = c_251 ? 2 : 1

int32_t x11_46 = x11_45 + x15_42
uint32_t x15_43 = (x9_56 u>> 0x20).d
int64_t x9_57 = zx.q(arg2[0xc]) * x14_53 + zx.q(x9_56.d)
int32_t x17_50

if (x11_45 + x15_42 u>= x11_45)
    x17_50 = c_251 ? 1 : 0
else
    x17_50 = x24_84

int32_t x11_47 = x11_46 + x15_43
uint32_t x15_44 = (x9_57 u>> 0x20).d
int64_t x9_58 = zx.q(arg2[0xb]) * x16_59 + zx.q(x9_57.d)
int32_t x17_51

if (x11_46 + x15_43 u< x11_46)
    x17_51 = x17_50 + 1
else
    x17_51 = x17_50

int32_t x11_48 = x11_47 + x15_44
uint32_t x15_45 = (x9_58 u>> 0x20).d
int64_t x9_59 = x0_47 * zx.q(arg2[0xa]) + zx.q(x9_58.d)
int32_t x17_52

if (x11_47 + x15_44 u< x11_47)
    x17_52 = x17_51 + 1
else
    x17_52 = x17_51

int32_t x11_49 = x11_48 + x15_45
uint32_t x15_46 = (x9_59 u>> 0x20).d
int64_t x9_60 = x5_66 * zx.q(arg2[9]) + zx.q(x9_59.d)
int32_t x13_36 = arg1[0x16]
int32_t x17_53

if (x11_48 + x15_45 u< x11_48)
    x17_53 = x17_52 + 1
else
    x17_53 = x17_52

int32_t x11_50 = x11_49 + x15_46
uint32_t x15_47 = (x9_60 u>> 0x20).d
int64_t x9_61 = x7_73 * zx.q(arg2[8]) + zx.q(x9_60.d)
int32_t x17_54

if (x11_49 + x15_46 u< x11_49)
    x17_54 = x17_53 + 1
else
    x17_54 = x17_53

int32_t x11_51 = x11_50 + x15_47
uint32_t x15_48 = (x9_61 u>> 0x20).d
int64_t x9_62 = x2 * zx.q(arg2[7]) + zx.q(x9_61.d)
int32_t x17_55

if (x11_50 + x15_47 u< x11_50)
    x17_55 = x17_54 + 1
else
    x17_55 = x17_54

int32_t x11_52 = x11_51 + x15_48
uint32_t x15_49 = (x9_62 u>> 0x20).d
int32_t x17_56

if (x11_51 + x15_48 u< x11_51)
    x17_56 = x17_55 + 1
else
    x17_56 = x17_55

int32_t x11_53 = x11_52 + x15_49
int32_t x15_50

if (x11_52 + x15_49 u< x11_52)
    x15_50 = x17_56 + 1
else
    x15_50 = x17_56

int32_t x13_37 = x13_36 + x9_62.d u< x13_36 ? 1 : 0
arg4[6] = x13_36 + x9_62.d
int64_t x9_65 = zx.q(x11_53 + x13_37) + zx.q(arg2[0xf]) * x10_52
int32_t x15_51

if (x11_53 + x13_37 u< x11_53)
    x15_51 = x15_50 + 1
else
    x15_51 = x15_50

uint32_t x21_141 = (x9_65 u>> 0x20).d
int64_t x9_66 = zx.q(arg2[0xe]) * x12_61 + zx.q(x9_65.d)
int32_t x10_54 = x15_51 + x21_141
bool c_262 = x15_51 + x21_141 u< x15_51
uint32_t x15_52 = (x9_66 u>> 0x20).d
int64_t x9_67 = zx.q(arg2[0xd]) * x14_53 + zx.q(x9_66.d)
int32_t x21_142

x21_142 = c_262 ? 2 : 1

int32_t x10_55 = x10_54 + x15_52
uint32_t x15_53 = (x9_67 u>> 0x20).d
int64_t x9_68 = zx.q(arg2[0xc]) * x16_59 + zx.q(x9_67.d)
int32_t x11_57

if (x10_54 + x15_52 u>= x10_54)
    x11_57 = c_262 ? 1 : 0
else
    x11_57 = x21_142

int32_t x10_56 = x10_55 + x15_53
uint32_t x13_40 = (x9_68 u>> 0x20).d
int64_t x9_69 = zx.q(arg2[0xb]) * x0_47 + zx.q(x9_68.d)
int32_t x11_58

if (x10_55 + x15_53 u< x10_55)
    x11_58 = x11_57 + 1
else
    x11_58 = x11_57

int32_t x10_57 = x10_56 + x13_40
uint32_t x13_41 = (x9_69 u>> 0x20).d
int64_t x9_70 = x5_66 * zx.q(arg2[0xa]) + zx.q(x9_69.d)
int32_t x23_117 = arg1[0x17]
int32_t x11_59

if (x10_56 + x13_40 u< x10_56)
    x11_59 = x11_58 + 1
else
    x11_59 = x11_58

int32_t x10_58 = x10_57 + x13_41
uint32_t x13_42 = (x9_70 u>> 0x20).d
int64_t x9_71 = x7_73 * zx.q(arg2[9]) + zx.q(x9_70.d)
int32_t x11_60

if (x10_57 + x13_41 u< x10_57)
    x11_60 = x11_59 + 1
else
    x11_60 = x11_59

int32_t x10_59 = x10_58 + x13_42
uint32_t x13_43 = (x9_71 u>> 0x20).d
int64_t x9_72 = x2 * zx.q(arg2[8]) + zx.q(x9_71.d)
int32_t x11_61

if (x10_58 + x13_42 u< x10_58)
    x11_61 = x11_60 + 1
else
    x11_61 = x11_60

int32_t x10_60 = x10_59 + x13_43
uint32_t x13_44 = (x9_72 u>> 0x20).d
int32_t x11_62

if (x10_59 + x13_43 u< x10_59)
    x11_62 = x11_61 + 1
else
    x11_62 = x11_61

int32_t x10_61 = x10_60 + x13_44
int32_t x11_63

if (x10_60 + x13_44 u< x10_60)
    x11_63 = x11_62 + 1
else
    x11_63 = x11_62

int32_t x13_45 = x23_117 + x9_72.d u< x23_117 ? 1 : 0
arg4[7] = x23_117 + x9_72.d
int64_t x9_75 = zx.q(x10_61 + x13_45) + zx.q(arg2[0xf]) * x12_61
int32_t x11_64

if (x10_61 + x13_45 u< x10_61)
    x11_64 = x11_63 + 1
else
    x11_64 = x11_63

uint32_t x4_73 = (x9_75 u>> 0x20).d
int64_t x9_76 = zx.q(arg2[0xe]) * x14_53 + zx.q(x9_75.d)
int32_t x10_64 = x11_64 + x4_73
bool c_272 = x11_64 + x4_73 u< x11_64
uint32_t x11_65 = (x9_76 u>> 0x20).d
int64_t x9_77 = zx.q(arg2[0xd]) * x16_59 + zx.q(x9_76.d)
int32_t x4_74

x4_74 = c_272 ? 2 : 1

int32_t x10_65 = x10_64 + x11_65
uint32_t x11_66 = (x9_77 u>> 0x20).d
int64_t x9_78 = zx.q(arg2[0xc]) * x0_47 + zx.q(x9_77.d)
int32_t x12_64

if (x10_64 + x11_65 u>= x10_64)
    x12_64 = c_272 ? 1 : 0
else
    x12_64 = x4_74

int32_t x10_66 = x10_65 + x11_66
uint32_t x11_67 = (x9_78 u>> 0x20).d
int64_t x9_79 = x5_66 * zx.q(arg2[0xb]) + zx.q(x9_78.d)
int32_t x21_143 = arg1[0x18]
int32_t x12_65

if (x10_65 + x11_66 u< x10_65)
    x12_65 = x12_64 + 1
else
    x12_65 = x12_64

int32_t x10_67 = x10_66 + x11_67
uint32_t x11_68 = (x9_79 u>> 0x20).d
int64_t x9_80 = x7_73 * zx.q(arg2[0xa]) + zx.q(x9_79.d)
int32_t x12_66

if (x10_66 + x11_67 u< x10_66)
    x12_66 = x12_65 + 1
else
    x12_66 = x12_65

int32_t x10_68 = x10_67 + x11_68
uint32_t x11_69 = (x9_80 u>> 0x20).d
int64_t x9_81 = x2 * zx.q(arg2[9]) + zx.q(x9_80.d)
int32_t x12_67

if (x10_67 + x11_68 u< x10_67)
    x12_67 = x12_66 + 1
else
    x12_67 = x12_66

int32_t x10_69 = x10_68 + x11_69
uint32_t x11_70 = (x9_81 u>> 0x20).d
int32_t x12_68

if (x10_68 + x11_69 u< x10_68)
    x12_68 = x12_67 + 1
else
    x12_68 = x12_67

int32_t x10_70 = x10_69 + x11_70
int32_t x11_71

if (x10_69 + x11_70 u< x10_69)
    x11_71 = x12_68 + 1
else
    x11_71 = x12_68

int32_t x12_69 = x21_143 + x9_81.d u< x21_143 ? 1 : 0
arg4[8] = x21_143 + x9_81.d
int32_t x11_72

if (x10_70 + x12_69 u< x10_70)
    x11_72 = x11_71 + 1
else
    x11_72 = x11_71

int64_t x9_84 = zx.q(x10_70 + x12_69) + zx.q(arg2[0xf]) * x14_53
uint32_t x17_62 = (x9_84 u>> 0x20).d
int64_t x9_85 = zx.q(arg2[0xe]) * x16_59 + zx.q(x9_84.d)
int32_t x10_73 = x11_72 + x17_62
bool c_281 = x11_72 + x17_62 u< x11_72
uint32_t x11_73 = (x9_85 u>> 0x20).d
int64_t x9_86 = zx.q(arg2[0xd]) * x0_47 + zx.q(x9_85.d)
int32_t x17_63

x17_63 = c_281 ? 2 : 1

int32_t x10_74 = x10_73 + x11_73
uint32_t x11_74 = (x9_86 u>> 0x20).d
int64_t x9_87 = x5_66 * zx.q(arg2[0xc]) + zx.q(x9_86.d)
int32_t x4_75 = arg1[0x19]
int32_t x12_73

if (x10_73 + x11_73 u>= x10_73)
    x12_73 = c_281 ? 1 : 0
else
    x12_73 = x17_63

int32_t x10_75 = x10_74 + x11_74
uint32_t x11_75 = (x9_87 u>> 0x20).d
int64_t x9_88 = x7_73 * zx.q(arg2[0xb]) + zx.q(x9_87.d)
int32_t x12_74

if (x10_74 + x11_74 u< x10_74)
    x12_74 = x12_73 + 1
else
    x12_74 = x12_73

int32_t x10_76 = x10_75 + x11_75
uint32_t x11_76 = (x9_88 u>> 0x20).d
int64_t x9_89 = x2 * zx.q(arg2[0xa]) + zx.q(x9_88.d)
int32_t x12_75

if (x10_75 + x11_75 u< x10_75)
    x12_75 = x12_74 + 1
else
    x12_75 = x12_74

int32_t x10_77 = x10_76 + x11_76
uint32_t x11_77 = (x9_89 u>> 0x20).d
int32_t x12_76

if (x10_76 + x11_76 u< x10_76)
    x12_76 = x12_75 + 1
else
    x12_76 = x12_75

int32_t x10_78 = x10_77 + x11_77
int32_t x11_78

if (x10_77 + x11_77 u< x10_77)
    x11_78 = x12_76 + 1
else
    x11_78 = x12_76

int32_t x12_77 = x4_75 + x9_89.d u< x4_75 ? 1 : 0
arg4[9] = x4_75 + x9_89.d
int32_t x11_79

if (x10_78 + x12_77 u< x10_78)
    x11_79 = x11_78 + 1
else
    x11_79 = x11_78

int64_t x9_92 = zx.q(x10_78 + x12_77) + zx.q(arg2[0xf]) * x16_59
uint32_t x15_59 = (x9_92 u>> 0x20).d
int64_t x9_93 = zx.q(arg2[0xe]) * x0_47 + zx.q(x9_92.d)
int32_t x10_81 = x11_79 + x15_59
bool c_289 = x11_79 + x15_59 u< x11_79
uint32_t x11_80 = (x9_93 u>> 0x20).d
int64_t x9_94 = x5_66 * zx.q(arg2[0xd]) + zx.q(x9_93.d)
int32_t x17_64 = arg1[0x1a]
int32_t x15_60

x15_60 = c_289 ? 2 : 1

int32_t x10_82 = x10_81 + x11_80
uint32_t x11_81 = (x9_94 u>> 0x20).d
int64_t x9_95 = x7_73 * zx.q(arg2[0xc]) + zx.q(x9_94.d)
int32_t x12_81

if (x10_81 + x11_80 u>= x10_81)
    x12_81 = c_289 ? 1 : 0
else
    x12_81 = x15_60

int32_t x10_83 = x10_82 + x11_81
uint32_t x11_82 = (x9_95 u>> 0x20).d
int64_t x9_96 = x2 * zx.q(arg2[0xb]) + zx.q(x9_95.d)
int32_t x12_82

if (x10_82 + x11_81 u< x10_82)
    x12_82 = x12_81 + 1
else
    x12_82 = x12_81

int32_t x10_84 = x10_83 + x11_82
uint32_t x11_83 = (x9_96 u>> 0x20).d
int32_t x12_83

if (x10_83 + x11_82 u< x10_83)
    x12_83 = x12_82 + 1
else
    x12_83 = x12_82

int32_t x10_85 = x10_84 + x11_83
int32_t x11_84

if (x10_84 + x11_83 u< x10_84)
    x11_84 = x12_83 + 1
else
    x11_84 = x12_83

int32_t x12_84 = x17_64 + x9_96.d u< x17_64 ? 1 : 0
arg4[0xa] = x17_64 + x9_96.d
int32_t x11_85

if (x10_85 + x12_84 u< x10_85)
    x11_85 = x11_84 + 1
else
    x11_85 = x11_84

int32_t x15_61 = arg1[0x1b]
int64_t x9_99 = zx.q(x10_85 + x12_84) + zx.q(arg2[0xf]) * x0_47
uint32_t x14_58 = (x9_99 u>> 0x20).d
int64_t x9_100 = zx.q(arg2[0xe]) * x5_66 + zx.q(x9_99.d)
int32_t x10_88 = x11_85 + x14_58
bool c_296 = x11_85 + x14_58 u< x11_85
uint32_t x11_86 = (x9_100 u>> 0x20).d
int64_t x9_101 = x7_73 * zx.q(arg2[0xd]) + zx.q(x9_100.d)
int32_t x14_59

x14_59 = c_296 ? 2 : 1

int32_t x10_89 = x10_88 + x11_86
uint32_t x11_87 = (x9_101 u>> 0x20).d
int64_t x9_102 = x2 * zx.q(arg2[0xc]) + zx.q(x9_101.d)
int32_t x12_88

if (x10_88 + x11_86 u>= x10_88)
    x12_88 = c_296 ? 1 : 0
else
    x12_88 = x14_59

int32_t x10_90 = x10_89 + x11_87
uint32_t x11_88 = (x9_102 u>> 0x20).d
int32_t x12_89

if (x10_89 + x11_87 u< x10_89)
    x12_89 = x12_88 + 1
else
    x12_89 = x12_88

int32_t x10_91 = x10_90 + x11_88
int32_t x11_89

if (x10_90 + x11_88 u< x10_90)
    x11_89 = x12_89 + 1
else
    x11_89 = x12_89

int32_t x12_90 = x15_61 + x9_102.d u< x15_61 ? 1 : 0
arg4[0xb] = x15_61 + x9_102.d
int32_t x14_60 = arg1[0x1c]
int32_t x11_90

if (x10_91 + x12_90 u< x10_91)
    x11_90 = x11_89 + 1
else
    x11_90 = x11_89

int64_t x9_105 = zx.q(x10_91 + x12_90) + zx.q(arg2[0xf]) * x5_66
uint32_t x13_55 = (x9_105 u>> 0x20).d
int64_t x9_106 = x7_73 * zx.q(arg2[0xe]) + zx.q(x9_105.d)
int32_t x10_94 = x11_90 + x13_55
bool c_302 = x11_90 + x13_55 u< x11_90
uint32_t x11_91 = (x9_106 u>> 0x20).d
int64_t x9_107 = x2 * zx.q(arg2[0xd]) + zx.q(x9_106.d)
int32_t x13_56

x13_56 = c_302 ? 2 : 1

int32_t x10_95 = x10_94 + x11_91
uint32_t x11_92 = (x9_107 u>> 0x20).d
int32_t x12_94

if (x10_94 + x11_91 u>= x10_94)
    x12_94 = c_302 ? 1 : 0
else
    x12_94 = x13_56

int32_t x10_96 = x10_95 + x11_92
int32_t x11_93

if (x10_95 + x11_92 u< x10_95)
    x11_93 = x12_94 + 1
else
    x11_93 = x12_94

int32_t x12_95 = x14_60 + x9_107.d u< x14_60 ? 1 : 0
arg4[0xc] = x14_60 + x9_107.d
int32_t x13_57 = arg1[0x1d]
int32_t x11_94

if (x10_96 + x12_95 u< x10_96)
    x11_94 = x11_93 + 1
else
    x11_94 = x11_93

int64_t x9_110 = zx.q(x10_96 + x12_95) + x7_73 * zx.q(arg2[0xf])
uint32_t x12_97 = (x9_110 u>> 0x20).d
int64_t x9_111 = x2 * zx.q(arg2[0xe]) + zx.q(x9_110.d)
int32_t x10_99 = x11_94 + x12_97
bool c_307 = x11_94 + x12_97 u< x11_94
uint32_t x11_95 = (x9_111 u>> 0x20).d
int32_t x8

x8 = c_307 ? 2 : 1

int32_t x10_100 = x10_99 + x11_95
int32_t x8_1

if (x10_99 + x11_95 u>= x10_99)
    x8_1 = c_307 ? 1 : 0
else
    x8_1 = x8

arg4[0xd] = x13_57 + x9_111.d
int32_t x11_96 = x13_57 + x9_111.d u< x13_57 ? 1 : 0
int32_t x11_97 = arg1[0x1e]
int64_t x9_114 = zx.q(x10_100 + x11_96) + x2 * zx.q(arg2[0xf])
int32_t x8_2

if (x10_100 + x11_96 u< x10_100)
    x8_2 = x8_1 + 1
else
    x8_2 = x8_1

uint32_t x10_102 = (x9_114 u>> 0x20).d
arg4[0xe] = x11_97 + x9_114.d
int32_t x9_116 = arg1[0x1f]
int32_t x11_98 = x11_97 + x9_114.d u< x11_97 ? 1 : 0
arg4[0xf] = x8_2 + x10_102 + x11_98 + x9_116
int32_t x12_102 = arg1[0x21]
int32_t x8_3 = x8_2 + x10_102
int32_t x10_103

if (x8_2 + x10_102 u< x8_2)
    x10_103 = x12_102 + 1
else
    x10_103 = x12_102

int32_t x8_4 = x8_3 + x11_98
int32_t x10_104

if (x8_3 + x11_98 u< x8_3)
    x10_104 = x10_103 + 1
else
    x10_104 = x10_103

int32_t x8_5

if (x8_4 + x9_116 u< x8_4)
    x8_5 = x10_104 + 1
else
    x8_5 = x10_104

arg4[0x10] = x8_5
arg4[0x11] = x8_5 u< x12_102 ? 1 : 0
int64_t result = Botan::bigint_sub3(&arg4[0x11], arg4, 0x11, arg2, 0x10)
int32_t x8_8 = ((result.d - 1) & not.d(result.d)) s>> 0x1f
*arg1 = (arg4[0x11] & x8_8) | (*arg4 & not.d(x8_8))
arg1[1] = (arg4[0x12] & x8_8) | (arg4[1] & not.d(x8_8))
arg1[2] = (arg4[0x13] & x8_8) | (arg4[2] & not.d(x8_8))
arg1[3] = (arg4[0x14] & x8_8) | (arg4[3] & not.d(x8_8))
arg1[4] = (arg4[0x15] & x8_8) | (arg4[4] & not.d(x8_8))
arg1[5] = (arg4[0x16] & x8_8) | (arg4[5] & not.d(x8_8))
arg1[6] = (arg4[0x17] & x8_8) | (arg4[6] & not.d(x8_8))
arg1[7] = (arg4[0x18] & x8_8) | (arg4[7] & not.d(x8_8))
arg1[8] = (arg4[0x19] & x8_8) | (arg4[8] & not.d(x8_8))
arg1[9] = (arg4[0x1a] & x8_8) | (arg4[9] & not.d(x8_8))
arg1[0xa] = (arg4[0x1b] & x8_8) | (arg4[0xa] & not.d(x8_8))
arg1[0xb] = (arg4[0x1c] & x8_8) | (arg4[0xb] & not.d(x8_8))
arg1[0xc] = (arg4[0x1d] & x8_8) | (arg4[0xc] & not.d(x8_8))
arg1[0xd] = (arg4[0x1e] & x8_8) | (arg4[0xd] & not.d(x8_8))
arg1[0xe] = (arg4[0x1f] & x8_8) | (arg4[0xe] & not.d(x8_8))
int32_t x9_163 = arg4[0xf]
int32_t x10_135 = arg4[0x20]
__builtin_memset(&arg1[0x10], 0, 0x40)
arg1[0xf] = (x10_135 & x8_8) | (x9_163 & not.d(x8_8))
*(arg1 + 0x80) = 0
return result
