// 函数: _ZN5Botan5GHASH5clearEv
// 地址: 0xd812b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 8)
int64_t x8 = *(entry_x0 + 0x10)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 8)

*(entry_x0 + 0x10) = x0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_2 = *(entry_x0 + 0x68)
int64_t x8_1 = *(entry_x0 + 0x70)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)
    x0_2 = *(entry_x0 + 0x68)

*(entry_x0 + 0x70) = x0_2
std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
int64_t result = *(entry_x0 + 0x20)
int64_t x8_2 = *(entry_x0 + 0x28)

if (x8_2 != result)
    result = memset(result, 0, x8_2 - result)

int64_t x8_3 = *(entry_x0 + 0x38)
int64_t x9 = *(entry_x0 + 0x50)
*(entry_x0 + 0x98) = 0
*(entry_x0 + 0xa0) = 0
*(entry_x0 + 0x40) = x8_3
*(entry_x0 + 0x58) = x9
return result
