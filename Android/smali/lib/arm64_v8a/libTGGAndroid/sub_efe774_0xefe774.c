// 函数: sub_efe774
// 地址: 0xefe774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21_1

if (((*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 2 & 0x3ffffffffffffffe) != arg5)
    x21_1 = 0
else
    int64_t x25_1 = *(Botan::EC_Group::data() + 0x1e8)
    int64_t var_68_1 = 0
    int64_t var_60_1 = -1
    uint64_t x24_1
    
    if (x25_1 u< arg3 << 3)
        x24_1 = (x25_1 + 7) u>> 3
    else
        x24_1 = arg3
    
    void* var_78 = nullptr
    int64_t var_70_1 = 0
    int32_t var_58_1 = 1
    Botan::BigInt::binary_decode(&var_78, arg2)
    
    if (x25_1 u< x24_1 << 3)
        Botan::BigInt::operator>>=(&var_78)
    
    void* var_a0
    __builtin_memset(&var_a0, 0, 0x18)
    int64_t i_12 = -1
    int32_t var_80_1 = 1
    Botan::BigInt::binary_decode(&var_a0, arg4)
    void* var_c8
    __builtin_memset(&var_c8, 0, 0x18)
    int64_t i_10 = -1
    int32_t var_a8_1 = 1
    Botan::BigInt::binary_decode(&var_c8, arg4 + (arg5 u>> 1))
    
    if (var_80_1 == 0)
        x21_1 = 0
    else
        int64_t i_5 = i_12
        
        if (i_5 == -1)
            void* x9_1 = var_a0
            int64_t var_98
            void* x10_1 = var_98 - x9_1
            
            if (var_98 == x9_1)
                i_5 = 0
                int64_t var_88_1 = 0
            else
                void* x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
                
                void* x11_2 = x9_1 - var_98
                void* x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_5 = x10_1 s>> 2
                void* x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_7 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_1 - 4 + (i_7 << 2))
                    i = i_7
                    i_7 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_5 -= x11_3
                while (i != 1)
                int64_t i_13 = i_5
                
                if (i_5 u> 1)
                    goto label_efe954
            
        label_efe904:
            
            if (i_5 == 0)
                x21_1 = 0
            else
                void* x9_3 = var_a0
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 += 4
                    i_1 = i_5
                    i_5 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                while (i_1 != 1)
                
                if (x10_4 s>= 1)
                    goto label_efe954
                
                x21_1 = 0
        else
            if (i_5 u<= 1)
                goto label_efe904
            
        label_efe954:
            x21_1 = 0
            
            if ((Botan::BigInt::cmp(&var_a0, Botan::EC_Group::data() - 0x18) & 0x80000000) != 0
                    && var_a8_1 != 0)
                int64_t i_6 = i_10
                
                if (i_6 == -1)
                    void* x9_4 = var_c8
                    int64_t var_c0
                    void* x10_6 = var_c0 - x9_4
                    
                    if (var_c0 == x9_4)
                        i_6 = 0
                        int64_t var_b0_1 = 0
                    else
                        void* x12_6
                        
                        x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
                        
                        void* x11_10 = x9_4 - var_c0
                        void* x12_7
                        
                        x12_7 = x12_6 s< 1 ? x12_6 : 1
                        
                        i_6 = x10_6 s>> 2
                        void* x10_7
                        
                        x10_7 = x11_10 s> x10_6 ? x11_10 : x10_6
                        
                        int64_t i_8 = x12_7 * (x10_7 u>> 2)
                        uint64_t x11_11 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_8 = *(x9_4 - 4 + (i_8 << 2))
                            i_2 = i_8
                            i_8 -= 1
                            x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                            i_6 -= x11_11
                        while (i_2 != 1)
                        int64_t i_11 = i_6
                        
                        if (i_6 u> 1)
                            goto label_efea48
                    
                label_efe9f8:
                    
                    if (i_6 == 0)
                        x21_1 = 0
                    else
                        void* x9_6 = var_c8
                        int32_t x10_9 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_12 = *x9_6
                            x9_6 += 4
                            i_3 = i_6
                            i_6 -= 1
                            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
                            x10_9 = (x10_9 & x11_14) | (not.d(x11_14) & 1)
                        while (i_3 != 1)
                        
                        if (x10_9 s>= 1)
                            goto label_efea48
                        
                        x21_1 = 0
                else
                    if (i_6 u<= 1)
                        goto label_efe9f8
                    
                label_efea48:
                    
                    if ((Botan::BigInt::cmp(&var_c8, Botan::EC_Group::data() - 0x18) & 0x80000000)
                            != 0)
                        Botan::inverse_mod(&var_a0, Botan::EC_Group::data() + 0xe8)
                        Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_78)
                        Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_c8)
                        void* var_118
                        Botan::PointGFp_Multi_Point_Precompute::multi_exp(arg1 + 0x40, &var_118)
                        int64_t var_150
                        int64_t x8_15 = var_150
                        
                        if (x8_15 == -1)
                            int64_t var_168
                            int64_t var_160
                            int64_t x10_11 = var_160 - var_168
                            
                            if (var_160 == var_168)
                                x8_15 = 0
                            else
                                int64_t x12_11
                                
                                x12_11 = x10_11 s>= 0 ? x10_11 : -1
                                
                                int64_t x11_18 = var_168 - var_160
                                int64_t x12_12
                                
                                x12_12 = x12_11 s< 1 ? x12_11 : 1
                                
                                x8_15 = x10_11 s>> 2
                                int64_t x10_12
                                
                                x10_12 = x11_18 s> x10_11 ? x11_18 : x10_11
                                
                                int64_t i_9 = x12_12 * (x10_12 u>> 2)
                                uint64_t x11_19 = 1
                                int64_t i_4
                                
                                do
                                    int32_t x12_13 = *(var_168 - 4 + (i_9 << 2))
                                    i_4 = i_9
                                    i_9 -= 1
                                    x11_19 = zx.q(x11_19.d)
                                        & zx.q(((x12_13 - 1) & not.d(x12_13)) s>> 0x1f)
                                    x8_15 -= x11_19
                                while (i_4 != 1)
                            
                            int64_t var_150_1 = x8_15
                        
                        if (x8_15 == 0)
                            x21_1 = 0
                        else
                            Botan::PointGFp::get_affine_x()
                            Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
                            void* var_218
                            
                            if (var_218 != 0)
                                void* var_210_1 = var_218
                                int64_t var_208
                                Botan::deallocate_memory(var_218, (var_208 - var_218) s>> 2, 4)
                            
                            void* var_1f0
                            int32_t x0_35 = Botan::BigInt::is_equal(&var_1f0)
                            void* x8_18 = var_1f0
                            x21_1 = x0_35
                            
                            if (x8_18 != 0)
                                void* var_1e8_1 = x8_18
                                int64_t var_1e0
                                Botan::deallocate_memory(x8_18, (var_1e0 - x8_18) s>> 2, 4)
                        
                        Botan::PointGFp::~PointGFp()
                        void* var_140
                        
                        if (var_140 != 0)
                            void* var_138_1 = var_140
                            int64_t var_130
                            Botan::deallocate_memory(var_140, (var_130 - var_140) s>> 2, 4)
                        
                        void* x0_38 = var_118
                        
                        if (x0_38 != 0)
                            void* var_110_1 = x0_38
                            int64_t var_108
                            Botan::deallocate_memory(x0_38, (var_108 - x0_38) s>> 2, 4)
                        
                        void* var_f0
                        
                        if (var_f0 != 0)
                            void* var_e8_1 = var_f0
                            int64_t var_e0
                            Botan::deallocate_memory(var_f0, (var_e0 - var_f0) s>> 2, 4)
                    else
                        x21_1 = 0
    
    void* x0_16 = var_c8
    
    if (x0_16 != 0)
        void* var_c0_1 = x0_16
        int64_t var_b8
        Botan::deallocate_memory(x0_16, (var_b8 - x0_16) s>> 2, 4)
    
    void* x0_17 = var_a0
    
    if (x0_17 != 0)
        void* var_98_1 = x0_17
        int64_t var_90
        Botan::deallocate_memory(x0_17, (var_90 - x0_17) s>> 2, 4)
    
    void* x0_18 = var_78
    
    if (x0_18 != 0)
        void* var_70_2 = x0_18
        Botan::deallocate_memory(x0_18, (var_68_1 - x0_18) s>> 2, 4)

return zx.q(x21_1) & 1
