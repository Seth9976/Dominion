// 函数: _ZN5Botan7CBC_MAC5clearEv
// 地址: 0xcf18dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x10))()
int64_t x0_1 = *(entry_x0 + 0x18)
int64_t x8_2 = *(entry_x0 + 0x20)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)
    x0_1 = *(entry_x0 + 0x18)

*(entry_x0 + 0x20) = x0_1
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(entry_x0 + 0x30) = 0
return result
