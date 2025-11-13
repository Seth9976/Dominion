// 函数: _ZN5Botan17bigint_comba_mul6EPjPKjS2_
// 地址: 0xdb001c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = zx.q(*arg3) * zx.q(*arg2)
*arg1 = x9_1.d
int64_t x9_2 = zx.q(arg3[1]) * zx.q(*arg2) + (x9_1 u>> 0x20)
uint32_t x10_2 = (x9_2 u>> 0x20).d
int64_t x9_3 = zx.q(*arg3) * zx.q(arg2[1]) + zx.q(x9_2.d)
uint32_t x11_2 = (x9_3 u>> 0x20).d
arg1[1] = x9_3.d
int32_t x16 = x11_2 + x10_2 u< x11_2 ? 1 : 0
int64_t x9_5 = zx.q(x11_2 + x10_2) + zx.q(arg3[2]) * zx.q(*arg2)
uint32_t x12_2 = (x9_5 u>> 0x20).d
int64_t x9_6 = zx.q(arg3[1]) * zx.q(arg2[1]) + zx.q(x9_5.d)
int32_t x10_5 = x12_2 + x16
bool c_1 = x12_2 + x16 u< x12_2
uint32_t x12_3 = (x9_6 u>> 0x20).d
int64_t x9_7 = zx.q(*arg3) * zx.q(arg2[2]) + zx.q(x9_6.d)
int32_t x13_2

x13_2 = c_1 ? 2 : 1

int32_t x10_6 = x10_5 + x12_3
uint32_t x12_4 = (x9_7 u>> 0x20).d
arg1[2] = x9_7.d
int32_t x9_8

if (x10_5 + x12_3 u>= x10_5)
    x9_8 = c_1 ? 1 : 0
else
    x9_8 = x13_2

int32_t x9_9

if (x10_6 + x12_4 u< x10_6)
    x9_9 = x9_8 + 1
else
    x9_9 = x9_8

int64_t x10_8 = zx.q(x10_6 + x12_4) + zx.q(arg3[3]) * zx.q(*arg2)
uint32_t x14_2 = (x10_8 u>> 0x20).d
int64_t x10_9 = zx.q(arg3[2]) * zx.q(arg2[1]) + zx.q(x10_8.d)
int32_t x9_10 = x9_9 + x14_2
bool c_4 = x9_9 + x14_2 u< x9_9
uint32_t x11_8 = (x10_9 u>> 0x20).d
int64_t x10_10 = zx.q(arg3[1]) * zx.q(arg2[2]) + zx.q(x10_9.d)
int32_t x14_3

x14_3 = c_4 ? 2 : 1

int32_t x9_11 = x9_10 + x11_8
uint32_t x11_9 = (x10_10 u>> 0x20).d
int64_t x10_11 = zx.q(*arg3) * zx.q(arg2[3]) + zx.q(x10_10.d)
int32_t x12_8

if (x9_10 + x11_8 u>= x9_10)
    x12_8 = c_4 ? 1 : 0
else
    x12_8 = x14_3

int32_t x9_12 = x9_11 + x11_9
uint32_t x11_10 = (x10_11 u>> 0x20).d
arg1[3] = x10_11.d
int32_t x10_12

if (x9_11 + x11_9 u< x9_11)
    x10_12 = x12_8 + 1
else
    x10_12 = x12_8

int32_t x10_13

if (x9_12 + x11_10 u< x9_12)
    x10_13 = x10_12 + 1
else
    x10_13 = x10_12

int64_t x9_14 = zx.q(x9_12 + x11_10) + zx.q(arg3[4]) * zx.q(*arg2)
uint32_t x15_3 = (x9_14 u>> 0x20).d
int64_t x9_15 = zx.q(arg3[3]) * zx.q(arg2[1]) + zx.q(x9_14.d)
int32_t x10_14 = x10_13 + x15_3
bool c_8 = x10_13 + x15_3 u< x10_13
uint32_t x13_7 = (x9_15 u>> 0x20).d
int64_t x9_16 = zx.q(arg3[2]) * zx.q(arg2[2]) + zx.q(x9_15.d)
int32_t x15_4

x15_4 = c_8 ? 2 : 1

int32_t x10_15 = x10_14 + x13_7
uint32_t x13_8 = (x9_16 u>> 0x20).d
int64_t x9_17 = zx.q(arg3[1]) * zx.q(arg2[3]) + zx.q(x9_16.d)
int32_t x11_14

