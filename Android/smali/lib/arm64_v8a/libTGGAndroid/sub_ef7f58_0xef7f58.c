// 函数: sub_ef7f58
// 地址: 0xef7f58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(*arg1 + 0x30))() u> (arg6[1] - *arg6) s>> 2)
    int64_t x0_2 = (*(*arg1 + 0x30))(arg1)
    int64_t x8_4 = *arg6
    int64_t x9_3 = (arg6[1] - x8_4) s>> 2
    
    if (x0_2 u> x9_3)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg6)
    else if (x0_2 u< x9_3)
        arg6[1] = x8_4 + (x0_2 << 2)

int64_t x8_6 = *arg2
int64_t x10_2 = (arg1[0x10] << 1) + 2
int64_t x9_6 = (arg2[1] - x8_6) s>> 2

if (x10_2 u> x9_6)
    if (x10_2 u<= (arg2[2] - x8_6) s>> 2 || (x10_2 & 0xfffffffffffffff9) + 8 u> x9_6)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if ((x10_2 & 0xfffffffffffffff9) + 8 u< x9_6)
        arg2[1] = x8_6 + (((x10_2 & 0xfffffffffffffff9) + 8) << 2)

uint32_t* x0_5 = *arg2
int64_t x9_7 = arg2[1]
arg2[3] = -1
uint32_t* x5 = *arg5
uint64_t x8_7 = arg1[0x10]
int64_t x11_3 = *arg6
uint64_t x6 = (arg5[1] - x5) s>> 2
uint64_t x4

x4 = x8_7 u> arg4 ? arg4 : x8_7

uint64_t x7

x7 = x6 u< x8_7 ? x6 : x8_7

int64_t var_50 = x11_3
int64_t var_48 = (arg6[1] - x11_3) s>> 2
Botan::bigint_mul(x0_5, (x9_7 - x0_5) s>> 2, arg3, arg4, x4, x5, x6, x7)
jump(*(*arg1 + 0x90))
