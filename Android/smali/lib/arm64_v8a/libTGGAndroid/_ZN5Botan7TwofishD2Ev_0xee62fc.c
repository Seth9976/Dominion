// 函数: _ZN5Botan7TwofishD2Ev
// 地址: 0xee62fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Twofish + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[6]
    entry_x0[5] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_3 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, (x8_3 - result) s>> 2, 4)
