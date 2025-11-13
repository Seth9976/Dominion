// 函数: _ZN5Botan18bigint_comba_mul16EPjPKjS2_
// 地址: 0xdb3cb0
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
uint32_t x11_19 = (x10_20 u>> 0x20).d
int64_t x10_21 = zx.q(arg3[3]) * zx.q(arg2[2]) + zx.q(x10_20.d)
int32_t x16_5

x16_5 = c_13 ? 2 : 1

int32_t x9_22 = x9_21 + x11_19
uint32_t x11_20 = (x10_21 u>> 0x20).d
int64_t x10_22 = zx.q(arg3[2]) * zx.q(arg2[3]) + zx.q(x10_21.d)
int32_t x12_17

if (x9_21 + x11_19 u>= x9_21)
    x12_17 = c_13 ? 1 : 0
else
    x12_17 = x16_5

int32_t x9_23 = x9_22 + x11_20
uint32_t x11_21 = (x10_22 u>> 0x20).d
int64_t x10_23 = zx.q(arg3[1]) * zx.q(arg2[4]) + zx.q(x10_22.d)
int32_t x12_18

if (x9_22 + x11_20 u< x9_22)
    x12_18 = x12_17 + 1
else
    x12_18 = x12_17

int32_t x9_24 = x9_23 + x11_21
uint32_t x11_22 = (x10_23 u>> 0x20).d
int64_t x10_24 = zx.q(*arg3) * zx.q(arg2[5]) + zx.q(x10_23.d)
int32_t x12_19

if (x9_23 + x11_21 u< x9_23)
    x12_19 = x12_18 + 1
else
    x12_19 = x12_18

int32_t x9_25 = x9_24 + x11_22
uint32_t x11_23 = (x10_24 u>> 0x20).d
arg1[5] = x10_24.d
int32_t x10_25

if (x9_24 + x11_22 u< x9_24)
    x10_25 = x12_19 + 1
else
    x10_25 = x12_19

int64_t x9_27 = zx.q(x9_25 + x11_23) + zx.q(arg3[6]) * zx.q(*arg2)
int32_t x10_26

if (x9_25 + x11_23 u< x9_25)
    x10_26 = x10_25 + 1
else
    x10_26 = x10_25

uint32_t x17_4 = (x9_27 u>> 0x20).d
int64_t x9_28 = zx.q(arg3[5]) * zx.q(arg2[1]) + zx.q(x9_27.d)
int32_t x10_27 = x10_26 + x17_4
bool c_19 = x10_26 + x17_4 u< x10_26
uint32_t x11_26 = (x9_28 u>> 0x20).d
int64_t x9_29 = zx.q(arg3[4]) * zx.q(arg2[2]) + zx.q(x9_28.d)
int32_t x17_5

x17_5 = c_19 ? 2 : 1

int32_t x10_28 = x10_27 + x11_26
uint32_t x11_27 = (x9_29 u>> 0x20).d
int64_t x9_30 = zx.q(arg3[3]) * zx.q(arg2[3]) + zx.q(x9_29.d)
int32_t x12_23

if (x10_27 + x11_26 u>= x10_27)
    x12_23 = c_19 ? 1 : 0
else
    x12_23 = x17_5

int32_t x10_29 = x10_28 + x11_27
uint32_t x11_28 = (x9_30 u>> 0x20).d
int64_t x9_31 = zx.q(arg3[2]) * zx.q(arg2[4]) + zx.q(x9_30.d)
int32_t x12_24

if (x10_28 + x11_27 u< x10_28)
    x12_24 = x12_23 + 1
else
    x12_24 = x12_23

int32_t x10_30 = x10_29 + x11_28
uint32_t x11_29 = (x9_31 u>> 0x20).d
int64_t x9_32 = zx.q(arg3[1]) * zx.q(arg2[5]) + zx.q(x9_31.d)
int32_t x12_25

if (x10_29 + x11_28 u< x10_29)
    x12_25 = x12_24 + 1
else
    x12_25 = x12_24

int32_t x10_31 = x10_30 + x11_29
uint32_t x11_30 = (x9_32 u>> 0x20).d
int64_t x9_33 = zx.q(*arg3) * zx.q(arg2[6]) + zx.q(x9_32.d)
int32_t x12_26

if (x10_30 + x11_29 u< x10_30)
    x12_26 = x12_25 + 1
else
    x12_26 = x12_25

int32_t x10_32 = x10_31 + x11_30
uint32_t x11_31 = (x9_33 u>> 0x20).d
arg1[6] = x9_33.d
int32_t x9_34

if (x10_31 + x11_30 u< x10_31)
    x9_34 = x12_26 + 1
else
    x9_34 = x12_26

int64_t x10_34 = zx.q(x10_32 + x11_31) + zx.q(arg3[7]) * zx.q(*arg2)
int32_t x9_35

if (x10_32 + x11_31 u< x10_32)
    x9_35 = x9_34 + 1
else
    x9_35 = x9_34

uint32_t x3_5 = (x10_34 u>> 0x20).d
int64_t x10_35 = zx.q(arg3[6]) * zx.q(arg2[1]) + zx.q(x10_34.d)
int32_t x9_36 = x9_35 + x3_5
bool c_26 = x9_35 + x3_5 u< x9_35
uint32_t x11_34 = (x10_35 u>> 0x20).d
int64_t x10_36 = zx.q(arg3[5]) * zx.q(arg2[2]) + zx.q(x10_35.d)
int32_t x3_6

x3_6 = c_26 ? 2 : 1

int32_t x9_37 = x9_36 + x11_34
uint32_t x11_35 = (x10_36 u>> 0x20).d
int64_t x10_37 = zx.q(arg3[4]) * zx.q(arg2[3]) + zx.q(x10_36.d)
int32_t x12_30

if (x9_36 + x11_34 u>= x9_36)
    x12_30 = c_26 ? 1 : 0
else
    x12_30 = x3_6

int32_t x9_38 = x9_37 + x11_35
uint32_t x11_36 = (x10_37 u>> 0x20).d
int64_t x10_38 = zx.q(arg3[3]) * zx.q(arg2[4]) + zx.q(x10_37.d)
int32_t x12_31

if (x9_37 + x11_35 u< x9_37)
    x12_31 = x12_30 + 1
else
    x12_31 = x12_30

int32_t x9_39 = x9_38 + x11_36
uint32_t x11_37 = (x10_38 u>> 0x20).d
int64_t x10_39 = zx.q(arg3[2]) * zx.q(arg2[5]) + zx.q(x10_38.d)
int32_t x12_32

if (x9_38 + x11_36 u< x9_38)
    x12_32 = x12_31 + 1
else
    x12_32 = x12_31

int32_t x9_40 = x9_39 + x11_37
uint32_t x11_38 = (x10_39 u>> 0x20).d
int64_t x10_40 = zx.q(arg3[1]) * zx.q(arg2[6]) + zx.q(x10_39.d)
int32_t x12_33

if (x9_39 + x11_37 u< x9_39)
    x12_33 = x12_32 + 1
else
    x12_33 = x12_32

int32_t x9_41 = x9_40 + x11_38
uint32_t x11_39 = (x10_40 u>> 0x20).d
int64_t x10_41 = zx.q(*arg3) * zx.q(arg2[7]) + zx.q(x10_40.d)
int32_t x12_34

if (x9_40 + x11_38 u< x9_40)
    x12_34 = x12_33 + 1
else
    x12_34 = x12_33

int32_t x11_40 = x9_41 + x11_39
uint32_t x13_13 = (x10_41 u>> 0x20).d
arg1[7] = x10_41.d
int32_t x9_42

if (x9_41 + x11_39 u< x9_41)
    x9_42 = x12_34 + 1
else
    x9_42 = x12_34

int64_t x10_43 = zx.q(x11_40 + x13_13) + zx.q(arg3[8]) * zx.q(*arg2)
int32_t x9_43

if (x11_40 + x13_13 u< x11_40)
    x9_43 = x9_42 + 1
else
    x9_43 = x9_42

uint32_t x4_5 = (x10_43 u>> 0x20).d
int64_t x10_44 = zx.q(arg3[7]) * zx.q(arg2[1]) + zx.q(x10_43.d)
int32_t x9_44 = x9_43 + x4_5
bool c_34 = x9_43 + x4_5 u< x9_43
uint32_t x11_43 = (x10_44 u>> 0x20).d
int64_t x10_45 = zx.q(arg3[6]) * zx.q(arg2[2]) + zx.q(x10_44.d)
int32_t x4_6

x4_6 = c_34 ? 2 : 1

int32_t x9_45 = x9_44 + x11_43
uint32_t x11_44 = (x10_45 u>> 0x20).d
int64_t x10_46 = zx.q(arg3[5]) * zx.q(arg2[3]) + zx.q(x10_45.d)
int32_t x12_38

if (x9_44 + x11_43 u>= x9_44)
    x12_38 = c_34 ? 1 : 0
else
    x12_38 = x4_6

int32_t x9_46 = x9_45 + x11_44
uint32_t x11_45 = (x10_46 u>> 0x20).d
int64_t x10_47 = zx.q(arg3[4]) * zx.q(arg2[4]) + zx.q(x10_46.d)
int32_t x12_39

if (x9_45 + x11_44 u< x9_45)
    x12_39 = x12_38 + 1
else
    x12_39 = x12_38

int32_t x9_47 = x9_46 + x11_45
uint32_t x11_46 = (x10_47 u>> 0x20).d
int64_t x10_48 = zx.q(arg3[3]) * zx.q(arg2[5]) + zx.q(x10_47.d)
int32_t x12_40

if (x9_46 + x11_45 u< x9_46)
    x12_40 = x12_39 + 1
else
    x12_40 = x12_39

int32_t x9_48 = x9_47 + x11_46
uint32_t x11_47 = (x10_48 u>> 0x20).d
int64_t x10_49 = zx.q(arg3[2]) * zx.q(arg2[6]) + zx.q(x10_48.d)
int32_t x12_41

if (x9_47 + x11_46 u< x9_47)
    x12_41 = x12_40 + 1
else
    x12_41 = x12_40

int32_t x9_49 = x9_48 + x11_47
uint32_t x11_48 = (x10_49 u>> 0x20).d
int64_t x10_50 = zx.q(arg3[1]) * zx.q(arg2[7]) + zx.q(x10_49.d)
int32_t x12_42

if (x9_48 + x11_47 u< x9_48)
    x12_42 = x12_41 + 1
else
    x12_42 = x12_41

int32_t x9_50 = x9_49 + x11_48
uint32_t x11_49 = (x10_50 u>> 0x20).d
int64_t x10_51 = zx.q(*arg3) * zx.q(arg2[8]) + zx.q(x10_50.d)
int32_t x12_43

if (x9_49 + x11_48 u< x9_49)
    x12_43 = x12_42 + 1
else
    x12_43 = x12_42

int32_t x11_50 = x9_50 + x11_49
uint32_t x13_16 = (x10_51 u>> 0x20).d
arg1[8] = x10_51.d
int32_t x9_51

if (x9_50 + x11_49 u< x9_50)
    x9_51 = x12_43 + 1
else
    x9_51 = x12_43

int64_t x10_53 = zx.q(x11_50 + x13_16) + zx.q(arg3[9]) * zx.q(*arg2)
int32_t x9_52

if (x11_50 + x13_16 u< x11_50)
    x9_52 = x9_51 + 1
else
    x9_52 = x9_51

uint32_t x5_6 = (x10_53 u>> 0x20).d
int64_t x10_54 = zx.q(arg3[8]) * zx.q(arg2[1]) + zx.q(x10_53.d)
int32_t x9_53 = x9_52 + x5_6
bool c_43 = x9_52 + x5_6 u< x9_52
uint32_t x12_46 = (x10_54 u>> 0x20).d
int64_t x10_55 = zx.q(arg3[7]) * zx.q(arg2[2]) + zx.q(x10_54.d)
int32_t x5_7

