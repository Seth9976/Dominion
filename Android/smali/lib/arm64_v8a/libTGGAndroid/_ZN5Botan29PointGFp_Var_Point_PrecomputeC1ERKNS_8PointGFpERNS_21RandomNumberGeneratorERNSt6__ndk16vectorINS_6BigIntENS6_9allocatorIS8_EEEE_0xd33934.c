// 函数: _ZN5Botan29PointGFp_Var_Point_PrecomputeC1ERKNS_8PointGFpERNS_21RandomNumberGeneratorERNSt6__ndk16vectorINS_6BigIntENS6_9allocatorIS8_EEEE
// 地址: 0xd33934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg2
*arg1 = x8
int64_t x9 = *(arg2 + 8)
*(arg1 + 8) = x9

if (x9 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x9 + 8) + 1, x9 + 8)
    while (i != 0)
    x8 = *arg1

int64_t* x0_1 = (*(*x8 + 0x10))(x8)
int64_t x8_2 = x0_1[3]

if (x8_2 == -1)
    int64_t x9_5 = *x0_1
    int64_t x11_1 = x0_1[1]
    int64_t x10_2 = x11_1 - x9_5
    
    if (x11_1 == x9_5)
        x8_2 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_2 s>= 0 ? x10_2 : -1
        
        int64_t x11_2 = x9_5 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_2 = x10_2 s>> 2
        int64_t x10_3
        
        x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
        
        int64_t i_5 = x12_2 * (x10_3 u>> 2)
        uint64_t x11_3 = 1
        int64_t i_1
        
        do
            int32_t x12_3 = *(x9_5 - 4 + (i_5 << 2))
            i_1 = i_5
            i_5 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i_1 != 1)
    
    x0_1[3] = x8_2

*(arg1 + 0x20) = 0
*(arg1 + 0x10) = x8_2
*(arg1 + 0x18) = 4
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
int64_t* entry_x3

if (((entry_x3[1] - *entry_x3) s>> 3) * -0x3333333333333333 u<= 7)
    std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::__append(entry_x3)
    *(arg1 + 0x18)

int64_t* var_78
std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::vector(&var_78)
int64_t var_100
Botan::PointGFp::PointGFp(&var_100)
int64_t* x8_7 = var_78
int64_t var_f8
int64_t var_f0
int64_t var_e8
int64_t var_e0
int64_t var_d8
int32_t var_d0
int64_t var_c8
int64_t var_c0
int64_t var_b8
int64_t var_b0
int32_t var_a8
int64_t var_a0
int64_t var_98
int64_t var_90
int64_t var_88
int32_t var_80

if (x8_7 != &var_100)
    int64_t x11_4 = *x8_7
    int64_t x10_8 = x8_7[1]
    *x8_7 = var_100
    x8_7[1] = var_f8
    var_100 = x11_4
    var_f8 = x10_8
    int128_t v0 = *(x8_7 + 0x10)
    x8_7[2] = var_f0
    x8_7[3] = var_e8
    var_f0.o = v0
    int64_t x11_5 = x8_7[4]
    int64_t x10_9 = x8_7[5]
    x8_7[4] = var_e0
    x8_7[5] = var_d8
    var_e0 = x11_5
    var_d8 = x10_9
    x8_7[6].d = var_d0
    var_d0 = x8_7[6].d
    v0 = *(x8_7 + 0x38)
    x8_7[7] = var_c8
    x8_7[8] = var_c0
    var_c8.o = v0
    int64_t x11_6 = x8_7[9]
    int64_t x10_11 = x8_7[0xa]
    x8_7[9] = var_b8
    x8_7[0xa] = var_b0
    var_b8 = x11_6
    var_b0 = x10_11
    x8_7[0xb].d = var_a8
    var_a8 = x8_7[0xb].d
    v0 = *(x8_7 + 0x60)
    x8_7[0xc] = var_a0
    x8_7[0xd] = var_98
    var_a0.o = v0
    int64_t x11_7 = x8_7[0xe]
    int64_t x10_13 = x8_7[0xf]
    x8_7[0xe] = var_90
    x8_7[0xf] = var_88
    var_90 = x11_7
    var_88 = x10_13
    x8_7[0x10].d = var_80
    var_80 = x8_7[0x10].d

Botan::PointGFp::~PointGFp()
Botan::PointGFp::operator=(&var_78[0x11])
int64_t* var_70

