// 函数: _ZN5Botan13ANSI_X919_MAC5clearEv
// 地址: 0xeca7f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x10))()
(*(**(entry_x0 + 0x18) + 0x10))()
int64_t x0_2 = *(entry_x0 + 0x20)
int64_t x8_4 = *(entry_x0 + 0x28)

if (x8_4 != x0_2)
    memset(x0_2, 0, x8_4 - x0_2)
    x0_2 = *(entry_x0 + 0x20)

*(entry_x0 + 0x28) = x0_2
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(entry_x0 + 0x38) = 0
return result
