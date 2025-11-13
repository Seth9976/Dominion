// 函数: _ZN5Botan8Poly1305D2Ev
// 地址: 0xee27c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[5]
*entry_x0 = _vtable_for_Botan::Poly1305 + 0x10
entry_x0[1] = _vtable_for_Botan::Poly1305 + 0x98

if (x0 != 0)
    int64_t x8_1 = entry_x0[7]
    entry_x0[6] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* result = entry_x0[2]

if (result == 0)
    return result

int64_t x8_2 = entry_x0[4]
entry_x0[3] = result
return Botan::deallocate_memory(result, (x8_2 - result) s>> 3, 8)
