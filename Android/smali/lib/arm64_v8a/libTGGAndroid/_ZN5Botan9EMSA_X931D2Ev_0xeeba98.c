// 函数: _ZN5Botan9EMSA_X931D2Ev
// 地址: 0xeeba98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[4]
entry_x0[4] = 0
*entry_x0 = _vtable_for_Botan::EMSA_X931 + 0x10

if (x0 != 0)
    (*(*x0 + 0x10))()

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_3 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_3 - result, 1)
