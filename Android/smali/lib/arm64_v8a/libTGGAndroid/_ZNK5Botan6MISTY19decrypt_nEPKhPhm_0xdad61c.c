// 函数: _ZNK5Botan6MISTY19decrypt_nEPKhPhm
// 地址: 0xdad61c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x12 = *(arg1 + 0x20)

if (x12 == *(arg1 + 0x28))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::MISTY1::key_schedule(x0, x1) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = 0

while (true)
    uint32_t x14_1 = zx.d(*(arg2 + 6))
    uint32_t x15_1 = zx.d(*arg2)
    uint32_t x16_1 = zx.d(*(arg2 + 2))
    int64_t i = 0
    uint32_t x16_2 = _byteswap(zx.d(*(arg2 + 4))) u>> 0x10
    uint32_t x13_3 = _byteswap(x14_1) u>> 0x10
    uint32_t x15_3 = _byteswap(x15_1) u>> 0x10
    uint32_t x17_2 = _byteswap(x16_1) u>> 0x10
    
    do
        int16_t* x14_3 = x12 + 0x18 + i
        uint32_t x15_4 = (zx.d(x14_3[-0xc]) | x17_2) ^ x15_3
        uint64_t x21_2 = zx.q(x14_3[-8]) ^ zx.q(x15_4)
        uint32_t x17_3 = (x15_4 & zx.d(x14_3[-0xb])) ^ x17_2
        int64_t x21_3 = x21_2 & 0x7f
        int32_t x7_5 = zx.d(*(&data_851a40 + ((zx.q(x21_2.d u>> 7) & 0x1ff) << 1))) ^ x21_3.d
        uint64_t x6_4 = zx.q(x14_3[-5]) ^ zx.q(x17_3)
        uint32_t x16_3 = (zx.d(x14_3[-0xa]) | x13_3) ^ x16_2
        int64_t x6_5 = x6_4 & 0x7f
        int32_t x7_8 = zx.d(*(&data_851a40 + ((zx.q(x6_4.d u>> 7) & 0x1ff) << 1))) ^ x6_5.d
        int32_t x4_3 = x7_5 ^ zx.d(x14_3[-7]) ^ zx.d(*(&data_851e40 + x21_3))
        int32_t x6_7 = x7_8 ^ zx.d(x14_3[-4]) ^ zx.d(*(&data_851e40 + x6_5))
        int32_t x4_5 = (((x4_3 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x7_5.w) ^ zx.q(x14_3[-6])) << 1)))) | x4_3 << 9) ^ x17_3
        uint64_t x21_6 = zx.q(x14_3[-2]) ^ zx.q(x4_5)
        int32_t x4_6 = (((x6_7 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x7_8.w) ^ zx.q(x14_3[-3])) << 1)))) | x6_7 << 9) ^ x4_5
        x16_2 = x4_6 ^ x16_3 ^ zx.d(x14_3[1])
        int64_t x21_7 = x21_6 & 0x7f
        int32_t x4_9 = zx.d(*(&data_851a40 + ((zx.q(x21_6.d u>> 7) & 0x1ff) << 1))) ^ x21_7.d
        uint64_t x6_9 = zx.q(x16_2) ^ zx.q(x14_3[2])
        int64_t x6_10 = x6_9 & 0x7f
        int32_t x19_9 = zx.d(*(&data_851a40 + ((zx.q(x6_9.d u>> 7) & 0x1ff) << 1))) ^ x6_10.d
        int32_t x20_6 = x4_9 ^ zx.d(x14_3[-1]) ^ zx.d(*(&data_851e40 + x21_7))
        int32_t x5_11 = x19_9 ^ zx.d(x14_3[3]) ^ zx.d(*(&data_851e40 + x6_10))
        x13_3 = (x16_3 & zx.d(x14_3[-9])) ^ x13_3 ^ x4_6 ^ (((x20_6 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x4_9.w) ^ zx.q(*x14_3)) << 1)))) | x20_6 << 9)
        uint64_t x21_10 = zx.q(x14_3[5]) ^ zx.q(x13_3)
        int64_t x21_11 = x21_10 & 0x7f
        int32_t x4_18 = (((x5_11 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x19_9.w) ^ zx.q(x14_3[4])) << 1)))) | x5_11 << 9) ^ x13_3
        int32_t x7_19 = zx.d(*(&data_851a40 + ((zx.q(x21_10.d u>> 7) & 0x1ff) << 1))) ^ x21_11.d
        uint64_t x20_8 = zx.q(x14_3[8]) ^ zx.q(x4_18)
        int32_t x19_12 = x7_19 ^ zx.d(x14_3[6]) ^ zx.d(*(&data_851e40 + x21_11))
        int64_t x20_9 = x20_8 & 0x7f
        int32_t x7_22 = zx.d(*(&data_851a40 + ((zx.q(x20_8.d u>> 7) & 0x1ff) << 1))) ^ x20_9.d
        int32_t x5_14 = x7_22 ^ zx.d(x14_3[9]) ^ zx.d(*(&data_851e40 + x20_9))
        int32_t x4_19 = (((x19_12 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x7_19.w) ^ zx.q(x14_3[7])) << 1)))) | x19_12 << 9) ^ x4_18
        i += 0x30
        x15_3 = x4_19 ^ x15_4 ^ zx.d(x14_3[0xb])
        x17_2 = x4_19 ^ x17_3 ^ (((x5_14 & 0x7f)
            ^ zx.d(*(&data_851a40 + ((zx.q(x7_22.w) ^ zx.q(x14_3[0xa])) << 1)))) | x5_14 << 9)
    while (i != 0xc0)
    
    void* x11_1 = *(arg1 + 0x20)
    x8_1 += 1
    uint32_t x12_4 = (zx.d(*(x11_1 + 0xc0)) | x17_2) ^ x15_3
    uint32_t x14_8 = (zx.d(*(x11_1 + 0xc4)) | x13_3) ^ x16_2
    uint32_t x15_7 = x12_4 & zx.d(*(x11_1 + 0xc2))
    uint32_t x11_3 = x14_8 & zx.d(*(x11_1 + 0xc6))
    uint16_t x12_6 = (_byteswap(x12_4) u>> 0x10).w
    int32_t temp0_6 = _byteswap(x14_8)
    int32_t temp0_7 = _byteswap(x11_3 ^ x13_3)
    *(arg3 + 4) = x12_6
    uint16_t x12_8 = (_byteswap(x15_7 ^ x17_2) u>> 0x10).w
    *arg3 = (temp0_6 u>> 0x10).w
    *(arg3 + 2) = (temp0_7 u>> 0x10).w
    *(arg3 + 6) = x12_8
    
    if (x8_1 == entry_x3)
        break
    
    x12 = *(arg1 + 0x20)
    arg3 += 8
    arg2 = &arg2[8]
