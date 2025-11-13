// 函数: _ZN5Botan3SM3D0Ev
// 地址: 0xee51e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[7]
*entry_x0 = _vtable_for_Botan::SM3 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[9]
    entry_x0[8] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = entry_x0[3]
*entry_x0 = _vtable_for_Botan::MDx_HashFunction + 0x10

if (x0_1 != 0)
    int64_t x8_4 = entry_x0[5]
    entry_x0[4] = x0_1
    Botan::deallocate_memory(x0_1, x8_4 - x0_1, 1)

return operator delete(entry_x0) __tailcall
