// 函数: _ZN5Botan17bigint_comba_mul8EPjPKjS2_
// 地址: 0xdb0a58
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

uint32_t x16_8 = (x9_27 u>> 0x20).d
int64_t x9_28 = zx.q(arg3[5]) * zx.q(arg2[1]) + zx.q(x9_27.d)
int32_t x10_27 = x10_26 + x16_8
bool c_19 = x10_26 + x16_8 u< x10_26
uint32_t x13_12 = (x9_28 u>> 0x20).d
int64_t x9_29 = zx.q(arg3[4]) * zx.q(arg2[2]) + zx.q(x9_28.d)
int32_t x16_9

x16_9 = c_19 ? 2 : 1

int32_t x10_28 = x10_27 + x13_12
uint32_t x13_13 = (x9_29 u>> 0x20).d
int64_t x9_30 = zx.q(arg3[3]) * zx.q(arg2[3]) + zx.q(x9_29.d)
int32_t x14_13

if (x10_27 + x13_12 u>= x10_27)
    x14_13 = c_19 ? 1 : 0
else
    x14_13 = x16_9

int32_t x10_29 = x10_28 + x13_13
uint32_t x13_14 = (x9_30 u>> 0x20).d
int64_t x9_31 = zx.q(arg3[2]) * zx.q(arg2[4]) + zx.q(x9_30.d)
int32_t x11_25

if (x10_28 + x13_13 u< x10_28)
    x11_25 = x14_13 + 1
else
    x11_25 = x14_13

int32_t x10_30 = x10_29 + x13_14
uint32_t x13_15 = (x9_31 u>> 0x20).d
int64_t x9_32 = zx.q(arg3[1]) * zx.q(arg2[5]) + zx.q(x9_31.d)
int32_t x11_26

if (x10_29 + x13_14 u< x10_29)
    x11_26 = x11_25 + 1
else
    x11_26 = x11_25

int32_t x10_31 = x10_30 + x13_15
uint32_t x12_24 = (x9_32 u>> 0x20).d
int64_t x9_33 = zx.q(*arg3) * zx.q(arg2[6]) + zx.q(x9_32.d)
int32_t x11_27

if (x10_30 + x13_15 u< x10_30)
    x11_27 = x11_26 + 1
else
    x11_27 = x11_26

int32_t x10_32 = x10_31 + x12_24
uint32_t x12_25 = (x9_33 u>> 0x20).d
arg1[6] = x9_33.d
int32_t x9_34

if (x10_31 + x12_24 u< x10_31)
    x9_34 = x11_27 + 1
else
    x9_34 = x11_27

int64_t x10_34 = zx.q(x10_32 + x12_25) + zx.q(arg3[7]) * zx.q(*arg2)
int32_t x9_35

if (x10_32 + x12_25 u< x10_32)
    x9_35 = x9_34 + 1
else
    x9_35 = x9_34

uint32_t x3_6 = (x10_34 u>> 0x20).d
int64_t x10_35 = zx.q(arg3[6]) * zx.q(arg2[1]) + zx.q(x10_34.d)
int32_t x9_36 = x9_35 + x3_6
bool c_26 = x9_35 + x3_6 u< x9_35
uint32_t x12_28 = (x10_35 u>> 0x20).d
int64_t x10_36 = zx.q(arg3[5]) * zx.q(arg2[2]) + zx.q(x10_35.d)
int32_t x3_7

x3_7 = c_26 ? 2 : 1

int32_t x9_37 = x9_36 + x12_28
uint32_t x12_29 = (x10_36 u>> 0x20).d
int64_t x10_37 = zx.q(arg3[4]) * zx.q(arg2[3]) + zx.q(x10_36.d)
int32_t x14_17

if (x9_36 + x12_28 u>= x9_36)
    x14_17 = c_26 ? 1 : 0
else
    x14_17 = x3_7

int32_t x9_38 = x9_37 + x12_29
uint32_t x12_30 = (x10_37 u>> 0x20).d
int64_t x10_38 = zx.q(arg3[3]) * zx.q(arg2[4]) + zx.q(x10_37.d)
int32_t x11_31

if (x9_37 + x12_29 u< x9_37)
    x11_31 = x14_17 + 1
