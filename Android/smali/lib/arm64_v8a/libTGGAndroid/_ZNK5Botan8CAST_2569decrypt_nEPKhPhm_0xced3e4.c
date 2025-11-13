// 函数: _ZNK5Botan8CAST_2569decrypt_nEPKhPhm
// 地址: 0xced3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x13 = *(arg1 + 0x20)

if (x13 == *(arg1 + 0x28))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::CAST_256::key_schedule(x0, x1) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = entry_x3 - 1

while (true)
    int32_t* x14_1 = *(arg1 + 8)
    int32_t x17_1 = *(arg2 + 8)
    uint32_t x7_1 = zx.d(x13[0x2c])
    uint32_t x21_1 = zx.d(x13[0x2e])
    int32_t x23_1 = x14_1[0x2c]
    int32_t x24_1 = x14_1[0x2d]
    int32_t temp0_1 = _byteswap(*(arg2 + 0xc))
    uint32_t x5_1 = zx.d(x13[0x2d])
    int32_t x23_3 = ror.d(x23_1 + temp0_1, neg.d(x7_1))
    int32_t x26_1 = *(&data_84e780 + (zx.q(x23_3 u>> 0x18) << 2))
    int32_t x25_2 = *(&data_84eb80 + ((zx.q(x23_3 u>> 0x10) & 0xff) << 2))
    int32_t temp0_2 = _byteswap(x17_1)
    int32_t x15_1 = *arg2
    uint32_t x6_1 = zx.d(x13[0x2f])
    int32_t x21_4 = ((x25_2 ^ x26_1) - *(&data_84ef80 + ((zx.q(x23_3 u>> 8) & 0xff) << 2))
        + *(&data_84f380 + ((zx.q(x23_3) & 0xff) << 2))) ^ temp0_2
    int32_t x17_4 = ror.d(x21_4 ^ x24_1, neg.d(x5_1))
    int32_t x25_4 = x14_1[0x2e]
    int32_t x26_4 = x14_1[0x2f]
    int32_t x23_8 = *(&data_84f380 + ((zx.q(x17_4) & 0xff) << 2)) ^ _byteswap(*(arg2 + 4)) ^ (
        *(&data_84e780 + (zx.q(x17_4 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x17_4 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x17_4 u>> 8) & 0xff) << 2)))
    int32_t x5_6 = ror.d(x25_4 - x23_8, neg.d(x21_1))
    int32_t x24_4 = *(&data_84e780 + (zx.q(x5_6 u>> 0x18) << 2))
    int32_t x25_5 = *(&data_84eb80 + ((zx.q(x5_6 u>> 0x10) & 0xff) << 2))
    int32_t temp0_4 = _byteswap(x15_1)
    int32_t x15_3 = (((x25_5 + x24_4) ^ *(&data_84ef80 + ((zx.q(x5_6 u>> 8) & 0xff) << 2)))
        - *(&data_84f380 + ((zx.q(x5_6) & 0xff) << 2))) ^ temp0_4
    int32_t x5_11 = ror.d(x15_3 + x26_4, neg.d(x6_1))
    int32_t x6_6 = (*(&data_84eb80 + ((zx.q(x5_11 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x5_11 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x5_11 u>> 8) & 0xff) << 2))
    int32_t x25_10 = (x6_6 + *(&data_84f380 + ((zx.q(x5_11) & 0xff) << 2))) ^ temp0_1
    int32_t x6_7 = ror.d(x25_10 + x14_1[0x28], neg.d(zx.d(x13[0x28])))
    int32_t x22_5 = (*(&data_84eb80 + ((zx.q(x6_7 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x6_7 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x6_7 u>> 8) & 0xff) << 2))
    int32_t x22_7 = (x22_5 + *(&data_84f380 + ((zx.q(x6_7) & 0xff) << 2))) ^ x21_4
    int32_t x3_2 = ror.d(x22_7 ^ x14_1[0x29], neg.d(zx.d(x13[0x29])))
    int32_t x3_5 = *(&data_84e780 + (zx.q(x3_2 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x3_2 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x3_2 u>> 8) & 0xff) << 2))
    int32_t x23_10 = *(&data_84f380 + ((zx.q(x3_2) & 0xff) << 2)) ^ x23_8 ^ x3_5
    int32_t x3_7 = ror.d(x14_1[0x2a] - x23_10, neg.d(zx.d(x13[0x2a])))
    int32_t x7_6 = (*(&data_84eb80 + ((zx.q(x3_7 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x3_7 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x3_7 u>> 8) & 0xff) << 2))
    int32_t x7_7 = (x7_6 - *(&data_84f380 + ((zx.q(x3_7) & 0xff) << 2))) ^ x15_3
    int32_t x15_5 = ror.d(x7_7 + x14_1[0x2b], neg.d(zx.d(x13[0x2b])))
    int32_t x3_14 = (*(&data_84eb80 + ((zx.q(x15_5 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x15_5 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x15_5 u>> 8) & 0xff) << 2))
    int32_t x3_15 = (x3_14 + *(&data_84f380 + ((zx.q(x15_5) & 0xff) << 2))) ^ x25_10
    int32_t x15_10 = ror.d(x3_15 + x14_1[0x24], neg.d(zx.d(x13[0x24])))
    int32_t x25_13 = (*(&data_84eb80 + ((zx.q(x15_10 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x15_10 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x15_10 u>> 8) & 0xff) << 2))
    int32_t x22_8 = (x25_13 + *(&data_84f380 + ((zx.q(x15_10) & 0xff) << 2))) ^ x22_7
    int32_t x15_15 = ror.d(x22_8 ^ x14_1[0x25], neg.d(zx.d(x13[0x25])))
    int32_t x16_11 = *(&data_84e780 + (zx.q(x15_15 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x15_15 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x15_15 u>> 8) & 0xff) << 2))
    int32_t x23_11 = *(&data_84f380 + ((zx.q(x15_15) & 0xff) << 2)) ^ x23_10 ^ x16_11
    int32_t x17_11 = ror.d(x14_1[0x26] - x23_11, neg.d(zx.d(x13[0x26])))
    int32_t x24_23 = (*(&data_84eb80 + ((zx.q(x17_11 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x17_11 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x17_11 u>> 8) & 0xff) << 2))
    int32_t x24_25 = (x24_23 - *(&data_84f380 + ((zx.q(x17_11) & 0xff) << 2))) ^ x7_7
    int32_t x4_7 = ror.d(x24_25 + x14_1[0x27], neg.d(zx.d(x13[0x27])))
    int32_t x7_12 = (*(&data_84eb80 + ((zx.q(x4_7 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x4_7 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x4_7 u>> 8) & 0xff) << 2))
    int32_t x27_5 = (x7_12 + *(&data_84f380 + ((zx.q(x4_7) & 0xff) << 2))) ^ x3_15
    int32_t x3_17 = ror.d(x27_5 + x14_1[0x20], neg.d(zx.d(x13[0x20])))
    int32_t x4_14 = (*(&data_84eb80 + ((zx.q(x3_17 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x3_17 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x3_17 u>> 8) & 0xff) << 2))
    int32_t x3_21 = (x4_14 + *(&data_84f380 + ((zx.q(x3_17) & 0xff) << 2))) ^ x22_8
    int32_t x4_16 = ror.d(x3_21 ^ x14_1[0x21], neg.d(zx.d(x13[0x21])))
    int32_t x5_24 = *(&data_84e780 + (zx.q(x4_16 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x4_16 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x4_16 u>> 8) & 0xff) << 2))
    int32_t x4_20 = *(&data_84f380 + ((zx.q(x4_16) & 0xff) << 2)) ^ x23_11 ^ x5_24
    int32_t x21_14 = ror.d(x14_1[0x22] - x4_20, neg.d(zx.d(x13[0x22])))
    int32_t x20_7 = (*(&data_84eb80 + ((zx.q(x21_14 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x21_14 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x21_14 u>> 8) & 0xff) << 2))
    int32_t x20_9 = (x20_7 - *(&data_84f380 + ((zx.q(x21_14) & 0xff) << 2))) ^ x24_25
    int32_t x19_10 = ror.d(x20_9 + x14_1[0x23], neg.d(zx.d(x13[0x23])))
    int32_t x21_21 = (*(&data_84eb80 + ((zx.q(x19_10 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x19_10 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x19_10 u>> 8) & 0xff) << 2))
    int32_t x19_14 = (x21_21 + *(&data_84f380 + ((zx.q(x19_10) & 0xff) << 2))) ^ x27_5
    int32_t x24_27 = ror.d(x19_14 + x14_1[0x1c], neg.d(zx.d(x13[0x1c])))
    int32_t x25_24 = (*(&data_84eb80 + ((zx.q(x24_27 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x24_27 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x24_27 u>> 8) & 0xff) << 2))
    int32_t x3_22 = (x25_24 + *(&data_84f380 + ((zx.q(x24_27) & 0xff) << 2))) ^ x3_21
    int32_t x15_23 = ror.d(x3_22 ^ x14_1[0x1d], neg.d(zx.d(x13[0x1d])))
    int32_t x15_26 = *(&data_84e780 + (zx.q(x15_23 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x15_23 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x15_23 u>> 8) & 0xff) << 2))
    int32_t x15_27 = *(&data_84f380 + ((zx.q(x15_23) & 0xff) << 2)) ^ x4_20 ^ x15_26
    int32_t x16_16 = ror.d(x14_1[0x1e] - x15_27, neg.d(zx.d(x13[0x1e])))
    int32_t x4_26 = (*(&data_84eb80 + ((zx.q(x16_16 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x16_16 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x16_16 u>> 8) & 0xff) << 2))
    int32_t x20_10 = (x4_26 - *(&data_84f380 + ((zx.q(x16_16) & 0xff) << 2))) ^ x20_9
    int32_t x16_21 = ror.d(x20_10 + x14_1[0x1f], neg.d(zx.d(x13[0x1f])))
    int32_t x17_18 = (*(&data_84eb80 + ((zx.q(x16_21 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_21 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_21 u>> 8) & 0xff) << 2))
    int32_t x4_29 = (x17_18 + *(&data_84f380 + ((zx.q(x16_21) & 0xff) << 2))) ^ x19_14
    int32_t x16_26 = ror.d(x4_29 + x14_1[0x18], neg.d(zx.d(x13[0x18])))
    int32_t x17_21 = (*(&data_84eb80 + ((zx.q(x16_26 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_26 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_26 u>> 8) & 0xff) << 2))
    int32_t x3_23 = (x17_21 + *(&data_84f380 + ((zx.q(x16_26) & 0xff) << 2))) ^ x3_22
    int32_t x17_24 = ror.d(x3_23 ^ x14_1[0x19], neg.d(zx.d(x13[0x19])))
    int32_t x5_33 = ror.d(x14_1[0x15] ^ x3_23, neg.d(zx.d(x13[0x15])))
    int32_t x6_19 = *(&data_84e780 + (zx.q(x17_24 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x17_24 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x17_24 u>> 8) & 0xff) << 2))
    int32_t x15_29 = *(&data_84f380 + ((zx.q(x17_24) & 0xff) << 2)) ^ x15_27 ^ x6_19
    int32_t x17_29 = *(&data_84e780 + (zx.q(x5_33 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x5_33 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x5_33 u>> 8) & 0xff) << 2))
    int32_t x5_36 = ror.d(x14_1[0x1a] - x15_29, neg.d(zx.d(x13[0x1a])))
    int32_t x7_19 = ror.d(x14_1[0x16] - x15_29, neg.d(zx.d(x13[0x16])))
    int32_t x15_31 = *(&data_84f380 + ((zx.q(x5_33) & 0xff) << 2)) ^ x15_29 ^ x17_29
    int32_t x19_24 = ror.d(x14_1[0x12] - x15_31, neg.d(zx.d(x13[0x12])))
    int32_t x17_33 = (*(&data_84eb80 + ((zx.q(x5_36 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x5_36 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x5_36 u>> 8) & 0xff) << 2))
    int32_t x21_29 = (*(&data_84eb80 + ((zx.q(x7_19 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x7_19 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x7_19 u>> 8) & 0xff) << 2))
    int32_t x17_35 = (x17_33 - *(&data_84f380 + ((zx.q(x5_36) & 0xff) << 2))) ^ x20_10
    int32_t x5_42 = (*(&data_84eb80 + ((zx.q(x19_24 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x19_24 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x19_24 u>> 8) & 0xff) << 2))
    int32_t x17_36 = (x21_29 - *(&data_84f380 + ((zx.q(x7_19) & 0xff) << 2))) ^ x17_35
    int32_t x23_33 = ror.d(x17_35 + x14_1[0x1b], neg.d(zx.d(x13[0x1b])))
    int32_t x17_37 = (x5_42 - *(&data_84f380 + ((zx.q(x19_24) & 0xff) << 2))) ^ x17_36
    int32_t x20_13 = ror.d(x14_1[0x17] + x17_35, neg.d(zx.d(x13[0x17])))
    int32_t x6_22 = ror.d(x14_1[0x13] + x17_36, neg.d(zx.d(x13[0x13])))
    int32_t x7_25 = ror.d(x14_1[0xf] + x17_37, neg.d(zx.d(x13[0xf])))
    int32_t x19_31 = (*(&data_84eb80 + ((zx.q(x23_33 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x23_33 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x23_33 u>> 8) & 0xff) << 2))
    int32_t x21_37 = (*(&data_84eb80 + ((zx.q(x20_13 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x20_13 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x20_13 u>> 8) & 0xff) << 2))
    int32_t x22_34 = (*(&data_84eb80 + ((zx.q(x6_22 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x6_22 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x6_22 u>> 8) & 0xff) << 2))
    int32_t x21_41 = (*(&data_84eb80 + ((zx.q(x7_25 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x7_25 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x7_25 u>> 8) & 0xff) << 2))
    int32_t x4_31 = (x19_31 + *(&data_84f380 + ((zx.q(x23_33) & 0xff) << 2))) ^ x4_29
        ^ (x21_37 + *(&data_84f380 + ((zx.q(x20_13) & 0xff) << 2)))
    int32_t x4_32 = (x22_34 + *(&data_84f380 + ((zx.q(x6_22) & 0xff) << 2))) ^ x4_31
    int32_t x24_53 = ror.d(x14_1[0x14] + x4_31, neg.d(zx.d(x13[0x14])))
    int32_t x16_31 = (x21_41 + *(&data_84f380 + ((zx.q(x7_25) & 0xff) << 2))) ^ x4_32
    int32_t x22_39 = ror.d(x14_1[0x10] + x4_32, neg.d(zx.d(x13[0x10])))
    int32_t x19_35 = ror.d(x14_1[0xc] + x16_31, neg.d(zx.d(x13[0xc])))
    int32_t x4_36 = (*(&data_84eb80 + ((zx.q(x24_53 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x24_53 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x24_53 u>> 8) & 0xff) << 2))
    int32_t x6_31 = (*(&data_84eb80 + ((zx.q(x22_39 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x22_39 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x22_39 u>> 8) & 0xff) << 2))
    int32_t x3_24 = (x4_36 + *(&data_84f380 + ((zx.q(x24_53) & 0xff) << 2))) ^ x3_23
    int32_t x24_59 = (*(&data_84eb80 + ((zx.q(x19_35 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x19_35 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x19_35 u>> 8) & 0xff) << 2))
    int32_t x3_25 = (x6_31 + *(&data_84f380 + ((zx.q(x22_39) & 0xff) << 2))) ^ x3_24
    int32_t x20_19 = ror.d(x14_1[0x11] ^ x3_24, neg.d(zx.d(x13[0x11])))
    int32_t x3_26 = (x24_59 + *(&data_84f380 + ((zx.q(x19_35) & 0xff) << 2))) ^ x3_25
    int32_t x21_44 = ror.d(x14_1[0xd] ^ x3_25, neg.d(zx.d(x13[0xd])))
    int32_t x23_48 = ror.d(x14_1[9] ^ x3_26, neg.d(zx.d(x13[9])))
    int32_t x19_42 = *(&data_84e780 + (zx.q(x20_19 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x20_19 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x20_19 u>> 8) & 0xff) << 2))
    int32_t x15_33 = *(&data_84f380 + ((zx.q(x20_19) & 0xff) << 2)) ^ x15_31 ^ x19_42
    int32_t x19_46 = *(&data_84e780 + (zx.q(x23_48 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x23_48 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x23_48 u>> 8) & 0xff) << 2))
    int32_t x5_45 = ror.d(x14_1[0xe] - x15_33, neg.d(zx.d(x13[0xe])))
    int32_t x20_25 = *(&data_84e780 + (zx.q(x21_44 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x21_44 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x21_44 u>> 8) & 0xff) << 2))
    int32_t x15_35 = *(&data_84f380 + ((zx.q(x21_44) & 0xff) << 2)) ^ x15_33 ^ x20_25
    int32_t x15_37 = *(&data_84f380 + ((zx.q(x23_48) & 0xff) << 2)) ^ x15_35 ^ x19_46
    int32_t x20_27 = ror.d(x14_1[0xa] - x15_35, neg.d(zx.d(x13[0xa])))
    int32_t x21_49 = ror.d(x14_1[6] - x15_37, neg.d(zx.d(x13[6])))
    int32_t x19_50 = (*(&data_84eb80 + ((zx.q(x5_45 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x5_45 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x5_45 u>> 8) & 0xff) << 2))
    int32_t x17_38 = (x19_50 - *(&data_84f380 + ((zx.q(x5_45) & 0xff) << 2))) ^ x17_37
    int32_t x6_34 = ror.d(x14_1[0xb] + x17_38, neg.d(zx.d(x13[0xb])))
    int32_t x19_53 = (*(&data_84eb80 + ((zx.q(x20_27 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x20_27 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x20_27 u>> 8) & 0xff) << 2))
    int32_t x17_39 = (x19_53 - *(&data_84f380 + ((zx.q(x20_27) & 0xff) << 2))) ^ x17_38
    int32_t x7_42 = (*(&data_84eb80 + ((zx.q(x21_49 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x21_49 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x21_49 u>> 8) & 0xff) << 2))
    int32_t x22_55 = ror.d(x14_1[7] + x17_39, neg.d(zx.d(x13[7])))
    int32_t x17_40 = (x7_42 - *(&data_84f380 + ((zx.q(x21_49) & 0xff) << 2))) ^ x17_39
    int32_t x19_57 = ror.d(x14_1[3] + x17_40, neg.d(zx.d(x13[3])))
    int32_t x7_46 = (*(&data_84eb80 + ((zx.q(x6_34 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x6_34 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x6_34 u>> 8) & 0xff) << 2))
    int32_t x16_32 = (x7_46 + *(&data_84f380 + ((zx.q(x6_34) & 0xff) << 2))) ^ x16_31
    int32_t x20_35 = (*(&data_84eb80 + ((zx.q(x22_55 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x22_55 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x22_55 u>> 8) & 0xff) << 2))
    int32_t x16_33 = (x20_35 + *(&data_84f380 + ((zx.q(x22_55) & 0xff) << 2))) ^ x16_32
    int32_t x4_42 = ror.d(x14_1[8] + x16_32, neg.d(zx.d(x13[8])))
    int32_t x6_41 = (*(&data_84eb80 + ((zx.q(x19_57 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x19_57 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x19_57 u>> 8) & 0xff) << 2))
    uint64_t x14_2 = zx.q(*x14_1)
    int32_t x7_49 = ror.d(x14_1[4] + x16_33, neg.d(zx.d(x13[4])))
    int32_t x16_34 = (x6_41 + *(&data_84f380 + ((zx.q(x19_57) & 0xff) << 2))) ^ x16_33
    int32_t x14_4 = ror.d(x14_2.d + x16_34, neg.d(zx.d(*x13)))
    int32_t x6_45 = (*(&data_84eb80 + ((zx.q(x4_42 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x4_42 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x4_42 u>> 8) & 0xff) << 2))
    int32_t x19_65 = (*(&data_84eb80 + ((zx.q(x7_49 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x7_49 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x7_49 u>> 8) & 0xff) << 2))
    int32_t x3_27 = (x6_45 + *(&data_84f380 + ((zx.q(x4_42) & 0xff) << 2))) ^ x3_26
    int32_t x3_28 = (x19_65 + *(&data_84f380 + ((zx.q(x7_49) & 0xff) << 2))) ^ x3_27
    int32_t x4_48 = ror.d(x14_1[5] ^ x3_27, neg.d(zx.d(x13[5])))
    int32_t x6_49 = (*(&data_84eb80 + ((zx.q(x14_4 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x14_4 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x14_4 u>> 8) & 0xff) << 2))
    int32_t x14_8 = (x6_49 + *(&data_84f380 + ((zx.q(x14_4) & 0xff) << 2))) ^ x3_28
    int32_t x19_69 = ror.d(*(x14_2 + 4) ^ x3_28, neg.d(zx.d(x13[1])))
    int32_t x3_30 = *(&data_84e780 + (zx.q(x4_48 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x4_48 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x4_48 u>> 8) & 0xff) << 2))
    int32_t x15_39 = *(&data_84f380 + ((zx.q(x4_48) & 0xff) << 2)) ^ x15_37 ^ x3_30
    int32_t x13_3 = ror.d(x14_1[2] - x15_39, neg.d(zx.d(x13[2])))
    int32_t x3_32 = *(&data_84e780 + (zx.q(x19_69 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x19_69 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x19_69 u>> 8) & 0xff) << 2))
    int32_t x15_41 = *(&data_84f380 + ((zx.q(x19_69) & 0xff) << 2)) ^ x15_39 ^ x3_32
    int32_t x5_55 = *(&data_84ef80 + ((zx.q(x13_3 u>> 8) & 0xff) << 2))
    int32_t x13_5 = *(&data_84f380 + ((zx.q(x13_3) & 0xff) << 2))
    int32_t x3_35 = *(&data_84eb80 + ((zx.q(x13_3 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x13_3 u>> 0x18) << 2))
    int32_t temp0_5 = _byteswap(x16_34)
    int32_t temp0_6 = _byteswap(x14_8)
    int32_t temp0_7 = _byteswap(x15_41)
    *arg3 = _byteswap(((x3_35 ^ x5_55) - x13_5) ^ x17_40)
    *(arg3 + 4) = temp0_7
    *(arg3 + 8) = temp0_6
    *(arg3 + 0xc) = temp0_5
    
    if (x8_1 == 0)
        break
    
    x13 = *(arg1 + 0x20)
    x8_1 -= 1
    arg2 = &arg2[0x10]
    arg3 += 0x10
