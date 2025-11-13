// 函数: _ZN5Botan9redc_p224ERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd6e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg1 + 8) - *arg1) s>> 2 u<= 0xd)
    *(arg1 + 0x10)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)

int32_t* x8_3 = *arg1
*(arg1 + 0x18) = -1
uint64_t x16 = zx.q(x8_3[6])
uint64_t x17 = zx.q(x8_3[7])
uint64_t x0_1 = zx.q(x8_3[8])
uint64_t x1_1 = zx.q(x8_3[9])
uint64_t x2 = zx.q(x8_3[0xa])
uint64_t x3 = zx.q(x8_3[0xb])
uint64_t x15 = zx.q(x8_3[5])
uint64_t x17_1 = zx.q(x8_3[0xc])
uint64_t x4 = zx.q(x8_3[0xd])
int64_t x9_7 = zx.q(*x8_3) - x17 - x3 + 1
int64_t x11_3 = zx.q(x8_3[1]) - x0_1 - x17_1 + (x9_7 s>> 0x20)
uint64_t x13_3 = zx.q(x8_3[3]) + x17 - x2 + x3
int64_t x12_3 = zx.q(x8_3[2]) - x1_1 - x4 + (x11_3 s>> 0x20)
uint64_t x14_2 = zx.q(x8_3[4]) + x0_1 - x3
*x8_3 = x9_7.d
x8_3[1] = x11_3.d
x8_3[2] = x12_3.d
x8_3[3] = (x13_3 + (x12_3 s>> 0x20) - -0xffffffff).d
int64_t x12_4 = x16 + x2 - x4 + ((x15 + x1_1 - x17_1 + x4 + ((x14_2 + x17_1
    + ((x13_3 + (x12_3 s>> 0x20) - -0xffffffff) s>> 0x20) - -0xffffffff) s>> 0x20) - -0xffffffff)
    s>> 0x20)
x8_3[4] = (x14_2 + x17_1 + ((x13_3 + (x12_3 s>> 0x20) - -0xffffffff) s>> 0x20) - -0xffffffff).d
x8_3[5] = (x15 + x1_1 - x17_1 + x4 + ((x14_2 + x17_1
    + ((x13_3 + (x12_3 s>> 0x20) - -0xffffffff) s>> 0x20) - -0xffffffff) s>> 0x20) - -0xffffffff).d
int64_t x20 = (x12_4 - -0xffffffff) s>> 0x20
x8_3[6] = (x12_4 - -0xffffffff).d
x8_3[7] = 0

if (x20 u>= 3)
    Botan::assertion_failure("S >= 0 && S <= 2", "Expected overflow", "redc_p224", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe937)
