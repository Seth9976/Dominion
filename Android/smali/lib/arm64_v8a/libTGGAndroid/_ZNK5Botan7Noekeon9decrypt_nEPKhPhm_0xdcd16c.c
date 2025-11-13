// 函数: _ZNK5Botan7Noekeon9decrypt_nEPKhPhm
// 地址: 0xdcd16c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == *(arg1 + 0x28))
    uint8_t* x0_6
    uint8_t* x1_7
    x0_6, x1_7 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Noekeon::simd_decrypt_4(x0_6, x1_7) __tailcall

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
uint128_t v20
uint128_t v21
result, v0, v1, v2, v3, v4, v5, v6, v7, v16, v20, v21 = Botan::CPUID::state()

if ((zx.d(*result) & 1) != 0 && i u>= 4)
    v0.d = 0x80
    v0:4.d = 0x80
    v0:8.d = 0x80
    v0:0xc.d = 0x80
    
    do
        int32_t* x9_2 = *(arg1 + 0x20)
        int32_t temp0_1 = *x9_2
        v1.d = temp0_1
        v1:4.d = temp0_1
        v1:8.d = temp0_1
        v1:0xc.d = temp0_1
        v6 = *(x22 + 0x10)
        v7 = *(x22 + 0x20)
        v16 = *(x22 + 0x30)
        int32_t temp0_2 = x9_2[2]
        v2.d = temp0_2
        v2:4.d = temp0_2
        v2:8.d = temp0_2
        v2:0xc.d = temp0_2
        int32_t temp0_3 = x9_2[3]
        v3.d = temp0_3
        v3:4.d = temp0_3
        v3:8.d = temp0_3
        v3:0xc.d = temp0_3
        int32_t temp0_4 = *x9_2
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
        uint128_t v18_1 = vzip1q_s32(v6_1, v16_1)
        uint128_t v19_1 = vzip2q_s32(v6_1, v16_1)
        uint128_t v5_2 = vzip1q_s32(v17_1, v18_1)
        uint128_t v16_2 = vzip2q_s32(v17_1, v18_1)
        uint128_t v6_2 = vzip1q_s32(v7_2, v19_1)
        uint128_t v7_3 = vzip2q_s32(v7_2, v19_1)
        int64_t j_1 = 0x10
        int64_t j
        
        do
            uint128_t v17_2 = v6_2 ^ v5_2
            uint128_t v16_3 = v16_2 ^ v4
            uint128_t v7_4 = v7_3 ^ v3
            uint32_t x10_2 = zx.d(*(Botan::Noekeon::RC + j_1))
            v18_1.d = v17_2.d u>> 0x18
            v18_1:4.d = v17_2:4.d u>> 0x18
            v18_1:8.d = v17_2:8.d u>> 0x18
            v18_1:0xc.d = v17_2:0xc.d u>> 0x18
            v19_1.d = v17_2.d << 8
            v19_1:4.d = v17_2:4.d << 8
            v19_1:8.d = v17_2:8.d << 8
            v19_1:0xc.d = v17_2:0xc.d << 8
            v20.d = v17_2.d u>> 8
            v20:4.d = v17_2:4.d u>> 8
            v20:8.d = v17_2:8.d u>> 8
            v20:0xc.d = v17_2:0xc.d u>> 8
            v21.d = v17_2.d << 0x18
            v21:4.d = v17_2:4.d << 0x18
            v21:8.d = v17_2:8.d << 0x18
            v21:0xc.d = v17_2:0xc.d << 0x18
            uint128_t v22_1 = v7_4 ^ v16_3
            uint128_t v18_2 = vorrq_s8(v19_1, v18_1)
            uint128_t v19_2 = vorrq_s8(v21, v20)
            v20.d = v22_1.d u>> 0x18
            v20:4.d = v22_1:4.d u>> 0x18
            v20:8.d = v22_1:8.d u>> 0x18
            v20:0xc.d = v22_1:0xc.d u>> 0x18
            v21.d = v22_1.d << 8
            v21:4.d = v22_1:4.d << 8
            v21:8.d = v22_1:8.d << 8
            v21:0xc.d = v22_1:0xc.d << 8
            uint128_t v17_3 = v18_2 ^ v17_2
            v18_2.d = v22_1.d u>> 8
            v18_2:4.d = v22_1:4.d u>> 8
            v18_2:8.d = v22_1:8.d u>> 8
            v18_2:0xc.d = v22_1:0xc.d u>> 8
            uint128_t v20_1 = vorrq_s8(v21, v20)
            v21.d = v22_1.d << 0x18
            v21:4.d = v22_1:4.d << 0x18
            v21:8.d = v22_1:8.d << 0x18
            v21:0xc.d = v22_1:0xc.d << 0x18
            uint128_t v17_4 = v17_3 ^ v19_2
            v19_1 = v20_1 ^ v22_1
            v20_1.d = float.s(x10_2)
            uint128_t v16_4 = v17_4 ^ v16_3
            uint128_t v7_5 = v17_4 ^ v7_4
            uint128_t v17_5 = v19_1 ^ vorrq_s8(v21, v18_2)
            uint128_t v6_4 = v6_2 ^ v2 ^ v17_5
            v20.d = v7_5.d u>> 0x1e
            v20:4.d = v7_5:4.d u>> 0x1e
            v20:8.d = v7_5:8.d u>> 0x1e
            v20:0xc.d = v7_5:0xc.d u>> 0x1e
            v7_5.d <<= 2
            v7_5:4.d <<= 2
            v7_5:8.d <<= 2
            v7_5:0xc.d <<= 2
            uint128_t v5_3 = vdupq_laneq_s32(v20_1 ^ v1, 0) ^ v5_2
            uint128_t v18_4
            v18_4.d = v6_4.d u>> 0x1b
            v18_4:4.d = v6_4:4.d u>> 0x1b
            v18_4:8.d = v6_4:8.d u>> 0x1b
            v18_4:0xc.d = v6_4:0xc.d u>> 0x1b
            v6_4.d <<= 5
            v6_4:4.d <<= 5
            v6_4:8.d <<= 5
            v6_4:0xc.d <<= 5
            v19_1.d = v16_4.d u>> 0x1f
            v19_1:4.d = v16_4:4.d u>> 0x1f
            v19_1:8.d = v16_4:8.d u>> 0x1f
            v19_1:0xc.d = v16_4:0xc.d u>> 0x1f
            v16_4.d <<= 1
            v16_4:4.d <<= 1
            v16_4:8.d <<= 1
            v16_4:0xc.d <<= 1
            uint128_t v7_6 = vorrq_s8(v7_5, v20)
            uint128_t v6_5 = vorrq_s8(v6_4, v18_4)
            uint128_t v16_5 = vorrq_s8(v16_4, v19_1)
            uint128_t v16_6 = vorrq_s8(v6_5, v7_6) ^ v16_5
            int128_t v5_5 = v5_3 ^ v17_5 ^ (v6_5 & not.o(v16_6))
            uint128_t v6_7 = v6_5 ^ v7_6 ^ not.o(v16_6)
            int128_t v17_8 = v5_5 ^ v6_7
            v18_1.d = v5_5.d u>> 2
            v18_1:4.d = v5_5:4.d u>> 2
            v18_1:8.d = v5_5:8.d u>> 2
            v18_1:0xc.d = v5_5:0xc.d u>> 2
            v19_1.d = v5_5.d << 0x1e
            v19_1:4.d = v5_5:4.d << 0x1e
            v19_1:8.d = v5_5:8.d << 0x1e
            v19_1:0xc.d = v5_5:0xc.d << 0x1e
            uint128_t v5_6 = vorrq_s8(v5_5, v6_7) ^ v16_6
            uint128_t v6_8
            v6_8.d = v17_8.d u>> 5
            v6_8:4.d = v17_8:4.d u>> 5
            v6_8:8.d = v17_8:8.d u>> 5
            v6_8:0xc.d = v17_8:0xc.d u>> 5
            v16_6.d = v17_8.d << 0x1b
            v16_6:4.d = v17_8:4.d << 0x1b
            v16_6:8.d = v17_8:8.d << 0x1b
            v16_6:0xc.d = v17_8:0xc.d << 0x1b
            v20.d = v5_6.d u>> 1
            v20:4.d = v5_6:4.d u>> 1
            v20:8.d = v5_6:8.d u>> 1
            v20:0xc.d = v5_6:0xc.d u>> 1
            v21.d = v5_6.d << 0x1f
            v21:4.d = v5_6:4.d << 0x1f
            v21:8.d = v5_6:8.d << 0x1f
            v21:0xc.d = v5_6:0xc.d << 0x1f
            j = j_1
            j_1 -= 1
            v6_2 = vorrq_s8(v16_6, v6_8)
            v5_2 = (v5_6 & v17_8) ^ v7_6
            v16_2 = vorrq_s8(v21, v20)
            v7_3 = vorrq_s8(v19_1, v18_1)
        while (j != 1)
        uint128_t v17_10 = v5_2 ^ v6_2
        uint128_t v4_1 = v16_2 ^ v4
        uint128_t v3_1 = v7_3 ^ v3
        uint128_t v2_1 = v6_2 ^ v2
        uint128_t v1_1 = v1 ^ v5_2
        v5_2.d = v17_10.d u>> 0x18
        v5_2:4.d = v17_10:4.d u>> 0x18
        v5_2:8.d = v17_10:8.d u>> 0x18
        v5_2:0xc.d = v17_10:0xc.d u>> 0x18
        v6_2.d = v17_10.d << 8
        v6_2:4.d = v17_10:4.d << 8
        v6_2:8.d = v17_10:8.d << 8
        v6_2:0xc.d = v17_10:0xc.d << 8
        v7_3.d = v17_10.d u>> 8
        v7_3:4.d = v17_10:4.d u>> 8
        v7_3:8.d = v17_10:8.d u>> 8
        v7_3:0xc.d = v17_10:0xc.d u>> 8
        v16_2.d = v17_10.d << 0x18
        v16_2:4.d = v17_10:4.d << 0x18
        v16_2:8.d = v17_10:8.d << 0x18
        v16_2:0xc.d = v17_10:0xc.d << 0x18
        uint128_t v18_5 = v4_1 ^ v3_1
        uint128_t v5_7 = vorrq_s8(v6_2, v5_2)
        uint128_t v6_9 = vorrq_s8(v16_2, v7_3)
        v7_3.d = v18_5.d u>> 0x18
        v7_3:4.d = v18_5:4.d u>> 0x18
        v7_3:8.d = v18_5:8.d u>> 0x18
        v7_3:0xc.d = v18_5:0xc.d u>> 0x18
        v16_2.d = v18_5.d << 8
        v16_2:4.d = v18_5:4.d << 8
        v16_2:8.d = v18_5:8.d << 8
        v16_2:0xc.d = v18_5:0xc.d << 8
        v19_1.d = v18_5.d u>> 8
        v19_1:4.d = v18_5:4.d u>> 8
        v19_1:8.d = v18_5:8.d u>> 8
        v19_1:0xc.d = v18_5:0xc.d u>> 8
        v20.d = v18_5.d << 0x18
        v20:4.d = v18_5:4.d << 0x18
        v20:8.d = v18_5:8.d << 0x18
        v20:0xc.d = v18_5:0xc.d << 0x18
        uint128_t v5_9 = v5_7 ^ v17_10 ^ v6_9
        uint128_t v4_2 = v5_9 ^ v4_1
        uint128_t v3_2 = v5_9 ^ v3_1
        uint128_t v5_10 = vorrq_s8(v16_2, v7_3) ^ v18_5 ^ vorrq_s8(v20, v19_1)
        uint128_t v2_2 = v2_1 ^ v5_10
        uint128_t v1_3 = v1_1 ^ v5_10 ^ v0
        uint128_t v5_11 = vzip1q_s32(v4_2, v3_2)
        uint128_t v3_3 = vzip2q_s32(v4_2, v3_2)
        uint128_t v4_3 = vzip1q_s32(v1_3, v2_2)
        uint128_t v1_4 = vzip2q_s32(v1_3, v2_2)
        uint128_t v2_3 = vzip1q_s32(v4_3, v5_11)
        uint128_t v4_4 = vzip2q_s32(v4_3, v5_11)
        v5 = vzip1q_s32(v1_4, v3_3)
        uint128_t v1_5 = vzip2q_s32(v1_4, v3_3)
        i -= 4
        v2 = vrev32q_s8(v2_3)
        v3 = vrev32q_s8(v4_4)
        v4 = vrev32q_s8(v5)
        v1 = vrev32q_s8(v1_5)
        x22 = &x22[0x40]
        *x21 = v2
        *(x21 + 0x10) = v3
        *(x21 + 0x20) = v4
        *(x21 + 0x30) = v1
        x21 += 0x40
    while (i u> 3)

