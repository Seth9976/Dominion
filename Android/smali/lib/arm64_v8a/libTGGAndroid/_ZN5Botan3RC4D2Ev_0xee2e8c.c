// 函数: _ZN5Botan3RC4D2Ev
// 地址: 0xee2e8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::RC4 + 0x10
int64_t x0 = entry_x0[3]
int64_t x8_1 = entry_x0[4]

if (x8_1 != x0)
    memset(x0, 0, x8_1 - x0)
    x0 = entry_x0[3]

entry_x0[4] = x0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_2 = entry_x0[6]
int64_t x8_2 = entry_x0[7]

if (x8_2 != x0_2)
    memset(x0_2, 0, x8_2 - x0_2)
    x0_2 = entry_x0[6]

entry_x0[7] = x0_2
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
void* x0_4 = entry_x0[6]
entry_x0[2].w = 0
entry_x0[9] = 0

if (x0_4 != 0)
    int64_t x8_3 = entry_x0[8]
    entry_x0[7] = x0_4
    Botan::deallocate_memory(x0_4, x8_3 - x0_4, 1)

void* result = entry_x0[3]

if (result == 0)
    return result

int64_t x8_4 = entry_x0[5]
entry_x0[4] = result
return Botan::deallocate_memory(result, x8_4 - result, 1)
