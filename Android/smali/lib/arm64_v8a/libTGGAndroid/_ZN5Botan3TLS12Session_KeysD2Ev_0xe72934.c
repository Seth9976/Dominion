// 函数: _ZN5Botan3TLS12Session_KeysD2Ev
// 地址: 0xe72934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x0 = entry_x0[0xc]

if (x0 != 0)
    entry_x0[0xd] = x0
    operator delete(x0)

void* x0_1 = entry_x0[9]

if (x0_1 != 0)
    entry_x0[0xa] = x0_1
    operator delete(x0_1)

void* x0_2 = entry_x0[6]

if (x0_2 != 0)
    int64_t x8_1 = entry_x0[8]
    entry_x0[7] = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

void* x0_3 = entry_x0[3]

if (x0_3 != 0)
    int64_t x8_2 = entry_x0[5]
    entry_x0[4] = x0_3
    Botan::deallocate_memory(x0_3, x8_2 - x0_3, 1)

void* result = *entry_x0

if (result == 0)
    return result

int64_t x8_3 = entry_x0[2]
entry_x0[1] = result
return Botan::deallocate_memory(result, x8_3 - result, 1)