x5_7 = c_43 ? 2 : 1

int32_t x9_54 = x9_53 + x12_46
uint32_t x12_47 = (x10_55 u>> 0x20).d
int64_t x10_56 = zx.q(arg3[6]) * zx.q(arg2[3]) + zx.q(x10_55.d)
int32_t x13_20

if (x9_53 + x12_46 u>= x9_53)
    x13_20 = c_43 ? 1 : 0
else
    x13_20 = x5_7

int32_t x9_55 = x9_54 + x12_47
uint32_t x12_48 = (x10_56 u>> 0x20).d
int64_t x10_57 = zx.q(arg3[5]) * zx.q(arg2[4]) + zx.q(x10_56.d)
int32_t x13_21

if (x9_54 + x12_47 u< x9_54)
    x13_21 = x13_20 + 1
else
    x13_21 = x13_20

int32_t x9_56 = x9_55 + x12_48
uint32_t x12_49 = (x10_57 u>> 0x20).d
int64_t x10_58 = zx.q(arg3[4]) * zx.q(arg2[5]) + zx.q(x10_57.d)
int32_t x13_22

if (x9_55 + x12_48 u< x9_55)
    x13_22 = x13_21 + 1
else
    x13_22 = x13_21

int32_t x9_57 = x9_56 + x12_49
uint32_t x12_50 = (x10_58 u>> 0x20).d
int64_t x10_59 = zx.q(arg3[3]) * zx.q(arg2[6]) + zx.q(x10_58.d)
int32_t x13_23

if (x9_56 + x12_49 u< x9_56)
    x13_23 = x13_22 + 1
else
    x13_23 = x13_22

int32_t x9_58 = x9_57 + x12_50
uint32_t x12_51 = (x10_59 u>> 0x20).d
int64_t x10_60 = zx.q(arg3[2]) * zx.q(arg2[7]) + zx.q(x10_59.d)
int32_t x13_24

if (x9_57 + x12_50 u< x9_57)
    x13_24 = x13_23 + 1
else
    x13_24 = x13_23

int32_t x9_59 = x9_58 + x12_51
uint32_t x12_52 = (x10_60 u>> 0x20).d
int64_t x10_61 = zx.q(arg3[1]) * zx.q(arg2[8]) + zx.q(x10_60.d)
int32_t x11_54

if (x9_58 + x12_51 u< x9_58)
    x11_54 = x13_24 + 1
else
    x11_54 = x13_24

int32_t x9_60 = x9_59 + x12_52
uint32_t x12_53 = (x10_61 u>> 0x20).d
int64_t x10_62 = zx.q(*arg3) * zx.q(arg2[9]) + zx.q(x10_61.d)
int32_t x11_55

if (x9_59 + x12_52 u< x9_59)
    x11_55 = x11_54 + 1
else
    x11_55 = x11_54

int32_t x12_54 = x9_60 + x12_53
uint32_t x13_25 = (x10_62 u>> 0x20).d
arg1[9] = x10_62.d
int32_t x9_61

if (x9_60 + x12_53 u< x9_60)
    x9_61 = x11_55 + 1
else
    x9_61 = x11_55

int64_t x16_15 = zx.q(x12_54 + x13_25) + zx.q(arg3[0xa]) * zx.q(*arg2)
int32_t x9_62

if (x12_54 + x13_25 u< x12_54)
    x9_62 = x9_61 + 1
else
    x9_62 = x9_61

uint32_t x3_13 = (x16_15 u>> 0x20).d
int64_t x10_65 = zx.q(arg3[9]) * zx.q(arg2[1]) + zx.q(x16_15.d)
int32_t x9_63 = x9_62 + x3_13
bool c_53 = x9_62 + x3_13 u< x9_62
uint32_t x16_16 = (x10_65 u>> 0x20).d
int64_t x10_66 = zx.q(arg3[8]) * zx.q(arg2[2]) + zx.q(x10_65.d)
int32_t x3_14

x3_14 = c_53 ? 2 : 1

int32_t x9_64 = x9_63 + x16_16
uint32_t x16_17 = (x10_66 u>> 0x20).d
int64_t x10_67 = zx.q(arg3[7]) * zx.q(arg2[3]) + zx.q(x10_66.d)
int32_t x11_59

if (x9_63 + x16_16 u>= x9_63)
    x11_59 = c_53 ? 1 : 0
else
    x11_59 = x3_14

int32_t x9_65 = x9_64 + x16_17
uint32_t x14_19 = (x10_67 u>> 0x20).d
int64_t x10_68 = zx.q(arg3[6]) * zx.q(arg2[4]) + zx.q(x10_67.d)
int32_t x11_60

if (x9_64 + x16_17 u< x9_64)
    x11_60 = x11_59 + 1
else
    x11_60 = x11_59

int32_t x9_66 = x9_65 + x14_19
uint32_t x14_20 = (x10_68 u>> 0x20).d
int64_t x10_69 = zx.q(arg3[5]) * zx.q(arg2[5]) + zx.q(x10_68.d)
int32_t x11_61

if (x9_65 + x14_19 u< x9_65)
    x11_61 = x11_60 + 1
else
    x11_61 = x11_60

int32_t x9_67 = x9_66 + x14_20
uint32_t x14_21 = (x10_69 u>> 0x20).d
int64_t x10_70 = zx.q(arg3[4]) * zx.q(arg2[6]) + zx.q(x10_69.d)
int32_t x11_62

if (x9_66 + x14_20 u< x9_66)
    x11_62 = x11_61 + 1
else
    x11_62 = x11_61

int32_t x9_68 = x9_67 + x14_21
uint32_t x14_22 = (x10_70 u>> 0x20).d
int64_t x10_71 = zx.q(arg3[3]) * zx.q(arg2[7]) + zx.q(x10_70.d)
int32_t x11_63

if (x9_67 + x14_21 u< x9_67)
    x11_63 = x11_62 + 1
else
    x11_63 = x11_62

int32_t x9_69 = x9_68 + x14_22
uint32_t x14_23 = (x10_71 u>> 0x20).d
int64_t x10_72 = zx.q(arg3[2]) * zx.q(arg2[8]) + zx.q(x10_71.d)
int32_t x11_64

if (x9_68 + x14_22 u< x9_68)
    x11_64 = x11_63 + 1
else
    x11_64 = x11_63

int32_t x9_70 = x9_69 + x14_23
uint32_t x14_24 = (x10_72 u>> 0x20).d
int64_t x10_73 = zx.q(arg3[1]) * zx.q(arg2[9]) + zx.q(x10_72.d)
int32_t x11_65

if (x9_69 + x14_23 u< x9_69)
    x11_65 = x11_64 + 1
else
    x11_65 = x11_64

int32_t x9_71 = x9_70 + x14_24
uint32_t x12_58 = (x10_73 u>> 0x20).d
int64_t x10_74 = zx.q(*arg3) * zx.q(arg2[0xa]) + zx.q(x10_73.d)
int32_t x11_66

if (x9_70 + x14_24 u< x9_70)
    x11_66 = x11_65 + 1
else
    x11_66 = x11_65

int32_t x12_59 = x9_71 + x12_58
uint32_t x13_29 = (x10_74 u>> 0x20).d
arg1[0xa] = x10_74.d
int32_t x9_72

if (x9_71 + x12_58 u< x9_71)
    x9_72 = x11_66 + 1
else
    x9_72 = x11_66

int64_t x12_61 = zx.q(x12_59 + x13_29) + zx.q(arg3[0xb]) * zx.q(*arg2)
int32_t x9_73

if (x12_59 + x13_29 u< x12_59)
    x9_73 = x9_72 + 1
else
    x9_73 = x9_72

uint32_t x6_9 = (x12_61 u>> 0x20).d
int64_t x12_62 = zx.q(arg3[0xa]) * zx.q(arg2[1]) + zx.q(x12_61.d)
int32_t x9_74 = x9_73 + x6_9
bool c_64 = x9_73 + x6_9 u< x9_73
uint32_t x15_19 = (x12_62 u>> 0x20).d
int64_t x12_63 = zx.q(arg3[9]) * zx.q(arg2[2]) + zx.q(x12_62.d)
int32_t x6_10

x6_10 = c_64 ? 2 : 1

int32_t x9_75 = x9_74 + x15_19
uint32_t x15_20 = (x12_63 u>> 0x20).d
int64_t x10_77 = zx.q(arg3[8]) * zx.q(arg2[3]) + zx.q(x12_63.d)
int32_t x12_64

if (x9_74 + x15_19 u>= x9_74)
    x12_64 = c_64 ? 1 : 0
else
    x12_64 = x6_10

int32_t x9_76 = x9_75 + x15_20
uint32_t x15_21 = (x10_77 u>> 0x20).d
int64_t x10_78 = zx.q(arg3[7]) * zx.q(arg2[4]) + zx.q(x10_77.d)
int32_t x11_69

if (x9_75 + x15_20 u< x9_75)
    x11_69 = x12_64 + 1
else
    x11_69 = x12_64

int32_t x9_77 = x9_76 + x15_21
uint32_t x12_65 = (x10_78 u>> 0x20).d
int64_t x10_79 = zx.q(arg3[6]) * zx.q(arg2[5]) + zx.q(x10_78.d)
int32_t x11_70

if (x9_76 + x15_21 u< x9_76)
    x11_70 = x11_69 + 1
else
    x11_70 = x11_69

int32_t x9_78 = x9_77 + x12_65
uint32_t x12_66 = (x10_79 u>> 0x20).d
int64_t x10_80 = zx.q(arg3[5]) * zx.q(arg2[6]) + zx.q(x10_79.d)
int32_t x11_71

if (x9_77 + x12_65 u< x9_77)
    x11_71 = x11_70 + 1
else
    x11_71 = x11_70

int32_t x9_79 = x9_78 + x12_66
uint32_t x12_67 = (x10_80 u>> 0x20).d
int64_t x10_81 = zx.q(arg3[4]) * zx.q(arg2[7]) + zx.q(x10_80.d)
int32_t x11_72

if (x9_78 + x12_66 u< x9_78)
    x11_72 = x11_71 + 1
else
    x11_72 = x11_71

int32_t x9_80 = x9_79 + x12_67
uint32_t x12_68 = (x10_81 u>> 0x20).d
int64_t x10_82 = zx.q(arg3[3]) * zx.q(arg2[8]) + zx.q(x10_81.d)
int32_t x11_73

if (x9_79 + x12_67 u< x9_79)
    x11_73 = x11_72 + 1
else
    x11_73 = x11_72

int32_t x9_81 = x9_80 + x12_68
uint32_t x12_69 = (x10_82 u>> 0x20).d
int64_t x10_83 = zx.q(arg3[2]) * zx.q(arg2[9]) + zx.q(x10_82.d)
int32_t x11_74

if (x9_80 + x12_68 u< x9_80)
    x11_74 = x11_73 + 1
else
    x11_74 = x11_73

int32_t x9_82 = x9_81 + x12_69
uint32_t x12_70 = (x10_83 u>> 0x20).d
int64_t x10_84 = zx.q(arg3[1]) * zx.q(arg2[0xa]) + zx.q(x10_83.d)
int32_t x11_75

if (x9_81 + x12_69 u< x9_81)
    x11_75 = x11_74 + 1
else
    x11_75 = x11_74

int32_t x9_83 = x9_82 + x12_70
uint32_t x12_71 = (x10_84 u>> 0x20).d
int64_t x10_85 = zx.q(*arg3) * zx.q(arg2[0xb]) + zx.q(x10_84.d)
arg1[0xb] = x10_85.d
int32_t x11_76

