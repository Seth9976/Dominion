// 函数: _ZN5Botan12ISO_9796_DS3D2Ev
// 地址: 0xee1538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[3]
*entry_x0 = _vtable_for_Botan::ISO_9796_DS3 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[5]
    entry_x0[4] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 0x10))
