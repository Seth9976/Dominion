// 函数: _ZNK5Botan7SHACAL29encrypt_nEPKhPhm
// 地址: 0xe22340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_27
    uint8_t* x1_8
    x0_27, x1_8 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SHACAL2::simd_encrypt_4(x0_27, x1_8) __tailcall

int64_t entry_i
int64_t i = entry_i
uint64_t x21 = arg3
uint8_t* x22 = arg2
char* result = Botan::CPUID::state()

if ((zx.d(*result) & 1) != 0 && i u>= 4)
    do
        result = Botan::SHACAL2::simd_encrypt_4(arg1, x22)
        i -= 4
        x22 = &x22[0x80]
        x21 += 0x80
    while (i u> 3)

if (i != 0)
    int64_t x8_2 = 0
    
    do
        int32_t x11_1 = *(x22 + 4)
        int32_t x12_1 = *(x22 + 8)
        int32_t x14_1 = *(x22 + 0xc)
        int32_t x16_1 = *(x22 + 0x10)
        int32_t x0_1 = *(x22 + 0x14)
        int32_t x1_1 = *(x22 + 0x18)
        int32_t x2_1 = *(x22 + 0x1c)
        void* x3 = *(arg1 + 8)
        int64_t i_1 = 0
        int32_t x15_1 = _byteswap(*x22)
        int32_t x13_1 = _byteswap(x11_1)
        int32_t x12_2 = _byteswap(x12_1)
        int32_t x14_2 = _byteswap(x14_1)
        int32_t x17_1 = _byteswap(x16_1)
        result = zx.q(_byteswap(x0_1))
        int32_t x16_2 = _byteswap(x1_1)
        int32_t x11_2 = _byteswap(x2_1)
        
        do
            int32_t* x1_2 = x3 + 0x10 + i_1
            int32_t x11_4 = ((x16_2 & not.d(x17_1)) | (result.d & x17_1))
                + (ror.d(x17_1, 6) ^ ror.d(x17_1, 0xb) ^ ror.d(x17_1, 0x19)) + x11_2 + x1_2[-4]
            int32_t x14_3 = x11_4 + x14_2
            int32_t x11_5 = (((x13_1 | x15_1) & x12_2) | (x13_1 & x15_1))
                + (ror.d(x15_1, 2) ^ ror.d(x15_1, 0xd) ^ ror.d(x15_1, 0x16)) + x11_4
            int32_t x16_6 = x1_2[-3] + x16_2 + (x14_3 & x17_1) + (result.d & not.d(x14_3))
                + (ror.d(x14_3, 6) ^ ror.d(x14_3, 0xb) ^ ror.d(x14_3, 0x19))
            int32_t x12_3 = x16_6 + x12_2
            int32_t x16_7 = (((x11_5 | x15_1) & x13_1) | (x11_5 & x15_1))
                + (ror.d(x11_5, 2) ^ ror.d(x11_5, 0xd) ^ ror.d(x11_5, 0x16)) + x16_6
            int32_t x17_4 = x1_2[-2] + result.d + (x12_3 & x14_3) + (x17_1 & not.d(x12_3))
                + (ror.d(x12_3, 6) ^ ror.d(x12_3, 0xb) ^ ror.d(x12_3, 0x19))
            int32_t x13_2 = x17_4 + x13_1
            int32_t x17_5 = (((x16_7 | x11_5) & x15_1) | (x16_7 & x11_5))
                + (ror.d(x16_7, 2) ^ ror.d(x16_7, 0xd) ^ ror.d(x16_7, 0x16)) + x17_4
            int32_t x14_6 = x1_2[-1] + x17_1 + (x13_2 & x12_3) + (x14_3 & not.d(x13_2))
                + (ror.d(x13_2, 6) ^ ror.d(x13_2, 0xb) ^ ror.d(x13_2, 0x19))
            int32_t x15_2 = x14_6 + x15_1
            int32_t x3_19 = (((x17_5 | x16_7) & x11_5) | (x17_5 & x16_7))
                + (ror.d(x17_5, 2) ^ ror.d(x17_5, 0xd) ^ ror.d(x17_5, 0x16)) + x14_6
            int32_t x12_6 = *x1_2 + x14_3 + (x15_2 & x13_2) + (x12_3 & not.d(x15_2))
                + (ror.d(x15_2, 6) ^ ror.d(x15_2, 0xb) ^ ror.d(x15_2, 0x19))
            x11_2 = x12_6 + x11_5
            x14_2 = (((x3_19 | x17_5) & x16_7) | (x3_19 & x17_5))
                + (ror.d(x3_19, 2) ^ ror.d(x3_19, 0xd) ^ ror.d(x3_19, 0x16)) + x12_6
            int32_t x13_5 = x12_3 + x1_2[1] + (x11_2 & x15_2) + (x13_2 & not.d(x11_2))
                + (ror.d(x11_2, 6) ^ ror.d(x11_2, 0xb) ^ ror.d(x11_2, 0x19))
            x16_2 = x13_5 + x16_7
            x12_2 = (((x14_2 | x3_19) & x17_5) | (x14_2 & x3_19))
                + (ror.d(x14_2, 2) ^ ror.d(x14_2, 0xd) ^ ror.d(x14_2, 0x16)) + x13_5
            int32_t x15_5 = x13_2 + x1_2[2] + (x16_2 & x11_2) + (x15_2 & not.d(x16_2))
                + (ror.d(x16_2, 6) ^ ror.d(x16_2, 0xb) ^ ror.d(x16_2, 0x19))
            result = zx.q(x15_5 + x17_5)
            x13_1 = (((x12_2 | x14_2) & x3_19) | (x12_2 & x14_2))
                + (ror.d(x12_2, 2) ^ ror.d(x12_2, 0xd) ^ ror.d(x12_2, 0x16)) + x15_5
            i_1 += 0x20
            int32_t x1_7 = x15_2 + x1_2[3] + (result.d & x16_2) + (x11_2 & not.d(result.d))
                + (ror.d(result.d, 6) ^ ror.d(result.d, 0xb) ^ ror.d(result.d, 0x19))
            x17_1 = x1_7 + x3_19
            x15_1 = (((x13_1 | x12_2) & x14_2) | (x13_1 & x12_2))
                + (ror.d(x13_1, 2) ^ ror.d(x13_1, 0xd) ^ ror.d(x13_1, 0x16)) + x1_7
        while (i_1 != 0x100)
        
        int32_t temp0_9 = _byteswap(x15_1)
        int32_t temp0_10 = _byteswap(x13_1)
        int32_t temp0_11 = _byteswap(x12_2)
        int32_t temp0_12 = _byteswap(x14_2)
        int32_t temp0_13 = _byteswap(x17_1)
        int32_t temp0_14 = _byteswap(result.d)
        int32_t temp0_15 = _byteswap(x16_2)
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
