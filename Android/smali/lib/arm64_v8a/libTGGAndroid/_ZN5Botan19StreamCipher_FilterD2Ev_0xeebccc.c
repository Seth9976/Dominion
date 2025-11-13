// 函数: _ZN5Botan19StreamCipher_FilterD2Ev
// 地址: 0xeebccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0xd]
entry_x0[0xd] = 0
*entry_x0 = _vtable_for_Botan::StreamCipher_Filter + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

void* x0_1 = entry_x0[0xa]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[0xc]
    entry_x0[0xb] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

void* x0_2 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0_2 != 0)
    entry_x0[5] = x0_2
    operator delete(x0_2)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_5 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_5 - result, 1)
