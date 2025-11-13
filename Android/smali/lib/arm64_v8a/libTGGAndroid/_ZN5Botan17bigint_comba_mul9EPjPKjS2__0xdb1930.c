// 函数: _ZN5Botan17bigint_comba_mul9EPjPKjS2_
// 地址: 0xdb1930
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

int64_t x9_14 = zx.q(x9_12 + x11_10) + zx.q(arg3[4]) * zx.q(*arg2)
int32_t x10_13

if (x9_12 + x11_10 u< x9_12)
    x10_13 = x10_12 + 1
else
    x10_13 = x10_12

uint32_t x15_3 = (x9_14 u>> 0x20).d
int64_t x9_15 = zx.q(arg3[3]) * zx.q(arg2[1]) + zx.q(x9_14.d)
int32_t x10_14 = x10_13 + x15_3
bool c_8 = x10_13 + x15_3 u< x10_13
uint32_t x11_13 = (x9_15 u>> 0x20).d
int64_t x9_16 = zx.q(arg3[2]) * zx.q(arg2[2]) + zx.q(x9_15.d)
int32_t x15_4

x15_4 = c_8 ? 2 : 1

int32_t x10_15 = x10_14 + x11_13
uint32_t x11_14 = (x9_16 u>> 0x20).d
int64_t x9_17 = zx.q(arg3[1]) * zx.q(arg2[3]) + zx.q(x9_16.d)
int32_t x12_12

if (x10_14 + x11_13 u>= x10_14)
    x12_12 = c_8 ? 1 : 0
else
    x12_12 = x15_4

int32_t x10_16 = x10_15 + x11_14
uint32_t x11_15 = (x9_17 u>> 0x20).d
int64_t x9_18 = zx.q(*arg3) * zx.q(arg2[4]) + zx.q(x9_17.d)
int32_t x12_13

if (x10_15 + x11_14 u< x10_15)
    x12_13 = x12_12 + 1
else
    x12_13 = x12_12

int32_t x10_17 = x10_16 + x11_15
uint32_t x11_16 = (x9_18 u>> 0x20).d
arg1[4] = x9_18.d
int32_t x9_19

if (x10_16 + x11_15 u< x10_16)
    x9_19 = x12_13 + 1
else
    x9_19 = x12_13

int64_t x10_19 = zx.q(x10_17 + x11_16) + zx.q(arg3[5]) * zx.q(*arg2)
int32_t x9_20

if (x10_17 + x11_16 u< x10_17)
    x9_20 = x9_19 + 1
else
    x9_20 = x9_19

uint32_t x16_4 = (x10_19 u>> 0x20).d
int64_t x10_20 = zx.q(arg3[4]) * zx.q(arg2[1]) + zx.q(x10_19.d)
int32_t x9_21 = x9_20 + x16_4
bool c_13 = x9_20 + x16_4 u< x9_20
uint32_t x12_16 = (x10_20 u>> 0x20).d
int64_t x10_21 = zx.q(arg3[3]) * zx.q(arg2[2]) + zx.q(x10_20.d)
int32_t x16_5

x16_5 = c_13 ? 2 : 1

int32_t x9_22 = x9_21 + x12_16
uint32_t x12_17 = (x10_21 u>> 0x20).d
int64_t x10_22 = zx.q(arg3[2]) * zx.q(arg2[3]) + zx.q(x10_21.d)
int32_t x14_9

if (x9_21 + x12_16 u>= x9_21)
    x14_9 = c_13 ? 1 : 0
else
    x14_9 = x16_5

int32_t x9_23 = x9_22 + x12_17
uint32_t x12_18 = (x10_22 u>> 0x20).d
int64_t x10_23 = zx.q(arg3[1]) * zx.q(arg2[4]) + zx.q(x10_22.d)
int32_t x11_20

if (x9_22 + x12_17 u< x9_22)
    x11_20 = x14_9 + 1
else
    x11_20 = x14_9

