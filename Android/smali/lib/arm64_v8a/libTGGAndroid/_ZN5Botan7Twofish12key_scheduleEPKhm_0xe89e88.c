// 函数: _ZN5Botan7Twofish12key_scheduleEPKhm
// 地址: 0xe89e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 2 u<= 0x3ff)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10 != 0x1000)
    *(arg1 + 0x10) = x8 + 0x1000

int64_t x8_2 = *(arg1 + 0x20)
int64_t x10_1 = *(arg1 + 0x28) - x8_2

if (x10_1 s>> 2 u<= 0x27)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
else if (x10_1 != 0xa0)
    *(arg1 + 0x28) = x8_2 + 0xa0

int64_t* result = Botan::allocate_memory(0x10, 1)
*result = 0
result[1] = 0
int64_t entry_x2

if (entry_x2 != 0)
    int64_t x8_4 = 0
    int64_t x9_4 = 0
    
    do
        uint64_t x14_1 = zx.q(*(arg2 + x9_4))
        
        if (x14_1 != 0)
            int64_t x15_1 = x8_4 & 0x1c
            uint32_t x14_3 = zx.d(*(Botan::Twofish::POLY_TO_EXP + zx.q(x14_1.d - 1)))
            uint32_t x1_6 =
                zx.d(*(zx.q(*(Botan::Twofish::RS + (x15_1 | 1))) + Botan::Twofish::POLY_TO_EXP - 1))
                + x14_3
            uint32_t x2_4 =
                zx.d(*(zx.q(*(Botan::Twofish::RS + (x15_1 | 2))) + Botan::Twofish::POLY_TO_EXP - 1))
                + x14_3
            uint32_t x14_4 =
                zx.d(*(zx.q(*(Botan::Twofish::RS + (x15_1 | 3))) + Botan::Twofish::POLY_TO_EXP - 1))
                + x14_3
            uint64_t x16_1 = x9_4 u>> 1
            int64_t x3_1 = x16_1 & 0x7ffffffffffffffc
            int64_t x2_5 = x3_1 | 1
            *(result + x3_1) ^= *(Botan::Twofish::EXP_TO_POLY + zx.q((
                zx.d(*(zx.q(*(Botan::Twofish::RS + x15_1)) + Botan::Twofish::POLY_TO_EXP - 1))
                + x14_3) u% 0xff))
            int64_t x4_2 = x3_1 | 2
            char x1_11 = *(Botan::Twofish::EXP_TO_POLY + zx.q(x2_4 u% 0xff))
            *(result + x2_5) ^= *(Botan::Twofish::EXP_TO_POLY + zx.q(x1_6 u% 0xff))
            *(result + x4_2) ^= x1_11
            int64_t x15_16 = x16_1 | 3
            *(result + x15_16) ^= *(Botan::Twofish::EXP_TO_POLY + zx.q(x14_4 u% 0xff))
        
        x9_4 += 1
        x8_4 += 4
    while (entry_x2 != x9_4)
    
    if (entry_x2 == 0x10)
        for (int64_t i = 0; i != 0x100; )
            char x15_48 = *(Botan::Twofish::Q0 + i)
            char x2_23 = *(Botan::Twofish::Q1 + i)
            int64_t x17_30 = i << 2
            i += 1
            (*(arg1 + 8))[i] = *(Botan::Twofish::MDS0 + ((zx.q(*(result + 4))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*result) ^ zx.q(x15_48))))) << 2))
            *(*(arg1 + 8) + x17_30 + 0x400) = *(Botan::Twofish::MDS1 + ((zx.q(*(result + 5))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(result + 1)) ^ zx.q(x2_23))))) << 2))
            *(*(arg1 + 8) + x17_30 + 0x800) = *(Botan::Twofish::MDS2 + ((zx.q(*(result + 6))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(result + 2)) ^ zx.q(x15_48))))) << 2))
            *(*(arg1 + 8) + x17_30 + 0xc00) = *(Botan::Twofish::MDS3 + ((zx.q(*(result + 7))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(result + 3)) ^ zx.q(x2_23))))) << 2))
        
        int64_t x14_9 = 0
        bool cond:2_1
        
        do
            void* x16_80 = Botan::Twofish::Q0 + x14_9
            void* x17_31 = Botan::Twofish::Q1 + x14_9
            char x5_14 = *x16_80
            char x21_11 = *x17_31
            char x16_81 = *(x16_80 + 1)
            char x17_32 = *(x17_31 + 1)
            int32_t x15_66 = *(Botan::Twofish::MDS1 + ((zx.q(*(arg2 + 1))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 9)) ^ zx.q(x21_11))))) << 2)) ^ *(
                Botan::Twofish::MDS0 + ((zx.q(*arg2)
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 8)) ^ zx.q(x5_14))))) << 2))
            int32_t x2_31 = *(Botan::Twofish::MDS1 + ((zx.q(*(arg2 + 5))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0xd)) ^ zx.q(x17_32))))) << 2)) ^ *(
                Botan::Twofish::MDS0 + ((zx.q(*(arg2 + 4))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0xc)) ^ zx.q(x16_81))))) << 2))
            int32_t x16_89 = x2_31 ^ *(Botan::Twofish::MDS2 + ((zx.q(*(arg2 + 6))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xe)) ^ zx.q(x16_81))))) << 2)) ^ *(
                Botan::Twofish::MDS3 + ((zx.q(*(arg2 + 7))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xf)) ^ zx.q(x17_32))))) << 2))
            int32_t x15_68 = x15_66 ^ *(Botan::Twofish::MDS2 + ((zx.q(*(arg2 + 2))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xa)) ^ zx.q(x5_14))))) << 2)) ^ *(
                Botan::Twofish::MDS3 + ((zx.q(*(arg2 + 3))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xb)) ^ zx.q(x21_11))))) << 2))
            int32_t x16_90 = ror.d(x16_89, 0x18)
            int64_t x3_25 = x14_9 << 2
            int32_t x15_69 = x16_90 + x15_68
            (*(arg1 + 0x20))[x14_9] = x15_69
            cond:2_1 = x14_9 u< 0x26
            x14_9 += 2
            *(*(arg1 + 0x20) + x3_25 + 4) = ror.d(x15_69 + x16_90, 0x17)
        while (cond:2_1)
    else if (entry_x2 == 0x18)
        for (int64_t i_1 = 0; i_1 != 0x100; )
            char x15_72 = *(Botan::Twofish::Q1 + i_1)
            int64_t x1_54 = i_1 << 2
            (*(arg1 + 8))[i_1] = *(Botan::Twofish::MDS0 + ((zx.q(result[1].b) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(result + 4))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*result) ^ zx.q(x15_72)))))))) << 2))
            char x16_104 = *(Botan::Twofish::Q0 + i_1)
            i_1 += 1
            *(*(arg1 + 8) + x1_54 + 0x400) = *(Botan::Twofish::MDS1 + ((zx.q(*(result + 9)) ^ zx.q(*
                (Botan::Twofish::Q0 + (zx.q(*(result + 5))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(result + 1)) ^ zx.q(x15_72)))))))) << 2))
            *(*(arg1 + 8) + x1_54 + 0x800) = *(Botan::Twofish::MDS2 + ((zx.q(*(result + 0xa)) ^ zx
                .q(*(Botan::Twofish::Q1 + (zx.q(*(result + 6))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(result + 2)) ^ zx.q(x16_104)))))))) << 2))
            *(*(arg1 + 8) + x1_54 + 0xc00) = *(Botan::Twofish::MDS3 + ((zx.q(*(result + 0xb)) ^ zx
                .q(*(Botan::Twofish::Q1 + (zx.q(*(result + 7))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(result + 3)) ^ zx.q(x16_104)))))))) << 2))
        
        int64_t x14_10 = 0
        bool cond:4_1
        
        do
            void* x17_51 = Botan::Twofish::Q1 + x14_10
            char x6_19 = *x17_51
            void* x1_55 = Botan::Twofish::Q0 + x14_10
            char x22_1 = *x1_55
            char x17_52 = *(x17_51 + 1)
            char x1_56 = *(x1_55 + 1)
            int32_t x15_106 = *(Botan::Twofish::MDS1 + ((zx.q(*(arg2 + 1)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(arg2 + 9))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x11)) ^ zx.q(x6_19)))))))) << 2)) ^ *(
                Botan::Twofish::MDS0 + ((zx.q(*arg2) ^ zx.q(*(Botan::Twofish::Q0 + (
                zx.q(*(arg2 + 8))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x10)) ^ zx.q(x6_19)))))))) << 2))
            int32_t x16_115 = *(Botan::Twofish::MDS1 + ((zx.q(*(arg2 + 5)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(arg2 + 0xd))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x15)) ^ zx.q(x17_52)))))))) << 2)) ^ *(
                Botan::Twofish::MDS0 + ((zx.q(*(arg2 + 4)) ^ zx.q(*(Botan::Twofish::Q0 + (
                zx.q(*(arg2 + 0xc))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x14)) ^ zx.q(x17_52)))))))) << 2))
            int32_t x16_117 = x16_115 ^ *(Botan::Twofish::MDS2 + ((zx.q(*(arg2 + 6)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xe))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x16)) ^ zx.q(x1_56)))))))) << 2)) ^ *(
                Botan::Twofish::MDS3 + ((zx.q(*(arg2 + 7)) ^ zx.q(*(Botan::Twofish::Q1 + (
                zx.q(*(arg2 + 0xf))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x17)) ^ zx.q(x1_56)))))))) << 2))
            int32_t x15_108 = x15_106 ^ *(Botan::Twofish::MDS2 + ((zx.q(*(arg2 + 2)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xa))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x12)) ^ zx.q(x22_1)))))))) << 2)) ^ *(
                Botan::Twofish::MDS3 + ((zx.q(*(arg2 + 3)) ^ zx.q(*(Botan::Twofish::Q1 + (
                zx.q(*(arg2 + 0xb))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x13)) ^ zx.q(x22_1)))))))) << 2))
            int32_t x16_118 = ror.d(x16_117, 0x18)
            int64_t x3_38 = x14_10 << 2
            int32_t x15_109 = x16_118 + x15_108
            (*(arg1 + 0x20))[x14_10] = x15_109
            cond:4_1 = x14_10 u< 0x26
            x14_10 += 2
            *(*(arg1 + 0x20) + x3_38 + 4) = ror.d(x15_109 + x16_118, 0x17)
        while (cond:4_1)
    else if (entry_x2 == 0x20)
        for (int64_t i_2 = 0; i_2 != 0x100; )
            char x15_17 = *(Botan::Twofish::Q1 + i_2)
            char x2_6 = *(Botan::Twofish::Q0 + i_2)
            int32_t x16_15 = *(Botan::Twofish::MDS0 + ((zx.q(*(result + 0xc)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(result[1].b) ^ zx.q(*(Botan::Twofish::Q0 + (
                zx.q(*(result + 4))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*result) ^ zx.q(x15_17))))))))))) << 2))
            int64_t x17_13 = i_2 << 2
            i_2 += 1
            (*(arg1 + 8))[i_2] = x16_15
            char x16_26 = *(result + 0xd) ^ *(Botan::Twofish::Q0 + (zx.q(*(result + 9)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(result + 5))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(result + 1)) ^ zx.q(x2_6)))))))))
            *(*(arg1 + 8) + x17_13 + 0x400) = *(Botan::Twofish::MDS1 + (zx.q(x16_26) << 2))
            char x16_39 = *(result + 0xe) ^ *(Botan::Twofish::Q1 + (zx.q(*(result + 0xa)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(result + 6))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(result + 2)) ^ zx.q(x2_6)))))))))
            *(*(arg1 + 8) + x17_13 + 0x800) = *(Botan::Twofish::MDS2 + (zx.q(x16_39) << 2))
            char x15_27 = *(result + 0xf) ^ *(Botan::Twofish::Q1 + (zx.q(*(result + 0xb)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(result + 7))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(result + 3)) ^ zx.q(x15_17)))))))))
            *(*(arg1 + 8) + x17_13 + 0xc00) = *(Botan::Twofish::MDS3 + (zx.q(x15_27) << 2))
        
        int64_t x14_8 = 0
        bool cond:6_1
        
        do
            void* x15_30 = Botan::Twofish::Q1 + x14_8
            void* x1_24 = Botan::Twofish::Q0 + x14_8
            char x21_2 = *x15_30
            char x6_1 = *x1_24
            char x1_25 = *(x1_24 + 1)
            char x15_31 = *(x15_30 + 1)
            char x3_14 = *(arg2 + 2) ^ *(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xa)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x12))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x1a)) ^ zx.q(x6_1)))))))))
            char x2_19 = *(arg2 + 1) ^ *(Botan::Twofish::Q0 + (zx.q(*(arg2 + 9)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x11))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x19)) ^ zx.q(x6_1)))))))))
            char x17_25 = *(arg2 + 3) ^ *(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xb)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x13))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x1b)) ^ zx.q(x21_2)))))))))
            char x5_11 = *(arg2 + 5) ^ *(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0xd)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x15))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x1d)) ^ zx.q(x1_25)))))))))
            char x4_13 = *(arg2 + 4) ^ *(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0xc)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x14))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x1c)) ^ zx.q(x15_31)))))))))
            char x1_35 = *(arg2 + 6) ^ *(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xe)) ^ zx.q(*(
                Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x16))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x1e)) ^ zx.q(x1_25)))))))))
            int32_t x16_55 = *(Botan::Twofish::MDS0 + ((zx.q(*arg2) ^ zx.q(*(Botan::Twofish::Q0 + (
                zx.q(*(arg2 + 8)) ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x10))
                ^ zx.q(*(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x18)) ^ zx.q(x21_2))))))))))) << 2))
            char x15_41 = *(arg2 + 7) ^ *(Botan::Twofish::Q1 + (zx.q(*(arg2 + 0xf)) ^ zx.q(*(
                Botan::Twofish::Q1 + (zx.q(*(arg2 + 0x17))
                ^ zx.q(*(Botan::Twofish::Q0 + (zx.q(*(arg2 + 0x1f)) ^ zx.q(x15_31)))))))))
            int32_t x15_45 = ror.d(
                *(Botan::Twofish::MDS1 + (zx.q(x5_11) << 2))
                    ^ *(Botan::Twofish::MDS0 + (zx.q(x4_13) << 2))
                    ^ *(Botan::Twofish::MDS2 + (zx.q(x1_35) << 2))
                    ^ *(Botan::Twofish::MDS3 + (zx.q(x15_41) << 2)), 
                0x18)
            int64_t x3_17 = x14_8 << 2
            int32_t x16_59 = x15_45 + (*(Botan::Twofish::MDS1 + (zx.q(x2_19) << 2)) ^ x16_55
                ^ *(Botan::Twofish::MDS2 + (zx.q(x3_14) << 2))
                ^ *(Botan::Twofish::MDS3 + (zx.q(x17_25) << 2)))
            (*(arg1 + 0x20))[x14_8] = x16_59
            cond:6_1 = x14_8 u< 0x26
            x14_8 += 2
            *(*(arg1 + 0x20) + x3_17 + 4) = ror.d(x16_59 + x15_45, 0x17)
        while (cond:6_1)
    
    if (result == 0)
        return result

return Botan::deallocate_memory(result, 0x10, 1)
