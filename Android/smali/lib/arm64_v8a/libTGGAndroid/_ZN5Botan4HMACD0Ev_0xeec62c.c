// 函数: _ZN5Botan4HMACD0Ev
// 地址: 0xeec62c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[6]
*entry_x0 = _vtable_for_Botan::HMAC + 0x10
entry_x0[1] = _vtable_for_Botan::HMAC + 0x98

if (x0 != 0)
    int64_t x8_1 = entry_x0[8]
    entry_x0[7] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[3]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[5]
    entry_x0[4] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

int64_t* x0_2 = entry_x0[2]
entry_x0[2] = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

return operator delete(entry_x0) __tailcall
