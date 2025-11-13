// 函数: _ZN5Botan5GHASHD2Ev
// 地址: 0xeec328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x10]
*entry_x0 = _vtable_for_Botan::GHASH + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x12]
    entry_x0[0x11] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 3, 8)

void* x0_1 = entry_x0[0xd]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[0xf]
    entry_x0[0xe] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 3, 8)

void* x0_2 = entry_x0[0xa]

if (x0_2 != 0)
    int64_t x8_5 = entry_x0[0xc]
    entry_x0[0xb] = x0_2
    Botan::deallocate_memory(x0_2, x8_5 - x0_2, 1)

void* x0_3 = entry_x0[7]

if (x0_3 != 0)
    int64_t x8_6 = entry_x0[9]
    entry_x0[8] = x0_3
    Botan::deallocate_memory(x0_3, x8_6 - x0_3, 1)

void* x0_4 = entry_x0[4]

if (x0_4 != 0)
    int64_t x8_7 = entry_x0[6]
    entry_x0[5] = x0_4
    Botan::deallocate_memory(x0_4, x8_7 - x0_4, 1)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_8 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_8 - result, 1)
