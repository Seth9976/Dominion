// 函数: _ZN5Botan13GOST_28147_89D2Ev
// 地址: 0xd86a88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::GOST_28147_89 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* result = entry_x0[1]

if (result == 0)
    return result

entry_x0[2] = result
return operator delete(result) __tailcall
