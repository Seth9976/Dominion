// 函数: _ZN5Botan6CTR_BED0Ev
// 地址: 0xeea244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xb]
*entry_x0 = _vtable_for_Botan::CTR_BE + 0x10

if (x0 != 0)
    entry_x0[0xc] = x0
    operator delete(x0)

void* x0_1 = entry_x0[8]

if (x0_1 != 0)
    int64_t x8_1 = entry_x0[0xa]
    entry_x0[9] = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

void* x0_2 = entry_x0[5]

if (x0_2 != 0)
    int64_t x8_2 = entry_x0[7]
    entry_x0[6] = x0_2
    Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)

int64_t* x0_3 = entry_x0[1]
entry_x0[1] = 0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

return operator delete(entry_x0) __tailcall
