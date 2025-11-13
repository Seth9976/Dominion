// 函数: _ZN5Botan30PointGFp_Base_Point_PrecomputeC1ERKNS_8PointGFpERKNS_15Modular_ReducerE
// 地址: 0xd322d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg2
int64_t entry_x2
*(arg1 + 8) = entry_x2
int64_t* x0_1 = (*(**arg2 + 0x10))()
int64_t x8_2 = x0_1[3]

if (x8_2 == -1)
    int64_t x9_1 = *x0_1
    int64_t x11_1 = x0_1[1]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        x8_2 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_2 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_3 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
    
    x0_1[3] = x8_2

*(arg1 + 0x18) = 0
*(arg1 + 0x10) = x8_2
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
void* x0_2
int128_t v0
x0_2, v0 = operator new(0x140)
v0.q = 0
v0:8.q = 0
void* var_68 = x0_2 + 0x140
__builtin_memset(x0_2, 0, 0x20)
*(x0_2 + 0x18) = -1
*(x0_2 + 0x20) = 0
*(x0_2 + 0x20) = 1
__builtin_memset(x0_2 + 0x28, 0, 0x20)
*(x0_2 + 0x40) = -1
*(x0_2 + 0x48) = 0
*(x0_2 + 0x48) = 1
__builtin_memset(x0_2 + 0x50, 0, 0x20)
*(x0_2 + 0x68) = -1
*(x0_2 + 0x70) = 0
*(x0_2 + 0x70) = 1
__builtin_memset(x0_2 + 0x78, 0, 0x20)
*(x0_2 + 0x90) = -1
*(x0_2 + 0x98) = 0
*(x0_2 + 0x98) = 1
__builtin_memset(x0_2 + 0xa0, 0, 0x20)
*(x0_2 + 0xb8) = -1
*(x0_2 + 0xc0) = 0
*(x0_2 + 0xc0) = 1
__builtin_memset(x0_2 + 0xc8, 0, 0x20)
*(x0_2 + 0xe0) = -1
*(x0_2 + 0xe8) = 0
*(x0_2 + 0xe8) = 1
__builtin_memset(x0_2 + 0xf0, 0, 0x20)
*(x0_2 + 0x108) = -1
*(x0_2 + 0x110) = 0
*(x0_2 + 0x110) = 1
__builtin_memset(x0_2 + 0x118, 0, 0x28)
*(x0_2 + 0x130) = -1
*(x0_2 + 0x138) = 1
(*(**arg2 + 0x10))(v0)
int64_t x8_8 = Botan::BigInt::bits() + ((Botan::BigInt::bits() + 1) u>> 1) + 1
int64_t x10_9

if (x8_8 == x8_8 u/ 3 * 3)
    x10_9 = 0
else
    x10_9 = (x8_8 u% 3) ^ 3

int64_t x20 = x10_9 + x8_8
uint64_t i_4 = x20 u/ 3
void* var_90
std::__ndk1::vector<Botan::PointGFp, std::__ndk1::allocator<Botan::PointGFp> >::vector(&var_90)
int64_t var_118
Botan::PointGFp::PointGFp(&var_118)
int128_t var_1a0
__builtin_memset(&var_1a0, 0, 0x28)
int64_t var_178 = -1
int32_t var_170 = 1
int64_t var_168_1
__builtin_memset(&var_168_1, 0, 0x18)
int64_t var_150 = -1
int32_t var_148 = 1
int64_t var_140_1
__builtin_memset(&var_140_1, 0, 0x18)
int64_t var_128 = -1
int32_t var_120 = 1
int128_t var_230
__builtin_memset(&var_230, 0, 0x28)
int64_t var_208 = -1
int32_t var_200 = 1
int64_t var_1f8_1
__builtin_memset(&var_1f8_1, 0, 0x18)
int64_t var_1e0 = -1
int32_t var_1d8 = 1
int64_t var_1d0_1
__builtin_memset(&var_1d0_1, 0, 0x18)
int64_t var_1b8 = -1
int32_t var_1b0 = 1

