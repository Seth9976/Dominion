// 函数: _ZThn8_N5Botan13ANSI_X919_MAC5clearEv
// 地址: 0xeca85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x10))()
(*(**(arg1 + 0x10) + 0x10))()
int64_t x0_2 = *(arg1 + 0x18)
int64_t x8_4 = *(arg1 + 0x20)

if (x8_4 != x0_2)
    memset(x0_2, 0, x8_4 - x0_2)
    x0_2 = *(arg1 + 0x18)

*(arg1 + 0x20) = x0_2
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(arg1 + 0x30) = 0
return result
