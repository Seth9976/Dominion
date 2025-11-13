// 函数: _ZN5Botan16SHAKE_128_CipherD2Ev
// 地址: 0xeed4a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::SHAKE_128_Cipher + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_2 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, (x8_2 - result) s>> 3, 8)
