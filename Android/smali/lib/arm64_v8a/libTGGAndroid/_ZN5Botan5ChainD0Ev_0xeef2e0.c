// 函数: _ZN5Botan5ChainD0Ev
// 地址: 0xeef2e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0 != 0)
    entry_x0[5] = x0
    operator delete(x0)

void* x0_1 = entry_x0[1]

if (x0_1 != 0)
    int64_t x8_1 = entry_x0[3]
    entry_x0[2] = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

return operator delete(entry_x0) __tailcall
