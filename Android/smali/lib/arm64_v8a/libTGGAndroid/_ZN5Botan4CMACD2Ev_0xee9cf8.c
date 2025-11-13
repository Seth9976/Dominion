// 函数: _ZN5Botan4CMACD2Ev
// 地址: 0xee9cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xc]
*entry_x0 = _vtable_for_Botan::CMAC + 0x10
entry_x0[1] = _vtable_for_Botan::CMAC + 0x98

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xe]
    entry_x0[0xd] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[9]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[0xb]
    entry_x0[0xa] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

void* x0_2 = entry_x0[6]

if (x0_2 != 0)
    int64_t x8_3 = entry_x0[8]
    entry_x0[7] = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

void* x0_3 = entry_x0[3]

if (x0_3 != 0)
    int64_t x8_4 = entry_x0[5]
    entry_x0[4] = x0_3
    Botan::deallocate_memory(x0_3, x8_4 - x0_3, 1)

int64_t* result = entry_x0[2]
entry_x0[2] = 0

if (result == 0)
    return result

jump(*(*result + 8))