else
    x11_31 = x14_17

int32_t x9_39 = x9_38 + x12_30
uint32_t x12_31 = (x10_38 u>> 0x20).d
int64_t x10_39 = zx.q(arg3[2]) * zx.q(arg2[5]) + zx.q(x10_38.d)
int32_t x11_32

if (x9_38 + x12_30 u< x9_38)
    x11_32 = x11_31 + 1
else
    x11_32 = x11_31

int32_t x9_40 = x9_39 + x12_31
uint32_t x12_32 = (x10_39 u>> 0x20).d
int64_t x10_40 = zx.q(arg3[1]) * zx.q(arg2[6]) + zx.q(x10_39.d)
int32_t x11_33

if (x9_39 + x12_31 u< x9_39)
    x11_33 = x11_32 + 1
else
    x11_33 = x11_32

int32_t x9_41 = x9_40 + x12_32
uint32_t x12_33 = (x10_40 u>> 0x20).d
int64_t x10_41 = zx.q(*arg3) * zx.q(arg2[7]) + zx.q(x10_40.d)
int32_t x11_34

if (x9_40 + x12_32 u< x9_40)
    x11_34 = x11_33 + 1
else
    x11_34 = x11_33

int32_t x9_42 = x9_41 + x12_33
uint32_t x12_34 = (x10_41 u>> 0x20).d
arg1[7] = x10_41.d
int32_t x10_42

if (x9_41 + x12_33 u< x9_41)
    x10_42 = x11_34 + 1
else
    x10_42 = x11_34

int32_t x10_43

if (x9_42 + x12_34 u< x9_42)
    x10_43 = x10_42 + 1
else
    x10_43 = x10_42

int64_t x9_44 = zx.q(x9_42 + x12_34) + zx.q(arg3[7]) * zx.q(arg2[1])
uint32_t x17_10 = (x9_44 u>> 0x20).d
int64_t x9_45 = zx.q(arg3[6]) * zx.q(arg2[2]) + zx.q(x9_44.d)
int32_t x10_44 = x10_43 + x17_10
bool c_34 = x10_43 + x17_10 u< x10_43
uint32_t x13_21 = (x9_45 u>> 0x20).d
int64_t x9_46 = zx.q(arg3[5]) * zx.q(arg2[3]) + zx.q(x9_45.d)
int32_t x17_11

x17_11 = c_34 ? 2 : 1

int32_t x10_45 = x10_44 + x13_21
uint32_t x13_22 = (x9_46 u>> 0x20).d
int64_t x9_47 = zx.q(arg3[4]) * zx.q(arg2[4]) + zx.q(x9_46.d)
int32_t x15_16

if (x10_44 + x13_21 u>= x10_44)
    x15_16 = c_34 ? 1 : 0
else
    x15_16 = x17_11

int32_t x10_46 = x10_45 + x13_22
uint32_t x13_23 = (x9_47 u>> 0x20).d
int64_t x9_48 = zx.q(arg3[3]) * zx.q(arg2[5]) + zx.q(x9_47.d)
int32_t x11_38

if (x10_45 + x13_22 u< x10_45)
    x11_38 = x15_16 + 1
else
    x11_38 = x15_16

int32_t x10_47 = x10_46 + x13_23
uint32_t x13_24 = (x9_48 u>> 0x20).d
int64_t x9_49 = zx.q(arg3[2]) * zx.q(arg2[6]) + zx.q(x9_48.d)
int32_t x11_39

if (x10_46 + x13_23 u< x10_46)
    x11_39 = x11_38 + 1
else
    x11_39 = x11_38

int32_t x10_48 = x10_47 + x13_24
uint32_t x12_38 = (x9_49 u>> 0x20).d
int64_t x9_50 = zx.q(arg3[1]) * zx.q(arg2[7]) + zx.q(x9_49.d)
int32_t x11_40

if (x10_47 + x13_24 u< x10_47)
    x11_40 = x11_39 + 1
else
    x11_40 = x11_39

int32_t x10_49 = x10_48 + x12_38
uint32_t x12_39 = (x9_50 u>> 0x20).d
arg1[8] = x9_50.d
int32_t x9_51