if (x9_82 + x12_70 u< x9_82)
    x11_76 = x11_75 + 1
else
    x11_76 = x11_75

int32_t x12_72 = x9_83 + x12_71
uint32_t x13_33 = (x10_85 u>> 0x20).d
int32_t x9_84

if (x9_83 + x12_71 u< x9_83)
    x9_84 = x11_76 + 1
else
    x9_84 = x11_76

int64_t x5_13 = zx.q(x12_72 + x13_33) + zx.q(arg3[0xc]) * zx.q(*arg2)
int32_t x9_85

if (x12_72 + x13_33 u< x12_72)
    x9_85 = x9_84 + 1
else
    x9_85 = x9_84

uint32_t x7_10 = (x5_13 u>> 0x20).d
int64_t x3_20 = zx.q(arg3[0xb]) * zx.q(arg2[1]) + zx.q(x5_13.d)
int32_t x9_86 = x9_85 + x7_10
bool c_76 = x9_85 + x7_10 u< x9_85
uint32_t x5_14 = (x3_20 u>> 0x20).d
int64_t x10_88 = zx.q(arg3[0xa]) * zx.q(arg2[2]) + zx.q(x3_20.d)
int32_t x7_11

x7_11 = c_76 ? 2 : 1

int32_t x9_87 = x9_86 + x5_14
uint32_t x5_15 = (x10_88 u>> 0x20).d
int64_t x10_89 = zx.q(arg3[9]) * zx.q(arg2[3]) + zx.q(x10_88.d)
int32_t x11_79

if (x9_86 + x5_14 u>= x9_86)
    x11_79 = c_76 ? 1 : 0
else
    x11_79 = x7_11

int32_t x9_88 = x9_87 + x5_15
uint32_t x3_22 = (x10_89 u>> 0x20).d
int64_t x10_90 = zx.q(arg3[8]) * zx.q(arg2[4]) + zx.q(x10_89.d)
int32_t x11_80

if (x9_87 + x5_15 u< x9_87)
    x11_80 = x11_79 + 1
else
    x11_80 = x11_79

int32_t x9_89 = x9_88 + x3_22
uint32_t x13_36 = (x10_90 u>> 0x20).d
int64_t x10_91 = zx.q(arg3[7]) * zx.q(arg2[5]) + zx.q(x10_90.d)
int32_t x11_81

if (x9_88 + x3_22 u< x9_88)
    x11_81 = x11_80 + 1
else
    x11_81 = x11_80

int32_t x9_90 = x9_89 + x13_36
uint32_t x12_75 = (x10_91 u>> 0x20).d
int64_t x10_92 = zx.q(arg3[6]) * zx.q(arg2[6]) + zx.q(x10_91.d)
int32_t x11_82

if (x9_89 + x13_36 u< x9_89)
    x11_82 = x11_81 + 1
else
    x11_82 = x11_81

int32_t x9_91 = x9_90 + x12_75
uint32_t x12_76 = (x10_92 u>> 0x20).d
int64_t x10_93 = zx.q(arg3[5]) * zx.q(arg2[7]) + zx.q(x10_92.d)
int32_t x11_83

if (x9_90 + x12_75 u< x9_90)
    x11_83 = x11_82 + 1
else
    x11_83 = x11_82

int32_t x9_92 = x9_91 + x12_76
uint32_t x12_77 = (x10_93 u>> 0x20).d
int64_t x10_94 = zx.q(arg3[4]) * zx.q(arg2[8]) + zx.q(x10_93.d)
int32_t x11_84

if (x9_91 + x12_76 u< x9_91)
    x11_84 = x11_83 + 1
else
    x11_84 = x11_83

int32_t x9_93 = x9_92 + x12_77
uint32_t x12_78 = (x10_94 u>> 0x20).d
int64_t x10_95 = zx.q(arg3[3]) * zx.q(arg2[9]) + zx.q(x10_94.d)
int32_t x11_85

if (x9_92 + x12_77 u< x9_92)
    x11_85 = x11_84 + 1
else
    x11_85 = x11_84

int32_t x9_94 = x9_93 + x12_78
uint32_t x12_79 = (x10_95 u>> 0x20).d
int64_t x10_96 = zx.q(arg3[2]) * zx.q(arg2[0xa]) + zx.q(x10_95.d)
int32_t x11_86

if (x9_93 + x12_78 u< x9_93)
    x11_86 = x11_85 + 1
else
    x11_86 = x11_85

int32_t x9_95 = x9_94 + x12_79
uint32_t x12_80 = (x10_96 u>> 0x20).d
int64_t x10_97 = zx.q(arg3[1]) * zx.q(arg2[0xb]) + zx.q(x10_96.d)
int32_t x11_87

if (x9_94 + x12_79 u< x9_94)
    x11_87 = x11_86 + 1
else
    x11_87 = x11_86

int32_t x9_96 = x9_95 + x12_80
uint32_t x12_81 = (x10_97 u>> 0x20).d
int64_t x10_98 = zx.q(*arg3) * zx.q(arg2[0xc]) + zx.q(x10_97.d)
int32_t x11_88

if (x9_95 + x12_80 u< x9_95)
    x11_88 = x11_87 + 1
else
    x11_88 = x11_87

int32_t x12_82 = x9_96 + x12_81
uint32_t x13_37 = (x10_98 u>> 0x20).d
arg1[0xc] = x10_98.d
int32_t x9_97

if (x9_96 + x12_81 u< x9_96)
    x9_97 = x11_88 + 1
else
    x9_97 = x11_88

int64_t x12_84 = zx.q(x12_82 + x13_37) + zx.q(arg3[0xd]) * zx.q(*arg2)
int32_t x9_98

if (x12_82 + x13_37 u< x12_82)
    x9_98 = x9_97 + 1
else
    x9_98 = x9_97

uint32_t x20_10 = (x12_84 u>> 0x20).d
int64_t x12_85 = zx.q(arg3[0xc]) * zx.q(arg2[1]) + zx.q(x12_84.d)
int32_t x9_99 = x9_98 + x20_10
bool c_89 = x9_98 + x20_10 u< x9_98
uint32_t x15_27 = (x12_85 u>> 0x20).d
int64_t x12_86 = zx.q(arg3[0xb]) * zx.q(arg2[2]) + zx.q(x12_85.d)
int32_t x20_11

x20_11 = c_89 ? 2 : 1

int32_t x9_100 = x9_99 + x15_27
uint32_t x15_28 = (x12_86 u>> 0x20).d
int64_t x10_101 = zx.q(arg3[0xa]) * zx.q(arg2[3]) + zx.q(x12_86.d)
int32_t x12_87

if (x9_99 + x15_27 u>= x9_99)
    x12_87 = c_89 ? 1 : 0
else
    x12_87 = x20_11

int32_t x9_101 = x9_100 + x15_28
uint32_t x15_29 = (x10_101 u>> 0x20).d
int64_t x10_102 = zx.q(arg3[9]) * zx.q(arg2[4]) + zx.q(x10_101.d)
int32_t x11_91

if (x9_100 + x15_28 u< x9_100)
    x11_91 = x12_87 + 1
else
    x11_91 = x12_87

int32_t x9_102 = x9_101 + x15_29
uint32_t x12_88 = (x10_102 u>> 0x20).d
int64_t x10_103 = zx.q(arg3[8]) * zx.q(arg2[5]) + zx.q(x10_102.d)
int32_t x11_92

if (x9_101 + x15_29 u< x9_101)
    x11_92 = x11_91 + 1
else
    x11_92 = x11_91

int32_t x9_103 = x9_102 + x12_88
uint32_t x12_89 = (x10_103 u>> 0x20).d
int64_t x10_104 = zx.q(arg3[7]) * zx.q(arg2[6]) + zx.q(x10_103.d)
int32_t x11_93

if (x9_102 + x12_88 u< x9_102)
    x11_93 = x11_92 + 1
else
    x11_93 = x11_92

int32_t x9_104 = x9_103 + x12_89
uint32_t x12_90 = (x10_104 u>> 0x20).d
int64_t x10_105 = zx.q(arg3[6]) * zx.q(arg2[7]) + zx.q(x10_104.d)
int32_t x11_94

if (x9_103 + x12_89 u< x9_103)
    x11_94 = x11_93 + 1
else
    x11_94 = x11_93

int32_t x9_105 = x9_104 + x12_90
uint32_t x12_91 = (x10_105 u>> 0x20).d
int64_t x10_106 = zx.q(arg3[5]) * zx.q(arg2[8]) + zx.q(x10_105.d)
int32_t x11_95

if (x9_104 + x12_90 u< x9_104)
    x11_95 = x11_94 + 1
else
    x11_95 = x11_94

int32_t x9_106 = x9_105 + x12_91
uint32_t x12_92 = (x10_106 u>> 0x20).d
int64_t x10_107 = zx.q(arg3[4]) * zx.q(arg2[9]) + zx.q(x10_106.d)
int32_t x11_96

if (x9_105 + x12_91 u< x9_105)
    x11_96 = x11_95 + 1
else
    x11_96 = x11_95

int32_t x9_107 = x9_106 + x12_92
uint32_t x12_93 = (x10_107 u>> 0x20).d
int64_t x10_108 = zx.q(arg3[3]) * zx.q(arg2[0xa]) + zx.q(x10_107.d)
int32_t x11_97

if (x9_106 + x12_92 u< x9_106)
    x11_97 = x11_96 + 1
else
    x11_97 = x11_96

int32_t x9_108 = x9_107 + x12_93
uint32_t x12_94 = (x10_108 u>> 0x20).d
int64_t x10_109 = zx.q(arg3[2]) * zx.q(arg2[0xb]) + zx.q(x10_108.d)
int32_t x11_98

if (x9_107 + x12_93 u< x9_107)
    x11_98 = x11_97 + 1
else
    x11_98 = x11_97

int32_t x9_109 = x9_108 + x12_94
uint32_t x12_95 = (x10_109 u>> 0x20).d
int64_t x10_110 = zx.q(arg3[1]) * zx.q(arg2[0xc]) + zx.q(x10_109.d)
int32_t x11_99

if (x9_108 + x12_94 u< x9_108)
    x11_99 = x11_98 + 1
else
    x11_99 = x11_98

int32_t x9_110 = x9_109 + x12_95
uint32_t x12_96 = (x10_110 u>> 0x20).d
int64_t x10_111 = zx.q(*arg3) * zx.q(arg2[0xd]) + zx.q(x10_110.d)
arg1[0xd] = x10_111.d
int32_t x11_100

if (x9_109 + x12_95 u< x9_109)
    x11_100 = x11_99 + 1
else
    x11_100 = x11_99

int32_t x12_97 = x9_110 + x12_96
uint32_t x13_41 = (x10_111 u>> 0x20).d
int32_t x9_111

if (x9_110 + x12_96 u< x9_110)
    x9_111 = x11_100 + 1
else
    x9_111 = x11_100

int64_t x16_28 = zx.q(x12_97 + x13_41) + zx.q(arg3[0xe]) * zx.q(*arg2)
int32_t x9_112

if (x12_97 + x13_41 u< x12_97)
    x9_112 = x9_111 + 1
else
    x9_112 = x9_111

uint32_t x21_11 = (x16_28 u>> 0x20).d
int64_t x16_29 = zx.q(arg3[0xd]) * zx.q(arg2[1]) + zx.q(x16_28.d)
int32_t x9_113 = x9_112 + x21_11
bool c_103 = x9_112 + x21_11 u< x9_112
uint32_t x17_26 = (x16_29 u>> 0x20).d
int64_t x10_114 = zx.q(arg3[0xc]) * zx.q(arg2[2]) + zx.q(x16_29.d)
int32_t x21_12

