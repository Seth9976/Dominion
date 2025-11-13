// 函数: _ZN5Botan11bigint_sub3EPjPKjmS2_m
// 地址: 0xcd9078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_3 = arg3 - arg5

if (arg3 u< arg5)
    Botan::BigInt* x0_1
    Botan::BigInt* x1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x2
    x0_1, x1, x2 = Botan::assertion_failure("x_size >= y_size", "Expected sizes", "bigint_sub3", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xb62)
    return Botan::BigInt::mod_sub(x0_1, x1, x2) __tailcall

int32_t x8 = 0
int64_t i_6 = arg5 & 0xfffffffffffffff8

if (i_6 != 0)
    void* x11_1 = &arg1[4]
    void* x12_1 = &arg2[4]
    void* x13_1 = &arg4[4]
    int64_t i_5 = i_6
    int64_t i
    
    do
        int32_t x15_1 = *(x12_1 - 0x10)
        int32_t x16_1 = *(x13_1 - 0x10)
        int32_t x15_2 = x15_1 - x16_1
        *(x11_1 - 0x10) = x15_2 - x8
        int32_t x8_2 = *(x12_1 - 0xc)
        int32_t x15_3 = *(x13_1 - 0xc)
        int32_t x16_3 = (x15_1 u< x16_1 ? 1 : 0) | (x15_2 u< x8 ? 1 : 0)
        int32_t x8_3 = x8_2 - x15_3
        *(x11_1 - 0xc) = x8_3 - x16_3
        int32_t x8_5 = *(x12_1 - 8)
        int32_t x16_4 = *(x13_1 - 8)
        int32_t x15_5 = (x8_2 u< x15_3 ? 1 : 0) | (x8_3 u< x16_3 ? 1 : 0)
        int32_t x8_6 = x8_5 - x16_4
        *(x11_1 - 8) = x8_6 - x15_5
        int32_t x8_8 = *(x12_1 - 4)
        int32_t x15_6 = *(x13_1 - 4)
        int32_t x16_6 = (x8_5 u< x16_4 ? 1 : 0) | (x8_6 u< x15_5 ? 1 : 0)
        int32_t x8_9 = x8_8 - x15_6
        *(x11_1 - 4) = x8_9 - x16_6
        int32_t x8_11 = *x12_1
        int32_t x16_7 = *x13_1
        int32_t x15_8 = (x8_8 u< x15_6 ? 1 : 0) | (x8_9 u< x16_6 ? 1 : 0)
        int32_t x8_12 = x8_11 - x16_7
        *x11_1 = x8_12 - x15_8
        int32_t x8_14 = *(x12_1 + 4)
        int32_t x15_9 = *(x13_1 + 4)
        int32_t x16_9 = (x8_11 u< x16_7 ? 1 : 0) | (x8_12 u< x15_8 ? 1 : 0)
        int32_t x8_15 = x8_14 - x15_9
        *(x11_1 + 4) = x8_15 - x16_9
        int32_t x8_17 = *(x12_1 + 8)
        int32_t x16_10 = *(x13_1 + 8)
        int32_t x15_11 = (x8_14 u< x15_9 ? 1 : 0) | (x8_15 u< x16_9 ? 1 : 0)
        int32_t x8_18 = x8_17 - x16_10
        *(x11_1 + 8) = x8_18 - x15_11
        int32_t x8_20 = *(x12_1 + 0xc)
        int32_t x15_12 = *(x13_1 + 0xc)
        int32_t x16_12 = (x8_17 u< x16_10 ? 1 : 0) | (x8_18 u< x15_11 ? 1 : 0)
        x12_1 += 0x20
        int32_t x8_21 = x8_20 - x15_12
        *(x11_1 + 0xc) = x8_21 - x16_12
        i = i_5
        i_5 -= 8
        x11_1 += 0x20
        x8 = (x8_20 u< x15_12 ? 1 : 0) | (x8_21 u< x16_12 ? 1 : 0)
        x13_1 += 0x20
    while (i != 8)

if (i_6 != arg5)
    int64_t i_4 = arg5 - i_6
    void* x10 = &arg1[i_6]
    void* x12_2 = &arg4[i_6]
    void* x13_3 = &arg2[i_6]
    int64_t i_1
    
    do
        int32_t x14_1 = *x13_3
        x13_3 += 4
        int32_t x15_14 = *x12_2
        x12_2 += 4
        int32_t x14_2 = x14_1 - x15_14
        int32_t x14_3 = x14_2 - x8
        i_1 = i_4
        i_4 -= 1
        x8 = (x14_1 u< x15_14 ? 1 : 0) | (x14_2 u< x8 ? 1 : 0)
        *x10 = x14_3
        x10 += 4
    while (i_1 != 1)

if (arg5 != arg3)
    void* x10_1 = &arg1[arg5]
    void* x11_3 = &arg2[arg5]
    uint64_t i_2
    
    do
        int32_t x12_3 = *x11_3
        x11_3 += 4
        int32_t x12_4 = x12_3 - x8
        x8 = x12_3 u< x8 ? 1 : 0
        i_2 = i_3
        i_3 -= 1
        *x10_1 = x12_4
        x10_1 += 4
    while (i_2 != 1)

return zx.q(x8)
