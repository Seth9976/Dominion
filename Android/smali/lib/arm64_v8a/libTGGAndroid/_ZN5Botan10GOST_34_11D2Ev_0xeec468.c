// 函数: _ZN5Botan10GOST_34_11D2Ev
// 地址: 0xeec468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xe]
*entry_x0 = _vtable_for_Botan::GOST_34_11 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x10]
    entry_x0[0xf] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[0xb]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[0xd]
    entry_x0[0xc] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

void* x0_2 = entry_x0[8]

if (x0_2 != 0)
    int64_t x8_3 = entry_x0[0xa]
    entry_x0[9] = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

void* x0_3 = entry_x0[5]
entry_x0[1] = _vtable_for_Botan::GOST_28147_89 + 0x10

if (x0_3 != 0)
    int64_t x8_5 = entry_x0[7]
    entry_x0[6] = x0_3
    Botan::deallocate_memory(x0_3, (x8_5 - x0_3) s>> 2, 4)

void* result = entry_x0[2]

if (result == 0)
    return result

entry_x0[3] = result
return operator delete(result) __tailcall