x21_12 = c_103 ? 2 : 1

int32_t x9_114 = x9_113 + x17_26
uint32_t x17_27 = (x10_114 u>> 0x20).d
int64_t x10_115 = zx.q(arg3[0xb]) * zx.q(arg2[3]) + zx.q(x10_114.d)
int32_t x11_103

if (x9_113 + x17_26 u>= x9_113)
    x11_103 = c_103 ? 1 : 0
else
    x11_103 = x21_12

int32_t x9_115 = x9_114 + x17_27
uint32_t x16_31 = (x10_115 u>> 0x20).d
int64_t x10_116 = zx.q(arg3[0xa]) * zx.q(arg2[4]) + zx.q(x10_115.d)
int32_t x11_104

if (x9_114 + x17_27 u< x9_114)
    x11_104 = x11_103 + 1
else
    x11_104 = x11_103

int32_t x9_116 = x9_115 + x16_31
uint32_t x12_100 = (x10_116 u>> 0x20).d
int64_t x10_117 = zx.q(arg3[9]) * zx.q(arg2[5]) + zx.q(x10_116.d)
int32_t x11_105

if (x9_115 + x16_31 u< x9_115)
    x11_105 = x11_104 + 1
else
    x11_105 = x11_104

int32_t x9_117 = x9_116 + x12_100
uint32_t x12_101 = (x10_117 u>> 0x20).d
int64_t x10_118 = zx.q(arg3[8]) * zx.q(arg2[6]) + zx.q(x10_117.d)
int32_t x11_106

if (x9_116 + x12_100 u< x9_116)
    x11_106 = x11_105 + 1
else
    x11_106 = x11_105

int32_t x9_118 = x9_117 + x12_101
uint32_t x12_102 = (x10_118 u>> 0x20).d
int64_t x10_119 = zx.q(arg3[7]) * zx.q(arg2[7]) + zx.q(x10_118.d)
int32_t x11_107

if (x9_117 + x12_101 u< x9_117)
    x11_107 = x11_106 + 1
else
    x11_107 = x11_106

int32_t x9_119 = x9_118 + x12_102
uint32_t x12_103 = (x10_119 u>> 0x20).d
int64_t x10_120 = zx.q(arg3[6]) * zx.q(arg2[8]) + zx.q(x10_119.d)
int32_t x11_108

if (x9_118 + x12_102 u< x9_118)
    x11_108 = x11_107 + 1
else
    x11_108 = x11_107

int32_t x9_120 = x9_119 + x12_103
uint32_t x12_104 = (x10_120 u>> 0x20).d
int64_t x10_121 = zx.q(arg3[5]) * zx.q(arg2[9]) + zx.q(x10_120.d)
int32_t x11_109

if (x9_119 + x12_103 u< x9_119)
    x11_109 = x11_108 + 1
else
    x11_109 = x11_108

int32_t x9_121 = x9_120 + x12_104
uint32_t x12_105 = (x10_121 u>> 0x20).d
int64_t x10_122 = zx.q(arg3[4]) * zx.q(arg2[0xa]) + zx.q(x10_121.d)
int32_t x11_110

if (x9_120 + x12_104 u< x9_120)
    x11_110 = x11_109 + 1
else
    x11_110 = x11_109

int32_t x9_122 = x9_121 + x12_105
uint32_t x12_106 = (x10_122 u>> 0x20).d
int64_t x10_123 = zx.q(arg3[3]) * zx.q(arg2[0xb]) + zx.q(x10_122.d)
int32_t x11_111

if (x9_121 + x12_105 u< x9_121)
    x11_111 = x11_110 + 1
else
    x11_111 = x11_110

int32_t x9_123 = x9_122 + x12_106
uint32_t x12_107 = (x10_123 u>> 0x20).d
int64_t x10_124 = zx.q(arg3[2]) * zx.q(arg2[0xc]) + zx.q(x10_123.d)
int32_t x11_112

if (x9_122 + x12_106 u< x9_122)
    x11_112 = x11_111 + 1
else
    x11_112 = x11_111

int32_t x9_124 = x9_123 + x12_107
uint32_t x12_108 = (x10_124 u>> 0x20).d
int64_t x10_125 = zx.q(arg3[1]) * zx.q(arg2[0xd]) + zx.q(x10_124.d)
int32_t x11_113

if (x9_123 + x12_107 u< x9_123)
    x11_113 = x11_112 + 1
else
    x11_113 = x11_112

int32_t x9_125 = x9_124 + x12_108
uint32_t x12_109 = (x10_125 u>> 0x20).d
int64_t x10_126 = zx.q(*arg3) * zx.q(arg2[0xe]) + zx.q(x10_125.d)
int32_t x11_114

if (x9_124 + x12_108 u< x9_124)
    x11_114 = x11_113 + 1
else
    x11_114 = x11_113

int32_t x12_110 = x9_125 + x12_109
uint32_t x13_44 = (x10_126 u>> 0x20).d
arg1[0xe] = x10_126.d
int32_t x9_126

if (x9_125 + x12_109 u< x9_125)
    x9_126 = x11_114 + 1
else
    x9_126 = x11_114

int64_t x12_112 = zx.q(x12_110 + x13_44) + zx.q(arg3[0xf]) * zx.q(*arg2)
int32_t x9_127

if (x12_110 + x13_44 u< x12_110)
    x9_127 = x9_126 + 1
else
    x9_127 = x9_126

uint32_t x21_16 = (x12_112 u>> 0x20).d
int64_t x12_113 = zx.q(arg3[0xe]) * zx.q(arg2[1]) + zx.q(x12_112.d)
int32_t x9_128 = x9_127 + x21_16
bool c_118 = x9_127 + x21_16 u< x9_127
uint32_t x15_35 = (x12_113 u>> 0x20).d
int64_t x12_114 = zx.q(arg3[0xd]) * zx.q(arg2[2]) + zx.q(x12_113.d)
int32_t x21_17

x21_17 = c_118 ? 2 : 1

int32_t x9_129 = x9_128 + x15_35
uint32_t x15_36 = (x12_114 u>> 0x20).d
int64_t x10_129 = zx.q(arg3[0xc]) * zx.q(arg2[3]) + zx.q(x12_114.d)
int32_t x12_115

if (x9_128 + x15_35 u>= x9_128)
    x12_115 = c_118 ? 1 : 0
else
    x12_115 = x21_17

int32_t x9_130 = x9_129 + x15_36
uint32_t x13_48 = (x10_129 u>> 0x20).d
int64_t x10_130 = zx.q(arg3[0xb]) * zx.q(arg2[4]) + zx.q(x10_129.d)
int32_t x11_117

if (x9_129 + x15_36 u< x9_129)
    x11_117 = x12_115 + 1
else
    x11_117 = x12_115

int32_t x9_131 = x9_130 + x13_48
uint32_t x12_116 = (x10_130 u>> 0x20).d
int64_t x10_131 = zx.q(arg3[0xa]) * zx.q(arg2[5]) + zx.q(x10_130.d)
int32_t x11_118

if (x9_130 + x13_48 u< x9_130)
    x11_118 = x11_117 + 1
else
    x11_118 = x11_117

int32_t x9_132 = x9_131 + x12_116
uint32_t x12_117 = (x10_131 u>> 0x20).d
int64_t x10_132 = zx.q(arg3[9]) * zx.q(arg2[6]) + zx.q(x10_131.d)
int32_t x11_119

if (x9_131 + x12_116 u< x9_131)
    x11_119 = x11_118 + 1
else
    x11_119 = x11_118

int32_t x9_133 = x9_132 + x12_117
uint32_t x12_118 = (x10_132 u>> 0x20).d
int64_t x10_133 = zx.q(arg3[8]) * zx.q(arg2[7]) + zx.q(x10_132.d)
int32_t x11_120

if (x9_132 + x12_117 u< x9_132)
    x11_120 = x11_119 + 1
else
    x11_120 = x11_119

int32_t x9_134 = x9_133 + x12_118
uint32_t x12_119 = (x10_133 u>> 0x20).d
int64_t x10_134 = zx.q(arg3[7]) * zx.q(arg2[8]) + zx.q(x10_133.d)
int32_t x11_121

if (x9_133 + x12_118 u< x9_133)
    x11_121 = x11_120 + 1
else
    x11_121 = x11_120

int32_t x9_135 = x9_134 + x12_119
uint32_t x12_120 = (x10_134 u>> 0x20).d
int64_t x10_135 = zx.q(arg3[6]) * zx.q(arg2[9]) + zx.q(x10_134.d)
int32_t x11_122

if (x9_134 + x12_119 u< x9_134)
    x11_122 = x11_121 + 1
else
    x11_122 = x11_121

int32_t x9_136 = x9_135 + x12_120
uint32_t x12_121 = (x10_135 u>> 0x20).d
int64_t x10_136 = zx.q(arg3[5]) * zx.q(arg2[0xa]) + zx.q(x10_135.d)
int32_t x11_123

if (x9_135 + x12_120 u< x9_135)
    x11_123 = x11_122 + 1
else
    x11_123 = x11_122

int32_t x9_137 = x9_136 + x12_121
uint32_t x12_122 = (x10_136 u>> 0x20).d
int64_t x10_137 = zx.q(arg3[4]) * zx.q(arg2[0xb]) + zx.q(x10_136.d)
int32_t x11_124

if (x9_136 + x12_121 u< x9_136)
    x11_124 = x11_123 + 1
else
    x11_124 = x11_123

int32_t x9_138 = x9_137 + x12_122
uint32_t x12_123 = (x10_137 u>> 0x20).d
int64_t x10_138 = zx.q(arg3[3]) * zx.q(arg2[0xc]) + zx.q(x10_137.d)
int32_t x11_125

if (x9_137 + x12_122 u< x9_137)
    x11_125 = x11_124 + 1
else
    x11_125 = x11_124

int32_t x9_139 = x9_138 + x12_123
uint32_t x12_124 = (x10_138 u>> 0x20).d
int64_t x10_139 = zx.q(arg3[2]) * zx.q(arg2[0xd]) + zx.q(x10_138.d)
int32_t x11_126

if (x9_138 + x12_123 u< x9_138)
    x11_126 = x11_125 + 1
else
    x11_126 = x11_125

int32_t x9_140 = x9_139 + x12_124
uint32_t x12_125 = (x10_139 u>> 0x20).d
int64_t x10_140 = zx.q(arg3[1]) * zx.q(arg2[0xe]) + zx.q(x10_139.d)
int32_t x11_127

if (x9_139 + x12_124 u< x9_139)
    x11_127 = x11_126 + 1
else
    x11_127 = x11_126

int32_t x9_141 = x9_140 + x12_125
uint32_t x12_126 = (x10_140 u>> 0x20).d
int64_t x10_141 = zx.q(*arg3) * zx.q(arg2[0xf]) + zx.q(x10_140.d)
int32_t x11_128

if (x9_140 + x12_125 u< x9_140)
    x11_128 = x11_127 + 1
else
    x11_128 = x11_127

int32_t x12_127 = x9_141 + x12_126
uint32_t x13_49 = (x10_141 u>> 0x20).d
arg1[0xf] = x10_141.d
int32_t x9_142

if (x9_141 + x12_126 u< x9_141)
    x9_142 = x11_128 + 1
else
    x9_142 = x11_128

int64_t x10_143 = zx.q(x12_127 + x13_49) + zx.q(arg3[0xf]) * zx.q(arg2[1])
int32_t x9_143

if (x12_127 + x13_49 u< x12_127)
    x9_143 = x9_142 + 1
else
    x9_143 = x9_142

