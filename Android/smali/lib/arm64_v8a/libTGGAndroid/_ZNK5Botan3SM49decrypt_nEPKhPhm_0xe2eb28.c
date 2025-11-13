// 函数: _ZNK5Botan3SM49decrypt_nEPKhPhm
// 地址: 0xe2eb28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x10 = *(arg1 + 8)

if (x10 == *(arg1 + 0x10))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SM4::key_schedule(x0, x1) __tailcall

int64_t entry_i

if (entry_i u>= 2)
    arg2 = &arg2[0x20]
    arg3 += 0x20
    int128_t v0
    v0.q = 0xff000000ff
    entry_i -= 2
    
    while (true)
        int32_t x12_1 = *(arg2 - 0x1c)
        int32_t x15_1 = *(arg2 - 0x18)
        int32_t x16_1 = *(arg2 - 0x14)
        int32_t x17_1 = *(arg2 - 0x10)
        int32_t x7_1 = *(arg2 - 0xc)
        int32_t x19_1 = *(arg2 - 8)
        int32_t x20_1 = *(arg2 - 4)
        int32_t x6_1 = x10[0x1e]
        int32_t x13_1 = x10[0x1f]
        int32_t temp0_1 = _byteswap(*(arg2 - 0x20))
        int32_t temp0_2 = _byteswap(x15_1)
        int32_t temp0_3 = _byteswap(x16_1)
        int32_t temp0_4 = _byteswap(x12_1)
        int32_t temp0_5 = _byteswap(x17_1)
        int32_t temp0_6 = _byteswap(x7_1)
        int32_t temp0_7 = _byteswap(x19_1)
        int32_t temp0_8 = _byteswap(x20_1)
        int32_t x7_2 = temp0_3 ^ temp0_2
        int32_t x19_2 = temp0_8 ^ temp0_7
        uint64_t x19_3 = zx.q(x7_2) ^ zx.q(temp0_4) ^ zx.q(x13_1)
        uint64_t x13_2 = zx.q(x19_2) ^ zx.q(temp0_6) ^ zx.q(x13_1)
        uint32_t x20_5 = zx.d(*(&data_854440 + (x19_3 u>> 0x18))) << 0x18
        uint32_t x21_3 = zx.d(*(&data_854440 + (x19_3 & 0xff)))
        uint32_t x23_3 = zx.d(*(&data_854440 + (x13_2 u>> 0x18))) << 0x18
        int32_t x26_2 =
            (0xff00ffff & x20_5) | zx.d(*(&data_854440 + (x19_3 u>> 0x10 & 0xff))) << 0x10
        uint32_t x22_3 = zx.d(*(&data_854440 + (x13_2 & 0xff)))
        int32_t x27_2 =
            (0xff00ffff & x23_3) | zx.d(*(&data_854440 + (x13_2 u>> 0x10 & 0xff))) << 0x10
        int32_t x24_3 = (0xffff00ff & x26_2) | zx.d(*(&data_854440 + (x19_3 u>> 8 & 0xff))) << 8
        int32_t x25_4 = (0xffff00ff & x27_2) | zx.d(*(&data_854440 + (x13_2 u>> 8 & 0xff))) << 8
        int32_t x13_5 = x24_3 | x21_3
        int32_t x21_4 = x25_4 | x22_3
        int32_t x13_10 = x13_5 ^ temp0_1 ^ ((x21_3 << 0x20 | x24_3) u>> 8).d
            ^ ((x13_5 << 0x20 | x20_5) u>> 0x1e).d ^ ((x13_5 << 0x20 | x26_2) u>> 0x16).d
            ^ ((x13_5 << 0x20 | x24_3) u>> 0xe).d
        int32_t x27_3 = x10[0x1c]
        int32_t x21_5 = x10[0x1d]
        int32_t x14_5 = x21_4 ^ temp0_5 ^ ((x22_3 << 0x20 | x25_4) u>> 8).d
            ^ ((x21_4 << 0x20 | x23_3) u>> 0x1e).d ^ ((x21_4 << 0x20 | x27_2) u>> 0x16).d
            ^ ((x21_4 << 0x20 | x25_4) u>> 0xe).d
        uint64_t x5_4 = zx.q(x7_2) ^ zx.q(x6_1) ^ zx.q(x13_10)
        uint64_t x6_3 = zx.q(x19_2) ^ zx.q(x6_1) ^ zx.q(x14_5)
        uint32_t x20_9 = zx.d(*(&data_854440 + (x5_4 u>> 0x18))) << 0x18
        uint32_t x22_6 = zx.d(*(&data_854440 + (x5_4 & 0xff)))
        uint32_t x24_7 = zx.d(*(&data_854440 + (x6_3 u>> 0x18))) << 0x18
        uint32_t x25_7 = zx.d(*(&data_854440 + (x6_3 & 0xff)))
        int32_t x26_6 =
            (0xff00ffff & x20_9) | zx.d(*(&data_854440 + (x5_4 u>> 0x10 & 0xff))) << 0x10
        int32_t x21_8 =
            (0xff00ffff & x24_7) | zx.d(*(&data_854440 + (x6_3 u>> 0x10 & 0xff))) << 0x10
        int32_t x23_8 = (0xffff00ff & x26_6) | zx.d(*(&data_854440 + (x5_4 u>> 8 & 0xff))) << 8
        int32_t x5_8 = (0xffff00ff & x21_8) | zx.d(*(&data_854440 + (x6_3 u>> 8 & 0xff))) << 8
        int32_t x6_6 = x23_8 | x22_6
        int32_t x6_7 = x5_8 | x25_7
        int32_t x17_6 = x6_6 ^ temp0_4 ^ ((x22_6 << 0x20 | x23_8) u>> 8).d
            ^ ((x6_6 << 0x20 | x20_9) u>> 0x1e).d ^ ((x6_6 << 0x20 | x26_6) u>> 0x16).d
            ^ ((x6_6 << 0x20 | x23_8) u>> 0xe).d
        int32_t x4_6 = x6_7 ^ temp0_6 ^ ((x25_7 << 0x20 | x5_8) u>> 8).d
            ^ ((x6_7 << 0x20 | x24_7) u>> 0x1e).d ^ ((x6_7 << 0x20 | x21_8) u>> 0x16).d
            ^ ((x6_7 << 0x20 | x5_8) u>> 0xe).d
        uint64_t x5_10 = zx.q(x13_10) ^ zx.q(temp0_3) ^ zx.q(x21_5) ^ zx.q(x17_6)
        uint64_t x7_6 = zx.q(x14_5) ^ zx.q(temp0_8) ^ zx.q(x21_5) ^ zx.q(x4_6)
        uint32_t x20_13 = zx.d(*(&data_854440 + (x5_10 u>> 0x18))) << 0x18
        uint32_t x21_11 = zx.d(*(&data_854440 + (x5_10 & 0xff)))
        uint32_t x22_10 = zx.d(*(&data_854440 + (x7_6 u>> 0x18))) << 0x18
        int32_t x25_11 =
            (0xff00ffff & x20_13) | zx.d(*(&data_854440 + (x5_10 u>> 0x10 & 0xff))) << 0x10
        uint32_t x19_11 = zx.d(*(&data_854440 + (x7_6 & 0xff)))
        int32_t x27_5 =
            (0xff00ffff & x22_10) | zx.d(*(&data_854440 + (x7_6 u>> 0x10 & 0xff))) << 0x10
        int32_t x23_13 = (0xffff00ff & x25_11) | zx.d(*(&data_854440 + (x5_10 u>> 8 & 0xff))) << 8
        int32_t x24_11 = (0xffff00ff & x27_5) | zx.d(*(&data_854440 + (x7_6 u>> 8 & 0xff))) << 8
        int32_t x5_13 = x23_13 | x21_11
        int32_t x21_12 = x24_11 | x19_11
        int32_t x15_7 = x5_13 ^ temp0_2 ^ ((x21_11 << 0x20 | x23_13) u>> 8).d
            ^ ((x5_13 << 0x20 | x20_13) u>> 0x1e).d ^ ((x5_13 << 0x20 | x25_11) u>> 0x16).d
            ^ ((x5_13 << 0x20 | x23_13) u>> 0xe).d
        int32_t x16_7 = x21_12 ^ temp0_7 ^ ((x19_11 << 0x20 | x24_11) u>> 8).d
            ^ ((x21_12 << 0x20 | x22_10) u>> 0x1e).d ^ ((x21_12 << 0x20 | x27_5) u>> 0x16).d
            ^ ((x21_12 << 0x20 | x24_11) u>> 0xe).d
        uint64_t x5_15 = zx.q(x17_6) ^ zx.q(x13_10) ^ zx.q(x27_3) ^ zx.q(x15_7)
        uint64_t x6_11 = zx.q(x4_6) ^ zx.q(x14_5) ^ zx.q(x27_3) ^ zx.q(x16_7)
        uint32_t x7_12 = zx.d(*(&data_854440 + (x5_15 u>> 0x18))) << 0x18
        uint32_t x23_17 = zx.d(*(&data_854440 + (x6_11 u>> 0x18))) << 0x18
        uint32_t x21_14 = zx.d(*(&data_854440 + (x5_15 & 0xff)))
        int32_t x26_10 =
            (0xff00ffff & x7_12) | zx.d(*(&data_854440 + (x5_15 u>> 0x10 & 0xff))) << 0x10
        uint32_t x22_14 = zx.d(*(&data_854440 + (x6_11 & 0xff)))
        int32_t x27_7 =
            (0xff00ffff & x23_17) | zx.d(*(&data_854440 + (x6_11 u>> 0x10 & 0xff))) << 0x10
        int32_t x25_16 = (0xffff00ff & x26_10) | zx.d(*(&data_854440 + (x5_15 u>> 8 & 0xff))) << 8
        int32_t x28_3 = (0xffff00ff & x27_7) | zx.d(*(&data_854440 + (x6_11 u>> 8 & 0xff))) << 8
        int32_t x5_18 = x25_16 | x21_14
        int32_t lr_1 = x28_3 | x22_14
        int32_t x20_14 = x10[0x1a]
        int32_t x19_12 = x10[0x1b]
        int32_t x24_16 = x5_18 ^ temp0_3 ^ ((x21_14 << 0x20 | x25_16) u>> 8).d
            ^ ((x5_18 << 0x20 | x7_12) u>> 0x1e).d ^ ((x5_18 << 0x20 | x26_10) u>> 0x16).d
            ^ ((x5_18 << 0x20 | x25_16) u>> 0xe).d
        int32_t x25_19 = lr_1 ^ temp0_8 ^ ((x22_14 << 0x20 | x28_3) u>> 8).d
            ^ ((lr_1 << 0x20 | x23_17) u>> 0x1e).d ^ ((lr_1 << 0x20 | x27_7) u>> 0x16).d
            ^ ((lr_1 << 0x20 | x28_3) u>> 0xe).d
        int32_t x26_12 = x16_7 ^ x4_6 ^ x19_12 ^ x25_19
        int32_t x19_13 = x15_7 ^ x17_6 ^ x24_16 ^ x19_12
        int32_t x14_8 = *(&data_854540 + (zx.q(x26_12 u>> 0x18) << 2)) ^ x14_5
            ^ ror.d(*(&data_854540 + ((zx.q(x26_12 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_12 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x21_26 = x14_8 ^ ror.d(*(&data_854540 + ((zx.q(x26_12) & 0xff) << 2)), 0x18)
        int32_t x12_3 = x10[0x18]
        int32_t x22_15 = x10[0x19]
        int32_t x14_9 = x25_19 ^ x16_7 ^ x20_14 ^ x21_26
        int32_t x13_13 = *(&data_854540 + (zx.q(x19_13 u>> 0x18) << 2)) ^ x13_10
            ^ ror.d(*(&data_854540 + ((zx.q(x19_13 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x19_13 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x20_21 = x13_13 ^ ror.d(*(&data_854540 + ((zx.q(x19_13) & 0xff) << 2)), 0x18)
        int32_t x23_21 = x24_16 ^ x15_7 ^ x20_14 ^ x20_21
        int32_t x4_9 = *(&data_854540 + (zx.q(x14_9 u>> 0x18) << 2)) ^ x4_6
            ^ ror.d(*(&data_854540 + ((zx.q(x14_9 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x14_9 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x22_21 = *(&data_854540 + (zx.q(x23_21 u>> 0x18) << 2)) ^ x17_6
            ^ ror.d(*(&data_854540 + ((zx.q(x23_21 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x23_21 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x27_18 = x4_9 ^ ror.d(*(&data_854540 + ((zx.q(x14_9) & 0xff) << 2)), 0x18)
        int32_t x26_18 = x22_21 ^ ror.d(*(&data_854540 + ((zx.q(x23_21) & 0xff) << 2)), 0x18)
        int32_t x4_10 = x21_26 ^ x25_19 ^ x22_15 ^ x27_18
        int32_t x13_16 = x20_21 ^ x24_16 ^ x22_15 ^ x26_18
        int32_t x7_14 = x10[0x16]
        int32_t x5_20 = x10[0x17]
        int32_t x11_4 = x10[0x14]
        int32_t x6_15 = x10[0x15]
        int32_t x17_8 = x10[0x12]
        int32_t x14_11 = x10[0x13]
        int32_t x12_8 = *(&data_854540 + (zx.q(x13_16 u>> 0x18) << 2)) ^ x15_7
            ^ ror.d(*(&data_854540 + ((zx.q(x13_16 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x13_16 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x16_10 = *(&data_854540 + (zx.q(x4_10 u>> 0x18) << 2)) ^ x16_7
            ^ ror.d(*(&data_854540 + ((zx.q(x4_10 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x4_10 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x12_9 = x12_8 ^ ror.d(*(&data_854540 + ((zx.q(x13_16) & 0xff) << 2)), 0x18)
        int32_t x23_30 = x16_10 ^ ror.d(*(&data_854540 + ((zx.q(x4_10) & 0xff) << 2)), 0x18)
        int32_t x16_11 = x26_18 ^ x20_21 ^ x12_3 ^ x12_9
        int32_t x13_19 = x27_18 ^ x21_26 ^ x12_3 ^ x23_30
        int32_t x4_17 = *(&data_854540 + (zx.q(x13_19 u>> 0x18) << 2)) ^ x25_19
            ^ ror.d(*(&data_854540 + ((zx.q(x13_19 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x13_19 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x19_22 = *(&data_854540 + (zx.q(x16_11 u>> 0x18) << 2)) ^ x24_16
            ^ ror.d(*(&data_854540 + ((zx.q(x16_11 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x16_11 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x22_29 = x4_17 ^ ror.d(*(&data_854540 + ((zx.q(x13_19) & 0xff) << 2)), 0x18)
        int32_t x19_23 = x19_22 ^ ror.d(*(&data_854540 + ((zx.q(x16_11) & 0xff) << 2)), 0x18)
        int32_t x15_14 = x23_30 ^ x27_18 ^ x5_20 ^ x22_29
        int32_t x16_15 = x12_9 ^ x26_18 ^ x19_23 ^ x5_20
        int32_t x5_24 = *(&data_854540 + (zx.q(x15_14 u>> 0x18) << 2)) ^ x21_26
            ^ ror.d(*(&data_854540 + ((zx.q(x15_14 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x15_14 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x20_24 = x5_24 ^ ror.d(*(&data_854540 + ((zx.q(x15_14) & 0xff) << 2)), 0x18)
        int32_t x15_17 = *(&data_854540 + (zx.q(x16_15 u>> 0x18) << 2)) ^ x20_21
            ^ ror.d(*(&data_854540 + ((zx.q(x16_15 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x16_15 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x21_31 = x22_29 ^ x23_30 ^ x7_14 ^ x20_24
        int32_t x5_25 = x15_17 ^ ror.d(*(&data_854540 + ((zx.q(x16_15) & 0xff) << 2)), 0x18)
        int32_t x25_22 = x19_23 ^ x12_9 ^ x7_14 ^ x5_25
        int32_t x6_18 = *(&data_854540 + (zx.q(x21_31 u>> 0x18) << 2)) ^ x27_18
            ^ ror.d(*(&data_854540 + ((zx.q(x21_31 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x21_31 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x6_19 = x6_18 ^ ror.d(*(&data_854540 + ((zx.q(x21_31) & 0xff) << 2)), 0x18)
        int32_t x21_34 = *(&data_854540 + (zx.q(x25_22 u>> 0x18) << 2)) ^ x26_18
            ^ ror.d(*(&data_854540 + ((zx.q(x25_22 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x25_22 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x24_22 = x20_24 ^ x22_29 ^ x6_15 ^ x6_19
        int32_t x21_35 = x21_34 ^ ror.d(*(&data_854540 + ((zx.q(x25_22) & 0xff) << 2)), 0x18)
        int32_t x7_23 = x5_25 ^ x19_23 ^ x6_15 ^ x21_35
        int32_t x11_8 = *(&data_854540 + (zx.q(x24_22 u>> 0x18) << 2)) ^ x23_30
            ^ ror.d(*(&data_854540 + ((zx.q(x24_22 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x24_22 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x23_36 = x11_8 ^ ror.d(*(&data_854540 + ((zx.q(x24_22) & 0xff) << 2)), 0x18)
        int32_t x24_25 = x6_19 ^ x20_24 ^ x11_4 ^ x23_36
        int32_t x11_9 = *(&data_854540 + (zx.q(x7_23 u>> 0x18) << 2)) ^ x12_9
            ^ ror.d(*(&data_854540 + ((zx.q(x7_23 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x7_23 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x11_10 = x11_9 ^ ror.d(*(&data_854540 + ((zx.q(x7_23) & 0xff) << 2)), 0x18)
        int32_t x26_23 = x21_35 ^ x5_25 ^ x11_4 ^ x11_10
        int32_t x22_31 = *(&data_854540 + (zx.q(x24_25 u>> 0x18) << 2)) ^ x22_29
            ^ ror.d(*(&data_854540 + ((zx.q(x24_25 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x24_25 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x24_28 = x22_31 ^ ror.d(*(&data_854540 + ((zx.q(x24_25) & 0xff) << 2)), 0x18)
        int32_t x19_26 = *(&data_854540 + (zx.q(x26_23 u>> 0x18) << 2)) ^ x19_23
            ^ ror.d(*(&data_854540 + ((zx.q(x26_23 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_23 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x22_34 = x19_26 ^ ror.d(*(&data_854540 + ((zx.q(x26_23) & 0xff) << 2)), 0x18)
        int32_t x25_37 = x23_36 ^ x6_19 ^ x14_11 ^ x24_28
        int32_t x14_12 = x11_10 ^ x21_35 ^ x22_34 ^ x14_11
        int32_t x17_12 = *(&data_854540 + (zx.q(x25_37 u>> 0x18) << 2)) ^ x20_24
            ^ ror.d(*(&data_854540 + ((zx.q(x25_37 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x25_37 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x20_28 = x17_12 ^ ror.d(*(&data_854540 + ((zx.q(x25_37) & 0xff) << 2)), 0x18)
        int32_t x5_27 = x24_28 ^ x23_36 ^ x17_8 ^ x20_28
        int32_t x13_23 = x10[0x10]
        int32_t x4_19 = x10[0x11]
        int32_t x17_14 = *(&data_854540 + (zx.q(x14_12 u>> 0x18) << 2)) ^ x5_25
            ^ ror.d(*(&data_854540 + ((zx.q(x14_12 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x14_12 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x14_15 = x17_14 ^ ror.d(*(&data_854540 + ((zx.q(x14_12) & 0xff) << 2)), 0x18)
        int32_t x27_32 = x22_34 ^ x11_10 ^ x17_8 ^ x14_15
        int32_t x16_21 = x10[0xe]
        int32_t x15_22 = x10[0xf]
        int32_t x4_22 = *(&data_854540 + (zx.q(x5_27 u>> 0x18) << 2)) ^ x6_19
            ^ ror.d(*(&data_854540 + ((zx.q(x5_27 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x5_27 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x26_28 = x4_22 ^ ror.d(*(&data_854540 + ((zx.q(x5_27) & 0xff) << 2)), 0x18)
        int32_t x21_38 = x20_28 ^ x24_28 ^ x4_19 ^ x26_28
        int32_t x4_25 = *(&data_854540 + (zx.q(x27_32 u>> 0x18) << 2)) ^ x21_35
            ^ ror.d(*(&data_854540 + ((zx.q(x27_32 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x27_32 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x19_39 = x4_25 ^ ror.d(*(&data_854540 + ((zx.q(x27_32) & 0xff) << 2)), 0x18)
        int32_t x17_17 = x14_15 ^ x22_34 ^ x4_19 ^ x19_39
        int32_t x4_29 = *(&data_854540 + (zx.q(x21_38 u>> 0x18) << 2)) ^ x23_36
            ^ ror.d(*(&data_854540 + ((zx.q(x21_38 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x21_38 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x12_15 = x10[0xc]
        int32_t x7_28 = x10[0xd]
        int32_t x21_41 = x4_29 ^ ror.d(*(&data_854540 + ((zx.q(x21_38) & 0xff) << 2)), 0x18)
        int32_t x25_44 = x26_28 ^ x20_28 ^ x13_23 ^ x21_41
        int32_t x23_42 = *(&data_854540 + (zx.q(x17_17 u>> 0x18) << 2)) ^ x11_10
            ^ ror.d(*(&data_854540 + ((zx.q(x17_17 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x17_17 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x17_20 = x23_42 ^ ror.d(*(&data_854540 + ((zx.q(x17_17) & 0xff) << 2)), 0x18)
        int32_t x13_25 = x19_39 ^ x14_15 ^ x13_23 ^ x17_20
        int32_t x23_46 = *(&data_854540 + (zx.q(x25_44 u>> 0x18) << 2)) ^ x24_28
            ^ ror.d(*(&data_854540 + ((zx.q(x25_44 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x25_44 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x23_47 = x23_46 ^ ror.d(*(&data_854540 + ((zx.q(x25_44) & 0xff) << 2)), 0x18)
        int32_t x27_49 = x21_41 ^ x26_28 ^ x15_22 ^ x23_47
        int32_t x22_37 = *(&data_854540 + (zx.q(x13_25 u>> 0x18) << 2)) ^ x22_34
            ^ ror.d(*(&data_854540 + ((zx.q(x13_25 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x13_25 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x22_38 = x22_37 ^ ror.d(*(&data_854540 + ((zx.q(x13_25) & 0xff) << 2)), 0x18)
        int32_t x15_23 = x17_20 ^ x19_39 ^ x22_38 ^ x15_22
        int32_t x13_32 = *(&data_854540 + (zx.q(x27_49 u>> 0x18) << 2)) ^ x20_28
            ^ ror.d(*(&data_854540 + ((zx.q(x27_49 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x27_49 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x24_41 = x13_32 ^ ror.d(*(&data_854540 + ((zx.q(x27_49) & 0xff) << 2)), 0x18)
        int32_t x25_48 = x23_47 ^ x21_41 ^ x16_21 ^ x24_41
        int32_t x13_35 = *(&data_854540 + (zx.q(x15_23 u>> 0x18) << 2)) ^ x14_15
            ^ ror.d(*(&data_854540 + ((zx.q(x15_23 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x15_23 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x20_33 = x13_35 ^ ror.d(*(&data_854540 + ((zx.q(x15_23) & 0xff) << 2)), 0x18)
        int32_t x7_30 = x22_38 ^ x17_20 ^ x16_21 ^ x20_33
        int32_t x27_53 = *(&data_854540 + (zx.q(x25_48 u>> 0x18) << 2)) ^ x26_28
            ^ ror.d(*(&data_854540 + ((zx.q(x25_48 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x25_48 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x27_54 = x27_53 ^ ror.d(*(&data_854540 + ((zx.q(x25_48) & 0xff) << 2)), 0x18)
        int32_t x16_28 = x24_41 ^ x23_47 ^ x7_28 ^ x27_54
        int32_t x19_42 = *(&data_854540 + (zx.q(x7_30 u>> 0x18) << 2)) ^ x19_39
            ^ ror.d(*(&data_854540 + ((zx.q(x7_30 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x7_30 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x7_33 = x19_42 ^ ror.d(*(&data_854540 + ((zx.q(x7_30) & 0xff) << 2)), 0x18)
        int32_t x15_27 = x20_33 ^ x22_38 ^ x7_28 ^ x7_33
        int32_t x12_19 = *(&data_854540 + (zx.q(x16_28 u>> 0x18) << 2)) ^ x21_41
            ^ ror.d(*(&data_854540 + ((zx.q(x16_28 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x16_28 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x19_45 = x12_19 ^ ror.d(*(&data_854540 + ((zx.q(x16_28) & 0xff) << 2)), 0x18)
        int32_t x25_54 = x27_54 ^ x24_41 ^ x12_15 ^ x19_45
        int32_t x12_22 = *(&data_854540 + (zx.q(x15_27 u>> 0x18) << 2)) ^ x17_20
            ^ ror.d(*(&data_854540 + ((zx.q(x15_27 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x15_27 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x17_22 = x12_22 ^ ror.d(*(&data_854540 + ((zx.q(x15_27) & 0xff) << 2)), 0x18)
        int32_t x26_36 = x7_33 ^ x20_33 ^ x12_15 ^ x17_22
        int32_t x16_37 = *(&data_854540 + (zx.q(x25_54 u>> 0x18) << 2)) ^ x23_47
            ^ ror.d(*(&data_854540 + ((zx.q(x25_54 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x25_54 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x21_51 = x16_37 ^ ror.d(*(&data_854540 + ((zx.q(x25_54) & 0xff) << 2)), 0x18)
        int32_t x6_21 = x10[0xa]
        int32_t x5_31 = x10[0xb]
        int32_t x28_17 = x19_45 ^ x27_54 ^ x5_31 ^ x21_51
        int32_t x16_41 = *(&data_854540 + (zx.q(x26_36 u>> 0x18) << 2)) ^ x22_38
            ^ ror.d(*(&data_854540 + ((zx.q(x26_36 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_36 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x16_42 = x16_41 ^ ror.d(*(&data_854540 + ((zx.q(x26_36) & 0xff) << 2)), 0x18)
        int32_t x22_44 = x17_22 ^ x7_33 ^ x16_42 ^ x5_31
        int32_t x5_36 = *(&data_854540 + (zx.q(x28_17 u>> 0x18) << 2)) ^ x24_41
            ^ ror.d(*(&data_854540 + ((zx.q(x28_17 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x28_17 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x25_60 = x5_36 ^ ror.d(*(&data_854540 + ((zx.q(x28_17) & 0xff) << 2)), 0x18)
        int32_t x26_40 = x21_51 ^ x19_45 ^ x6_21 ^ x25_60
        int32_t x11_11 = x10[8]
        int32_t x4_30 = x10[9]
        int32_t x20_38 = *(&data_854540 + (zx.q(x26_40 u>> 0x18) << 2)) ^ x27_54
            ^ ror.d(*(&data_854540 + ((zx.q(x26_40 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_40 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x20_39 = x20_38 ^ ror.d(*(&data_854540 + ((zx.q(x26_40) & 0xff) << 2)), 0x18)
        int32_t x26_43 = x25_60 ^ x21_51 ^ x4_30 ^ x20_39
        int32_t x24_46 = *(&data_854540 + (zx.q(x22_44 u>> 0x18) << 2)) ^ x20_33
            ^ ror.d(*(&data_854540 + ((zx.q(x22_44 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x22_44 u>> 8) & 0xff) << 2)), 0x10)
        int128_t v2
        v2.d = float.s(x24_46)
        int128_t v1
        v1.d = *(&data_854540 + ((zx.q(x22_44) & 0xff) << 2))
        int32_t x19_48 = *(&data_854540 + (zx.q(x26_43 u>> 0x18) << 2)) ^ x19_45
            ^ ror.d(*(&data_854540 + ((zx.q(x26_43 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_43 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x19_49 = x19_48 ^ ror.d(*(&data_854540 + ((zx.q(x26_43) & 0xff) << 2)), 0x18)
        int32_t x22_48 = x20_39 ^ x25_60 ^ x11_11 ^ x19_49
        v1:4.d = *(&data_854540 + ((zx.q(x22_48) & 0xff) << 2))
        int128_t v3
        v3.d = v1.d u>> 0x18
        v3:4.d = v1:4.d u>> 0x18
        v1.d <<= 8
        v1:4.d <<= 8
        int32_t x21_54 = *(&data_854540 + (zx.q(x22_48 u>> 0x18) << 2)) ^ x21_51
            ^ ror.d(*(&data_854540 + ((zx.q(x22_48 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x22_48 u>> 8) & 0xff) << 2)), 0x10)
        v2:4.d = x21_54
        int128_t v1_2 = v2 ^ vorr_s8(v1, v3)
        int32_t x22_51 = v1_2.d
        int32_t x26_48 = x16_42 ^ x17_22 ^ x6_21 ^ x22_51
        int32_t x14_21 = x10[6]
        int32_t x13_39 = x10[7]
        int32_t x21_55 = v1_2:4.d
        int32_t x24_51 = x19_49 ^ x20_39 ^ x13_39 ^ x21_55
        int32_t x27_72 = *(&data_854540 + (zx.q(x26_48 u>> 0x18) << 2)) ^ x7_33
            ^ ror.d(*(&data_854540 + ((zx.q(x26_48 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_48 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x7_38 = x27_72 ^ ror.d(*(&data_854540 + ((zx.q(x26_48) & 0xff) << 2)), 0x18)
        int32_t x25_63 = *(&data_854540 + (zx.q(x24_51 u>> 0x18) << 2)) ^ x25_60
            ^ ror.d(*(&data_854540 + ((zx.q(x24_51 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x24_51 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x23_54 = x22_51 ^ x16_42 ^ x4_30 ^ x7_38
        int32_t x22_52 = x25_63 ^ ror.d(*(&data_854540 + ((zx.q(x24_51) & 0xff) << 2)), 0x18)
        int32_t x26_54 = x21_55 ^ x19_49 ^ x14_21 ^ x22_52
        int32_t x17_25 = *(&data_854540 + (zx.q(x23_54 u>> 0x18) << 2)) ^ x17_22
            ^ ror.d(*(&data_854540 + ((zx.q(x23_54 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x23_54 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x23_57 = x17_25 ^ ror.d(*(&data_854540 + ((zx.q(x23_54) & 0xff) << 2)), 0x18)
        int32_t x12_23 = x10[4]
        int32_t x15_30 = x10[5]
        int32_t x11_13 = x7_38 ^ x22_51 ^ x11_11 ^ x23_57
        int32_t x17_26 = *(&data_854540 + (zx.q(x26_54 u>> 0x18) << 2)) ^ x20_39
            ^ ror.d(*(&data_854540 + ((zx.q(x26_54 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x26_54 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x17_27 = x17_26 ^ ror.d(*(&data_854540 + ((zx.q(x26_54) & 0xff) << 2)), 0x18)
        int32_t x21_58 = x22_52 ^ x21_55 ^ x15_30 ^ x17_27
        int32_t x16_45 = *(&data_854540 + (zx.q(x11_13 u>> 0x18) << 2)) ^ x16_42
            ^ ror.d(*(&data_854540 + ((zx.q(x11_13 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x11_13 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x24_66 = x16_45 ^ ror.d(*(&data_854540 + ((zx.q(x11_13) & 0xff) << 2)), 0x18)
        int32_t x11_16 = *(&data_854540 + (zx.q(x21_58 u>> 0x18) << 2)) ^ x19_49
            ^ ror.d(*(&data_854540 + ((zx.q(x21_58 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x21_58 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x16_46 = x11_16 ^ ror.d(*(&data_854540 + ((zx.q(x21_58) & 0xff) << 2)), 0x18)
        int32_t x11_17 = x23_57 ^ x7_38 ^ x24_66 ^ x13_39
        int32_t x14_22 = x17_27 ^ x22_52 ^ x12_23 ^ x16_46
        v2.d = *(&data_854540 + ((zx.q(x11_17 u>> 0x10) & 0xff) << 2))
        v3.d = *(&data_854540 + ((zx.q(x11_17 u>> 8) & 0xff) << 2))
        int128_t v5
        v5.d = *(&data_854540 + (zx.q(x11_17 u>> 0x18) << 2))
        int128_t v4
        v4.d = *(&data_854540 + ((zx.q(x11_17) & 0xff) << 2))
        v2:4.d = *(&data_854540 + ((zx.q(x14_22 u>> 0x10) & 0xff) << 2))
        v3:4.d = *(&data_854540 + ((zx.q(x14_22 u>> 8) & 0xff) << 2))
        v5:4.d = *(&data_854540 + (zx.q(x14_22 u>> 0x18) << 2))
        v4:4.d = *(&data_854540 + ((zx.q(x14_22) & 0xff) << 2))
        int128_t v6
        v6.d = v2.d u>> 8
        v6:4.d = v2:4.d u>> 8
        v2.d <<= 0x18
        v2:4.d <<= 0x18
        int128_t v7
        v7.d = v3.d u>> 0x10
        v7:4.d = v3:4.d u>> 0x10
        v3.d <<= 0x10
        v3:4.d <<= 0x10
        int128_t v16
        v16.d = v4.d u>> 0x18
        v16:4.d = v4:4.d u>> 0x18
        v4.d <<= 8
        v4:4.d <<= 8
        int128_t v1_6 = v5 ^ v1_2 ^ vorr_s8(v2, v6) ^ vorr_s8(v3, v7) ^ vorr_s8(v4, v16)
        int32_t x14_25 = v1_6.d
        int32_t x6_27 = x10[2]
        int32_t x5_39 = x10[3]
        int32_t x13_41 = x24_66 ^ x23_57 ^ x14_21 ^ x14_25
        int32_t x20_45 = v1_6:4.d
        uint64_t x11_20 = zx.q(x16_46) ^ zx.q(x17_27) ^ zx.q(x5_39) ^ zx.q(x20_45)
        int32_t x7_41 = *(&data_854540 + (zx.q(x13_41 u>> 0x18) << 2)) ^ x7_38
            ^ ror.d(*(&data_854540 + ((zx.q(x13_41 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x13_41 u>> 8) & 0xff) << 2)), 0x10)
        uint32_t x21_68 = zx.d(*(&data_854440 + (x11_20 u>> 0x18))) << 0x18
        uint32_t x25_80 = zx.d(*(&data_854440 + (x11_20 & 0xff)))
        int32_t x13_44 = x7_41 ^ ror.d(*(&data_854540 + ((zx.q(x13_41) & 0xff) << 2)), 0x18)
        int32_t x7_43 =
            (0xff00ffff & x21_68) | zx.d(*(&data_854440 + (x11_20 u>> 0x10 & 0xff))) << 0x10
        int32_t x15_32 = x14_25 ^ x24_66 ^ x15_30 ^ x13_44
        int32_t x26_68 = (0xffff00ff & x7_43) | zx.d(*(&data_854440 + (x11_20 u>> 8 & 0xff))) << 8
        int32_t x11_23 = x26_68 | x25_80
        int32_t x7_45 = x11_23 ^ x22_52 ^ ((x25_80 << 0x20 | x26_68) u>> 8).d
            ^ ((x11_23 << 0x20 | x21_68) u>> 0x1e).d ^ ((x11_23 << 0x20 | x7_43) u>> 0x16).d
            ^ ((x11_23 << 0x20 | x26_68) u>> 0xe).d
        int32_t x12_28 = *(&data_854540 + (zx.q(x15_32 u>> 0x18) << 2)) ^ x23_57
            ^ ror.d(*(&data_854540 + ((zx.q(x15_32 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x15_32 u>> 8) & 0xff) << 2)), 0x10)
        uint64_t x19_57 = zx.q(x20_45) ^ zx.q(x16_46) ^ zx.q(x6_27) ^ zx.q(x7_45)
        int32_t x12_29 = x12_28 ^ ror.d(*(&data_854540 + ((zx.q(x15_32) & 0xff) << 2)), 0x18)
        int32_t x14_28 = x13_44 ^ x14_25 ^ x12_23 ^ x12_29
        uint32_t x15_37 = zx.d(*(&data_854440 + (x19_57 u>> 0x18))) << 0x18
        uint32_t x21_71 = zx.d(*(&data_854440 + (x19_57 & 0xff)))
        int32_t x25_87 =
            (0xff00ffff & x15_37) | zx.d(*(&data_854440 + (x19_57 u>> 0x10 & 0xff))) << 0x10
        int32_t x26_73 = (0xffff00ff & x25_87) | zx.d(*(&data_854440 + (x19_57 u>> 8 & 0xff))) << 8
        int32_t x19_60 = x26_73 | x21_71
        uint64_t x10_1 = zx.q(*x10)
        int32_t x4_35 = *(x10_1 + 4)
        int32_t x22_59 = *(&data_854540 + (zx.q(x14_28 u>> 0x18) << 2)) ^ x24_66
            ^ ror.d(*(&data_854540 + ((zx.q(x14_28 u>> 0x10) & 0xff) << 2)), 8)
            ^ ror.d(*(&data_854540 + ((zx.q(x14_28 u>> 8) & 0xff) << 2)), 0x10)
        int32_t x14_31 = x22_59 ^ ror.d(*(&data_854540 + ((zx.q(x14_28) & 0xff) << 2)), 0x18)
        uint64_t x5_40 = zx.q(x12_29) ^ zx.q(x13_44) ^ zx.q(x14_31) ^ zx.q(x5_39)
        int32_t x15_41 = x19_60 ^ x17_27 ^ ((x21_71 << 0x20 | x26_73) u>> 8).d
            ^ ((x19_60 << 0x20 | x15_37) u>> 0x1e).d ^ ((x19_60 << 0x20 | x25_87) u>> 0x16).d
            ^ ((x19_60 << 0x20 | x26_73) u>> 0xe).d
        uint64_t x20_48 = zx.q(x7_45) ^ zx.q(x20_45) ^ zx.q(x4_35) ^ zx.q(x15_41)
        uint32_t x22_64 = zx.d(*(&data_854440 + (x20_48 u>> 0x18))) << 0x18
        uint32_t x23_61 = zx.d(*(&data_854440 + (x20_48 & 0xff)))
        int32_t x25_90 =
            (0xff00ffff & x22_64) | zx.d(*(&data_854440 + (x20_48 u>> 0x10 & 0xff))) << 0x10
        int128_t v2_1
        v2_1.d = float.s(zx.d(*(&data_854440 + (x5_40 u>> 0x18))))
        int32_t x17_32 = (0xffff00ff & x25_90) | zx.d(*(&data_854440 + (x20_48 u>> 8 & 0xff))) << 8
        int128_t v4_1
        v4_1.d = float.s(zx.d(*(&data_854440 + (x5_40 u>> 8 & 0xff))))
        int32_t x5_43 = x17_32 | x23_61
        int128_t v3_1
        v3_1.d = float.s(zx.d(*(&data_854440 + (x5_40 u>> 0x10 & 0xff))))
        v5.d = float.s(zx.d(*(&data_854440 + (x5_40 & 0xff))))
        int32_t temp0_9 = _byteswap(x7_45)
        int32_t x16_51 = x5_43 ^ x16_46 ^ ((x23_61 << 0x20 | x17_32) u>> 8).d
            ^ ((x5_43 << 0x20 | x22_64) u>> 0x1e).d ^ ((x5_43 << 0x20 | x25_90) u>> 0x16).d
            ^ ((x5_43 << 0x20 | x17_32) u>> 0xe).d
        uint64_t x17_34 = zx.q(x15_41) ^ zx.q(x7_45) ^ zx.q(x10_1.d) ^ zx.q(x16_51)
        int32_t temp0_10 = _byteswap(x15_41)
        *(arg3 - 0xc) = _byteswap(x16_51)
        *(arg3 - 8) = temp0_10
        v3_1:4.d = zx.d(*(&data_854440 + (x17_34 u>> 0x10 & 0xff)))
        v2_1:4.d = zx.d(*(&data_854440 + (x17_34 u>> 0x18)))
        v4_1:4.d = zx.d(*(&data_854440 + (x17_34 u>> 8 & 0xff)))
        v2_1.d <<= 0x18
        v2_1:4.d <<= 0x18
        int128_t v3_2
        v3_2.d = (v3_1 & v0).d << 0x10
        v3_2:4.d <<= 0x10
        v5:4.d = zx.d(*(&data_854440 + (x17_34 & 0xff)))
        int128_t v4_2
        v4_2.d = (v4_1 & v0).d << 8
        v4_2:4.d <<= 8
        v6.d = v2_1.d u>> 0x1e
        v6:4.d = v2_1:4.d u>> 0x1e
        int128_t v2_2 = vorr_s8(v3_2, v2_1)
        v5 &= v0
        int128_t v3_3 = vorr_s8(v2_2, v4_2)
        v7.d = v5.d << 0x18
        v7:4.d = v5:4.d << 0x18
        int128_t v4_3 = vorr_s8(v3_3, v5)
        v5.d = v3_3.d u>> 0xe
        v5:4.d = v3_3:4.d u>> 0xe
        v3_3.d u>>= 8
        v3_3:4.d u>>= 8
        v16.d = v4_3.d << 2
        v16:4.d = v4_3:4.d << 2
        v3 = vorr_s8(v7, v3_3)
        v2_2.d u>>= 0x16
        v2_2:4.d u>>= 0x16
        v7.d = v4_3.d << 0xa
        v7:4.d = v4_3:4.d << 0xa
        int128_t v1_8 = v4_3 ^ v1_6 ^ v3
        v4_3.d <<= 0x12
        v4_3:4.d <<= 0x12
        v1 = v1_8 ^ vorr_s8(v16, v6) ^ vorr_s8(v7, v2_2) ^ vorr_s8(v4_3, v5)
        int32_t x15_44 = v1.d
        uint64_t x16_54 = zx.q(x14_31) ^ zx.q(x12_29) ^ zx.q(x6_27) ^ zx.q(x15_44)
        uint32_t x5_48 = zx.d(*(&data_854440 + (x16_54 u>> 0x18))) << 0x18
        uint32_t x6_30 = zx.d(*(&data_854440 + (x16_54 & 0xff)))
        int32_t x7_51 =
            (0xff00ffff & x5_48) | zx.d(*(&data_854440 + (x16_54 u>> 0x10 & 0xff))) << 0x10
        int32_t x4_38 = (0xffff00ff & x7_51) | zx.d(*(&data_854440 + (x16_54 u>> 8 & 0xff))) << 8
        int32_t x16_57 = x4_38 | x6_30
        int32_t x13_49 = x16_57 ^ x13_44 ^ ((x6_30 << 0x20 | x4_38) u>> 8).d
            ^ ((x16_57 << 0x20 | x5_48) u>> 0x1e).d ^ ((x16_57 << 0x20 | x7_51) u>> 0x16).d
            ^ ((x16_57 << 0x20 | x4_38) u>> 0xe).d
        uint64_t x16_58 = zx.q(x15_44) ^ zx.q(x14_31) ^ zx.q(x4_35) ^ zx.q(x13_49)
        char x16_60 = *(&data_854440 + (x16_58 u>> 8 & 0xff))
        uint32_t x17_41 = zx.d(*(&data_854440 + (x16_58 u>> 0x18))) << 0x18
        uint32_t x4_41 = zx.d(*(&data_854440 + (x16_58 & 0xff)))
        int32_t x5_52 =
            (0xff00ffff & x17_41) | zx.d(*(&data_854440 + (x16_58 u>> 0x10 & 0xff))) << 0x10
        *(arg3 - 0x18) = _byteswap(x13_49)
        int32_t x13_52 = (0xffff00ff & x5_52) | zx.d(x16_60) << 8
        int32_t x15_47 = x13_52 | x4_41
        int32_t x12_34 = x15_47 ^ x12_29 ^ ((x4_41 << 0x20 | x13_52) u>> 8).d
            ^ ((x15_47 << 0x20 | x17_41) u>> 0x1e).d ^ ((x15_47 << 0x20 | x5_52) u>> 0x16).d
            ^ ((x15_47 << 0x20 | x13_52) u>> 0xe).d
        uint64_t x10_3 = zx.q(x13_49) ^ zx.q(x15_44) ^ zx.q(x10_1.d) ^ zx.q(x12_34)
        uint32_t x13_56 = zx.d(*(&data_854440 + (x10_3 u>> 0x18))) << 0x18
        uint32_t x15_49 = zx.d(*(&data_854440 + (x10_3 & 0xff)))
        int32_t x17_44 =
            (0xff00ffff & x13_56) | zx.d(*(&data_854440 + (x10_3 u>> 0x10 & 0xff))) << 0x10
        int32_t x16_65 = (0xffff00ff & x17_44) | zx.d(*(&data_854440 + (x10_3 u>> 8 & 0xff))) << 8
        int32_t x10_6 = x16_65 | x15_49
        int32_t x10_11 = x10_6 ^ x14_31 ^ ((x15_49 << 0x20 | x16_65) u>> 8).d
            ^ ((x10_6 << 0x20 | x13_56) u>> 0x1e).d ^ ((x10_6 << 0x20 | x17_44) u>> 0x16).d
            ^ ((x10_6 << 0x20 | x16_65) u>> 0xe).d
        v2 = vrev32_s8(v1)
        int32_t temp0_13 = _byteswap(x12_34)
        int32_t temp0_14 = _byteswap(x10_11)
        *(arg3 - 0x14) = v2.q
        *(arg3 - 0x20) = temp0_14
        *(arg3 - 0x1c) = temp0_13
        *(arg3 - 4) = temp0_9
        
        if (entry_i u< 2)
            break
        
        x10 = *(arg1 + 8)
        arg2 = &arg2[0x20]
        arg3 += 0x20
        entry_i -= 2

if (entry_i == 0)
    return 

int64_t i

do
    int32_t* x10_13 = *(arg1 + 8)
    int32_t x14_32 = *(arg2 + 0xc)
    int32_t x11_29 = *arg2
    int32_t x12_36 = *(arg2 + 4)
    i = entry_i
    entry_i -= 1
    int32_t x16_67 = x10_13[0x1e]
    int32_t x15_51 = x10_13[0x1f]
    int32_t temp0_15 = _byteswap(*(arg2 + 8))
    int32_t temp0_16 = _byteswap(x14_32)
    int32_t temp0_17 = _byteswap(x12_36)
    int32_t x17_46 = temp0_16 ^ temp0_15
    uint64_t x15_52 = zx.q(x17_46) ^ zx.q(temp0_17) ^ zx.q(x15_51)
    uint32_t x4_46 = zx.d(*(&data_854440 + (x15_52 u>> 0x18))) << 0x18
    uint32_t x5_54 = zx.d(*(&data_854440 + (x15_52 & 0xff)))
    int32_t x7_54 = (0xff00ffff & x4_46) | zx.d(*(&data_854440 + (x15_52 u>> 0x10 & 0xff))) << 0x10
    int32_t x17_48 = (0xffff00ff & x7_54) | zx.d(*(&data_854440 + (x15_52 u>> 8 & 0xff))) << 8
    int32_t x15_55 = x17_48 | x5_54
    int32_t x11_35 = x15_55 ^ _byteswap(x11_29) ^ ((x5_54 << 0x20 | x17_48) u>> 8).d
        ^ ((x15_55 << 0x20 | x4_46) u>> 0x1e).d ^ ((x15_55 << 0x20 | x7_54) u>> 0x16).d
        ^ ((x15_55 << 0x20 | x17_48) u>> 0xe).d
    uint64_t x16_69 = zx.q(x17_46) ^ zx.q(x16_67) ^ zx.q(x11_35)
    uint32_t x17_52 = zx.d(*(&data_854440 + (x16_69 u>> 0x18))) << 0x18
    uint32_t x4_49 = zx.d(*(&data_854440 + (x16_69 & 0xff)))
    int32_t x6_36 = (0xff00ffff & x17_52) | zx.d(*(&data_854440 + (x16_69 u>> 0x10 & 0xff))) << 0x10
    int32_t x5_60 = (0xffff00ff & x6_36) | zx.d(*(&data_854440 + (x16_69 u>> 8 & 0xff))) << 8
    int32_t x16_72 = x5_60 | x4_49
    int32_t x12_42 = x16_72 ^ temp0_17 ^ ((x4_49 << 0x20 | x5_60) u>> 8).d
        ^ ((x16_72 << 0x20 | x17_52) u>> 0x1e).d ^ ((x16_72 << 0x20 | x6_36) u>> 0x16).d
        ^ ((x16_72 << 0x20 | x5_60) u>> 0xe).d
    uint64_t x15_58 = zx.q(x11_35) ^ zx.q(temp0_16) ^ zx.q(x10_13[0x1d]) ^ zx.q(x12_42)
    uint32_t x17_56 = zx.d(*(&data_854440 + (x15_58 u>> 0x18))) << 0x18
    uint32_t x4_52 = zx.d(*(&data_854440 + (x15_58 & 0xff)))
    int32_t x6_39 = (0xff00ffff & x17_56) | zx.d(*(&data_854440 + (x15_58 u>> 0x10 & 0xff))) << 0x10
    int32_t x5_65 = (0xffff00ff & x6_39) | zx.d(*(&data_854440 + (x15_58 u>> 8 & 0xff))) << 8
    int32_t x15_61 = x5_65 | x4_52
    int32_t x13_64 = x15_61 ^ temp0_15 ^ ((x4_52 << 0x20 | x5_65) u>> 8).d
        ^ ((x15_61 << 0x20 | x17_56) u>> 0x1e).d ^ ((x15_61 << 0x20 | x6_39) u>> 0x16).d
        ^ ((x15_61 << 0x20 | x5_65) u>> 0xe).d
    uint64_t x16_75 = zx.q(x12_42) ^ zx.q(x11_35) ^ zx.q(x10_13[0x1c]) ^ zx.q(x13_64)
    uint32_t x17_60 = zx.d(*(&data_854440 + (x16_75 u>> 0x18))) << 0x18
    uint32_t x4_55 = zx.d(*(&data_854440 + (x16_75 & 0xff)))
    int32_t x6_42 = (0xff00ffff & x17_60) | zx.d(*(&data_854440 + (x16_75 u>> 0x10 & 0xff))) << 0x10
    int32_t x5_71 = (0xffff00ff & x6_42) | zx.d(*(&data_854440 + (x16_75 u>> 8 & 0xff))) << 8
    int32_t x16_78 = x5_71 | x4_55
    int32_t x14_38 = x16_78 ^ temp0_16 ^ ((x4_55 << 0x20 | x5_71) u>> 8).d
        ^ ((x16_78 << 0x20 | x17_60) u>> 0x1e).d ^ ((x16_78 << 0x20 | x6_42) u>> 0x16).d
        ^ ((x16_78 << 0x20 | x5_71) u>> 0xe).d
    int32_t x15_64 = x13_64 ^ x12_42 ^ x10_13[0x1b] ^ x14_38
    int32_t x11_38 = *(&data_854540 + (zx.q(x15_64 u>> 0x18) << 2)) ^ x11_35
        ^ ror.d(*(&data_854540 + ((zx.q(x15_64 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_64 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_39 = x11_38 ^ ror.d(*(&data_854540 + ((zx.q(x15_64) & 0xff) << 2)), 0x18)
    int32_t x15_67 = x11_39 ^ x14_38
    int32_t x16_80 = x15_67 ^ x13_64 ^ x10_13[0x1a]
    int32_t x12_45 = *(&data_854540 + (zx.q(x16_80 u>> 0x18) << 2)) ^ x12_42
        ^ ror.d(*(&data_854540 + ((zx.q(x16_80 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x16_80 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_46 = x12_45 ^ ror.d(*(&data_854540 + ((zx.q(x16_80) & 0xff) << 2)), 0x18)
    int32_t x15_69 = x15_67 ^ x10_13[0x19] ^ x12_46
    int32_t x13_67 = *(&data_854540 + (zx.q(x15_69 u>> 0x18) << 2)) ^ x13_64
        ^ ror.d(*(&data_854540 + ((zx.q(x15_69 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_69 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_68 = x13_67 ^ ror.d(*(&data_854540 + ((zx.q(x15_69) & 0xff) << 2)), 0x18)
    int32_t x15_72 = x12_46 ^ x11_39 ^ x10_13[0x18] ^ x13_68
    int32_t x14_41 = *(&data_854540 + (zx.q(x15_72 u>> 0x18) << 2)) ^ x14_38
        ^ ror.d(*(&data_854540 + ((zx.q(x15_72 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_72 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_42 = x14_41 ^ ror.d(*(&data_854540 + ((zx.q(x15_72) & 0xff) << 2)), 0x18)
    int32_t x15_75 = x13_68 ^ x12_46 ^ x10_13[0x17] ^ x14_42
    int32_t x11_42 = *(&data_854540 + (zx.q(x15_75 u>> 0x18) << 2)) ^ x11_39
        ^ ror.d(*(&data_854540 + ((zx.q(x15_75 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_75 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_43 = x11_42 ^ ror.d(*(&data_854540 + ((zx.q(x15_75) & 0xff) << 2)), 0x18)
    int32_t x15_78 = x14_42 ^ x13_68 ^ x10_13[0x16] ^ x11_43
    int32_t x12_49 = *(&data_854540 + (zx.q(x15_78 u>> 0x18) << 2)) ^ x12_46
        ^ ror.d(*(&data_854540 + ((zx.q(x15_78 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_78 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_50 = x12_49 ^ ror.d(*(&data_854540 + ((zx.q(x15_78) & 0xff) << 2)), 0x18)
    int32_t x15_81 = x11_43 ^ x14_42 ^ x10_13[0x15] ^ x12_50
    int32_t x13_71 = *(&data_854540 + (zx.q(x15_81 u>> 0x18) << 2)) ^ x13_68
        ^ ror.d(*(&data_854540 + ((zx.q(x15_81 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_81 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_72 = x13_71 ^ ror.d(*(&data_854540 + ((zx.q(x15_81) & 0xff) << 2)), 0x18)
    int32_t x15_84 = x12_50 ^ x11_43 ^ x10_13[0x14] ^ x13_72
    int32_t x14_45 = *(&data_854540 + (zx.q(x15_84 u>> 0x18) << 2)) ^ x14_42
        ^ ror.d(*(&data_854540 + ((zx.q(x15_84 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_84 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_46 = x14_45 ^ ror.d(*(&data_854540 + ((zx.q(x15_84) & 0xff) << 2)), 0x18)
    int32_t x15_87 = x13_72 ^ x12_50 ^ x10_13[0x13] ^ x14_46
    int32_t x11_46 = *(&data_854540 + (zx.q(x15_87 u>> 0x18) << 2)) ^ x11_43
        ^ ror.d(*(&data_854540 + ((zx.q(x15_87 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_87 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_47 = x11_46 ^ ror.d(*(&data_854540 + ((zx.q(x15_87) & 0xff) << 2)), 0x18)
    int32_t x15_90 = x14_46 ^ x13_72 ^ x10_13[0x12] ^ x11_47
    int32_t x12_53 = *(&data_854540 + (zx.q(x15_90 u>> 0x18) << 2)) ^ x12_50
        ^ ror.d(*(&data_854540 + ((zx.q(x15_90 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_90 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_54 = x12_53 ^ ror.d(*(&data_854540 + ((zx.q(x15_90) & 0xff) << 2)), 0x18)
    int32_t x15_93 = x11_47 ^ x14_46 ^ x10_13[0x11] ^ x12_54
    int32_t x13_75 = *(&data_854540 + (zx.q(x15_93 u>> 0x18) << 2)) ^ x13_72
        ^ ror.d(*(&data_854540 + ((zx.q(x15_93 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_93 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_76 = x13_75 ^ ror.d(*(&data_854540 + ((zx.q(x15_93) & 0xff) << 2)), 0x18)
    int32_t x15_96 = x12_54 ^ x11_47 ^ x10_13[0x10] ^ x13_76
    int32_t x14_49 = *(&data_854540 + (zx.q(x15_96 u>> 0x18) << 2)) ^ x14_46
        ^ ror.d(*(&data_854540 + ((zx.q(x15_96 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_96 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_50 = x14_49 ^ ror.d(*(&data_854540 + ((zx.q(x15_96) & 0xff) << 2)), 0x18)
    int32_t x15_99 = x13_76 ^ x12_54 ^ x10_13[0xf] ^ x14_50
    int32_t x11_50 = *(&data_854540 + (zx.q(x15_99 u>> 0x18) << 2)) ^ x11_47
        ^ ror.d(*(&data_854540 + ((zx.q(x15_99 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_99 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_51 = x11_50 ^ ror.d(*(&data_854540 + ((zx.q(x15_99) & 0xff) << 2)), 0x18)
    int32_t x15_102 = x14_50 ^ x13_76 ^ x10_13[0xe] ^ x11_51
    int32_t x12_57 = *(&data_854540 + (zx.q(x15_102 u>> 0x18) << 2)) ^ x12_54
        ^ ror.d(*(&data_854540 + ((zx.q(x15_102 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_102 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_58 = x12_57 ^ ror.d(*(&data_854540 + ((zx.q(x15_102) & 0xff) << 2)), 0x18)
    int32_t x15_105 = x11_51 ^ x14_50 ^ x10_13[0xd] ^ x12_58
    int32_t x13_79 = *(&data_854540 + (zx.q(x15_105 u>> 0x18) << 2)) ^ x13_76
        ^ ror.d(*(&data_854540 + ((zx.q(x15_105 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_105 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_80 = x13_79 ^ ror.d(*(&data_854540 + ((zx.q(x15_105) & 0xff) << 2)), 0x18)
    int32_t x15_108 = x12_58 ^ x11_51 ^ x10_13[0xc] ^ x13_80
    int32_t x14_53 = *(&data_854540 + (zx.q(x15_108 u>> 0x18) << 2)) ^ x14_50
        ^ ror.d(*(&data_854540 + ((zx.q(x15_108 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_108 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_54 = x14_53 ^ ror.d(*(&data_854540 + ((zx.q(x15_108) & 0xff) << 2)), 0x18)
    int32_t x15_111 = x13_80 ^ x12_58 ^ x10_13[0xb] ^ x14_54
    int32_t x11_54 = *(&data_854540 + (zx.q(x15_111 u>> 0x18) << 2)) ^ x11_51
        ^ ror.d(*(&data_854540 + ((zx.q(x15_111 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_111 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_55 = x11_54 ^ ror.d(*(&data_854540 + ((zx.q(x15_111) & 0xff) << 2)), 0x18)
    int32_t x15_114 = x14_54 ^ x13_80 ^ x10_13[0xa] ^ x11_55
    int32_t x12_61 = *(&data_854540 + (zx.q(x15_114 u>> 0x18) << 2)) ^ x12_58
        ^ ror.d(*(&data_854540 + ((zx.q(x15_114 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_114 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_62 = x12_61 ^ ror.d(*(&data_854540 + ((zx.q(x15_114) & 0xff) << 2)), 0x18)
    int32_t x15_117 = x11_55 ^ x14_54 ^ x10_13[9] ^ x12_62
    int32_t x13_83 = *(&data_854540 + (zx.q(x15_117 u>> 0x18) << 2)) ^ x13_80
        ^ ror.d(*(&data_854540 + ((zx.q(x15_117 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_117 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_84 = x13_83 ^ ror.d(*(&data_854540 + ((zx.q(x15_117) & 0xff) << 2)), 0x18)
    int32_t x15_120 = x12_62 ^ x11_55 ^ x10_13[8] ^ x13_84
    int32_t x14_57 = *(&data_854540 + (zx.q(x15_120 u>> 0x18) << 2)) ^ x14_54
        ^ ror.d(*(&data_854540 + ((zx.q(x15_120 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_120 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_58 = x14_57 ^ ror.d(*(&data_854540 + ((zx.q(x15_120) & 0xff) << 2)), 0x18)
    int32_t x15_123 = x13_84 ^ x12_62 ^ x10_13[7] ^ x14_58
    int32_t x11_58 = *(&data_854540 + (zx.q(x15_123 u>> 0x18) << 2)) ^ x11_55
        ^ ror.d(*(&data_854540 + ((zx.q(x15_123 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_123 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x11_59 = x11_58 ^ ror.d(*(&data_854540 + ((zx.q(x15_123) & 0xff) << 2)), 0x18)
    int32_t x15_126 = x14_58 ^ x13_84 ^ x10_13[6] ^ x11_59
    int32_t x12_65 = *(&data_854540 + (zx.q(x15_126 u>> 0x18) << 2)) ^ x12_62
        ^ ror.d(*(&data_854540 + ((zx.q(x15_126 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_126 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x12_66 = x12_65 ^ ror.d(*(&data_854540 + ((zx.q(x15_126) & 0xff) << 2)), 0x18)
    int32_t x15_129 = x11_59 ^ x14_58 ^ x10_13[5] ^ x12_66
    int32_t x13_87 = *(&data_854540 + (zx.q(x15_129 u>> 0x18) << 2)) ^ x13_84
        ^ ror.d(*(&data_854540 + ((zx.q(x15_129 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_129 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x13_88 = x13_87 ^ ror.d(*(&data_854540 + ((zx.q(x15_129) & 0xff) << 2)), 0x18)
    int32_t x15_132 = x12_66 ^ x11_59 ^ x10_13[4] ^ x13_88
    int32_t x14_61 = *(&data_854540 + (zx.q(x15_132 u>> 0x18) << 2)) ^ x14_58
        ^ ror.d(*(&data_854540 + ((zx.q(x15_132 u>> 0x10) & 0xff) << 2)), 8)
        ^ ror.d(*(&data_854540 + ((zx.q(x15_132 u>> 8) & 0xff) << 2)), 0x10)
    int32_t x14_62 = x14_61 ^ ror.d(*(&data_854540 + ((zx.q(x15_132) & 0xff) << 2)), 0x18)
    uint64_t x15_135 = zx.q(x13_88) ^ zx.q(x12_66) ^ zx.q(x10_13[3]) ^ zx.q(x14_62)
    uint32_t x16_129 = zx.d(*(&data_854440 + (x15_135 u>> 0x18))) << 0x18
    uint32_t x17_91 = zx.d(*(&data_854440 + (x15_135 & 0xff)))
    int32_t x6_73 =
        (0xff00ffff & x16_129) | zx.d(*(&data_854440 + (x15_135 u>> 0x10 & 0xff))) << 0x10
    int32_t x7_79 = (0xffff00ff & x6_73) | zx.d(*(&data_854440 + (x15_135 u>> 8 & 0xff))) << 8
    int32_t x15_138 = x7_79 | x17_91
    int32_t x11_64 = x15_138 ^ x11_59 ^ ((x17_91 << 0x20 | x7_79) u>> 8).d
        ^ ((x15_138 << 0x20 | x16_129) u>> 0x1e).d ^ ((x15_138 << 0x20 | x6_73) u>> 0x16).d
        ^ ((x15_138 << 0x20 | x7_79) u>> 0xe).d
    uint64_t x15_139 = zx.q(x14_62) ^ zx.q(x13_88) ^ zx.q(x10_13[2]) ^ zx.q(x11_64)
    uint64_t x10_14 = zx.q(*x10_13)
    uint32_t x17_95 = zx.d(*(&data_854440 + (x15_139 u>> 0x18))) << 0x18
    uint32_t x5_126 = zx.d(*(&data_854440 + (x15_139 & 0xff)))
    int32_t x7_82 =
        (0xff00ffff & x17_95) | zx.d(*(&data_854440 + (x15_139 u>> 0x10 & 0xff))) << 0x10
    int32_t x4_102 = (0xffff00ff & x7_82) | zx.d(*(&data_854440 + (x15_139 u>> 8 & 0xff))) << 8
    int32_t x15_142 = x4_102 | x5_126
    int32_t x12_71 = x15_142 ^ x12_66 ^ ((x5_126 << 0x20 | x4_102) u>> 8).d
        ^ ((x15_142 << 0x20 | x17_95) u>> 0x1e).d ^ ((x15_142 << 0x20 | x7_82) u>> 0x16).d
        ^ ((x15_142 << 0x20 | x4_102) u>> 0xe).d
    uint64_t x15_143 = zx.q(x11_64) ^ zx.q(x14_62) ^ zx.q(*(x10_14 + 4)) ^ zx.q(x12_71)
    uint32_t x16_134 = zx.d(*(&data_854440 + (x15_143 u>> 0x18)))
    int32_t temp0_19 = _byteswap(x11_64)
    uint32_t x16_135 = x16_134 << 0x18
    uint32_t x17_98 = zx.d(*(&data_854440 + (x15_143 & 0xff)))
    int32_t x4_106 =
        (0xff00ffff & x16_135) | zx.d(*(&data_854440 + (x15_143 u>> 0x10 & 0xff))) << 0x10
    int32_t x11_68 = (0xffff00ff & x4_106) | zx.d(*(&data_854440 + (x15_143 u>> 8 & 0xff))) << 8
    *(arg3 + 8) = _byteswap(x12_71)
    *(arg3 + 0xc) = temp0_19
    int32_t x12_73 = x11_68 | x17_98
    int32_t x11_70 = x12_73 ^ x13_88 ^ ((x17_98 << 0x20 | x11_68) u>> 8).d
        ^ ((x12_73 << 0x20 | x16_135) u>> 0x1e).d ^ ((x12_73 << 0x20 | x4_106) u>> 0x16).d
        ^ ((x12_73 << 0x20 | x11_68) u>> 0xe).d
    uint64_t x10_16 = zx.q(x12_71) ^ zx.q(x11_64) ^ zx.q(x10_14.d) ^ zx.q(x11_70)
    uint32_t x12_80 = zx.d(*(&data_854440 + (x10_16 u>> 0x18))) << 0x18
    uint32_t x13_90 = zx.d(*(&data_854440 + (x10_16 & 0xff)))
    int32_t x16_138 =
        (0xff00ffff & x12_80) | zx.d(*(&data_854440 + (x10_16 u>> 0x10 & 0xff))) << 0x10
    int32_t x15_150 = (0xffff00ff & x16_138) | zx.d(*(&data_854440 + (x10_16 u>> 8 & 0xff))) << 8
    int32_t x10_19 = x15_150 | x13_90
    int32_t x10_24 = x10_19 ^ x14_62 ^ ((x13_90 << 0x20 | x15_150) u>> 8).d
        ^ ((x10_19 << 0x20 | x12_80) u>> 0x1e).d ^ ((x10_19 << 0x20 | x16_138) u>> 0x16).d
        ^ ((x10_19 << 0x20 | x15_150) u>> 0xe).d
    int32_t temp0_21 = _byteswap(x11_70)
    arg2 = &arg2[0x10]
    *arg3 = _byteswap(x10_24)
    *(arg3 + 4) = temp0_21
    arg3 += 0x10
while (i != 1)
