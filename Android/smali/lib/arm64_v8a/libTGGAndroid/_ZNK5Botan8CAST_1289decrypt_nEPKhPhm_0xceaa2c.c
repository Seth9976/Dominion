// 函数: _ZNK5Botan8CAST_1289decrypt_nEPKhPhm
// 地址: 0xceaa2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x12 = *(arg1 + 0x20)

if (x12 == *(arg1 + 0x28))
    uint8_t* x0_55
    uint64_t x1_33
    x0_55, x1_33 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::CAST_128::key_schedule(x0_55, x1_33) __tailcall

int64_t entry_x3
int64_t x13 = entry_x3 - 2

if (entry_x3 u>= 2)
    while (true)
        entry_x3 = x13
        int32_t* x13_1 = *(arg1 + 8)
        arg2 = &arg2[0x10]
        int32_t x16_1 = *(arg2 - 0x10)
        int32_t x17_1 = *(arg2 - 8)
        int32_t x15_1 = *(arg2 - 4)
        uint32_t x4_1 = zx.d(x12[0xf])
        int32_t x7_1 = x13_1[0xe]
        int32_t x5_1 = x13_1[0xf]
        int32_t temp0_1 = _byteswap(*(arg2 - 0xc))
        int32_t temp0_2 = _byteswap(x15_1)
        int32_t x6_1 = neg.d(x4_1)
        int32_t x19_1 = x5_1 + temp0_1
        int32_t x5_2 = x5_1 + temp0_2
        int32_t x6_3
        
        if (x4_1 == 0)
            x6_3 = x19_1
        else
            x6_3 = x19_1 u>> x6_1 | x19_1 << x4_1
        
        int32_t x4_4
        
        if (x4_1 == 0)
            x4_4 = x5_2
        else
            x4_4 = x5_2 u>> x6_1 | x5_2 << x4_1
        
        int32_t x4_6 = *(&data_84f380 + ((zx.q(x4_4) & 0xff) << 2))
        int32_t x5_6 = (*(&data_84eb80 + ((zx.q(x6_3 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x6_3 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x6_3 u>> 8) & 0xff) << 2))
        uint32_t x20_5 = zx.d(x12[0xe])
        int32_t x19_6 = (*(&data_84eb80 + ((zx.q(x4_4 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_4 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_4 u>> 8) & 0xff) << 2))
        int32_t x5_8 = (x5_6 + *(&data_84f380 + ((zx.q(x6_3) & 0xff) << 2))) ^ _byteswap(x16_1)
        int32_t x6_6 = neg.d(x20_5)
        int32_t x4_8 = (x19_6 + x4_6) ^ _byteswap(x17_1)
        int32_t x16_3 = x7_1 - x5_8
        int32_t x17_3 = x7_1 - x4_8
        int32_t x16_4
        
        if (x20_5 == 0)
            x16_4 = x16_3
        else
            x16_4 = x16_3 u>> x6_6 | x16_3 << x20_5
        
        int32_t x17_4
        
        if (x20_5 == 0)
            x17_4 = x17_3
        else
            x17_4 = x17_3 u>> x6_6 | x17_3 << x20_5
        
        int32_t x6_12 = (*(&data_84eb80 + ((zx.q(x16_4 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x16_4 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x16_4 u>> 8) & 0xff) << 2))
        uint32_t x21_5 = zx.d(x12[0xd])
        int32_t x7_10 = (*(&data_84eb80 + ((zx.q(x17_4 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x17_4 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x17_4 u>> 8) & 0xff) << 2))
        int32_t x19_11 = x13_1[0xc]
        int32_t x6_13 = x13_1[0xd]
        int32_t x16_8 = (x6_12 - *(&data_84f380 + ((zx.q(x16_4) & 0xff) << 2))) ^ temp0_1
        int32_t x20_9 = neg.d(x21_5)
        int32_t x17_8 = (x7_10 - *(&data_84f380 + ((zx.q(x17_4) & 0xff) << 2))) ^ temp0_2
        int32_t x14_3 = x6_13 ^ x16_8
        int32_t x15_3 = x17_8 ^ x6_13
        int32_t x14_4
        
        if (x21_5 == 0)
            x14_4 = x14_3
        else
            x14_4 = x14_3 u>> x20_9 | x14_3 << x21_5
        
        int32_t x15_4
        
        if (x21_5 == 0)
            x15_4 = x15_3
        else
            x15_4 = x15_3 u>> x20_9 | x15_3 << x21_5
        
        uint32_t x21_9 = zx.d(x12[0xc])
        int32_t x14_7 = *(&data_84e780 + (zx.q(x14_4 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x14_4 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x14_4 u>> 8) & 0xff) << 2))
        int32_t x15_7 = *(&data_84e780 + (zx.q(x15_4 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x15_4 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x15_4 u>> 8) & 0xff) << 2))
        int32_t x14_8 = *(&data_84f380 + ((zx.q(x14_4) & 0xff) << 2)) ^ x5_8 ^ x14_7
        int32_t x6_19 = neg.d(x21_9)
        int32_t x15_8 = *(&data_84f380 + ((zx.q(x15_4) & 0xff) << 2)) ^ x4_8 ^ x15_7
        int32_t x4_10 = x19_11 + x14_8
        int32_t x5_10 = x15_8 + x19_11
        int32_t x4_11
        
        if (x21_9 == 0)
            x4_11 = x4_10
        else
            x4_11 = x4_10 u>> x6_19 | x4_10 << x21_9
        
        int32_t x5_11
        
        if (x21_9 == 0)
            x5_11 = x5_10
        else
            x5_11 = x5_10 u>> x6_19 | x5_10 << x21_9
        
        int32_t x6_25 = (*(&data_84eb80 + ((zx.q(x4_11 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_11 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_11 u>> 8) & 0xff) << 2))
        uint32_t x20_15 = zx.d(x12[0xb])
        int32_t x7_26 = (*(&data_84eb80 + ((zx.q(x5_11 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x5_11 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x5_11 u>> 8) & 0xff) << 2))
        int32_t x19_16 = x13_1[0xa]
        int32_t x6_26 = x13_1[0xb]
        int32_t x16_9 = (x6_25 + *(&data_84f380 + ((zx.q(x4_11) & 0xff) << 2))) ^ x16_8
        int32_t x21_13 = neg.d(x20_15)
        int32_t x17_9 = (x7_26 + *(&data_84f380 + ((zx.q(x5_11) & 0xff) << 2))) ^ x17_8
        int32_t x4_15 = x6_26 - x16_9
        int32_t x5_15 = x6_26 - x17_9
        int32_t x4_16
        
        if (x20_15 == 0)
            x4_16 = x4_15
        else
            x4_16 = x4_15 u>> x21_13 | x4_15 << x20_15
        
        int32_t x5_16
        
        if (x20_15 == 0)
            x5_16 = x5_15
        else
            x5_16 = x5_15 u>> x21_13 | x5_15 << x20_15
        
        int32_t x6_32 = (*(&data_84eb80 + ((zx.q(x4_16 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_16 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_16 u>> 8) & 0xff) << 2))
        uint32_t x7_33 = zx.d(x12[0xa])
        int32_t x20_20 = (*(&data_84eb80 + ((zx.q(x5_16 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_16 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_16 u>> 8) & 0xff) << 2))
        int32_t x14_9 = (x6_32 - *(&data_84f380 + ((zx.q(x4_16) & 0xff) << 2))) ^ x14_8
        int32_t x6_33 = neg.d(x7_33)
        int32_t x15_9 = (x20_20 - *(&data_84f380 + ((zx.q(x5_16) & 0xff) << 2))) ^ x15_8
        int32_t x4_20 = x19_16 ^ x14_9
        int32_t x5_20 = x15_9 ^ x19_16
        int32_t x4_21
        
        if (x7_33 == 0)
            x4_21 = x4_20
        else
            x4_21 = x4_20 u>> x6_33 | x4_20 << x7_33
        
        int32_t x5_21
        
        if (x7_33 == 0)
            x5_21 = x5_20
        else
            x5_21 = x5_20 u>> x6_33 | x5_20 << x7_33
        
        uint32_t x21_19 = zx.d(x12[9])
        int32_t x4_24 = *(&data_84e780 + (zx.q(x4_21 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x4_21 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x4_21 u>> 8) & 0xff) << 2))
        int32_t x20_26 = x13_1[8]
        int32_t x6_39 = x13_1[9]
        int32_t x5_24 = *(&data_84e780 + (zx.q(x5_21 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x5_21 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x5_21 u>> 8) & 0xff) << 2))
        int32_t x16_11 = *(&data_84f380 + ((zx.q(x4_21) & 0xff) << 2)) ^ x16_9 ^ x4_24
        int32_t x19_21 = neg.d(x21_19)
        int32_t x17_11 = *(&data_84f380 + ((zx.q(x5_21) & 0xff) << 2)) ^ x17_9 ^ x5_24
        int32_t x4_25 = x6_39 + x16_11
        int32_t x5_25 = x17_11 + x6_39
        int32_t x4_26
        
        if (x21_19 == 0)
            x4_26 = x4_25
        else
            x4_26 = x4_25 u>> x19_21 | x4_25 << x21_19
        
        int32_t x5_26
        
        if (x21_19 == 0)
            x5_26 = x5_25
        else
            x5_26 = x5_25 u>> x19_21 | x5_25 << x21_19
        
        int32_t x6_45 = (*(&data_84eb80 + ((zx.q(x4_26 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_26 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_26 u>> 8) & 0xff) << 2))
        uint32_t x7_46 = zx.d(x12[8])
        int32_t x19_26 = (*(&data_84eb80 + ((zx.q(x5_26 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x5_26 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x5_26 u>> 8) & 0xff) << 2))
        int32_t x4_30 = (x6_45 + *(&data_84f380 + ((zx.q(x4_26) & 0xff) << 2))) ^ x14_9
        int32_t x6_46 = neg.d(x7_46)
        int32_t x5_30 = (x19_26 + *(&data_84f380 + ((zx.q(x5_26) & 0xff) << 2))) ^ x15_9
        int32_t x14_10 = x20_26 - x4_30
        int32_t x15_10 = x20_26 - x5_30
        int32_t x14_11
        
        if (x7_46 == 0)
            x14_11 = x14_10
        else
            x14_11 = x14_10 u>> x6_46 | x14_10 << x7_46
        
        int32_t x15_11
        
        if (x7_46 == 0)
            x15_11 = x15_10
        else
            x15_11 = x15_10 u>> x6_46 | x15_10 << x7_46
        
        int32_t x6_52 = (*(&data_84eb80 + ((zx.q(x14_11 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x14_11 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x14_11 u>> 8) & 0xff) << 2))
        uint32_t x21_25 = zx.d(x12[7])
        int32_t x7_54 = (*(&data_84eb80 + ((zx.q(x15_11 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x15_11 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x15_11 u>> 8) & 0xff) << 2))
        int32_t x19_32 = x13_1[6]
        int32_t x6_53 = x13_1[7]
        int32_t x14_15 = (x6_52 - *(&data_84f380 + ((zx.q(x14_11) & 0xff) << 2))) ^ x16_11
        int32_t x20_30 = neg.d(x21_25)
        int32_t x15_15 = (x7_54 - *(&data_84f380 + ((zx.q(x15_11) & 0xff) << 2))) ^ x17_11
        int32_t x16_12 = x6_53 ^ x14_15
        int32_t x17_12 = x15_15 ^ x6_53
        int32_t x16_13
        
        if (x21_25 == 0)
            x16_13 = x16_12
        else
            x16_13 = x16_12 u>> x20_30 | x16_12 << x21_25
        
        int32_t x17_13
        
        if (x21_25 == 0)
            x17_13 = x17_12
        else
            x17_13 = x17_12 u>> x20_30 | x17_12 << x21_25
        
        uint32_t x21_29 = zx.d(x12[6])
        int32_t x16_16 = *(&data_84e780 + (zx.q(x16_13 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x16_13 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x16_13 u>> 8) & 0xff) << 2))
        int32_t x17_16 = *(&data_84e780 + (zx.q(x17_13 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x17_13 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x17_13 u>> 8) & 0xff) << 2))
        int32_t x16_17 = *(&data_84f380 + ((zx.q(x16_13) & 0xff) << 2)) ^ x4_30 ^ x16_16
        int32_t x6_59 = neg.d(x21_29)
        int32_t x17_17 = *(&data_84f380 + ((zx.q(x17_13) & 0xff) << 2)) ^ x5_30 ^ x17_16
        int32_t x4_32 = x19_32 + x16_17
        int32_t x5_32 = x17_17 + x19_32
        int32_t x4_33
        
        if (x21_29 == 0)
            x4_33 = x4_32
        else
            x4_33 = x4_32 u>> x6_59 | x4_32 << x21_29
        
        int32_t x5_33
        
        if (x21_29 == 0)
            x5_33 = x5_32
        else
            x5_33 = x5_32 u>> x6_59 | x5_32 << x21_29
        
        int32_t x6_65 = (*(&data_84eb80 + ((zx.q(x4_33 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_33 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_33 u>> 8) & 0xff) << 2))
        uint32_t x20_36 = zx.d(x12[5])
        int32_t x7_70 = (*(&data_84eb80 + ((zx.q(x5_33 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x5_33 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x5_33 u>> 8) & 0xff) << 2))
        int32_t x19_37 = x13_1[4]
        int32_t x6_66 = x13_1[5]
        int32_t x14_16 = (x6_65 + *(&data_84f380 + ((zx.q(x4_33) & 0xff) << 2))) ^ x14_15
        int32_t x21_33 = neg.d(x20_36)
        int32_t x15_16 = (x7_70 + *(&data_84f380 + ((zx.q(x5_33) & 0xff) << 2))) ^ x15_15
        int32_t x4_37 = x6_66 - x14_16
        int32_t x5_37 = x6_66 - x15_16
        int32_t x4_38
        
        if (x20_36 == 0)
            x4_38 = x4_37
        else
            x4_38 = x4_37 u>> x21_33 | x4_37 << x20_36
        
        int32_t x5_38
        
        if (x20_36 == 0)
            x5_38 = x5_37
        else
            x5_38 = x5_37 u>> x21_33 | x5_37 << x20_36
        
        int32_t x6_72 = (*(&data_84eb80 + ((zx.q(x4_38 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_38 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_38 u>> 8) & 0xff) << 2))
        uint32_t x7_77 = zx.d(x12[4])
        int32_t x20_41 = (*(&data_84eb80 + ((zx.q(x5_38 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_38 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_38 u>> 8) & 0xff) << 2))
        int32_t x16_18 = (x6_72 - *(&data_84f380 + ((zx.q(x4_38) & 0xff) << 2))) ^ x16_17
        int32_t x6_73 = neg.d(x7_77)
        int32_t x4_42 = (x20_41 - *(&data_84f380 + ((zx.q(x5_38) & 0xff) << 2))) ^ x17_17
        int32_t x17_18 = x19_37 ^ x16_18
        int32_t x5_42 = x4_42 ^ x19_37
        int32_t x17_19
        
        if (x7_77 == 0)
            x17_19 = x17_18
        else
            x17_19 = x17_18 u>> x6_73 | x17_18 << x7_77
        
        int32_t x5_43
        
        if (x7_77 == 0)
            x5_43 = x5_42
        else
            x5_43 = x5_42 u>> x6_73 | x5_42 << x7_77
        
        uint32_t x21_39 = zx.d(x12[3])
        int32_t x17_22 = *(&data_84e780 + (zx.q(x17_19 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x17_19 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x17_19 u>> 8) & 0xff) << 2))
        int32_t x20_47 = x13_1[2]
        int32_t x6_79 = x13_1[3]
        int32_t x5_46 = *(&data_84e780 + (zx.q(x5_43 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x5_43 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x5_43 u>> 8) & 0xff) << 2))
        int32_t x14_18 = *(&data_84f380 + ((zx.q(x17_19) & 0xff) << 2)) ^ x14_16 ^ x17_22
        int32_t x19_42 = neg.d(x21_39)
        int32_t x15_18 = *(&data_84f380 + ((zx.q(x5_43) & 0xff) << 2)) ^ x15_16 ^ x5_46
        int32_t x17_23 = x6_79 + x14_18
        int32_t x5_47 = x15_18 + x6_79
        int32_t x17_24
        
        if (x21_39 == 0)
            x17_24 = x17_23
        else
            x17_24 = x17_23 u>> x19_42 | x17_23 << x21_39
        
        int32_t x5_48
        
        if (x21_39 == 0)
            x5_48 = x5_47
        else
            x5_48 = x5_47 u>> x19_42 | x5_47 << x21_39
        
        int32_t x6_85 = (*(&data_84eb80 + ((zx.q(x17_24 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x17_24 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x17_24 u>> 8) & 0xff) << 2))
        uint32_t x21_43 = zx.d(x12[2])
        int32_t x7_92 = (*(&data_84eb80 + ((zx.q(x5_48 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x5_48 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x5_48 u>> 8) & 0xff) << 2))
        int32_t x17_28 = (x6_85 + *(&data_84f380 + ((zx.q(x17_24) & 0xff) << 2))) ^ x16_18
        int32_t x16_19 = (x7_92 + *(&data_84f380 + ((zx.q(x5_48) & 0xff) << 2))) ^ x4_42
        int32_t x19_47 = neg.d(x21_43)
        int32_t x4_43 = x20_47 - x17_28
        int32_t x5_52 = x20_47 - x16_19
        int32_t x4_44
        
        if (x21_43 == 0)
            x4_44 = x4_43
        else
            x4_44 = x4_43 u>> x19_47 | x4_43 << x21_43
        
        int32_t x5_53
        
        if (x21_43 == 0)
            x5_53 = x5_52
        else
            x5_53 = x5_52 u>> x19_47 | x5_52 << x21_43
        
        int32_t x6_91 = (*(&data_84eb80 + ((zx.q(x4_44 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x4_44 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x4_44 u>> 8) & 0xff) << 2))
        uint32_t x19_51 = zx.d(x12[1])
        uint64_t x13_2 = zx.q(*x13_1)
        int32_t x6_92 = *(x13_2 + 4)
        int32_t x7_98 = (*(&data_84eb80 + ((zx.q(x5_53 u>> 0x10) & 0xff) << 2))
            + *(&data_84e780 + (zx.q(x5_53 u>> 0x18) << 2)))
            ^ *(&data_84ef80 + ((zx.q(x5_53 u>> 8) & 0xff) << 2))
        int32_t x14_19 = (x6_91 - *(&data_84f380 + ((zx.q(x4_44) & 0xff) << 2))) ^ x14_18
        int32_t x20_53 = neg.d(x19_51)
        int32_t x15_19 = (x7_98 - *(&data_84f380 + ((zx.q(x5_53) & 0xff) << 2))) ^ x15_18
        int32_t x4_48 = x6_92 ^ x14_19
        int32_t x5_57 = x15_19 ^ x6_92
        int32_t x4_49
        
        if (x19_51 == 0)
            x4_49 = x4_48
        else
            x4_49 = x4_48 u>> x20_53 | x4_48 << x19_51
        
        int32_t x5_58
        
        if (x19_51 == 0)
            x5_58 = x5_57
        else
            x5_58 = x5_57 u>> x20_53 | x5_57 << x19_51
        
        uint32_t x12_1 = zx.d(*x12)
        int32_t x4_52 = *(&data_84e780 + (zx.q(x4_49 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x4_49 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x4_49 u>> 8) & 0xff) << 2))
        int32_t x17_30 = *(&data_84f380 + ((zx.q(x4_49) & 0xff) << 2)) ^ x17_28 ^ x4_52
        int32_t x19_55 = neg.d(x12_1)
        int32_t x5_61 = *(&data_84e780 + (zx.q(x5_58 u>> 0x18) << 2))
            - *(&data_84eb80 + ((zx.q(x5_58 u>> 0x10) & 0xff) << 2))
            + *(&data_84ef80 + ((zx.q(x5_58 u>> 8) & 0xff) << 2))
        int32_t x4_53 = x13_2.d + x17_30
        int32_t x16_21 = *(&data_84f380 + ((zx.q(x5_58) & 0xff) << 2)) ^ x16_19 ^ x5_61
        int32_t x4_54
        
        if (x12_1 == 0)
            x4_54 = x4_53
        else
            x4_54 = x4_53 u>> x19_55 | x4_53 << x12_1
        
        int32_t x13_3 = x16_21 + x13_2.d
        int32_t x12_4
        
        if (x12_1 == 0)
            x12_4 = x13_3
        else
            x12_4 = x13_3 u>> x19_55 | x13_3 << x12_1
        
        int32_t x5_67 = (*(&data_84eb80 + ((zx.q(x4_54 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x4_54 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x4_54 u>> 8) & 0xff) << 2))
        int32_t x6_103 = (*(&data_84eb80 + ((zx.q(x12_4 u>> 0x10) & 0xff) << 2))
            ^ *(&data_84e780 + (zx.q(x12_4 u>> 0x18) << 2)))
            - *(&data_84ef80 + ((zx.q(x12_4 u>> 8) & 0xff) << 2))
        int32_t x14_20 = (x5_67 + *(&data_84f380 + ((zx.q(x4_54) & 0xff) << 2))) ^ x14_19
        int32_t x12_8 = (x6_103 + *(&data_84f380 + ((zx.q(x12_4) & 0xff) << 2))) ^ x15_19
        arg3 += 0x10
        int32_t temp0_5 = _byteswap(x17_30)
        int32_t temp0_6 = _byteswap(x16_21)
        x13 = entry_x3 - 2
        int32_t temp0_7 = _byteswap(x14_20)
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

int32_t x15_20 = *(arg2 + 4)
int32_t* x12_10 = *(arg1 + 8)
char* x13_4 = *(arg1 + 0x20)
int32_t temp0_9 = _byteswap(*arg2)
int32_t temp0_10 = _byteswap(x15_20)
uint32_t x0 = zx.d(x13_4[0xf])
uint32_t x3 = zx.d(x13_4[0xe])
int32_t x17_33 = x12_10[0xf] + temp0_10
int32_t x17_34

if (x0 == 0)
    x17_34 = x17_33
else
    x17_34 = x17_33 u>> neg.d(x0) | x17_33 << x0

int32_t x0_6 = (*(&data_84eb80 + ((zx.q(x17_34 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x17_34 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x17_34 u>> 8) & 0xff) << 2))
int32_t x16_24 = (x0_6 + *(&data_84f380 + ((zx.q(x17_34) & 0xff) << 2))) ^ temp0_9
int32_t x15_22 = x12_10[0xe] - x16_24
int32_t x15_23

if (x3 == 0)
    x15_23 = x15_22
else
    x15_23 = x15_22 u>> neg.d(x3) | x15_22 << x3

uint32_t x1_4 = zx.d(x13_4[0xd])
int32_t x17_43 = (*(&data_84eb80 + ((zx.q(x15_23 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x15_23 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x15_23 u>> 8) & 0xff) << 2))
int32_t x14_24 = (x17_43 - *(&data_84f380 + ((zx.q(x15_23) & 0xff) << 2))) ^ temp0_10
int32_t x15_27 = x14_24 ^ x12_10[0xd]
int32_t x15_28

if (x1_4 == 0)
    x15_28 = x15_27
else
    x15_28 = x15_27 u>> neg.d(x1_4) | x15_27 << x1_4

uint32_t x3_3 = zx.d(x13_4[0xc])
int32_t x16_25 = *(&data_84e780 + (zx.q(x15_28 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x15_28 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x15_28 u>> 8) & 0xff) << 2))
int32_t x15_32 = *(&data_84f380 + ((zx.q(x15_28) & 0xff) << 2)) ^ x16_24 ^ x16_25
int32_t x16_26 = x15_32 + x12_10[0xc]
int32_t x16_27

if (x3_3 == 0)
    x16_27 = x16_26
else
    x16_27 = x16_26 u>> neg.d(x3_3) | x16_26 << x3_3

uint32_t x1_7 = zx.d(x13_4[0xb])
int32_t x17_55 = (*(&data_84eb80 + ((zx.q(x16_27 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_27 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_27 u>> 8) & 0xff) << 2))
int32_t x14_25 = (x17_55 + *(&data_84f380 + ((zx.q(x16_27) & 0xff) << 2))) ^ x14_24
int32_t x16_31 = x12_10[0xb] - x14_25
int32_t x16_32

if (x1_7 == 0)
    x16_32 = x16_31
else
    x16_32 = x16_31 u>> neg.d(x1_7) | x16_31 << x1_7

uint32_t x1_8 = zx.d(x13_4[0xa])
int32_t x17_61 = (*(&data_84eb80 + ((zx.q(x16_32 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_32 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_32 u>> 8) & 0xff) << 2))
int32_t x15_33 = (x17_61 - *(&data_84f380 + ((zx.q(x16_32) & 0xff) << 2))) ^ x15_32
int32_t x16_36 = x15_33 ^ x12_10[0xa]
int32_t x16_37

if (x1_8 == 0)
    x16_37 = x16_36
else
    x16_37 = x16_36 u>> neg.d(x1_8) | x16_36 << x1_8

uint32_t x0_22 = zx.d(x13_4[9])
int32_t x17_67 = *(&data_84e780 + (zx.q(x16_37 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_37 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_37 u>> 8) & 0xff) << 2))
int32_t x14_27 = *(&data_84f380 + ((zx.q(x16_37) & 0xff) << 2)) ^ x14_25 ^ x17_67
int32_t x17_68 = x14_27 + x12_10[9]
int32_t x17_69

if (x0_22 == 0)
    x17_69 = x17_68
else
    x17_69 = x17_68 u>> neg.d(x0_22) | x17_68 << x0_22

uint32_t x16_40 = zx.d(x13_4[8])
int32_t x0_28 = (*(&data_84eb80 + ((zx.q(x17_69 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x17_69 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x17_69 u>> 8) & 0xff) << 2))
int32_t x15_34 = (x0_28 + *(&data_84f380 + ((zx.q(x17_69) & 0xff) << 2))) ^ x15_33
int32_t x17_73 = x12_10[8] - x15_34
int32_t x16_43

if (x16_40 == 0)
    x16_43 = x17_73
else
    x16_43 = x17_73 u>> neg.d(x16_40) | x17_73 << x16_40

uint32_t x1_17 = zx.d(x13_4[7])
int32_t x17_77 = (*(&data_84eb80 + ((zx.q(x16_43 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_43 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_43 u>> 8) & 0xff) << 2))
int32_t x14_28 = (x17_77 - *(&data_84f380 + ((zx.q(x16_43) & 0xff) << 2))) ^ x14_27
int32_t x16_47 = x14_28 ^ x12_10[7]
int32_t x16_48

if (x1_17 == 0)
    x16_48 = x16_47
else
    x16_48 = x16_47 u>> neg.d(x1_17) | x16_47 << x1_17

uint32_t x1_18 = zx.d(x13_4[6])
int32_t x16_51 = *(&data_84e780 + (zx.q(x16_48 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_48 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_48 u>> 8) & 0xff) << 2))
int32_t x15_36 = *(&data_84f380 + ((zx.q(x16_48) & 0xff) << 2)) ^ x15_34 ^ x16_51
int32_t x16_52 = x15_36 + x12_10[6]
int32_t x16_53

if (x1_18 == 0)
    x16_53 = x16_52
else
    x16_53 = x16_52 u>> neg.d(x1_18) | x16_52 << x1_18

uint32_t x0_36 = zx.d(x13_4[5])
int32_t x17_88 = (*(&data_84eb80 + ((zx.q(x16_53 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_53 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_53 u>> 8) & 0xff) << 2))
int32_t x14_29 = (x17_88 + *(&data_84f380 + ((zx.q(x16_53) & 0xff) << 2))) ^ x14_28
int32_t x16_57 = x12_10[5] - x14_29
int32_t x16_58

if (x0_36 == 0)
    x16_58 = x16_57
else
    x16_58 = x16_57 u>> neg.d(x0_36) | x16_57 << x0_36

uint32_t x3_23 = zx.d(x13_4[4])
int32_t x17_95 = (*(&data_84eb80 + ((zx.q(x16_58 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_58 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_58 u>> 8) & 0xff) << 2))
int32_t x15_37 = (x17_95 - *(&data_84f380 + ((zx.q(x16_58) & 0xff) << 2))) ^ x15_36
int32_t x16_62 = x15_37 ^ x12_10[4]
int32_t x16_63

if (x3_23 == 0)
    x16_63 = x16_62
else
    x16_63 = x16_62 u>> neg.d(x3_23) | x16_62 << x3_23

uint32_t x1_25 = zx.d(x13_4[3])
int32_t x16_66 = *(&data_84e780 + (zx.q(x16_63 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_63 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_63 u>> 8) & 0xff) << 2))
int32_t x14_31 = *(&data_84f380 + ((zx.q(x16_63) & 0xff) << 2)) ^ x14_29 ^ x16_66
int32_t x16_67 = x14_31 + x12_10[3]
int32_t x16_68

if (x1_25 == 0)
    x16_68 = x16_67
else
    x16_68 = x16_67 u>> neg.d(x1_25) | x16_67 << x1_25

uint32_t x3_27 = zx.d(x13_4[2])
int32_t x17_106 = (*(&data_84eb80 + ((zx.q(x16_68 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x16_68 u>> 0x18) << 2)))
    - *(&data_84ef80 + ((zx.q(x16_68 u>> 8) & 0xff) << 2))
int32_t x15_38 = (x17_106 + *(&data_84f380 + ((zx.q(x16_68) & 0xff) << 2))) ^ x15_37
int32_t x16_72 = x12_10[2] - x15_38
int32_t x16_73

if (x3_27 == 0)
    x16_73 = x16_72
else
    x16_73 = x16_72 u>> neg.d(x3_27) | x16_72 << x3_27

uint32_t x0_51 = zx.d(x13_4[1])
int32_t x17_113 = (*(&data_84eb80 + ((zx.q(x16_73 u>> 0x10) & 0xff) << 2))
    + *(&data_84e780 + (zx.q(x16_73 u>> 0x18) << 2)))
    ^ *(&data_84ef80 + ((zx.q(x16_73 u>> 8) & 0xff) << 2))
uint64_t x12_11 = zx.q(*x12_10)
int32_t x14_32 = (x17_113 - *(&data_84f380 + ((zx.q(x16_73) & 0xff) << 2))) ^ x14_31
int32_t x16_77 = x14_32 ^ *(x12_11 + 4)
int32_t x16_78

if (x0_51 == 0)
    x16_78 = x16_77
else
    x16_78 = x16_77 u>> neg.d(x0_51) | x16_77 << x0_51

uint32_t x13_5 = zx.d(*x13_4)
int32_t x16_81 = *(&data_84e780 + (zx.q(x16_78 u>> 0x18) << 2))
    - *(&data_84eb80 + ((zx.q(x16_78 u>> 0x10) & 0xff) << 2))
    + *(&data_84ef80 + ((zx.q(x16_78 u>> 8) & 0xff) << 2))
int32_t x15_40 = *(&data_84f380 + ((zx.q(x16_78) & 0xff) << 2)) ^ x15_38 ^ x16_81
int32_t x12_12 = x15_40 + x12_11.d
int32_t x12_13

if (x13_5 == 0)
    x12_13 = x12_12
else
    x12_13 = x12_12 u>> neg.d(x13_5) | x12_12 << x13_5

int32_t x10_1 = *(&data_84ef80 + ((zx.q(x12_13 u>> 8) & 0xff) << 2))
int32_t x11_1 = *(&data_84f380 + ((zx.q(x12_13) & 0xff) << 2))
int32_t x8_2 = *(&data_84eb80 + ((zx.q(x12_13 u>> 0x10) & 0xff) << 2))
    ^ *(&data_84e780 + (zx.q(x12_13 u>> 0x18) << 2))
int32_t temp0_11 = _byteswap(x15_40)
*arg3 = _byteswap((x8_2 - x10_1 + x11_1) ^ x14_32)
*(arg3 + 4) = temp0_11