if (x20 u>= 3)
    int64_t x25_1 = 0
    uint64_t i_1
    
    do
        Botan::PointGFp::operator=(&var_1a0)
        Botan::PointGFp::mult2(&var_1a0)
        Botan::PointGFp::operator=(&var_230)
        Botan::PointGFp::mult2(&var_230)
        Botan::PointGFp::operator=(var_90 + x25_1)
        void* x8_12 = var_90
        
        if (&var_230:8 - x8_12 != x25_1)
            void* x8_13 = x8_12 + x25_1
            int64_t x10_10 = *(x8_13 + 0x88)
            *(x8_13 + 0x88) = var_1a0.q
            var_1a0.q = x10_10
            int64_t x10_11 = *(x8_13 + 0x90)
            *(x8_13 + 0x90) = var_1a0:8.q
            var_1a0:8.q = x10_11
            int64_t x10_12 = *(x8_13 + 0x98)
            int128_t var_190_1
            *(x8_13 + 0x98) = var_190_1.q
            int64_t x9_9 = var_190_1:8.q
            var_190_1.q = x10_12
            int64_t x10_13 = *(x8_13 + 0xa0)
            *(x8_13 + 0xa0) = x9_9
            var_190_1:8.q = x10_13
            int64_t x10_14 = *(x8_13 + 0xa8)
            int64_t var_180_1
            *(x8_13 + 0xa8) = var_180_1
            var_180_1 = x10_14
            int64_t x10_15 = *(x8_13 + 0xb0)
            *(x8_13 + 0xb0) = var_178
            var_178 = x10_15
            int32_t x10_16 = *(x8_13 + 0xb8)
            *(x8_13 + 0xb8) = var_170
            var_170 = x10_16
            int64_t x10_17 = *(x8_13 + 0xc0)
            *(x8_13 + 0xc0) = var_168_1
            var_168_1 = x10_17
            int64_t x10_18 = *(x8_13 + 0xc8)
            int64_t var_160_1
            *(x8_13 + 0xc8) = var_160_1
            var_160_1 = x10_18
            int64_t x10_19 = *(x8_13 + 0xd0)
            int64_t var_158_1
            *(x8_13 + 0xd0) = var_158_1
            var_158_1 = x10_19
            int64_t x10_20 = *(x8_13 + 0xd8)
            *(x8_13 + 0xd8) = var_150
            var_150 = x10_20
            int32_t x10_21 = *(x8_13 + 0xe0)
            *(x8_13 + 0xe0) = var_148
            var_148 = x10_21
            int64_t x10_22 = *(x8_13 + 0xe8)
            *(x8_13 + 0xe8) = var_140_1
            var_140_1 = x10_22
            int64_t x10_23 = *(x8_13 + 0xf0)
            int64_t var_138_1
            *(x8_13 + 0xf0) = var_138_1
            var_138_1 = x10_23
            int64_t x10_24 = *(x8_13 + 0xf8)
            int64_t var_130_1
            *(x8_13 + 0xf8) = var_130_1
            var_130_1 = x10_24
            int64_t x10_25 = *(x8_13 + 0x100)
            *(x8_13 + 0x100) = var_128
            var_128 = x10_25
            int32_t x10_26 = *(x8_13 + 0x108)
            *(x8_13 + 0x108) = var_120
            x8_12 = var_90
            var_120 = x10_26
        
        int64_t var_2b8
        Botan::PointGFp::PointGFp(&var_2b8)
        Botan::PointGFp::add(&var_2b8, x8_12 + x25_1)
        void* x8_14 = var_90
        void var_3c8
        int64_t var_2b0
        int64_t var_2a8
        int64_t var_2a0
        int64_t var_298
        int64_t var_290
        int32_t var_288
        int64_t var_280
        int64_t var_278
        int64_t var_270
        int64_t var_268
        int32_t var_260
        int64_t var_258
        int64_t var_250
        int64_t var_248
        int64_t var_240
        int32_t var_238
        
        if (&var_3c8 - x8_14 != x25_1)
            void* x8_15 = x8_14 + x25_1
            int64_t x10_27 = *(x8_15 + 0x110)
            *(x8_15 + 0x110) = var_2b8
            var_2b8 = x10_27
            int64_t x10_28 = *(x8_15 + 0x118)
            *(x8_15 + 0x118) = var_2b0
            var_2b0 = x10_28
            int64_t x10_29 = *(x8_15 + 0x120)
            *(x8_15 + 0x120) = var_2a8
            var_2a8 = x10_29
            int64_t x10_30 = *(x8_15 + 0x128)
            *(x8_15 + 0x128) = var_2a0
            var_2a0 = x10_30
            int64_t x10_31 = *(x8_15 + 0x130)
            *(x8_15 + 0x130) = var_298
            var_298 = x10_31
            int64_t x10_32 = *(x8_15 + 0x138)
            *(x8_15 + 0x138) = var_290
            var_290 = x10_32
            int32_t x10_33 = *(x8_15 + 0x140)
            *(x8_15 + 0x140) = var_288
            var_288 = x10_33
            int64_t x10_34 = *(x8_15 + 0x148)
            *(x8_15 + 0x148) = var_280
            var_280 = x10_34
            int64_t x10_35 = *(x8_15 + 0x150)
            *(x8_15 + 0x150) = var_278
            var_278 = x10_35
            int64_t x10_36 = *(x8_15 + 0x158)
            *(x8_15 + 0x158) = var_270
            var_270 = x10_36
            int64_t x10_37 = *(x8_15 + 0x160)
            *(x8_15 + 0x160) = var_268
            var_268 = x10_37
            int32_t x10_38 = *(x8_15 + 0x168)
            *(x8_15 + 0x168) = var_260
            var_260 = x10_38
            int64_t x10_39 = *(x8_15 + 0x170)
            *(x8_15 + 0x170) = var_258
            var_258 = x10_39
            int64_t x10_40 = *(x8_15 + 0x178)
            *(x8_15 + 0x178) = var_250
            var_250 = x10_40
            int64_t x10_41 = *(x8_15 + 0x180)
            *(x8_15 + 0x180) = var_248
            var_248 = x10_41
            int64_t x10_42 = *(x8_15 + 0x188)
            *(x8_15 + 0x188) = var_240
            var_240 = x10_42
            int32_t x10_43 = *(x8_15 + 0x190)
            *(x8_15 + 0x190) = var_238
            var_238 = x10_43
        
        Botan::PointGFp::~PointGFp()
        Botan::PointGFp::operator=(var_90 + x25_1 + 0x198)
        void* x21_2 = var_90 + x25_1
        Botan::PointGFp::PointGFp(&var_2b8)
        Botan::PointGFp::add(&var_2b8, x21_2)
        void* x8_19 = var_90
        void var_4d8
        
        if (&var_4d8 - x8_19 != x25_1)
            void* x8_20 = x8_19 + x25_1
            int64_t x10_44 = *(x8_20 + 0x220)
            *(x8_20 + 0x220) = var_2b8
            var_2b8 = x10_44
            int64_t x10_45 = *(x8_20 + 0x228)
            *(x8_20 + 0x228) = var_2b0
            var_2b0 = x10_45
            int64_t x10_46 = *(x8_20 + 0x230)
            *(x8_20 + 0x230) = var_2a8
            var_2a8 = x10_46
            int64_t x10_47 = *(x8_20 + 0x238)
            *(x8_20 + 0x238) = var_2a0
            var_2a0 = x10_47
            int64_t x10_48 = *(x8_20 + 0x240)
            *(x8_20 + 0x240) = var_298
            var_298 = x10_48
            int64_t x10_49 = *(x8_20 + 0x248)
            *(x8_20 + 0x248) = var_290
            var_290 = x10_49
            int32_t x10_50 = *(x8_20 + 0x250)
            *(x8_20 + 0x250) = var_288
            var_288 = x10_50
            int64_t x10_51 = *(x8_20 + 0x258)
            *(x8_20 + 0x258) = var_280
            var_280 = x10_51
            int64_t x10_52 = *(x8_20 + 0x260)
            *(x8_20 + 0x260) = var_278
            var_278 = x10_52
            int64_t x10_53 = *(x8_20 + 0x268)
            *(x8_20 + 0x268) = var_270
            var_270 = x10_53
            int64_t x10_54 = *(x8_20 + 0x270)
            *(x8_20 + 0x270) = var_268
            var_268 = x10_54
            int32_t x10_55 = *(x8_20 + 0x278)
            *(x8_20 + 0x278) = var_260
            var_260 = x10_55
            int64_t x10_56 = *(x8_20 + 0x280)
            *(x8_20 + 0x280) = var_258
            var_258 = x10_56
            int64_t x10_57 = *(x8_20 + 0x288)
            *(x8_20 + 0x288) = var_250
            var_250 = x10_57
            int64_t x10_58 = *(x8_20 + 0x290)
            *(x8_20 + 0x290) = var_248
            var_248 = x10_58
            int64_t x10_59 = *(x8_20 + 0x298)
            *(x8_20 + 0x298) = var_240
            var_240 = x10_59
            int32_t x10_60 = *(x8_20 + 0x2a0)
            *(x8_20 + 0x2a0) = var_238
            var_238 = x10_60
        
        Botan::PointGFp::~PointGFp()
        void* x21_3 = var_90 + x25_1
        Botan::PointGFp::PointGFp(&var_2b8)
        Botan::PointGFp::add(&var_2b8, x21_3 + 0x88)
        void* x8_22 = var_90
        void var_560
        
        if (&var_560 - x8_22 != x25_1)
            void* x8_23 = x8_22 + x25_1
            int64_t x10_61 = *(x8_23 + 0x2a8)
            *(x8_23 + 0x2a8) = var_2b8
            var_2b8 = x10_61
            int64_t x10_62 = *(x8_23 + 0x2b0)
            *(x8_23 + 0x2b0) = var_2b0
            var_2b0 = x10_62
            int64_t x10_63 = *(x8_23 + 0x2b8)
            *(x8_23 + 0x2b8) = var_2a8
            var_2a8 = x10_63
            int64_t x10_64 = *(x8_23 + 0x2c0)
            *(x8_23 + 0x2c0) = var_2a0
            var_2a0 = x10_64
            int64_t x10_65 = *(x8_23 + 0x2c8)
            *(x8_23 + 0x2c8) = var_298
            var_298 = x10_65
            int64_t x10_66 = *(x8_23 + 0x2d0)
            *(x8_23 + 0x2d0) = var_290
            var_290 = x10_66
            int32_t x10_67 = *(x8_23 + 0x2d8)
            *(x8_23 + 0x2d8) = var_288
            var_288 = x10_67
            int64_t x10_68 = *(x8_23 + 0x2e0)
            *(x8_23 + 0x2e0) = var_280
            var_280 = x10_68
            int64_t x10_69 = *(x8_23 + 0x2e8)
            *(x8_23 + 0x2e8) = var_278
            var_278 = x10_69
            int64_t x10_70 = *(x8_23 + 0x2f0)
            *(x8_23 + 0x2f0) = var_270
            var_270 = x10_70
            int64_t x10_71 = *(x8_23 + 0x2f8)
            *(x8_23 + 0x2f8) = var_268
            var_268 = x10_71
            int32_t x10_72 = *(x8_23 + 0x300)
            *(x8_23 + 0x300) = var_260
            var_260 = x10_72
            int64_t x10_73 = *(x8_23 + 0x308)
            *(x8_23 + 0x308) = var_258
            var_258 = x10_73
            int64_t x10_74 = *(x8_23 + 0x310)
            *(x8_23 + 0x310) = var_250
            var_250 = x10_74
            int64_t x10_75 = *(x8_23 + 0x318)
            *(x8_23 + 0x318) = var_248
            var_248 = x10_75
            int64_t x10_76 = *(x8_23 + 0x320)
            *(x8_23 + 0x320) = var_240
            var_240 = x10_76
            int32_t x10_77 = *(x8_23 + 0x328)
            *(x8_23 + 0x328) = var_238
            var_238 = x10_77
        
        Botan::PointGFp::~PointGFp()
        void* x21_4 = var_90 + x25_1
        Botan::PointGFp::PointGFp(&var_2b8)
        Botan::PointGFp::add(&var_2b8, x21_4 + 0x110)
        void* x8_25 = var_90
        void var_5e8
        
        if (&var_5e8 - x8_25 != x25_1)
            void* x8_26 = x8_25 + x25_1
            int64_t x10_78 = *(x8_26 + 0x330)
            *(x8_26 + 0x330) = var_2b8
            var_2b8 = x10_78
            int64_t x10_79 = *(x8_26 + 0x338)
            *(x8_26 + 0x338) = var_2b0
            var_2b0 = x10_79
            int64_t x10_80 = *(x8_26 + 0x340)
            *(x8_26 + 0x340) = var_2a8
            var_2a8 = x10_80
            int64_t x10_81 = *(x8_26 + 0x348)
            *(x8_26 + 0x348) = var_2a0
            var_2a0 = x10_81
            int64_t x10_82 = *(x8_26 + 0x350)
            *(x8_26 + 0x350) = var_298
            var_298 = x10_82
            int64_t x10_83 = *(x8_26 + 0x358)
            *(x8_26 + 0x358) = var_290
            var_290 = x10_83
            int32_t x10_84 = *(x8_26 + 0x360)
            *(x8_26 + 0x360) = var_288
            var_288 = x10_84
            int64_t x10_85 = *(x8_26 + 0x368)
            *(x8_26 + 0x368) = var_280
            var_280 = x10_85
            int64_t x10_86 = *(x8_26 + 0x370)
            *(x8_26 + 0x370) = var_278
            var_278 = x10_86
            int64_t x10_87 = *(x8_26 + 0x378)
            *(x8_26 + 0x378) = var_270
            var_270 = x10_87
            int64_t x10_88 = *(x8_26 + 0x380)
            *(x8_26 + 0x380) = var_268
            var_268 = x10_88
            int32_t x10_89 = *(x8_26 + 0x388)
            *(x8_26 + 0x388) = var_260
            var_260 = x10_89
            int64_t x10_90 = *(x8_26 + 0x390)
            *(x8_26 + 0x390) = var_258
            var_258 = x10_90
            int64_t x10_91 = *(x8_26 + 0x398)
            *(x8_26 + 0x398) = var_250
            var_250 = x10_91
            int64_t x10_92 = *(x8_26 + 0x3a0)
            *(x8_26 + 0x3a0) = var_248
            var_248 = x10_92
            int64_t x10_93 = *(x8_26 + 0x3a8)
            *(x8_26 + 0x3a8) = var_240
            var_240 = x10_93
            int32_t x10_94 = *(x8_26 + 0x3b0)
            *(x8_26 + 0x3b0) = var_238
            var_238 = x10_94
        
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = Botan::PointGFp::~PointGFp()
        int64_t x11_5 = var_230:8.q
        var_230.q = var_118
        int64_t var_110
        var_230:8.q = var_110
        int128_t var_220_1
        v1_1 = var_220_1
        int128_t var_108
        var_220_1 = var_108
        var_118 = var_230.q
        var_110 = x11_5
        int64_t var_210_1
        int64_t x8_28 = var_210_1
        int64_t x9_96 = var_208
        int64_t var_f8
        var_210_1 = var_f8
        int64_t var_f0
        var_208 = var_f0
        int32_t x10_96 = var_200
        int32_t var_e8
        var_200 = var_e8
        var_108 = v1_1
        var_f8 = x8_28
        var_f0 = x9_96
        var_e8 = x10_96
        int128_t var_e0
        v1_1 = var_e0
        var_e0 = var_1f8_1.o
        var_1f8_1.o = v1_1
        int64_t var_1e8_1
        int64_t x13_3 = var_1e8_1
        int64_t x14_2 = var_1e0
        int64_t var_d0
        var_1e8_1 = var_d0
        int64_t var_c8
        var_1e0 = var_c8
        int32_t x8_30 = var_1d8
        int32_t var_c0
        var_1d8 = var_c0
        int128_t var_b8
        var_1d0_1.o = var_b8
        int64_t var_1c0_1
        int64_t x9_98 = var_1c0_1
        int64_t x10_98 = var_1b8
        int64_t var_a8
        var_1c0_1 = var_a8
        int64_t var_a0
        var_1b8 = var_a0
        int32_t var_98
        int32_t x11_7 = var_98
        var_c0 = x8_30
        var_a8 = x9_98
        var_d0 = x13_3
        var_c8 = x14_2
        var_a0 = x10_98
        var_b8 = var_1d0_1.o
        var_98 = var_1b0
        var_1b0 = x11_7
        Botan::PointGFp::mult2(&var_118)
        i_1 = i_4
        i_4 -= 1
        x25_1 += 0x3b8
    while (i_1 != 1)