int32_t x9_24 = x9_23 + x12_18
uint32_t x12_19 = (x10_23 u>> 0x20).d
int64_t x10_24 = zx.q(*arg3) * zx.q(arg2[5]) + zx.q(x10_23.d)
int32_t x11_21

if (x9_23 + x12_18 u< x9_23)
    x11_21 = x11_20 + 1
else
    x11_21 = x11_20

int32_t x9_25 = x9_24 + x12_19
uint32_t x12_20 = (x10_24 u>> 0x20).d
arg1[5] = x10_24.d
int32_t x10_25

if (x9_24 + x12_19 u< x9_24)
    x10_25 = x11_21 + 1
else
    x10_25 = x11_21

int64_t x9_27 = zx.q(x9_25 + x12_20) + zx.q(arg3[6]) * zx.q(*arg2)
int32_t x10_26

if (x9_25 + x12_20 u< x9_25)
    x10_26 = x10_25 + 1
else
    x10_26 = x10_25

uint32_t x14_12 = (x9_27 u>> 0x20).d
int64_t x9_28 = zx.q(arg3[5]) * zx.q(arg2[1]) + zx.q(x9_27.d)
int32_t x10_27 = x10_26 + x14_12
bool c_19 = x10_26 + x14_12 u< x10_26
uint32_t x12_23 = (x9_28 u>> 0x20).d
int64_t x9_29 = zx.q(arg3[4]) * zx.q(arg2[2]) + zx.q(x9_28.d)
int32_t x15_9

x15_9 = c_19 ? 2 : 1

int32_t x10_28 = x10_27 + x12_23
uint32_t x12_24 = (x9_29 u>> 0x20).d
int64_t x9_30 = zx.q(arg3[3]) * zx.q(arg2[3]) + zx.q(x9_29.d)
int32_t x14_14

if (x10_27 + x12_23 u>= x10_27)
    x14_14 = c_19 ? 1 : 0
else
    x14_14 = x15_9

int32_t x10_29 = x10_28 + x12_24
uint32_t x12_25 = (x9_30 u>> 0x20).d
int64_t x9_31 = zx.q(arg3[2]) * zx.q(arg2[4]) + zx.q(x9_30.d)
int32_t x14_15

if (x10_28 + x12_24 u< x10_28)
    x14_15 = x14_14 + 1
else
    x14_15 = x14_14

int32_t x10_30 = x10_29 + x12_25
uint32_t x12_26 = (x9_31 u>> 0x20).d
int64_t x9_32 = zx.q(arg3[1]) * zx.q(arg2[5]) + zx.q(x9_31.d)
int32_t x13_13

if (x10_29 + x12_25 u< x10_29)
    x13_13 = x14_15 + 1
else
    x13_13 = x14_15

int32_t x10_31 = x10_30 + x12_26
uint32_t x12_27 = (x9_32 u>> 0x20).d
int64_t x9_33 = zx.q(*arg3) * zx.q(arg2[6]) + zx.q(x9_32.d)
int32_t x11_25

if (x10_30 + x12_26 u< x10_30)
    x11_25 = x13_13 + 1
else
    x11_25 = x13_13

int32_t x10_32 = x10_31 + x12_27
uint32_t x12_28 = (x9_33 u>> 0x20).d
arg1[6] = x9_33.d
int32_t x9_34

if (x10_31 + x12_27 u< x10_31)
    x9_34 = x11_25 + 1
else
    x9_34 = x11_25

int64_t x10_34 = zx.q(x10_32 + x12_28) + zx.q(arg3[7]) * zx.q(*arg2)
int32_t x9_35

if (x10_32 + x12_28 u< x10_32)
    x9_35 = x9_34 + 1
else
    x9_35 = x9_34

uint32_t x3_6 = (x10_34 u>> 0x20).d
int64_t x10_35 = zx.q(arg3[6]) * zx.q(arg2[1]) + zx.q(x10_34.d)
int32_t x9_36 = x9_35 + x3_6
bool c_26 = x9_35 + x3_6 u< x9_35
uint32_t x12_31 = (x10_35 u>> 0x20).d
int64_t x10_36 = zx.q(arg3[5]) * zx.q(arg2[2]) + zx.q(x10_35.d)
int32_t x3_7

