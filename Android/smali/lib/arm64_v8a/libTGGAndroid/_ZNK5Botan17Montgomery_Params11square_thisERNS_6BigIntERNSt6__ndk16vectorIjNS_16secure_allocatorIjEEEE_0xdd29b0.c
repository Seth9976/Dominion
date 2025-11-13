// 函数: _ZNK5Botan17Montgomery_Params11square_thisERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd29b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *(arg1 + 0xa8)
int64_t* entry_x2
uint32_t* x20 = *entry_x2
uint64_t x19 = (x9 << 1) + 2

if (x19 << 1 u> (entry_x2[1] - x20) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x2)
    x20 = *entry_x2
    x9 = *(arg1 + 0xa8)

uint32_t* x2 = *arg2
uint32_t* x23_2 = &x20[x19]
int64_t x3 = (*(arg2 + 8) - x2) s>> 2
uint64_t x4

x4 = x3 u< x9 ? x3 : x9

Botan::bigint_sqr(x20, x19, x2, x3, x4, x23_2, x19)
Botan::bigint_monty_redc(x20, *arg1, *(arg1 + 0xa8), *(arg1 + 0xa0), x23_2, x19)
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

int64_t x0_5
Botan::BigInt* x1_7
bool x2_4
x0_5, x1_7, x2_4 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Montgomery_Int::Montgomery_Int(x0_5, x1_7, x2_4) __tailcall
