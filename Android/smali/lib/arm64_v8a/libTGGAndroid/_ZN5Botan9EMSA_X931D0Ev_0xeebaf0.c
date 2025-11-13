// 函数: _ZN5Botan9EMSA_X931D0Ev
// 地址: 0xeebaf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[4]
entry_x0[4] = 0
*entry_x0 = _vtable_for_Botan::EMSA_X931 + 0x10

if (x0 != 0)
    (*(*x0 + 0x10))()

void* x0_1 = entry_x0[1]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[3]
    entry_x0[2] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

return operator delete(entry_x0) __tailcall
