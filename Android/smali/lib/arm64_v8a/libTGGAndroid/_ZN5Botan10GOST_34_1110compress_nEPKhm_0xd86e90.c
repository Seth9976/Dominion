// 函数: _ZN5Botan10GOST_34_1110compress_nEPKhm
// 地址: 0xd86e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t entry_x2

if (entry_x2 != 0)
    uint8_t const* x21_1 = arg1
    int64_t x13_1 = 0
    void* x22_1 = &arg1[8]
    int128_t var_90
    int128_t* x8_2 = &var_90 | 2
    void* var_180_1 = x22_1
    uint8_t const* var_b8_1 = arg1
    
    do
        char* x8_53 = *(x21_1 + 0x58)
        int64_t x14_21 = arg2 + (x13_1 << 5)
        int64_t x23_26 = 0
        uint32_t x9_51 = zx.d(*x8_53) + zx.d(*x14_21)
        *x8_53 = x9_51.b
        void* x8_54 = *(x21_1 + 0x58)
        uint32_t x9_53 = zx.d(*(x8_54 + 1)) + (x9_51 u>> 8)
            + zx.d(*(arg2 + (1 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_54 + 1) = x9_53.b
        void* x8_55 = *(x21_1 + 0x58)
        uint32_t x9_55 = zx.d(*(x8_55 + 2)) + (x9_53 u>> 8)
            + zx.d(*(arg2 + (2 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_55 + 2) = x9_55.b
        void* x8_56 = *(x21_1 + 0x58)
        uint32_t x9_57 = zx.d(*(x8_56 + 3)) + (x9_55 u>> 8)
            + zx.d(*(arg2 + (3 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_56 + 3) = x9_57.b
        void* x8_57 = *(x21_1 + 0x58)
        uint32_t x9_59 = zx.d(*(x8_57 + 4)) + (x9_57 u>> 8)
            + zx.d(*(arg2 + (4 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_57 + 4) = x9_59.b
        void* x8_58 = *(x21_1 + 0x58)
        uint32_t x9_61 = zx.d(*(x8_58 + 5)) + (x9_59 u>> 8)
            + zx.d(*(arg2 + (5 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_58 + 5) = x9_61.b
        void* x8_59 = *(x21_1 + 0x58)
        uint32_t x9_63 = zx.d(*(x8_59 + 6)) + (x9_61 u>> 8)
            + zx.d(*(arg2 + (6 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_59 + 6) = x9_63.b
        void* x8_60 = *(x21_1 + 0x58)
        uint32_t x9_65 = zx.d(*(x8_60 + 7)) + (x9_63 u>> 8)
            + zx.d(*(arg2 + (7 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_60 + 7) = x9_65.b
        void* x8_61 = *(x21_1 + 0x58)
        uint32_t x9_67 = zx.d(*(x8_61 + 8)) + (x9_65 u>> 8)
            + zx.d(*(arg2 + (8 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_61 + 8) = x9_67.b
        void* x8_62 = *(x21_1 + 0x58)
        uint32_t x9_69 = zx.d(*(x8_62 + 9)) + (x9_67 u>> 8)
            + zx.d(*(arg2 + (9 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_62 + 9) = x9_69.b
        void* x8_63 = *(x21_1 + 0x58)
        uint32_t x9_71 = zx.d(*(x8_63 + 0xa)) + (x9_69 u>> 8)
            + zx.d(*(arg2 + (0xa | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_63 + 0xa) = x9_71.b
        void* x8_64 = *(x21_1 + 0x58)
        uint32_t x9_73 = zx.d(*(x8_64 + 0xb)) + (x9_71 u>> 8)
            + zx.d(*(arg2 + (0xb | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_64 + 0xb) = x9_73.b
        void* x8_65 = *(x21_1 + 0x58)
        uint32_t x9_75 = zx.d(*(x8_65 + 0xc)) + (x9_73 u>> 8)
            + zx.d(*(arg2 + (0xc | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_65 + 0xc) = x9_75.b
        void* x8_66 = *(x21_1 + 0x58)
        uint32_t x9_77 = zx.d(*(x8_66 + 0xd)) + (x9_75 u>> 8)
            + zx.d(*(arg2 + (0xd | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_66 + 0xd) = x9_77.b
        void* x8_67 = *(x21_1 + 0x58)
        uint32_t x9_79 = zx.d(*(x8_67 + 0xe)) + (x9_77 u>> 8)
            + zx.d(*(arg2 + (0xe | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_67 + 0xe) = x9_79.b
        void* x8_68 = *(x21_1 + 0x58)
        uint32_t x9_81 = zx.d(*(x8_68 + 0xf)) + (x9_79 u>> 8)
            + zx.d(*(arg2 + (0xf | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_68 + 0xf) = x9_81.b
        void* x8_69 = *(x21_1 + 0x58)
        uint32_t x9_83 = zx.d(*(x8_69 + 0x10)) + (x9_81 u>> 8)
            + zx.d(*(arg2 + (0x10 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_69 + 0x10) = x9_83.b
        void* x8_70 = *(x21_1 + 0x58)
        uint32_t x9_85 = zx.d(*(x8_70 + 0x11)) + (x9_83 u>> 8)
            + zx.d(*(arg2 + (0x11 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_70 + 0x11) = x9_85.b
        void* x8_71 = *(x21_1 + 0x58)
        uint32_t x9_87 = zx.d(*(x8_71 + 0x12)) + (x9_85 u>> 8)
            + zx.d(*(arg2 + (0x12 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_71 + 0x12) = x9_87.b
        void* x8_72 = *(x21_1 + 0x58)
        uint32_t x9_89 = zx.d(*(x8_72 + 0x13)) + (x9_87 u>> 8)
            + zx.d(*(arg2 + (0x13 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_72 + 0x13) = x9_89.b
        void* x8_73 = *(x21_1 + 0x58)
        uint32_t x9_91 = zx.d(*(x8_73 + 0x14)) + (x9_89 u>> 8)
            + zx.d(*(arg2 + (0x14 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_73 + 0x14) = x9_91.b
        void* x8_74 = *(x21_1 + 0x58)
        uint32_t x9_93 = zx.d(*(x8_74 + 0x15)) + (x9_91 u>> 8)
            + zx.d(*(arg2 + (0x15 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_74 + 0x15) = x9_93.b
        void* x8_75 = *(x21_1 + 0x58)
        uint32_t x9_95 = zx.d(*(x8_75 + 0x16)) + (x9_93 u>> 8)
            + zx.d(*(arg2 + (0x16 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_75 + 0x16) = x9_95.b
        void* x8_76 = *(x21_1 + 0x58)
        uint32_t x9_97 = zx.d(*(x8_76 + 0x17)) + (x9_95 u>> 8)
            + zx.d(*(arg2 + (0x17 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_76 + 0x17) = x9_97.b
        void* x8_77 = *(x21_1 + 0x58)
        uint32_t x9_99 = zx.d(*(x8_77 + 0x18)) + (x9_97 u>> 8)
            + zx.d(*(arg2 + (0x18 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_77 + 0x18) = x9_99.b
        void* x8_78 = *(x21_1 + 0x58)
        uint32_t x9_101 = zx.d(*(x8_78 + 0x19)) + (x9_99 u>> 8)
            + zx.d(*(arg2 + (0x19 | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_78 + 0x19) = x9_101.b
        void* x8_79 = *(x21_1 + 0x58)
        uint32_t x9_103 = zx.d(*(x8_79 + 0x1a)) + (x9_101 u>> 8)
            + zx.d(*(arg2 + (0x1a | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_79 + 0x1a) = x9_103.b
        void* x8_80 = *(x21_1 + 0x58)
        uint32_t x9_105 = zx.d(*(x8_80 + 0x1b)) + (x9_103 u>> 8)
            + zx.d(*(arg2 + (0x1b | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_80 + 0x1b) = x9_105.b
        void* x8_81 = *(x21_1 + 0x58)
        uint32_t x9_107 = zx.d(*(x8_81 + 0x1c)) + (x9_105 u>> 8)
            + zx.d(*(arg2 + (0x1c | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_81 + 0x1c) = x9_107.b
        void* x8_82 = *(x21_1 + 0x58)
        uint32_t x9_109 = zx.d(*(x8_82 + 0x1d)) + (x9_107 u>> 8)
            + zx.d(*(arg2 + (0x1d | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_82 + 0x1d) = x9_109.b
        void* x8_83 = *(x21_1 + 0x58)
        uint32_t x9_111 = zx.d(*(x8_83 + 0x1e)) + (x9_109 u>> 8)
            + zx.d(*(arg2 + (0x1e | (0x7ffffffffffffff & x13_1) << 5)))
        *(x8_83 + 0x1e) = x9_111.b
        void* x8_84 = *(x21_1 + 0x58)
        *(x8_84 + 0x1f) =
            *(x8_84 + 0x1f) + (x9_111 u>> 8).b + *(arg2 + (0x1f | (0x7ffffffffffffff & x13_1) << 5))
        __builtin_memset(&var_90, 0, 0x20)
        int64_t* x8_85 = *(x21_1 + 0x70)
        uint64_t x10_85 = *(x14_21 + 8)
        uint64_t x11_61 = *(x14_21 + 0x10)
        uint64_t x12_27 = *(x14_21 + 0x18)
        uint64_t x13_20 = *x8_85
        uint64_t x14_22 = x8_85[1]
        uint64_t x15_30 = x8_85[2]
        uint64_t x16_18 = x8_85[3]
        uint64_t fp_10 = _byteswap(*x14_21)
        uint64_t x24_14 = _byteswap(x10_85)
        uint64_t x8_86 = _byteswap(x11_61)
        uint64_t x20_19 = _byteswap(x13_20)
        uint64_t x19_19 = _byteswap(x14_22)
        uint64_t x28_13 = _byteswap(x15_30)
        uint64_t x27_17 = _byteswap(x16_18)
        uint64_t x10_86 = _byteswap(x12_27)
        
        while (true)
            uint64_t x25_16 = x8_86
            uint64_t x8_87 = fp_10 ^ x20_19
            uint8_t var_b0 = (x8_87 u>> 0x38).b
            uint8_t var_ac_1 = (x8_87 u>> 0x30).b
            uint8_t var_a8_1 = (x8_87 u>> 0x28).b
            uint8_t var_a4_1 = (x8_87 u>> 0x20).b
            uint8_t var_a0_1 = (x8_87 u>> 0x18).b
            uint8_t var_9c_1 = (x8_87 u>> 0x10).b
            uint64_t x9_122 = x24_14 ^ x19_19
            char var_94_1 = (x8_87.d).b
            uint8_t var_98_1 = (x8_87 u>> 8).b
            uint8_t var_af_1 = (x9_122 u>> 0x38).b
            uint8_t var_ab_1 = (x9_122 u>> 0x30).b
            uint8_t var_a7_1 = (x9_122 u>> 0x28).b
            uint8_t var_a3_1 = (x9_122 u>> 0x20).b
            uint8_t var_9f_1 = (x9_122 u>> 0x18).b
            uint8_t var_9b_1 = (x9_122 u>> 0x10).b
            uint64_t x8_95 = x25_16 ^ x28_13
            char var_93_1 = (x9_122.d).b
            uint8_t var_97_1 = (x9_122 u>> 8).b
            uint8_t var_ae_1 = (x8_95 u>> 0x38).b
            uint8_t var_aa_1 = (x8_95 u>> 0x30).b
            uint8_t var_a6_1 = (x8_95 u>> 0x28).b
            uint8_t var_a2_1 = (x8_95 u>> 0x20).b
            uint8_t var_9e_1 = (x8_95 u>> 0x18).b
            uint8_t var_9a_1 = (x8_95 u>> 0x10).b
            uint64_t x9_130 = x10_86 ^ x27_17
            char var_92_1 = (x8_95.d).b
            uint8_t var_96_1 = (x8_95 u>> 8).b
            uint8_t var_ad_1 = (x9_130 u>> 0x38).b
            uint8_t var_a9_1 = (x9_130 u>> 0x30).b
            uint8_t var_a5_1 = (x9_130 u>> 0x28).b
            uint8_t var_a1_1 = (x9_130 u>> 0x20).b
            uint8_t var_9d_1 = (x9_130 u>> 0x18).b
            uint8_t var_99_1 = (x9_130 u>> 0x10).b
            uint64_t x26_13 = x10_86
            uint8_t var_95_1 = (x9_130 u>> 8).b
            char var_91_1 = (x9_130.d).b
            Botan::SymmetricAlgorithm::set_key(x22_1, &var_b0)
            int128_t v0_1
            int128_t v1_1
            v0_1, v1_1 =
                (*(*(x21_1 + 8) + 0x48))(x22_1, *(x21_1 + 0x70) + x23_26, &var_90 + x23_26, 1)
            
            if (x23_26 == 0x18)
                break
            
            uint64_t x9_115 = x19_19 ^ x20_19
            
            if (x23_26 == 8)
                x27_17 ^= 0xffff00ff0000ff
                x19_19 ^= 0xff00ff00ff00ff
                x28_13 ^= 0xff00ff00ff00ff00
                x9_115 ^= 0xff000000ffff00ff
            
            x20_19 = x19_19
            x19_19 = x28_13
            x28_13 = x27_17
            x8_86 = x24_14 ^ fp_10
            x10_86 = x25_16 ^ x24_14
            x23_26 += 8
            x27_17 = x9_115
            x24_14 = x26_13
            fp_10 = x25_16
        
        int128_t var_80_1
        uint64_t x8_3 = zx.q(var_80_1:8.b)
        char x11_1 = var_80_1:0xc.b
        char x3_1 = var_90.b
        char x16_1 = var_90:2.b
        uint64_t x15_1 = zx.q(var_80_1:0xe.b)
        char x4_1 = var_90:4.b
        char x12_1 = var_90:6.b
        char x9_1 = var_80_1:9.b
        char x10_1 = var_80_1:0xa.b
        uint32_t x0 = zx.d(var_80_1:0xd.b)
        uint32_t x1 = zx.d(var_90:1.b)
        uint32_t x13_2 = zx.d(var_90:3.b)
        char x5_1 = var_90:0xc.b
        char x14_1 = var_80_1:0xf.b
        char x26_1 = x16_1 ^ x3_1
        char x27_1 = x11_1 ^ x8_3.b
        uint32_t x2 = zx.d(var_90:5.b)
        char x17_1 = var_90:7.b
        uint32_t x6_1 = zx.d(var_90:0xd.b)
        char x26_2 = x26_1 ^ x4_1
        uint32_t x20_1 = x13_2 ^ x1
        char x19_1 = x10_1 ^ x8_3.b
        char x28_1 = x0.b ^ x9_1
        uint32_t x22_2 = x20_1 ^ x2
        char x13_3 = x4_1 ^ x3_1
        char x9_4 = var_80_1:0xb.b
        char x8_6 = x2.b
        char x19_2 = x19_1 ^ x11_1
        char x24_2 = x11_1 ^ x10_1 ^ x15_1.b
        char x10_2 = x8_6 ^ x1.b
        char x8_7 = x13_2.b
        char x24_4 = x9_4 ^ x9_1
        char x21_2 = var_90:8.b
        char x24_5 = x24_4 ^ x0.b
        char x12_3 = x0.b ^ x9_4 ^ x14_1
        char lr_4 = var_90:9.b
        char fp_4 = var_90:0xa.b
        char x23_6 = var_90:0xe.b
        char x27_4 = var_90:0xb.b
        char x24_8 = var_90:0xf.b
        char x23_7 = var_80_1.b
        char x24_9 = var_80_1:1.b
        char x21_5 = var_80_1:2.b
        uint32_t x23_8 = zx.d(var_80_1:3.b)
        int64_t x15_7 = (-0xff0001 & ((-0xff000001 & ((-0xff00000001 & ((-0xff0000000001
            & ((0xffffffffffffff & x15_1 << 0x30) | zx.q(x14_1) << 0x38)) | zx.q(x0.b) << 0x28))
            | zx.q(x11_1) << 0x20)) | zx.q(x9_4) << 0x18)) | zx.q(x10_1) << 0x10
        char x21_6 = var_80_1:4.b
        uint32_t x23_9 = zx.d(var_80_1:5.b)
        char x21_7 = var_80_1:6.b
        char x22_5 = var_80_1:7.b
        int64_t x3_9 = (-0xff01 & (zx.q(x19_1) ^ zx.q(x3_1) ^ zx.q(x12_1) ^ zx.q(x5_1) ^ zx.q(x23_6)
            ^ zx.q(x21_5) ^ zx.q(x21_7))) | (zx.q(x24_4) ^ zx.q(x1.b) ^ zx.q(x17_1) ^ zx.q(x6_1.b)
            ^ zx.q(x24_8) ^ zx.q(x23_8.b) ^ zx.q(x22_5)) << 8
        int64_t x14_8 = (-0xff0000000001 & ((0xffffffffffffff
            & (zx.q(x19_2) ^ zx.q(x13_3) ^ zx.q(x21_2) ^ zx.q(x5_1)) << 0x30)
            | (zx.q(x24_5) ^ zx.q(x10_2) ^ zx.q(lr_4) ^ zx.q(x6_1.b)) << 0x38))
            | (zx.q(x24_5) ^ zx.q(x14_1) ^ zx.q(x17_1) ^ zx.q(x10_2) ^ zx.q(x27_4)) << 0x28
        int64_t x9_8 = (0xffffffffffffff & (zx.q(x27_1) ^ zx.q(x15_1.b) ^ zx.q(x26_1) ^ zx.q(fp_4)
            ^ zx.q(x5_1) ^ zx.q(x23_7) ^ zx.q(x21_6)) << 0x30) | (zx.q(x28_1) ^ zx.q(x14_1)
            ^ zx.q(x20_1.b) ^ zx.q(x27_4) ^ zx.q(x6_1.b) ^ zx.q(x24_9) ^ zx.q(x23_9.b)) << 0x38
        int64_t x11_7 = *x14_21 ^ ((-0xff01 & x15_7) | zx.q(x9_1) << 8 | x8_3)
        int64_t x3_11 = (-0xff000001 & ((-0xff0001 & x3_9)
            | (zx.q(x19_2) ^ zx.q(x16_1) ^ zx.q(x21_2) ^ zx.q(x23_6) ^ zx.q(x23_7) ^ zx.q(x21_6))
            << 0x10))
            | (zx.q(x24_5) ^ zx.q(x8_7) ^ zx.q(lr_4) ^ zx.q(x24_8) ^ zx.q(x24_9) ^ zx.q(x23_9.b))
            << 0x18
        int64_t x9_10 = (-0xff00000001 & ((-0xff0000000001 & x9_8) | (zx.q(x14_1) ^ zx.q(x9_4)
            ^ zx.q(x8_7) ^ zx.q(x8_6) ^ zx.q(lr_4) ^ zx.q(x27_4) ^ zx.q(x24_8) ^ zx.q(x23_8.b))
            << 0x28)) | (zx.q(x15_1.b) ^ zx.q(x10_1) ^ zx.q(x16_1) ^ zx.q(x4_1) ^ zx.q(x21_2)
            ^ zx.q(fp_4) ^ zx.q(x23_6) ^ zx.q(x21_5)) << 0x20
        int64_t x14_11 = (-0xff0001 & ((-0xff000001 & ((-0xff00000001 & x14_8)
            | (zx.q(x19_2) ^ zx.q(x15_1.b) ^ zx.q(x12_1) ^ zx.q(x13_3) ^ zx.q(fp_4)) << 0x20))
            | (zx.q(x24_4) ^ zx.q(x14_1) ^ zx.q(x1.b) ^ zx.q(lr_4)) << 0x18))
            | (zx.q(x19_1) ^ zx.q(x15_1.b) ^ zx.q(x3_1) ^ zx.q(x21_2)) << 0x10
        int64_t x3_13 = (-0xff0000000001 & ((-0xff00000001 & x3_11)
            | (zx.q(x24_2) ^ zx.q(x4_1) ^ zx.q(fp_4) ^ zx.q(x23_7) ^ zx.q(x21_5) ^ zx.q(x21_7))
            << 0x20))
            | (zx.q(x12_3) ^ zx.q(x8_6) ^ zx.q(x27_4) ^ zx.q(x24_9) ^ zx.q(x23_8.b) ^ zx.q(x22_5))
            << 0x28
        int64_t x9_12 = (-0xff0001 & ((-0xff000001 & x9_10)
            | (zx.q(x28_1) ^ zx.q(x20_1.b) ^ zx.q(x17_1) ^ zx.q(lr_4) ^ zx.q(x6_1.b) ^ zx.q(x24_9))
            << 0x18))
            | (zx.q(x27_1) ^ zx.q(x26_1) ^ zx.q(x12_1) ^ zx.q(x21_2) ^ zx.q(x5_1) ^ zx.q(x23_7))
            << 0x10
        int64_t x10_7 = *(x14_21 + 0x18) ^ (x3_13
            | (zx.q(x5_1) ^ zx.q(x11_1) ^ zx.q(x26_2) ^ zx.q(x21_5) ^ zx.q(x21_6)) << 0x30
            | (zx.q(x6_1) ^ zx.q(x0) ^ zx.q(x22_2) ^ zx.q(x23_8) ^ zx.q(x23_9)) << 0x38)
        var_90.q = x11_7
        var_90:8.q = *(x14_21 + 8) ^ ((-0xff01 & x14_11)
            | (zx.q(x14_1) ^ zx.q(x9_1) ^ zx.q(x17_1) ^ zx.q(x22_2.b)) << 8
            | (zx.q(x15_1.b) ^ zx.q(x8_3.b) ^ zx.q(x12_1) ^ zx.q(x26_2)))
        var_80_1.q = *(x14_21 + 0x10) ^ ((-0xff01 & x9_12)
            | (zx.q(x12_3) ^ zx.q(x8_7) ^ zx.q(x17_1) ^ zx.q(x27_4) ^ zx.q(x24_8)) << 8
            | (zx.q(x24_2) ^ zx.q(x16_1) ^ zx.q(x12_1) ^ zx.q(fp_4) ^ zx.q(x23_6)))
        var_80_1:8.q = x10_7
        int64_t x10_8 = x8_2[1].q
        var_80_1:0xe.b = (x11_7 u>> 0x10).b ^ x11_7.b ^ (x11_7 u>> 0x20).b ^ (x11_7 u>> 0x30).b
            ^ x10_7.b ^ (x10_7 u>> 0x30).b
        var_80_1:0xf.b = (x11_7 u>> 0x18).b ^ (x11_7 u>> 8).b ^ (x11_7 u>> 0x28).b
            ^ (x11_7 u>> 0x38).b ^ (x10_7.d u>> 8).b ^ (x10_7 u>> 0x38).b
        var_80_1:0xc.w = *(x8_2 + 0x1c)
        var_80_1:8.d = *(x8_2 + 0x18)
        var_80_1.q = x10_8
        var_90 = *x8_2
        int128_t* x14_14 = *(var_b8_1 + 0x70)
        int128_t v0 = *x14_14 ^ var_90
        uint64_t x17_6 = v0.q
        int64_t x22_7 = x14_14[1].q ^ x10_8
        int64_t x24_13 = *(x14_14 + 0x18) ^ var_80_1:8.q
        uint32_t x6_6 = (x17_6 u>> 0x10).d
        uint64_t fp_6 = v0:8.q
        uint32_t x4_7 = (x17_6 u>> 0x30).d
        uint32_t x7_10 = (x22_7 u>> 0x30).d
        uint32_t x0_7 = (x24_13 u>> 0x20).d
        uint32_t x12_20 = (x24_13 u>> 0x30).d
        uint32_t x8_19 = (x17_6 u>> 0x20).d
        int32_t x9_18 = x17_6.d ^ x6_6
        uint32_t x5_7 = (x22_7 u>> 0x20).d
        uint64_t x10_9 = x22_7 u>> 0x10
        char x25_8 = x4_7.b ^ x6_6.b
        uint32_t x23_11 = (fp_6 u>> 0x30).d
        char x8_20 = x24_13.b ^ x12_20.b
        uint32_t x13_12 = (fp_6 u>> 0x20).d
        int32_t x21_10 = x9_18 ^ x4_7
        uint32_t var_e0_1
        var_e0_1.q = x10_9
        char var_108_2 = x9_18.b
        int32_t x28_5 = x8_19 ^ fp_6.d ^ x6_6
        int32_t x26_7 = x21_10 ^ fp_6.d
        uint32_t x11_11 = (fp_6 u>> 0x10).d
        uint32_t lr_7 = x7_10 ^ x23_11
        char x7_11 = x28_5.b ^ x11_11.b
        uint32_t x2_5 = (x24_13 u>> 0x10).d
        char x8_25 = lr_7.b ^ x5_7.b ^ x2_5.b
        uint32_t x9_21 = x2_5 ^ x23_11 ^ x4_7
        uint32_t x23_12 = lr_7 ^ x4_7
        uint32_t x25_12 = (x17_6 u>> 0x28).d
        uint32_t x14_15 = (fp_6 u>> 8).d
        uint32_t x1_9 = (x17_6 u>> 0x18).d
        uint32_t x16_10 = (x17_6 u>> 0x38).d
        uint32_t x28_6 = (x17_6 u>> 8).d
        uint32_t x10_11 = (fp_6 u>> 0x38).d
        char x6_11 = x25_12.b ^ x14_15.b ^ x1_9.b
        char x27_10 = x16_10.b ^ x1_9.b
        uint32_t x5_9 = x28_6 ^ x1_9
        uint8_t x1_10 = (x22_7 u>> 0x28).b
        uint32_t x0_10 = (x22_7 u>> 0x38).d
        uint32_t x8_37 = (x24_13 u>> 0x28).d
        uint8_t x13_13 = (x24_13 u>> 0x38).b
        uint8_t x17_10 = (x24_13 u>> 8).b
        char x11_13 = x0_10.b ^ x10_11.b
        uint8_t x0_11 = (x22_7 u>> 0x18).b
        uint8_t x9_22 = x17_10 ^ x13_13
        uint32_t x12_21 = (x22_7 u>> 8).d
        var_90 = v0
        uint32_t x9_23 = (x24_13 u>> 0x18).d
        char x27_11 = var_90:0xd.b
        uint32_t x7_12 = x9_23 ^ x10_11 ^ x16_10
        char x15_13 = x11_13 ^ x16_10.b
        uint8_t x10_14 = (fp_6 u>> 0x18).b
        char x1_12 = x11_13 ^ x1_10 ^ x9_23.b
        char x6_12 = x6_11 ^ x10_14
        uint32_t x16_11 = x5_9 ^ x16_10
        uint32_t x16_12 = x16_11 ^ x14_15
        int64_t x2_17 = (0xffffffffffffff & (zx.q(x8_20) ^ zx.q(x5_7.b) ^ zx.q(x2_5.b)
            ^ zx.q(var_108_2) ^ zx.q(x11_11.b) ^ zx.q(x13_12.b)) << 0x30) | (zx.q(x27_11) ^ zx.q(x9_22)
            ^ zx.q(x1_10) ^ zx.q(x9_23.b) ^ zx.q(x5_9.b) ^ zx.q(x10_14)) << 0x38
        int64_t x22_14 = (0xffffffffffffff & (zx.q(x13_12.b) ^ zx.q(x24_13.b) ^ zx.q(x5_7.b)
            ^ zx.q(x26_7.b) ^ zx.q(x11_11.b) ^ zx.q(var_e0_1.b)) << 0x30) | (zx.q(x27_11)
            ^ zx.q(x17_10) ^ zx.q(x1_10) ^ zx.q(x16_12.b) ^ zx.q(x10_14) ^ zx.q(x0_11)) << 0x38
        int64_t x2_20 = (-0xff00000001
            & ((-0xff0000000001 & x2_17) | (zx.q(x9_22) ^ zx.q(x0_11) ^ zx.q(x6_12)) << 0x28))
            | (zx.q(x8_20) ^ zx.q(x10_9.b) ^ zx.q(x7_11)) << 0x20
            | zx.q((x8_37 ^ x0_10 ^ x12_21 ^ x16_12) << 0x18)
        char x6_19 = x23_11.b ^ x4_7.b ^ x5_7.b ^ x2_5.b ^ x0_7.b ^ x12_20.b ^ var_108_2 ^ fp_6.b
            ^ x22_7.b ^ x8_19.b ^ x11_11.b ^ var_e0_1.b
        uint64_t x9_36 = zx.q(x7_10.b) ^ zx.q(x5_7.b) ^ zx.q(x2_5.b) ^ zx.q(x0_7.b) ^ zx.q(x17_6.b)
            ^ zx.q(fp_6.b) ^ zx.q(x22_7.b) ^ zx.q(x11_11.b) ^ zx.q(var_e0_1.b) ^ zx.q(x24_13.b)
            ^ zx.q(x13_12.b)
        int64_t x22_16 = (-0xff00000001 & ((-0xff0000000001 & x22_14) | (zx.q(x12_21.b)
            ^ zx.q(x8_37.b) ^ zx.q(x27_10) ^ zx.q(x13_13) ^ zx.q(x14_15.b) ^ zx.q(x10_14)
            ^ zx.q(x0_11)) << 0x28)) | (zx.q(x22_7.b) ^ zx.q(x0_7.b) ^ zx.q(x25_8) ^ zx.q(x12_20.b)
            ^ zx.q(fp_6.b) ^ zx.q(x11_11.b) ^ zx.q(var_e0_1.b)) << 0x20
        int64_t x9_37 = (-0xff01 & x9_36) | ((zx.q(x27_11) ^ zx.q(x0_10.b) ^ zx.q(x1_10)
            ^ zx.q(x9_23.b) ^ zx.q(x8_37.b) ^ zx.q(x28_6.b) ^ zx.q(x14_15.b) ^ zx.q(x12_21.b)
            ^ zx.q(x10_14) ^ zx.q(x0_11) ^ zx.q(x17_10)) & 0xff) << 8
        arg1 = (-0xff01 & (x2_20 | (zx.q((x0_7 ^ x7_10 ^ x22_7.d ^ x26_7) << 0x10) & 0xff0000))) | (
            zx.q(x11_13) ^ zx.q(x27_10) ^ zx.q(x1_10) ^ zx.q(x9_23.b) ^ zx.q(x8_37.b)
            ^ zx.q(x13_13)) << 8
        int64_t x11_25 = x22_16 | zx.q((x7_12 ^ x8_37 ^ x28_6 ^ x14_15 ^ x12_21 ^ x25_12) << 0x18)
            | (zx.q((x9_21 ^ x0_7 ^ x17_6.d ^ fp_6.d ^ x22_7.d ^ x8_19) << 0x10) & 0xff0000)
        int64_t x9_39 = (-0xff000001 & (x9_37 | (zx.q((x23_11 ^ x6_6 ^ x5_7 ^ x7_10 ^ x2_5 ^ x0_7
            ^ x12_20 ^ x11_11 ^ var_e0_1 ^ x24_13.d ^ x13_12) << 0x10) & 0xff0000))) | (zx.q(x27_11)
            ^ zx.q(x10_11.b) ^ zx.q(x1_9.b) ^ zx.q(x1_10) ^ zx.q(x0_10.b) ^ zx.q(x9_23.b)
            ^ zx.q(x8_37.b) ^ zx.q(x13_13) ^ zx.q(x10_14) ^ zx.q(x0_11) ^ zx.q(x17_10)) << 0x18
        char x10_17 = x10_11.b ^ x16_10.b ^ x1_10 ^ x9_23.b ^ x8_37.b ^ x13_13 ^ x5_9.b ^ x14_15.b
            ^ x12_21.b ^ x25_12.b ^ x10_14 ^ x0_11 ^ x17_10
        int64_t x10_19 = (-0xff01 & x11_25) | ((zx.q(x27_11) ^ zx.q(x15_13) ^ zx.q(x9_23.b)
            ^ zx.q(x8_37.b) ^ zx.q(x13_13) ^ zx.q(x28_6.b) ^ zx.q(x17_10)) & 0xff) << 8 | (
            zx.q(x23_12.b) ^ zx.q(x2_5.b) ^ zx.q(x0_7.b) ^ zx.q(x12_20.b) ^ zx.q(x17_6.b)
            ^ zx.q(x24_13.b) ^ zx.q(x13_12.b))
        int64_t x15_27 = (-0xff0000000001
            & ((0xffffffffffffff & (zx.q(x6_19) ^ zx.q(x24_13.b)) << 0x30) | zx.q(x10_17) << 0x38)) | (
            zx.q(x27_11) ^ zx.q(x7_12.b) ^ zx.q(x13_13) ^ zx.q(x14_15.b) ^ zx.q(x12_21.b)
            ^ zx.q(x0_11) ^ zx.q(x17_10)) << 0x28
        int64_t x9_41 = (-0xff0000000001 & ((-0xff00000001 & x9_39)
            | (zx.q(x8_25) ^ zx.q(x0_7.b) ^ zx.q(x21_10.b) ^ zx.q(x22_7.b) ^ zx.q(x13_12.b))
            << 0x20)) | (zx.q(x27_11) ^ zx.q(x1_12) ^ zx.q(x8_37.b) ^ zx.q(x16_11.b) ^ zx.q(x12_21.b))
            << 0x28
        int64_t x15_29 = (-0xff000001 & ((-0xff00000001 & x15_27) | (zx.q(x9_21.b) ^ zx.q(x12_20.b)
            ^ zx.q(fp_6.b) ^ zx.q(x22_7.b) ^ zx.q(var_e0_1.b) ^ zx.q(x24_13.b) ^ zx.q(x13_12.b))
            << 0x20)) | ((zx.q(x27_11) ^ zx.q(x15_13) ^ zx.q(x8_37.b) ^ zx.q(x12_21.b) ^ zx.q(x25_12.b)
            ^ zx.q(x10_14) ^ zx.q(x17_10)) & 0xff) << 0x18
        *x14_14 = arg1 | (zx.q(lr_7.b) ^ zx.q(x25_8) ^ zx.q(x5_7.b) ^ zx.q(x2_5.b) ^ zx.q(x0_7.b)
            ^ zx.q(x12_20.b))
        *(x14_14 + 8) = x10_19
        int64_t x9_46 = (-0xff01 & (x15_29 | (
            zx.q((x23_12 ^ x0_7 ^ x22_7.d ^ x8_19 ^ x11_11 ^ x24_13.d ^ x13_12) << 0x10)
            & 0xff0000))) | ((zx.q(x27_11) ^ zx.q(x1_12) ^ zx.q(x6_12)) & 0xff) << 8
        int64_t x8_52 = (0xffffffffffffff & (x9_41 | (zx.q(lr_7) ^ zx.q(x0_7) ^ zx.q(x12_20)
            ^ zx.q(x22_7.d) ^ zx.q(x28_5) ^ zx.q(var_e0_1) ^ zx.q(x24_13.d)) << 0x30)) | (zx.q(x11_13)
            ^ zx.q(x8_37.b) ^ zx.q(x13_13) ^ zx.q(x12_21.b) ^ zx.q(x6_11) ^ zx.q(x0_11)
            ^ zx.q(x17_10)) << 0x38
        x21_1 = var_b8_1
        x14_14[1].q = x9_46 | (zx.q(x8_25) ^ zx.q(x7_11) ^ zx.q(x13_12.b))
        *(x14_14 + 0x18) = x8_52
        x22_1 = var_180_1
        x13_1 += 1
    while (x13_1 != entry_x2)

if (*(x8 + 0x28) == x8_1)
    return 

__stack_chk_fail()
noreturn
