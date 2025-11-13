// 函数: _ZN5Botan4HMAC5clearEv
// 地址: 0xd8a4f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x38))()
int64_t x0_1 = *(entry_x0 + 0x18)
int64_t x8_2 = *(entry_x0 + 0x20)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)
    x0_1 = *(entry_x0 + 0x18)

*(entry_x0 + 0x20) = x0_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_3 = *(entry_x0 + 0x30)
int64_t x8_3 = *(entry_x0 + 0x38)

if (x8_3 != x0_3)
    memset(x0_3, 0, x8_3 - x0_3)
    x0_3 = *(entry_x0 + 0x30)

*(entry_x0 + 0x38) = x0_3
return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit() __tailcall
