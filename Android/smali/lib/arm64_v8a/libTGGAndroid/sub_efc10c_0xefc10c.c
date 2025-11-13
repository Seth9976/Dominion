// 函数: sub_efc10c
// 地址: 0xefc10c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *(arg1 + 0xd0) << 1

if (x9_1 + 4 u> (arg5[1] - *arg5) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg5)
    x9_1 = *(arg1 + 0xd0) << 1

int64_t x8_5 = *arg2
int64_t x9_3 = (arg2[1] - x8_5) s>> 2

if (x9_1 + 2 u> x9_3)
    if (x9_1 + 2 u<= (arg2[2] - x8_5) s>> 2 || ((x9_1 + 2) & 0xfffffffffffffff9) + 8 u> x9_3)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if (((x9_1 + 2) & 0xfffffffffffffff9) + 8 u< x9_3)
        arg2[1] = x8_5 + ((((x9_1 + 2) & 0xfffffffffffffff9) + 8) << 2)

uint32_t* x0_2 = *arg2
int64_t x8_6 = arg2[1]
arg2[3] = -1
uint64_t x9_4 = *(arg1 + 0xd0)
uint32_t* x5 = *arg5
uint64_t x4

x4 = x9_4 u> arg4 ? arg4 : x9_4

Botan::bigint_sqr(x0_2, (x8_6 - x0_2) s>> 2, arg3, arg4, x4, x5, (arg5[1] - x5) s>> 2)
arg2[3] = -1
uint32_t* x4_1 = *arg5
return Botan::bigint_monty_redc(*arg2, *(arg1 + 8), *(arg1 + 0xd0), *(arg1 + 0x150), x4_1, 
    (arg5[1] - x4_1) s>> 2) __tailcall