*(x0_2 + 0x18) = -1
Botan::PointGFp::force_all_affine(&var_90, x0_2)
int64_t var_88
int64_t x9_99 = var_88
void* x8_32 = var_90
uint64_t x21_5 = *(arg1 + 0x18)
int64_t x10_102 = ((x9_99 - x8_32) s>> 3) * *(arg1 + 0x10) * -0x1e1e1e1e1e1e1e1e
int64_t x11_9 = (*(arg1 + 0x20) - x21_5) s>> 2

if (x10_102 u> x11_9)
    std::__ndk1::vector<uint32_t, std::__ndk1::allocator<uint32_t> >::__append(arg1 + 0x18)
    x9_99 = var_88
    x21_5 = *(arg1 + 0x18)
    x8_32 = var_90
else if (x10_102 u< x11_9)
    *(arg1 + 0x20) = x21_5 + (x10_102 << 2)

if (x9_99 != x8_32)
    *(arg1 + 0x10)
    int64_t i_2 = 0
    int64_t x22_1 = 0x38
    
    do
        Botan::BigInt::encode_words(x8_32 + x22_1 - 0x28, x21_5)
        int64_t x21_6 = x21_5 + (*(arg1 + 0x10) << 2)
        Botan::BigInt::encode_words(var_90 + x22_1, x21_6)
        x8_32 = var_90
        i_2 += 1
        x22_1 += 0x88
        x21_5 = x21_6 + (*(arg1 + 0x10) << 2)
    while (i_2 != ((var_88 - x8_32) s>> 3) * -0xf0f0f0f0f0f0f0f)

