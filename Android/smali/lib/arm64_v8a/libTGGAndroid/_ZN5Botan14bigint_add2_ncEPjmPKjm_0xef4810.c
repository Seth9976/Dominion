// 函数: _ZN5Botan14bigint_add2_ncEPjmPKjm
// 地址: 0xef4810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_3 = arg2 - arg4

if (arg2 u< arg4)
    uint64_t x0_1
    uint32_t* x1
    uint32_t* x2
    uint32_t* x3
    uint64_t x4
    x0_1, x1, x2, x3, x4 = Botan::assertion_failure("x_size >= y_size", "Expected sizes", 
        "bigint_add2_nc", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xaed)
    return Botan::bigint_cnd_addsub(x0_1, x1, x2, x3, x4) __tailcall

int32_t x8 = 0
int64_t i_6 = arg4 & 0xfffffffffffffff8

if (i_6 != 0)
    void* x11_1 = &arg1[4]
    void* x12_1 = &arg3[4]
    int64_t i_5 = i_6
    int64_t i
    
    do
        int32_t x14_1 = *(x12_1 - 0x10)
        int32_t x15_1 = *(x11_1 - 0x10)
        int32_t x16_1 = *(x11_1 - 0xc)
        int32_t x14_2 = x14_1 + x15_1
        *(x11_1 - 0x10) = x14_2 + x8
        int32_t x8_2 = *(x12_1 - 0xc)
        int32_t x14_4 = (x14_1 + x15_1 u< x14_1 ? 1 : 0) | (x14_2 + x8 u< x14_2 ? 1 : 0)
        int32_t x8_3 = x8_2 + x16_1
        *(x11_1 - 0xc) = x8_3 + x14_4
        int32_t x8_5 = *(x12_1 - 8)
        int32_t x15_4 = (x8_2 + x16_1 u< x8_2 ? 1 : 0) | (x8_3 + x14_4 u< x8_3 ? 1 : 0)
        int32_t x14_5 = *(x11_1 - 8)
        int32_t x16_3 = *(x11_1 - 4)
        int32_t x8_6 = x8_5 + x14_5
        *(x11_1 - 8) = x8_6 + x15_4
        int32_t x8_8 = *(x12_1 - 4)
        int32_t x14_7 = (x8_5 + x14_5 u< x8_5 ? 1 : 0) | (x8_6 + x15_4 u< x8_6 ? 1 : 0)
        int32_t x8_9 = x8_8 + x16_3
        *(x11_1 - 4) = x8_9 + x14_7
        int32_t x8_11 = *x12_1
        int32_t x15_7 = (x8_8 + x16_3 u< x8_8 ? 1 : 0) | (x8_9 + x14_7 u< x8_9 ? 1 : 0)
        int32_t x14_8 = *x11_1
        int32_t x16_5 = *(x11_1 + 4)
        int32_t x8_12 = x8_11 + x14_8
        *x11_1 = x8_12 + x15_7
        int32_t x8_14 = *(x12_1 + 4)
        int32_t x14_10 = (x8_11 + x14_8 u< x8_11 ? 1 : 0) | (x8_12 + x15_7 u< x8_12 ? 1 : 0)
        int32_t x8_15 = x8_14 + x16_5
        *(x11_1 + 4) = x8_15 + x14_10
        int32_t x8_17 = *(x12_1 + 8)
        int32_t x15_10 = (x8_14 + x16_5 u< x8_14 ? 1 : 0) | (x8_15 + x14_10 u< x8_15 ? 1 : 0)
        int32_t x14_11 = *(x11_1 + 8)
        int32_t x16_7 = *(x11_1 + 0xc)
        int32_t x8_18 = x8_17 + x14_11
        *(x11_1 + 8) = x8_18 + x15_10
        int32_t x8_20 = *(x12_1 + 0xc)
        int32_t x14_13 = (x8_17 + x14_11 u< x8_17 ? 1 : 0) | (x8_18 + x15_10 u< x8_18 ? 1 : 0)
        x12_1 += 0x20
        int32_t x8_21 = x8_20 + x16_7
        *(x11_1 + 0xc) = x8_21 + x14_13
        i = i_5
        i_5 -= 8
        x11_1 += 0x20
        x8 = (x8_20 + x16_7 u< x8_20 ? 1 : 0) | (x8_21 + x14_13 u< x8_21 ? 1 : 0)
    while (i != 8)

if (i_6 != arg4)
    int64_t i_4 = arg4 - i_6
    void* x10 = &arg3[i_6]
    void* x12_3 = &arg1[i_6]
    int64_t i_1
    
    do
        int32_t x13_1 = *x12_3
        int32_t x14_15 = *x10
        x10 += 4
        int32_t x13_2 = x14_15 + x13_1
        int32_t x13_3 = x13_2 + x8
        i_1 = i_4
        i_4 -= 1
        x8 = (x14_15 + x13_1 u< x14_15 ? 1 : 0) | (x13_2 + x8 u< x13_2 ? 1 : 0)
        *x12_3 = x13_3
        x12_3 += 4
    while (i_1 != 1)

if (arg4 != arg2)
    void* x10_1 = &arg1[arg4]
    uint64_t i_2
    
    do
        int32_t x11_2 = *x10_1
        int32_t x11_3 = x11_2 + x8
        x8 = x11_2 + x8 u< x11_2 ? 1 : 0
        i_2 = i_3
        i_3 -= 1
        *x10_1 = x11_3
        x10_1 += 4
    while (i_2 != 1)

return zx.q(x8)
