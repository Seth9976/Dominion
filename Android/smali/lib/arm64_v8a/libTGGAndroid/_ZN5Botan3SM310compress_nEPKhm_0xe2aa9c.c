// 函数: _ZN5Botan3SM310compress_nEPKhm
// 地址: 0xe2aa9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i

if (entry_i == 0)
    return 

int32_t* x9_1 = *(arg1 + 0x38)
int128_t v3
v3.q = 0x1100000019
int128_t v4
v4.q = 0x1100000009
int128_t v5
v5.q = 0x900000019
int128_t v0
v0.q = 0xf00000007
int128_t v1
v1.q = 0xf00000017
int128_t v2
v2.q = 0x1700000007
int32_t x3_1 = x9_1[6]
int32_t x6_1 = x9_1[7]
int32_t x11_1 = x9_1[4]
int32_t x12_1 = x9_1[5]
int32_t x21_1 = x9_1[2]
int32_t x10_1 = x9_1[3]
uint64_t x9_2 = zx.q(*x9_1)
int32_t x13_1 = *(x9_2 + 4)
int128_t v3_1 = vneg_s32(v3)
int128_t v4_1 = vneg_s32(v4)
int128_t v5_1 = vneg_s32(v5)
int64_t i

do
    int32_t x8_2 = *(arg2 + 8)
    int32_t x14_1 = *(arg2 + 0xc)
    int32_t x8_3 = *(arg2 + 0x10)
    int32_t x19_1 = *(arg2 + 0x14)
    int32_t x16_1 = *(arg2 + 4)
    int32_t x28_1 = *(arg2 + 0x20)
    int32_t x22_1 = *(arg2 + 0x24)
    int32_t x2 = *(arg2 + 0x18)
    int32_t x8_4 = *(arg2 + 0x1c)
    int32_t x23_1 = *(arg2 + 0x28)
    int32_t x24_1 = *(arg2 + 0x2c)
    int32_t x25_1 = *(arg2 + 0x30)
    int32_t x26_1 = *(arg2 + 0x34)
    int32_t x27_1 = *(arg2 + 0x38)
    int32_t x7_1 = *(arg2 + 0x3c)
    int32_t temp0_1 = _byteswap(*arg2)
    int32_t temp0_2 = _byteswap(x16_1)
    int32_t lr_1 = ror.d(x9_2.d, 0x14)
    int32_t temp0_3 = _byteswap(x8_2)
    int32_t x0 = ror.d(x12_1, 0xd)
    int32_t x8_5 = ror.d(x13_1, 0x17)
    int32_t x20_1 = ror.d(x11_1, 0xd)
    int32_t temp0_4 = _byteswap(x14_1)
    int32_t x12_2 = ror.d(x9_2.d, 0x17)
    int32_t temp0_5 = _byteswap(x23_1)
    int32_t x14_2 = ror.d(lr_1 + x11_1 + 0x79cc4519, 0x19)
    int32_t temp0_6 = _byteswap(x22_1)
    int32_t temp0_7 = _byteswap(x26_1)
    int32_t temp0_8 = _byteswap(x8_3)
    int32_t temp0_9 = _byteswap(x7_1)
    int32_t temp0_10 = _byteswap(x19_1)
    int32_t temp0_11 = _byteswap(x2)
    int32_t temp0_12 = _byteswap(x28_1)
    int32_t x6_3 = (x13_1 ^ x9_2.d ^ x21_1) + x10_1 + (x14_2 ^ lr_1) + (temp0_8 ^ temp0_1)
    int32_t x14_5 = x6_1 + x14_2 + (x12_1 ^ x11_1 ^ x3_1) + temp0_1
    int32_t temp0_13 = _byteswap(x24_1)
    int32_t temp0_14 = _byteswap(x27_1)
    int32_t x8_7 = x14_5 ^ ror.d(x14_5, 0x17) ^ ror.d(x14_5, 0xf)
    int32_t x9_5 = temp0_12 ^ temp0_2 ^ ror.d(temp0_14, 0x11)
    int32_t temp0_15 = _byteswap(x25_1)
    int32_t x14_9 = temp0_13 ^ ror.d(temp0_8, 0x19) ^ x9_5 ^ ror.d(x9_5, 0x11) ^ ror.d(x9_5, 9)
    int32_t x9_6 = temp0_6 ^ temp0_3 ^ ror.d(temp0_9, 0x11)
    int32_t x1_3 = temp0_15 ^ ror.d(temp0_10, 0x19) ^ x9_6 ^ ror.d(x9_6, 0x11) ^ ror.d(x9_6, 9)
    int32_t lr_3 = ror.d(x6_3, 0x14)
    int32_t temp0_16 = _byteswap(x8_4)
    int32_t x15_8 = ror.d(x8_7 + lr_3 - 0xc6775ce, 0x19)
    int32_t x17_4 = temp0_13 ^ temp0_8 ^ ror.d(x14_9, 0x11)
    int32_t x9_9 = temp0_2 + x3_1 + (x0 ^ x11_1 ^ x8_7) + x15_8
    int32_t x1_4 = temp0_15 ^ temp0_10 ^ ror.d(x1_3, 0x11)
    int128_t v6
    v6.d = float.s(x14_9)
    int32_t fp_3 = temp0_14 ^ ror.d(temp0_16, 0x19) ^ x17_4 ^ ror.d(x17_4, 0x11) ^ ror.d(x17_4, 9)
    v6:4.d = temp0_4
    int32_t x5_4 = (temp0_10 ^ temp0_2) + x21_1 + (x8_5 ^ x9_2.d ^ x6_3) + (x15_8 ^ lr_3)
    int32_t lr_4 = temp0_9 ^ ror.d(temp0_12, 0x19) ^ x1_4 ^ ror.d(x1_4, 0x11) ^ ror.d(x1_4, 9)
    int32_t x4_4 = x9_9 ^ ror.d(x9_9, 0x17) ^ ror.d(x9_9, 0xf)
    int32_t x16_6 = temp0_9 ^ temp0_12 ^ ror.d(lr_4, 0x11)
    int32_t x26_4 = x1_3 ^ ror.d(temp0_13, 0x19) ^ x16_6 ^ ror.d(x16_6, 0x11) ^ ror.d(x16_6, 9)
    int32_t x16_7 = temp0_14 ^ temp0_16 ^ ror.d(fp_3, 0x11)
    int32_t x9_13 = ror.d(x5_4, 0x14)
    int32_t x25_3 = x14_9 ^ ror.d(temp0_5, 0x19) ^ x16_7 ^ ror.d(x16_7, 0x11) ^ ror.d(x16_7, 9)
    int32_t x16_10 = ror.d(x9_13 + x4_4 - 0x18ceeb9b, 0x19)
    int32_t x7_4 = ror.d(x6_3, 0x17)
    int32_t x9_15 = (temp0_11 ^ temp0_3) + x8_5 + (x6_3 ^ x12_2 ^ x5_4) + (x16_10 ^ x9_13)
    int32_t x15_16 = temp0_3 + x0 + x16_10 + (x8_7 ^ x20_1 ^ x4_4)
    int32_t x1_5 = x1_3 ^ temp0_13 ^ ror.d(x26_4, 0x11)
    int32_t x0_6 = x15_16 ^ ror.d(x15_16, 0x17) ^ ror.d(x15_16, 0xf)
    int32_t x10_8 = lr_4 ^ ror.d(temp0_14, 0x19) ^ x1_5 ^ ror.d(x1_5, 0x11) ^ ror.d(x1_5, 9)
    int32_t x15_18 = x14_9 ^ temp0_5 ^ ror.d(x25_3, 0x11)
    int32_t x24_4 = fp_3 ^ ror.d(temp0_7, 0x19) ^ x15_18 ^ ror.d(x15_18, 0x11) ^ ror.d(x15_18, 9)
    int32_t x15_19 = ror.d(x9_15, 0x14)
    int32_t x8_8 = ror.d(x8_7, 0xd)
    int32_t x17_18 = ror.d(x15_19 + x0_6 - 0x319dd735, 0x19)
    int32_t x8_11 = temp0_4 + x20_1 + x17_18 + (x4_4 ^ x8_8 ^ x0_6)
    int32_t x15_21 = (temp0_16 ^ temp0_4) + x12_2 + (x5_4 ^ x7_4 ^ x9_15) + (x17_18 ^ x15_19)
    int32_t x17_21 = x8_11 ^ ror.d(x8_11, 0x17) ^ ror.d(x8_11, 0xf)
    int32_t x8_12 = ror.d(x15_21, 0x14)
    int32_t x1_6 = ror.d(x5_4, 0x17)
    int32_t x3_6 = ror.d(x8_12 + x17_21 - 0x633bae69, 0x19)
    int32_t x1_10 = x7_4 + (temp0_12 ^ temp0_8) + (x9_15 ^ x1_6 ^ x15_21) + (x3_6 ^ x8_12)
    int32_t x8_14 = ror.d(x4_4, 0xd)
    int32_t x9_16 = ror.d(x9_15, 0x17)
    int32_t x8_17 = x8_8 + temp0_8 + x3_6 + (x0_6 ^ x8_14 ^ x17_21)
    int32_t x8_18 = x8_17 ^ ror.d(x8_17, 0x17) ^ ror.d(x8_17, 0xf)
    int32_t x11_6 = ror.d(x1_10, 0x14)
    int32_t x0_7 = ror.d(x0_6, 0xd)
    int32_t x16_20 = ror.d(x11_6 + x8_18 + 0x3988a32f, 0x19)
    int32_t x12_9 = x8_14 + temp0_10 + x16_20 + (x17_21 ^ x0_7 ^ x8_18)
    int32_t x9_20 = x1_6 + (temp0_6 ^ temp0_10) + (x15_21 ^ x9_16 ^ x1_10) + (x16_20 ^ x11_6)
    int128_t v16
    v16.d = float.s(fp_3)
    int32_t x12_10 = x12_9 ^ ror.d(x12_9, 0x17) ^ ror.d(x12_9, 0xf)
    int32_t x0_11 = ror.d(x9_20, 0x14)
    v16:4.d = temp0_11
    int32_t x15_22 = ror.d(x15_21, 0x17)
    int32_t x3_10 = ror.d(x0_11 + x12_10 + 0x7311465e, 0x19)
    int32_t x19_7 = x9_16 + (temp0_5 ^ temp0_11) + (x1_10 ^ x15_22 ^ x9_20) + (x3_10 ^ x0_11)
    int32_t x17_22 = ror.d(x17_21, 0xd)
    int32_t x0_13 = ror.d(x1_10, 0x17)
    int32_t x16_24 = x0_7 + temp0_11 + x3_10 + (x8_18 ^ x17_22 ^ x12_10)
    int32_t x16_25 = x16_24 ^ ror.d(x16_24, 0x17) ^ ror.d(x16_24, 0xf)
    int32_t x0_15 = ror.d(x19_7, 0x14)
    int32_t x8_19 = ror.d(x8_18, 0xd)
    int32_t x17_27 = ror.d(x0_15 + x16_25 - 0x19dd7344, 0x19)
    int32_t x8_22 = x17_22 + temp0_16 + x17_27 + (x12_10 ^ x8_19 ^ x16_25)
    uint128_t v7
    v7.d = float.s(lr_4)
    int32_t x4_6 = x15_22 + (temp0_13 ^ temp0_16) + (x9_20 ^ x0_13 ^ x19_7) + (x17_27 ^ x0_15)
    v7:4.d = temp0_16
    int32_t x5_6 = x8_22 ^ ror.d(x8_22, 0x17) ^ ror.d(x8_22, 0xf)
    int32_t x8_23 = ror.d(x4_6, 0x14)
    int32_t x9_21 = ror.d(x9_20, 0x17)
    int32_t x10_16 = ror.d(x8_23 + x5_6 - 0x33bae687, 0x19)
    int32_t x12_11 = ror.d(x12_10, 0xd)
    int32_t x7_6 = x0_13 + (temp0_15 ^ temp0_12) + (x19_7 ^ x9_21 ^ x4_6) + (x10_16 ^ x8_23)
    int32_t x8_25 = ror.d(x19_7, 0x17)
    int32_t x9_27 = x8_19 + temp0_12 + x10_16 + (x16_25 ^ x12_11 ^ x5_6)
    int32_t x19_8 = x9_27 ^ ror.d(x9_27, 0x17) ^ ror.d(x9_27, 0xf)
    int32_t x10_19 = ror.d(x7_6, 0x14)
    int32_t x11_10 = ror.d(x10_19 + x19_8 - 0x6775cd0d, 0x19)
    int32_t x8_31 = x9_21 + (temp0_7 ^ temp0_6) + (x4_6 ^ x8_25 ^ x7_6) + (x11_10 ^ x10_19)
    int32_t x9_30 = ror.d(x16_25, 0xd)
    int128_t v21
    v21.d = float.s(x26_4)
    int32_t x11_11 = ror.d(x4_6, 0x17)
    int32_t x9_33 = x12_11 + temp0_6 + x11_10 + (x5_6 ^ x9_30 ^ x19_8)
    int32_t x15_27 = ror.d(x5_6, 0xd)
    int32_t x9_34 = x9_33 ^ ror.d(x9_33, 0x17) ^ ror.d(x9_33, 0xf)
    int32_t x13_10 = ror.d(x8_31, 0x14)
    v21:4.d = temp0_5
    int32_t x1_12 = ror.d(x7_6, 0x17)
    int32_t x4_9 = ror.d(x13_10 + x9_34 + 0x311465e7, 0x19)
    int128_t v17
    v17.d = v6.d u>> 0x19
    v17:4.d = v6:4.d u>> 0x19
    int128_t v18
    v18.d = v6.d << 7
    v18:4.d = v6:4.d << 7
    int128_t v20
    v20.d = float.s(x25_3)
    int32_t x2_6 = ror.d(x19_8, 0xd)
    int32_t x8_32 = ror.d(x8_31, 0x17)
    v20:4.d = temp0_6
    int32_t x5_7 = x8_25 + (temp0_14 ^ temp0_5) + (x7_6 ^ x11_11 ^ x8_31) + (x4_9 ^ x13_10)
    int32_t x2_7 = ror.d(x9_34, 0xd)
    int32_t x9_35 = x9_30 + temp0_5 + x4_9 + (x19_8 ^ x15_27 ^ x9_34)
    int128_t v19_2 = v21 ^ vorr_s8(v18, v17)
    int128_t v6_1 = v21 ^ v6
    v21.d = v20.d u>> 0x19
    v21:4.d = v20:4.d u>> 0x19
    v20.d <<= 7
    v20:4.d <<= 7
    int128_t v20_1 = vorr_s8(v20, v21)
    v21.d = x10_8
    int32_t x10_24 = x9_35 ^ ror.d(x9_35, 0x17) ^ ror.d(x9_35, 0xf)
    int32_t x7_7 = ror.d(x5_7, 0x14)
    int32_t x6_9 = ror.d(x10_24, 0xd)
    v17.d = v16.d u>> 0x19
    v17:4.d = v16:4.d u>> 0x19
    v18.d = v16.d << 7
    v18:4.d = v16:4.d << 7
    v21:4.d = temp0_7
    int128_t v23
    v23.d = v21.d u>> 0x11
    v23:4.d = v21:4.d u>> 0x11
    int128_t v24
    v24.d = v21.d << 0xf
    v24:4.d = v21:4.d << 0xf
    int128_t v25_1 = v21 ^ vorr_s8(v18, v17)
    int128_t v17_2 = v21 ^ v16
    v21.d = float.s(temp0_14)
    v21:4.d = temp0_1
    int32_t x5_8 = ror.d(x5_7, 0x17)
    int32_t x10_27 = ror.d(x7_7 + x10_24 + 0x6228cbce, 0x19)
    int128_t v7_2 = v7 ^ v21 ^ vorr_s8(v24, v23)
    int128_t v16_1
    v16_1.d = v7_2.d u>> 0x11
    v16_1:4.d = v7_2:4.d u>> 0x11
    v21.d = v7_2.d << 0xf
    v21:4.d = v7_2:4.d << 0xf
    int32_t x10_29 = x15_27 + temp0_13 + x10_27 + (x9_34 ^ x2_6 ^ x10_24)
    v23.d = v7_2.d u>> 9
    v23:4.d = v7_2:4.d u>> 9
    v24.d = v7_2.d << 0x17
    v24:4.d = v7_2:4.d << 0x17
    int32_t x15_32 = x11_11 + (temp0_9 ^ temp0_13) + (x8_31 ^ x1_12 ^ x5_7) + (x10_27 ^ x7_7)
    int32_t x7_8 = ror.d(x15_32, 0x14)
    int32_t x8_34 = x10_29 ^ ror.d(x10_29, 0x17) ^ ror.d(x10_29, 0xf)
    int128_t v19_4 = v19_2 ^ v7_2 ^ vorr_s8(v21, v16_1) ^ vorr_s8(v24, v23)
    int32_t x6_10 = ror.d(x8_34, 0xd)
    int128_t v7_4
    v7_4.d = v19_4.d u>> 0x11
    v7_4:4.d = v19_4:4.d u>> 0x11
    int128_t v16_2
    v16_2.d = v19_4.d << 0xf
    v16_2:4.d = v19_4:4.d << 0xf
    int128_t v6_2 = v6_1 ^ vorr_s8(v16_2, v7_4)
    int32_t x3_13 = v19_4:4.d
    int32_t x10_32 = ror.d(x7_8 + x8_34 - 0x3bae6864, 0x19)
    int128_t v7_5
    v7_5.d = v6_2.d u>> 0x11
    v7_5:4.d = v6_2:4.d u>> 0x11
    v16_2.d = v6_2.d << 0xf
    v16_2:4.d = v6_2:4.d << 0xf
    v21.d = v6_2.d u>> 9
    v21:4.d = v6_2:4.d u>> 9
    v23.d = v6_2.d << 0x17
    v23:4.d = v6_2:4.d << 0x17
    int32_t x0_18 = fp_3 ^ temp0_7 ^ ror.d(x24_4, 0x11)
    int32_t x10_34 = x2_6 + temp0_15 + x10_32 + (x10_24 ^ x2_7 ^ x8_34)
    int128_t v16_4 = v25_1 ^ v6_2 ^ vorr_s8(v16_2, v7_5) ^ vorr_s8(v23, v21)
    int32_t x1_15 = x1_12 + (x3_13 ^ temp0_15) + (x5_7 ^ x8_32 ^ x15_32) + (x10_32 ^ x7_8)
    int128_t v6_4
    v6_4.d = v16_4.d u>> 0x11
    v6_4:4.d = v16_4:4.d u>> 0x11
    v23.d = v16_4.d << 0xf
    v23:4.d = v16_4:4.d << 0xf
    int32_t x16_27 = ror.d(x15_32, 0x17)
    int32_t x4_14 = x10_34 ^ ror.d(x10_34, 0x17) ^ ror.d(x10_34, 0xf)
    int32_t x7_10 = ror.d(x1_15, 0x14)
    int128_t v22
    v22.d = x24_4
    v22:4.d = x24_4
    int32_t x2_10 = ror.d(x1_15, 0x17)
    int128_t v6_6 = v17_2 ^ vorr_s8(v23, v6_4)
    int128_t v7_7 = v16_4 ^ v22
    v17_2.d = v6_6.d u>> 0x11
    v17_2:4.d = v6_6:4.d u>> 0x11
    v22.d = v6_6.d << 0xf
    v22:4.d = v6_6:4.d << 0xf
    int32_t x1_18 = ror.d(x7_10 + x4_14 - 0x775cd0c7, 0x19)
    v23.d = v6_6.d u>> 9
    v23:4.d = v6_6:4.d u>> 9
    int128_t v26
    v26.d = v6_6.d << 0x17
    v26:4.d = v6_6:4.d << 0x17
    int32_t x22_5 = x25_3 ^ ror.d(x3_13, 0x19) ^ x0_18 ^ ror.d(x0_18, 0x11) ^ ror.d(x0_18, 9)
    int32_t x0_19 = ror.d(x4_14, 0xd)
    int32_t x11_16 = v16_4:4.d
    int32_t x13_14 = x2_7 + temp0_7 + x1_18 + (x8_34 ^ x6_9 ^ x4_14)
    int128_t v17_4 = v19_4 ^ v20_1 ^ v6_6 ^ vorr_s8(v22, v17_2) ^ vorr_s8(v26, v23)
    int32_t x4_16 = x8_32 + (x14_9 ^ temp0_7) + (x15_32 ^ x5_8 ^ x1_15) + (x1_18 ^ x7_10)
    int32_t x8_35 = v17_4.d
    int32_t x3_15 = ror.d(x4_16, 0x14)
    int32_t x13_15 = x13_14 ^ ror.d(x13_14, 0x17) ^ ror.d(x13_14, 0xf)
    int32_t x21_4 = ror.d(x4_16, 0x17)
    int32_t x8_37 = ror.d(x13_15, 0xd)
    int128_t v20_3
    v20_3.d = float.s(x8_35 ^ ror.d(x22_5, 0x19))
    int32_t x16_30 = v17_4:4.d
    int32_t x7_13 = ror.d(x3_15 + x13_15 + 0x11465e73, 0x19)
    v20_3:4.d = x22_5 ^ ror.d(x16_30, 0x19)
    int32_t x12_15 = x5_8 + (x1_3 ^ temp0_14) + (x1_15 ^ x16_27 ^ x4_16) + (x7_13 ^ x3_15)
    int32_t x13_17 = x3_13 ^ temp0_6 ^ ror.d(x16_30, 0x11)
    int32_t x15_36 =
        x11_16 ^ ror.d(temp0_15, 0x19) ^ x13_17 ^ ror.d(x13_17, 0x11) ^ ror.d(x13_17, 9)
    int32_t x9_38 = x6_9 + temp0_14 + x7_13 + (x4_14 ^ x6_10 ^ x13_15)
    int32_t x5_12 = x11_16 ^ temp0_15 ^ ror.d(x15_36, 0x11)
    int32_t x9_39 = x9_38 ^ ror.d(x9_38, 0x17) ^ ror.d(x9_38, 0xf)
    int32_t x2_12 = ror.d(x12_15, 0x14)
    int32_t x17_40 = x16_30 ^ ror.d(temp0_9, 0x19) ^ x5_12 ^ ror.d(x5_12, 0x11) ^ ror.d(x5_12, 9)
    int32_t x5_15 = ror.d(x2_12 + x9_39 + 0x228cbce6, 0x19)
    int32_t x19_12 = ror.d(x12_15, 0x17)
    int32_t x5_16 = x16_27 + (x11_16 ^ temp0_9) + (x4_16 ^ x2_10 ^ x12_15) + (x5_15 ^ x2_12)
    int32_t x13_21 = x6_10 + temp0_9 + x5_15 + (x13_15 ^ x0_19 ^ x9_39)
    int32_t x4_18 = x13_21 ^ ror.d(x13_21, 0x17) ^ ror.d(x13_21, 0xf)
    int32_t x13_22 = x16_30 ^ temp0_9 ^ ror.d(x17_40, 0x11)
    int32_t x14_21 = x15_36 ^ ror.d(x1_3, 0x19) ^ x13_22 ^ ror.d(x13_22, 0x11) ^ ror.d(x13_22, 9)
    int32_t x21_5 = ror.d(x9_39, 0xd)
    int32_t x6_12 = ror.d(x5_16, 0x14)
    int32_t x9_43 = ror.d(x6_12 - 0x62758579 + x4_18, 0x19)
    int32_t x8_40 = x0_19 + x3_13 + x9_43 + ((x9_39 & x4_18) | (x8_37 & not.d(x4_18)))
    int32_t x9_45 = x15_36 ^ x1_3 ^ ror.d(x14_21, 0x11)
    int32_t x6_14 =
        x2_10 + (fp_3 ^ x3_13) + (((x5_16 | x12_15) & x21_4) | (x5_16 & x12_15)) + (x9_43 ^ x6_12)
    int32_t x12_21 = x17_40 ^ ror.d(lr_4, 0x19) ^ x9_45 ^ ror.d(x9_45, 0x11) ^ ror.d(x9_45, 9)
    int32_t x7_17 = x8_40 ^ ror.d(x8_40, 0x17) ^ ror.d(x8_40, 0xf)
    int32_t x21_6 = x17_40 ^ lr_4 ^ ror.d(x12_21, 0x11)
    int32_t x8_45 = ror.d(x6_14, 0x14)
    int32_t x27_4 = x14_21 ^ ror.d(x26_4, 0x19) ^ x21_6 ^ ror.d(x21_6, 0x11) ^ ror.d(x21_6, 9)
    int128_t v24_1
    v24_1.d = x24_4
    int128_t v6_8
    v6_8.d = v24_1.d u>> 0x19
    v6_8:4.d = v24_1:4.d u>> 0x19
    v22.d = v24_1.d << 7
    v22:4.d = v24_1:4.d << 7
    int32_t x21_9 = ror.d(x8_45 + 0x3b14f50f + x7_17, 0x19)
    v21.d = x22_5
    v21:4.d = x22_5
    int128_t v25_2
    v25_2:4.d = x24_4
    int128_t v23_1
    v23_1:4.d = x22_5
    int32_t x21_10 = ror.d(x5_16, 0x17)
    v18.d = x25_3
    v18:4.d = x25_3
    int128_t v22_1 = v25_2 ^ vorr_s8(v22, v6_8)
    int128_t v6_10 = v17_4 ^ v21
    v21.d = v23_1.d u>> 0x11
    v21:4.d = v23_1:4.d u>> 0x11
    v23_1.d <<= 0xf
    v23_1:4.d <<= 0xf
    int128_t v18_2 = v19_4 ^ v18 ^ vorr_s8(v23_1, v21)
    int32_t fp_6 = ror.d(x4_18, 0xd)
    int32_t x5_17 =
        x21_4 + (lr_4 ^ x14_9) + (((x6_14 | x5_16) & x19_12) | (x6_14 & x5_16)) + (x21_9 ^ x8_45)
    int32_t x10_37 = x8_37 + x14_9 + x21_9 + ((x4_18 & x7_17) | (x21_5 & not.d(x7_17)))
    int128_t v21_1
    v21_1.d = v18_2.d u>> 0x11
    v21_1:4.d = v18_2:4.d u>> 0x11
    v23_1.d = v18_2.d << 0xf
    v23_1:4.d = v18_2:4.d << 0xf
    v24_1.d = v18_2.d u>> 9
    v24_1:4.d = v18_2:4.d u>> 9
    v25_2.d = v18_2.d << 0x17
    v25_2:4.d = v18_2:4.d << 0x17
    int32_t x20_7 = x10_37 ^ ror.d(x10_37, 0x17) ^ ror.d(x10_37, 0xf)
    int32_t x19_15 = x14_21 ^ x26_4 ^ ror.d(x27_4, 0x11)
    uint128_t v21_3 = v22_1 ^ v18_2 ^ vorr_s8(v23_1, v21_1) ^ vorr_s8(v25_2, v24_1)
    int128_t v18_4
    v18_4.d = v21_3.d u>> 0x11
    v18_4:4.d = v21_3:4.d u>> 0x11
    int128_t v22_2
    v22_2.d = v21_3.d << 0xf
    v22_2:4.d = v21_3:4.d << 0xf
    int32_t x28_8 = x12_21 ^ ror.d(x10_8, 0x19) ^ x19_15 ^ ror.d(x19_15, 0x11) ^ ror.d(x19_15, 9)
    int32_t x21_11 = ror.d(x6_14, 0x17)
    int128_t v23_2 = vdup_laneq_s32(v21_3, 1)
    int32_t x11_22 = ror.d(x7_17, 0xd)
    int128_t v7_8 = v7_7 ^ vorr_s8(v22_2, v18_4)
    int32_t x0_23 = ror.d(x5_17, 0x14)
    int128_t v22_3
    v22_3:4.d = x15_36
    int128_t v18_5
    v18_5.d = v7_8.d u>> 0x11
    v18_5:4.d = v7_8:4.d u>> 0x11
    v24_1.d = v7_8.d << 0xf
    v24_1:4.d = v7_8:4.d << 0xf
    v25_2.d = v7_8.d u>> 9
    v25_2:4.d = v7_8:4.d u>> 9
    v26.d = v7_8.d << 0x17
    v26:4.d = v7_8:4.d << 0x17
    int128_t v7_9 = v20_3 ^ v7_8
    v20_3.d = v22_3.d u>> 0x19
    v20_3:4.d = v22_3:4.d u>> 0x19
    v22_3.d <<= 7
    v22_3:4.d <<= 7
    int128_t v18_6 = vorr_s8(v24_1, v18_5)
    int128_t v24_2 = vorr_s8(v26, v25_2)
    int32_t x7_21 = ror.d(x0_23 + 0x7629ea1e + x20_7, 0x19)
    int32_t x25_4 = v21_3:4.d
    int32_t x1_21 = v21_3.d
    int128_t v22_4 = v21_3 ^ vorr_s8(v22_3, v20_3)
    v21_3:4.d = x15_36
    uint128_t v18_7 = v7_9 ^ v18_6 ^ v24_2
    int128_t v20_5 = v21_3 ^ v23_2
    int128_t v7_10
    v7_10.d = v18_7.d u>> 0x11
    v7_10:4.d = v18_7:4.d u>> 0x11
    v21_3.d = v18_7.d << 0xf
    v21_3:4.d = v18_7:4.d << 0xf
    int32_t x0_25 =
        x19_12 + (x16_30 ^ x1_3) + (((x5_17 | x6_14) & x21_10) | (x5_17 & x6_14)) + (x7_21 ^ x0_23)
    int32_t x10_42 = x21_5 + x1_3 + x7_21 + ((x7_17 & x20_7) | (fp_6 & not.d(x20_7)))
    uint128_t v24_3
    v24_3:4.d = x17_40
    int128_t v6_11 = v6_10 ^ vorr_s8(v21_3, v7_10)
    int32_t x2_19 = x10_42 ^ ror.d(x10_42, 0x17) ^ ror.d(x10_42, 0xf)
    int128_t v7_12 = v24_3 ^ vdup_laneq_s32(v18_7, 1)
    v21_3.d = v6_11.d u>> 0x11
    v21_3:4.d = v6_11:4.d u>> 0x11
    v24_3.d = v6_11.d << 0xf
    v24_3:4.d = v6_11:4.d << 0xf
    int32_t x7_22 = ror.d(x5_17, 0x17)
    v25_2.d = v6_11.d u>> 9
    v25_2:4.d = v6_11:4.d u>> 9
    v26.d = v6_11.d << 0x17
    v26:4.d = v6_11:4.d << 0x17
    int128_t v21_4 = vorr_s8(v24_3, v21_3)
    int128_t v23_3
    v23_3:4.d = x17_40
    int32_t x5_19 = ror.d(x0_25, 0x14)
    v24_3.d = v23_3.d u>> 0x19
    v24_3:4.d = v23_3:4.d u>> 0x19
    v23_3.d <<= 7
    v23_3:4.d <<= 7
    uint128_t v6_14 = v22_4 ^ v6_11 ^ v21_4 ^ vorr_s8(v26, v25_2)
    int128_t v21_5 = vorr_s8(v23_3, v24_3)
    int128_t v22_5
    v22_5.d = v6_14.d u>> 0x11
    v22_5:4.d = v6_14:4.d u>> 0x11
    v23_3.d = v6_14.d << 0xf
    v23_3:4.d = v6_14:4.d << 0xf
    int32_t x3_22 = ror.d(x5_19 - 0x13ac2bc4 + x2_19, 0x19)
    int128_t v20_6 = v20_5 ^ vorr_s8(v23_3, v22_5)
    int128_t v22_6
    v22_6.d = v20_6.d u>> 0x11
    v22_6:4.d = v20_6:4.d u>> 0x11
    v23_3.d = v20_6.d << 0xf
    v23_3:4.d = v20_6:4.d << 0xf
    int32_t x11_25 = fp_6 + x11_16 + x3_22 + ((x20_7 & x2_19) | (x11_22 & not.d(x2_19)))
    v24_3.d = v20_6.d u>> 9
    v24_3:4.d = v20_6:4.d u>> 9
    v26.d = v20_6.d << 0x17
    v26:4.d = v20_6:4.d << 0x17
    int32_t x10_47 =
        x21_10 + (x25_3 ^ x11_16) + (((x0_25 | x5_17) & x21_11) | (x0_25 & x5_17)) + (x3_22 ^ x5_19)
    int32_t x11_26 = x11_25 ^ ror.d(x11_25, 0x17) ^ ror.d(x11_25, 0xf)
    uint128_t v23_4 = v18_7 ^ v21_5 ^ v20_6 ^ vorr_s8(v23_3, v22_6) ^ vorr_s8(v26, v24_3)
    int32_t x20_8 = ror.d(x20_7, 0xd)
    int128_t v20_8
    v20_8.d = v23_4.d u>> 0x11
    v20_8:4.d = v23_4:4.d u>> 0x11
    int128_t v21_7
    v21_7.d = v23_4.d << 0xf
    v21_7:4.d = v23_4:4.d << 0xf
    int128_t v24_4 = vzip1_s32(vdup_laneq_s32(v6_14, 1), v23_4)
    int128_t v25_3
    v25_3:4.d = x14_21
    int128_t v7_13 = v7_12 ^ vorr_s8(v21_7, v20_8)
    int128_t v20_9
    v20_9.d = v25_3.d u>> 0x19
    v20_9:4.d = v25_3:4.d u>> 0x19
    v21_7.d = v25_3.d << 7
    v21_7:4.d = v25_3:4.d << 7
    int32_t x5_22 = ror.d(x10_47, 0x14)
    int128_t v22_7
    v22_7.d = v7_13.d u>> 0x11
    v22_7:4.d = v7_13:4.d u>> 0x11
    v25_3.d = v7_13.d << 0xf
    v25_3:4.d = v7_13:4.d << 0xf
    v26.d = v7_13.d u>> 9
    v26:4.d = v7_13:4.d u>> 9
    int128_t v27
    v27.d = v7_13.d << 0x17
    v27:4.d = v7_13:4.d << 0x17
    int32_t x19_20 = ror.d(x5_22 - 0x27585787 + x11_26, 0x19)
    int32_t fp_7 = v6_14:4.d
    int32_t x21_12 = v6_14.d
    v7 = v6_14 ^ vorr_s8(v21_7, v20_9) ^ v7_13 ^ vorr_s8(v25_3, v22_7) ^ vorr_s8(v27, v26)
    int32_t x26_8 = v23_4:4.d
    int32_t x19_21 = v23_4.d
    int32_t x6_17 = x11_22 + fp_3 + x19_20 + ((x2_19 & x11_26) | (x20_8 & not.d(x11_26)))
    int32_t x7_25 = v7.d
    int32_t x3_29 =
        x21_11 + (x26_4 ^ fp_3) + (((x10_47 | x0_25) & x7_22) | (x10_47 & x0_25)) + (x19_20 ^ x5_22)
    int32_t x4_21 = x21_12 ^ fp_7 ^ ror.d(x7_25, 0x11)
    int128_t v21_8
    v21_8.d = float.s(x19_21 ^ ror.d(x26_8, 0x19) ^ x4_21 ^ ror.d(x4_21, 0x11))
    uint128_t v20_12
    v20_12.d = ror.d(x4_21, 9)
    int32_t x0_26 = ror.d(x0_25, 0x17)
    int32_t x5_28 = x6_17 ^ ror.d(x6_17, 0x17) ^ ror.d(x6_17, 0xf)
    int32_t x2_20 = ror.d(x2_19, 0xd)
    int32_t x6_20 = ror.d(x3_29, 0x14)
    int32_t x2_24 = ror.d(x6_20 - 0x4eb0af0d + x5_28, 0x19)
    int32_t x8_50 = x20_8 + lr_4 + x2_24 + ((x11_26 & x5_28) | (x2_20 & not.d(x5_28)))
    int32_t x6_22 =
        x7_22 + (x15_36 ^ lr_4) + (((x3_29 | x10_47) & x0_26) | (x3_29 & x10_47)) + (x2_24 ^ x6_20)
    int32_t x10_48 = ror.d(x10_47, 0x17)
    int32_t x8_51 = x8_50 ^ ror.d(x8_50, 0x17) ^ ror.d(x8_50, 0xf)
    int32_t x11_27 = ror.d(x11_26, 0xd)
    int32_t x0_34 = ror.d(x6_22, 0x14)
    int32_t x4_28 = ror.d(x0_34 + 0x629ea1e7 + x8_51, 0x19)
    int32_t x11_30 = x2_20 + x16_30 + x4_28 + ((x5_28 & x8_51) | (x11_27 & not.d(x8_51)))
    int32_t x10_52 =
        x0_26 + (x24_4 ^ x16_30) + (((x6_22 | x3_29) & x10_48) | (x6_22 & x3_29)) + (x4_28 ^ x0_34)
    int32_t x3_30 = ror.d(x3_29, 0x17)
    int32_t x11_31 = x11_30 ^ ror.d(x11_30, 0x17) ^ ror.d(x11_30, 0xf)
    int32_t x5_29 = ror.d(x5_28, 0xd)
    int32_t x4_33 = ror.d(x10_52, 0x14)
    int32_t x5_33 = ror.d(x4_33 - 0x3ac2bc32 + x11_31, 0x19)
    int32_t x3_35 = x11_27 + x25_3 + x5_33 + ((x8_51 & x11_31) | (x5_29 & not.d(x11_31)))
    int32_t x4_35 =
        x10_48 + (x10_8 ^ x25_3) + (((x10_52 | x6_22) & x3_30) | (x10_52 & x6_22)) + (x5_33 ^ x4_33)
    int32_t x6_23 = ror.d(x6_22, 0x17)
    int32_t x3_36 = x3_35 ^ ror.d(x3_35, 0x17) ^ ror.d(x3_35, 0xf)
    int32_t x8_52 = ror.d(x8_51, 0xd)
    int32_t x6_25 = ror.d(x4_35, 0x14)
    int32_t x0_41 = ror.d(x6_25 - 0x75857863 + x3_36, 0x19)
    int32_t x8_55 = x5_29 + x26_4 + x0_41 + ((x11_31 & x3_36) | (x8_52 & not.d(x3_36)))
    int32_t x0_42 = v19_4.d
    int32_t x5_40 =
        x3_30 + (x17_40 ^ x26_4) + (((x4_35 | x10_52) & x6_23) | (x4_35 & x10_52)) + (x0_41 ^ x6_25)
    int32_t x10_53 = ror.d(x10_52, 0x17)
    int32_t x8_56 = x8_55 ^ ror.d(x8_55, 0x17) ^ ror.d(x8_55, 0xf)
    int32_t x11_32 = ror.d(x11_31, 0xd)
    int32_t x19_27 = ror.d(x5_40, 0x14)
    int32_t x7_33 = ror.d(x19_27 + 0x14f50f3b + x8_56, 0x19)
    int32_t x11_35 = x8_52 + x15_36 + x7_33 + ((x3_36 & x8_56) | (x11_32 & not.d(x8_56)))
    int32_t x10_57 =
        x6_23 + (x22_5 ^ x15_36) + (((x5_40 | x4_35) & x10_53) | (x5_40 & x4_35)) + (x7_33 ^ x19_27)
    int32_t x4_36 = ror.d(x4_35, 0x17)
    int32_t x11_36 = x11_35 ^ ror.d(x11_35, 0x17) ^ ror.d(x11_35, 0xf)
    int32_t x3_37 = ror.d(x3_36, 0xd)
    int32_t x4_38 = ror.d(x10_57, 0x14)
    int32_t x15_46 = ror.d(x4_38 + 0x29ea1e76 + x11_36, 0x19)
    int32_t x3_40 = x11_32 + x24_4 + x15_46 + ((x8_56 & x11_36) | (x3_37 & not.d(x11_36)))
    int32_t x6_30 = x10_53 + (x0_42 ^ x24_4) + (((x10_57 | x5_40) & x4_36) | (x10_57 & x5_40))
        + (x15_46 ^ x4_38)
    int32_t x4_40 = ror.d(x5_40, 0x17)
    int32_t x23_10 = x3_40 ^ ror.d(x3_40, 0x17) ^ ror.d(x3_40, 0xf)
    int32_t x8_57 = ror.d(x8_56, 0xd)
    int32_t x4_42 = ror.d(x6_30, 0x14)
    int32_t x3_47 = ror.d(x4_42 + 0x53d43cec + x23_10, 0x19)
    int32_t x8_60 = x3_37 + x10_8 + x3_47 + ((x11_36 & x23_10) | (x8_57 & not.d(x23_10)))
    int32_t x13_27 = v16_4.d
    int32_t x24_6 =
        x4_36 + (x14_21 ^ x10_8) + (((x6_30 | x10_57) & x4_40) | (x6_30 & x10_57)) + (x3_47 ^ x4_42)
    int32_t x10_58 = ror.d(x10_57, 0x17)
    int32_t x8_61 = x8_60 ^ ror.d(x8_60, 0x17) ^ ror.d(x8_60, 0xf)
    int32_t x11_37 = ror.d(x11_36, 0xd)
    int32_t x5_46 = ror.d(x24_6, 0x14)
    int32_t x2_33 = ror.d(x5_46 - 0x58578628 + x8_61, 0x19)
    int32_t x11_40 = x8_57 + x17_40 + x2_33 + ((x23_10 & x8_61) | (x11_37 & not.d(x8_61)))
    int32_t x5_48 =
        x4_40 + (x25_4 ^ x17_40) + (((x24_6 | x6_30) & x10_58) | (x24_6 & x6_30)) + (x2_33 ^ x5_46)
    int32_t x7_37 = ror.d(x6_30, 0x17)
    int32_t x6_31 = x11_40 ^ ror.d(x11_40, 0x17) ^ ror.d(x11_40, 0xf)
    int32_t x23_11 = ror.d(x23_10, 0xd)
    int32_t x17_45 = ror.d(x5_48, 0x14)
    int128_t v22_8
    v22_8.d = float.s(x27_4)
    int32_t x7_41 = ror.d(x17_45 + 0x4f50f3b1 + x6_31, 0x19)
    int128_t v28_1 = vzip1_s32(v22_8, v19_4)
    int128_t v22_9 = vdup_laneq_s32(v7, 1)
    int32_t x15_47 = v18_7:4.d
    int32_t x8_62 = ror.d(x8_61, 0xd)
    int128_t v25_4 = vzip1_s32(v22_9, v19_4)
    int128_t v19_5 = vdup_laneq_s32(v23_4, 1)
    v23_4.d = x14_21
    int32_t x7_42 =
        x10_58 + (x13_27 ^ x22_5) + (((x5_48 | x24_6) & x7_37) | (x5_48 & x24_6)) + (x7_41 ^ x17_45)
    int32_t x14_22 = x11_37 + x22_5 + x7_41 + ((x8_61 & x6_31) | (x23_11 & not.d(x6_31)))
    int32_t x11_45 = ror.d(x24_6, 0x17)
    int32_t x19_30 = x14_22 ^ ror.d(x14_22, 0x17) ^ ror.d(x14_22, 0xf)
    int32_t x14_25 = ror.d(x7_42, 0x14)
    int32_t x9_53 = v7:4.d
    int32_t x8_66 = ror.d(x14_25 - 0x615e189e + x19_30, 0x19)
    int32_t x14_27 = x23_11 + x0_42 + x8_66 + ((x6_31 & x19_30) | (x8_62 & not.d(x19_30)))
    int32_t x8_68 =
        x7_37 + (x12_21 ^ x0_42) + (((x7_42 | x5_48) & x11_45) | (x7_42 & x5_48)) + (x8_66 ^ x14_25)
    int32_t x0_44 = ror.d(x6_31, 0xd)
    int32_t x10_66 = ror.d(x5_48, 0x17)
    int32_t x14_28 = x14_27 ^ ror.d(x14_27, 0x17) ^ ror.d(x14_27, 0xf)
    int32_t x6_35 = ror.d(x8_68, 0x14)
    int32_t x24_11 = ror.d(x6_35 + 0x3d43cec5 + x14_28, 0x19)
    int32_t x0_47 = x8_62 + x14_21 + x24_11 + ((x19_30 & x14_28) | (x0_44 & not.d(x14_28)))
    int32_t x6_37 = x11_45 + (x15_47 ^ x14_21) + (((x8_68 | x7_42) & x10_66) | (x8_68 & x7_42))
        + (x24_11 ^ x6_35)
    int32_t x7_43 = ror.d(x7_42, 0x17)
    int32_t x0_48 = x0_47 ^ ror.d(x0_47, 0x17) ^ ror.d(x0_47, 0xf)
    int32_t x19_31 = ror.d(x19_30, 0xd)
    int32_t x24_16 = ror.d(x6_37, 0x14)
    int32_t x19_35 = ror.d(x24_16 + x0_48 + 0x7a879d8a, 0x19)
    int32_t x5_51 = x0_44 + x25_4 + x19_35 + ((x14_28 & x0_48) | (x19_31 & not.d(x0_48)))
    int32_t x11_50 =
        x10_66 + (x8_35 ^ x25_4) + (((x6_37 | x8_68) & x7_43) | (x6_37 & x8_68)) + (x19_35 ^ x24_16)
    int32_t x8_69 = ror.d(x8_68, 0x17)
    int32_t x5_52 = x5_51 ^ ror.d(x5_51, 0x17) ^ ror.d(x5_51, 0xf)
    int32_t x14_29 = ror.d(x14_28, 0xd)
    int32_t x24_18 = ror.d(x6_37, 0x17)
    v27.d = x12_21
    v27:4.d = x12_21
    int64_t v23_5
    v23_5.d = x12_21
    int32_t x7_50 = ror.d(x0_48, 0xd)
    int32_t x6_39 = ror.d(x11_50, 0x14)
    int32_t x0_52 = ror.d(x6_39 + x5_52 - 0xaf0c4ec, 0x19)
    int32_t x13_30 = x19_31 + x13_27 + x0_52 + ((x0_48 & x5_52) | (x14_29 & not.d(x5_52)))
    int128_t v26_1 = vzip1_s32(v19_5, v7)
    v19_5:4.d = x10_8
    int128_t v29
    v29.d = v28_1.d u>> 0x19
    v29:4.d = v28_1:4.d u>> 0x19
    v28_1.d <<= 7
    v28_1:4.d <<= 7
    int32_t x8_73 =
        x7_43 + (x27_4 ^ x13_27) + (((x11_50 | x6_37) & x8_69) | (x11_50 & x6_37)) + (x0_52 ^ x6_39)
    int128_t v28_2 = vorr_s8(v28_1, v29)
    v29.d = x27_4
    v29:4.d = x27_4
    int128_t v24_5 = v19_5 ^ v27
    v19_5.d = v23_5.d u>> 0x19
    v19_5:4.d = v23_5:4.d u>> 0x19
    v27.d = v23_5.d << 7
    v27:4.d = v23_5:4.d << 7
    int128_t v21_9 = vzip1_s32(v21_8, v7)
    int32_t x13_31 = x13_30 ^ ror.d(x13_30, 0x17) ^ ror.d(x13_30, 0xf)
    int128_t v23_6 = v25_4 ^ v29
    int128_t v25_5 = vorr_s8(v27, v19_5)
    int128_t v19_6 = v21_9 ^ v20_12
    int32_t x4_46 = ror.d(x11_50, 0x17)
    int32_t x24_19 = ror.d(x8_73, 0x14)
    int128_t v21_10 = vzip1_s32(v22_9, v19_6)
    int128_t v20_13 = v26_1 ^ v25_5
    v25_5.d = v21_10.d u>> 0x11
    v25_5:4.d = v21_10:4.d u>> 0x11
    v21_10.d <<= 0xf
    v21_10:4.d <<= 0xf
    int32_t x0_53 = ror.d(x5_52, 0xd)
    int32_t x14_37 = ror.d(x24_19 + x13_31 - 0x15e189d7, 0x19)
    int128_t v21_12 = v24_4 ^ v23_4 ^ vorr_s8(v21_10, v25_5)
    v25_5.d = v21_12.d u>> 0x11
    v25_5:4.d = v21_12:4.d u>> 0x11
    v26_1.d = v21_12.d << 0xf
    v26_1:4.d = v21_12:4.d << 0xf
    int32_t x12_24 = x14_29 + x12_21 + x14_37 + ((x5_52 & x13_31) | (x7_50 & not.d(x13_31)))
    v27.d = v21_12.d u>> 9
    v27:4.d = v21_12:4.d u>> 9
    v29.d = v21_12.d << 0x17
    v29:4.d = v21_12:4.d << 0x17
    int32_t x11_54 = x8_69 + (fp_7 ^ x12_21) + (((x8_73 | x11_50) & x24_18) | (x8_73 & x11_50))
        + (x14_37 ^ x24_19)
    int32_t x2_37 = ror.d(x11_54, 0x14)
    int32_t x12_25 = x12_24 ^ ror.d(x12_24, 0x17) ^ ror.d(x12_24, 0xf)
    v22_9:4.d = x27_4
    v20 = v20_13 ^ v21_12 ^ vorr_s8(v26_1, v25_5) ^ vorr_s8(v29, v27)
    int32_t x25_6 = ror.d(x13_31, 0xd)
    int128_t v25_7 = vshl_u32(v20, v3_1)
    int128_t v22_10
    v22_10:4.d = x28_8
    int32_t x0_55 = ror.d(x2_37 + x12_25 - 0x2bc313ad, 0x19)
    int128_t v27_1 = vorr_s8(vshl_u32(v20, v0), v25_7)
    v25_7.d = v22_10.d u>> 0x11
    v25_7:4.d = v22_10:4.d u>> 0x11
    int128_t v26_2
    v26_2.d = v22_10.d << 0xf
    v26_2:4.d = v22_10:4.d << 0xf
    int32_t x13_34 = x7_50 + x15_47 + x0_55 + ((x13_31 & x12_25) | (x0_53 & not.d(x12_25)))
    int128_t v24_6 = v24_5 ^ vorr_s8(v26_2, v25_7)
    int32_t x14_42 = x24_18 + (x1_21 ^ x15_47) + (((x11_54 | x8_73) & x4_46) | (x11_54 & x8_73))
        + (x0_55 ^ x2_37)
    int32_t x9_55 = v20.d
    int128_t v25_8
    v25_8.d = v24_6.d u>> 0x11
    v25_8:4.d = v24_6:4.d u>> 0x11
    v26_2.d = v24_6.d << 0xf
    v26_2:4.d = v24_6:4.d << 0xf
    int32_t x0_56 = ror.d(x14_42, 0x14)
    int32_t x15_51 = x13_34 ^ ror.d(x13_34, 0x17) ^ ror.d(x13_34, 0xf)
    int128_t v28_3
    v28_3.d = v24_6.d u>> 9
    v28_3:4.d = v24_6:4.d u>> 9
    v29.d = v24_6.d << 0x17
    v29:4.d = v24_6:4.d << 0x17
    int32_t x8_74 = ror.d(x8_73, 0x17)
    v21 = v22_9 ^ v28_2 ^ v24_6 ^ vorr_s8(v26_2, v25_8) ^ vorr_s8(v29, v28_3)
    int32_t x3_51 = ror.d(x0_56 + x15_51 - 0x57862759, 0x19)
    int128_t v24_7
    v24_7.d = v21.d u>> 0x11
    v24_7:4.d = v21:4.d u>> 0x11
    int128_t v25_9
    v25_9.d = v21.d << 0xf
    v25_9:4.d = v21:4.d << 0xf
    int32_t x8_78 = x4_46 + (x28_8 ^ x8_35) + (((x14_42 | x11_54) & x8_74) | (x14_42 & x11_54))
        + (x3_51 ^ x0_56)
    int128_t v25_10 = v23_6 ^ vorr_s8(v25_9, v24_7)
    int32_t x13_38 = x0_53 + x8_35 + x3_51 + ((x12_25 & x15_51) | (x25_6 & not.d(x15_51)))
    int32_t x27_5 = ror.d(x11_54, 0x17)
    int32_t x17_48 = ror.d(x14_42, 0x17)
    v23_6.d = v25_10.d u>> 0x11
    v23_6:4.d = v25_10:4.d u>> 0x11
    int128_t v24_8
    v24_8.d = v25_10.d << 0xf
    v24_8:4.d = v25_10:4.d << 0xf
    v28_3.d = v25_10.d u>> 9
    v28_3:4.d = v25_10:4.d u>> 9
    v29.d = v25_10.d << 0x17
    v29:4.d = v25_10:4.d << 0x17
    int128_t v26_3 = vorr_s8(v24_8, v23_6)
    int128_t v23_7 = vorr_s8(v29, v28_3)
    int32_t x5_57 = x13_38 ^ ror.d(x13_38, 0x17) ^ ror.d(x13_38, 0xf)
    v28_3.d = float.s(x28_8)
    int32_t x0_59 = ror.d(x8_78, 0x14)
    int32_t x7_54 = ror.d(x5_57, 0xd)
    int128_t v24_9 = vzip1_s32(v28_3, v16_4)
    int32_t x12_26 = ror.d(x12_25, 0xd)
    v29.d = v24_9.d u>> 0x19
    v29:4.d = v24_9:4.d u>> 0x19
    v24_9.d <<= 7
    v24_9:4.d <<= 7
    int32_t x28_9 = ror.d(x15_51, 0xd)
    int32_t x12_28 = ror.d(x0_59 + x5_57 + 0x50f3b14f, 0x19)
    int32_t x2_42 = v21:4.d
    int32_t x12_29 =
        x8_74 + (x26_8 ^ x27_4) + (((x8_78 | x14_42) & x27_5) | (x8_78 & x14_42)) + (x12_28 ^ x0_59)
    int32_t x14_47 = x25_6 + x27_4 + x12_28 + ((x15_51 & x5_57) | (x12_26 & not.d(x5_57)))
    int32_t x24_22 = x14_47 ^ ror.d(x14_47, 0x17) ^ ror.d(x14_47, 0xf)
    int128_t v23_8 = v22_10 ^ vorr_s8(v24_9, v29) ^ v25_10 ^ v26_3 ^ v23_7
    int32_t x20_11 = v23_8.d
    int32_t x0_62 = v21.d
    int32_t x10_71 = x9_55 ^ x28_8 ^ ror.d(x20_11, 0x11)
    int128_t v24_10 = v19_6 ^ v27_1
    v16_4:4.d = v21:4.d
    int128_t v26_4 = vzip1_s32(v28_3, v21) ^ v16_4
    v16_4.d = float.s(x0_62 ^ ror.d(x2_42, 0x19) ^ x10_71 ^ ror.d(x10_71, 0x11))
    v17_4:4.d = v23_8:4.d
    int128_t v25_11
    v25_11.d = ror.d(x10_71, 9)
    int128_t v27_2
    v27_2.d = v17_4.d u>> 0x19
    v27_2:4.d = v17_4:4.d u>> 0x19
    v17_4.d <<= 7
    v17_4:4.d <<= 7
    v16 = vzip1_s32(v16_4, v23_8) ^ v25_11
    int128_t v17_6 = vext_s8(v21, v23_8, 4) ^ vorr_s8(v17_4, v27_2)
    int128_t v22_15 = vext_s8(v23_8, v16, 4)
    int32_t x3_55 = ror.d(x12_29, 0x14)
    v25_11.d = v22_15.d u>> 0x11
    v25_11:4.d = v22_15:4.d u>> 0x11
    v22_15.d <<= 0xf
    v22_15:4.d <<= 0xf
    int128_t v22_17 = v26_4 ^ vorr_s8(v22_15, v25_11)
    int32_t x10_75 = ror.d(x3_55 + x24_22 - 0x5e189d62, 0x19)
    v25_11.d = v22_17.d u>> 0x11
    v25_11:4.d = v22_17:4.d u>> 0x11
    v26_4.d = v22_17.d << 0xf
    v26_4:4.d = v22_17:4.d << 0xf
    v27_2.d = v22_17.d u>> 9
    v27_2:4.d = v22_17:4.d u>> 9
    v28_3.d = v22_17.d << 0x17
    v28_3:4.d = v22_17:4.d << 0x17
    int32_t x15_55 = v18_7.d
    int32_t x10_77 = x12_26 + fp_7 + x10_75 + ((x5_57 & x24_22) | (x28_9 & not.d(x24_22)))
    v22 = v17_6 ^ v22_17 ^ vorr_s8(v26_4, v25_11) ^ vorr_s8(v28_3, v27_2)
    int32_t x3_56 = v23_8:4.d
    int32_t x5_58 = x10_77 ^ ror.d(x10_77, 0x17) ^ ror.d(x10_77, 0xf)
    int32_t x4_55 = v22.d
    int32_t x9_59 = x2_42 ^ x8_35 ^ ror.d(x4_55, 0x11)
    int128_t v25_13 = vshl_u32(v22, v3_1)
    int32_t x8_79 = ror.d(x8_78, 0x17)
    int32_t x11_56 = v24_10:4.d
    int32_t x7_57 = x27_5 + (x15_55 ^ fp_7) + (((x12_29 | x8_78) & x17_48) | (x12_29 & x8_78))
        + (x10_75 ^ x3_55)
    int32_t x17_52 = x3_56 ^ ror.d(x1_21, 0x19) ^ x9_59 ^ ror.d(x9_59, 0x11) ^ ror.d(x9_59, 9)
    int128_t v25_15 = v16 ^ vorr_s8(vshl_u32(v22, v0), v25_13)
    int128_t v26_6 = vzip2_s32(v24_10, v25_15)
    v24_10.d = float.s(v24_10.d ^ x11_56)
    int32_t x1_22 = v20:4.d
    int32_t x27_7 = ror.d(x12_29, 0x17)
    v18 = v23_8 ^ v22
    v23_8:4.d = v25_15:4.d
    int128_t v24_11 = vzip1_s32(v24_10, v25_15)
    v25_15.d = ror.d(x11_56, 0x11)
    int32_t x16_38 = x3_56 ^ x1_21 ^ ror.d(x17_52, 0x11)
    int32_t x13_40 = ror.d(x24_22, 0xd)
    int32_t x26_9 = ror.d(x7_57, 0x14)
    int32_t x16_39 = x4_55 ^ ror.d(x15_55, 0x19) ^ x16_38 ^ ror.d(x16_38, 0x11) ^ ror.d(x16_38, 9)
    int32_t x9_66 = ror.d(x26_9 + x5_58 + 0x43cec53d, 0x19)
    int128_t v17_10 = vshl_u32(v26_6, v4_1)
    int32_t x12_32 = v22.d ^ v18_7.d ^ ror.d(x16_39, 0x11)
    int32_t x9_68 = x28_9 + x1_21 + x9_66 + ((x24_22 & x5_58) | (x7_54 & not.d(x5_58)))
    v17 = v24_11 ^ v25_15 ^ vorr_s8(vshl_u32(v26_6, v1), v17_10)
    int32_t x28_11 = x9_68 ^ ror.d(x9_68, 0x17) ^ ror.d(x9_68, 0xf)
    int32_t x14_55 = x17_52 ^ ror.d(x21_12, 0x19) ^ x12_32 ^ ror.d(x12_32, 0x11) ^ ror.d(x12_32, 9)
    int32_t x10_82 = v17.d
    int32_t x10_83 = (v19_6 ^ v20).d ^ ror.d(x10_82, 0x11)
    int32_t x26_10 =
        x17_48 + (x2_42 ^ x1_21) + (((x7_57 | x12_29) & x8_79) | (x7_57 & x12_29)) + (x9_66 ^ x26_9)
    int32_t lr_7 = x1_22 ^ ror.d(x0_62, 0x19) ^ x10_83 ^ ror.d(x10_83, 0x11) ^ ror.d(x10_83, 9)
    int32_t x10_85 = ror.d(x26_10, 0x14)
    v27 = vshl_u32(v23_8, v5_1)
    int32_t x8_84 = x17_52 ^ x21_12 ^ ror.d(x14_55, 0x11)
    int64_t v23_11 = v17.q ^ vorr_s8(vshl_u32(v23_8, v2), v27)
    int32_t x9_75 = ror.d(x10_85 + x28_11 - 0x78627586, 0x19)
    int32_t x9_76 = v23_11:4.d
    int32_t x22_10 = x16_39 ^ ror.d(x19_21, 0x19) ^ x8_84 ^ ror.d(x8_84, 0x11) ^ ror.d(x8_84, 9)
    int32_t x6_44 = x1_22 ^ x0_62 ^ ror.d(lr_7, 0x11)
    int32_t x13_42 =
        x8_79 + (x9_53 ^ x28_8) + (((x26_10 | x7_57) & x27_7) | (x26_10 & x7_57)) + (x9_75 ^ x10_85)
    int32_t x10_87 = ror.d(x7_57, 0x17)
    int32_t x8_91 = x7_54 + x28_8 + x9_75 + ((x5_58 & x28_11) | (x13_40 & not.d(x28_11)))
    int32_t x8_92 = x8_91 ^ ror.d(x8_91, 0x17) ^ ror.d(x8_91, 0xf)
    int32_t x19_42 = x16_39 ^ x19_21 ^ ror.d(x22_10, 0x11)
    int32_t x19_43 = x14_55 ^ ror.d(x7_25, 0x19) ^ x19_42 ^ ror.d(x19_42, 0x11) ^ ror.d(x19_42, 9)
    int32_t fp_10 = (v16 ^ v22).d ^ ror.d(x9_76, 0x11)
    int32_t x27_13 = v22:4.d
    int32_t x5_59 = ror.d(x5_58, 0xd)
    int32_t x5_61 = ror.d(x13_42, 0x14)
    int32_t lr_14 = ror.d(x5_61 + x8_92 + 0xf3b14f5, 0x19)
    int32_t x24_25 = x13_40 + x26_8 + lr_14 + ((x28_11 & x8_92) | (x5_59 & not.d(x8_92)))
    int32_t x15_58 = v19_6.d
    int32_t x5_63 = x27_7 + (x21_12 ^ x26_8) + (((x13_42 | x26_10) & x10_87) | (x13_42 & x26_10))
        + (lr_14 ^ x5_61)
    int32_t lr_16 = x14_55 ^ x7_25 ^ ror.d(x19_43, 0x11)
    int32_t x24_26 = x24_25 ^ ror.d(x24_25, 0x17) ^ ror.d(x24_25, 0xf)
    int32_t x26_11 = ror.d(x26_10, 0x17)
    int32_t x7_59 = ror.d(x28_11, 0xd)
    int32_t x26_14 = ror.d(x5_63, 0x14)
    int32_t x28_14 = ror.d(x26_14 + x24_26 + 0x1e7629ea, 0x19)
    int32_t x7_62 = x5_59 + x15_55 + x28_14 + ((x8_92 & x24_26) | (x7_59 & not.d(x24_26)))
    int32_t x6_49 = x10_87 + (x3_56 ^ x15_55) + (((x5_63 | x13_42) & x26_11) | (x5_63 & x13_42))
        + (x28_14 ^ x26_14)
    int32_t x7_63 = x7_62 ^ ror.d(x7_62, 0x17) ^ ror.d(x7_62, 0xf)
    int32_t x13_43 = ror.d(x13_42, 0x17)
    int32_t x8_93 = ror.d(x8_92, 0xd)
    int32_t x28_16 = ror.d(x6_49, 0x14)
    int32_t lr_22 = ror.d(x28_16 + x7_63 + 0x3cec53d4, 0x19)
    int32_t x8_96 = x7_59 + x2_42 + lr_22 + ((x24_26 & x7_63) | (x8_93 & not.d(x7_63)))
    int32_t x13_47 =
        x26_11 + (x9_55 ^ x2_42) + (((x6_49 | x5_63) & x13_43) | (x6_49 & x5_63)) + (lr_22 ^ x28_16)
    int32_t x8_97 = x8_96 ^ ror.d(x8_96, 0x17) ^ ror.d(x8_96, 0xf)
    int32_t x2_46 = ror.d(x5_63, 0x17)
    int32_t x24_27 = ror.d(x24_26, 0xd)
    int32_t x28_21 = ror.d(x13_47, 0x14)
    int32_t lr_25 = ror.d(x28_21 + x8_97 + 0x79d8a7a8, 0x19)
    int32_t x24_30 = x8_93 + x9_53 + lr_25 + ((x7_63 & x8_97) | (x24_27 & not.d(x8_97)))
    int32_t x2_50 = x13_43 + (x19_21 ^ x9_53) + (((x13_47 | x6_49) & x2_46) | (x13_47 & x6_49))
        + (lr_25 ^ x28_21)
    int32_t x24_31 = x24_30 ^ ror.d(x24_30, 0x17) ^ ror.d(x24_30, 0xf)
    int32_t x6_50 = ror.d(x6_49, 0x17)
    int32_t x7_64 = ror.d(x7_63, 0xd)
    int32_t x7_66 = ror.d(x2_50, 0x14)
    int32_t x28_27 = ror.d(x7_66 + x24_31 - 0xc4eb0b0, 0x19)
    int32_t x6_55 = x24_27 + x21_12 + x28_27 + ((x8_97 & x24_31) | (x7_64 & not.d(x24_31)))
    int32_t x5_67 = x2_46 + (v22.d ^ v6_14.d) + (((x2_50 | x13_47) & x6_50) | (x2_50 & x13_47))
        + (x28_27 ^ x7_66)
    int32_t x13_48 = ror.d(x13_47, 0x17)
    int32_t x6_56 = x6_55 ^ ror.d(x6_55, 0x17) ^ ror.d(x6_55, 0xf)
    int32_t x8_98 = ror.d(x8_97, 0xd)
    int32_t x25_21 = ror.d(x5_67, 0x14)
    int32_t x26_26 = ror.d(x25_21 + x6_56 - 0x189d615f, 0x19)
    int32_t x8_101 = x7_64 + x3_56 + x26_26 + ((x24_31 & x6_56) | (x8_98 & not.d(x6_56)))
    int32_t x13_52 =
        x6_50 + (x0_62 ^ x3_56) + (((x5_67 | x2_50) & x13_48) | (x5_67 & x2_50)) + (x26_26 ^ x25_21)
    int32_t x2_51 = ror.d(x2_50, 0x17)
    int32_t x8_102 = x8_101 ^ ror.d(x8_101, 0x17) ^ ror.d(x8_101, 0xf)
    int32_t x24_32 = ror.d(x24_31, 0xd)
    int32_t x3_62 = ror.d(x13_52, 0x14)
    int32_t x24_36 = ror.d(x3_62 + x8_102 - 0x313ac2bd, 0x19)
    int32_t x7_72 = x8_98 + x9_55 + x24_36 + ((x6_56 & x8_102) | (x24_32 & not.d(x8_102)))
    int32_t x2_55 =
        x13_48 + (v7.d ^ v20.d) + (((x13_52 | x5_67) & x2_51) | (x13_52 & x5_67)) + (x24_36 ^ x3_62)
    int32_t x6_57 = ror.d(x6_56, 0xd)
    int32_t x7_73 = x7_72 ^ ror.d(x7_72, 0x17) ^ ror.d(x7_72, 0xf)
    int32_t x5_68 = ror.d(x5_67, 0x17)
    int32_t x23_21 = ror.d(x2_55, 0x14)
    int32_t x24_40 = ror.d(x23_21 - 0x62758579 + x7_73, 0x19)
    int32_t x6_60 = x24_32 + x19_21 + x24_40 + ((x8_102 & x7_73) | (x6_57 & not.d(x7_73)))
    int32_t x5_72 = x2_51 + (x17_52 ^ x19_21) + (((x2_55 | x13_52) & x5_68) | (x2_55 & x13_52))
        + (x24_40 ^ x23_21)
    int32_t x13_53 = ror.d(x13_52, 0x17)
    int32_t x6_61 = x6_60 ^ ror.d(x6_60, 0x17) ^ ror.d(x6_60, 0xf)
    int32_t x8_103 = ror.d(x8_102, 0xd)
    int32_t x21_22 = ror.d(x5_72, 0x14)
    int32_t x3_69 = ror.d(x21_22 + 0x3b14f50f + x6_61, 0x19)
    int32_t x8_106 = x6_57 + x4_55 + x3_69 + ((x7_73 & x6_61) | (x8_103 & not.d(x6_61)))
    int32_t x13_57 =
        x5_68 + v18.d + (((x5_72 | x2_55) & x13_53) | (x5_72 & x2_55)) + (x3_69 ^ x21_22)
    int32_t x2_56 = ror.d(x2_55, 0x17)
    int32_t x8_107 = x8_106 ^ ror.d(x8_106, 0x17) ^ ror.d(x8_106, 0xf)
    int32_t x7_74 = ror.d(x7_73, 0xd)
    int32_t x3_74 = ror.d(x13_57, 0x14)
    int32_t x23_28 = ror.d(x3_74 + 0x7629ea1e + x8_107, 0x19)
    int32_t x0_65 = x8_103 + x0_62 + x23_28 + ((x6_61 & x8_107) | (x7_74 & not.d(x8_107)))
    int32_t x23_29 = v16.d
    int32_t x2_60 = x13_53 + (v19_6.d ^ v21.d) + (((x13_57 | x5_72) & x2_56) | (x13_57 & x5_72))
        + (x23_28 ^ x3_74)
    int32_t x5_73 = ror.d(x5_72, 0x17)
    int32_t x0_66 = x0_65 ^ ror.d(x0_65, 0x17) ^ ror.d(x0_65, 0xf)
    int32_t x6_62 = ror.d(x6_61, 0xd)
    int32_t x7_80 = ror.d(x2_60, 0x14)
    int32_t x6_66 = ror.d(x7_80 - 0x13ac2bc4 + x0_66, 0x19)
    int32_t x5_78 = x7_74 + x7_25 + x6_66 + ((x8_107 & x0_66) | (x6_62 & not.d(x0_66)))
    int32_t x4_60 =
        x2_56 + (x16_39 ^ x7_25) + (((x2_60 | x13_57) & x5_73) | (x2_60 & x13_57)) + (x6_66 ^ x7_80)
    int32_t x13_58 = ror.d(x13_57, 0x17)
    int32_t x5_79 = x5_78 ^ ror.d(x5_78, 0x17) ^ ror.d(x5_78, 0xf)
    int32_t x8_108 = ror.d(x8_107, 0xd)
    int32_t x6_71 = ror.d(x4_60, 0x14)
    int32_t x3_81 = ror.d(x6_71 - 0x27585787 + x5_79, 0x19)
    int32_t x8_111 = x6_62 + x17_52 + x3_81 + ((x0_66 & x5_79) | (x8_108 & not.d(x5_79)))
    int32_t x13_62 =
        x5_73 + (x23_29 ^ x17_52) + (((x4_60 | x2_60) & x13_58) | (x4_60 & x2_60)) + (x3_81 ^ x6_71)
    int32_t x0_67 = ror.d(x0_66, 0xd)
    int32_t x8_112 = x8_111 ^ ror.d(x8_111, 0x17) ^ ror.d(x8_111, 0xf)
    int32_t x2_61 = ror.d(x2_60, 0x17)
    int32_t x2_63 = ror.d(x13_62, 0x14)
    int32_t x6_76 = ror.d(x2_63 - 0x4eb0af0d + x8_112, 0x19)
    int32_t x0_70 = x8_108 + x20_11 + x6_76 + ((x5_79 & x8_112) | (x0_67 & not.d(x8_112)))
    int32_t x17_60 = x13_58 + (x1_22 ^ x20_11) + (((x13_62 | x4_60) & x2_61) | (x13_62 & x4_60))
        + (x6_76 ^ x2_63)
    int32_t x4_61 = ror.d(x4_60, 0x17)
    int32_t x0_71 = x0_70 ^ ror.d(x0_70, 0x17) ^ ror.d(x0_70, 0xf)
    int32_t x5_80 = ror.d(x5_79, 0xd)
    int32_t x6_81 = ror.d(x17_60, 0x14)
    int32_t x5_84 = ror.d(x6_81 + 0x629ea1e7 + x0_71, 0x19)
    int32_t x15_61 = x0_67 + x15_58 + x5_84 + ((x8_112 & x0_71) | (x5_80 & not.d(x0_71)))
    int32_t x3_85 = x2_61 + (x14_55 ^ x15_58) + (((x17_60 | x13_62) & x4_61) | (x17_60 & x13_62))
        + (x5_84 ^ x6_81)
    int32_t x13_63 = ror.d(x13_62, 0x17)
    int32_t x15_62 = x15_61 ^ ror.d(x15_61, 0x17) ^ ror.d(x15_61, 0xf)
    int32_t x8_113 = ror.d(x8_112, 0xd)
    int32_t x4_69 = ror.d(x3_85, 0x14)
    int32_t x2_70 = ror.d(x4_69 - 0x3ac2bc32 + x15_62, 0x19)
    int32_t x8_116 = x5_80 + x16_39 + x2_70 + ((x0_71 & x15_62) | (x8_113 & not.d(x15_62)))
    int32_t x13_67 = x4_61 + (x27_13 ^ x16_39) + (((x3_85 | x17_60) & x13_63) | (x3_85 & x17_60))
        + (x2_70 ^ x4_69)
    int32_t x17_61 = ror.d(x17_60, 0x17)
    int32_t x8_117 = x8_116 ^ ror.d(x8_116, 0x17) ^ ror.d(x8_116, 0xf)
    int32_t x0_72 = ror.d(x0_71, 0xd)
    int32_t x17_63 = ror.d(x13_67, 0x14)
    int32_t x5_90 = ror.d(x17_63 - 0x75857863 + x8_117, 0x19)
    int32_t x0_75 = x8_113 + x23_29 + x5_90 + ((x15_62 & x8_117) | (x0_72 & not.d(x8_117)))
    int32_t x16_47 =
        x13_63 + (v17 ^ v16).d + (((x13_67 | x3_85) & x17_61) | (x13_67 & x3_85)) + (x5_90 ^ x17_63)
    int32_t x3_86 = ror.d(x3_85, 0x17)
    int32_t x0_76 = x0_75 ^ ror.d(x0_75, 0x17) ^ ror.d(x0_75, 0xf)
    int32_t x15_63 = ror.d(x15_62, 0xd)
    int32_t x5_95 = ror.d(x16_47, 0x14)
    int32_t x3_92 = ror.d(x5_95 + 0x14f50f3b + x0_76, 0x19)
    int32_t x15_66 = x0_72 + x1_22 + x3_92 + ((x8_117 & x0_76) | (x15_63 & not.d(x0_76)))
    int32_t x2_74 = x17_61 + (x22_10 ^ x1_22) + (((x16_47 | x13_67) & x3_86) | (x16_47 & x13_67))
        + (x3_92 ^ x5_95)
    int32_t x13_68 = ror.d(x13_67, 0x17)
    int32_t x15_67 = x15_66 ^ ror.d(x15_66, 0x17) ^ ror.d(x15_66, 0xf)
    int32_t x8_118 = ror.d(x8_117, 0xd)
    int32_t x3_97 = ror.d(x2_74, 0x14)
    int32_t x17_70 = ror.d(x3_97 + 0x29ea1e76 + x15_67, 0x19)
    int32_t x8_121 = x15_63 + x14_55 + x17_70 + ((x0_76 & x15_67) | (x8_118 & not.d(x15_67)))
    int32_t x13_72 = x3_86 + (x9_76 ^ x14_55) + (((x2_74 | x16_47) & x13_68) | (x2_74 & x16_47))
        + (x17_70 ^ x3_97)
    int32_t x16_48 = ror.d(x16_47, 0x17)
    int32_t x0_77 = ror.d(x0_76, 0xd)
    int32_t x8_122 = x8_121 ^ ror.d(x8_121, 0x17) ^ ror.d(x8_121, 0xf)
    int32_t x16_50 = ror.d(x13_72, 0x14)
    int32_t x3_102 = ror.d(x16_50 + 0x53d43cec + x8_122, 0x19)
    int32_t x0_80 = x8_118 + x27_13 + x3_102 + ((x15_67 & x8_122) | (x0_77 & not.d(x8_122)))
    int32_t x14_63 = x13_68 + (lr_7 ^ x27_13) + (((x13_72 | x2_74) & x16_48) | (x13_72 & x2_74))
        + (x3_102 ^ x16_50)
    int32_t x16_52 = ror.d(x2_74, 0x17)
    int32_t x0_81 = x0_80 ^ ror.d(x0_80, 0x17) ^ ror.d(x0_80, 0xf)
    int32_t x15_68 = ror.d(x15_67, 0xd)
    int32_t x3_107 = ror.d(x14_63, 0x14)
    int32_t x17_76 = ror.d(x3_107 - 0x58578628 + x0_81, 0x19)
    int32_t x15_71 = x0_77 + x10_82 + x17_76 + ((x8_122 & x0_81) | (x15_68 & not.d(x0_81)))
    int32_t x16_56 = x16_48 + (x19_43 ^ x10_82) + (((x14_63 | x13_72) & x16_52) | (x14_63 & x13_72))
        + (x17_76 ^ x3_107)
    int32_t x13_73 = ror.d(x13_72, 0x17)
    int32_t x15_72 = x15_71 ^ ror.d(x15_71, 0x17) ^ ror.d(x15_71, 0xf)
    int32_t x8_123 = ror.d(x8_122, 0xd)
    int32_t x17_81 = ror.d(x16_56, 0x14)
    int32_t x2_79 = ror.d(x17_81 + 0x4f50f3b1 + x15_72, 0x19)
    int32_t x8_126 = x15_68 + x22_10 + x2_79 + ((x0_81 & x15_72) | (x8_123 & not.d(x15_72)))
    int32_t x17_83 = x16_52
        + (x27_13 ^ ror.d(x17_52, 0x19) ^ x22_10 ^ fp_10 ^ ror.d(fp_10, 0x11) ^ ror.d(fp_10, 9))
        + (((x16_56 | x14_63) & x13_73) | (x16_56 & x14_63)) + (x2_79 ^ x17_81)
    int32_t x14_64 = ror.d(x14_63, 0x17)
    int32_t x8_127 = x8_126 ^ ror.d(x8_126, 0x17) ^ ror.d(x8_126, 0xf)
    int32_t x0_82 = ror.d(x0_81, 0xd)
    int32_t x13_77 = ror.d(x17_83, 0x14)
    int32_t x1_31 = ror.d(x13_77 - 0x615e189e + x8_127, 0x19)
    int32_t x9_84 = x8_123 + x9_76 + x1_31 + ((x15_72 & x8_127) | (x0_82 & not.d(x8_127)))
    int32_t x11_74 = x13_73 + (v23_11.d ^ x9_76 ^ x6_44 ^ ror.d(x6_44, 0x11) ^ ror.d(x6_44, 9))
        + (((x17_83 | x16_56) & x14_64) | (x17_83 & x16_56)) + (x1_31 ^ x13_77)
    int32_t x16_57 = ror.d(x16_56, 0x17)
    int32_t x3_109 = x9_84 ^ ror.d(x9_84, 0x17) ^ ror.d(x9_84, 0xf)
    int32_t* x2_80 = *(arg1 + 0x38)
    int32_t x13_80 = ror.d(x11_74, 0x14)
    int32_t x14_69 = ror.d(x13_80 + 0x3d43cec5 + x3_109, 0x19)
    int32_t x9_89 = x14_64
        + (x22_10 ^ ror.d(x15_58, 0x19) ^ lr_7 ^ lr_16 ^ ror.d(lr_16, 0x11) ^ ror.d(lr_16, 9))
        + (((x11_74 | x17_83) & x16_57) | (x11_74 & x17_83)) + (x14_69 ^ x13_80)
    x9_2 = zx.q(x9_89) ^ zx.q(*x2_80)
    *x2_80 = x9_2.d
    void* x10_100 = *(arg1 + 0x38)
    int32_t x15_73 = ror.d(x15_72, 0xd)
    x13_1 = x11_74 ^ *(x10_100 + 4)
    *(x10_100 + 4) = x13_1
    void* x10_101 = *(arg1 + 0x38)
    i = entry_i
    entry_i -= 1
    x21_1 = *(x10_101 + 8) ^ ror.d(x17_83, 0x17)
    *(x10_101 + 8) = x21_1
    void* x11_76 = *(arg1 + 0x38)
    x10_1 = x16_57 ^ *(x11_76 + 0xc)
    *(x11_76 + 0xc) = x10_1
    void* x16_58 = *(arg1 + 0x38)
    int32_t x11_79 = x0_82 + lr_7 + x14_69 + ((x8_127 & x3_109) | (x15_73 & not.d(x3_109)))
    x11_1 = x11_79 ^ *(x16_58 + 0x10) ^ ror.d(x11_79, 0x17) ^ ror.d(x11_79, 0xf)
    *(x16_58 + 0x10) = x11_1
    void* x14_70 = *(arg1 + 0x38)
    x12_1 = x3_109 ^ *(x14_70 + 0x14)
    *(x14_70 + 0x14) = x12_1
    void* x14_71 = *(arg1 + 0x38)
    x3_1 = *(x14_71 + 0x18) ^ ror.d(x8_127, 0xd)
    *(x14_71 + 0x18) = x3_1
    void* x8_128 = *(arg1 + 0x38)
    x6_1 = x15_73 ^ *(x8_128 + 0x1c)
    *(x8_128 + 0x1c) = x6_1
    arg2 += *(arg1 + 0x20) - *(arg1 + 0x18)
while (i != 1)
