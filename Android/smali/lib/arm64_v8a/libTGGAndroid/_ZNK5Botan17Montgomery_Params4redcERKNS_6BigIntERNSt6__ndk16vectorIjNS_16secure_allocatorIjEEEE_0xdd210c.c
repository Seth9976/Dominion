// 函数: _ZNK5Botan17Montgomery_Params4redcERKNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd210c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = (*(arg1 + 0xa8) << 1) + 2
int64_t* entry_x2

if (x23 u> (entry_x2[1] - *entry_x2) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x2)

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
int64_t x8 = *entry_x8
int64_t x10_2 = *(entry_x8 + 8)
*(entry_x8 + 0x18) = *(arg2 + 0x18)
int64_t x9_5 = (x10_2 - x8) s>> 2
*(entry_x8 + 0x20) = *(arg2 + 0x20)

if (x23 u> x9_5)
    if (x23 u<= (*(entry_x8 + 0x10) - x8) s>> 2)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    else if ((x23 & 0xfffffffffffffff9) + 8 u> x9_5)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    else if ((x23 & 0xfffffffffffffff9) + 8 u< x9_5)
        *(entry_x8 + 8) = x8 + (((x23 & 0xfffffffffffffff9) + 8) << 2)

*(entry_x8 + 0x18) = -1
uint32_t* x4 = *entry_x2
return Botan::bigint_monty_redc(*entry_x8, *arg1, *(arg1 + 0xa8), *(arg1 + 0xa0), x4, 
    (entry_x2[1] - x4) s>> 2)
