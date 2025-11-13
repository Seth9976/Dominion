// 函数: _ZN5Botan14bigint_cnd_subEjPjmPKjm
// 地址: 0xf0650c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_3 = arg3 - arg5

if (arg3 u< arg5)
    return sub_f06754(Botan::assertion_failure("x_size >= y_size", "Expected sizes", 
        "bigint_cnd_sub", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa62))
        __tailcall

int64_t i_6 = arg5 & 0xfffffffffffffff8
int32_t x9_2 = ((arg1 - 1) & not.d(arg1)) s>> 0x1f
int32_t x10 = 0

if (i_6 != 0)
    void* x12_1 = &arg2[4]
    void* x13_1 = &arg4[4]
    int64_t i_5 = i_6
    int64_t i
    
    do
        int32_t x15_1 = *(x12_1 - 0x10)
        int32_t x16_1 = *(x12_1 - 0xc)
        int32_t x17_1 = *(x13_1 - 0x10)
        int32_t x0 = *(x13_1 - 0xc)
        int32_t x5_1 = *(x12_1 - 8)
        int32_t x6_1 = *(x12_1 - 4)
        int32_t x7_1 = *(x13_1 - 8)
        int32_t x19_1 = *(x13_1 - 4)
        int32_t x17_2 = x15_1 - x17_1
        int32_t x16_2 = x16_1 - x0
        int32_t x17_4 = (x15_1 u< x17_1 ? 1 : 0) | (x17_2 u< x10 ? 1 : 0)
        int32_t x5_2 = x5_1 - x7_1
        int32_t x15_4 = (x16_1 u< x0 ? 1 : 0) | (x16_2 u< x17_4 ? 1 : 0)
        int32_t x20_1 = *x12_1
        int32_t x21_1 = *(x12_1 + 4)
        int32_t x22_1 = *x13_1
        int32_t x23_1 = *(x13_1 + 4)
        int32_t x26_1 = *(x13_1 + 8)
        int32_t x27_1 = *(x13_1 + 0xc)
        *(x12_1 - 0x10) = (x15_1 & x9_2) | ((x17_2 - x10) & not.d(x9_2))
        *(x12_1 - 0xc) = (x16_1 & x9_2) | ((x16_2 - x17_4) & not.d(x9_2))
        int32_t x16_6 = x6_1 - x19_1
        int32_t x10_5 = (x5_1 u< x7_1 ? 1 : 0) | (x5_2 u< x15_4 ? 1 : 0)
        int32_t x0_2 = x20_1 - x22_1
        int32_t x16_8 = (x6_1 u< x19_1 ? 1 : 0) | (x16_6 u< x10_5 ? 1 : 0)
        int32_t x24_1 = *(x12_1 + 8)
        int32_t x25_1 = *(x12_1 + 0xc)
        *(x12_1 - 8) = (x5_1 & x9_2) | ((x5_2 - x15_4) & not.d(x9_2))
        *(x12_1 - 4) = (x6_1 & x9_2) | ((x16_6 - x10_5) & not.d(x9_2))
        int32_t x15_8 = x21_1 - x23_1
        int32_t x10_10 = (x20_1 u< x22_1 ? 1 : 0) | (x0_2 u< x16_8 ? 1 : 0)
        int32_t x7_3 = x24_1 - x26_1
        int32_t x15_10 = (x21_1 u< x23_1 ? 1 : 0) | (x15_8 u< x10_10 ? 1 : 0)
        *x12_1 = (x20_1 & x9_2) | ((x0_2 - x16_8) & not.d(x9_2))
        *(x12_1 + 4) = (x21_1 & x9_2) | ((x15_8 - x10_10) & not.d(x9_2))
        int32_t x16_12 = x25_1 - x27_1
        int32_t x10_15 = (x24_1 u< x26_1 ? 1 : 0) | (x7_3 u< x15_10 ? 1 : 0)
        x10 = (x25_1 u< x27_1 ? 1 : 0) | (x16_12 u< x10_15 ? 1 : 0)
        i = i_5
        i_5 -= 8
        *(x12_1 + 8) = (x24_1 & x9_2) | ((x7_3 - x15_10) & not.d(x9_2))
        *(x12_1 + 0xc) = (x25_1 & x9_2) | ((x16_12 - x10_15) & not.d(x9_2))
        x12_1 += 0x20
        x13_1 += 0x20
    while (i != 8)

if (i_6 != arg5)
    int64_t i_4 = arg5 - i_6
    void* x11 = &arg4[i_6]
    void* x13_3 = &arg2[i_6]
    int64_t i_1
    
    do
        int32_t x14_1 = *x13_3
        int32_t x15_14 = *x11
        x11 += 4
        int32_t x14_2 = x14_1 - x15_14
        int32_t x17_8 = (x14_2 - x10) & not.d(x9_2)
        x10 = (x14_1 u< x15_14 ? 1 : 0) | (x14_2 u< x10 ? 1 : 0)
        i_1 = i_4
        i_4 -= 1
        *x13_3 = (x14_1 & x9_2) | x17_8
        x13_3 += 4
    while (i_1 != 1)

if (arg5 != arg3)
    void* x11_1 = &arg2[arg5]
    uint64_t i_2
    
    do
        int32_t x12_2 = *x11_1
        int32_t x12_4 = (x12_2 & x9_2) | ((x12_2 - x10) & not.d(x9_2))
        x10 = x12_2 u< x10 ? 1 : 0
        i_2 = i_3
        i_3 -= 1
        *x11_1 = x12_4
        x11_1 += 4
    while (i_2 != 1)

return zx.q(x10) & zx.q(not.d(x9_2))
