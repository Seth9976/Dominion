// 函数: _ZNK5Botan7Noekeon9encrypt_nEPKhPhm
// 地址: 0xdccbd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_5
    uint8_t* x1_6
    x0_5, x1_6 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Noekeon::simd_encrypt_4(x0_5, x1_6) __tailcall

int64_t entry_i
int64_t i = entry_i
uint64_t x21 = arg3
uint8_t* x22 = arg2
char* result
int128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
uint128_t v6
uint128_t v7
uint128_t v16
uint128_t v19
uint128_t v20
uint128_t v21
result, v0, v1, v2, v3, v4, v5, v6, v7, v16, v19, v20, v21 = Botan::CPUID::state()

if ((zx.d(*result) & 1) != 0 && i u>= 4)
    v0.d = 0xd4
    v0:4.d = 0xd4
    v0:8.d = 0xd4
    v0:0xc.d = 0xd4
    
    do
        int32_t* x10_1 = *(arg1 + 8)
        int64_t j = 0
        int32_t temp0_1 = *x10_1
        v1.d = temp0_1
        v1:4.d = temp0_1
        v1:8.d = temp0_1
        v1:0xc.d = temp0_1
        v6 = *(x22 + 0x10)
        v7 = *(x22 + 0x20)
        v16 = *(x22 + 0x30)
        int32_t temp0_2 = x10_1[2]
        v2.d = temp0_2
        v2:4.d = temp0_2
        v2:8.d = temp0_2
        v2:0xc.d = temp0_2
        int32_t temp0_3 = x10_1[3]
        v3.d = temp0_3
        v3:4.d = temp0_3
        v3:8.d = temp0_3
        v3:0xc.d = temp0_3
        int32_t temp0_4 = *x10_1
        v4.d = temp0_4
        v4:4.d = temp0_4
        v4:8.d = temp0_4
        v4:0xc.d = temp0_4
        uint128_t v5_1 = vrev32q_s8(*x22)
        uint128_t v6_1 = vrev32q_s8(v6)
        uint128_t v7_1 = vrev32q_s8(v7)
        uint128_t v16_1 = vrev32q_s8(v16)
        uint128_t v17_1 = vzip1q_s32(v5_1, v7_1)
        uint128_t v7_2 = vzip2q_s32(v5_1, v7_1)
        uint128_t v5_2 = vzip1q_s32(v6_1, v16_1)
        uint128_t v18_1 = vzip2q_s32(v6_1, v16_1)
        uint128_t v6_2 = vzip1q_s32(v17_1, v5_2)
        uint128_t v16_2 = vzip2q_s32(v17_1, v5_2)
        uint128_t v5_3 = vzip1q_s32(v7_2, v18_1)
        uint128_t v7_3 = vzip2q_s32(v7_2, v18_1)
        
        do
            uint32_t x10_2 = zx.d(*(Botan::Noekeon::RC + j))
            uint128_t v16_3 = v16_2 ^ v4
            uint128_t v7_4 = v7_3 ^ v3
            uint128_t v17_2 = v7_4 ^ v16_3
            v18_1.d = v17_2.d u>> 0x18
            v18_1:4.d = v17_2:4.d u>> 0x18
            v18_1:8.d = v17_2:8.d u>> 0x18
            v18_1:0xc.d = v17_2:0xc.d u>> 0x18
            v19.d = v17_2.d << 8
            v19:4.d = v17_2:4.d << 8
            v19:8.d = v17_2:8.d << 8
            v19:0xc.d = v17_2:0xc.d << 8
            uint128_t v18_2 = vorrq_s8(v19, v18_1)
            v20.d = v17_2.d u>> 8
            v20:4.d = v17_2:4.d u>> 8
            v20:8.d = v17_2:8.d u>> 8
            v20:0xc.d = v17_2:0xc.d u>> 8
            v19.d = v17_2.d << 0x18
            v19:4.d = v17_2:4.d << 0x18
            v19:8.d = v17_2:8.d << 0x18
            v19:0xc.d = v17_2:0xc.d << 0x18
            uint128_t v17_3 = v18_2 ^ v17_2
            v18_2.d = x10_2
            v18_2:4.d = x10_2
            v18_2:8.d = x10_2
            v18_2:0xc.d = x10_2
            uint128_t v6_3 = v18_2 ^ v6_2
            uint128_t v17_4 = v17_3 ^ vorrq_s8(v19, v20)
            uint128_t v5_4 = v6_3 ^ v5_3
            uint128_t v18_3 = v5_3 ^ v2 ^ v17_4
            uint128_t v19_1
            v19_1.d = v5_4.d u>> 0x18
            v19_1:4.d = v5_4:4.d u>> 0x18
            v19_1:8.d = v5_4:8.d u>> 0x18
            v19_1:0xc.d = v5_4:0xc.d u>> 0x18
            v20.d = v5_4.d << 8
            v20:4.d = v5_4:4.d << 8
            v20:8.d = v5_4:8.d << 8
            v20:0xc.d = v5_4:0xc.d << 8
            uint128_t v6_5 = v6_3 ^ v1 ^ v17_4
            v17_4.d = v5_4.d u>> 8
            v17_4:4.d = v5_4:4.d u>> 8
            v17_4:8.d = v5_4:8.d u>> 8
            v17_4:0xc.d = v5_4:0xc.d u>> 8
            v19 = vorrq_s8(v20, v19_1)
            v20.d = v5_4.d << 0x18
            v20:4.d = v5_4:4.d << 0x18
            v20:8.d = v5_4:8.d << 0x18
            v20:0xc.d = v5_4:0xc.d << 0x18
            uint128_t v5_6 = v19 ^ v5_4 ^ vorrq_s8(v20, v17_4)
            uint128_t v16_4 = v5_6 ^ v16_3
            uint128_t v5_7 = v5_6 ^ v7_4
            v20.d = v18_3.d u>> 0x1b
            v20:4.d = v18_3:4.d u>> 0x1b
            v20:8.d = v18_3:8.d u>> 0x1b
            v20:0xc.d = v18_3:0xc.d u>> 0x1b
            v18_3.d <<= 5
            v18_3:4.d <<= 5
            v18_3:8.d <<= 5
            v18_3:0xc.d <<= 5
            v7_4.d = v16_4.d u>> 0x1f
            v7_4:4.d = v16_4:4.d u>> 0x1f
            v7_4:8.d = v16_4:8.d u>> 0x1f
            v7_4:0xc.d = v16_4:0xc.d u>> 0x1f
            v16_4.d <<= 1
            v16_4:4.d <<= 1
            v16_4:8.d <<= 1
            v16_4:0xc.d <<= 1
            uint128_t v17_5
            v17_5.d = v5_7.d u>> 0x1e
            v17_5:4.d = v5_7:4.d u>> 0x1e
            v17_5:8.d = v5_7:8.d u>> 0x1e
            v17_5:0xc.d = v5_7:0xc.d u>> 0x1e
            v5_7.d <<= 2
            v5_7:4.d <<= 2
            v5_7:8.d <<= 2
            v5_7:0xc.d <<= 2
            uint128_t v18_4 = vorrq_s8(v18_3, v20)
            uint128_t v7_5 = vorrq_s8(v16_4, v7_4)
            uint128_t v16_5 = vorrq_s8(v5_7, v17_5)
            uint128_t v5_9 = vorrq_s8(v16_5, v18_4) ^ v7_5
            uint128_t v6_6 = v6_5 ^ (v18_4 & not.o(v5_9))
            uint128_t v7_7 = v16_5 ^ v18_4 ^ not.o(v5_9)
            uint128_t v17_7 = v6_6 ^ v7_7
            uint128_t v5_10 = vorrq_s8(v6_6, v7_7) ^ v5_9
            j += 1
            v18_1.d = v6_6.d u>> 2
            v18_1:4.d = v6_6:4.d u>> 2
            v18_1:8.d = v6_6:8.d u>> 2
            v18_1:0xc.d = v6_6:0xc.d u>> 2
            v19.d = v6_6.d << 0x1e
            v19:4.d = v6_6:4.d << 0x1e
            v19:8.d = v6_6:8.d << 0x1e
            v19:0xc.d = v6_6:0xc.d << 0x1e
            v6_6.d = v17_7.d u>> 5
            v6_6:4.d = v17_7:4.d u>> 5
            v6_6:8.d = v17_7:8.d u>> 5
            v6_6:0xc.d = v17_7:0xc.d u>> 5
            uint128_t v7_8
            v7_8.d = v17_7.d << 0x1b
            v7_8:4.d = v17_7:4.d << 0x1b
            v7_8:8.d = v17_7:8.d << 0x1b
            v7_8:0xc.d = v17_7:0xc.d << 0x1b
            v20.d = v5_10.d u>> 1
            v20:4.d = v5_10:4.d u>> 1
            v20:8.d = v5_10:8.d u>> 1
            v20:0xc.d = v5_10:0xc.d u>> 1
            v21.d = v5_10.d << 0x1f
            v21:4.d = v5_10:4.d << 0x1f
            v21:8.d = v5_10:8.d << 0x1f
            v21:0xc.d = v5_10:0xc.d << 0x1f
            v5_3 = vorrq_s8(v7_8, v6_6)
            v6_2 = (v5_10 & v17_7) ^ v16_5
            v16_2 = vorrq_s8(v21, v20)
            v7_3 = vorrq_s8(v19, v18_1)
        while (j != 0x10)
        
        int128_t v6_7 = v6_2 ^ v0
        uint128_t v4_1 = v16_2 ^ v4
        uint128_t v3_1 = v7_3 ^ v3
        int128_t v5_11 = v6_7 ^ v5_3
        uint128_t v6_8 = v4_1 ^ v3_1
        v7_3.d = v5_11.d u>> 0x18
        v7_3:4.d = v5_11:4.d u>> 0x18
        v7_3:8.d = v5_11:8.d u>> 0x18
        v7_3:0xc.d = v5_11:0xc.d u>> 0x18
        v16_2.d = v5_11.d << 8
        v16_2:4.d = v5_11:4.d << 8
        v16_2:8.d = v5_11:8.d << 8
        v16_2:0xc.d = v5_11:0xc.d << 8
        uint128_t v17_8
        v17_8.d = v5_11.d u>> 8
        v17_8:4.d = v5_11:4.d u>> 8
        v17_8:8.d = v5_11:8.d u>> 8
        v17_8:0xc.d = v5_11:0xc.d u>> 8
        v18_1.d = v5_11.d << 0x18
        v18_1:4.d = v5_11:4.d << 0x18
        v18_1:8.d = v5_11:8.d << 0x18
        v18_1:0xc.d = v5_11:0xc.d << 0x18
        v19.d = v6_8.d u>> 0x18
        v19:4.d = v6_8:4.d u>> 0x18
        v19:8.d = v6_8:8.d u>> 0x18
        v19:0xc.d = v6_8:0xc.d u>> 0x18
        v20.d = v6_8.d << 8
        v20:4.d = v6_8:4.d << 8
        v20:8.d = v6_8:8.d << 8
        v20:0xc.d = v6_8:0xc.d << 8
        v7 = vorrq_s8(v16_2, v7_3)
        v16_2.d = v6_8.d u>> 8
        v16_2:4.d = v6_8:4.d u>> 8
        v16_2:8.d = v6_8:8.d u>> 8
        v16_2:0xc.d = v6_8:0xc.d u>> 8
        uint128_t v17_9 = vorrq_s8(v18_1, v17_8)
        v18_1.d = v6_8.d << 0x18
        v18_1:4.d = v6_8:4.d << 0x18
        v18_1:8.d = v6_8:8.d << 0x18
        v18_1:0xc.d = v6_8:0xc.d << 0x18
        int128_t v5_13 = v7 ^ v5_11 ^ v17_9
        v6 = vorrq_s8(v20, v19) ^ v6_8 ^ vorrq_s8(v18_1, v16_2)
        uint128_t v4_2 = v5_13 ^ v4_1
        uint128_t v3_2 = v5_13 ^ v3_1
        uint128_t v1_2 = v6_7 ^ v1 ^ v6
        uint128_t v2_2 = v5_3 ^ v2 ^ v6
        uint128_t v5_14 = vzip1q_s32(v1_2, v2_2)
        uint128_t v1_3 = vzip2q_s32(v1_2, v2_2)
        uint128_t v2_3 = vzip1q_s32(v4_2, v3_2)
        uint128_t v3_3 = vzip2q_s32(v4_2, v3_2)
        uint128_t v4_3 = vzip1q_s32(v5_14, v2_3)
        uint128_t v2_4 = vzip2q_s32(v5_14, v2_3)
        v5 = vzip1q_s32(v1_3, v3_3)
        uint128_t v1_4 = vzip2q_s32(v1_3, v3_3)
        i -= 4
        v3 = vrev32q_s8(v4_3)
        v2 = vrev32q_s8(v2_4)
        v4 = vrev32q_s8(v5)
        v1 = vrev32q_s8(v1_4)
        x22 = &x22[0x40]
        *x21 = v3
        *(x21 + 0x10) = v2
        *(x21 + 0x20) = v4
        *(x21 + 0x30) = v1
        x21 += 0x40
    while (i u> 3)

