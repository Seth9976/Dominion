// 函数: _ZN5Botan4GMAC5clearEv
// 地址: 0xd827a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 0x10) + 0x10))()
void* x21 = *(entry_x0 + 0x18)
int64_t x0_1 = *(x21 + 8)
int64_t x8_2 = *(x21 + 0x10)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)
    x0_1 = *(x21 + 8)

*(x21 + 0x10) = x0_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_3 = *(x21 + 0x68)
int64_t x8_3 = *(x21 + 0x70)

if (x8_3 != x0_3)
    memset(x0_3, 0, x8_3 - x0_3)
    x0_3 = *(x21 + 0x68)

*(x21 + 0x70) = x0_3
std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
int64_t x0_5 = *(x21 + 0x20)
int64_t x8_4 = *(x21 + 0x28)

if (x8_4 != x0_5)
    memset(x0_5, 0, x8_4 - x0_5)

int64_t x8_5 = *(x21 + 0x38)
int64_t x9 = *(x21 + 0x50)
*(x21 + 0x98) = 0
*(x21 + 0xa0) = 0
*(x21 + 0x40) = x8_5
*(x21 + 0x58) = x9
int64_t result = *(entry_x0 + 0x20)
int64_t x8_6 = *(entry_x0 + 0x28)

if (x8_6 != result)
    result = memset(result, 0, x8_6 - result)

*(entry_x0 + 0x38) = 0
*(entry_x0 + 0x40) = 0
return result