x3_7 = c_26 ? 2 : 1

int32_t x9_37 = x9_36 + x12_31
uint32_t x12_32 = (x10_36 u>> 0x20).d
int64_t x10_37 = zx.q(arg3[4]) * zx.q(arg2[3]) + zx.q(x10_36.d)
int32_t x15_13

if (x9_36 + x12_31 u>= x9_36)
    x15_13 = c_26 ? 1 : 0
else
    x15_13 = x3_7

int32_t x9_38 = x9_37 + x12_32
uint32_t x12_33 = (x10_37 u>> 0x20).d
int64_t x10_38 = zx.q(arg3[3]) * zx.q(arg2[4]) + zx.q(x10_37.d)
int32_t x11_29

if (x9_37 + x12_32 u< x9_37)
    x11_29 = x15_13 + 1
else
    x11_29 = x15_13

int32_t x9_39 = x9_38 + x12_33
uint32_t x12_34 = (x10_38 u>> 0x20).d
int64_t x10_39 = zx.q(arg3[2]) * zx.q(arg2[5]) + zx.q(x10_38.d)
int32_t x11_30

if (x9_38 + x12_33 u< x9_38)
    x11_30 = x11_29 + 1
else
    x11_30 = x11_29

int32_t x9_40 = x9_39 + x12_34
uint32_t x12_35 = (x10_39 u>> 0x20).d
int64_t x10_40 = zx.q(arg3[1]) * zx.q(arg2[6]) + zx.q(x10_39.d)
int32_t x11_31

if (x9_39 + x12_34 u< x9_39)
    x11_31 = x11_30 + 1
else
    x11_31 = x11_30

int32_t x9_41 = x9_40 + x12_35
uint32_t x12_36 = (x10_40 u>> 0x20).d
int64_t x10_41 = zx.q(*arg3) * zx.q(arg2[7]) + zx.q(x10_40.d)
int32_t x11_32

if (x9_40 + x12_35 u< x9_40)
    x11_32 = x11_31 + 1
else
    x11_32 = x11_31

int32_t x12_37 = x9_41 + x12_36
uint32_t x13_17 = (x10_41 u>> 0x20).d
arg1[7] = x10_41.d
int32_t x9_42

if (x9_41 + x12_36 u< x9_41)
    x9_42 = x11_32 + 1
else
    x9_42 = x11_32

int64_t x10_43 = zx.q(x12_37 + x13_17) + zx.q(arg3[8]) * zx.q(*arg2)
int32_t x9_43

if (x12_37 + x13_17 u< x12_37)
    x9_43 = x9_42 + 1
else
    x9_43 = x9_42

uint32_t x3_10 = (x10_43 u>> 0x20).d
int64_t x10_44 = zx.q(arg3[7]) * zx.q(arg2[1]) + zx.q(x10_43.d)
int32_t x9_44 = x9_43 + x3_10
bool c_34 = x9_43 + x3_10 u< x9_43
uint32_t x13_20 = (x10_44 u>> 0x20).d
int64_t x10_45 = zx.q(arg3[6]) * zx.q(arg2[2]) + zx.q(x10_44.d)
int32_t x3_11

x3_11 = c_34 ? 2 : 1

int32_t x9_45 = x9_44 + x13_20
uint32_t x13_21 = (x10_45 u>> 0x20).d
int64_t x10_46 = zx.q(arg3[5]) * zx.q(arg2[3]) + zx.q(x10_45.d)
int32_t x14_22

if (x9_44 + x13_20 u>= x9_44)
    x14_22 = c_34 ? 1 : 0
else
    x14_22 = x3_11

int32_t x9_46 = x9_45 + x13_21
uint32_t x13_22 = (x10_46 u>> 0x20).d
int64_t x10_47 = zx.q(arg3[4]) * zx.q(arg2[4]) + zx.q(x10_46.d)
int32_t x14_23

if (x9_45 + x13_21 u< x9_45)
    x14_23 = x14_22 + 1
