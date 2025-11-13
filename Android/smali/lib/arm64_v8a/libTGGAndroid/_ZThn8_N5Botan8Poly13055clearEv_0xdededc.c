// 函数: _ZThn8_N5Botan8Poly13055clearEv
// 地址: 0xdededc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(arg1 + 8)

*(arg1 + 0x10) = x0
std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
int64_t x0_2 = *(arg1 + 0x20)
int64_t x8_1 = *(arg1 + 0x28)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)
    x0_2 = *(arg1 + 0x20)

*(arg1 + 0x28) = x0_2
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(arg1 + 0x38) = 0
return result
