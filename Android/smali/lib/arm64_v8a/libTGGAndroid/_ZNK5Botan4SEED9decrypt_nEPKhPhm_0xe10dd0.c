// 函数: _ZNK5Botan4SEED9decrypt_nEPKhPhm
// 地址: 0xe10dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x13 = *(arg1 + 8)

if (x13 == *(arg1 + 0x10))
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SEED::key_schedule(x0, x1) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

int64_t x8_1 = 0

while (true)
    int32_t x17_1 = *(arg2 + 4)
    int32_t x4_1 = *(arg2 + 8)
    int32_t x5_1 = *(arg2 + 0xc)
    int64_t i = 0
    int32_t x16_1 = _byteswap(*arg2)
    int32_t x15_2 = _byteswap(x17_1)
    int32_t x4_2 = _byteswap(x4_1)
    int32_t x17_2 = _byteswap(x5_1)
    
    do
        void* x5_2 = x13 + i
        i -= 0x10
        int32_t x6_2 = x17_2 ^ x4_2 ^ *(x5_2 + 0x7c)
        int32_t x19_5 = *(&data_853740 + ((zx.q(x6_2 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x6_2) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x6_2 u>> 0x10) & 0xff) << 2))
        int32_t x6_5 = x19_5 ^ *(&data_853f40 + (zx.q(x6_2 u>> 0x18) << 2))
        int32_t x7_3 = x6_5 + (*(x5_2 + 0x78) ^ x4_2)
        int32_t x19_9 = *(&data_853740 + ((zx.q(x7_3 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x7_3) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x7_3 u>> 0x10) & 0xff) << 2))
        int32_t x7_6 = x19_9 ^ *(&data_853f40 + (zx.q(x7_3 u>> 0x18) << 2))
        int32_t x6_6 = x7_6 + x6_5
        int32_t x19_13 = *(&data_853740 + ((zx.q(x6_6 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x6_6) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x6_6 u>> 0x10) & 0xff) << 2))
        int32_t x6_9 = x19_13 ^ *(&data_853f40 + (zx.q(x6_6 u>> 0x18) << 2))
        x15_2 ^= x6_9
        x16_1 ^= x6_9 + x7_6
        int32_t x5_5 = *(x5_2 + 0x74) ^ x15_2 ^ x16_1
        int32_t x6_14 = *(&data_853740 + ((zx.q(x5_5 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x5_5) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x5_5 u>> 0x10) & 0xff) << 2))
        int32_t x5_8 = x6_14 ^ *(&data_853f40 + (zx.q(x5_5 u>> 0x18) << 2))
        int32_t x6_15 = x5_8 + (x16_1 ^ *(x5_2 + 0x70))
        int32_t x7_12 = *(&data_853740 + ((zx.q(x6_15 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x6_15) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x6_15 u>> 0x10) & 0xff) << 2))
        int32_t x6_18 = x7_12 ^ *(&data_853f40 + (zx.q(x6_15 u>> 0x18) << 2))
        int32_t x5_9 = x6_18 + x5_8
        int32_t x7_16 = *(&data_853740 + ((zx.q(x5_9 u>> 8) & 0xff) << 2))
            ^ *(&data_853340 + ((zx.q(x5_9) & 0xff) << 2))
            ^ *(&data_853b40 + ((zx.q(x5_9 u>> 0x10) & 0xff) << 2))
        int32_t x5_12 = x7_16 ^ *(&data_853f40 + (zx.q(x5_9 u>> 0x18) << 2))
        x17_2 ^= x5_12
        x4_2 ^= x5_12 + x6_18
    while (i != -0x80)
    
    x8_1 += 1
    int32_t temp0_5 = _byteswap(x4_2)
    int32_t temp0_6 = _byteswap(x17_2)
    int32_t temp0_7 = _byteswap(x16_1)
    int32_t temp0_8 = _byteswap(x15_2)
    *arg3 = temp0_5
    *(arg3 + 4) = temp0_6
    *(arg3 + 8) = temp0_7
    *(arg3 + 0xc) = temp0_8
    
    if (x8_1 == entry_x3)
        break
    
    x13 = *(arg1 + 8)
    arg3 += 0x10
    arg2 = &arg2[0x10]
