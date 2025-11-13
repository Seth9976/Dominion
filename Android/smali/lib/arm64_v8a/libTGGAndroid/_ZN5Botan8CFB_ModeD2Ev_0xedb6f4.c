// 函数: _ZN5Botan8CFB_ModeD2Ev
// 地址: 0xedb6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[8]
entry_x0[8] = 0
*entry_x0 = _vtable_for_Botan::CFB_Mode + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

void* x0_1 = entry_x0[4]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[6]
    entry_x0[5] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_4 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_4 - result, 1)