if (x10_48 + x12_38 u< x10_48)
    x9_51 = x11_40 + 1
else
    x9_51 = x11_40

int32_t x9_52

if (x10_49 + x12_39 u< x10_49)
    x9_52 = x9_51 + 1
else
    x9_52 = x9_51

int64_t x10_51 = zx.q(x10_49 + x12_39) + zx.q(arg3[7]) * zx.q(arg2[2])
uint32_t x15_19 = (x10_51 u>> 0x20).d
int64_t x10_52 = zx.q(arg3[6]) * zx.q(arg2[3]) + zx.q(x10_51.d)
int32_t x9_53 = x9_52 + x15_19
bool c_41 = x9_52 + x15_19 u< x9_52
uint32_t x12_42 = (x10_52 u>> 0x20).d
int64_t x10_53 = zx.q(arg3[5]) * zx.q(arg2[4]) + zx.q(x10_52.d)
int32_t x15_20

x15_20 = c_41 ? 2 : 1

int32_t x9_54 = x9_53 + x12_42
uint32_t x12_43 = (x10_53 u>> 0x20).d
int64_t x10_54 = zx.q(arg3[4]) * zx.q(arg2[5]) + zx.q(x10_53.d)
int32_t x14_24

if (x9_53 + x12_42 u>= x9_53)
    x14_24 = c_41 ? 1 : 0
else
    x14_24 = x15_20

int32_t x9_55 = x9_54 + x12_43
uint32_t x12_44 = (x10_54 u>> 0x20).d
int64_t x10_55 = zx.q(arg3[3]) * zx.q(arg2[6]) + zx.q(x10_54.d)
int32_t x11_44

if (x9_54 + x12_43 u< x9_54)
    x11_44 = x14_24 + 1
else
    x11_44 = x14_24

int32_t x9_56 = x9_55 + x12_44
uint32_t x12_45 = (x10_55 u>> 0x20).d
int64_t x10_56 = zx.q(arg3[2]) * zx.q(arg2[7]) + zx.q(x10_55.d)
int32_t x11_45

if (x9_55 + x12_44 u< x9_55)
    x11_45 = x11_44 + 1
else
    x11_45 = x11_44

int32_t x9_57 = x9_56 + x12_45
uint32_t x12_46 = (x10_56 u>> 0x20).d
arg1[9] = x10_56.d
int32_t x10_57

if (x9_56 + x12_45 u< x9_56)
    x10_57 = x11_45 + 1
else
    x10_57 = x11_45

int32_t x10_58

if (x9_57 + x12_46 u< x9_57)
    x10_58 = x10_57 + 1
else
    x10_58 = x10_57

int64_t x9_59 = zx.q(x9_57 + x12_46) + zx.q(arg3[7]) * zx.q(arg2[3])
uint32_t x14_27 = (x9_59 u>> 0x20).d
int64_t x9_60 = zx.q(arg3[6]) * zx.q(arg2[4]) + zx.q(x9_59.d)
int32_t x10_59 = x10_58 + x14_27
bool c_47 = x10_58 + x14_27 u< x10_58
uint32_t x12_49 = (x9_60 u>> 0x20).d
int64_t x9_61 = zx.q(arg3[5]) * zx.q(arg2[5]) + zx.q(x9_60.d)
int32_t x15_23

x15_23 = c_47 ? 2 : 1

int32_t x10_60 = x10_59 + x12_49
uint32_t x12_50 = (x9_61 u>> 0x20).d
int64_t x9_62 = zx.q(arg3[4]) * zx.q(arg2[6]) + zx.q(x9_61.d)
int32_t x13_31

if (x10_59 + x12_49 u>= x10_59)
    x13_31 = c_47 ? 1 : 0
else
    x13_31 = x15_23

int32_t x10_61 = x10_60 + x12_50
uint32_t x12_51 = (x9_62 u>> 0x20).d
int64_t x9_63 = zx.q(arg3[3]) * zx.q(arg2[7]) + zx.q(x9_62.d)
int32_t x11_49

if (x10_60 + x12_50 u< x10_60)
    x11_49 = x13_31 + 1
else
    x11_49 = x13_31

