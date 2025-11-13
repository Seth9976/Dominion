// 函数: _ZNK5Botan8PointGFp12on_the_curveEv
// 地址: 0xd2907c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8 = entry_x0[0xf]
int32_t x20

if (x8 == -1)
    int64_t x9_1 = entry_x0[0xc]
    int64_t x11_1 = entry_x0[0xd]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        entry_x0[0xf] = 0
        x20 = 1
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_9 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_9 << 2))
            i = i_9
            i_9 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        entry_x0[0xf] = x8_1
        x20 = 1
        
        if (x8_1 != 0)
            goto label_d29124
else
    x20 = 1
    
    if (x8 != 0)
    label_d29124:
        void* var_48
        __builtin_memset(&var_48, 0, 0x18)
        void* var_98
        __builtin_memset(&var_98, 0, 0x18)
        int64_t var_80_1 = -1
        int32_t var_78_1 = 1
        int64_t* x0 = *entry_x0
        int64_t x2_1 = entry_x0[7]
        (*(*x0 + 0x88))(x0, &var_98, x2_1, (entry_x0[8] - x2_1) s>> 2, &var_48)
        void* var_70
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_70)
        int64_t var_58_1 = var_80_1
        int32_t var_50_1 = var_78_1
        int64_t* x0_2 = *entry_x0
        (*(*x0_2 + 0x78))(x0_2, &var_70, &var_48)
        void* x0_3 = var_98
        
        if (x0_3 != 0)
            void* var_90_1 = x0_3
            int64_t var_88
            Botan::deallocate_memory(x0_3, (var_88 - x0_3) s>> 2, 4)
        
        void* var_c0
        __builtin_memset(&var_c0, 0, 0x18)
        int64_t var_a8_1 = -1
        int32_t var_a0_1 = 1
        int64_t* x0_4 = *entry_x0
        int64_t x2_3 = entry_x0[2]
        (*(*x0_4 + 0x88))(x0_4, &var_c0, x2_3, (entry_x0[3] - x2_3) s>> 2, &var_48)
        __builtin_memset(&var_98, 0, 0x18)
        int64_t var_80_2 = -1
        int32_t var_78_2 = 1
        int64_t* x0_5 = *entry_x0
        int64_t x2_4 = entry_x0[2]
        (*(*x0_5 + 0x80))(x0_5, &var_98, x2_4, (entry_x0[3] - x2_4) s>> 2, &var_c0, &var_48)
        void* x0_6 = var_c0
        
        if (x0_6 != 0)
            void* var_b8_1 = x0_6
            int64_t var_b0
            Botan::deallocate_memory(x0_6, (var_b0 - x0_6) s>> 2, 4)
        
        int64_t x0_8 = (*(**entry_x0 + 0x50))()
        __builtin_memset(&var_c0, 0, 0x18)
        int64_t var_a8_2 = -1
        int32_t var_a0_2 = 1
        int64_t* x0_9 = *entry_x0
        int64_t x2_5 = entry_x0[2]
        (*(*x0_9 + 0x80))(x0_9, &var_c0, x2_5, (entry_x0[3] - x2_5) s>> 2, x0_8, &var_48)
        void* var_e8
        __builtin_memset(&var_e8, 0, 0x18)
        int64_t var_d0_1 = -1
        int32_t var_c8_1 = 1
        int64_t x2_6 = entry_x0[0xc]
        int64_t* x0_10 = *entry_x0
        (*(*x0_10 + 0x88))(x0_10, &var_e8, x2_6, (entry_x0[0xd] - x2_6) s>> 2, &var_48)
        int32_t x0_12 = Botan::BigInt::is_equal(&entry_x0[0xc])
        void* var_160
        void* var_138
        void* var_110
        int64_t var_b8_2
        int32_t x0_20
        
        if ((x0_12 & 1) != 0)
            int64_t x2_7 = var_a8_2
            void* x1_9 = var_c0
            
            if (x2_7 == -1)
                void* x9_14 = var_b8_2 - x1_9
                
                if (var_b8_2 == x1_9)
                    x2_7 = 0
                else
                    void* x11_4
                    
                    x11_4 = x9_14 s>= 0 ? x9_14 : -ffffffffffffffff
                    
                    void* x10_4 = x1_9 - var_b8_2
                    void* x11_5
                    
                    x11_5 = x11_4 s< 1 ? x11_4 : 1
                    
                    x2_7 = x9_14 s>> 2
                    void* x9_15
                    
                    x9_15 = x10_4 s> x9_14 ? x10_4 : x9_14
                    
                    int64_t i_5 = x11_5 * (x9_15 u>> 2)
                    uint64_t x10_5 = 1
                    int64_t i_1
                    
                    do
                        int32_t x11_6 = *(x1_9 - 4 + (i_5 << 2))
                        i_1 = i_5
                        i_5 -= 1
                        x10_5 = zx.q(x10_5.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
                        x2_7 -= x10_5
                    while (i_1 != 1)
                
                int64_t var_a8_3 = x2_7
            
            Botan::BigInt::add2(&var_98, x1_9, x2_7, zx.q(var_a0_2))
            int64_t* x0_15 = (*(**entry_x0 + 0x58))()
            uint64_t x2_8 = x0_15[3]
            uint32_t* x1_10 = *x0_15
            
            if (x2_8 == -1)
                int64_t x8_25 = x0_15[1]
                void* x9_17 = x8_25 - x1_10
                
                if (x8_25 == x1_10)
                    x2_8 = 0
                else
                    void* x11_8
                    
                    x11_8 = x9_17 s>= 0 ? x9_17 : -ffffffffffffffff
                    
                    void* x10_6 = x1_10 - x8_25
                    void* x11_9
                    
                    x11_9 = x11_8 s< 1 ? x11_8 : 1
                    
                    x2_8 = x9_17 s>> 2
                    void* x9_18
                    
                    x9_18 = x10_6 s> x9_17 ? x10_6 : x9_17
                    
                    int64_t i_6 = x11_9 * (x9_18 u>> 2)
                    uint64_t x10_7 = 1
                    int64_t i_2
                    
                    do
                        int32_t x11_10 = *(x1_10 - 4 + (i_6 << 2))
                        i_2 = i_6
                        i_6 -= 1
                        x10_7 = zx.q(x10_7.d) & zx.q(((x11_10 - 1) & not.d(x11_10)) s>> 0x1f)
                        x2_8 -= x10_7
                    while (i_2 != 1)
                
                x0_15[3] = x2_8
            
            Botan::BigInt::add2(&var_160, x1_10, x2_8, zx.q(x0_15[4].d))
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_110)
            int64_t var_120
            int64_t var_f8_1 = var_120
            int32_t var_118
            int32_t var_f0_1 = var_118
            int64_t* x0_18 = *entry_x0
            (*(*x0_18 + 0x78))(x0_18, &var_110, &var_48)
            x0_20 = Botan::BigInt::is_equal(&var_70)
            void* x8_30 = var_110
            
            if (x8_30 != 0)
                void* var_108_1 = x8_30
                int64_t var_100
                Botan::deallocate_memory(x8_30, (var_100 - x8_30) s>> 2, 4)
            
            void* x0_22 = var_138
            
            if (x0_22 != 0)
                void* var_130_1 = x0_22
                int64_t var_128
                Botan::deallocate_memory(x0_22, (var_128 - x0_22) s>> 2, 4)
            
            void* x0_23 = var_160
            
            if (x0_23 != 0)
                void* var_158_1 = x0_23
                int64_t var_150
                Botan::deallocate_memory(x0_23, (var_150 - x0_23) s>> 2, 4)
        
        if ((x0_12 & 1) != 0 && (x0_20 & 1) == 0)
            x20 = 0
        else
            __builtin_memset(&var_110, 0, 0x18)
            int64_t var_f8_2 = -1
            int32_t var_f0_2 = 1
            int64_t* x0_24 = *entry_x0
            int64_t x2_10 = entry_x0[0xc]
            (*(*x0_24 + 0x80))(x0_24, &var_110, x2_10, (entry_x0[0xd] - x2_10) s>> 2, &var_e8, 
                &var_48)
            __builtin_memset(&var_160, 0, 0x18)
            int64_t var_148_1 = -1
            int32_t var_140_1 = 1
            int64_t* x0_25 = *entry_x0
            void* x2_11 = var_e8
            int64_t var_e0
            (*(*x0_25 + 0x88))(x0_25, &var_160, x2_11, (var_e0 - x2_11) s>> 2, &var_48)
            __builtin_memset(&var_138, 0, 0x18)
            uint64_t var_120_1 = -1
            int32_t var_118_1 = 1
            int64_t* x0_26 = *entry_x0
            void* x2_12 = var_c0
            (*(*x0_26 + 0x80))(x0_26, &var_138, x2_12, (var_b8_2 - x2_12) s>> 2, &var_160, &var_48)
            void* x0_27 = var_160
            
            if (x0_27 != 0)
                void* var_158_2 = x0_27
                int64_t var_150_1
                Botan::deallocate_memory(x0_27, (var_150_1 - x0_27) s>> 2, 4)
            
            int64_t* x0_29 = (*(**entry_x0 + 0x58))()
            void* var_188
            __builtin_memset(&var_188, 0, 0x18)
            int64_t var_170_1 = -1
            int32_t var_168_1 = 1
            int64_t* x0_30 = *entry_x0
            void* x2_13 = var_110
            int64_t var_108_2
            (*(*x0_30 + 0x88))(x0_30, &var_188, x2_13, (var_108_2 - x2_13) s>> 2, &var_48)
            __builtin_memset(&var_160, 0, 0x18)
            int64_t var_148_2 = -1
            int32_t var_140_2 = 1
            int64_t* x0_31 = *entry_x0
            int64_t x2_14 = *x0_29
            (*(*x0_31 + 0x80))(x0_31, &var_160, x2_14, (x0_29[1] - x2_14) s>> 2, &var_188, &var_48)
            void* x0_32 = var_188
            int64_t var_178
            
            if (x0_32 != 0)
                void* var_180_1 = x0_32
                Botan::deallocate_memory(x0_32, (var_178 - x0_32) s>> 2, 4)
            
            uint64_t x2_15 = var_120_1
            uint32_t* x1_22 = var_138
            
            if (x2_15 == -1)
                int64_t var_130_2
                void* x9_33 = var_130_2 - x1_22
                
                if (var_130_2 == x1_22)
                    x2_15 = 0
                else
                    void* x11_12
                    
                    x11_12 = x9_33 s>= 0 ? x9_33 : -ffffffffffffffff
                    
                    void* x10_8 = x1_22 - var_130_2
                    void* x11_13
                    
                    x11_13 = x11_12 s< 1 ? x11_12 : 1
                    
                    x2_15 = x9_33 s>> 2
                    void* x9_34
                    
                    x9_34 = x10_8 s> x9_33 ? x10_8 : x9_33
                    
                    int64_t i_7 = x11_13 * (x9_34 u>> 2)
                    uint64_t x10_9 = 1
                    int64_t i_3
                    
                    do
                        int32_t x11_14 = *(x1_22 - 4 + (i_7 << 2))
                        i_3 = i_7
                        i_7 -= 1
                        x10_9 = zx.q(x10_9.d) & zx.q(((x11_14 - 1) & not.d(x11_14)) s>> 0x1f)
                        x2_15 -= x10_9
                    while (i_3 != 1)
                
                uint64_t var_120_2 = x2_15
            
            Botan::BigInt::add2(&var_98, x1_22, x2_15, zx.q(var_118_1))
            int64_t x2_16 = var_148_2
            void* x1_23 = var_160
            
            if (x2_16 == -1)
                int64_t var_158_3
                void* x9_36 = var_158_3 - x1_23
                
                if (var_158_3 == x1_23)
                    x2_16 = 0
                else
                    void* x11_16
                    
                    x11_16 = x9_36 s>= 0 ? x9_36 : -ffffffffffffffff
                    
                    void* x10_10 = x1_23 - var_158_3
                    void* x11_17
                    
                    x11_17 = x11_16 s< 1 ? x11_16 : 1
                    
                    x2_16 = x9_36 s>> 2
                    void* x9_37
                    
                    x9_37 = x10_10 s> x9_36 ? x10_10 : x9_36
                    
                    int64_t i_8 = x11_17 * (x9_37 u>> 2)
                    uint64_t x10_11 = 1
                    int64_t i_4
                    
                    do
                        int32_t x11_18 = *(x1_23 - 4 + (i_8 << 2))
                        i_4 = i_8
                        i_8 -= 1
                        x10_11 = zx.q(x10_11.d) & zx.q(((x11_18 - 1) & not.d(x11_18)) s>> 0x1f)
                        x2_16 -= x10_11
                    while (i_4 != 1)
                
                int64_t var_148_3 = x2_16
            
            void* var_1d8
            Botan::BigInt::add2(&var_1d8, x1_23, x2_16, zx.q(var_140_2))
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_188)
            int64_t var_198
            int64_t var_170_2 = var_198
            int32_t var_190
            int32_t var_168_2 = var_190
            int64_t* x0_36 = *entry_x0
            (*(*x0_36 + 0x78))(x0_36, &var_188, &var_48)
            int32_t x0_38 = Botan::BigInt::is_equal(&var_70)
            void* x8_58 = var_188
            x20 = x0_38
            
            if (x8_58 != 0)
                void* var_180_2 = x8_58
                Botan::deallocate_memory(x8_58, (var_178 - x8_58) s>> 2, 4)
            
            void* var_1b0
            
            if (var_1b0 != 0)
                void* var_1a8_1 = var_1b0
                int64_t var_1a0
                Botan::deallocate_memory(var_1b0, (var_1a0 - var_1b0) s>> 2, 4)
            
            void* x0_41 = var_1d8
            
            if (x0_41 != 0)
                void* var_1d0_1 = x0_41
                int64_t var_1c8
                Botan::deallocate_memory(x0_41, (var_1c8 - x0_41) s>> 2, 4)
            
            void* x0_42 = var_160
            
            if (x0_42 != 0)
                void* var_158_4 = x0_42
                int64_t var_150_2
                Botan::deallocate_memory(x0_42, (var_150_2 - x0_42) s>> 2, 4)
            
            void* x0_43 = var_138
            
            if (x0_43 != 0)
                void* var_130_3 = x0_43
                int64_t var_128_1
                Botan::deallocate_memory(x0_43, (var_128_1 - x0_43) s>> 2, 4)
            
            void* x0_44 = var_110
            
            if (x0_44 != 0)
                void* var_108_3 = x0_44
                int64_t var_100_1
                Botan::deallocate_memory(x0_44, (var_100_1 - x0_44) s>> 2, 4)
        
        void* x0_45 = var_e8
        
        if (x0_45 != 0)
            void* var_e0_1 = x0_45
            int64_t var_d8
            Botan::deallocate_memory(x0_45, (var_d8 - x0_45) s>> 2, 4)
        
        void* x0_46 = var_c0
        
        if (x0_46 != 0)
            void* var_b8_3 = x0_46
            int64_t var_b0_1
            Botan::deallocate_memory(x0_46, (var_b0_1 - x0_46) s>> 2, 4)
        
        void* x0_47 = var_98
        
        if (x0_47 != 0)
            void* var_90_2 = x0_47
            int64_t var_88_1
            Botan::deallocate_memory(x0_47, (var_88_1 - x0_47) s>> 2, 4)
        
        void* x0_48 = var_70
        
        if (x0_48 != 0)
            void* var_68_1 = x0_48
            int64_t var_60
            Botan::deallocate_memory(x0_48, (var_60 - x0_48) s>> 2, 4)
        
        void* x0_49 = var_48
        
        if (x0_49 != 0)
            void* var_40_1 = x0_49
            int64_t var_38
            Botan::deallocate_memory(x0_49, (var_38 - x0_49) s>> 2, 4)

return zx.q(x20) & 1