uint32_t x19_23 = (x10_143 u>> 0x20).d
int64_t x10_144 = zx.q(arg3[0xe]) * zx.q(arg2[2]) + zx.q(x10_143.d)
int32_t x9_144 = x9_143 + x19_23
bool c_134 = x9_143 + x19_23 u< x9_143
uint32_t x13_52 = (x10_144 u>> 0x20).d
int64_t x10_145 = zx.q(arg3[0xd]) * zx.q(arg2[3]) + zx.q(x10_144.d)
int32_t x19_24

x19_24 = c_134 ? 2 : 1

int32_t x9_145 = x9_144 + x13_52
uint32_t x13_53 = (x10_145 u>> 0x20).d
int64_t x10_146 = zx.q(arg3[0xc]) * zx.q(arg2[4]) + zx.q(x10_145.d)
int32_t x11_131

if (x9_144 + x13_52 u>= x9_144)
    x11_131 = c_134 ? 1 : 0
else
    x11_131 = x19_24

int32_t x9_146 = x9_145 + x13_53
uint32_t x13_54 = (x10_146 u>> 0x20).d
int64_t x10_147 = zx.q(arg3[0xb]) * zx.q(arg2[5]) + zx.q(x10_146.d)
int32_t x11_132

if (x9_145 + x13_53 u< x9_145)
    x11_132 = x11_131 + 1
else
    x11_132 = x11_131

int32_t x9_147 = x9_146 + x13_54
uint32_t x12_130 = (x10_147 u>> 0x20).d
int64_t x10_148 = zx.q(arg3[0xa]) * zx.q(arg2[6]) + zx.q(x10_147.d)
int32_t x11_133

if (x9_146 + x13_54 u< x9_146)
    x11_133 = x11_132 + 1
else
    x11_133 = x11_132

int32_t x9_148 = x9_147 + x12_130
uint32_t x12_131 = (x10_148 u>> 0x20).d
int64_t x10_149 = zx.q(arg3[9]) * zx.q(arg2[7]) + zx.q(x10_148.d)
int32_t x11_134

if (x9_147 + x12_130 u< x9_147)
    x11_134 = x11_133 + 1
else
    x11_134 = x11_133

int32_t x9_149 = x9_148 + x12_131
uint32_t x12_132 = (x10_149 u>> 0x20).d
int64_t x10_150 = zx.q(arg3[8]) * zx.q(arg2[8]) + zx.q(x10_149.d)
int32_t x11_135

if (x9_148 + x12_131 u< x9_148)
    x11_135 = x11_134 + 1
else
    x11_135 = x11_134

int32_t x9_150 = x9_149 + x12_132
uint32_t x12_133 = (x10_150 u>> 0x20).d
int64_t x10_151 = zx.q(arg3[7]) * zx.q(arg2[9]) + zx.q(x10_150.d)
int32_t x11_136

if (x9_149 + x12_132 u< x9_149)
    x11_136 = x11_135 + 1
else
    x11_136 = x11_135

int32_t x9_151 = x9_150 + x12_133
uint32_t x12_134 = (x10_151 u>> 0x20).d
int64_t x10_152 = zx.q(arg3[6]) * zx.q(arg2[0xa]) + zx.q(x10_151.d)
int32_t x11_137

if (x9_150 + x12_133 u< x9_150)
    x11_137 = x11_136 + 1
else
    x11_137 = x11_136

int32_t x9_152 = x9_151 + x12_134
uint32_t x12_135 = (x10_152 u>> 0x20).d
int64_t x10_153 = zx.q(arg3[5]) * zx.q(arg2[0xb]) + zx.q(x10_152.d)
int32_t x11_138

if (x9_151 + x12_134 u< x9_151)
    x11_138 = x11_137 + 1
else
    x11_138 = x11_137

int32_t x9_153 = x9_152 + x12_135
uint32_t x12_136 = (x10_153 u>> 0x20).d
int64_t x10_154 = zx.q(arg3[4]) * zx.q(arg2[0xc]) + zx.q(x10_153.d)
int32_t x11_139

if (x9_152 + x12_135 u< x9_152)
    x11_139 = x11_138 + 1
else
    x11_139 = x11_138

int32_t x9_154 = x9_153 + x12_136
uint32_t x12_137 = (x10_154 u>> 0x20).d
int64_t x10_155 = zx.q(arg3[3]) * zx.q(arg2[0xd]) + zx.q(x10_154.d)
int32_t x11_140

if (x9_153 + x12_136 u< x9_153)
    x11_140 = x11_139 + 1
else
    x11_140 = x11_139

int32_t x9_155 = x9_154 + x12_137
uint32_t x12_138 = (x10_155 u>> 0x20).d
int64_t x10_156 = zx.q(arg3[2]) * zx.q(arg2[0xe]) + zx.q(x10_155.d)
int32_t x11_141

if (x9_154 + x12_137 u< x9_154)
    x11_141 = x11_140 + 1
else
    x11_141 = x11_140

int32_t x9_156 = x9_155 + x12_138
uint32_t x12_139 = (x10_156 u>> 0x20).d
int64_t x10_157 = zx.q(arg3[1]) * zx.q(arg2[0xf]) + zx.q(x10_156.d)
int32_t x11_142

if (x9_155 + x12_138 u< x9_155)
    x11_142 = x11_141 + 1
else
    x11_142 = x11_141

int32_t x12_140 = x9_156 + x12_139
uint32_t x13_55 = (x10_157 u>> 0x20).d
arg1[0x10] = x10_157.d
int32_t x9_157

if (x9_156 + x12_139 u< x9_156)
    x9_157 = x11_142 + 1
else
    x9_157 = x11_142

int64_t x10_159 = zx.q(x12_140 + x13_55) + zx.q(arg3[0xf]) * zx.q(arg2[2])
int32_t x9_158

if (x12_140 + x13_55 u< x12_140)
    x9_158 = x9_157 + 1
else
    x9_158 = x9_157

uint32_t x19_28 = (x10_159 u>> 0x20).d
int64_t x10_160 = zx.q(arg3[0xe]) * zx.q(arg2[3]) + zx.q(x10_159.d)
int32_t x9_159 = x9_158 + x19_28
bool c_149 = x9_158 + x19_28 u< x9_158
uint32_t x11_145 = (x10_160 u>> 0x20).d
int64_t x10_161 = zx.q(arg3[0xd]) * zx.q(arg2[4]) + zx.q(x10_160.d)
int32_t x19_29

x19_29 = c_149 ? 2 : 1

int32_t x9_160 = x9_159 + x11_145
uint32_t x11_146 = (x10_161 u>> 0x20).d
int64_t x10_162 = zx.q(arg3[0xc]) * zx.q(arg2[5]) + zx.q(x10_161.d)
int32_t x12_144

if (x9_159 + x11_145 u>= x9_159)
    x12_144 = c_149 ? 1 : 0
else
    x12_144 = x19_29

int32_t x9_161 = x9_160 + x11_146
uint32_t x11_147 = (x10_162 u>> 0x20).d
int64_t x10_163 = zx.q(arg3[0xb]) * zx.q(arg2[6]) + zx.q(x10_162.d)
int32_t x12_145

if (x9_160 + x11_146 u< x9_160)
    x12_145 = x12_144 + 1
else
    x12_145 = x12_144

int32_t x9_162 = x9_161 + x11_147
uint32_t x11_148 = (x10_163 u>> 0x20).d
int64_t x10_164 = zx.q(arg3[0xa]) * zx.q(arg2[7]) + zx.q(x10_163.d)
int32_t x12_146

if (x9_161 + x11_147 u< x9_161)
    x12_146 = x12_145 + 1
else
    x12_146 = x12_145

int32_t x9_163 = x9_162 + x11_148
uint32_t x11_149 = (x10_164 u>> 0x20).d
int64_t x10_165 = zx.q(arg3[9]) * zx.q(arg2[8]) + zx.q(x10_164.d)
int32_t x12_147

if (x9_162 + x11_148 u< x9_162)
    x12_147 = x12_146 + 1
else
    x12_147 = x12_146

int32_t x9_164 = x9_163 + x11_149
uint32_t x11_150 = (x10_165 u>> 0x20).d
int64_t x10_166 = zx.q(arg3[8]) * zx.q(arg2[9]) + zx.q(x10_165.d)
int32_t x12_148

if (x9_163 + x11_149 u< x9_163)
    x12_148 = x12_147 + 1
else
    x12_148 = x12_147

int32_t x9_165 = x9_164 + x11_150
uint32_t x11_151 = (x10_166 u>> 0x20).d
int64_t x10_167 = zx.q(arg3[7]) * zx.q(arg2[0xa]) + zx.q(x10_166.d)
int32_t x12_149

if (x9_164 + x11_150 u< x9_164)
    x12_149 = x12_148 + 1
else
    x12_149 = x12_148

int32_t x9_166 = x9_165 + x11_151
uint32_t x11_152 = (x10_167 u>> 0x20).d
int64_t x10_168 = zx.q(arg3[6]) * zx.q(arg2[0xb]) + zx.q(x10_167.d)
int32_t x12_150

if (x9_165 + x11_151 u< x9_165)
    x12_150 = x12_149 + 1
else
    x12_150 = x12_149

int32_t x9_167 = x9_166 + x11_152
uint32_t x11_153 = (x10_168 u>> 0x20).d
int64_t x10_169 = zx.q(arg3[5]) * zx.q(arg2[0xc]) + zx.q(x10_168.d)
int32_t x12_151

if (x9_166 + x11_152 u< x9_166)
    x12_151 = x12_150 + 1
else
    x12_151 = x12_150

int32_t x9_168 = x9_167 + x11_153
uint32_t x11_154 = (x10_169 u>> 0x20).d
int64_t x10_170 = zx.q(arg3[4]) * zx.q(arg2[0xd]) + zx.q(x10_169.d)
int32_t x12_152

if (x9_167 + x11_153 u< x9_167)
    x12_152 = x12_151 + 1
else
    x12_152 = x12_151

int32_t x9_169 = x9_168 + x11_154
uint32_t x11_155 = (x10_170 u>> 0x20).d
int64_t x10_171 = zx.q(arg3[3]) * zx.q(arg2[0xe]) + zx.q(x10_170.d)
int32_t x12_153

if (x9_168 + x11_154 u< x9_168)
    x12_153 = x12_152 + 1
else
    x12_153 = x12_152

int32_t x9_170 = x9_169 + x11_155
uint32_t x11_156 = (x10_171 u>> 0x20).d
int64_t x10_172 = zx.q(arg3[2]) * zx.q(arg2[0xf]) + zx.q(x10_171.d)
int32_t x12_154

if (x9_169 + x11_155 u< x9_169)
    x12_154 = x12_153 + 1
else
    x12_154 = x12_153

int32_t x11_157 = x9_170 + x11_156
uint32_t x13_58 = (x10_172 u>> 0x20).d
arg1[0x11] = x10_172.d
int32_t x9_171

if (x9_170 + x11_156 u< x9_170)
    x9_171 = x12_154 + 1
else
    x9_171 = x12_154

int64_t x10_174 = zx.q(x11_157 + x13_58) + zx.q(arg3[0xf]) * zx.q(arg2[3])
int32_t x9_172

if (x11_157 + x13_58 u< x11_157)
    x9_172 = x9_171 + 1
else
    x9_172 = x9_171

uint32_t x19_32 = (x10_174 u>> 0x20).d
int64_t x10_175 = zx.q(arg3[0xe]) * zx.q(arg2[4]) + zx.q(x10_174.d)
int32_t x9_173 = x9_172 + x19_32
bool c_163 = x9_172 + x19_32 u< x9_172
uint32_t x13_61 = (x10_175 u>> 0x20).d
int64_t x10_176 = zx.q(arg3[0xd]) * zx.q(arg2[5]) + zx.q(x10_175.d)
int32_t x19_33