else
    x14_23 = x14_22

int32_t x9_47 = x9_46 + x13_22
uint32_t x13_23 = (x10_47 u>> 0x20).d
int64_t x10_48 = zx.q(arg3[3]) * zx.q(arg2[5]) + zx.q(x10_47.d)
int32_t x11_36

if (x9_46 + x13_22 u< x9_46)
    x11_36 = x14_23 + 1
else
    x11_36 = x14_23

int32_t x9_48 = x9_47 + x13_23
uint32_t x13_24 = (x10_48 u>> 0x20).d
int64_t x10_49 = zx.q(arg3[2]) * zx.q(arg2[6]) + zx.q(x10_48.d)
int32_t x11_37

if (x9_47 + x13_23 u< x9_47)
    x11_37 = x11_36 + 1
else
    x11_37 = x11_36

int32_t x9_49 = x9_48 + x13_24
uint32_t x12_41 = (x10_49 u>> 0x20).d
int64_t x10_50 = zx.q(arg3[1]) * zx.q(arg2[7]) + zx.q(x10_49.d)
int32_t x11_38

if (x9_48 + x13_24 u< x9_48)
    x11_38 = x11_37 + 1
else
    x11_38 = x11_37

int32_t x9_50 = x9_49 + x12_41
uint32_t x12_42 = (x10_50 u>> 0x20).d
int64_t x10_51 = zx.q(*arg3) * zx.q(arg2[8]) + zx.q(x10_50.d)
int32_t x11_39

if (x9_49 + x12_41 u< x9_49)
    x11_39 = x11_38 + 1
else
    x11_39 = x11_38

int32_t x12_43 = x9_50 + x12_42
uint32_t x13_25 = (x10_51 u>> 0x20).d
arg1[8] = x10_51.d
int32_t x9_51

if (x9_50 + x12_42 u< x9_50)
    x9_51 = x11_39 + 1
else
    x9_51 = x11_39

int64_t x10_53 = zx.q(x12_43 + x13_25) + zx.q(arg3[8]) * zx.q(arg2[1])
int32_t x9_52

if (x12_43 + x13_25 u< x12_43)
    x9_52 = x9_51 + 1
else
    x9_52 = x9_51

uint32_t x3_14 = (x10_53 u>> 0x20).d
int64_t x10_54 = zx.q(arg3[7]) * zx.q(arg2[2]) + zx.q(x10_53.d)
int32_t x9_53 = x9_52 + x3_14
bool c_43 = x9_52 + x3_14 u< x9_52
uint32_t x12_46 = (x10_54 u>> 0x20).d
int64_t x10_55 = zx.q(arg3[6]) * zx.q(arg2[3]) + zx.q(x10_54.d)
int32_t x3_15

x3_15 = c_43 ? 2 : 1

int32_t x9_54 = x9_53 + x12_46
uint32_t x12_47 = (x10_55 u>> 0x20).d
int64_t x10_56 = zx.q(arg3[5]) * zx.q(arg2[4]) + zx.q(x10_55.d)
int32_t x14_27

if (x9_53 + x12_46 u>= x9_53)
    x14_27 = c_43 ? 1 : 0
else
    x14_27 = x3_15

int32_t x9_55 = x9_54 + x12_47
uint32_t x12_48 = (x10_56 u>> 0x20).d
int64_t x10_57 = zx.q(arg3[4]) * zx.q(arg2[5]) + zx.q(x10_56.d)
int32_t x11_43

if (x9_54 + x12_47 u< x9_54)
    x11_43 = x14_27 + 1
else
    x11_43 = x14_27

int32_t x9_56 = x9_55 + x12_48
uint32_t x12_49 = (x10_57 u>> 0x20).d
int64_t x10_58 = zx.q(arg3[3]) * zx.q(arg2[6]) + zx.q(x10_57.d)
int32_t x11_44

if (x9_55 + x12_48 u< x9_55)
    x11_44 = x11_43 + 1
else
    x11_44 = x11_43

