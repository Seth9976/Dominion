// 函数: _ZN5Botan6ChaCha5clearEv
// 地址: 0xd011d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x10)
int64_t x8 = *(entry_x0 + 0x18)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 0x10)

*(entry_x0 + 0x18) = x0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit()
int64_t x0_2 = *(entry_x0 + 0x28)
int64_t x8_1 = *(entry_x0 + 0x30)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)
    x0_2 = *(entry_x0 + 0x28)

*(entry_x0 + 0x30) = x0_2
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit()
int64_t x0_4 = *(entry_x0 + 0x40)
int64_t x8_2 = *(entry_x0 + 0x48)

if (x8_2 != x0_4)
    memset(x0_4, 0, x8_2 - x0_4)
    x0_4 = *(entry_x0 + 0x40)

*(entry_x0 + 0x48) = x0_4
int64_t result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
*(entry_x0 + 0x58) = 0
return result
