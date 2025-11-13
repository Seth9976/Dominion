// 函数: _ZN5Botan9redc_p256ERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd71ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg1 + 8) - *arg1) s>> 2 u<= 0xf)
    *(arg1 + 0x10)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)

int32_t* x8_3 = *arg1
*(arg1 + 0x18) = -1
uint64_t x1_1 = zx.q(x8_3[8])
uint64_t x2 = zx.q(x8_3[9])
uint64_t x3 = zx.q(x8_3[0xa])
uint64_t x4 = zx.q(x8_3[0xb])
uint64_t x5 = zx.q(x8_3[0xc])
uint64_t x6 = zx.q(x8_3[0xd])
uint64_t x0_1 = zx.q(x8_3[7])
uint64_t x7 = zx.q(x8_3[0xe])
uint64_t x20 = zx.q(x8_3[0xf])
uint64_t x21 = x5 + x4
uint64_t x22 = x7 + x6
uint64_t x17_1 = zx.q(x8_3[6]) - x1_1
uint64_t x1_2 = x21 + x6
uint64_t x26 = x22 + x20
int64_t x9_8 = x1_1 - -0xfffffffa + zx.q(*x8_3) + x2 - x1_2 - x7
int64_t x11_3 = x3 - -0xffffffff + zx.q(x8_3[2]) + x4 - x26
int64_t x12_5 = x3 - -0xffffffff + zx.q(x8_3[1]) + x2 - x5 - x26 + (x9_8 s>> 0x20)
uint64_t x16_1 = zx.q(x8_3[5]) - x3
uint64_t x14_2 = zx.q(x8_3[4]) - x2 - x3
uint64_t x13_4 = zx.q(x8_3[3]) - x1_1 - x2 + x6 + (x21 << 1) - x20
*x8_3 = x9_8.d
x8_3[1] = x12_5.d
int64_t x9_9 = x11_3 + (x12_5 s>> 0x20)
uint64_t x25 = x20 << 1
x8_3[2] = x9_9.d
x8_3[3] = (x13_4 + (x9_9 s>> 0x20) + 5).d
int64_t x9_10 = x14_2 + x7 + ((x6 + x5) << 1) + ((x13_4 + (x9_9 s>> 0x20) + 5) s>> 0x20)
int64_t x11_6 = x16_1 - x4 + x20 + (x22 << 1) + (x9_10 s>> 0x20)
x8_3[4] = x9_10.d
x8_3[5] = x11_6.d
int64_t x20_1 = x1_1 - -0xfffffffa + x0_1 - x3 - x1_2 + x25 + x20
    + ((x17_1 - x2 + x6 + x7 * 3 + x25 + (x11_6 s>> 0x20) + 6) s>> 0x20)
x8_3[6] = (x17_1 - x2 + x6 + x7 * 3 + x25 + (x11_6 s>> 0x20) + 6).d
x8_3[7] = x20_1.d
void* x8_4 = *arg1
int64_t x9_15 = (*(arg1 + 8) - x8_4) s>> 2

if (x9_15 u<= 8)
    Botan::BigInt* x0_6
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_5
    x0_6, x1_5 = Botan::assertion_failure("x.size() >= p256_limbs + 1", &data_793a18, "redc_p256", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe9b9)
    return Botan::redc_p384(x0_6, x1_5) __tailcall

if (x9_15 != 9)
    int64_t x2_1 = (x9_15 - 9) << 2
    
    if (x2_1 != 0)
        memset(x8_4 + 0x24, 0, x2_1)
        x8_4 = *arg1

*(x8_4 + 0x20) = 0
uint32_t* x0_3 = *arg1
*(arg1 + 0x18) = -1
uint32_t x0_4 = Botan::bigint_sub2(x0_3, 9, (x20_1 s>> 0x20 << 5) + 0x837084, 8)
uint32_t* x1_3 = *arg1
*(arg1 + 0x18) = -1
return Botan::bigint_cnd_add(x0_4, x1_3, 9, &data_836fe4, 8) __tailcall
