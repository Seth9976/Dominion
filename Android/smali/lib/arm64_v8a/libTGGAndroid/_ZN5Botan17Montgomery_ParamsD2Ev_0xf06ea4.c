// 函数: _ZN5Botan17Montgomery_ParamsD2Ev
// 地址: 0xf06ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x0 = entry_x0[0xf]

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x11]
    entry_x0[0x10] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = entry_x0[0xa]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[0xc]
    entry_x0[0xb] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* x0_2 = entry_x0[5]

if (x0_2 != 0)
    int64_t x8_5 = entry_x0[7]
    entry_x0[6] = x0_2
    Botan::deallocate_memory(x0_2, (x8_5 - x0_2) s>> 2, 4)

void* result = *entry_x0

if (result == 0)
    return result

int64_t x8_7 = entry_x0[2]
entry_x0[1] = result
return Botan::deallocate_memory(result, (x8_7 - result) s>> 2, 4)