x19_33 = c_163 ? 2 : 1

int32_t x9_174 = x9_173 + x13_61
uint32_t x13_62 = (x10_176 u>> 0x20).d
int64_t x10_177 = zx.q(arg3[0xc]) * zx.q(arg2[6]) + zx.q(x10_176.d)
int32_t x14_48

if (x9_173 + x13_61 u>= x9_173)
    x14_48 = c_163 ? 1 : 0
else
    x14_48 = x19_33

int32_t x9_175 = x9_174 + x13_62
uint32_t x13_63 = (x10_177 u>> 0x20).d
int64_t x10_178 = zx.q(arg3[0xb]) * zx.q(arg2[7]) + zx.q(x10_177.d)
int32_t x14_49

if (x9_174 + x13_62 u< x9_174)
    x14_49 = x14_48 + 1
else
    x14_49 = x14_48

int32_t x9_176 = x9_175 + x13_63
uint32_t x13_64 = (x10_178 u>> 0x20).d
int64_t x10_179 = zx.q(arg3[0xa]) * zx.q(arg2[8]) + zx.q(x10_178.d)
int32_t x14_50

if (x9_175 + x13_63 u< x9_175)
    x14_50 = x14_49 + 1
else
    x14_50 = x14_49

int32_t x9_177 = x9_176 + x13_64
uint32_t x13_65 = (x10_179 u>> 0x20).d
int64_t x10_180 = zx.q(arg3[9]) * zx.q(arg2[9]) + zx.q(x10_179.d)
int32_t x14_51

if (x9_176 + x13_64 u< x9_176)
    x14_51 = x14_50 + 1
else
    x14_51 = x14_50

int32_t x9_178 = x9_177 + x13_65
uint32_t x13_66 = (x10_180 u>> 0x20).d
int64_t x10_181 = zx.q(arg3[8]) * zx.q(arg2[0xa]) + zx.q(x10_180.d)
int32_t x11_161

if (x9_177 + x13_65 u< x9_177)
    x11_161 = x14_51 + 1
else
    x11_161 = x14_51

int32_t x9_179 = x9_178 + x13_66
uint32_t x13_67 = (x10_181 u>> 0x20).d
int64_t x10_182 = zx.q(arg3[7]) * zx.q(arg2[0xb]) + zx.q(x10_181.d)
int32_t x11_162

if (x9_178 + x13_66 u< x9_178)
    x11_162 = x11_161 + 1
else
    x11_162 = x11_161

int32_t x9_180 = x9_179 + x13_67
uint32_t x12_158 = (x10_182 u>> 0x20).d
int64_t x10_183 = zx.q(arg3[6]) * zx.q(arg2[0xc]) + zx.q(x10_182.d)
int32_t x11_163

if (x9_179 + x13_67 u< x9_179)
    x11_163 = x11_162 + 1
else
    x11_163 = x11_162

int32_t x9_181 = x9_180 + x12_158
uint32_t x12_159 = (x10_183 u>> 0x20).d
int64_t x10_184 = zx.q(arg3[5]) * zx.q(arg2[0xd]) + zx.q(x10_183.d)
int32_t x11_164

if (x9_180 + x12_158 u< x9_180)
    x11_164 = x11_163 + 1
else
    x11_164 = x11_163

int32_t x9_182 = x9_181 + x12_159
uint32_t x12_160 = (x10_184 u>> 0x20).d
int64_t x10_185 = zx.q(arg3[4]) * zx.q(arg2[0xe]) + zx.q(x10_184.d)
int32_t x11_165

if (x9_181 + x12_159 u< x9_181)
    x11_165 = x11_164 + 1
else
    x11_165 = x11_164

int32_t x9_183 = x9_182 + x12_160
uint32_t x12_161 = (x10_185 u>> 0x20).d
int64_t x10_186 = zx.q(arg3[3]) * zx.q(arg2[0xf]) + zx.q(x10_185.d)
int32_t x11_166

if (x9_182 + x12_160 u< x9_182)
    x11_166 = x11_165 + 1
else
    x11_166 = x11_165

int32_t x12_162 = x9_183 + x12_161
uint32_t x13_68 = (x10_186 u>> 0x20).d
arg1[0x12] = x10_186.d
int32_t x9_184

if (x9_183 + x12_161 u< x9_183)
    x9_184 = x11_166 + 1
else
    x9_184 = x11_166

int64_t x10_188 = zx.q(x12_162 + x13_68) + zx.q(arg3[0xf]) * zx.q(arg2[4])
int32_t x9_185

if (x12_162 + x13_68 u< x12_162)
    x9_185 = x9_184 + 1
else
    x9_185 = x9_184

uint32_t x7_28 = (x10_188 u>> 0x20).d
int64_t x10_189 = zx.q(arg3[0xe]) * zx.q(arg2[5]) + zx.q(x10_188.d)
int32_t x9_186 = x9_185 + x7_28
bool c_176 = x9_185 + x7_28 u< x9_185
uint32_t x12_165 = (x10_189 u>> 0x20).d
int64_t x10_190 = zx.q(arg3[0xd]) * zx.q(arg2[6]) + zx.q(x10_189.d)
int32_t x7_29

x7_29 = c_176 ? 2 : 1

int32_t x9_187 = x9_186 + x12_165
uint32_t x12_166 = (x10_190 u>> 0x20).d
int64_t x10_191 = zx.q(arg3[0xc]) * zx.q(arg2[7]) + zx.q(x10_190.d)
int32_t x14_55

if (x9_186 + x12_165 u>= x9_186)
    x14_55 = c_176 ? 1 : 0
else
    x14_55 = x7_29

int32_t x9_188 = x9_187 + x12_166
uint32_t x12_167 = (x10_191 u>> 0x20).d
int64_t x10_192 = zx.q(arg3[0xb]) * zx.q(arg2[8]) + zx.q(x10_191.d)
int32_t x14_56

if (x9_187 + x12_166 u< x9_187)
    x14_56 = x14_55 + 1
else
    x14_56 = x14_55

int32_t x9_189 = x9_188 + x12_167
uint32_t x12_168 = (x10_192 u>> 0x20).d
int64_t x10_193 = zx.q(arg3[0xa]) * zx.q(arg2[9]) + zx.q(x10_192.d)
int32_t x14_57

if (x9_188 + x12_167 u< x9_188)
    x14_57 = x14_56 + 1
else
    x14_57 = x14_56

int32_t x9_190 = x9_189 + x12_168
uint32_t x12_169 = (x10_193 u>> 0x20).d
int64_t x10_194 = zx.q(arg3[9]) * zx.q(arg2[0xa]) + zx.q(x10_193.d)
int32_t x11_170

if (x9_189 + x12_168 u< x9_189)
    x11_170 = x14_57 + 1
else
    x11_170 = x14_57

int32_t x9_191 = x9_190 + x12_169
uint32_t x12_170 = (x10_194 u>> 0x20).d
int64_t x10_195 = zx.q(arg3[8]) * zx.q(arg2[0xb]) + zx.q(x10_194.d)
int32_t x11_171

if (x9_190 + x12_169 u< x9_190)
    x11_171 = x11_170 + 1
else
    x11_171 = x11_170

int32_t x9_192 = x9_191 + x12_170
uint32_t x12_171 = (x10_195 u>> 0x20).d
int64_t x10_196 = zx.q(arg3[7]) * zx.q(arg2[0xc]) + zx.q(x10_195.d)
int32_t x11_172

if (x9_191 + x12_170 u< x9_191)
    x11_172 = x11_171 + 1
else
    x11_172 = x11_171

int32_t x9_193 = x9_192 + x12_171
uint32_t x12_172 = (x10_196 u>> 0x20).d
int64_t x10_197 = zx.q(arg3[6]) * zx.q(arg2[0xd]) + zx.q(x10_196.d)
int32_t x11_173

if (x9_192 + x12_171 u< x9_192)
    x11_173 = x11_172 + 1
else
    x11_173 = x11_172

int32_t x9_194 = x9_193 + x12_172
uint32_t x12_173 = (x10_197 u>> 0x20).d
int64_t x10_198 = zx.q(arg3[5]) * zx.q(arg2[0xe]) + zx.q(x10_197.d)
int32_t x11_174

if (x9_193 + x12_172 u< x9_193)
    x11_174 = x11_173 + 1
else
    x11_174 = x11_173

int32_t x9_195 = x9_194 + x12_173
uint32_t x12_174 = (x10_198 u>> 0x20).d
int64_t x10_199 = zx.q(arg3[4]) * zx.q(arg2[0xf]) + zx.q(x10_198.d)
int32_t x11_175

if (x9_194 + x12_173 u< x9_194)
    x11_175 = x11_174 + 1
else
    x11_175 = x11_174

int32_t x12_175 = x9_195 + x12_174
uint32_t x13_72 = (x10_199 u>> 0x20).d
arg1[0x13] = x10_199.d
int32_t x9_196

if (x9_195 + x12_174 u< x9_195)
    x9_196 = x11_175 + 1
else
    x9_196 = x11_175

int64_t x10_201 = zx.q(x12_175 + x13_72) + zx.q(arg3[0xf]) * zx.q(arg2[5])
int32_t x9_197

if (x12_175 + x13_72 u< x12_175)
    x9_197 = x9_196 + 1
else
    x9_197 = x9_196

uint32_t x5_37 = (x10_201 u>> 0x20).d
int64_t x10_202 = zx.q(arg3[0xe]) * zx.q(arg2[6]) + zx.q(x10_201.d)
int32_t x9_198 = x9_197 + x5_37
bool c_188 = x9_197 + x5_37 u< x9_197
uint32_t x13_75 = (x10_202 u>> 0x20).d
int64_t x10_203 = zx.q(arg3[0xd]) * zx.q(arg2[7]) + zx.q(x10_202.d)
int32_t x5_38

x5_38 = c_188 ? 2 : 1

int32_t x9_199 = x9_198 + x13_75
uint32_t x13_76 = (x10_203 u>> 0x20).d
int64_t x10_204 = zx.q(arg3[0xc]) * zx.q(arg2[8]) + zx.q(x10_203.d)
int32_t x14_61

if (x9_198 + x13_75 u>= x9_198)
    x14_61 = c_188 ? 1 : 0
else
    x14_61 = x5_38

int32_t x9_200 = x9_199 + x13_76
uint32_t x13_77 = (x10_204 u>> 0x20).d
int64_t x10_205 = zx.q(arg3[0xb]) * zx.q(arg2[9]) + zx.q(x10_204.d)
int32_t x14_62

if (x9_199 + x13_76 u< x9_199)
    x14_62 = x14_61 + 1
else
    x14_62 = x14_61

int32_t x9_201 = x9_200 + x13_77
uint32_t x13_78 = (x10_205 u>> 0x20).d
int64_t x10_206 = zx.q(arg3[0xa]) * zx.q(arg2[0xa]) + zx.q(x10_205.d)
int32_t x14_63

if (x9_200 + x13_77 u< x9_200)
    x14_63 = x14_62 + 1
else
    x14_63 = x14_62

int32_t x9_202 = x9_201 + x13_78
uint32_t x13_79 = (x10_206 u>> 0x20).d
int64_t x10_207 = zx.q(arg3[9]) * zx.q(arg2[0xb]) + zx.q(x10_206.d)
int32_t x11_179

if (x9_201 + x13_78 u< x9_201)
    x11_179 = x14_63 + 1
else
    x11_179 = x14_63

int32_t x9_203 = x9_202 + x13_79
uint32_t x13_80 = (x10_207 u>> 0x20).d
int64_t x10_208 = zx.q(arg3[8]) * zx.q(arg2[0xc]) + zx.q(x10_207.d)
int32_t x11_180

