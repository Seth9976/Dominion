// 函数: _ZN5Botan8PointGFp6mult2iEmRNSt6__ndk16vectorINS_6BigIntENS1_9allocatorIS3_EEEE
// 地址: 0xd2f140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x50)
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >& i_3 = arg2

if (x8_1 == -1)
    int64_t x9_1 = *(arg1 + 0x38)
    int64_t x11_1 = *(arg1 + 0x40)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 != x9_1)
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_2 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_2 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
        *(arg1 + 0x50) = x8_2
        
        if (x8_2 != 0)
            goto label_d2f1f0
        
        goto label_d2f210
    
    *(arg1 + 0x50) = 0
label_d2f210:
    int64_t var_a8
    int128_t v0
    int128_t v1
    v0, v1 = Botan::PointGFp::PointGFp(&var_a8)
    
    if (&var_a8 != arg1)
        int64_t x11_4 = *arg1
        int64_t x9_3 = *(arg1 + 8)
        *arg1 = var_a8
        int64_t var_a0
        *(arg1 + 8) = var_a0
        var_a8 = x11_4
        int64_t var_a0_1 = x9_3
        v1 = *(arg1 + 0x10)
        int128_t var_98
        *(arg1 + 0x10) = var_98
        int128_t var_98_1 = v1
        int64_t x11_5 = *(arg1 + 0x20)
        int64_t x9_4 = *(arg1 + 0x28)
        int64_t var_88
        *(arg1 + 0x20) = var_88
        int64_t var_80
        *(arg1 + 0x28) = var_80
        int64_t var_88_1 = x11_5
        int64_t var_80_1 = x9_4
        int32_t x9_5 = *(arg1 + 0x30)
        int32_t var_78
        *(arg1 + 0x30) = var_78
        int32_t var_78_1 = x9_5
        v1 = *(arg1 + 0x38)
        int128_t var_70
        *(arg1 + 0x38) = var_70
        int128_t var_70_1 = v1
        int64_t x11_6 = *(arg1 + 0x48)
        int64_t x9_6 = *(arg1 + 0x50)
        int64_t var_60
        *(arg1 + 0x48) = var_60
        int64_t var_58
        *(arg1 + 0x50) = var_58
        int64_t var_60_1 = x11_6
        int64_t var_58_1 = x9_6
        int32_t x9_7 = *(arg1 + 0x58)
        int32_t var_50
        *(arg1 + 0x58) = var_50
        int32_t var_50_1 = x9_7
        v1 = *(arg1 + 0x60)
        int128_t var_48
        *(arg1 + 0x60) = var_48
        int128_t var_48_1 = v1
        int64_t x11_7 = *(arg1 + 0x70)
        int64_t x9_8 = *(arg1 + 0x78)
        int64_t var_38
        *(arg1 + 0x70) = var_38
        int64_t var_30
        *(arg1 + 0x78) = var_30
        int64_t var_38_1 = x11_7
        int64_t var_30_1 = x9_8
        int32_t x9_9 = *(arg1 + 0x80)
        int32_t var_28
        *(arg1 + 0x80) = var_28
        int32_t var_28_1 = x9_9
    
    Botan::PointGFp::~PointGFp()
    return 

if (x8_1 == 0)
    goto label_d2f210

label_d2f1f0:
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >& i_1

do
    Botan::PointGFp::mult2(arg1)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
