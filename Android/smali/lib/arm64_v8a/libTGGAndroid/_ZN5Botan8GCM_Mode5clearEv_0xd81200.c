// 函数: _ZN5Botan8GCM_Mode5clearEv
// 地址: 0xd81200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
(*(*entry_x0[5] + 0x10))()
void* x21 = entry_x0[6]
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
jump(*(*entry_x0 + 0x70))