if (i != 0)
    int64_t x9_3 = 0
    
    do
        int32_t x11_2 = *(x22 + 4)
        int32_t* x13_1 = *(arg1 + 0x20)
        int32_t x16_1 = *(x22 + 8)
        int32_t x1 = *(x22 + 0xc)
        int32_t x17_1 = _byteswap(*x22)
        int32_t x12_1 = _byteswap(x11_2)
        int32_t x14_1 = *x13_1
        int32_t x10_4 = x13_1[1]
        int32_t x15_1 = x13_1[2]
        int32_t x11_3 = x13_1[3]
        result = zx.q(_byteswap(x16_1))
        int32_t x13_2 = _byteswap(x1)
        int64_t i_2 = 0x10
        int64_t i_1
        
        do
            int32_t x1_1 = result.d ^ x17_1
            int32_t x1_2 = x1_1 ^ ror.d(x1_1, 8) ^ ror.d(x1_1, 0x18)
            int32_t x12_3 = x1_2 ^ x12_1 ^ x10_4
            int32_t x13_4 = x1_2 ^ x13_2 ^ x11_3
            int32_t x1_3 = x13_4 ^ x12_3
            int32_t x1_4 = x1_3 ^ ror.d(x1_3, 8) ^ ror.d(x1_3, 0x18)
            int32_t x13_5 = ror.d(x13_4, 0x1e)
            int32_t x0_2 = ror.d(x15_1 ^ result.d ^ x1_4, 0x1b)
            int32_t x12_4 = (x0_2 | x13_5) ^ ror.d(x12_3, 0x1f)
            int32_t x1_6 = x12_4 ^ not.d(x0_2 ^ x13_5)
            int32_t x2_3 =
                x14_1 ^ x17_1 ^ zx.d(*(Botan::Noekeon::RC + i_2)) ^ x1_4 ^ (x0_2 & not.d(x12_4))
            int32_t x17_5 = x1_6 ^ x2_3
            int32_t x12_5 = (x1_6 | x2_3) ^ x12_4
            result = zx.q(ror.d(x17_5, 5))
            i_1 = i_2
            i_2 -= 1
            x12_1 = ror.d(x12_5, 1)
            x17_1 = (x12_5 & x17_5) ^ x13_5
            x13_2 = ror.d(x2_3, 2)
        while (i_1 != 1)
        int32_t x16_2 = result.d ^ x17_1
        int32_t x16_3 = x16_2 ^ ror.d(x16_2, 8) ^ ror.d(x16_2, 0x18)
        int32_t x10_5 = x16_3 ^ x12_1 ^ x10_4
        int32_t x11_4 = x16_3 ^ x13_2 ^ x11_3
        int32_t x12_7 = x11_4 ^ x10_5
        int32_t x12_8 = x12_7 ^ ror.d(x12_7, 8) ^ ror.d(x12_7, 0x18)
        x9_3 += 1
        int32_t temp0_9 = _byteswap(x10_5)
        int32_t temp0_10 = _byteswap(x11_4)
        int32_t temp0_11 = _byteswap(x15_1 ^ result.d ^ x12_8)
        int32_t temp0_12 = _byteswap(x17_1 ^ x14_1 ^ x12_8 ^ 0x80)
        x22 = &x22[0x10]
        *(x21 + 8) = temp0_11
        *(x21 + 0xc) = temp0_10
        *x21 = temp0_12
        *(x21 + 4) = temp0_9
        x21 += 0x10
    while (x9_3 != i)

return result
