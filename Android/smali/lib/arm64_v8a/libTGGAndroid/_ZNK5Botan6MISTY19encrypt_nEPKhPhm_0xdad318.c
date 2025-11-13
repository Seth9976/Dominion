// 函数: _ZNK5Botan6MISTY19encrypt_nEPKhPhm
// 地址: 0xdad318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x13 = *(arg1 + 8)

if (x13 == *(arg1 + 0x10))
    uint8_t* x0
    uint8_t* x1
    uint64_t x2
    x0, x1, x2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::MISTY1::decrypt_n(x0, x1, x2) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = 0

while (true)
    uint32_t x14_1 = zx.d(*(arg2 + 2))
    uint32_t x15_1 = zx.d(*(arg2 + 4))
    uint32_t x16_1 = zx.d(*(arg2 + 6))
    int64_t i = 0
    uint32_t x16_2 = _byteswap(zx.d(*arg2)) u>> 0x10
    uint32_t x15_2 = _byteswap(x14_1) u>> 0x10
    uint32_t x12_3 = _byteswap(x15_1) u>> 0x10
    uint32_t x17_2 = _byteswap(x16_1) u>> 0x10
    
    do
        int16_t* x14_3 = x13 + 0x18 + i
        uint32_t x15_3 = (zx.d(x14_3[-0xc]) & x16_2) ^ x15_2
        uint32_t x17_3 = (zx.d(x14_3[-0xa]) & x12_3) ^ x17_2
        uint64_t x7_4 = zx.q(x14_3[-5]) ^ zx.q(x15_3)
        uint32_t x16_3 = (x15_3 | zx.d(x14_3[-0xb])) ^ x16_2
        int64_t x7_5 = x7_4 & 0x7f
        uint64_t x6_2 = zx.q(x16_3) ^ zx.q(x14_3[-8])
        int32_t x19_5 = zx.d(*(&data_851a40 + ((zx.q(x7_4.d u>> 7) & 0x1ff) << 1))) ^ x7_5.d
        int64_t x6_3 = x6_2 & 0x7f
        int32_t x21_6 = zx.d(*(&data_851a40 + ((zx.q(x6_2.d u>> 7) & 0x1ff) << 1))) ^ x6_3.d
        int32_t x7_7 = x19_5 ^ zx.d(x14_3[-4]) ^ zx.d(*(&data_851e40 + x7_5))
        int32_t x4_4 = x21_6 ^ zx.d(x14_3[-7]) ^ zx.d(*(&data_851e40 + x6_3))
        int32_t x4_6 = (((x4_4 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x21_6.w) ^ zx.q(x14_3[-6])) << 1)))) | x4_4 << 9) ^ x15_3
        int32_t x6_8 = (((x7_7 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x19_5.w) ^ zx.q(x14_3[-3])) << 1)))) | x7_7 << 9) ^ x4_6
        uint64_t x4_7 = zx.q(x14_3[-2]) ^ zx.q(x4_6)
        x12_3 = (x17_3 | zx.d(x14_3[-9])) ^ x12_3 ^ x6_8 ^ zx.d(x14_3[1])
        int64_t x4_8 = x4_7 & 0x7f
        int32_t x6_11 = zx.d(*(&data_851a40 + ((zx.q(x4_7.d u>> 7) & 0x1ff) << 1))) ^ x4_8.d
        uint64_t x5_7 = zx.q(x12_3) ^ zx.q(x14_3[2])
        int64_t x5_8 = x5_7 & 0x7f
        int32_t x19_12 = zx.d(*(&data_851a40 + ((zx.q(x5_7.d u>> 7) & 0x1ff) << 1))) ^ x5_8.d
        int32_t x4_10 = x6_11 ^ zx.d(x14_3[-1]) ^ zx.d(*(&data_851e40 + x4_8))
        int32_t x5_10 = x19_12 ^ zx.d(x14_3[3]) ^ zx.d(*(&data_851e40 + x5_8))
        x17_2 = x6_8 ^ x17_3 ^ (((x4_10 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x6_11.w) ^ zx.q(*x14_3)) << 1)))) | x4_10 << 9)
        uint64_t x7_14 = zx.q(x14_3[5]) ^ zx.q(x17_2)
        int64_t x7_15 = x7_14 & 0x7f
        int32_t x4_15 = (((x5_10 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x19_12.w) ^ zx.q(x14_3[4])) << 1)))) | x5_10 << 9) ^ x17_2
        int32_t x5_13 = zx.d(*(&data_851a40 + ((zx.q(x7_14.d u>> 7) & 0x1ff) << 1))) ^ x7_15.d
        uint64_t x6_17 = zx.q(x14_3[8]) ^ zx.q(x4_15)
        int32_t x7_17 = x5_13 ^ zx.d(x14_3[6]) ^ zx.d(*(&data_851e40 + x7_15))
        int64_t x6_18 = x6_17 & 0x7f
        int32_t x20_12 = zx.d(*(&data_851a40 + ((zx.q(x6_17.d u>> 7) & 0x1ff) << 1))) ^ x6_18.d
        int32_t x6_20 = x20_12 ^ zx.d(x14_3[9]) ^ zx.d(*(&data_851e40 + x6_18))
        int32_t x4_16 = (((x7_17 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x5_13.w) ^ zx.q(x14_3[7])) << 1)))) | x7_17 << 9) ^ x4_15
        i += 0x30
        x16_2 = x4_16 ^ x16_3 ^ zx.d(x14_3[0xb])
        x15_2 = x4_16 ^ x15_3 ^ (((x6_20 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x20_12.w) ^ zx.q(x14_3[0xa])) << 1)))) | x6_20 << 9)
    while (i != 0xc0)
    
    void* x11_1 = *(arg1 + 8)
    x8_1 += 1
    uint32_t x13_4 = (zx.d(*(x11_1 + 0xc0)) & x16_2) ^ x15_2
    uint32_t x14_7 = (zx.d(*(x11_1 + 0xc4)) & x12_3) ^ x17_2
    uint32_t x15_6 = x13_4 | zx.d(*(x11_1 + 0xc2))
    uint32_t x11_3 = x14_7 | zx.d(*(x11_1 + 0xc6))
    uint16_t x12_6 = (_byteswap(x14_7) u>> 0x10).w
    int32_t temp0_6 = _byteswap(x13_4)
    int32_t temp0_7 = _byteswap(x11_3 ^ x12_3)
    *(arg3 + 2) = x12_6
    uint16_t x12_8 = (_byteswap(x15_6 ^ x16_2) u>> 0x10).w
    *arg3 = (temp0_7 u>> 0x10).w
    *(arg3 + 4) = x12_8
    *(arg3 + 6) = (temp0_6 u>> 0x10).w
    
    if (x8_1 == entry_x3)
        break
    
    x13 = *(arg1 + 8)
    arg3 += 8
    arg2 = &arg2[8]
