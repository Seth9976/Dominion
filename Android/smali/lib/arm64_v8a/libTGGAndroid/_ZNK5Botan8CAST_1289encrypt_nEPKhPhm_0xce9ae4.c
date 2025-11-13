// 函数: _ZNK5Botan8CAST_1289encrypt_nEPKhPhm
// 地址: 0xce9ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x12 = *(arg1 + 0x20)

if (x12 == *(arg1 + 0x28))
    uint8_t* x0_55
    uint8_t* x1_33
    uint64_t x2
    x0_55, x1_33, x2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::CAST_128::decrypt_n(x0_55, x1_33, x2) __tailcall

int64_t entry_x3
int64_t x13 = entry_x3 - 2

if (entry_x3 u>= 2)
    while (true)
        arg2 = &arg2[0x10]
        entry_x3 = x13
        int32_t x16_1 = *(arg2 - 0x10)
        int32_t x17_1 = *(arg2 - 8)
        int32_t x4_1 = *(arg2 - 4)
        int32_t* x13_1 = *(arg1 + 8)
        uint32_t x5_1 = zx.d(*x12)
        int32_t temp0_1 = _byteswap(*(arg2 - 0xc))
        int32_t temp0_2 = _byteswap(x4_1)
        int32_t x4_2 = *x13_1
        int32_t x7_1 = x13_1[1]
        int32_t x6_1 = neg.d(x5_1)
        int32_t temp0_3 = _byteswap(x16_1)
        int32_t x19_1 = x4_2 + temp0_1
        int32_t x4_3 = x4_2 + temp0_2
        int32_t x6_3
        
        if (x5_1 == 0)
            x6_3 = x19_1
        else
            x6_3 = x19_1 u>> x6_1 | x19_1 << x5_1
        
        int32_t x4_4
        
        if (x5_1 == 0)
            x4_4 = x4_3
        else
            x4_4 = x4_3 u>> x6_1 | x4_3 << x5_1
        
        int32_t x5_7 = (*(&data_84eb80 + ((zx.q(x6_3 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x6_3 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x6_3 u>> 8) & 0xff) << 2))
        uint32_t x20_5 = zx.d(x12[1])
        int32_t x19_6 = (*(&data_84eb80 + ((zx.q(x4_4 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_4 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_4 u>> 8) & 0xff) << 2))
        int32_t x16_3 = (x5_7 + *(&data_84f380 + ((zx.q(x6_3) & 0xff) << 2))) ^ temp0_3
        int32_t x6_6 = neg.d(x20_5)
        int32_t x17_3 = (x19_6 + *(&data_84f380 + ((zx.q(x4_4) & 0xff) << 2))) ^ _byteswap(x17_1)
        int32_t x4_8 = x7_1 ^ x16_3
        int32_t x5_9 = x17_3 ^ x7_1
        int32_t x4_9
        
        if (x20_5 == 0)
            x4_9 = x4_8
        else
            x4_9 = x4_8 u>> x6_6 | x4_8 << x20_5
        
        int32_t x5_10
        
        if (x20_5 == 0)
            x5_10 = x5_9
        else
            x5_10 = x5_9 u>> x6_6 | x5_9 << x20_5
        
        uint32_t x21_5 = zx.d(x12[2])
        int32_t x14_3 = *(&data_84e780 + (zx.q(x4_9 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x4_9 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x4_9 u>> 8) & 0xff) << 2))
        int32_t x4_12 = x13_1[2]
        int32_t x6_12 = x13_1[3]
        int32_t x5_13 = *(&data_84e780 + (zx.q(x5_10 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x5_10 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x5_10 u>> 8) & 0xff) << 2))
        int32_t x14_4 = *(&data_84f380 + ((zx.q(x4_9) & 0xff) << 2)) ^ temp0_1 ^ x14_3
        int32_t x19_10 = neg.d(x21_5)
        int32_t x15_3 = *(&data_84f380 + ((zx.q(x5_10) & 0xff) << 2)) ^ temp0_2 ^ x5_13
        int32_t x5_14 = x4_12 - x14_4
        int32_t x4_13 = x4_12 - x15_3
        int32_t x5_15
        
        if (x21_5 == 0)
            x5_15 = x5_14
        else
            x5_15 = x5_14 u>> x19_10 | x5_14 << x21_5
        
        int32_t x4_14
        
        if (x21_5 == 0)
            x4_14 = x4_13
        else
            x4_14 = x4_13 u>> x19_10 | x4_13 << x21_5
        
        int32_t x7_14 = (*(&data_84eb80 + ((zx.q(x5_15 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_15 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_15 u>> 8) & 0xff) << 2))
        uint32_t x19_17 = zx.d(x12[3])
        int32_t x20_16 = (*(&data_84eb80 + ((zx.q(x4_14 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_14 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_14 u>> 8) & 0xff) << 2))
        int32_t x16_4 = (x7_14 - *(&data_84f380 + ((zx.q(x5_15) & 0xff) << 2))) ^ x16_3
        int32_t x7_15 = neg.d(x19_17)
        int32_t x17_4 = (x20_16 - *(&data_84f380 + ((zx.q(x4_14) & 0xff) << 2))) ^ x17_3
        int32_t x4_18 = x6_12 + x16_4
        int32_t x5_19 = x17_4 + x6_12
        int32_t x4_19
        
        if (x19_17 == 0)
            x4_19 = x4_18
        else
            x4_19 = x4_18 u>> x7_15 | x4_18 << x19_17
        
        int32_t x5_20
        
        if (x19_17 == 0)
            x5_20 = x5_19
        else
            x5_20 = x5_19 u>> x7_15 | x5_19 << x19_17
        
        int32_t x6_18 = (*(&data_84eb80 + ((zx.q(x4_19 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_19 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_19 u>> 8) & 0xff) << 2))
        uint32_t x21_11 = zx.d(x12[4])
        int32_t x7_24 = (*(&data_84eb80 + ((zx.q(x5_20 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x5_20 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x5_20 u>> 8) & 0xff) << 2))
        int32_t x6_19 = x13_1[4]
        int32_t x19_22 = x13_1[5]
        int32_t x14_5 = (x6_18 + *(&data_84f380 + ((zx.q(x4_19) & 0xff) << 2))) ^ x14_4
        int32_t x20_20 = neg.d(x21_11)
        int32_t x15_4 = (x7_24 + *(&data_84f380 + ((zx.q(x5_20) & 0xff) << 2))) ^ x15_3
        int32_t x4_23 = x6_19 ^ x14_5
        int32_t x5_24 = x15_4 ^ x6_19
        int32_t x4_24
        
        if (x21_11 == 0)
            x4_24 = x4_23
        else
            x4_24 = x4_23 u>> x20_20 | x4_23 << x21_11
        
        int32_t x5_25
        
        if (x21_11 == 0)
            x5_25 = x5_24
        else
            x5_25 = x5_24 u>> x20_20 | x5_24 << x21_11
        
        uint32_t x21_15 = zx.d(x12[5])
        int32_t x4_27 = *(&data_84e780 + (zx.q(x4_24 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x4_24 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x4_24 u>> 8) & 0xff) << 2))
        int32_t x5_28 = *(&data_84e780 + (zx.q(x5_25 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x5_25 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x5_25 u>> 8) & 0xff) << 2))
        int32_t x16_6 = *(&data_84f380 + ((zx.q(x4_24) & 0xff) << 2)) ^ x16_4 ^ x4_27
        int32_t x6_25 = neg.d(x21_15)
        int32_t x17_6 = *(&data_84f380 + ((zx.q(x5_25) & 0xff) << 2)) ^ x17_4 ^ x5_28
        int32_t x4_28 = x19_22 - x16_6
        int32_t x5_29 = x19_22 - x17_6
        int32_t x4_29
        
        if (x21_15 == 0)
            x4_29 = x4_28
        else
            x4_29 = x4_28 u>> x6_25 | x4_28 << x21_15
        
        int32_t x5_30
        
        if (x21_15 == 0)
            x5_30 = x5_29
        else
            x5_30 = x5_29 u>> x6_25 | x5_29 << x21_15
        
        int32_t x6_31 = (*(&data_84eb80 + ((zx.q(x4_29 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_29 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_29 u>> 8) & 0xff) << 2))
        uint32_t x20_26 = zx.d(x12[6])
        int32_t x7_40 = (*(&data_84eb80 + ((zx.q(x5_30 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_30 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_30 u>> 8) & 0xff) << 2))
        int32_t x6_32 = x13_1[6]
        int32_t x19_27 = x13_1[7]
        int32_t x4_33 = (x6_31 - *(&data_84f380 + ((zx.q(x4_29) & 0xff) << 2))) ^ x14_5
        int32_t x21_19 = neg.d(x20_26)
        int32_t x5_34 = (x7_40 - *(&data_84f380 + ((zx.q(x5_30) & 0xff) << 2))) ^ x15_4
        int32_t x14_6 = x6_32 + x4_33
        int32_t x15_5 = x5_34 + x6_32
        int32_t x14_7
        
        if (x20_26 == 0)
            x14_7 = x14_6
        else
            x14_7 = x14_6 u>> x21_19 | x14_6 << x20_26
        
        int32_t x15_6
        
        if (x20_26 == 0)
            x15_6 = x15_5
        else
            x15_6 = x15_5 u>> x21_19 | x15_5 << x20_26
        
        int32_t x6_38 = (*(&data_84eb80 + ((zx.q(x14_7 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x14_7 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x14_7 u>> 8) & 0xff) << 2))
        uint32_t x7_47 = zx.d(x12[7])
        int32_t x20_31 = (*(&data_84eb80 + ((zx.q(x15_6 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x15_6 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x15_6 u>> 8) & 0xff) << 2))
        int32_t x14_11 = (x6_38 + *(&data_84f380 + ((zx.q(x14_7) & 0xff) << 2))) ^ x16_6
        int32_t x6_39 = neg.d(x7_47)
        int32_t x15_10 = (x20_31 + *(&data_84f380 + ((zx.q(x15_6) & 0xff) << 2))) ^ x17_6
        int32_t x16_7 = x19_27 ^ x14_11
        int32_t x17_7 = x15_10 ^ x19_27
        int32_t x16_8
        
        if (x7_47 == 0)
            x16_8 = x16_7
        else
            x16_8 = x16_7 u>> x6_39 | x16_7 << x7_47
        
        int32_t x17_8
        
        if (x7_47 == 0)
            x17_8 = x17_7
        else
            x17_8 = x17_7 u>> x6_39 | x17_7 << x7_47
        
        uint32_t x21_25 = zx.d(x12[8])
        int32_t x16_11 = *(&data_84e780 + (zx.q(x16_8 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x16_8 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x16_8 u>> 8) & 0xff) << 2))
        int32_t x6_45 = x13_1[8]
        int32_t x20_37 = x13_1[9]
        int32_t x17_11 = *(&data_84e780 + (zx.q(x17_8 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x17_8 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x17_8 u>> 8) & 0xff) << 2))
        int32_t x16_12 = *(&data_84f380 + ((zx.q(x16_8) & 0xff) << 2)) ^ x4_33 ^ x16_11
        int32_t x19_32 = neg.d(x21_25)
        int32_t x17_12 = *(&data_84f380 + ((zx.q(x17_8) & 0xff) << 2)) ^ x5_34 ^ x17_11
        int32_t x4_35 = x6_45 - x16_12
        int32_t x5_36 = x6_45 - x17_12
        int32_t x4_36
        
        if (x21_25 == 0)
            x4_36 = x4_35
        else
            x4_36 = x4_35 u>> x19_32 | x4_35 << x21_25
        
        int32_t x5_37
        
        if (x21_25 == 0)
            x5_37 = x5_36
        else
            x5_37 = x5_36 u>> x19_32 | x5_36 << x21_25
        
        int32_t x6_51 = (*(&data_84eb80 + ((zx.q(x4_36 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_36 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_36 u>> 8) & 0xff) << 2))
        uint32_t x7_60 = zx.d(x12[9])
        int32_t x19_37 = (*(&data_84eb80 + ((zx.q(x5_37 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_37 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_37 u>> 8) & 0xff) << 2))
        int32_t x4_40 = (x6_51 - *(&data_84f380 + ((zx.q(x4_36) & 0xff) << 2))) ^ x14_11
        int32_t x6_52 = neg.d(x7_60)
        int32_t x5_41 = (x19_37 - *(&data_84f380 + ((zx.q(x5_37) & 0xff) << 2))) ^ x15_10
        int32_t x14_12 = x20_37 + x4_40
        int32_t x15_11 = x5_41 + x20_37
        int32_t x14_13
        
        if (x7_60 == 0)
            x14_13 = x14_12
        else
            x14_13 = x14_12 u>> x6_52 | x14_12 << x7_60
        
        int32_t x15_12
        
        if (x7_60 == 0)
            x15_12 = x15_11
        else
            x15_12 = x15_11 u>> x6_52 | x15_11 << x7_60
        
        int32_t x6_58 = (*(&data_84eb80 + ((zx.q(x14_13 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x14_13 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x14_13 u>> 8) & 0xff) << 2))
        uint32_t x21_31 = zx.d(x12[0xa])
        int32_t x7_68 = (*(&data_84eb80 + ((zx.q(x15_12 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x15_12 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x15_12 u>> 8) & 0xff) << 2))
        int32_t x6_59 = x13_1[0xa]
        int32_t x19_43 = x13_1[0xb]
        int32_t x14_17 = (x6_58 + *(&data_84f380 + ((zx.q(x14_13) & 0xff) << 2))) ^ x16_12
        int32_t x20_41 = neg.d(x21_31)
        int32_t x15_16 = (x7_68 + *(&data_84f380 + ((zx.q(x15_12) & 0xff) << 2))) ^ x17_12
        int32_t x16_13 = x6_59 ^ x14_17
        int32_t x17_13 = x15_16 ^ x6_59
        int32_t x16_14
        
        if (x21_31 == 0)
            x16_14 = x16_13
        else
            x16_14 = x16_13 u>> x20_41 | x16_13 << x21_31
        
        int32_t x17_14
        
        if (x21_31 == 0)
            x17_14 = x17_13
        else
            x17_14 = x17_13 u>> x20_41 | x17_13 << x21_31
        
        uint32_t x21_35 = zx.d(x12[0xb])
        int32_t x16_17 = *(&data_84e780 + (zx.q(x16_14 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x16_14 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x16_14 u>> 8) & 0xff) << 2))
        int32_t x17_17 = *(&data_84e780 + (zx.q(x17_14 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x17_14 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x17_14 u>> 8) & 0xff) << 2))
        int32_t x4_42 = *(&data_84f380 + ((zx.q(x16_14) & 0xff) << 2)) ^ x4_40 ^ x16_17
        int32_t x6_65 = neg.d(x21_35)
        int32_t x17_18 = *(&data_84f380 + ((zx.q(x17_14) & 0xff) << 2)) ^ x5_41 ^ x17_17
        int32_t x16_18 = x19_43 - x4_42
        int32_t x5_43 = x19_43 - x17_18
        int32_t x16_19
        
        if (x21_35 == 0)
            x16_19 = x16_18
        else
            x16_19 = x16_18 u>> x6_65 | x16_18 << x21_35
        
        int32_t x5_44
        
        if (x21_35 == 0)
            x5_44 = x5_43
        else
            x5_44 = x5_43 u>> x6_65 | x5_43 << x21_35
        
        int32_t x6_71 = (*(&data_84eb80 + ((zx.q(x16_19 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x16_19 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x16_19 u>> 8) & 0xff) << 2))
        uint32_t x20_47 = zx.d(x12[0xc])
        int32_t x7_84 = (*(&data_84eb80 + ((zx.q(x5_44 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_44 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_44 u>> 8) & 0xff) << 2))
        int32_t x6_72 = x13_1[0xc]
        int32_t x19_48 = x13_1[0xd]
        int32_t x7_85 = (x6_71 - *(&data_84f380 + ((zx.q(x16_19) & 0xff) << 2))) ^ x14_17
        int32_t x21_39 = neg.d(x20_47)
        int32_t x16_23 = (x7_84 - *(&data_84f380 + ((zx.q(x5_44) & 0xff) << 2))) ^ x15_16
        int32_t x14_18 = x6_72 + x7_85
        int32_t x15_17 = x16_23 + x6_72
        int32_t x14_19
        
        if (x20_47 == 0)
            x14_19 = x14_18
        else
            x14_19 = x14_18 u>> x21_39 | x14_18 << x20_47
        
        int32_t x15_18
        
        if (x20_47 == 0)
            x15_18 = x15_17
        else
            x15_18 = x15_17 u>> x21_39 | x15_17 << x20_47
        
        int32_t x5_53 = (*(&data_84eb80 + ((zx.q(x14_19 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x14_19 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x14_19 u>> 8) & 0xff) << 2))
        uint32_t x21_43 = zx.d(x12[0xd])
        int32_t x6_81 = (*(&data_84eb80 + ((zx.q(x15_18 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x15_18 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x15_18 u>> 8) & 0xff) << 2))
        int32_t x14_23 = (x5_53 + *(&data_84f380 + ((zx.q(x14_19) & 0xff) << 2))) ^ x4_42
        int32_t x15_22 = (x6_81 + *(&data_84f380 + ((zx.q(x15_18) & 0xff) << 2))) ^ x17_18
        int32_t x20_52 = neg.d(x21_43)
        int32_t x17_19 = x19_48 ^ x14_23
        int32_t x4_43 = x15_22 ^ x19_48
        int32_t x17_20
        
        if (x21_43 == 0)
            x17_20 = x17_19
        else
            x17_20 = x17_19 u>> x20_52 | x17_19 << x21_43
        
        int32_t x4_44
        
        if (x21_43 == 0)
            x4_44 = x4_43
        else
            x4_44 = x4_43 u>> x20_52 | x4_43 << x21_43
        
        uint32_t x7_86 = zx.d(x12[0xe])
        int32_t x17_23 = *(&data_84e780 + (zx.q(x17_20 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x17_20 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x17_20 u>> 8) & 0xff) << 2))
        int32_t x5_59 = x13_1[0xe]
        int32_t x13_2 = x13_1[0xf]
        int32_t x4_47 = *(&data_84e780 + (zx.q(x4_44 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x4_44 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x4_44 u>> 8) & 0xff) << 2))
        int32_t x17_24 = *(&data_84f380 + ((zx.q(x17_20) & 0xff) << 2)) ^ x7_85 ^ x17_23
        int32_t x20_58 = neg.d(x7_86)
        int32_t x16_25 = *(&data_84f380 + ((zx.q(x4_44) & 0xff) << 2)) ^ x16_23 ^ x4_47
        int32_t x4_48 = x5_59 - x17_24
        int32_t x5_60 = x5_59 - x16_25
        int32_t x4_49
        
        if (x7_86 == 0)
            x4_49 = x4_48
        else
            x4_49 = x4_48 u>> x20_58 | x4_48 << x7_86
        
        int32_t x5_61
        
        if (x7_86 == 0)
            x5_61 = x5_60
        else
            x5_61 = x5_60 u>> x20_58 | x5_60 << x7_86
        
        int32_t x6_92 = (*(&data_84eb80 + ((zx.q(x4_49 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_49 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_49 u>> 8) & 0xff) << 2))
        uint32_t x12_1 = zx.d(x12[0xf])
        int32_t x7_95 = (*(&data_84eb80 + ((zx.q(x5_61 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_61 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_61 u>> 8) & 0xff) << 2))
        int32_t x14_24 = (x6_92 - *(&data_84f380 + ((zx.q(x4_49) & 0xff) << 2))) ^ x14_23
        int32_t x20_62 = neg.d(x12_1)
        int32_t x4_53 = x13_2 + x14_24
        int32_t x15_23 = (x7_95 - *(&data_84f380 + ((zx.q(x5_61) & 0xff) << 2))) ^ x15_22
        int32_t x4_54
        
        if (x12_1 == 0)
            x4_54 = x4_53
        else
            x4_54 = x4_53 u>> x20_62 | x4_53 << x12_1
        
        int32_t x13_3 = x15_23 + x13_2
        int32_t x12_4
        
        if (x12_1 == 0)
            x12_4 = x13_3
        else
            x12_4 = x13_3 u>> x20_62 | x13_3 << x12_1
        
        int32_t x5_70 = (*(&data_84eb80 + ((zx.q(x4_54 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_54 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_54 u>> 8) & 0xff) << 2))
        int32_t x6_98 = (*(&data_84eb80 + ((zx.q(x12_4 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x12_4 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x12_4 u>> 8) & 0xff) << 2))
        int32_t x17_25 = (x5_70 + *(&data_84f380 + ((zx.q(x4_54) & 0xff) << 2))) ^ x17_24
        int32_t x12_8 = (x6_98 + *(&data_84f380 + ((zx.q(x12_4) & 0xff) << 2))) ^ x16_25
        arg3 += 0x10
        int32_t temp0_5 = _byteswap(x14_24)
        int32_t temp0_6 = _byteswap(x15_23)
        x13 = entry_x3 - 2
        int32_t temp0_7 = _byteswap(x17_25)
        int32_t temp0_8 = _byteswap(x12_8)
        *(arg3 - 0x10) = temp0_7
        *(arg3 - 0xc) = temp0_5
        *(arg3 - 8) = temp0_8
        *(arg3 - 4) = temp0_6
        
        if (entry_x3 u< 2)
            break
        
        x12 = *(arg1 + 0x20)

if (entry_x3 == 0)
    return 

int32_t x15_25 = *(arg2 + 4)
int32_t* x12_10 = *(arg1 + 8)
char* x13_4 = *(arg1 + 0x20)
int32_t temp0_9 = _byteswap(*arg2)
int32_t temp0_10 = _byteswap(x15_25)
uint32_t x0 = zx.d(*x13_4)
uint32_t x3 = zx.d(x13_4[1])
int32_t x17_27 = *x12_10 + temp0_10
int32_t x17_28

if (x0 == 0)
    x17_28 = x17_27
else
    x17_28 = x17_27 u>> neg.d(x0) | x17_27 << x0

int32_t x0_6 = (*(&data_84eb80 + ((zx.q(x17_28 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x17_28 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x17_28 u>> 8) & 0xff) << 2))
int32_t x16_28 = (x0_6 + *(&data_84f380 + ((zx.q(x17_28) & 0xff) << 2))) ^ temp0_9
int32_t x15_27 = x16_28 ^ x12_10[1]
int32_t x15_28

if (x3 == 0)
    x15_28 = x15_27
else
    x15_28 = x15_27 u>> neg.d(x3) | x15_27 << x3

uint32_t x1_4 = zx.d(x13_4[2])
int32_t x17_37 = *(&data_84e780 + (zx.q(x15_28 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x15_28 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x15_28 u>> 8) & 0xff) << 2))
int32_t x14_29 = *(&data_84f380 + ((zx.q(x15_28) & 0xff) << 2)) ^ temp0_10 ^ x17_37
int32_t x17_38 = x12_10[2] - x14_29
int32_t x17_39

if (x1_4 == 0)
    x17_39 = x17_38
else
    x17_39 = x17_38 u>> neg.d(x1_4) | x17_38 << x1_4

uint32_t x15_31 = zx.d(x13_4[3])
int32_t x0_16 = (*(&data_84eb80 + ((zx.q(x17_39 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x17_39 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x17_39 u>> 8) & 0xff) << 2))
int32_t x16_29 = (x0_16 - *(&data_84f380 + ((zx.q(x17_39) & 0xff) << 2))) ^ x16_28
int32_t x17_43 = x16_29 + x12_10[3]
int32_t x15_34

if (x15_31 == 0)
    x15_34 = x17_43
else
    x15_34 = x17_43 u>> neg.d(x15_31) | x17_43 << x15_31

uint32_t x1_9 = zx.d(x13_4[4])
int32_t x17_47 = (*(&data_84eb80 + ((zx.q(x15_34 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x15_34 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x15_34 u>> 8) & 0xff) << 2))
int32_t x14_30 = (x17_47 + *(&data_84f380 + ((zx.q(x15_34) & 0xff) << 2))) ^ x14_29
int32_t x15_38 = x14_30 ^ x12_10[4]
int32_t x15_39

if (x1_9 == 0)
    x15_39 = x15_38
else
    x15_39 = x15_38 u>> neg.d(x1_9) | x15_38 << x1_9

uint32_t x1_10 = zx.d(x13_4[5])
int32_t x15_42 = *(&data_84e780 + (zx.q(x15_39 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x15_39 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x15_39 u>> 8) & 0xff) << 2))
int32_t x15_43 = *(&data_84f380 + ((zx.q(x15_39) & 0xff) << 2)) ^ x16_29 ^ x15_42
int32_t x16_31 = x12_10[5] - x15_43
int32_t x16_32

if (x1_10 == 0)
    x16_32 = x16_31
else
    x16_32 = x16_31 u>> neg.d(x1_10) | x16_31 << x1_10

uint32_t x0_24 = zx.d(x13_4[6])
int32_t x17_58 = (*(&data_84eb80 + ((zx.q(x16_32 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_32 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_32 u>> 8) & 0xff) << 2))
int32_t x14_31 = (x17_58 - *(&data_84f380 + ((zx.q(x16_32) & 0xff) << 2))) ^ x14_30
int32_t x16_36 = x14_31 + x12_10[6]
int32_t x16_37

if (x0_24 == 0)
    x16_37 = x16_36
else
    x16_37 = x16_36 u>> neg.d(x0_24) | x16_36 << x0_24

uint32_t x3_14 = zx.d(x13_4[7])
int32_t x17_65 = (*(&data_84eb80 + ((zx.q(x16_37 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_37 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_37 u>> 8) & 0xff) << 2))
int32_t x15_44 = (x17_65 + *(&data_84f380 + ((zx.q(x16_37) & 0xff) << 2))) ^ x15_43
int32_t x16_41 = x15_44 ^ x12_10[7]
int32_t x16_42

if (x3_14 == 0)
    x16_42 = x16_41
else
    x16_42 = x16_41 u>> neg.d(x3_14) | x16_41 << x3_14

uint32_t x1_17 = zx.d(x13_4[8])
int32_t x16_45 = *(&data_84e780 + (zx.q(x16_42 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_42 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_42 u>> 8) & 0xff) << 2))
int32_t x14_33 = *(&data_84f380 + ((zx.q(x16_42) & 0xff) << 2)) ^ x14_31 ^ x16_45
int32_t x16_46 = x12_10[8] - x14_33
int32_t x16_47

if (x1_17 == 0)
    x16_47 = x16_46
else
    x16_47 = x16_46 u>> neg.d(x1_17) | x16_46 << x1_17

uint32_t x1_18 = zx.d(x13_4[9])
int32_t x17_76 = (*(&data_84eb80 + ((zx.q(x16_47 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_47 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_47 u>> 8) & 0xff) << 2))
int32_t x15_45 = (x17_76 - *(&data_84f380 + ((zx.q(x16_47) & 0xff) << 2))) ^ x15_44
int32_t x16_51 = x15_45 + x12_10[9]
int32_t x16_52

if (x1_18 == 0)
    x16_52 = x16_51
else
    x16_52 = x16_51 u>> neg.d(x1_18) | x16_51 << x1_18

uint32_t x0_36 = zx.d(x13_4[0xa])
int32_t x17_82 = (*(&data_84eb80 + ((zx.q(x16_52 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_52 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_52 u>> 8) & 0xff) << 2))
int32_t x14_34 = (x17_82 + *(&data_84f380 + ((zx.q(x16_52) & 0xff) << 2))) ^ x14_33
int32_t x16_56 = x14_34 ^ x12_10[0xa]
int32_t x16_57

if (x0_36 == 0)
    x16_57 = x16_56
else
    x16_57 = x16_56 u>> neg.d(x0_36) | x16_56 << x0_36

uint32_t x3_23 = zx.d(x13_4[0xb])
int32_t x16_60 = *(&data_84e780 + (zx.q(x16_57 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_57 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_57 u>> 8) & 0xff) << 2))
int32_t x15_47 = *(&data_84f380 + ((zx.q(x16_57) & 0xff) << 2)) ^ x15_45 ^ x16_60
int32_t x16_61 = x12_10[0xb] - x15_47
int32_t x16_62

if (x3_23 == 0)
    x16_62 = x16_61
else
    x16_62 = x16_61 u>> neg.d(x3_23) | x16_61 << x3_23

uint32_t x1_25 = zx.d(x13_4[0xc])
int32_t x17_94 = (*(&data_84eb80 + ((zx.q(x16_62 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_62 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_62 u>> 8) & 0xff) << 2))
int32_t x14_35 = (x17_94 - *(&data_84f380 + ((zx.q(x16_62) & 0xff) << 2))) ^ x14_34
int32_t x16_66 = x14_35 + x12_10[0xc]
int32_t x16_67

if (x1_25 == 0)
    x16_67 = x16_66
else
    x16_67 = x16_66 u>> neg.d(x1_25) | x16_66 << x1_25

uint32_t x3_27 = zx.d(x13_4[0xd])
int32_t x17_100 = (*(&data_84eb80 + ((zx.q(x16_67 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_67 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_67 u>> 8) & 0xff) << 2))
int32_t x15_48 = (x17_100 + *(&data_84f380 + ((zx.q(x16_67) & 0xff) << 2))) ^ x15_47
int32_t x16_71 = x15_48 ^ x12_10[0xd]
int32_t x16_72

if (x3_27 == 0)
    x16_72 = x16_71
else
    x16_72 = x16_71 u>> neg.d(x3_27) | x16_71 << x3_27

uint32_t x0_51 = zx.d(x13_4[0xe])
int32_t x16_75 = *(&data_84e780 + (zx.q(x16_72 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_72 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_72 u>> 8) & 0xff) << 2))
int32_t x14_37 = *(&data_84f380 + ((zx.q(x16_72) & 0xff) << 2)) ^ x14_35 ^ x16_75
int32_t x16_76 = x12_10[0xe] - x14_37
int32_t x16_77

if (x0_51 == 0)
    x16_77 = x16_76
else
    x16_77 = x16_76 u>> neg.d(x0_51) | x16_76 << x0_51

uint32_t x13_5 = zx.d(x13_4[0xf])
int32_t x17_113 = (*(&data_84eb80 + ((zx.q(x16_77 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_77 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_77 u>> 8) & 0xff) << 2))
int32_t x15_49 = (x17_113 - *(&data_84f380 + ((zx.q(x16_77) & 0xff) << 2))) ^ x15_48
int32_t x12_12 = x15_49 + x12_10[0xf]
int32_t x12_13

if (x13_5 == 0)
    x12_13 = x12_12
else
    x12_13 = x12_12 u>> neg.d(x13_5) | x12_12 << x13_5

int32_t x10_1 = *(&data_84ef80 + ((zx.q(x12_13 u>> 8) & 0xff) << 2))
int32_t x11_1 = *(&data_84f380 + ((zx.q(x12_13) & 0xff) << 2))
int32_t x8_2 = *(&data_84eb80 + ((zx.q(x12_13 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x12_13 u>> 0x18) << 2))
int32_t temp0_11 = _byteswap(x15_49)
*arg3 = _byteswap((x8_2 - x10_1 + x11_1) ^ x14_37)
*(arg3 + 4) = temp0_11
