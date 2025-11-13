// 函数: _ZN5Botan9Skein_512D2Ev
// 地址: 0xeed57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[9]
*entry_x0 = _vtable_for_Botan::Skein_512 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xb]
    entry_x0[0xa] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[6]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[8]
    entry_x0[7] = x0_1
    Botan::deallocate_memory(x0_1, (x8_2 - x0_1) s>> 3, 8)

void* result = &entry_x0[5]
void** x1_3 = *result
*result = 0

if (x1_3 != 0)
    result = sub_f49ebc(result, x1_3)

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall

return result
