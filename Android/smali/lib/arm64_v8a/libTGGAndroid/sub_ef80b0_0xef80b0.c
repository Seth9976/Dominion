// 函数: sub_ef80b0
// 地址: 0xef80b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(*arg1 + 0x30))() u> (arg5[1] - *arg5) s>> 2)
    int64_t x0_2 = (*(*arg1 + 0x30))(arg1)
    int64_t x8_4 = *arg5
    int64_t x9_3 = (arg5[1] - x8_4) s>> 2
    
    if (x0_2 u> x9_3)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg5)
    else if (x0_2 u< x9_3)
        arg5[1] = x8_4 + (x0_2 << 2)

int64_t x8_6 = *arg2
uint64_t x24_1 = (arg1[0x10] << 1) + 2
int64_t x9_6 = (arg2[1] - x8_6) s>> 2

if (x24_1 u> x9_6)
    if (x24_1 u<= (arg2[2] - x8_6) s>> 2 || (x24_1 & 0xfffffffffffffff9) + 8 u> x9_6)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if ((x24_1 & 0xfffffffffffffff9) + 8 u< x9_6)
        arg2[1] = x8_6 + (((x24_1 & 0xfffffffffffffff9) + 8) << 2)

arg2[3] = -1
uint64_t x8_7 = arg1[0x10]
uint32_t* x5 = *arg5
uint64_t x4

x4 = x8_7 u> arg4 ? arg4 : x8_7

Botan::bigint_sqr(*arg2, x24_1, arg3, arg4, x4, x5, (arg5[1] - x5) s>> 2)
jump(*(*arg1 + 0x90))