Botan::PointGFp::~PointGFp()
Botan::PointGFp::~PointGFp()
int64_t result = Botan::PointGFp::~PointGFp()
void* x20_1 = var_90

if (x20_1 != 0)
    int64_t x19_1 = var_88
    void* x0_29
    
    if (x19_1 == x20_1)
        x0_29 = x20_1
    else
        do
            x19_1 -= 0x88
            Botan::PointGFp::~PointGFp()
        while (x20_1 != x19_1)
        
        x0_29 = var_90
    
    void* var_88_1 = x20_1
    result = operator delete(x0_29)

if (x0_2 == 0)
    return result

void* x8_36 = x0_2 + 0x140
void* x0_31

if (x8_36 == x0_2)
    x0_31 = x0_2
else
    void* x20_2 = x8_36
    
    do
        x20_2 -= 0x28
        void* x0_30 = *x20_2
        
        if (x0_30 != 0)
            int64_t x9_104 = *(x8_36 - 0x18)
            *(x8_36 - 0x20) = x0_30
            Botan::deallocate_memory(x0_30, (x9_104 - x0_30) s>> 2, 4)
        
        x8_36 = x20_2
    while (x0_2 != x20_2)
    
    x0_31 = x0_2

void* var_70_1 = x0_2
return operator delete(x0_31)