int32_t x9_57 = x9_56 + x12_49
uint32_t x12_50 = (x10_58 u>> 0x20).d
int64_t x10_59 = zx.q(arg3[2]) * zx.q(arg2[7]) + zx.q(x10_58.d)
int32_t x11_45

if (x9_56 + x12_49 u< x9_56)
    x11_45 = x11_44 + 1
else
    x11_45 = x11_44

int32_t x9_58 = x9_57 + x12_50
uint32_t x12_51 = (x10_59 u>> 0x20).d
int64_t x10_60 = zx.q(arg3[1]) * zx.q(arg2[8]) + zx.q(x10_59.d)
int32_t x11_46

if (x9_57 + x12_50 u< x9_57)
    x11_46 = x11_45 + 1
else
    x11_46 = x11_45

int32_t x9_59 = x9_58 + x12_51
uint32_t x12_52 = (x10_60 u>> 0x20).d
arg1[9] = x10_60.d
int32_t x10_61

if (x9_58 + x12_51 u< x9_58)
    x10_61 = x11_46 + 1
else
    x10_61 = x11_46

int32_t x10_62

if (x9_59 + x12_52 u< x9_59)
    x10_62 = x10_61 + 1
else
    x10_62 = x10_61

int64_t x9_61 = zx.q(x9_59 + x12_52) + zx.q(arg3[8]) * zx.q(arg2[2])
uint32_t x17_15 = (x9_61 u>> 0x20).d
int64_t x9_62 = zx.q(arg3[7]) * zx.q(arg2[3]) + zx.q(x9_61.d)
int32_t x10_63 = x10_62 + x17_15
bool c_51 = x10_62 + x17_15 u< x10_62
uint32_t x13_31 = (x9_62 u>> 0x20).d
int64_t x9_63 = zx.q(arg3[6]) * zx.q(arg2[4]) + zx.q(x9_62.d)
int32_t x17_16

x17_16 = c_51 ? 2 : 1

int32_t x10_64 = x10_63 + x13_31
uint32_t x13_32 = (x9_63 u>> 0x20).d
int64_t x9_64 = zx.q(arg3[5]) * zx.q(arg2[5]) + zx.q(x9_63.d)
int32_t x15_23

if (x10_63 + x13_31 u>= x10_63)
    x15_23 = c_51 ? 1 : 0
else
    x15_23 = x17_16

int32_t x10_65 = x10_64 + x13_32
uint32_t x13_33 = (x9_64 u>> 0x20).d
int64_t x9_65 = zx.q(arg3[4]) * zx.q(arg2[6]) + zx.q(x9_64.d)
int32_t x11_50

if (x10_64 + x13_32 u< x10_64)
    x11_50 = x15_23 + 1
else
    x11_50 = x15_23

int32_t x10_66 = x10_65 + x13_33
uint32_t x13_34 = (x9_65 u>> 0x20).d
int64_t x9_66 = zx.q(arg3[3]) * zx.q(arg2[7]) + zx.q(x9_65.d)
int32_t x11_51

if (x10_65 + x13_33 u< x10_65)
    x11_51 = x11_50 + 1
else
    x11_51 = x11_50

int32_t x10_67 = x10_66 + x13_34
uint32_t x12_56 = (x9_66 u>> 0x20).d
int64_t x9_67 = zx.q(arg3[2]) * zx.q(arg2[8]) + zx.q(x9_66.d)
int32_t x11_52

if (x10_66 + x13_34 u< x10_66)
    x11_52 = x11_51 + 1
else
    x11_52 = x11_51

int32_t x10_68 = x10_67 + x12_56
uint32_t x12_57 = (x9_67 u>> 0x20).d
arg1[0xa] = x9_67.d
int32_t x9_68

if (x10_67 + x12_56 u< x10_67)
    x9_68 = x11_52 + 1
else
    x9_68 = x11_52

int32_t x9_69

if (x10_68 + x12_57 u< x10_68)
    x9_69 = x9_68 + 1
else
    x9_69 = x9_68

