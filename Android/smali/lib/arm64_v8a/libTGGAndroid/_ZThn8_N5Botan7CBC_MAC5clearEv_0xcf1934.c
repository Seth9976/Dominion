// 函数: _ZThn8_N5Botan7CBC_MAC5clearEv
// 地址: 0xcf1934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x10))()
int64_t x0_1 = *(arg1 + 0x10)
int64_t x8_2 = *(arg1 + 0x18)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)
    x0_1 = *(arg1 + 0x10)

*(arg1 + 0x18) = x0_1
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(arg1 + 0x28) = 0
return result