if (((var_70 - var_78) s>> 3) * -0xf0f0f0f0f0f0f0f u>= 3)
    int64_t x21_1 = 0
    int64_t i_2 = 2
    
    do
        Botan::PointGFp::PointGFp(&var_100)
        Botan::PointGFp::mult2(&var_100)
        int64_t* x8_10 = var_78
        void var_210
        
        if (&var_210 - x8_10 != x21_1)
            void* x8_11 = x8_10 + x21_1
            int64_t x10_15 = *(x8_11 + 0x110)
            *(x8_11 + 0x110) = var_100
            var_100 = x10_15
            int64_t x10_16 = *(x8_11 + 0x118)
            *(x8_11 + 0x118) = var_f8
            var_f8 = x10_16
            int64_t x10_17 = *(x8_11 + 0x120)
            *(x8_11 + 0x120) = var_f0
            var_f0 = x10_17
            int64_t x10_18 = *(x8_11 + 0x128)
            *(x8_11 + 0x128) = var_e8
            var_e8 = x10_18
            int64_t x10_19 = *(x8_11 + 0x130)
            *(x8_11 + 0x130) = var_e0
            var_e0 = x10_19
            int64_t x10_20 = *(x8_11 + 0x138)
            *(x8_11 + 0x138) = var_d8
            var_d8 = x10_20
            int32_t x10_21 = *(x8_11 + 0x140)
            *(x8_11 + 0x140) = var_d0
            var_d0 = x10_21
            int64_t x10_22 = *(x8_11 + 0x148)
            *(x8_11 + 0x148) = var_c8
            var_c8 = x10_22
            int64_t x10_23 = *(x8_11 + 0x150)
            *(x8_11 + 0x150) = var_c0
            var_c0 = x10_23
            int64_t x10_24 = *(x8_11 + 0x158)
            *(x8_11 + 0x158) = var_b8
            var_b8 = x10_24
            int64_t x10_25 = *(x8_11 + 0x160)
            *(x8_11 + 0x160) = var_b0
            var_b0 = x10_25
            int32_t x10_26 = *(x8_11 + 0x168)
            *(x8_11 + 0x168) = var_a8
            var_a8 = x10_26
            int64_t x10_27 = *(x8_11 + 0x170)
            *(x8_11 + 0x170) = var_a0
            var_a0 = x10_27
            int64_t x10_28 = *(x8_11 + 0x178)
            *(x8_11 + 0x178) = var_98
            var_98 = x10_28
            int64_t x10_29 = *(x8_11 + 0x180)
            *(x8_11 + 0x180) = var_90
            var_90 = x10_29
            int64_t x10_30 = *(x8_11 + 0x188)
            *(x8_11 + 0x188) = var_88
            var_88 = x10_30
            int32_t x10_31 = *(x8_11 + 0x190)
            *(x8_11 + 0x190) = var_80
            var_80 = x10_31
        
        Botan::PointGFp::~PointGFp()
        Botan::PointGFp::PointGFp(&var_100)
        Botan::PointGFp::add(&var_100, arg2)
        int64_t* x8_14 = var_78
        void var_298
        
        if (&var_298 - x8_14 != x21_1)
            void* x8_15 = x8_14 + x21_1
            int64_t x10_32 = *(x8_15 + 0x198)
            *(x8_15 + 0x198) = var_100
            var_100 = x10_32
            int64_t x10_33 = *(x8_15 + 0x1a0)
            *(x8_15 + 0x1a0) = var_f8
            var_f8 = x10_33
            int64_t x10_34 = *(x8_15 + 0x1a8)
            *(x8_15 + 0x1a8) = var_f0
            var_f0 = x10_34
            int64_t x10_35 = *(x8_15 + 0x1b0)
            *(x8_15 + 0x1b0) = var_e8
            var_e8 = x10_35
            int64_t x10_36 = *(x8_15 + 0x1b8)
            *(x8_15 + 0x1b8) = var_e0
            var_e0 = x10_36
            int64_t x10_37 = *(x8_15 + 0x1c0)
            *(x8_15 + 0x1c0) = var_d8
            var_d8 = x10_37
            int32_t x10_38 = *(x8_15 + 0x1c8)
            *(x8_15 + 0x1c8) = var_d0
            var_d0 = x10_38
            int64_t x10_39 = *(x8_15 + 0x1d0)
            *(x8_15 + 0x1d0) = var_c8
            var_c8 = x10_39
            int64_t x10_40 = *(x8_15 + 0x1d8)
            *(x8_15 + 0x1d8) = var_c0
            var_c0 = x10_40
            int64_t x10_41 = *(x8_15 + 0x1e0)
            *(x8_15 + 0x1e0) = var_b8
            var_b8 = x10_41
            int64_t x10_42 = *(x8_15 + 0x1e8)
            *(x8_15 + 0x1e8) = var_b0
            var_b0 = x10_42
            int32_t x10_43 = *(x8_15 + 0x1f0)
            *(x8_15 + 0x1f0) = var_a8
            var_a8 = x10_43
            int64_t x10_44 = *(x8_15 + 0x1f8)
            *(x8_15 + 0x1f8) = var_a0
            var_a0 = x10_44
            int64_t x10_45 = *(x8_15 + 0x200)
            *(x8_15 + 0x200) = var_98
            var_98 = x10_45
            int64_t x10_46 = *(x8_15 + 0x208)
            *(x8_15 + 0x208) = var_90
            var_90 = x10_46
            int64_t x10_47 = *(x8_15 + 0x210)
            *(x8_15 + 0x210) = var_88
            var_88 = x10_47
            int32_t x10_48 = *(x8_15 + 0x218)
            *(x8_15 + 0x218) = var_80
            var_80 = x10_48
        
        Botan::PointGFp::~PointGFp()
        i_2 += 2
        x21_1 += 0x110
    while (i_2 u< ((var_70 - var_78) s>> 3) * -0xf0f0f0f0f0f0f0f)