else
    void* x8_4 = *arg1
    int64_t x9_14 = (*(arg1 + 8) - x8_4) s>> 2
    
    if (x9_14 u> 7)
        if (x9_14 != 8)
            int64_t x2_1 = (x9_14 - 8) << 2
            
            if (x2_1 != 0)
                memset(x8_4 + 0x20, 0, x2_1)
                x8_4 = *arg1
        
        *(x8_4 + 0x1c) = 0
        int32_t* x9_16 = *arg1
        *(arg1 + 0x18) = -1
        int32_t x11_7 = *(&data_836f90 + x20 * 0x1c)
        int32_t x12_5 = *(x20 * 0x1c + 0x836f94)
        int32_t x15_4 = *x9_16
        int32_t x0_3 = x9_16[1]
        int32_t x13_4 = *(x20 * 0x1c + 0x836f98)
        int32_t x14_4 = *(x20 * 0x1c + 0x836f9c)
        int32_t x16_3 = *(x20 * 0x1c + 0x836fa0)
        int32_t x17_2 = *(x20 * 0x1c + 0x836fa4)
        int32_t x10_3 = *(x20 * 0x1c + 0x836fa8)
        int32_t x15_5 = x15_4 u< x11_7 ? 1 : 0
        int32_t x12_6 = x0_3 - x12_5
        int32_t x15_6 = x9_16[2]
        int32_t x1_2 = x9_16[3]
        *x9_16 = x15_4 - x11_7
        x9_16[1] = x12_6 - x15_5
        int32_t x11_10 = (x0_3 u< x12_5 ? 1 : 0) | (x12_6 u< x15_5 ? 1 : 0)
        int32_t x12_8 = x15_6 - x13_4
        int32_t x15_7 = x9_16[4]
        int32_t x0_5 = x9_16[5]
        int32_t x14_5 = x1_2 - x14_4
        int32_t x12_10 = (x15_6 u< x13_4 ? 1 : 0) | (x12_8 u< x11_10 ? 1 : 0)
        x9_16[2] = x12_8 - x11_10
        x9_16[3] = x14_5 - x12_10
        int32_t x11_12 = x15_7 - x16_3
        int32_t x13_7 = (x1_2 u< x14_4 ? 1 : 0) | (x14_5 u< x12_10 ? 1 : 0)
        int32_t x12_12 = x9_16[6]
        int32_t x15_8 = x9_16[7]
        int32_t x16_4 = x0_5 - x17_2
        int32_t x13_9 = (x15_7 u< x16_3 ? 1 : 0) | (x11_12 u< x13_7 ? 1 : 0)
        x9_16[4] = x11_12 - x13_7
        x9_16[5] = x16_4 - x13_9
        int32_t x10_4 = x12_12 - x10_3
        int32_t x11_14 = (x0_5 u< x17_2 ? 1 : 0) | (x16_4 u< x13_9 ? 1 : 0)
        int32_t x11_16 = (x12_12 u< x10_3 ? 1 : 0) | (x10_4 u< x11_14 ? 1 : 0)
        x9_16[6] = x10_4 - x11_14
        x9_16[7] = x15_8 - x11_16
        int32_t* x9_17 = *arg1
        *(arg1 + 0x18) = -1
        int32_t x8_5
        
        x8_5 = x15_8 u< x11_16 ? -1 : 0
        
        int32_t x10_6
        
        x10_6 = x15_8 u>= x11_16 ? -1 : 0
        
        int32_t x11_18 = *x9_17
        int32_t x12_14 = x9_17[1]
        int32_t x13_11 = x9_17[2]
        int32_t x14_9 = x9_17[3]
        int32_t x15_9 = x9_17[4]
        int32_t x16_6 = x9_17[5]
        int32_t x17_5 = x11_18 u>= 0xffffffff ? 1 : 0
        int32_t x0_7 = x12_14 + x17_5 u< x12_14 ? 1 : 0
        *x9_17 = (x11_18 & x10_6) | ((x11_18 + 1) & x8_5)
        x9_17[1] = (x12_14 & x10_6) | ((x12_14 + x17_5) & x8_5)
        int32_t x11_21 = x13_11 + x0_7 u< x13_11 ? 1 : 0
        uint64_t result = zx.q(x14_9) & zx.q(x10_6)
        int32_t x13_15 = (x14_9 u>= 1 ? 1 : 0) | (x14_9 - 1 + x11_21 u< x14_9 - 1 ? 1 : 0)
        x9_17[2] = (x13_11 & x10_6) | ((x13_11 + x0_7) & x8_5)
        x9_17[3] = result.d | ((x14_9 - 1 + x11_21) & x8_5)
        int32_t x12_21 = (x15_9 u>= 1 ? 1 : 0) | (x15_9 - 1 + x13_15 u< x15_9 - 1 ? 1 : 0)
        int32_t x13_18 = (x16_6 u>= 1 ? 1 : 0) | (x16_6 - 1 + x12_21 u< x16_6 - 1 ? 1 : 0)
        int32_t x14_13 = x9_17[6]
        int32_t x15_11 = x9_17[7]
        x9_17[4] = (x15_9 & x10_6) | ((x15_9 - 1 + x13_15) & x8_5)
        x9_17[5] = (x16_6 & x10_6) | ((x16_6 - 1 + x12_21) & x8_5)
        x9_17[6] = (x14_13 & x10_6) | ((x14_13 - 1 + x13_18) & x8_5)
        x9_17[7] = (x15_11 & x10_6) | ((x15_11
            + ((x14_13 u>= 1 ? 1 : 0) | (x14_13 - 1 + x13_18 u< x14_13 - 1 ? 1 : 0))) & x8_5)
        return result

Botan::BigInt* x0_8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_3
x0_8, x1_3 = Botan::assertion_failure("x.size() >= p224_limbs + 1", &data_793a18, "redc_p224", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe939)
return Botan::redc_p256(x0_8, x1_3) __tailcall
