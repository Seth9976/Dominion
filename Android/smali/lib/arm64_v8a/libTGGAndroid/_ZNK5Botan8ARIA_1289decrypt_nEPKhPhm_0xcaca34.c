// 函数: _ZNK5Botan8ARIA_1289decrypt_nEPKhPhm
// 地址: 0xcaca34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x28) == *(arg1 + 0x20))
    uint8_t* x0_1
    uint8_t* x1_1
    uint64_t x2_1
    x0_1, x1_1, x2_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::ARIA_192::decrypt_n(x0_1, x1_1, x2_1) __tailcall

int32_t var_64 = 0x11101010
uint64_t x13_1 = *(Botan::CPUID::state() + 8) u>> 2
uint64_t result

for (int64_t i = 0; i u< 0x100; )
    int64_t x14_2 = i << 2
    result = zx.q(*(&data_849a80 + x14_2))
    i += x13_1
    var_64 |= *(&data_849680 + x14_2) | *(&data_849280 + x14_2) | result.d | *(&data_849e80 + x14_2)

int64_t entry_x3

if (entry_x3 != 0)
    uint64_t x2_3 = (*(arg1 + 0x28) - *(arg1 + 0x20)) s>> 2 u>> 2
    int64_t x12_2 = 0
    int64_t x3_3 = (x2_3 - 1) << 4
    int64_t x4_3 = (1 | (0x3fffffffffffffff & (x2_3 - 1)) << 2) << 2
    int64_t x5_3 = (2 | (0x3fffffffffffffff & (x2_3 - 1)) << 2) << 2
    int64_t x6_3 = (3 | (0x3fffffffffffffff & (x2_3 - 1)) << 2) << 2
    
    do
        int64_t x23_2 = x12_2 << 4
        void* x24_5 = &arg2[x23_2]
        int32_t x26_48 = *(x24_5 + 4)
        int32_t x27_29 = *(x24_5 + 8)
        int32_t x24_6 = *(x24_5 + 0xc)
        int32_t temp0_1 = _byteswap(*x24_5)
        int32_t x28_1 = _byteswap(x26_48)
        int32_t x25_1 = _byteswap(x27_29)
        int32_t x24_1 = _byteswap(x24_6)
        int32_t fp_1 = var_64 & temp0_1
        
        if (x2_3 != 1)
            int64_t i_1 = 0
            int32_t* x27_31 = *(arg1 + 0x20) + 0x10
            
            do
                int32_t fp_7 = x27_31[-4] ^ fp_1
                int32_t x16_6 = x27_31[-2] ^ x25_1
                int32_t x17_4 = x27_31[-1] ^ x24_1
                int32_t x15_6 = x27_31[-3] ^ x28_1
                int32_t x7_5 = *(&data_849680 + ((zx.q(x16_6 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x16_6 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x16_6 u>> 8) & 0xff) << 2))
                int32_t x0_6 = *(&data_849680 + ((zx.q(x15_6 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x15_6 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x15_6 u>> 8) & 0xff) << 2))
                int32_t x20_4 = *(&data_849680 + ((zx.q(x17_4 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x17_4 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x17_4 u>> 8) & 0xff) << 2))
                int32_t x24_10 = *(&data_849680 + ((zx.q(fp_7 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(fp_7 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(fp_7 u>> 8) & 0xff) << 2))
                int32_t x16_9 = x7_5 ^ *(&data_849e80 + ((zx.q(x16_6) & 0xff) << 2))
                int32_t x17_7 = x20_4 ^ *(&data_849e80 + ((zx.q(x17_4) & 0xff) << 2))
                int32_t x22_7 = x24_10 ^ *(&data_849e80 + ((zx.q(fp_7) & 0xff) << 2))
                int32_t x15_10 = x0_6 ^ *(&data_849e80 + ((zx.q(x15_6) & 0xff) << 2)) ^ x16_9
                int32_t x16_10 = x17_7 ^ x16_9
                int32_t x7_6 = x15_10 ^ x22_7
                int32_t x17_8 = x16_10 ^ x22_7
                result = zx.q(*x27_31)
                int32_t x24_11 = x27_31[1]
                int32_t x20_6 = x27_31[2]
                int32_t x22_8 = x27_31[3]
                int32_t temp0_5 = _byteswap(x17_7 ^ x15_10)
                int32_t x16_12 = ror.d(x16_10 ^ x7_6, 0x10)
                int32_t x17_11 = ((0xff00ff00 & x17_8 << 8) | (0xff00ff & x17_8 u>> 8)) ^ x16_12
                int32_t x15_13 = x16_12 ^ temp0_5
                int32_t x7_7 = x17_11 ^ x7_6
                x28_1 = x24_11 ^ x7_6 ^ x15_13
                fp_1 = x7_7 ^ result.d
                x25_1 = x15_13 ^ x20_6 ^ x7_7
                x24_1 = x22_8 ^ temp0_5 ^ x17_11
                
                if (x2_3 - 3 != i_1)
                    int32_t x15_18 = *(&data_849e80 + ((zx.q(fp_1 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(fp_1 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(fp_1 u>> 8) & 0xff) << 2))
                    int32_t x17_14 = *(&data_849e80 + ((zx.q(x28_1 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x28_1 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x28_1 u>> 8) & 0xff) << 2))
                    int32_t x0_10 = *(&data_849e80 + ((zx.q(x25_1 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x25_1 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x25_1 u>> 8) & 0xff) << 2))
                    int32_t x16_19 = *(&data_849e80 + ((zx.q(x24_1 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x24_1 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x24_1 u>> 8) & 0xff) << 2))
                    int32_t x0_11 = x0_10 ^ *(&data_849680 + ((zx.q(x25_1) & 0xff) << 2))
                    int32_t x16_20 = x16_19 ^ *(&data_849680 + ((zx.q(x24_1) & 0xff) << 2))
                    int32_t x15_19 = x15_18 ^ *(&data_849680 + ((zx.q(fp_1) & 0xff) << 2))
                    int32_t x17_16 = x17_14 ^ *(&data_849680 + ((zx.q(x28_1) & 0xff) << 2)) ^ x0_11
                    int32_t x0_12 = x16_20 ^ x0_11
                    int32_t x7_14 = x17_16 ^ x15_19
                    int32_t x16_21 = x16_20 ^ x17_16
                    int32_t x17_17 = x0_12 ^ x7_14
                    result = 0xff00ff00 & zx.q(x16_21 << 8)
                    int32_t x7_15 = ror.d(x7_14, 0x10)
                    int32_t x16_23 = result.d | (0xff00ff & x16_21 u>> 8)
                    int32_t x15_22 = _byteswap(x0_12 ^ x15_19) ^ x17_17
                    int32_t x17_18 = x16_23 ^ x17_17
                    fp_1 = x15_22 ^ x7_15
                    x24_1 = x16_23 ^ x15_22
                    x25_1 = x17_18 ^ fp_1
                    x28_1 = x17_18 ^ x7_15
                
                i_1 += 2
                x27_31 = &x27_31[8]
            while (i_1 u< x2_3 - 1)
        
        x12_2 += 1
        *(arg3 + x23_2) =
            *(*(arg1 + 0x20) + x3_3 + 3) ^ (*(&data_849a80 + (zx.q(fp_1 u>> 0x18) << 2))).b
        *(arg3 + (x23_2 | 1)) = (*(*(arg1 + 0x20) + x3_3 + 2)).b
            ^ (*(&data_849e80 + ((zx.q(fp_1 u>> 0x10) & 0xff) << 2)) u>> 8).b
        *(arg3 + (x23_2 | 2)) = (*(&data_849280 + ((zx.q(fp_1 u>> 8) & 0xff) << 2))).b
            ^ ((*(arg1 + 0x20))[(x2_3 - 1) * 4] u>> 8).b
        *(arg3 + (x23_2 | 3)) =
            (*(*(arg1 + 0x20) + x3_3)).b ^ (*(&data_849680 + ((zx.q(fp_1) & 0xff) << 2))).b
        *(arg3 + (x23_2 | 4)) =
            *(*(arg1 + 0x20) + x4_3 + 3) ^ (*(&data_849a80 + (zx.q(x28_1 u>> 0x18) << 2))).b
        *(arg3 + (x23_2 | 5)) = (*(*(arg1 + 0x20) + x4_3 + 2)).b
            ^ (*(&data_849e80 + ((zx.q(x28_1 u>> 0x10) & 0xff) << 2)) u>> 8).b
        *(arg3 + (x23_2 | 6)) = (*(&data_849280 + ((zx.q(x28_1 u>> 8) & 0xff) << 2))).b
            ^ ((*(arg1 + 0x20))[1 | (0x3fffffffffffffff & (x2_3 - 1)) << 2] u>> 8).b
        *(arg3 + (x23_2 | 7)) =
            (*(*(arg1 + 0x20) + x4_3)).b ^ (*(&data_849680 + ((zx.q(x28_1) & 0xff) << 2))).b
        *(arg3 + (x23_2 | 8)) =
            *(*(arg1 + 0x20) + x5_3 + 3) ^ (*(&data_849a80 + (zx.q(x25_1 u>> 0x18) << 2))).b
        *(arg3 + (x23_2 | 9)) = (*(*(arg1 + 0x20) + x5_3 + 2)).b
            ^ (*(&data_849e80 + ((zx.q(x25_1 u>> 0x10) & 0xff) << 2)) u>> 8).b
        char x25_3 = (*(&data_849680 + ((zx.q(x25_1) & 0xff) << 2))).b
        *(arg3 + (x23_2 | 0xa)) = (*(&data_849280 + ((zx.q(x25_1 u>> 8) & 0xff) << 2))).b
            ^ ((*(arg1 + 0x20))[2 | (0x3fffffffffffffff & (x2_3 - 1)) << 2] u>> 8).b
        *(arg3 + (x23_2 | 0xb)) = (*(*(arg1 + 0x20) + x5_3)).b ^ x25_3
        *(arg3 + (x23_2 | 0xc)) =
            *(*(arg1 + 0x20) + x6_3 + 3) ^ (*(&data_849a80 + (zx.q(x24_1 u>> 0x18) << 2))).b
        *(arg3 + (x23_2 | 0xd)) = (*(*(arg1 + 0x20) + x6_3 + 2)).b
            ^ (*(&data_849e80 + ((zx.q(x24_1 u>> 0x10) & 0xff) << 2)) u>> 8).b
        char x24_3 = (*(&data_849680 + ((zx.q(x24_1) & 0xff) << 2))).b
        *(arg3 + (x23_2 | 0xe)) = (*(&data_849280 + ((zx.q(x24_1 u>> 8) & 0xff) << 2))).b
            ^ ((*(arg1 + 0x20))[3 | (0x3fffffffffffffff & (x2_3 - 1)) << 2] u>> 8).b
        *(arg3 + (x23_2 | 0xf)) = (*(*(arg1 + 0x20) + x6_3)).b ^ x24_3
    while (x12_2 != entry_x3)

return result
