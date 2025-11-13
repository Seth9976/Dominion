// 函数: _ZN5Botan15Buffered_FilterD2Ev
// 地址: 0xeef3a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* result = entry_x0[3]
*entry_x0 = _vtable_for_Botan::Buffered_Filter + 0x10

if (result == 0)
    return result

int64_t x9_1 = entry_x0[5]
entry_x0[4] = result
return Botan::deallocate_memory(result, x9_1 - result, 1)
