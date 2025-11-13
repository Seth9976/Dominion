// 函数: sub_ef6b14
// 地址: 0xef6b14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x21 = Botan::DL_Group::data() + 0x28
int64_t x0_3 = Botan::BigInt::bits()
int64_t x8_2

if ((x0_3 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0_3 & 7)

uint64_t x26 = (x8_2 + x0_3) u>> 3
int32_t x22 = 0

if (x26 u>= arg3 && x26 << 1 == arg5)
    void* var_88
    __builtin_memset(&var_88, 0, 0x18)
    int64_t i_10 = -1
    int32_t var_68_1 = 1
    Botan::BigInt::binary_decode(&var_88, arg4)
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    int64_t i_8 = -1
    int32_t var_90_1 = 1
    Botan::BigInt::binary_decode(&var_b0, arg4 + x26)
    int64_t x0_7 = Botan::BigInt::bits()
    int64_t var_c8_1 = 0
    int64_t var_c0_1 = -1
    uint64_t x24_1
    
    if (x0_7 u< arg3 << 3)
        x24_1 = (x0_7 + 7) u>> 3
    else
        x24_1 = arg3
    
    void* var_d8 = nullptr
    int64_t var_d0_1 = 0
    int32_t var_b8_1 = 1
    Botan::BigInt::binary_decode(&var_d8, arg2)
    
    if (x0_7 u< x24_1 << 3)
        Botan::BigInt::operator>>=(&var_d8)
    
    int64_t var_a0
    
    if (var_68_1 == 0)
        x22 = 0
    else
        int64_t i_4 = i_10
        
        if (i_4 == -1)
            void* x9_1 = var_88
            int64_t var_80
            void* x10_2 = var_80 - x9_1
            
            if (var_80 == x9_1)
                i_4 = 0
                int64_t var_70_1 = 0
            else
                void* x12_1
                
                x12_1 = x10_2 s>= 0 ? x10_2 : -ffffffffffffffff
                
                void* x11_2 = x9_1 - var_80
                void* x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_4 = x10_2 s>> 2
                void* x10_3
                
                x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
                
                int64_t i_6 = x12_2 * (x10_3 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_1 - 4 + (i_6 << 2))
                    i = i_6
                    i_6 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_4 -= x11_3
                while (i != 1)
                int64_t i_11 = i_4
                
                if (i_4 u> 1)
                    goto label_ef6d0c
            
        label_ef6cc4:
            
            if (i_4 == 0)
                x22 = 0
            else
                void* x9_3 = var_88
                int32_t x10_5 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 += 4
                    i_1 = i_4
                    i_4 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_5 = (x10_5 & x11_6) | (not.d(x11_6) & 1)
                while (i_1 != 1)
                
                if (x10_5 s>= 1)
                    goto label_ef6d0c
                
                x22 = 0
        else
            if (i_4 u<= 1)
                goto label_ef6cc4
            
        label_ef6d0c:
            x22 = 0
            
            if ((Botan::BigInt::cmp(&var_88, x21.b) & 0x80000000) != 0 && var_90_1 != 0)
                int64_t i_5 = i_8
                
                if (i_5 == -1)
                    void* x9_4 = var_b0
                    int64_t var_a8
                    void* x10_7 = var_a8 - x9_4
                    
                    if (var_a8 == x9_4)
                        i_5 = 0
                        int64_t var_98_1 = 0
                    else
                        void* x12_6
                        
                        x12_6 = x10_7 s>= 0 ? x10_7 : -ffffffffffffffff
                        
                        void* x11_10 = x9_4 - var_a8
                        void* x12_7
                        
                        x12_7 = x12_6 s< 1 ? x12_6 : 1
                        
                        i_5 = x10_7 s>> 2
                        void* x10_8
                        
                        x10_8 = x11_10 s> x10_7 ? x11_10 : x10_7
                        
                        int64_t i_7 = x12_7 * (x10_8 u>> 2)
                        uint64_t x11_11 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_8 = *(x9_4 - 4 + (i_7 << 2))
                            i_2 = i_7
                            i_7 -= 1
                            x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                            i_5 -= x11_11
                        while (i_2 != 1)
                        int64_t i_9 = i_5
                        
                        if (i_5 u> 1)
                            goto label_ef6df8
                    
                label_ef6db0:
                    
                    if (i_5 == 0)
                        x22 = 0
                    else
                        void* x9_6 = var_b0
                        int32_t x10_10 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_12 = *x9_6
                            x9_6 += 4
                            i_3 = i_5
                            i_5 -= 1
                            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
                            x10_10 = (x10_10 & x11_14) | (not.d(x11_14) & 1)
                        while (i_3 != 1)
                        
                        if (x10_10 s>= 1)
                            goto label_ef6df8
                        
                        x22 = 0
                else
                    if (i_5 u<= 1)
                        goto label_ef6db0
                    
                label_ef6df8:
                    
                    if ((Botan::BigInt::cmp(&var_b0, x21.b) & 0x80000000) != 0)
                        Botan::inverse_mod(&var_b0, x21)
                        void* x0_19 = var_b0
                        int128_t var_100
                        var_b0.o = var_100
                        
                        if (x0_19 != 0)
                            Botan::deallocate_memory(x0_19, (var_a0 - x0_19) s>> 2, 4)
                        
                        Botan::DL_Group::multiply_mod_q(arg1 + 0x30, &var_b0)
                        Botan::DL_Group::multiply_mod_q(arg1 + 0x30, &var_b0)
                        void* var_128
                        Botan::DL_Group::multi_exponentiate(arg1 + 0x30, &var_128, *(arg1 + 0x40))
                        void* x0_23 = var_b0
                        int64_t var_140
                        var_a0 = var_140
                        int64_t var_138
                        int64_t var_98_3 = var_138
                        int64_t var_e8
                        int64_t var_138_1 = var_e8
                        int128_t var_150
                        var_b0.o = var_150
                        var_150.q = x0_23
                        int32_t var_130
                        int32_t var_90_3 = var_130
                        int32_t var_e0
                        int32_t var_130_1 = var_e0
                        int64_t var_f0
                        
                        if (x0_23 != 0)
                            var_150:8.q = x0_23
                            Botan::deallocate_memory(x0_23, (var_f0 - x0_23) s>> 2, 4)
                        
                        Botan::operator%(&var_b0, Botan::DL_Group::data() + 0x28)
                        int32_t x0_28 = Botan::BigInt::is_equal(&var_150)
                        void* x8_19 = var_150.q
                        x22 = x0_28
                        
                        if (x8_19 != 0)
                            var_150:8.q = x8_19
                            Botan::deallocate_memory(x8_19, (var_f0 - x8_19) s>> 2, 4)
                        
                        void* x0_30 = var_128
                        
                        if (x0_30 != 0)
                            void* var_120_1 = x0_30
                            int64_t var_118
                            Botan::deallocate_memory(x0_30, (var_118 - x0_30) s>> 2, 4)
                        
                        void* x0_31 = var_100.q
                        
                        if (x0_31 != 0)
                            var_100:8.q = x0_31
                            Botan::deallocate_memory(x0_31, (var_f0 - x0_31) s>> 2, 4)
                    else
                        x22 = 0
    
    void* x0_14 = var_d8
    
    if (x0_14 != 0)
        void* var_d0_2 = x0_14
        Botan::deallocate_memory(x0_14, (var_c8_1 - x0_14) s>> 2, 4)
    
    void* x0_15 = var_b0
    
    if (x0_15 != 0)
        void* var_a8_1 = x0_15
        Botan::deallocate_memory(x0_15, (var_a0 - x0_15) s>> 2, 4)
    
    void* x0_16 = var_88
    
    if (x0_16 != 0)
        void* var_80_1 = x0_16
        int64_t var_78
        Botan::deallocate_memory(x0_16, (var_78 - x0_16) s>> 2, 4)

return zx.q(x22) & 1
