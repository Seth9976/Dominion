// 函数: _ZNK5Botan7FPE_FE11FERKNS_6BigIntEmRKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERS8_
// 地址: 0xd7fd84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt::encode_locked(arg2)
int64_t* entry_x4
void* x0_1 = *entry_x4

if (x0_1 != 0)
    int64_t x8 = entry_x4[2]
    entry_x4[1] = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)
    __builtin_memset(entry_x4, 0, 0x18)

int128_t var_50
*entry_x4 = var_50
int64_t var_40
entry_x4[2] = var_40
int64_t* x0_2 = *(arg1 + 8)
int64_t x1_1 = *arg4
(*(*x0_2 + 0x18))(x0_2, x1_1, *(arg4 + 8) - x1_1)
int64_t* x0_3 = *(arg1 + 8)
var_50.d = _byteswap(arg3.d)
(*(*x0_3 + 0x18))(x0_3, &var_50, 4)
int64_t* x0_4 = *(arg1 + 8)
var_50.d = _byteswap(entry_x4[1].d - *entry_x4)
(*(*x0_4 + 0x18))(x0_4, &var_50, 4)
int64_t* x0_5 = *(arg1 + 8)
int64_t x1_4 = *entry_x4
(*(*x0_5 + 0x18))(x0_5, x1_4, entry_x4[1] - x1_4)
*(arg1 + 8)
Botan::Buffered_Computation::final()
void* x0_7 = *entry_x4

if (x0_7 != 0)
    int64_t x8_14 = entry_x4[2]
    entry_x4[1] = x0_7
    Botan::deallocate_memory(x0_7, x8_14 - x0_7, 1)
    __builtin_memset(entry_x4, 0, 0x18)

uint64_t x1_6 = var_50.q
*entry_x4 = x1_6
*(entry_x4 + 8) = var_50
uint8_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
*(entry_x8 + 0x18) = -1
*(entry_x8 + 0x20) = 1
return Botan::BigInt::binary_decode(entry_x8, x1_6)
