// 函数: _ZNK5Botan6KASUMI9decrypt_nEPKhPhm
// 地址: 0xd91378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x15 = *(arg1 + 8)

if (x15 == *(arg1 + 0x10))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::KASUMI::key_schedule(x0, x1) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = 0

while (true)
    uint32_t x13_1 = zx.d(*(arg2 + 2))
    uint32_t x14_1 = zx.d(*(arg2 + 4))
    uint32_t x16_1 = zx.d(*(arg2 + 6))
    int64_t i = 0
    uint32_t x17_1 = _byteswap(zx.d(*arg2)) u>> 0x10
    uint32_t x14_2 = _byteswap(x13_1) u>> 0x10
    uint32_t x12_3 = _byteswap(x14_1) u>> 0x10
    uint32_t x13_3 = _byteswap(x16_1) u>> 0x10
    
    do
        int16_t* x16_3 = x15 + 0x7e + i
        uint32_t x5_1 = zx.d(x16_3[-4])
        uint32_t x7_1 = zx.d(x16_3[-2])
        uint64_t x4_3 = zx.q(x16_3[-5]) ^ zx.q(x12_3)
        uint64_t x6_2 = zx.q(x16_3[-3]) ^ zx.q(x13_3)
        int64_t x4_4 = x4_3 & 0x7f
        int16_t x4_5 = *(&data_8514c0 + ((zx.q(x4_3.d u>> 7) & 0x1ff) << 1)) ^ x4_4.w
        int64_t x6_3 = x6_2 & 0x7f
        int16_t x21_5 = *(&data_8514c0 + ((zx.q(x6_2.d u>> 7) & 0x1ff) << 1)) ^ x6_3.w
        char x4_7 = (*"62>8")[x4_4] ^ (x5_1 u>> 9).b ^ (x4_5.b & 0x7f)
        char x6_6 = (*"62>8")[x6_3] ^ (x7_1 u>> 9).b ^ (x21_5.b & 0x7f)
        uint32_t x5_6 =
            zx.d(*(&data_8514c0 + ((zx.q(x4_5) ^ (zx.q(x5_1.w) & 0x1ff)) << 1))) ^ zx.d(x4_7)
        uint32_t x7_6 =
            zx.d(*(&data_8514c0 + ((zx.q(x21_5) ^ (zx.q(x7_1.w) & 0x1ff)) << 1))) ^ zx.d(x6_6)
        uint32_t x4_12 = (x5_6 | (zx.d((*"62>8")[zx.q(x4_7)]) ^ x5_6) << 9) ^ x13_3
        int32_t x6_11 = (x7_6 | (zx.d((*"62>8")[zx.q(x6_6)]) ^ x7_6) << 9) ^ x4_12
        uint64_t x4_13 = zx.q(x4_12) ^ zx.q(x16_3[-1])
        int64_t x4_14 = x4_13 & 0x7f
        uint32_t x20_1 = zx.d(*x16_3)
        int16_t x4_15 = *(&data_8514c0 + ((zx.q(x4_13.d u>> 7) & 0x1ff) << 1)) ^ x4_14.w
        char x4_17 = (*"62>8")[x4_14] ^ (x20_1 u>> 9).b ^ (x4_15.b & 0x7f)
        uint32_t x4_19 =
            zx.d(*(&data_8514c0 + ((zx.q(x4_15) ^ (zx.q(x20_1.w) & 0x1ff)) << 1))) ^ zx.d(x4_17)
        int32_t x4_21 = (((x6_11 u>> 0xf & 1) | (0x7fffffff & x6_11) << 1) & zx.d(x16_3[-7]))
            ^ x6_11 ^ (x4_19 | (zx.d((*"62>8")[zx.q(x4_17)]) ^ x4_19) << 9)
        x17_1 = x6_11 ^ x17_1 ^ ((x4_21 u>> 0xf & 1) | (0x7fffffff & x4_21) << 1 | zx.d(x16_3[-6]))
        x14_2 ^= x4_21
        int32_t x5_9 =
            (((x17_1 u>> 0xf & 1) | (0x7fffffff & x17_1) << 1) & zx.d(x16_3[-0xf])) ^ x14_2
        uint64_t x4_23 = zx.q(x5_9) ^ zx.q(x16_3[-0xb])
        int64_t x4_24 = x4_23 & 0x7f
        uint32_t x22_9 = zx.d(x16_3[-0xa])
        uint64_t x6_21 = zx.q(x17_1) ^ zx.q(x16_3[-0xd])
            ^ ((zx.q(x5_9 u>> 0xf) & 1) | zx.q((0x7fffffff & x5_9) << 1) | zx.q(x16_3[-0xe]))
        int16_t x4_25 = *(&data_8514c0 + ((zx.q(x4_23.d u>> 7) & 0x1ff) << 1)) ^ x4_24.w
        uint32_t x20_6 = zx.d(x16_3[-0xc])
        int64_t x6_22 = x6_21 & 0x7f
        int16_t x6_23 = *(&data_8514c0 + ((zx.q(x6_21.d u>> 7) & 0x1ff) << 1)) ^ x6_22.w
        char x4_27 = (*"62>8")[x4_24] ^ (x22_9 u>> 9).b ^ (x4_25.b & 0x7f)
        char x6_25 = (*"62>8")[x6_22] ^ (x20_6 u>> 9).b ^ (x6_23.b & 0x7f)
        uint32_t x7_15 =
            zx.d(*(&data_8514c0 + ((zx.q(x4_25) ^ (zx.q(x22_9.w) & 0x1ff)) << 1))) ^ zx.d(x4_27)
        uint32_t x7_17 =
            zx.d(*(&data_8514c0 + ((zx.q(x6_23) ^ (zx.q(x20_6.w) & 0x1ff)) << 1))) ^ zx.d(x6_25)
        uint32_t x16_4 = zx.d(x16_3[-8])
        int32_t x5_10 = (x7_17 | (zx.d((*"62>8")[zx.q(x6_25)]) ^ x7_17) << 9) ^ x5_9
        int32_t x4_32 = x5_10 ^ (x7_15 | (zx.d((*"62>8")[zx.q(x4_27)]) ^ x7_15) << 9)
        uint64_t x5_11 = zx.q(x5_10) ^ zx.q(x16_3[-9])
        int64_t x5_12 = x5_11 & 0x7f
        x12_3 ^= x4_32
        int16_t x5_13 = *(&data_8514c0 + ((zx.q(x5_11.d u>> 7) & 0x1ff) << 1)) ^ x5_12.w
        char x16_6 = (*"62>8")[x5_12] ^ (x16_4 u>> 9).b ^ (x5_13.b & 0x7f)
        uint32_t x16_8 =
            zx.d(*(&data_8514c0 + ((zx.q(x5_13) ^ (zx.q(x16_4.w) & 0x1ff)) << 1))) ^ zx.d(x16_6)
        i -= 0x20
        x13_3 = x4_32 ^ x13_3 ^ (x16_8 | (zx.d((*"62>8")[zx.q(x16_6)]) ^ x16_8) << 9)
    while (i != -0x80)
    
    int32_t temp0_5 = _byteswap(x17_1)
    int32_t temp0_6 = _byteswap(x14_2)
    int32_t temp0_7 = _byteswap(x12_3)
    x8_1 += 1
    uint16_t x13_6 = (_byteswap(x13_3) u>> 0x10).w
    *arg3 = (temp0_5 u>> 0x10).w
    *(arg3 + 2) = (temp0_6 u>> 0x10).w
    *(arg3 + 4) = (temp0_7 u>> 0x10).w
    *(arg3 + 6) = x13_6
    
    if (x8_1 == entry_x3)
        break
    
    x15 = *(arg1 + 8)
    arg3 += 8
    arg2 = &arg2[8]
