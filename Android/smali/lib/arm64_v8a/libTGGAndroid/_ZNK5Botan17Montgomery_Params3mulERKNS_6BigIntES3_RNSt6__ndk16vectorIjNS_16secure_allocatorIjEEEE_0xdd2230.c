// 函数: _ZNK5Botan17Montgomery_Params3mulERKNS_6BigIntES3_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd2230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x27 = (*(arg1 + 0xa8) << 1) + 2
int64_t* entry_x3

if (x27 u> (entry_x3[1] - *entry_x3) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[4].d = 1
entry_x8[3] = -1
uint32_t* x0_2
int64_t x8_1

if ((x27 & 0xfffffffffffffff9) == -8)
    x8_1 = 0
    x0_2 = nullptr
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    x0_2 = *entry_x8
    x8_1 = entry_x8[1]

entry_x8[4].d = 1
entry_x8[3] = -1
uint32_t* x2 = *arg2
uint32_t* x5 = *arg3
uint64_t x12 = *(arg1 + 0xa8)
int64_t x3 = (*(arg2 + 8) - x2) s>> 2
uint64_t x6 = (*(arg3 + 8) - x5) s>> 2
uint64_t var_58 = x6
uint64_t x4

x4 = x3 u< x12 ? x3 : x12

void* __offset(Botan::BigInt, 0xa8) x9_5

if (x6 u< x12)
    x9_5 = &var_58
else
    x9_5 = arg1 + 0xa8

int64_t x10_4 = *entry_x3
int64_t var_70 = x10_4
int64_t var_68 = (entry_x3[1] - x10_4) s>> 2
Botan::bigint_mul(x0_2, (x8_1 - x0_2) s>> 2, x2, x3, x4, x5, x6, *x9_5)
entry_x8[3] = -1
uint32_t* x4_1 = *entry_x3
return Botan::bigint_monty_redc(*entry_x8, *arg1, *(arg1 + 0xa8), *(arg1 + 0xa0), x4_1, 
    (entry_x3[1] - x4_1) s>> 2)