int32_t result = (*(*arg3 + 0x48))()
int64_t* x8_20
void* x9_70
int64_t* x26

if ((result & 1) == 0)
    x26 = var_78
    x8_20 = var_70
    x9_70 = x8_20 - x26
else
    Botan::RandomNumberGenerator* x22_1 = *entry_x3
    *(x22_1 + 0x108) = -1
    int64_t* x20_1 = var_78
    (*(**x20_1 + 0x10))()
    result = Botan::BigInt::bits()
    x26 = var_78
    x8_20 = var_70
    x9_70 = x8_20 - x26
    
    if (x9_70 != 0x88)
        bool fp_1 = result.b - 1
        int64_t i_3 = 1
        int64_t x25_1 = 0x98
        
        do
            Botan::BigInt::randomize(x22_1, arg3, fp_1)
            int32_t* x8_22 = *x22_1
            int32_t x26_1
            
            if (*(x22_1 + 8) == x8_22)
                bool cond:3_1 = *(x22_1 + 0x10) == x8_22
                *(x22_1 + 0x18) = -1
                
                if (cond:3_1)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        x22_1)
                    x26_1 = 1
                else
                    x26_1 = 1
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        x22_1)
            else
                int32_t x8_23 = *x8_22
                *(x22_1 + 0x18) = -1
                x26_1 = x8_23 | 1
            
            **x22_1 = x26_1
            int64_t* x0_15 = *x20_1
            int64_t x2_2 = *x22_1
            (*(*x0_15 + 0x88))(x0_15, x22_1 + 0x28, x2_2, (*(x22_1 + 8) - x2_2) s>> 2, x22_1 + 0xf0)
            int64_t* x0_16 = *x20_1
            int64_t x2_3 = *x22_1
            (*(*x0_16 + 0x80))(x0_16, x22_1 + 0x50, x2_3, (*(x22_1 + 8) - x2_3) s>> 2, 
                x22_1 + 0x28, x22_1 + 0xf0)
            int64_t* x0_17 = *x20_1
            void* x8_30 = var_78 + x25_1
            int64_t x2_4 = *x8_30
            (*(*x0_17 + 0x80))(x0_17, x22_1 + 0x78, x2_4, (*(x8_30 + 8) - x2_4) s>> 2, 
                x22_1 + 0x28, x22_1 + 0xf0)
            int64_t* x0_18 = *x20_1
            void* x8_34 = var_78 + x25_1
            int64_t x2_5 = *(x8_34 + 0x28)
            (*(*x0_18 + 0x80))(x0_18, x22_1 + 0xa0, x2_5, (*(x8_34 + 0x30) - x2_5) s>> 2, 
                x22_1 + 0x50, x22_1 + 0xf0)
            int64_t* x0_19 = *x20_1
            void* x8_38 = var_78 + x25_1
            int64_t x2_6 = *(x8_38 + 0x50)
            result = (*(*x0_19 + 0x80))(x0_19, x22_1 + 0xc8, x2_6, (*(x8_38 + 0x58) - x2_6) s>> 2, 
                x22_1, x22_1 + 0xf0)
            void* x8_42 = var_78 + x25_1
            int64_t x10_50 = *x8_42
            *x8_42 = *(x22_1 + 0x78)
            int64_t x9_86 = *(x22_1 + 0x80)
            i_3 += 1
            *(x22_1 + 0x78) = x10_50
            int64_t x10_51 = *(x8_42 + 8)
            *(x8_42 + 8) = x9_86
            int64_t x9_87 = *(x22_1 + 0x88)
            x25_1 += 0x88
            *(x22_1 + 0x80) = x10_51
            int64_t x10_52 = *(x8_42 + 0x10)
            *(x8_42 + 0x10) = x9_87
            int64_t x9_88 = *(x22_1 + 0x90)
            *(x22_1 + 0x88) = x10_52
            int64_t x10_53 = *(x8_42 + 0x18)
            *(x8_42 + 0x18) = x9_88
            int32_t x9_89 = *(x22_1 + 0x98)
            *(x22_1 + 0x90) = x10_53
            int32_t x10_54 = *(x8_42 + 0x20)
            *(x8_42 + 0x20) = x9_89
            int64_t x9_90 = *(x22_1 + 0xa0)
            *(x22_1 + 0x98) = x10_54
            int64_t x10_55 = *(x8_42 + 0x28)
            *(x8_42 + 0x28) = x9_90
            int64_t x9_91 = *(x22_1 + 0xa8)
            *(x22_1 + 0xa0) = x10_55
            int64_t x10_56 = *(x8_42 + 0x30)
            *(x8_42 + 0x30) = x9_91
            int64_t x9_92 = *(x22_1 + 0xb0)
            *(x22_1 + 0xa8) = x10_56
            int64_t x10_57 = *(x8_42 + 0x38)
            *(x8_42 + 0x38) = x9_92
            int64_t x9_93 = *(x22_1 + 0xb8)
            *(x22_1 + 0xb0) = x10_57
            int64_t x10_58 = *(x8_42 + 0x40)
            *(x8_42 + 0x40) = x9_93
            int32_t x9_94 = *(x22_1 + 0xc0)
            *(x22_1 + 0xb8) = x10_58
            int32_t x10_59 = *(x8_42 + 0x48)
            *(x8_42 + 0x48) = x9_94
            int64_t x9_95 = *(x22_1 + 0xc8)
            *(x22_1 + 0xc0) = x10_59
            int64_t x10_60 = *(x8_42 + 0x50)
            *(x8_42 + 0x50) = x9_95
            int64_t x9_96 = *(x22_1 + 0xd0)
            *(x22_1 + 0xc8) = x10_60
            int64_t x10_61 = *(x8_42 + 0x58)
            *(x8_42 + 0x58) = x9_96
            int64_t x9_97 = *(x22_1 + 0xd8)
            *(x22_1 + 0xd0) = x10_61
            int64_t x10_62 = *(x8_42 + 0x60)
            *(x8_42 + 0x60) = x9_97
            int64_t x9_98 = *(x22_1 + 0xe0)
            *(x22_1 + 0xd8) = x10_62
            int64_t x10_63 = *(x8_42 + 0x68)
            *(x8_42 + 0x68) = x9_98
            int32_t x9_99 = *(x22_1 + 0xe8)
            *(x22_1 + 0xe0) = x10_63
            int32_t x10_64 = *(x8_42 + 0x70)
            *(x8_42 + 0x70) = x9_99
            *(x22_1 + 0xe8) = x10_64
            x26 = var_78
            x8_20 = var_70
            x9_70 = x8_20 - x26
        while (i_3 != (x9_70 s>> 3) * -0xf0f0f0f0f0f0f0f)

