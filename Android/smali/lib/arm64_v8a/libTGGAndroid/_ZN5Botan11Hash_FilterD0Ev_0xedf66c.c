// 函数: _ZN5Botan11Hash_FilterD0Ev
// 地址: 0xedf66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0xa]
entry_x0[0xa] = 0
*entry_x0 = _vtable_for_Botan::Hash_Filter + 0x10

if (x0 != 0)
    (*(*x0 + 0x10))()

void* x0_1 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_1 != 0)
    entry_x0[5] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[1]

if (x0_2 != 0)
    int64_t x8_4 = entry_x0[3]
    entry_x0[2] = x0_2
    Botan::deallocate_memory(x0_2, x8_4 - x0_2, 1)

return operator delete(entry_x0) __tailcall