if (x10_14 + x13_7 u>= x10_14)
    x11_14 = c_8 ? 1 : 0
else
    x11_14 = x15_4

int32_t x10_16 = x10_15 + x13_8
uint32_t x13_9 = (x9_17 u>> 0x20).d
int64_t x9_18 = zx.q(*arg3) * zx.q(arg2[4]) + zx.q(x9_17.d)
int32_t x11_15

if (x10_15 + x13_8 u< x10_15)
    x11_15 = x11_14 + 1
else
    x11_15 = x11_14

int32_t x10_17 = x10_16 + x13_9
uint32_t x12_12 = (x9_18 u>> 0x20).d
arg1[4] = x9_18.d
int32_t x9_19

if (x10_16 + x13_9 u< x10_16)
    x9_19 = x11_15 + 1
else
    x9_19 = x11_15

int32_t x9_20

if (x10_17 + x12_12 u< x10_17)
    x9_20 = x9_19 + 1
else
    x9_20 = x9_19

int64_t x10_19 = zx.q(x10_17 + x12_12) + zx.q(arg3[5]) * zx.q(*arg2)
uint32_t x15_7 = (x10_19 u>> 0x20).d
int64_t x10_20 = zx.q(arg3[4]) * zx.q(arg2[1]) + zx.q(x10_19.d)
int32_t x9_21 = x9_20 + x15_7
bool c_13 = x9_20 + x15_7 u< x9_20
uint32_t x12_15 = (x10_20 u>> 0x20).d
int64_t x10_21 = zx.q(arg3[3]) * zx.q(arg2[2]) + zx.q(x10_20.d)
int32_t x15_8

x15_8 = c_13 ? 2 : 1

int32_t x9_22 = x9_21 + x12_15
uint32_t x12_16 = (x10_21 u>> 0x20).d
int64_t x10_22 = zx.q(arg3[2]) * zx.q(arg2[3]) + zx.q(x10_21.d)
int32_t x14_10

if (x9_21 + x12_15 u>= x9_21)
    x14_10 = c_13 ? 1 : 0
else
    x14_10 = x15_8

int32_t x9_23 = x9_22 + x12_16
uint32_t x12_17 = (x10_22 u>> 0x20).d
int64_t x10_23 = zx.q(arg3[1]) * zx.q(arg2[4]) + zx.q(x10_22.d)
int32_t x11_19

if (x9_22 + x12_16 u< x9_22)
    x11_19 = x14_10 + 1
else
    x11_19 = x14_10

int32_t x9_24 = x9_23 + x12_17
uint32_t x12_18 = (x10_23 u>> 0x20).d
int64_t x10_24 = zx.q(*arg3) * zx.q(arg2[5]) + zx.q(x10_23.d)
int32_t x11_20

if (x9_23 + x12_17 u< x9_23)
    x11_20 = x11_19 + 1
else
    x11_20 = x11_19

int32_t x9_25 = x9_24 + x12_18
uint32_t x12_19 = (x10_24 u>> 0x20).d
arg1[5] = x10_24.d
int32_t x10_25

if (x9_24 + x12_18 u< x9_24)
    x10_25 = x11_20 + 1
else
    x10_25 = x11_20

int32_t x10_26

if (x9_25 + x12_19 u< x9_25)
    x10_26 = x10_25 + 1
else
    x10_26 = x10_25

int64_t x9_27 = zx.q(x9_25 + x12_19) + zx.q(arg3[5]) * zx.q(arg2[1])
uint32_t x14_13 = (x9_27 u>> 0x20).d
int64_t x9_28 = zx.q(arg3[4]) * zx.q(arg2[2]) + zx.q(x9_27.d)
int32_t x10_27 = x10_26 + x14_13
bool c_19 = x10_26 + x14_13 u< x10_26
uint32_t x12_22 = (x9_28 u>> 0x20).d
int64_t x9_29 = zx.q(arg3[3]) * zx.q(arg2[3]) + zx.q(x9_28.d)
int32_t x15_11

x15_11 = c_19 ? 2 : 1

int32_t x10_28 = x10_27 + x12_22
uint32_t x12_23 = (x9_29 u>> 0x20).d
int64_t x9_30 = zx.q(arg3[2]) * zx.q(arg2[4]) + zx.q(x9_29.d)
int32_t x13_16

if (x10_27 + x12_22 u>= x10_27)
    x13_16 = c_19 ? 1 : 0
else
    x13_16 = x15_11

