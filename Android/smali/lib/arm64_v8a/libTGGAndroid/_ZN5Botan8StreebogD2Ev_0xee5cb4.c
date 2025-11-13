// 函数: _ZN5Botan8StreebogD2Ev
// 地址: 0xee5cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xa]
*entry_x0 = _vtable_for_Botan::Streebog + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xc]
    entry_x0[0xb] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 3, 8)

void* x0_1 = entry_x0[7]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[9]
    entry_x0[8] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 3, 8)

void* result = entry_x0[4]

if (result == 0)
    return result

int64_t x8_5 = entry_x0[6]
entry_x0[5] = result
return Botan::deallocate_memory(result, x8_5 - result, 1)
