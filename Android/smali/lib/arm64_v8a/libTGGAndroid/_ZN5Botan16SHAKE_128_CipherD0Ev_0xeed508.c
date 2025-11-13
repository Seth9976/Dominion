// 函数: _ZN5Botan16SHAKE_128_CipherD0Ev
// 地址: 0xeed508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::SHAKE_128_Cipher + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[1]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[3]
    entry_x0[2] = x0_1
    Botan::deallocate_memory(x0_1, (x8_2 - x0_1) s>> 3, 8)

return operator delete(entry_x0) __tailcall