int32_t x10_29 = x10_28 + x12_23
uint32_t x12_24 = (x9_30 u>> 0x20).d
int64_t x9_31 = zx.q(arg3[1]) * zx.q(arg2[5]) + zx.q(x9_30.d)
int32_t x11_24

if (x10_28 + x12_23 u< x10_28)
    x11_24 = x13_16 + 1
else
    x11_24 = x13_16

int32_t x10_30 = x10_29 + x12_24
uint32_t x12_25 = (x9_31 u>> 0x20).d
arg1[6] = x9_31.d
int32_t x9_32

if (x10_29 + x12_24 u< x10_29)
    x9_32 = x11_24 + 1
else
    x9_32 = x11_24

int32_t x9_33

if (x10_30 + x12_25 u< x10_30)
    x9_33 = x9_32 + 1
else
    x9_33 = x9_32

int64_t x10_32 = zx.q(x10_30 + x12_25) + zx.q(arg3[5]) * zx.q(arg2[2])
uint32_t x14_16 = (x10_32 u>> 0x20).d
int64_t x10_33 = zx.q(arg3[4]) * zx.q(arg2[3]) + zx.q(x10_32.d)
int32_t x9_34 = x9_33 + x14_16
bool c_24 = x9_33 + x14_16 u< x9_33
uint32_t x12_28 = (x10_33 u>> 0x20).d
int64_t x10_34 = zx.q(arg3[3]) * zx.q(arg2[4]) + zx.q(x10_33.d)
int32_t x14_17

x14_17 = c_24 ? 2 : 1

int32_t x9_35 = x9_34 + x12_28
uint32_t x12_29 = (x10_34 u>> 0x20).d
int64_t x10_35 = zx.q(arg3[2]) * zx.q(arg2[5]) + zx.q(x10_34.d)
int32_t x11_29

if (x9_34 + x12_28 u>= x9_34)
    x11_29 = c_24 ? 1 : 0
else
    x11_29 = x14_17

int32_t x9_36 = x9_35 + x12_29
uint32_t x12_30 = (x10_35 u>> 0x20).d
arg1[7] = x10_35.d
int32_t x10_36

if (x9_35 + x12_29 u< x9_35)
    x10_36 = x11_29 + 1
else
    x10_36 = x11_29

int32_t x10_37

if (x9_36 + x12_30 u< x9_36)
    x10_37 = x10_36 + 1
else
    x10_37 = x10_36

int64_t x9_38 = zx.q(x9_36 + x12_30) + zx.q(arg3[5]) * zx.q(arg2[3])
uint32_t x13_21 = (x9_38 u>> 0x20).d
int64_t x9_39 = zx.q(arg3[4]) * zx.q(arg2[4]) + zx.q(x9_38.d)
int32_t x10_38 = x10_37 + x13_21
bool c_28 = x10_37 + x13_21 u< x10_37
uint32_t x11_32 = (x9_39 u>> 0x20).d
int64_t x9_40 = zx.q(arg3[3]) * zx.q(arg2[5]) + zx.q(x9_39.d)
int32_t x13_22

x13_22 = c_28 ? 2 : 1

int32_t x10_39 = x10_38 + x11_32
arg1[8] = x9_40.d
uint32_t x11_33 = (x9_40 u>> 0x20).d
int32_t x9_41

if (x10_38 + x11_32 u>= x10_38)
    x9_41 = c_28 ? 1 : 0
else
    x9_41 = x13_22

int32_t x9_42

if (x10_39 + x11_33 u< x10_39)
    x9_42 = x9_41 + 1
else
    x9_42 = x9_41

int64_t x10_41 = zx.q(x10_39 + x11_33) + zx.q(arg3[5]) * zx.q(arg2[4])
uint32_t x12_35 = (x10_41 u>> 0x20).d
int64_t x10_42 = zx.q(arg3[4]) * zx.q(arg2[5]) + zx.q(x10_41.d)
arg1[9] = x10_42.d
int32_t x9_43 = x9_42 + x12_35
bool c_31 = x9_42 + x12_35 u< x9_42
uint32_t x11_35 = (x10_42 u>> 0x20).d
int32_t x8

x8 = c_31 ? 2 : 1

int64_t x9_45 = zx.q(x9_43 + x11_35) + zx.q(arg3[5]) * zx.q(arg2[5])
int32_t x8_1

if (x9_43 + x11_35 u>= x9_43)
    x8_1 = c_31 ? 1 : 0
else
    x8_1 = x8

arg1[0xa] = x9_45.d
arg1[0xb] = x8_1 + (x9_45 u>> 0x20).d
