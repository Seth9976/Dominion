// 函数: _ZN5Botan3TLS12Session_KeysaSEOS1_
// 地址: 0xe727a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg1

if (x0 != 0)
    int64_t x8_1 = *(arg1 + 0x10)
    *(arg1 + 8) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)
    __builtin_memset(arg1, 0, 0x18)

int64_t* entry_x1
*arg1 = *entry_x1
*(arg1 + 8) = entry_x1[1]
*(arg1 + 0x10) = entry_x1[2]
__builtin_memset(entry_x1, 0, 0x18)
void* x0_1 = *(arg1 + 0x18)

if (x0_1 != 0)
    int64_t x8_5 = *(arg1 + 0x28)
    *(arg1 + 0x20) = x0_1
    Botan::deallocate_memory(x0_1, x8_5 - x0_1, 1)
    __builtin_memset(arg1 + 0x18, 0, 0x18)

*(arg1 + 0x18) = entry_x1[3]
*(arg1 + 0x20) = entry_x1[4]
*(arg1 + 0x28) = entry_x1[5]
__builtin_memset(&entry_x1[3], 0, 0x18)
void* x0_2 = *(arg1 + 0x30)

if (x0_2 != 0)
    int64_t x8_9 = *(arg1 + 0x40)
    *(arg1 + 0x38) = x0_2
    Botan::deallocate_memory(x0_2, x8_9 - x0_2, 1)
    __builtin_memset(arg1 + 0x30, 0, 0x18)

*(arg1 + 0x30) = entry_x1[6]
*(arg1 + 0x38) = entry_x1[7]
*(arg1 + 0x40) = entry_x1[8]
__builtin_memset(&entry_x1[6], 0, 0x18)
void* x0_3 = *(arg1 + 0x48)

if (x0_3 != 0)
    *(arg1 + 0x50) = x0_3
    operator delete(x0_3)
    __builtin_memset(arg1 + 0x48, 0, 0x18)

*(arg1 + 0x48) = entry_x1[9]
*(arg1 + 0x50) = entry_x1[0xa]
*(arg1 + 0x58) = entry_x1[0xb]
__builtin_memset(&entry_x1[9], 0, 0x18)
void* x0_4 = *(arg1 + 0x60)

if (x0_4 != 0)
    *(arg1 + 0x68) = x0_4
    operator delete(x0_4)
    __builtin_memset(arg1 + 0x60, 0, 0x18)

*(arg1 + 0x60) = entry_x1[0xc]
*(arg1 + 0x68) = entry_x1[0xd]
*(arg1 + 0x70) = entry_x1[0xe]
__builtin_memset(&entry_x1[0xc], 0, 0x18)
return arg1