if (i != 0)
    int64_t x9_2 = 0
    
    do
        int32_t x14_1 = *(x22 + 4)
        int32_t* x12_2 = *(arg1 + 8)
        int32_t x17_1 = *(x22 + 8)
        int32_t x2 = *(x22 + 0xc)
        int64_t i_1 = 0
        int32_t x1 = _byteswap(*x22)
        int32_t x13_1 = *x12_2
        int32_t x11_3 = x12_2[1]
        int32_t x16_1 = x12_2[2]
        int32_t x12_3 = x12_2[3]
        result = zx.q(_byteswap(x14_1))
        int32_t x14_2 = _byteswap(x17_1)
        int32_t x17_2 = _byteswap(x2)
        
        do
            int32_t x0 = x11_3 ^ result.d
            int32_t x17_3 = x12_3 ^ x17_2
            int32_t x3 = x0 ^ x17_3
            int32_t x1_1 = x1 ^ zx.d(*(Botan::Noekeon::RC + i_1))
            int32_t x3_1 = x3 ^ ror.d(x3, 8) ^ ror.d(x3, 0x18)
            int32_t x14_3 = x1_1 ^ x14_2
            int32_t x14_4 = x14_3 ^ ror.d(x14_3, 8) ^ ror.d(x14_3, 0x18)
            int32_t x2_4 = ror.d(x16_1 ^ x14_2 ^ x3_1, 0x1b)
            int32_t x17_4 = ror.d(x17_3 ^ x14_4, 0x1e)
            int32_t x14_7 = (x2_4 | x17_4) ^ ror.d(x0 ^ x14_4, 0x1f)
            int32_t x2_5 = x14_7 ^ not.d(x2_4 ^ x17_4)
            int32_t x3_4 = x1_1 ^ x13_1 ^ x3_1 ^ (x2_4 & not.d(x14_7))
            int32_t x0_3 = x2_5 ^ x3_4
            int32_t x1_5 = (x2_5 | x3_4) ^ x14_7
            i_1 += 1
            x14_2 = ror.d(x0_3, 5)
            result = zx.q(ror.d(x1_5, 1))
            x1 = (x1_5 & x0_3) ^ x17_4
            x17_2 = ror.d(x3_4, 2)
        while (i_1 != 0x10)
        
        int32_t x15_1 = x1 ^ 0xd4
        int32_t x14_8 = x14_2 ^ x15_1
        int32_t x14_9 = x14_8 ^ ror.d(x14_8, 8) ^ ror.d(x14_8, 0x18)
        int32_t x11_4 = x14_9 ^ result.d ^ x11_3
        int32_t x12_4 = x14_9 ^ x17_2 ^ x12_3
        int32_t x14_11 = x12_4 ^ x11_4
        int32_t x14_12 = x14_11 ^ ror.d(x14_11, 8) ^ ror.d(x14_11, 0x18)
        x9_2 += 1
        int32_t temp0_9 = _byteswap(x11_4)
        int32_t temp0_10 = _byteswap(x12_4)
        int32_t temp0_11 = _byteswap(x13_1 ^ x15_1 ^ x14_12)
        int32_t temp0_12 = _byteswap(x16_1 ^ x14_2 ^ x14_12)
        x22 = &x22[0x10]
        *x21 = temp0_11
        *(x21 + 4) = temp0_9
        *(x21 + 8) = temp0_12
        *(x21 + 0xc) = temp0_10
        x21 += 0x10
    while (x9_2 != i)

return result
