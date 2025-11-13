// 函数: _ZNK5Botan4XTEA9decrypt_nEPKhPhm
// 地址: 0xed5ed4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(arg1 + 8)

if (x9 == *(arg1 + 0x10))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::XTEA::key_schedule(x0, x1) __tailcall

int64_t entry_x3
uint64_t x10 = entry_x3 u>> 2
int64_t x8_1 = entry_x3 & 3

if (x10 != 0)
    int64_t x11_1 = 0
    
    do
        int64_t x13_1 = x11_1 << 5
        void* x14_1 = &arg2[x13_1]
        int32_t x16_1 = *(x14_1 + 4)
        int32_t x17_1 = *(x14_1 + 8)
        int32_t x4_1 = *(x14_1 + 0xc)
        int32_t x19_1 = *(x14_1 + 0x10)
        int32_t x20_1 = *(x14_1 + 0x14)
        int32_t x21_1 = *(x14_1 + 0x18)
        int32_t x14_2 = *(x14_1 + 0x1c)
        int64_t i = 0
        int32_t x7_1 = _byteswap(*x14_1)
        int32_t x6_1 = _byteswap(x16_1)
        int32_t x5_1 = _byteswap(x17_1)
        int32_t x4_2 = _byteswap(x4_1)
        int32_t x17_2 = _byteswap(x19_1)
        int32_t x16_2 = _byteswap(x20_1)
        int32_t x15_2 = _byteswap(x21_1)
        int32_t x14_3 = _byteswap(x14_2)
        
        do
            uint64_t x20_3 = zx.q(*(x9 + i + 0xf8))
            int32_t x24_1 = *(x20_3 + 0xfc)
            x6_1 -= x24_1 ^ ((x7_1 << 4 ^ x7_1 u>> 5) + x7_1)
            x4_2 -= x24_1 ^ ((x5_1 << 4 ^ x5_1 u>> 5) + x5_1)
            x16_2 -= x24_1 ^ ((x17_2 << 4 ^ x17_2 u>> 5) + x17_2)
            x14_3 -= x24_1 ^ ((x15_2 << 4 ^ x15_2 u>> 5) + x15_2)
            i -= 8
            x7_1 -= ((x6_1 << 4 ^ x6_1 u>> 5) + x6_1) ^ x20_3.d
            x5_1 -= ((x4_2 << 4 ^ x4_2 u>> 5) + x4_2) ^ x20_3.d
            x17_2 -= ((x16_2 << 4 ^ x16_2 u>> 5) + x16_2) ^ x20_3.d
            x15_2 -= ((x14_3 << 4 ^ x14_3 u>> 5) + x14_3) ^ x20_3.d
        while (i != -0x100)
        
        x11_1 += 1
        int64_t x12_1 = arg3 + x13_1
        int32_t temp0_9 = _byteswap(x7_1)
        int32_t temp0_10 = _byteswap(x6_1)
        int32_t temp0_11 = _byteswap(x5_1)
        int32_t temp0_12 = _byteswap(x4_2)
        int32_t temp0_13 = _byteswap(x17_2)
        int32_t temp0_14 = _byteswap(x16_2)
        int32_t temp0_15 = _byteswap(x15_2)
        int32_t temp0_16 = _byteswap(x14_3)
        *x12_1 = temp0_9
        *(x12_1 + 4) = temp0_10
        *(x12_1 + 8) = temp0_11
        *(x12_1 + 0xc) = temp0_12
        *(x12_1 + 0x10) = temp0_13
        *(x12_1 + 0x14) = temp0_14
        *(x12_1 + 0x18) = temp0_15
        *(x12_1 + 0x1c) = temp0_16
    while (x11_1 != x10)

if (x8_1 == 0)
    return 

int64_t x9_1 = 0

do
    int64_t x12_3 = (x9_1 + (entry_x3 & 0x1ffffffffffffffc)) << 3
    void* x13_3 = &arg2[x12_3]
    int32_t x13_4 = *(x13_3 + 4)
    void* x15_4 = *(arg1 + 8)
    int64_t i_1 = 0
    int32_t x14_6 = _byteswap(*x13_3)
    int32_t x13_5 = _byteswap(x13_4)
    
    do
        uint64_t x17_5 = zx.q(*(x15_4 + i_1 + 0xf8))
        x13_5 -= *(x17_5 + 0xfc) ^ ((x14_6 << 4 ^ x14_6 u>> 5) + x14_6)
        i_1 -= 8
        x14_6 -= ((x13_5 << 4 ^ x13_5 u>> 5) + x13_5) ^ x17_5.d
    while (i_1 != -0x100)
    
    x9_1 += 1
    int64_t x11_2 = arg3 + x12_3
    int32_t temp0_19 = _byteswap(x14_6)
    int32_t temp0_20 = _byteswap(x13_5)
    *x11_2 = temp0_19
    *(x11_2 + 4) = temp0_20
while (x9_1 != x8_1)
