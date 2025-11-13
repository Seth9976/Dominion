// 函数: _ZN5Botan6ChaCha9chacha_x8EPhPjm
// 地址: 0xcffb30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x3

if ((entry_x3.d & 1) != 0)
    uint8_t* x0_4
    uint32_t* x1_5
    uint64_t x2_5
    x0_4, x1_5, x2_5 = Botan::assertion_failure("rounds % 2 == 0", "Valid rounds", "chacha_x8", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x5383)
    return Botan::ChaCha::chacha_simd32_x4(x0_4, x1_5, x2_5) __tailcall

char* x0 = Botan::CPUID::state()

if ((zx.d(*x0) & 1) != 0)
    return Botan::ChaCha::chacha_simd32_x4(Botan::ChaCha::chacha_simd32_x4(x0, arg2, arg3), 
        &arg2[0x40], arg3) __tailcall

int32_t x10 = *(arg3 + 0x30)
int32_t x20 = *(arg3 + 0x34)
int64_t i = 0
uint64_t j_2 = entry_x3 u>> 1
uint64_t result

do
    int32_t x0_1 = *(arg3 + 0x18)
    int32_t x1_1 = *(arg3 + 0x1c)
    int32_t x2_1 = *(arg3 + 0x20)
    int32_t x3_1 = *(arg3 + 0x24)
    int32_t x4_2 = *(arg3 + 0x28)
    int32_t x6_2 = *(arg3 + 0x2c)
    int32_t x9_2 = *(arg3 + 0x38)
    int32_t x7_3 = *(arg3 + 0x3c)
    int32_t x13_1 = *arg3
    int32_t x14_1 = *(arg3 + 4)
    int32_t x12_1 = *(arg3 + 8)
    int32_t x15_1 = *(arg3 + 0xc)
    int32_t x16_1 = *(arg3 + 0x10)
    int32_t x27_1 = *(arg3 + 0x14)
    int32_t x28_1 = x0_1
    int32_t fp_1 = x1_1
    int32_t x25_1 = x2_1
    int32_t x26_1 = x3_1
    int32_t x22_1 = x4_2
    int32_t x23_1 = x6_2
    int32_t lr_1 = x10
    int32_t x11_1 = x20
    int32_t x5_1 = x9_2
    int32_t x24_1 = x7_3
    uint64_t j_1 = j_2
    int32_t var_68_1 = x14_1
    int32_t var_64_1 = x13_1
    int32_t var_70_1 = x15_1
    int32_t var_6c_1 = x12_1
    int32_t var_78_1 = x27_1
    int32_t var_74_1 = x16_1
    
    if (j_2 != 0)
        uint64_t j
        
        do
            int32_t x13_3 = x16_1 + x13_1
            int32_t x14_3 = x27_1 + x14_1
            int32_t x12_3 = x28_1 + x12_1
            int32_t x15_3 = fp_1 + x15_1
            int32_t lr_3 = ror.d(lr_1 ^ x13_3, 0x10)
            int32_t x11_5 = ror.d(x11_1 ^ x14_3, 0x10)
            int32_t x5_4 = ror.d(x5_1 ^ x12_3, 0x10)
            int32_t x24_3 = ror.d(x24_1 ^ x15_3, 0x10)
            int32_t x25_2 = lr_3 + x25_1
            int32_t x26_2 = x11_5 + x26_1
            int32_t x22_2 = x5_4 + x22_1
            int32_t x23_2 = x24_3 + x23_1
            int32_t x16_4 = ror.d(x25_2 ^ x16_1, 0x14)
            int32_t x27_3 = ror.d(x26_2 ^ x27_1, 0x14)
            int32_t x28_3 = ror.d(x22_2 ^ x28_1, 0x14)
            int32_t fp_3 = ror.d(x23_2 ^ fp_1, 0x14)
            int32_t x13_4 = x16_4 + x13_3
            int32_t x14_4 = x27_3 + x14_3
            int32_t x12_4 = x28_3 + x12_3
            int32_t x15_4 = fp_3 + x15_3
            int32_t lr_5 = ror.d(x13_4 ^ lr_3, 0x18)
            int32_t x11_7 = ror.d(x14_4 ^ x11_5, 0x18)
            int32_t x5_6 = ror.d(x12_4 ^ x5_4, 0x18)
            int32_t x24_5 = ror.d(x15_4 ^ x24_3, 0x18)
            int32_t x25_3 = lr_5 + x25_2
            int32_t x26_3 = x11_7 + x26_2
            int32_t x22_3 = x5_6 + x22_2
            int32_t x23_3 = x24_5 + x23_2
            int32_t x16_6 = ror.d(x25_3 ^ x16_4, 0x19)
            int32_t x27_5 = ror.d(x26_3 ^ x27_3, 0x19)
            int32_t x28_5 = ror.d(x22_3 ^ x28_3, 0x19)
            int32_t fp_5 = ror.d(x23_3 ^ fp_3, 0x19)
            int32_t x13_5 = x27_5 + x13_4
            int32_t x14_5 = x28_5 + x14_4
            int32_t x12_5 = fp_5 + x12_4
            int32_t x15_5 = x16_6 + x15_4
            int32_t x24_7 = ror.d(x13_5 ^ x24_5, 0x10)
            int32_t lr_7 = ror.d(x14_5 ^ lr_5, 0x10)
            int32_t x11_9 = ror.d(x12_5 ^ x11_7, 0x10)
            int32_t x5_8 = ror.d(x15_5 ^ x5_6, 0x10)
            int32_t x22_4 = x24_7 + x22_3
            int32_t x23_4 = lr_7 + x23_3
            int32_t x25_4 = x11_9 + x25_3
            int32_t x26_4 = x5_8 + x26_3
            int32_t x27_7 = ror.d(x22_4 ^ x27_5, 0x14)
            int32_t x28_7 = ror.d(x23_4 ^ x28_5, 0x14)
            int32_t fp_7 = ror.d(x25_4 ^ fp_5, 0x14)
            int32_t x16_8 = ror.d(x26_4 ^ x16_6, 0x14)
            x13_1 = x27_7 + x13_5
            x14_1 = x28_7 + x14_5
            x12_1 = fp_7 + x12_5
            x15_1 = x16_8 + x15_5
            x24_1 = ror.d(x13_1 ^ x24_7, 0x18)
            lr_1 = ror.d(x14_1 ^ lr_7, 0x18)
            x11_1 = ror.d(x12_1 ^ x11_9, 0x18)
            x5_1 = ror.d(x15_1 ^ x5_8, 0x18)
            x22_1 = x24_1 + x22_4
            x23_1 = lr_1 + x23_4
            x25_1 = x11_1 + x25_4
            x26_1 = x5_1 + x26_4
            j = j_1
            j_1 -= 1
            x27_1 = ror.d(x22_1 ^ x27_7, 0x19)
            x28_1 = ror.d(x23_1 ^ x28_7, 0x19)
            fp_1 = ror.d(x25_1 ^ fp_7, 0x19)
            x16_1 = ror.d(x26_1 ^ x16_8, 0x19)
        while (j != 1)
    
    result = zx.q(x28_1 + x0_1)
    void* x7_2 = &arg2[i * 0x10]
    *x7_2 = x13_1 + var_64_1
    *(x7_2 + 4) = x14_1 + var_68_1
    *(x7_2 + 8) = x12_1 + var_6c_1
    *(x7_2 + 0xc) = x15_1 + var_70_1
    *(x7_2 + 0x18) = result.d
    *(x7_2 + 0x1c) = fp_1 + x1_1
    *(x7_2 + 0x20) = x25_1 + x2_1
    *(x7_2 + 0x24) = x26_1 + x3_1
    *(x7_2 + 0x28) = x22_1 + x4_2
    *(x7_2 + 0x2c) = x23_1 + x6_2
    *(x7_2 + 0x30) = lr_1 + x10
    *(x7_2 + 0x34) = x11_1 + x20
    *(x7_2 + 0x10) = x16_1 + var_74_1
    *(x7_2 + 0x14) = x27_1 + var_78_1
    *(x7_2 + 0x38) = x5_1 + x9_2
    *(x7_2 + 0x3c) = x24_1 + x7_3
    int32_t x9_1 = *(arg3 + 0x30)
    int32_t x11_3 = *(arg3 + 0x34)
    i += 1
    x10 = x9_1 + 1
    
    if (x9_1 u>= 0xffffffff)
        x20 = x11_3 + 1
    else
        x20 = x11_3
    
    *(arg3 + 0x30) = x10
    *(arg3 + 0x34) = x20
while (i != 8)

return result
