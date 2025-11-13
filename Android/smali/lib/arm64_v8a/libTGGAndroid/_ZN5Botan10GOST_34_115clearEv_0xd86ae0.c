// 函数: _ZN5Botan10GOST_34_115clearEv
// 地址: 0xd86ae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x28)
int64_t x8 = *(entry_x0 + 0x30)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 0x28)

*(entry_x0 + 0x30) = x0
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit()
int64_t x0_2 = *(entry_x0 + 0x58)
int64_t x8_1 = *(entry_x0 + 0x60)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)

int64_t result = *(entry_x0 + 0x70)
int64_t x8_2 = *(entry_x0 + 0x78)

if (x8_2 != result)
    result = memset(result, 0, x8_2 - result)

*(entry_x0 + 0x88) = 0
*(entry_x0 + 0x90) = 0
return result
