// 函数: _ZN5Botan7AES_1925clearEv
// 地址: 0xca4f54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 8)
int64_t x8 = *(entry_x0 + 0x10)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 8)

*(entry_x0 + 0x10) = x0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit()
int64_t x0_2 = *(entry_x0 + 0x20)
int64_t x8_1 = *(entry_x0 + 0x28)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)
    x0_2 = *(entry_x0 + 0x20)

*(entry_x0 + 0x28) = x0_2
return std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit() __tailcall