uint64_t x21_2 = *(arg1 + 0x20)
int64_t x9_102 = (x9_70 s>> 3) * *(arg1 + 0x10) * -0x2d2d2d2d2d2d2d2d
int64_t x10_69 = (*(arg1 + 0x28) - x21_2) s>> 2

if (x9_102 u> x10_69)
    result =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1 + 0x20)
    x21_2 = *(arg1 + 0x20)
    x26 = var_78
    x8_20 = var_70
else if (x9_102 u< x10_69)
    *(arg1 + 0x28) = x21_2 + (x9_102 << 2)

int64_t* x22_2

if (x8_20 == x26)
    x22_2 = x26
    
    if (x26 == 0)
        return result
else
    *(arg1 + 0x10)
    int64_t i_4 = 0
    int64_t x23_2 = 0x60
    
    do
        Botan::BigInt::encode_words(x26 + x23_2 - 0x50, x21_2)
        Botan::BigInt::encode_words(var_78 + x23_2 - 0x28, x21_2 + (*(arg1 + 0x10) << 2))
        result = Botan::BigInt::encode_words(var_78 + x23_2, x21_2 + (*(arg1 + 0x10) << 3))
        x26 = var_78
        x22_2 = var_70
        i_4 += 1
        x23_2 += 0x88
        x21_2 += *(arg1 + 0x10) * 0xc
    while (i_4 != ((x22_2 - x26) s>> 3) * -0xf0f0f0f0f0f0f0f)
    
    if (x26 == 0)
        return result

int64_t* x0_25

if (x22_2 == x26)
    x0_25 = x26
else
    do
        x22_2 -= 0x88
        Botan::PointGFp::~PointGFp()
    while (x26 != x22_2)
    
    x0_25 = var_78

int64_t* var_70_1 = x26
return operator delete(x0_25)