int32_t x10_62 = x10_61 + x12_51
uint32_t x12_52 = (x9_63 u>> 0x20).d
arg1[0xa] = x9_63.d
int32_t x9_64

if (x10_61 + x12_51 u< x10_61)
    x9_64 = x11_49 + 1
else
    x9_64 = x11_49

int32_t x9_65

if (x10_62 + x12_52 u< x10_62)
    x9_65 = x9_64 + 1
else
    x9_65 = x9_64

int64_t x10_64 = zx.q(x10_62 + x12_52) + zx.q(arg3[7]) * zx.q(arg2[4])
uint32_t x14_30 = (x10_64 u>> 0x20).d
int64_t x10_65 = zx.q(arg3[6]) * zx.q(arg2[5]) + zx.q(x10_64.d)
int32_t x9_66 = x9_65 + x14_30
bool c_52 = x9_65 + x14_30 u< x9_65
uint32_t x12_55 = (x10_65 u>> 0x20).d
int64_t x10_66 = zx.q(arg3[5]) * zx.q(arg2[6]) + zx.q(x10_65.d)
int32_t x14_31

x14_31 = c_52 ? 2 : 1

int32_t x9_67 = x9_66 + x12_55
uint32_t x12_56 = (x10_66 u>> 0x20).d
int64_t x10_67 = zx.q(arg3[4]) * zx.q(arg2[7]) + zx.q(x10_66.d)
int32_t x11_54

if (x9_66 + x12_55 u>= x9_66)
    x11_54 = c_52 ? 1 : 0
else
    x11_54 = x14_31

int32_t x9_68 = x9_67 + x12_56
uint32_t x12_57 = (x10_67 u>> 0x20).d
arg1[0xb] = x10_67.d
int32_t x10_68

if (x9_67 + x12_56 u< x9_67)
    x10_68 = x11_54 + 1
else
    x10_68 = x11_54

int32_t x10_69

if (x9_68 + x12_57 u< x9_68)
    x10_69 = x10_68 + 1
else
    x10_69 = x10_68

int64_t x9_70 = zx.q(x9_68 + x12_57) + zx.q(arg3[7]) * zx.q(arg2[5])
uint32_t x13_36 = (x9_70 u>> 0x20).d
int64_t x9_71 = zx.q(arg3[6]) * zx.q(arg2[6]) + zx.q(x9_70.d)
int32_t x10_70 = x10_69 + x13_36
bool c_56 = x10_69 + x13_36 u< x10_69
uint32_t x11_57 = (x9_71 u>> 0x20).d
int64_t x9_72 = zx.q(arg3[5]) * zx.q(arg2[7]) + zx.q(x9_71.d)
int32_t x13_37

x13_37 = c_56 ? 2 : 1

int32_t x10_71 = x10_70 + x11_57
arg1[0xc] = x9_72.d
uint32_t x11_58 = (x9_72 u>> 0x20).d
int32_t x9_73

if (x10_70 + x11_57 u>= x10_70)
    x9_73 = c_56 ? 1 : 0
else
    x9_73 = x13_37

int32_t x9_74

if (x10_71 + x11_58 u< x10_71)
    x9_74 = x9_73 + 1
else
    x9_74 = x9_73

int64_t x10_73 = zx.q(x10_71 + x11_58) + zx.q(arg3[7]) * zx.q(arg2[6])
uint32_t x12_62 = (x10_73 u>> 0x20).d
int64_t x10_74 = zx.q(arg3[6]) * zx.q(arg2[7]) + zx.q(x10_73.d)
arg1[0xd] = x10_74.d
int32_t x9_75 = x9_74 + x12_62
bool c_59 = x9_74 + x12_62 u< x9_74
uint32_t x11_60 = (x10_74 u>> 0x20).d
int32_t x8

x8 = c_59 ? 2 : 1

int64_t x9_77 = zx.q(x9_75 + x11_60) + zx.q(arg3[7]) * zx.q(arg2[7])
int32_t x8_1

if (x9_75 + x11_60 u>= x9_75)
    x8_1 = c_59 ? 1 : 0
else
    x8_1 = x8

arg1[0xe] = x9_77.d
arg1[0xf] = x8_1 + (x9_77 u>> 0x20).d
