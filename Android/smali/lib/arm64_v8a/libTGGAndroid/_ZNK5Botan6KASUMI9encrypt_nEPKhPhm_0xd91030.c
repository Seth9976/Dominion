// 函数: _ZNK5Botan6KASUMI9encrypt_nEPKhPhm
// 地址: 0xd91030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x14 = *(arg1 + 8)

if (x14 == *(arg1 + 0x10))
    uint8_t* x0
    uint8_t* x1
    uint64_t x2
    x0, x1, x2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::KASUMI::decrypt_n(x0, x1, x2) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = 0

while (true)
    uint32_t x13_1 = zx.d(*(arg2 + 2))
    uint32_t x15_1 = zx.d(*(arg2 + 4))
    uint32_t x16_1 = zx.d(*(arg2 + 6))
    int64_t i = 0
    uint32_t x15_2 = _byteswap(zx.d(*arg2)) u>> 0x10
    uint32_t x13_3 = _byteswap(x13_1) u>> 0x10
    uint32_t x12_3 = _byteswap(x15_1) u>> 0x10
    uint32_t x16_3 = _byteswap(x16_1) u>> 0x10
    
    do
        int16_t* x17_2 = x14 + 0x10 + i
        int32_t x4_4 = (zx.d(x17_2[-8]) & ((x15_2 u>> 0xf & 1) | (0x7fffffff & x15_2) << 1)) ^ x13_3
        uint64_t x21_2 = zx.q(x17_2[-4]) ^ zx.q(x4_4)
        int64_t x21_3 = x21_2 & 0x7f
        uint32_t x20_1 = zx.d(x17_2[-3])
        uint64_t x5_3 = zx.q(x17_2[-6]) ^ zx.q(x15_2)
            ^ ((zx.q(x4_4 u>> 0xf) & 1) | zx.q((0x7fffffff & x4_4) << 1) | zx.q(x17_2[-7]))
        int16_t x21_4 = *(&data_8514c0 + ((zx.q(x21_2.d u>> 7) & 0x1ff) << 1)) ^ x21_3.w
        int64_t x5_4 = x5_3 & 0x7f
        uint32_t x19_1 = zx.d(x17_2[-5])
        int16_t x5_5 = *(&data_8514c0 + ((zx.q(x5_3.d u>> 7) & 0x1ff) << 1)) ^ x5_4.w
        char x6_5 = (*"62>8")[x21_3] ^ (x20_1 u>> 9).b ^ (x21_4.b & 0x7f)
        char x5_7 = (*"62>8")[x5_4] ^ (x19_1 u>> 9).b ^ (x5_5.b & 0x7f)
        uint32_t x7_6 =
            zx.d(*(&data_8514c0 + ((zx.q(x21_4) ^ (zx.q(x20_1.w) & 0x1ff)) << 1))) ^ zx.d(x6_5)
        uint32_t x5_9 =
            zx.d(*(&data_8514c0 + ((zx.q(x5_5) ^ (zx.q(x19_1.w) & 0x1ff)) << 1))) ^ zx.d(x5_7)
        int32_t x4_5 = (x5_9 | (zx.d((*"62>8")[zx.q(x5_7)]) ^ x5_9) << 9) ^ x4_4
        int32_t x6_10 = (x7_6 | (zx.d((*"62>8")[zx.q(x6_5)]) ^ x7_6) << 9) ^ x4_5
        uint64_t x4_6 = zx.q(x4_5) ^ zx.q(x17_2[-2])
        int64_t x4_7 = x4_6 & 0x7f
        uint32_t x22_7 = zx.d(x17_2[-1])
        x12_3 ^= x6_10
        uint64_t x20_6 = zx.q(x12_3) ^ zx.q(x17_2[2])
        int16_t x4_8 = *(&data_8514c0 + ((zx.q(x4_6.d u>> 7) & 0x1ff) << 1)) ^ x4_7.w
        int64_t x20_7 = x20_6 & 0x7f
        uint32_t x19_6 = zx.d(x17_2[3])
        int16_t x20_8 = *(&data_8514c0 + ((zx.q(x20_6.d u>> 7) & 0x1ff) << 1)) ^ x20_7.w
        char x4_10 = (*"62>8")[x4_7] ^ (x22_7 u>> 9).b ^ (x4_8.b & 0x7f)
        char x20_10 = (*"62>8")[x20_7] ^ (x19_6 u>> 9).b ^ (x20_8.b & 0x7f)
        uint32_t x5_15 =
            zx.d(*(&data_8514c0 + ((zx.q(x4_8) ^ (zx.q(x22_7.w) & 0x1ff)) << 1))) ^ zx.d(x4_10)
        uint32_t x5_17 =
            zx.d(*(&data_8514c0 + ((zx.q(x20_8) ^ (zx.q(x19_6.w) & 0x1ff)) << 1))) ^ zx.d(x20_10)
        x16_3 = x6_10 ^ x16_3 ^ (x5_15 | (zx.d((*"62>8")[zx.q(x4_10)]) ^ x5_15) << 9)
        uint64_t x5_18 = zx.q(x16_3) ^ zx.q(x17_2[4])
        int64_t x5_19 = x5_18 & 0x7f
        uint32_t x6_13 = zx.d(x17_2[5])
        uint32_t x4_17 = (x5_17 | (zx.d((*"62>8")[zx.q(x20_10)]) ^ x5_17) << 9) ^ x16_3
        uint64_t x21_12 = zx.q(x4_17) ^ zx.q(x17_2[6])
        int16_t x5_20 = *(&data_8514c0 + ((zx.q(x5_18.d u>> 7) & 0x1ff) << 1)) ^ x5_19.w
        int64_t x21_13 = x21_12 & 0x7f
        uint32_t x22_11 = zx.d(x17_2[7])
        char x5_22 = (*"62>8")[x5_19] ^ (x6_13 u>> 9).b ^ (x5_20.b & 0x7f)
        int16_t x6_15 = *(&data_8514c0 + ((zx.q(x21_12.d u>> 7) & 0x1ff) << 1)) ^ x21_13.w
        char x6_17 = (*"62>8")[x21_13] ^ (x22_11 u>> 9).b ^ (x6_15.b & 0x7f)
        uint32_t x7_17 =
            zx.d(*(&data_8514c0 + ((zx.q(x5_20) ^ (zx.q(x6_13.w) & 0x1ff)) << 1))) ^ zx.d(x5_22)
        uint32_t x7_19 =
            zx.d(*(&data_8514c0 + ((zx.q(x6_15) ^ (zx.q(x22_11.w) & 0x1ff)) << 1))) ^ zx.d(x6_17)
        uint32_t x4_18 = (x7_17 | (zx.d((*"62>8")[zx.q(x5_22)]) ^ x7_17) << 9) ^ x4_17
        int32_t x4_20 = (x7_19 | (zx.d((*"62>8")[zx.q(x6_17)]) ^ x7_19) << 9) ^ x4_18
            ^ (((x4_18 u>> 0xf & 1) | (0x7fffffff & x4_18) << 1) & zx.d(*x17_2))
        i += 0x20
        x15_2 = x4_18 ^ x15_2 ^ ((x4_20 u>> 0xf & 1) | (0x7fffffff & x4_20) << 1 | zx.d(x17_2[1]))
        x13_3 ^= x4_20
    while (i != 0x80)
    
    int32_t temp0_5 = _byteswap(x15_2)
    int32_t temp0_6 = _byteswap(x13_3)
    int32_t temp0_7 = _byteswap(x12_3)
    x8_1 += 1
    uint16_t x14_3 = (_byteswap(x16_3) u>> 0x10).w
    *arg3 = (temp0_5 u>> 0x10).w
    *(arg3 + 2) = (temp0_6 u>> 0x10).w
    *(arg3 + 4) = (temp0_7 u>> 0x10).w
    *(arg3 + 6) = x14_3
    
    if (x8_1 == entry_x3)
        break
    
    x14 = *(arg1 + 8)
    arg3 += 8
    arg2 = &arg2[8]
