// 函数: sub_f03404
// 地址: 0xf03404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23_1

if (((*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 2 & 0x3ffffffffffffffe) != arg5)
    x23_1 = 0
else
    void* var_78
    __builtin_memset(&var_78, 0, 0x18)
    int64_t i_18 = -1
    int32_t var_58_1 = 1
    Botan::BigInt::binary_decode(&var_78, arg4)
    void* var_a0
    __builtin_memset(&var_a0, 0, 0x18)
    int64_t i_17 = -1
    int32_t var_80_1 = 1
    Botan::BigInt::binary_decode(&var_a0, arg4 + (arg5 u>> 1))
    char x0_5 = Botan::EC_Group::data()
    
    if (var_80_1 == 0)
        x23_1 = 0
    else
        int64_t i_8 = i_17
        
        if (i_8 == -1)
            void* x9_1 = var_a0
            int64_t var_98
            void* x10_1 = var_98 - x9_1
            
            if (var_98 == x9_1)
                i_8 = 0
                i_17 = 0
            else
                void* x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
                
                void* x11_2 = x9_1 - var_98
                void* x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_8 = x10_1 s>> 2
                void* x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_11 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_1 - 4 + (i_11 << 2))
                    i = i_11
                    i_11 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_8 -= x11_3
                while (i != 1)
                i_17 = i_8
                
                if (i_8 u> 1)
                    goto label_f0358c
            
        label_f03540:
            
            if (i_8 == 0)
                x23_1 = 0
            else
                void* x9_3 = var_a0
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 += 4
                    i_1 = i_8
                    i_8 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                while (i_1 != 1)
                
                if (x10_4 s>= 1)
                    goto label_f0358c
                
                x23_1 = 0
        else
            if (i_8 u<= 1)
                goto label_f03540
            
        label_f0358c:
            x23_1 = 0
            
            if ((Botan::BigInt::cmp(&var_a0, x0_5 - 0x18) & 0x80000000) != 0 && var_58_1 != 0)
                int64_t i_9 = i_18
                
                if (i_9 == -1)
                    void* x9_4 = var_78
                    int64_t var_70
                    void* x10_6 = var_70 - x9_4
                    
                    if (var_70 == x9_4)
                        i_9 = 0
                        int64_t var_60_1 = 0
                    else
                        void* x12_6
                        
                        x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
                        
                        void* x11_10 = x9_4 - var_70
                        void* x12_7
                        
                        x12_7 = x12_6 s< 1 ? x12_6 : 1
                        
                        i_9 = x10_6 s>> 2
                        void* x10_7
                        
                        x10_7 = x11_10 s> x10_6 ? x11_10 : x10_6
                        
                        int64_t i_12 = x12_7 * (x10_7 u>> 2)
                        uint64_t x11_11 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_8 = *(x9_4 - 4 + (i_12 << 2))
                            i_2 = i_12
                            i_12 -= 1
                            x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                            i_9 -= x11_11
                        while (i_2 != 1)
                        int64_t i_19 = i_9
                        
                        if (i_9 u> 1)
                            goto label_f03678
                    
                label_f03630:
                    
                    if (i_9 == 0)
                        x23_1 = 0
                    else
                        void* x9_6 = var_78
                        int32_t x10_9 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_12 = *x9_6
                            x9_6 += 4
                            i_3 = i_9
                            i_9 -= 1
                            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
                            x10_9 = (x10_9 & x11_14) | (not.d(x11_14) & 1)
                        while (i_3 != 1)
                        
                        if (x10_9 s>= 1)
                            goto label_f03678
                        
                        x23_1 = 0
                else
                    if (i_9 u<= 1)
                        goto label_f03630
                    
                label_f03678:
                    
                    if ((Botan::BigInt::cmp(&var_78, x0_5 - 0x18) & 0x80000000) != 0)
                        int128_t var_d0
                        sub_f03d18(&var_d0, arg2, arg3)
                        int128_t v0_1
                        int128_t v1_1
                        v0_1, v1_1 = Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
                        v1_1 = var_d0
                        int128_t var_1d0
                        var_d0 = var_1d0
                        int32_t var_1b0
                        int32_t x8_10 = var_1b0
                        int64_t var_1c0
                        int64_t var_c0_1 = var_1c0
                        int64_t i_20
                        int64_t i_16 = i_20
                        uint64_t x0_17 = v1_1.q
                        int64_t var_c0
                        int64_t var_1c0_1 = var_c0
                        int64_t var_b8
                        int64_t var_1b8 = var_b8
                        var_1d0 = v1_1
                        int32_t var_b0_1 = x8_10
                        int32_t var_b0
                        int32_t var_1b0_1 = var_b0
                        
                        if (x0_17 != 0)
                            var_1d0:8.q = x0_17
                            Botan::deallocate_memory(x0_17, (var_c0 - x0_17) s>> 2, 4)
                            x8_10 = var_b0_1
                        
                        if (x8_10 != 0)
                            int64_t i_10 = i_16
                            
                            if (i_10 == -1)
                                int64_t x9_8 = var_d0.q
                                int64_t x11_18 = var_d0:8.q
                                int64_t x10_13 = x11_18 - x9_8
                                
                                if (x11_18 == x9_8)
                                    i_10 = 0
                                else
                                    int64_t x12_12
                                    
                                    x12_12 = x10_13 s>= 0 ? x10_13 : -1
                                    
                                    int64_t x11_19 = x9_8 - x11_18
                                    int64_t x12_13
                                    
                                    x12_13 = x12_12 s< 1 ? x12_12 : 1
                                    
                                    i_10 = x10_13 s>> 2
                                    int64_t x10_14
                                    
                                    x10_14 = x11_19 s> x10_13 ? x11_19 : x10_13
                                    
                                    int64_t i_13 = x12_13 * (x10_14 u>> 2)
                                    uint64_t x11_20 = 1
                                    int64_t i_4
                                    
                                    do
                                        int32_t x12_14 = *(x9_8 - 4 + (i_13 << 2))
                                        i_4 = i_13
                                        i_13 -= 1
                                        x11_20 = zx.q(x11_20.d)
                                            & zx.q(((x12_14 - 1) & not.d(x12_14)) s>> 0x1f)
                                        i_10 -= x11_20
                                    while (i_4 != 1)
                                
                                i_16 = i_10
                            
                            if (i_10 u<= 1)
                                if (i_10 == 0)
                                label_f03818:
                                    int64_t x21_1 = -1
                                    __builtin_memset(&var_1d0, 0, 0x18)
                                    int32_t var_1b0_2 = 1
                                    int64_t var_1b8_1 = -1
                                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                        &var_1d0)
                                    *var_1d0.q = 1
                                    void* x8_13 = var_1d0.q
                                    int64_t x9_11 = var_1d0:8.q
                                    int64_t var_1b8_2 = -1
                                    
                                    if ((x9_11 - x8_13) s>> 2 u>= 2)
                                        *(x8_13 + 4) = 0
                                        x8_13 = var_1d0.q
                                        x9_11 = var_1d0:8.q
                                        x21_1 = var_1b8_2
                                    
                                    void* x0_19 = var_d0.q
                                    var_d0.q = x8_13
                                    var_d0:8.q = x9_11
                                    int64_t x10_20 = var_c0_1
                                    var_1d0.q = x0_19
                                    var_1c0_1 = x10_20
                                    int64_t i_21 = i_16
                                    int64_t var_1c0_2
                                    var_c0_1 = var_1c0_2
                                    int64_t var_b8_1 = x21_1
                                    int32_t var_b0_2 = var_1b0_2
                                    int32_t var_1b0_3 = var_b0_1
                                    
                                    if (x0_19 != 0)
                                        var_1d0:8.q = x0_19
                                        Botan::deallocate_memory(x0_19, (x10_20 - x0_19) s>> 2, 4)
                                else
                                    int32_t* x9_10 = var_d0.q
                                    int32_t x10_16 = 0
                                    int64_t i_5
                                    
                                    do
                                        int32_t x11_21 = *x9_10
                                        x9_10 = &x9_10[1]
                                        i_5 = i_10
                                        i_10 -= 1
                                        int32_t x11_23 = ((x11_21 - 1) & not.d(x11_21)) s>> 0x1f
                                        x10_16 = (x10_16 & x11_23) | (not.d(x11_23) & 1)
                                    while (i_5 != 1)
                                    
                                    if (x10_16 == 0)
                                        goto label_f03818
                        
                        Botan::inverse_mod(&var_d0, Botan::EC_Group::data() + 0xe8)
                        Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_78)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                            &var_1d0)
                        int64_t i_22 = i_17
                        int64_t i_23 = i_22
                        int32_t var_1b0_4 = var_80_1
                        int32_t x8_16
                        
                        if (var_80_1 != 1)
                            x8_16 = 1
                        else
                            if (i_22 == -1)
                                int64_t x9_14 = var_1d0.q
                                int64_t x11_27 = var_1d0:8.q
                                int64_t x10_21 = x11_27 - x9_14
                                
                                if (x11_27 == x9_14)
                                    i_22 = 0
                                else
                                    int64_t x12_18
                                    
                                    x12_18 = x10_21 s>= 0 ? x10_21 : -1
                                    
                                    int64_t x11_28 = x9_14 - x11_27
                                    int64_t x12_19
                                    
                                    x12_19 = x12_18 s< 1 ? x12_18 : 1
                                    
                                    i_22 = x10_21 s>> 2
                                    int64_t x10_22
                                    
                                    x10_22 = x11_28 s> x10_21 ? x11_28 : x10_21
                                    
                                    int64_t i_14 = x12_19 * (x10_22 u>> 2)
                                    uint64_t x11_29 = 1
                                    int64_t i_6
                                    
                                    do
                                        int32_t x12_20 = *(x9_14 - 4 + (i_14 << 2))
                                        i_6 = i_14
                                        i_14 -= 1
                                        x11_29 = zx.q(x11_29.d)
                                            & zx.q(((x12_20 - 1) & not.d(x12_20)) s>> 0x1f)
                                        i_22 -= x11_29
                                    while (i_6 != 1)
                                
                                int64_t i_24 = i_22
                            
                            x8_16 = i_22 == 0 ? 1 : 0
                        
                        int32_t var_1b0_5 = x8_16
                        Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_1d0)
                        void* x0_30 = var_1d0.q
                        
                        if (x0_30 != 0)
                            var_1d0:8.q = x0_30
                            Botan::deallocate_memory(x0_30, (var_1c0_1 - x0_30) s>> 2, 4)
                        
                        void* var_120
                        Botan::PointGFp_Multi_Point_Precompute::multi_exp(arg1 + 0x40, &var_120)
                        int64_t var_158
                        int64_t x8_19 = var_158
                        
                        if (x8_19 == -1)
                            int64_t var_170
                            int64_t var_168
                            int64_t x10_24 = var_168 - var_170
                            
                            if (var_168 == var_170)
                                x8_19 = 0
                            else
                                int64_t x12_22
                                
                                x12_22 = x10_24 s>= 0 ? x10_24 : -1
                                
                                int64_t x11_31 = var_170 - var_168
                                int64_t x12_23
                                
                                x12_23 = x12_22 s< 1 ? x12_22 : 1
                                
                                x8_19 = x10_24 s>> 2
                                int64_t x10_25
                                
                                x10_25 = x11_31 s> x10_24 ? x11_31 : x10_24
                                
                                int64_t i_15 = x12_23 * (x10_25 u>> 2)
                                uint64_t x11_32 = 1
                                int64_t i_7
                                
                                do
                                    int32_t x12_24 = *(var_170 - 4 + (i_15 << 2))
                                    i_7 = i_15
                                    i_15 -= 1
                                    x11_32 = zx.q(x11_32.d)
                                        & zx.q(((x12_24 - 1) & not.d(x12_24)) s>> 0x1f)
                                    x8_19 -= x11_32
                                while (i_7 != 1)
                            
                            int64_t var_158_1 = x8_19
                        
                        if (x8_19 == 0)
                            x23_1 = 0
                        else
                            Botan::PointGFp::get_affine_x()
                            void* var_1f8
                            int32_t x0_33 = Botan::BigInt::is_equal(&var_1f8)
                            void* x8_20 = var_1f8
                            x23_1 = x0_33
                            
                            if (x8_20 != 0)
                                void* var_1f0_1 = x8_20
                                int64_t var_1e8
                                Botan::deallocate_memory(x8_20, (var_1e8 - x8_20) s>> 2, 4)
                        
                        Botan::PointGFp::~PointGFp()
                        void* var_148
                        
                        if (var_148 != 0)
                            void* var_140_1 = var_148
                            int64_t var_138
                            Botan::deallocate_memory(var_148, (var_138 - var_148) s>> 2, 4)
                        
                        void* x0_36 = var_120
                        
                        if (x0_36 != 0)
                            void* var_118_1 = x0_36
                            int64_t var_110
                            Botan::deallocate_memory(x0_36, (var_110 - x0_36) s>> 2, 4)
                        
                        void* var_f8
                        
                        if (var_f8 != 0)
                            void* var_f0_1 = var_f8
                            int64_t var_e8
                            Botan::deallocate_memory(var_f8, (var_e8 - var_f8) s>> 2, 4)
                        
                        void* x0_38 = var_d0.q
                        
                        if (x0_38 != 0)
                            var_d0:8.q = x0_38
                            Botan::deallocate_memory(x0_38, (var_c0_1 - x0_38) s>> 2, 4)
                    else
                        x23_1 = 0
    
    void* x0_10 = var_a0
    
    if (x0_10 != 0)
        void* var_98_1 = x0_10
        int64_t var_90
        Botan::deallocate_memory(x0_10, (var_90 - x0_10) s>> 2, 4)
    
    void* x0_11 = var_78
    
    if (x0_11 != 0)
        void* var_70_1 = x0_11
        int64_t var_68
        Botan::deallocate_memory(x0_11, (var_68 - x0_11) s>> 2, 4)

return zx.q(x23_1) & 1