int64_t x10_70 = zx.q(x10_68 + x12_57) + zx.q(arg3[8]) * zx.q(arg2[3])
uint32_t x15_26 = (x10_70 u>> 0x20).d
int64_t x10_71 = zx.q(arg3[7]) * zx.q(arg2[4]) + zx.q(x10_70.d)
int32_t x9_70 = x9_69 + x15_26
bool c_58 = x9_69 + x15_26 u< x9_69
uint32_t x12_60 = (x10_71 u>> 0x20).d
int64_t x10_72 = zx.q(arg3[6]) * zx.q(arg2[5]) + zx.q(x10_71.d)
int32_t x15_27

x15_27 = c_58 ? 2 : 1

int32_t x9_71 = x9_70 + x12_60
uint32_t x12_61 = (x10_72 u>> 0x20).d
int64_t x10_73 = zx.q(arg3[5]) * zx.q(arg2[6]) + zx.q(x10_72.d)
int32_t x14_34

if (x9_70 + x12_60 u>= x9_70)
    x14_34 = c_58 ? 1 : 0
else
    x14_34 = x15_27

int32_t x9_72 = x9_71 + x12_61
uint32_t x12_62 = (x10_73 u>> 0x20).d
int64_t x10_74 = zx.q(arg3[4]) * zx.q(arg2[7]) + zx.q(x10_73.d)
int32_t x11_56

if (x9_71 + x12_61 u< x9_71)
    x11_56 = x14_34 + 1
else
    x11_56 = x14_34

int32_t x9_73 = x9_72 + x12_62
uint32_t x12_63 = (x10_74 u>> 0x20).d
int64_t x10_75 = zx.q(arg3[3]) * zx.q(arg2[8]) + zx.q(x10_74.d)
int32_t x11_57

if (x9_72 + x12_62 u< x9_72)
    x11_57 = x11_56 + 1
else
    x11_57 = x11_56

int32_t x9_74 = x9_73 + x12_63
uint32_t x12_64 = (x10_75 u>> 0x20).d
arg1[0xb] = x10_75.d
int32_t x10_76

if (x9_73 + x12_63 u< x9_73)
    x10_76 = x11_57 + 1
else
    x10_76 = x11_57

int32_t x10_77

if (x9_74 + x12_64 u< x9_74)
    x10_77 = x10_76 + 1
else
    x10_77 = x10_76

int64_t x9_76 = zx.q(x9_74 + x12_64) + zx.q(arg3[8]) * zx.q(arg2[4])
uint32_t x14_37 = (x9_76 u>> 0x20).d
int64_t x9_77 = zx.q(arg3[7]) * zx.q(arg2[5]) + zx.q(x9_76.d)
int32_t x10_78 = x10_77 + x14_37
bool c_64 = x10_77 + x14_37 u< x10_77
uint32_t x12_67 = (x9_77 u>> 0x20).d
int64_t x9_78 = zx.q(arg3[6]) * zx.q(arg2[6]) + zx.q(x9_77.d)
int32_t x15_30

x15_30 = c_64 ? 2 : 1

int32_t x10_79 = x10_78 + x12_67
uint32_t x12_68 = (x9_78 u>> 0x20).d
int64_t x9_79 = zx.q(arg3[5]) * zx.q(arg2[7]) + zx.q(x9_78.d)
int32_t x13_41

if (x10_78 + x12_67 u>= x10_78)
    x13_41 = c_64 ? 1 : 0
else
    x13_41 = x15_30

int32_t x10_80 = x10_79 + x12_68
uint32_t x12_69 = (x9_79 u>> 0x20).d
int64_t x9_80 = zx.q(arg3[4]) * zx.q(arg2[8]) + zx.q(x9_79.d)
int32_t x11_61

if (x10_79 + x12_68 u< x10_79)
    x11_61 = x13_41 + 1
else
    x11_61 = x13_41

int32_t x10_81 = x10_80 + x12_69
uint32_t x12_70 = (x9_80 u>> 0x20).d
arg1[0xc] = x9_80.d
int32_t x9_81

