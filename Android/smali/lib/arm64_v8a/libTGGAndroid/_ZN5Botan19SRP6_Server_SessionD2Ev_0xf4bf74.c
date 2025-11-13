// 函数: _ZN5Botan19SRP6_Server_SessionD2Ev
// 地址: 0xf4bf74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x0
void* x0 = *(entry_x0 + 0xb8)

if (x0 != 0)
    int64_t x8_1 = *(entry_x0 + 0xc8)
    *(entry_x0 + 0xc0) = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = *(entry_x0 + 0x90)

if (x0_1 != 0)
    int64_t x8_3 = *(entry_x0 + 0xa0)
    *(entry_x0 + 0x98) = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* x0_2 = *(entry_x0 + 0x68)

if (x0_2 != 0)
    int64_t x8_5 = *(entry_x0 + 0x78)
    *(entry_x0 + 0x70) = x0_2
    Botan::deallocate_memory(x0_2, (x8_5 - x0_2) s>> 2, 4)

void* x0_3 = *(entry_x0 + 0x40)

if (x0_3 != 0)
    int64_t x8_7 = *(entry_x0 + 0x50)
    *(entry_x0 + 0x48) = x0_3
    Botan::deallocate_memory(x0_3, (x8_7 - x0_3) s>> 2, 4)

void* result = *(entry_x0 + 0x18)

if (result != 0)
    int64_t x8_9 = *(entry_x0 + 0x28)
    *(entry_x0 + 0x20) = result
    result = Botan::deallocate_memory(result, (x8_9 - result) s>> 2, 4)

if ((zx.d(*entry_x0) & 1) != 0)
    return operator delete(*(entry_x0 + 0x10)) __tailcall

return result
