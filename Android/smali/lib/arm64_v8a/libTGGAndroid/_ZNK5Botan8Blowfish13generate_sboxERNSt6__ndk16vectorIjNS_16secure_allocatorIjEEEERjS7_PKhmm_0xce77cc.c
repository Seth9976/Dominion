// 函数: _ZNK5Botan8Blowfish13generate_sboxERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEERjS7_PKhmm
// 地址: 0xce77cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 8) == *arg2)
    return 

int64_t i = 0
uint64_t x9 = arg6 u>> 2

do
    if (arg6 != 0)
        int64_t entry_x6
        int64_t x10_1 = i + entry_x6
        *arg3 ^= _byteswap(*(arg5 + ((x10_1 u% x9) << 2)))
        *arg4 ^= _byteswap(*(arg5 + (((x10_1 + 1) u% x9) << 2)))
    
    uint32_t x11_7 = *arg3
    
    for (int64_t j = 0; j != 0x40; )
        uint32_t x11_8 = x11_7 ^ *(*(arg1 + 0x20) + j)
        *arg3 = x11_8
        int64_t x16_1 = *(arg1 + 8)
        int32_t x11_11 = (*(x16_1 + ((0x100 | zx.q((x11_8 & 0xff0000) u>> 0x10)) << 2))
            + *(x16_1 + (zx.q(x11_8 u>> 0x18) << 2)))
            ^ *(x16_1 + ((0x200 | zx.q((x11_8 & 0xff00) u>> 8)) << 2))
        int32_t x11_13 = *arg4 ^ (x11_11 + *(x16_1 + ((0x300 | (zx.q(x11_8) & 0xff)) << 2)))
        *arg4 = x11_13
        int32_t x12_9 = *(*(arg1 + 0x20) + j + 4)
        j += 8
        int32_t x11_14 = x12_9 ^ x11_13
        *arg4 = x11_14
        int64_t x12_10 = *(arg1 + 8)
        int32_t x11_16 = (*(x12_10 + ((0x100 | zx.q((x11_14 & 0xff0000) u>> 0x10)) << 2))
            + *(x12_10 + (zx.q(x11_14 u>> 0x18) << 2)))
            ^ *(x12_10 + ((0x200 | zx.q((x11_14 & 0xff00) u>> 8)) << 2))
        x11_7 = *arg3 ^ (x11_16 + *(x12_10 + ((0x300 | (zx.q(x11_14) & 0xff)) << 2)))
        *arg3 = x11_7
    
    int32_t x12_12 = *arg4
    *arg4 = *(*(arg1 + 0x20) + 0x40) ^ x11_7
    uint32_t x10_12 = *(*(arg1 + 0x20) + 0x44) ^ x12_12
    *arg3 = x10_12
    int64_t x12_13 = i << 2
    i += 2
    (*arg2)[i] = x10_12
    *(*arg2 + (x12_13 | 4)) = *arg4
while (i != (*(arg2 + 8) - *arg2) s>> 2)
