// 函数: _ZN5Botan9redc_p384ERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd740c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg1 + 8) - *arg1) s>> 2 u<= 0x17)
    *(arg1 + 0x10)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)

int32_t* x8_3 = *arg1
*(arg1 + 0x18) = -1
uint64_t x7 = zx.q(x8_3[0xc])
uint64_t x20 = zx.q(x8_3[0xd])
uint64_t x12 = zx.q(x8_3[0x16])
uint64_t x10_2 = zx.q(x8_3[0x17])
uint64_t x21 = zx.q(x8_3[0xe])
uint64_t x22 = zx.q(x8_3[0xf])
uint64_t x27 = zx.q(x8_3[0x14])
uint64_t x28 = zx.q(x8_3[0x15])
uint64_t x23 = zx.q(x8_3[0x10])
uint64_t x24 = zx.q(x8_3[0x11])
uint64_t x25 = zx.q(x8_3[0x12])
uint64_t x26 = zx.q(x8_3[0x13])
uint64_t x3 = zx.q(x8_3[8])
uint64_t x4 = zx.q(x8_3[9])
int64_t x13_4 = x27 - -0xffffffff + zx.q(*x8_3) + x7 + x28 - x10_2
uint64_t x15_3 = x10_2 + x21 + zx.q(x8_3[2]) - x20 - x28
int64_t x14_5 = x12 + x20 + zx.q(x8_3[1]) - x7 - x27 + x10_2 + (x13_4 s>> 0x20)
int64_t x16_5 = x27 - -0xffffffff + zx.q(x8_3[3]) + x7 - x21 + x22 + x28
uint64_t x5_3 = x25 + zx.q(x8_3[0xa]) + x26 - x28
int64_t x6_2 = x27 - -0xffffffff + zx.q(x8_3[0xb]) + x26
int64_t x2_3 = x22 - -0xffffffff + zx.q(x8_3[7]) + x23 - x25
int64_t x1_5 = x22 - -0xffffffff + zx.q(x8_3[6]) + x21 - x24 + x25
uint64_t x17_6 = zx.q(x8_3[4]) + x7 + x20 - x22 + x23 + x27 + (x28 << 1)
int64_t x0_6 = x28 - -0xffffffff + zx.q(x8_3[5]) + x20 + x21 - x23 + x24
*x8_3 = x13_4.d
x8_3[1] = x14_5.d
int64_t x13_5 = x15_3 + (x14_5 s>> 0x20)
uint64_t lr_4 = x10_2 << 1
int64_t x12_2 = x16_5 - x12 - x10_2 + (x13_5 s>> 0x20)
x8_3[2] = x13_5.d
x8_3[3] = x12_2.d
int64_t x10_4 =
    x0_6 + (x12 << 1) + x10_2 + ((x17_6 + x12 - lr_4 + (x12_2 s>> 0x20) - -0xfffffffe) s>> 0x20)
x8_3[4] = (x17_6 + x12 - lr_4 + (x12_2 s>> 0x20) - -0xfffffffe).d
x8_3[5] = x10_4.d
int64_t x10_5 = x1_5 + x12 + lr_4 + (x10_4 s>> 0x20)
int64_t x11_1 = x2_3 + x26 + x10_2 + (x10_5 s>> 0x20)
x8_3[6] = x10_5.d
x8_3[7] = x11_1.d
int64_t x10_6 = x27 - -0xffffffff + x3 + x23 + x24 - x26 + (x11_1 s>> 0x20)
int64_t x11_2 = x28 - -0xffffffff + x4 + x24 + x25 - x27 + (x10_6 s>> 0x20)
x8_3[8] = x10_6.d
x8_3[9] = x11_2.d
int64_t x10_8 = x6_2 - x12 + x10_2 + ((x5_3 + x12 + (x11_2 s>> 0x20) - -0xffffffff) s>> 0x20)
int64_t x21_1 = x10_8 s>> 0x20
x8_3[0xa] = (x5_3 + x12 + (x11_2 s>> 0x20) - -0xffffffff).d
x8_3[0xb] = x10_8.d

if (x21_1 u>= 5)
    Botan::assertion_failure("S >= 0 && S <= 4", "Expected overflow", "redc_p384", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xea50)
else
    void* x8_4 = *arg1
    int64_t x9_7 = (*(arg1 + 8) - x8_4) s>> 2
    
    if (x9_7 u> 0xc)
        if (x9_7 != 0xd)
            int64_t x2_6 = (x9_7 - 0xd) << 2
            
            if (x2_6 != 0)
                memset(x8_4 + 0x34, 0, x2_6)
                x8_4 = *arg1
        
        *(x8_4 + 0x30) = 0
        uint32_t* x0_8 = *arg1
        *(arg1 + 0x18) = -1
        uint32_t x0_9 = Botan::bigint_sub2(x0_8, 0xd, &data_837144 + x21_1 * 0x30, 0xc)
        uint32_t* x1_7 = *arg1
        *(arg1 + 0x18) = -1
        return Botan::bigint_cnd_add(x0_9, x1_7, 0xd, &data_837144, 0xc) __tailcall

Botan::BigInt* x0_11
Botan::BigInt* x1_9
x0_11, x1_9 = Botan::assertion_failure("x.size() >= p384_limbs + 1", &data_793a18, "redc_p384", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xea52)
return Botan::lcm(x0_11, x1_9) __tailcall
