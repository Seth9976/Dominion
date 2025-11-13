// 函数: _ZNK5Botan4XTEA9encrypt_nEPKhPhm
// 地址: 0xed5ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 8)

if (x8 == *(arg1 + 0x10))
    uint8_t* x0_2
    uint8_t* x1
    uint64_t x2
    x0_2, x1, x2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::XTEA::decrypt_n(x0_2, x1, x2) __tailcall

int64_t entry_x3
uint64_t x10 = entry_x3 u>> 2
int64_t x9_1 = entry_x3 & 3

if (x10 != 0)
    int64_t x11_1 = 0
    
    do
        int64_t x13_1 = x11_1 << 5
        void* x14_1 = &arg2[x13_1]
        int32_t x16_1 = *(x14_1 + 4)
        int32_t x17_1 = *(x14_1 + 8)
        int32_t x0 = *(x14_1 + 0xc)
        int32_t x7_1 = *(x14_1 + 0x10)
        int32_t x19_1 = *(x14_1 + 0x14)
        int32_t x20_1 = *(x14_1 + 0x18)
        int32_t x14_2 = *(x14_1 + 0x1c)
        int64_t i = 0
        int32_t x6_1 = _byteswap(*x14_1)
        int32_t x5_1 = _byteswap(x16_1)
        int32_t x4_1 = _byteswap(x17_1)
        int32_t x0_1 = _byteswap(x0)
        int32_t x17_2 = _byteswap(x7_1)
        int32_t x16_2 = _byteswap(x19_1)
        int32_t x15_2 = _byteswap(x20_1)
        int32_t x14_3 = _byteswap(x14_2)
        
        do
            int32_t* x19_2 = x8 + i
            int32_t x23_1 = *x19_2
            int32_t x19_3 = x19_2[1]
            x6_1 += x23_1 ^ ((x5_1 << 4 ^ x5_1 u>> 5) + x5_1)
            x4_1 += x23_1 ^ ((x0_1 << 4 ^ x0_1 u>> 5) + x0_1)
            x17_2 += x23_1 ^ ((x16_2 << 4 ^ x16_2 u>> 5) + x16_2)
            x15_2 += x23_1 ^ ((x14_3 << 4 ^ x14_3 u>> 5) + x14_3)
            i += 8
            x5_1 += ((x6_1 << 4 ^ x6_1 u>> 5) + x6_1) ^ x19_3
            x0_1 += ((x4_1 << 4 ^ x4_1 u>> 5) + x4_1) ^ x19_3
            x16_2 += ((x17_2 << 4 ^ x17_2 u>> 5) + x17_2) ^ x19_3
            x14_3 += ((x15_2 << 4 ^ x15_2 u>> 5) + x15_2) ^ x19_3
        while (i != 0x100)
        
        x11_1 += 1
        int64_t x12_1 = arg3 + x13_1
        int32_t temp0_9 = _byteswap(x6_1)
        int32_t temp0_10 = _byteswap(x5_1)
        int32_t temp0_11 = _byteswap(x4_1)
        arg1 = zx.q(_byteswap(x0_1))
        int32_t temp0_13 = _byteswap(x17_2)
        int32_t temp0_14 = _byteswap(x16_2)
        int32_t temp0_15 = _byteswap(x15_2)
        int32_t temp0_16 = _byteswap(x14_3)
        *x12_1 = temp0_9
        *(x12_1 + 4) = temp0_10
        *(x12_1 + 8) = temp0_11
        *(x12_1 + 0xc) = arg1.d
        *(x12_1 + 0x10) = temp0_13
        *(x12_1 + 0x14) = temp0_14
        *(x12_1 + 0x18) = temp0_15
        *(x12_1 + 0x1c) = temp0_16
    while (x11_1 != x10)

if (x9_1 == 0)
    return 

int64_t x10_1 = 0

do
    int64_t x13_4 = (x10_1 + (entry_x3 & 0x1ffffffffffffffc)) << 3
    void* x14_5 = &arg2[x13_4]
    int32_t x14_6 = *(x14_5 + 4)
    int64_t i_1 = 0
    int32_t x15_5 = _byteswap(*x14_5)
    int32_t x14_7 = _byteswap(x14_6)
    
    do
        void* x17_4 = x8 + i_1
        x15_5 += *x17_4 ^ ((x14_7 << 4 ^ x14_7 u>> 5) + x14_7)
        i_1 += 8
        x14_7 += ((x15_5 << 4 ^ x15_5 u>> 5) + x15_5) ^ *(x17_4 + 4)
    while (i_1 != 0x100)
    
    x10_1 += 1
    int64_t x12_2 = arg3 + x13_4
    int32_t temp0_19 = _byteswap(x15_5)
    int32_t temp0_20 = _byteswap(x14_7)
    *x12_2 = temp0_19
    *(x12_2 + 4) = temp0_20
while (x10_1 != x9_1)