if (x10_80 + x12_69 u< x10_80)
    x9_81 = x11_61 + 1
else
    x9_81 = x11_61

int32_t x9_82

if (x10_81 + x12_70 u< x10_81)
    x9_82 = x9_81 + 1
else
    x9_82 = x9_81

int64_t x10_83 = zx.q(x10_81 + x12_70) + zx.q(arg3[8]) * zx.q(arg2[5])
uint32_t x14_40 = (x10_83 u>> 0x20).d
int64_t x10_84 = zx.q(arg3[7]) * zx.q(arg2[6]) + zx.q(x10_83.d)
int32_t x9_83 = x9_82 + x14_40
bool c_69 = x9_82 + x14_40 u< x9_82
uint32_t x12_73 = (x10_84 u>> 0x20).d
int64_t x10_85 = zx.q(arg3[6]) * zx.q(arg2[7]) + zx.q(x10_84.d)
int32_t x14_41

x14_41 = c_69 ? 2 : 1

int32_t x9_84 = x9_83 + x12_73
uint32_t x12_74 = (x10_85 u>> 0x20).d
int64_t x10_86 = zx.q(arg3[5]) * zx.q(arg2[8]) + zx.q(x10_85.d)
int32_t x11_66

if (x9_83 + x12_73 u>= x9_83)
    x11_66 = c_69 ? 1 : 0
else
    x11_66 = x14_41

int32_t x9_85 = x9_84 + x12_74
uint32_t x12_75 = (x10_86 u>> 0x20).d
arg1[0xd] = x10_86.d
int32_t x10_87

if (x9_84 + x12_74 u< x9_84)
    x10_87 = x11_66 + 1
else
    x10_87 = x11_66

int32_t x10_88

if (x9_85 + x12_75 u< x9_85)
    x10_88 = x10_87 + 1
else
    x10_88 = x10_87

int64_t x9_87 = zx.q(x9_85 + x12_75) + zx.q(arg3[8]) * zx.q(arg2[6])
uint32_t x13_46 = (x9_87 u>> 0x20).d
int64_t x9_88 = zx.q(arg3[7]) * zx.q(arg2[7]) + zx.q(x9_87.d)
int32_t x10_89 = x10_88 + x13_46
bool c_73 = x10_88 + x13_46 u< x10_88
uint32_t x11_69 = (x9_88 u>> 0x20).d
int64_t x9_89 = zx.q(arg3[6]) * zx.q(arg2[8]) + zx.q(x9_88.d)
int32_t x13_47

x13_47 = c_73 ? 2 : 1

int32_t x10_90 = x10_89 + x11_69
arg1[0xe] = x9_89.d
uint32_t x11_70 = (x9_89 u>> 0x20).d
int32_t x9_90

if (x10_89 + x11_69 u>= x10_89)
    x9_90 = c_73 ? 1 : 0
else
    x9_90 = x13_47

int32_t x9_91

if (x10_90 + x11_70 u< x10_90)
    x9_91 = x9_90 + 1
else
    x9_91 = x9_90

int64_t x10_92 = zx.q(x10_90 + x11_70) + zx.q(arg3[8]) * zx.q(arg2[7])
uint32_t x12_80 = (x10_92 u>> 0x20).d
int64_t x10_93 = zx.q(arg3[7]) * zx.q(arg2[8]) + zx.q(x10_92.d)
arg1[0xf] = x10_93.d
int32_t x9_92 = x9_91 + x12_80
bool c_76 = x9_91 + x12_80 u< x9_91
uint32_t x11_72 = (x10_93 u>> 0x20).d
int32_t x8

x8 = c_76 ? 2 : 1

int64_t x9_94 = zx.q(x9_92 + x11_72) + zx.q(arg3[8]) * zx.q(arg2[8])
int32_t x8_1

if (x9_92 + x11_72 u>= x9_92)
    x8_1 = c_76 ? 1 : 0
else
    x8_1 = x8

arg1[0x10] = x9_94.d
arg1[0x11] = x8_1 + (x9_94 u>> 0x20).d
