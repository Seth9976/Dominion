// 函数: _ZN5Botan14SM2_PrivateKeyD2Ev
// 地址: 0xf22c58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
int64_t* entry_x0
*entry_x0 = x8
*(entry_x0 + *(x8 - 0x88)) = entry_x1[8]
*(entry_x0 + *(*entry_x0 - 0x90)) = entry_x1[9]
entry_x0[1] = entry_x1[0xa]
*(entry_x0 + *(*entry_x0 - 0x98)) = entry_x1[0xb]
void* x0 = entry_x0[7]

if (x0 != 0)
    int64_t x8_7 = entry_x0[9]
    entry_x0[8] = x0
    Botan::deallocate_memory(x0, (x8_7 - x0) s>> 2, 4)

void* x8_9 = entry_x1[4]
entry_x0[1] = x8_9
*(&entry_x0[1] + *(x8_9 - 0xc8)) = entry_x1[5]
*(&entry_x0[1] + *(entry_x0[1] - 0x88)) = entry_x1[6]
*(&entry_x0[1] + *(entry_x0[1] - 0xd0)) = entry_x1[7]
void* result = entry_x0[2]

if (result == 0)
    return result

int64_t x8_15 = entry_x0[4]
entry_x0[3] = result
return Botan::deallocate_memory(result, (x8_15 - result) s>> 2, 4)
