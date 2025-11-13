// 函数: _ZN5Botan8EMSA_RawD2Ev
// 地址: 0xedf3a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* result = entry_x0[2]
*entry_x0 = _vtable_for_Botan::EMSA_Raw + 0x10

if (result == 0)
    return result

int64_t x9_1 = entry_x0[4]
entry_x0[3] = result
return Botan::deallocate_memory(result, x9_1 - result, 1)
