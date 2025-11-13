// 函数: _ZNK5Botan17Montgomery_Params6mul_byERNS_6BigIntERKS1_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd26d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *(arg1 + 0xa8)
int64_t* entry_x3
uint32_t* x20 = *entry_x3
uint64_t x19 = (x9 << 1) + 2

if (x19 << 1 u> (entry_x3[1] - x20) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)
    x20 = *entry_x3
    x9 = *(arg1 + 0xa8)

uint32_t* x2 = *arg2
uint32_t* x5 = *arg3
uint32_t* x23_1 = &x20[x19]
int64_t x3 = (*(arg2 + 8) - x2) s>> 2
uint64_t x6 = (*(arg3 + 8) - x5) s>> 2
uint64_t x4

x4 = x3 u< x9 ? x3 : x9

uint64_t x7

x7 = x6 u< x9 ? x6 : x9

uint32_t* var_50 = x23_1
uint64_t var_48 = x19
Botan::bigint_mul(x20, x19, x2, x3, x4, x5, x6, x7)
Botan::bigint_monty_redc(x20, *arg1, *(arg1 + 0xa8), *(arg1 + 0xa0), x23_1, x19)
int64_t result = *arg2
int64_t x8_8 = (*(arg2 + 8) - result) s>> 2

if (x19 u<= x8_8)
    *(arg2 + 0x18) = -1
    
    if (x19 == 0)
        return result
else
    if (x19 u<= (*(arg2 + 0x10) - result) s>> 2 || (x19 & 0xfffffffffffffff9) + 8 u> x8_8)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if ((x19 & 0xfffffffffffffff9) + 8 u< x8_8)
        *(arg2 + 8) = result + (((x19 & 0xfffffffffffffff9) + 8) << 2)
    
    result = *arg2
    *(arg2 + 0x18) = -1

if (result != 0)
    return memmove(result, x20, x19 << 2) __tailcall

Botan::BigInt* x0_5
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_7
x0_5, x1_7 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Montgomery_Params::sqr(x0_5, x1_7) __tailcall