if (x9_202 + x13_79 u< x9_202)
    x11_180 = x11_179 + 1
else
    x11_180 = x11_179

int32_t x9_204 = x9_203 + x13_80
uint32_t x12_179 = (x10_208 u>> 0x20).d
int64_t x10_209 = zx.q(arg3[7]) * zx.q(arg2[0xd]) + zx.q(x10_208.d)
int32_t x11_181

if (x9_203 + x13_80 u< x9_203)
    x11_181 = x11_180 + 1
else
    x11_181 = x11_180

int32_t x9_205 = x9_204 + x12_179
uint32_t x12_180 = (x10_209 u>> 0x20).d
int64_t x10_210 = zx.q(arg3[6]) * zx.q(arg2[0xe]) + zx.q(x10_209.d)
int32_t x11_182

if (x9_204 + x12_179 u< x9_204)
    x11_182 = x11_181 + 1
else
    x11_182 = x11_181

int32_t x9_206 = x9_205 + x12_180
uint32_t x12_181 = (x10_210 u>> 0x20).d
int64_t x10_211 = zx.q(arg3[5]) * zx.q(arg2[0xf]) + zx.q(x10_210.d)
int32_t x11_183

if (x9_205 + x12_180 u< x9_205)
    x11_183 = x11_182 + 1
else
    x11_183 = x11_182

int32_t x12_182 = x9_206 + x12_181
uint32_t x13_81 = (x10_211 u>> 0x20).d
arg1[0x14] = x10_211.d
int32_t x9_207

if (x9_206 + x12_181 u< x9_206)
    x9_207 = x11_183 + 1
else
    x9_207 = x11_183

int64_t x10_213 = zx.q(x12_182 + x13_81) + zx.q(arg3[0xf]) * zx.q(arg2[6])
int32_t x9_208

if (x12_182 + x13_81 u< x12_182)
    x9_208 = x9_207 + 1
else
    x9_208 = x9_207

uint32_t x4_42 = (x10_213 u>> 0x20).d
int64_t x10_214 = zx.q(arg3[0xe]) * zx.q(arg2[7]) + zx.q(x10_213.d)
int32_t x9_209 = x9_208 + x4_42
bool c_199 = x9_208 + x4_42 u< x9_208
uint32_t x12_185 = (x10_214 u>> 0x20).d
int64_t x10_215 = zx.q(arg3[0xd]) * zx.q(arg2[8]) + zx.q(x10_214.d)
int32_t x4_43

x4_43 = c_199 ? 2 : 1

int32_t x9_210 = x9_209 + x12_185
uint32_t x12_186 = (x10_215 u>> 0x20).d
int64_t x10_216 = zx.q(arg3[0xc]) * zx.q(arg2[9]) + zx.q(x10_215.d)
int32_t x14_67

if (x9_209 + x12_185 u>= x9_209)
    x14_67 = c_199 ? 1 : 0
else
    x14_67 = x4_43

int32_t x9_211 = x9_210 + x12_186
uint32_t x12_187 = (x10_216 u>> 0x20).d
int64_t x10_217 = zx.q(arg3[0xb]) * zx.q(arg2[0xa]) + zx.q(x10_216.d)
int32_t x14_68

if (x9_210 + x12_186 u< x9_210)
    x14_68 = x14_67 + 1
else
    x14_68 = x14_67

int32_t x9_212 = x9_211 + x12_187
uint32_t x12_188 = (x10_217 u>> 0x20).d
int64_t x10_218 = zx.q(arg3[0xa]) * zx.q(arg2[0xb]) + zx.q(x10_217.d)
int32_t x14_69

if (x9_211 + x12_187 u< x9_211)
    x14_69 = x14_68 + 1
else
    x14_69 = x14_68

int32_t x9_213 = x9_212 + x12_188
uint32_t x12_189 = (x10_218 u>> 0x20).d
int64_t x10_219 = zx.q(arg3[9]) * zx.q(arg2[0xc]) + zx.q(x10_218.d)
int32_t x11_187

if (x9_212 + x12_188 u< x9_212)
    x11_187 = x14_69 + 1
else
    x11_187 = x14_69

int32_t x9_214 = x9_213 + x12_189
uint32_t x12_190 = (x10_219 u>> 0x20).d
int64_t x10_220 = zx.q(arg3[8]) * zx.q(arg2[0xd]) + zx.q(x10_219.d)
int32_t x11_188

if (x9_213 + x12_189 u< x9_213)
    x11_188 = x11_187 + 1
else
    x11_188 = x11_187

int32_t x9_215 = x9_214 + x12_190
uint32_t x12_191 = (x10_220 u>> 0x20).d
int64_t x10_221 = zx.q(arg3[7]) * zx.q(arg2[0xe]) + zx.q(x10_220.d)
int32_t x11_189

if (x9_214 + x12_190 u< x9_214)
    x11_189 = x11_188 + 1
else
    x11_189 = x11_188

int32_t x9_216 = x9_215 + x12_191
uint32_t x12_192 = (x10_221 u>> 0x20).d
int64_t x10_222 = zx.q(arg3[6]) * zx.q(arg2[0xf]) + zx.q(x10_221.d)
int32_t x11_190

if (x9_215 + x12_191 u< x9_215)
    x11_190 = x11_189 + 1
else
    x11_190 = x11_189

int32_t x12_193 = x9_216 + x12_192
uint32_t x13_85 = (x10_222 u>> 0x20).d
arg1[0x15] = x10_222.d
int32_t x9_217

if (x9_216 + x12_192 u< x9_216)
    x9_217 = x11_190 + 1
else
    x9_217 = x11_190

int64_t x10_224 = zx.q(x12_193 + x13_85) + zx.q(arg3[0xf]) * zx.q(arg2[7])
int32_t x9_218

if (x12_193 + x13_85 u< x12_193)
    x9_218 = x9_217 + 1
else
    x9_218 = x9_217

uint32_t x3_48 = (x10_224 u>> 0x20).d
int64_t x10_225 = zx.q(arg3[0xe]) * zx.q(arg2[8]) + zx.q(x10_224.d)
int32_t x9_219 = x9_218 + x3_48
bool c_209 = x9_218 + x3_48 u< x9_218
uint32_t x13_88 = (x10_225 u>> 0x20).d
int64_t x10_226 = zx.q(arg3[0xd]) * zx.q(arg2[9]) + zx.q(x10_225.d)
int32_t x3_49

x3_49 = c_209 ? 2 : 1

int32_t x9_220 = x9_219 + x13_88
uint32_t x13_89 = (x10_226 u>> 0x20).d
int64_t x10_227 = zx.q(arg3[0xc]) * zx.q(arg2[0xa]) + zx.q(x10_226.d)
int32_t x14_73

if (x9_219 + x13_88 u>= x9_219)
    x14_73 = c_209 ? 1 : 0
else
    x14_73 = x3_49

int32_t x9_221 = x9_220 + x13_89
uint32_t x13_90 = (x10_227 u>> 0x20).d
int64_t x10_228 = zx.q(arg3[0xb]) * zx.q(arg2[0xb]) + zx.q(x10_227.d)
int32_t x14_74

if (x9_220 + x13_89 u< x9_220)
    x14_74 = x14_73 + 1
else
    x14_74 = x14_73

int32_t x9_222 = x9_221 + x13_90
uint32_t x13_91 = (x10_228 u>> 0x20).d
int64_t x10_229 = zx.q(arg3[0xa]) * zx.q(arg2[0xc]) + zx.q(x10_228.d)
int32_t x11_194

if (x9_221 + x13_90 u< x9_221)
    x11_194 = x14_74 + 1
else
    x11_194 = x14_74

int32_t x9_223 = x9_222 + x13_91
uint32_t x13_92 = (x10_229 u>> 0x20).d
int64_t x10_230 = zx.q(arg3[9]) * zx.q(arg2[0xd]) + zx.q(x10_229.d)
int32_t x11_195

if (x9_222 + x13_91 u< x9_222)
    x11_195 = x11_194 + 1
else
    x11_195 = x11_194

int32_t x9_224 = x9_223 + x13_92
uint32_t x12_197 = (x10_230 u>> 0x20).d
int64_t x10_231 = zx.q(arg3[8]) * zx.q(arg2[0xe]) + zx.q(x10_230.d)
int32_t x11_196

if (x9_223 + x13_92 u< x9_223)
    x11_196 = x11_195 + 1
else
    x11_196 = x11_195

int32_t x9_225 = x9_224 + x12_197
uint32_t x12_198 = (x10_231 u>> 0x20).d
int64_t x10_232 = zx.q(arg3[7]) * zx.q(arg2[0xf]) + zx.q(x10_231.d)
int32_t x11_197

if (x9_224 + x12_197 u< x9_224)
    x11_197 = x11_196 + 1
else
    x11_197 = x11_196

int32_t x12_199 = x9_225 + x12_198
uint32_t x13_93 = (x10_232 u>> 0x20).d
arg1[0x16] = x10_232.d
int32_t x9_226

if (x9_225 + x12_198 u< x9_225)
    x9_226 = x11_197 + 1
else
    x9_226 = x11_197

int64_t x10_234 = zx.q(x12_199 + x13_93) + zx.q(arg3[0xf]) * zx.q(arg2[8])
int32_t x9_227

if (x12_199 + x13_93 u< x12_199)
    x9_227 = x9_226 + 1
else
    x9_227 = x9_226

uint32_t x3_52 = (x10_234 u>> 0x20).d
int64_t x10_235 = zx.q(arg3[0xe]) * zx.q(arg2[9]) + zx.q(x10_234.d)
int32_t x9_228 = x9_227 + x3_52
bool c_218 = x9_227 + x3_52 u< x9_227
uint32_t x12_202 = (x10_235 u>> 0x20).d
int64_t x10_236 = zx.q(arg3[0xd]) * zx.q(arg2[0xa]) + zx.q(x10_235.d)
int32_t x3_53

x3_53 = c_218 ? 2 : 1

int32_t x9_229 = x9_228 + x12_202
uint32_t x12_203 = (x10_236 u>> 0x20).d
int64_t x10_237 = zx.q(arg3[0xc]) * zx.q(arg2[0xb]) + zx.q(x10_236.d)
int32_t x14_78

if (x9_228 + x12_202 u>= x9_228)
    x14_78 = c_218 ? 1 : 0
else
    x14_78 = x3_53

int32_t x9_230 = x9_229 + x12_203
uint32_t x12_204 = (x10_237 u>> 0x20).d
int64_t x10_238 = zx.q(arg3[0xb]) * zx.q(arg2[0xc]) + zx.q(x10_237.d)
int32_t x11_201

if (x9_229 + x12_203 u< x9_229)
    x11_201 = x14_78 + 1
else
    x11_201 = x14_78

int32_t x9_231 = x9_230 + x12_204
uint32_t x12_205 = (x10_238 u>> 0x20).d
int64_t x10_239 = zx.q(arg3[0xa]) * zx.q(arg2[0xd]) + zx.q(x10_238.d)
int32_t x11_202

if (x9_230 + x12_204 u< x9_230)
    x11_202 = x11_201 + 1
else
    x11_202 = x11_201

int32_t x9_232 = x9_231 + x12_205
uint32_t x12_206 = (x10_239 u>> 0x20).d
int64_t x10_240 = zx.q(arg3[9]) * zx.q(arg2[0xe]) + zx.q(x10_239.d)
int32_t x11_203

if (x9_231 + x12_205 u< x9_231)
    x11_203 = x11_202 + 1
else
    x11_203 = x11_202

