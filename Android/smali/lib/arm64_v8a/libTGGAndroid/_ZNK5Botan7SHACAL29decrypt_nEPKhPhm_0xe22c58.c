// 函数: _ZNK5Botan7SHACAL29decrypt_nEPKhPhm
// 地址: 0xe22c58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_17
    uint8_t* x1_10
    x0_17, x1_10 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SHACAL2::simd_decrypt_4(x0_17, x1_10) __tailcall

int64_t entry_i
int64_t i = entry_i
uint64_t x21 = arg3
uint8_t* x22 = arg2
char* result = Botan::CPUID::state()

if ((zx.d(*result) & 1) != 0 && i u>= 4)
    do
        result = Botan::SHACAL2::simd_decrypt_4(arg1, x22)
        i -= 4
        x22 = &x22[0x80]
        x21 += 0x80
    while (i u> 3)

if (i != 0)
    int64_t x8_2 = 0
    
    do
        int32_t x11_1 = *(x22 + 4)
        int32_t x12_1 = *(x22 + 8)
        int32_t x13_1 = *(x22 + 0xc)
        int32_t x15_1 = *(x22 + 0x10)
        int32_t x16_1 = *(x22 + 0x14)
        int32_t x2_1 = *(x22 + 0x18)
        int32_t x3 = *(x22 + 0x1c)
        void* x5_1 = *(arg1 + 8)
        int64_t i_1 = 0
        result = zx.q(_byteswap(*x22))
        int32_t x1_1 = _byteswap(x11_1)
        int32_t x4_1 = _byteswap(x12_1)
        int32_t x14_1 = _byteswap(x13_1)
        int32_t x17_1 = _byteswap(x15_1)
        int32_t x13_2 = _byteswap(x16_1)
        int32_t x12_2 = _byteswap(x2_1)
        int32_t x11_2 = _byteswap(x3)
        
        do
            int32_t x3_3 = result.d - (ror.d(x1_1, 2) ^ ror.d(x1_1, 0xd) ^ ror.d(x1_1, 0x16))
                - (((x4_1 | x1_1) & x14_1) | (x4_1 & x1_1))
            int32_t x17_2 = x17_1 - x3_3
            int32_t* x15_2 = x5_1 + 0xfc + i_1
            int32_t x0_4 = x1_1 - (ror.d(x4_1, 2) ^ ror.d(x4_1, 0xd) ^ ror.d(x4_1, 0x16))
                - ((x17_2 & (x14_1 | x4_1)) | (x14_1 & x4_1))
            int32_t x13_3 = x13_2 - x0_4
            int32_t x16_6 = x3_3 - (x12_2 & x13_2) - (x11_2 & not.d(x13_2))
                - (ror.d(x13_2, 6) ^ ror.d(x13_2, 0xb) ^ ror.d(x13_2, 0x19)) - *x15_2
            int32_t x5_11 = x0_4
                - ((ror.d(x12_2, 6) ^ ror.d(x12_2, 0xb) ^ ror.d(x12_2, 0x19)) + (x11_2 & x12_2))
                - x15_2[-1] - (x16_6 & not.d(x12_2))
            int32_t x14_5 = x4_1 - (ror.d(x14_1, 2) ^ ror.d(x14_1, 0xd) ^ ror.d(x14_1, 0x16))
                - ((x13_3 & (x17_2 | x14_1)) | (x17_2 & x14_1))
            int32_t x12_3 = x12_2 - x14_5
            int32_t x17_6 = x14_1 - (ror.d(x17_2, 2) ^ ror.d(x17_2, 0xd) ^ ror.d(x17_2, 0x16))
                - ((x12_3 & (x13_3 | x17_2)) | (x13_3 & x17_2))
            int32_t x11_3 = x11_2 - x17_6
            int32_t x14_9 = x14_5 - (ror.d(x11_2, 6) ^ ror.d(x11_2, 0xb) ^ ror.d(x11_2, 0x19))
                - (x16_6 & x11_2) - x15_2[-2] - (x5_11 & not.d(x11_2))
            int32_t x6_6 = x17_6 - x15_2[-3]
                - (ror.d(x16_6, 6) ^ ror.d(x16_6, 0xb) ^ ror.d(x16_6, 0x19)) - (x5_11 & x16_6)
                - (x14_9 & not.d(x16_6))
            int32_t x13_7 = x17_2 - (ror.d(x13_3, 2) ^ ror.d(x13_3, 0xd) ^ ror.d(x13_3, 0x16))
                - ((x11_3 & (x12_3 | x13_3)) | (x12_3 & x13_3))
            result = zx.q(x16_6 - x13_7)
            int32_t x12_7 = x13_3 - (ror.d(x12_3, 2) ^ ror.d(x12_3, 0xd) ^ ror.d(x12_3, 0x16))
                - ((result.d & (x11_3 | x12_3)) | (x11_3 & x12_3))
            x1_1 = x5_11 - x12_7
            uint64_t x15_3 = zx.q(x15_2[-7])
            x17_1 = x13_7 - x15_2[-4] - (ror.d(x5_11, 6) ^ ror.d(x5_11, 0xb) ^ ror.d(x5_11, 0x19))
                - (x14_9 & x5_11) - (x6_6 & not.d(x5_11))
            int32_t x11_7 = x12_3 - (ror.d(x11_3, 2) ^ ror.d(x11_3, 0xd) ^ ror.d(x11_3, 0x16))
                - ((x1_1 & (result.d | x11_3)) | (result.d & x11_3))
            x13_2 = x12_7 - x15_2[-5] - (ror.d(x14_9, 6) ^ ror.d(x14_9, 0xb) ^ ror.d(x14_9, 0x19))
                - (x6_6 & x14_9) - (x17_1 & not.d(x14_9))
            x4_1 = x14_9 - x11_7
            x12_2 = x11_7 - *(x15_3 - 0x18)
                - (ror.d(x6_6, 6) ^ ror.d(x6_6, 0xb) ^ ror.d(x6_6, 0x19)) - (x17_1 & x6_6)
                - (x13_2 & not.d(x6_6))
            int32_t x11_11 = x11_3
                - (ror.d(result.d, 2) ^ ror.d(result.d, 0xd) ^ ror.d(result.d, 0x16))
                - ((x4_1 & (x1_1 | result.d)) | (x1_1 & result.d))
            x14_1 = x6_6 - x11_11
            i_1 -= 0x20
            x11_2 = x11_11 - x15_3.d - (ror.d(x17_1, 6) ^ ror.d(x17_1, 0xb) ^ ror.d(x17_1, 0x19))
                - (x13_2 & x17_1) - (x12_2 & not.d(x17_1))
        while (i_1 != -0x100)
        
        int32_t temp0_9 = _byteswap(result.d)
        int32_t temp0_10 = _byteswap(x1_1)
        int32_t temp0_11 = _byteswap(x4_1)
        int32_t temp0_12 = _byteswap(x14_1)
        int32_t temp0_13 = _byteswap(x17_1)
        int32_t temp0_14 = _byteswap(x13_2)
        int32_t temp0_15 = _byteswap(x12_2)
        int32_t temp0_16 = _byteswap(x11_2)
        x8_2 += 1
        x22 = &x22[0x20]
        *x21 = temp0_9
        *(x21 + 4) = temp0_10
        *(x21 + 8) = temp0_11
        *(x21 + 0xc) = temp0_12
        *(x21 + 0x10) = temp0_13
        *(x21 + 0x14) = temp0_14
        *(x21 + 0x18) = temp0_15
        *(x21 + 0x1c) = temp0_16
        x21 += 0x20
    while (x8_2 != i)

return result
