// 函数: _ZN5Botan9redc_p192ERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd6b78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg1 + 8) - *arg1) s>> 2 u<= 0xb)
    *(arg1 + 0x10)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)

int32_t* x8_3 = *arg1
*(arg1 + 0x18) = -1
uint64_t x15 = zx.q(x8_3[6])
uint64_t x16 = zx.q(x8_3[7])
uint64_t x17 = zx.q(x8_3[0xa])
uint64_t x1_1 = zx.q(x8_3[0xb])
uint64_t x13 = zx.q(x8_3[4])
uint64_t x14 = zx.q(x8_3[5])
uint64_t x17_1 = x17 + zx.q(x8_3[8])
uint64_t x1_2 = x1_1 + zx.q(x8_3[9])
uint64_t x9_5 = x17 + x15 + zx.q(*x8_3)
uint64_t x10_4 = x1_1 + x16 + zx.q(x8_3[1]) + (x9_5 u>> 0x20)
uint64_t x11_2 = x17_1 + zx.q(x8_3[2]) + x15
uint64_t x12_2 = x1_2 + zx.q(x8_3[3]) + x16
*x8_3 = x9_5.d
x8_3[1] = x10_4.d
uint64_t x9_6 = x11_2 + (x10_4 u>> 0x20)
uint64_t x10_5 = x12_2 + (x9_6 u>> 0x20)
x8_3[2] = x9_6.d
x8_3[3] = x10_5.d
uint64_t x9_7 = x17_1 + x13 + (x10_5 u>> 0x20)
uint64_t x10_6 = x1_2 + x14 + (x9_7 u>> 0x20)
uint64_t x20 = x10_6 u>> 0x20
x8_3[4] = x9_7.d
x8_3[5] = x10_6.d

if (x20 u>= 3)
    Botan::assertion_failure("S <= 2", "Expected overflow", "redc_p192", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe8d1)
else
    void* x8_4 = *arg1
    int64_t x9_10 = (*(arg1 + 8) - x8_4) s>> 2
    
    if (x9_10 u> 6)
        if (x9_10 != 7)
            int64_t x2_1 = (x9_10 - 7) << 2
            
            if (x2_1 != 0)
                memset(x8_4 + 0x1c, 0, x2_1)
                x8_4 = *arg1
        
        *(x8_4 + 0x18) = 0
        int32_t* x11_3 = *arg1
        *(arg1 + 0x18) = -1
        int32_t x10_7 = *(&data_836f48 + x20 * 0x18)
        int32_t x12_3 = *(x20 * 0x18 + 0x836f4c)
        int32_t x15_1 = *x11_3
        int32_t x16_1 = x11_3[1]
        int32_t x13_2 = *(x20 * 0x18 + 0x836f50)
        int32_t x14_2 = *(x20 * 0x18 + 0x836f54)
        int32_t x17_2 = *(x20 * 0x18 + 0x836f58)
        int32_t x9_13 = *(x20 * 0x18 + 0x836f5c)
        int32_t x15_2 = x15_1 u< x10_7 ? 1 : 0
        int32_t x12_4 = x16_1 - x12_3
        int32_t x15_3 = x11_3[2]
        uint64_t result = zx.q(x11_3[3])
        *x11_3 = x15_1 - x10_7
        x11_3[1] = x12_4 - x15_2
        int32_t x10_10 = (x16_1 u< x12_3 ? 1 : 0) | (x12_4 u< x15_2 ? 1 : 0)
        int32_t x12_6 = x15_3 - x13_2
        int32_t x15_4 = x11_3[4]
        int32_t x16_3 = x11_3[5]
        int32_t x14_3 = result.d - x14_2
        int32_t x12_8 = (x15_3 u< x13_2 ? 1 : 0) | (x12_6 u< x10_10 ? 1 : 0)
        x11_3[2] = x12_6 - x10_10
        x11_3[3] = x14_3 - x12_8
        int32_t x12_10 = x15_4 - x17_2
        int32_t x10_13 = (result.d u< x14_2 ? 1 : 0) | (x14_3 u< x12_8 ? 1 : 0)
        int32_t x14_4 = x11_3[6]
        int32_t x9_14 = x16_3 - x9_13
        int32_t x12_12 = (x15_4 u< x17_2 ? 1 : 0) | (x12_10 u< x10_13 ? 1 : 0)
        x11_3[4] = x12_10 - x10_13
        x11_3[5] = x9_14 - x12_12
        int32_t x9_16 = (x16_3 u< x9_13 ? 1 : 0) | (x9_14 u< x12_12 ? 1 : 0)
        x11_3[6] = x14_4 - x9_16
        int32_t* x9_18 = *arg1
        *(arg1 + 0x18) = -1
        int32_t x8_5
        
        x8_5 = x14_4 u< x9_16 ? -1 : 0
        
        int32_t x10_15
        
        x10_15 = x14_4 u>= x9_16 ? -1 : 0
        
        int32_t x11_4 = *x9_18
        int32_t x12_14 = x9_18[1]
        int32_t x13_7 = x9_18[2]
        int32_t x14_5 = x9_18[3]
        int32_t x17_3 = x11_4 u>= 1 ? 1 : 0
        int32_t x15_8 = (x12_14 u>= 1 ? 1 : 0) | (x12_14 - 1 + x17_3 u< x12_14 - 1 ? 1 : 0)
        *x9_18 = (x11_4 & x10_15) | ((x11_4 - 1) & x8_5)
        x9_18[1] = (x12_14 & x10_15) | ((x12_14 - 1 + x17_3) & x8_5)
        int32_t x12_20 = (x13_7 u> 1 ? 1 : 0) | (x13_7 - 2 + x15_8 u< x13_7 - 2 ? 1 : 0)
        int32_t x13_10 = (x14_5 u>= 1 ? 1 : 0) | (x14_5 - 1 + x12_20 u< x14_5 - 1 ? 1 : 0)
        int32_t x15_11 = x9_18[4]
        int32_t x16_6 = x9_18[5]
        x9_18[2] = (x13_7 & x10_15) | ((x13_7 - 2 + x15_8) & x8_5)
        x9_18[3] = (x14_5 & x10_15) | ((x14_5 - 1 + x12_20) & x8_5)
        int32_t x11_11 = (x15_11 u>= 1 ? 1 : 0) | (x15_11 - 1 + x13_10 u< x15_11 - 1 ? 1 : 0)
        int32_t x14_9 = x9_18[6]
        x9_18[4] = (x15_11 & x10_15) | ((x15_11 - 1 + x13_10) & x8_5)
        x9_18[5] = (x16_6 & x10_15) | ((x16_6 - 1 + x11_11) & x8_5)
        x9_18[6] = (x14_9 & x10_15) | ((x14_9
            + ((x16_6 u>= 1 ? 1 : 0) | (x16_6 - 1 + x11_11 u< x16_6 - 1 ? 1 : 0))) & x8_5)
        return result

Botan::BigInt* x0_4
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_3
x0_4, x1_3 = Botan::assertion_failure("x.size() >= p192_limbs + 1", &data_793a18, "redc_p192", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe8d3)
return Botan::redc_p224(x0_4, x1_3) __tailcall