int32_t x9_233 = x9_232 + x12_206
uint32_t x12_207 = (x10_240 u>> 0x20).d
int64_t x10_241 = zx.q(arg3[8]) * zx.q(arg2[0xf]) + zx.q(x10_240.d)
int32_t x11_204

if (x9_232 + x12_206 u< x9_232)
    x11_204 = x11_203 + 1
else
    x11_204 = x11_203

int32_t x9_234 = x9_233 + x12_207
uint32_t x12_208 = (x10_241 u>> 0x20).d
arg1[0x17] = x10_241.d
int32_t x10_242

if (x9_233 + x12_207 u< x9_233)
    x10_242 = x11_204 + 1
else
    x10_242 = x11_204

int32_t x10_243

if (x9_234 + x12_208 u< x9_234)
    x10_243 = x10_242 + 1
else
    x10_243 = x10_242

int64_t x9_236 = zx.q(x9_234 + x12_208) + zx.q(arg3[0xf]) * zx.q(arg2[9])
uint32_t x17_52 = (x9_236 u>> 0x20).d
int64_t x9_237 = zx.q(arg3[0xe]) * zx.q(arg2[0xa]) + zx.q(x9_236.d)
int32_t x10_244 = x10_243 + x17_52
bool c_226 = x10_243 + x17_52 u< x10_243
uint32_t x13_99 = (x9_237 u>> 0x20).d
int64_t x9_238 = zx.q(arg3[0xd]) * zx.q(arg2[0xb]) + zx.q(x9_237.d)
int32_t x17_53

x17_53 = c_226 ? 2 : 1

int32_t x10_245 = x10_244 + x13_99
uint32_t x13_100 = (x9_238 u>> 0x20).d
int64_t x9_239 = zx.q(arg3[0xc]) * zx.q(arg2[0xc]) + zx.q(x9_238.d)
int32_t x15_65

if (x10_244 + x13_99 u>= x10_244)
    x15_65 = c_226 ? 1 : 0
else
    x15_65 = x17_53

int32_t x10_246 = x10_245 + x13_100
uint32_t x13_101 = (x9_239 u>> 0x20).d
int64_t x9_240 = zx.q(arg3[0xb]) * zx.q(arg2[0xd]) + zx.q(x9_239.d)
int32_t x11_208

if (x10_245 + x13_100 u< x10_245)
    x11_208 = x15_65 + 1
else
    x11_208 = x15_65

int32_t x10_247 = x10_246 + x13_101
uint32_t x13_102 = (x9_240 u>> 0x20).d
int64_t x9_241 = zx.q(arg3[0xa]) * zx.q(arg2[0xe]) + zx.q(x9_240.d)
int32_t x11_209

if (x10_246 + x13_101 u< x10_246)
    x11_209 = x11_208 + 1
else
    x11_209 = x11_208

int32_t x10_248 = x10_247 + x13_102
uint32_t x12_212 = (x9_241 u>> 0x20).d
int64_t x9_242 = zx.q(arg3[9]) * zx.q(arg2[0xf]) + zx.q(x9_241.d)
int32_t x11_210

if (x10_247 + x13_102 u< x10_247)
    x11_210 = x11_209 + 1
else
    x11_210 = x11_209

int32_t x10_249 = x10_248 + x12_212
uint32_t x12_213 = (x9_242 u>> 0x20).d
arg1[0x18] = x9_242.d
int32_t x9_243

if (x10_248 + x12_212 u< x10_248)
    x9_243 = x11_210 + 1
else
    x9_243 = x11_210

int32_t x9_244

if (x10_249 + x12_213 u< x10_249)
    x9_244 = x9_243 + 1
else
    x9_244 = x9_243

int64_t x10_251 = zx.q(x10_249 + x12_213) + zx.q(arg3[0xf]) * zx.q(arg2[0xa])
uint32_t x15_68 = (x10_251 u>> 0x20).d
int64_t x10_252 = zx.q(arg3[0xe]) * zx.q(arg2[0xb]) + zx.q(x10_251.d)
int32_t x9_245 = x9_244 + x15_68
bool c_233 = x9_244 + x15_68 u< x9_244
uint32_t x12_216 = (x10_252 u>> 0x20).d
int64_t x10_253 = zx.q(arg3[0xd]) * zx.q(arg2[0xc]) + zx.q(x10_252.d)
int32_t x15_69

x15_69 = c_233 ? 2 : 1

int32_t x9_246 = x9_245 + x12_216
uint32_t x12_217 = (x10_253 u>> 0x20).d
int64_t x10_254 = zx.q(arg3[0xc]) * zx.q(arg2[0xd]) + zx.q(x10_253.d)
int32_t x14_85

if (x9_245 + x12_216 u>= x9_245)
    x14_85 = c_233 ? 1 : 0
else
    x14_85 = x15_69

int32_t x9_247 = x9_246 + x12_217
uint32_t x12_218 = (x10_254 u>> 0x20).d
int64_t x10_255 = zx.q(arg3[0xb]) * zx.q(arg2[0xe]) + zx.q(x10_254.d)
int32_t x11_214

if (x9_246 + x12_217 u< x9_246)
    x11_214 = x14_85 + 1
else
    x11_214 = x14_85

int32_t x9_248 = x9_247 + x12_218
uint32_t x12_219 = (x10_255 u>> 0x20).d
int64_t x10_256 = zx.q(arg3[0xa]) * zx.q(arg2[0xf]) + zx.q(x10_255.d)
int32_t x11_215

if (x9_247 + x12_218 u< x9_247)
    x11_215 = x11_214 + 1
else
    x11_215 = x11_214

int32_t x9_249 = x9_248 + x12_219
uint32_t x12_220 = (x10_256 u>> 0x20).d
arg1[0x19] = x10_256.d
int32_t x10_257

if (x9_248 + x12_219 u< x9_248)
    x10_257 = x11_215 + 1
else
    x10_257 = x11_215

int32_t x10_258

if (x9_249 + x12_220 u< x9_249)
    x10_258 = x10_257 + 1
else
    x10_258 = x10_257

int64_t x9_251 = zx.q(x9_249 + x12_220) + zx.q(arg3[0xf]) * zx.q(arg2[0xb])
uint32_t x14_88 = (x9_251 u>> 0x20).d
int64_t x9_252 = zx.q(arg3[0xe]) * zx.q(arg2[0xc]) + zx.q(x9_251.d)
int32_t x10_259 = x10_258 + x14_88
bool c_239 = x10_258 + x14_88 u< x10_258
uint32_t x12_223 = (x9_252 u>> 0x20).d
int64_t x9_253 = zx.q(arg3[0xd]) * zx.q(arg2[0xd]) + zx.q(x9_252.d)
int32_t x15_72

x15_72 = c_239 ? 2 : 1

int32_t x10_260 = x10_259 + x12_223
uint32_t x12_224 = (x9_253 u>> 0x20).d
int64_t x9_254 = zx.q(arg3[0xc]) * zx.q(arg2[0xe]) + zx.q(x9_253.d)
int32_t x13_109

if (x10_259 + x12_223 u>= x10_259)
    x13_109 = c_239 ? 1 : 0
else
    x13_109 = x15_72

int32_t x10_261 = x10_260 + x12_224
uint32_t x12_225 = (x9_254 u>> 0x20).d
int64_t x9_255 = zx.q(arg3[0xb]) * zx.q(arg2[0xf]) + zx.q(x9_254.d)
int32_t x11_219

if (x10_260 + x12_224 u< x10_260)
    x11_219 = x13_109 + 1
else
    x11_219 = x13_109

int32_t x10_262 = x10_261 + x12_225
uint32_t x12_226 = (x9_255 u>> 0x20).d
arg1[0x1a] = x9_255.d
int32_t x9_256

if (x10_261 + x12_225 u< x10_261)
    x9_256 = x11_219 + 1
else
    x9_256 = x11_219

int32_t x9_257

if (x10_262 + x12_226 u< x10_262)
    x9_257 = x9_256 + 1
else
    x9_257 = x9_256

int64_t x10_264 = zx.q(x10_262 + x12_226) + zx.q(arg3[0xf]) * zx.q(arg2[0xc])
uint32_t x14_91 = (x10_264 u>> 0x20).d
int64_t x10_265 = zx.q(arg3[0xe]) * zx.q(arg2[0xd]) + zx.q(x10_264.d)
int32_t x9_258 = x9_257 + x14_91
bool c_244 = x9_257 + x14_91 u< x9_257
uint32_t x12_229 = (x10_265 u>> 0x20).d
int64_t x10_266 = zx.q(arg3[0xd]) * zx.q(arg2[0xe]) + zx.q(x10_265.d)
int32_t x14_92

x14_92 = c_244 ? 2 : 1

int32_t x9_259 = x9_258 + x12_229
uint32_t x12_230 = (x10_266 u>> 0x20).d
int64_t x10_267 = zx.q(arg3[0xc]) * zx.q(arg2[0xf]) + zx.q(x10_266.d)
int32_t x11_224

if (x9_258 + x12_229 u>= x9_258)
    x11_224 = c_244 ? 1 : 0
else
    x11_224 = x14_92

int32_t x9_260 = x9_259 + x12_230
uint32_t x12_231 = (x10_267 u>> 0x20).d
arg1[0x1b] = x10_267.d
int32_t x10_268

if (x9_259 + x12_230 u< x9_259)
    x10_268 = x11_224 + 1
else
    x10_268 = x11_224

int32_t x10_269

if (x9_260 + x12_231 u< x9_260)
    x10_269 = x10_268 + 1
else
    x10_269 = x10_268

int64_t x9_262 = zx.q(x9_260 + x12_231) + zx.q(arg3[0xf]) * zx.q(arg2[0xd])
uint32_t x13_114 = (x9_262 u>> 0x20).d
int64_t x9_263 = zx.q(arg3[0xe]) * zx.q(arg2[0xe]) + zx.q(x9_262.d)
int32_t x10_270 = x10_269 + x13_114
bool c_248 = x10_269 + x13_114 u< x10_269
uint32_t x11_227 = (x9_263 u>> 0x20).d
int64_t x9_264 = zx.q(arg3[0xd]) * zx.q(arg2[0xf]) + zx.q(x9_263.d)
int32_t x13_115

x13_115 = c_248 ? 2 : 1

int32_t x10_271 = x10_270 + x11_227
arg1[0x1c] = x9_264.d
uint32_t x11_228 = (x9_264 u>> 0x20).d
int32_t x9_265

if (x10_270 + x11_227 u>= x10_270)
    x9_265 = c_248 ? 1 : 0
else
    x9_265 = x13_115

int32_t x9_266

if (x10_271 + x11_228 u< x10_271)
    x9_266 = x9_265 + 1
else
    x9_266 = x9_265

int64_t x10_273 = zx.q(x10_271 + x11_228) + zx.q(arg3[0xf]) * zx.q(arg2[0xe])
uint32_t x12_236 = (x10_273 u>> 0x20).d
int64_t x10_274 = zx.q(arg3[0xe]) * zx.q(arg2[0xf]) + zx.q(x10_273.d)
arg1[0x1d] = x10_274.d
int32_t x9_267 = x9_266 + x12_236
bool c_251 = x9_266 + x12_236 u< x9_266
uint32_t x11_230 = (x10_274 u>> 0x20).d
int32_t x8_1

x8_1 = c_251 ? 2 : 1

int64_t x9_269 = zx.q(x9_267 + x11_230) + zx.q(arg3[0xf]) * zx.q(arg2[0xf])
int32_t x8_2

if (x9_267 + x11_230 u>= x9_267)
    x8_2 = c_251 ? 1 : 0
else
    x8_2 = x8_1

arg1[0x1e] = x9_269.d
arg1[0x1f] = x8_2 + (x9_269 u>> 0x20).d
