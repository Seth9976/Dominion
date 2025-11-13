// 函数: _ZNK5Botan8EC_Group12verify_groupERNS_21RandomNumberGeneratorEb
// 地址: 0xd29e10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::RandomNumberGenerator* x24 = arg2
int32_t x26 = *(Botan::EC_Group::data() + 0x1f4)
int32_t entry_x2
int64_t __saved_x0

if (x26 != 0 || (entry_x2 & 1) != 0)
    Botan::BigInt* x0_3 = (*(**Botan::EC_Group::data() + 0x10))()
    int64_t* x0_6 = (*(**Botan::EC_Group::data() + 0x18))()
    int64_t* x0_9 = (*(**Botan::EC_Group::data() + 0x20))()
    void* x0_10 = Botan::EC_Group::data()
    void* x0_11 = Botan::EC_Group::data()
    
    if (*(x0_3 + 0x20) == 0)
        __saved_x0 = 0
    else
        int64_t i_15 = *(x0_3 + 0x18)
        
        if (i_15 == -1)
            int64_t x9_1 = *x0_3
            int64_t x11_1 = *(x0_3 + 8)
            int64_t x10_1 = x11_1 - x9_1
            
            if (x11_1 == x9_1)
                i_15 = 0
                *(x0_3 + 0x18) = 0
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_1 - x11_1
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_15 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_23 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_1 - 4 + (i_23 << 2))
                    i = i_23
                    i_23 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_15 -= x11_3
                while (i != 1)
                *(x0_3 + 0x18) = i_15
                
                if (i_15 u> 1)
                    goto label_d29fa0
            
        label_d29f50:
            
            if (i_15 == 0)
                __saved_x0 = 0
            else
                int32_t* x9_3 = *x0_3
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 = &x9_3[1]
                    i_1 = i_15
                    i_15 -= 1
                    int32_t x11_6 = (((x11_4 ^ 3) - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6)
                        | ((((x11_4 - 3) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
                while (i_1 != 1)
                
                if (x10_4 s>= 1 && *(x0_10 + 0x108) != 0)
                    goto label_d29fa4
                
                __saved_x0 = 0
        else
            if (i_15 u<= 1)
                goto label_d29f50
            
        label_d29fa0:
            
            if (*(x0_10 + 0x108) == 0)
                __saved_x0 = 0
            else
            label_d29fa4:
                int64_t i_16 = *(x0_10 + 0x100)
                Botan::BigInt* x21_2
                
                if (i_16 == -1)
                    int64_t x9_4 = *(x0_10 + 0xe8)
                    int64_t x11_7 = *(x0_10 + 0xf0)
                    int64_t x10_6 = x11_7 - x9_4
                    
                    if (x11_7 == x9_4)
                        i_16 = 0
                        *(x0_10 + 0x100) = 0
                        x21_2 = x0_10 + 0xe8
                    else
                        int64_t x12_10
                        
                        x12_10 = x10_6 s>= 0 ? x10_6 : -1
                        
                        int64_t x11_8 = x9_4 - x11_7
                        int64_t x12_11
                        
                        x12_11 = x12_10 s< 1 ? x12_10 : 1
                        
                        i_16 = x10_6 s>> 2
                        int64_t x10_7
                        
                        x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                        
                        int64_t i_24 = x12_11 * (x10_7 u>> 2)
                        uint64_t x11_9 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_12 = *(x9_4 - 4 + (i_24 << 2))
                            i_2 = i_24
                            i_24 -= 1
                            x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                            i_16 -= x11_9
                        while (i_2 != 1)
                        *(x0_10 + 0x100) = i_16
                        x21_2 = x0_10 + 0xe8
                        
                        if (i_16 u> 1)
                            goto label_d2a080
                    
                label_d2a040:
                    
                    if (i_16 == 0)
                        __saved_x0 = 0
                    else
                        int32_t* x9_6 = *x21_2
                        int32_t x10_9 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_10 = *x9_6
                            x9_6 = &x9_6[1]
                            i_3 = i_16
                            i_16 -= 1
                            int32_t x11_12 = ((x11_10 - 1) & not.d(x11_10)) s>> 0x1f
                            x10_9 = (x10_9 & x11_12) | (not.d(x11_12) & 1)
                        while (i_3 != 1)
                        
                        if (x10_9 s>= 1 && x0_6[4].d != 0)
                            goto label_d2a084
                        
                        __saved_x0 = 0
                else
                    x21_2 = x0_10 + 0xe8
                    
                    if (i_16 u<= 1)
                        goto label_d2a040
                    
                label_d2a080:
                    
                    if (x0_6[4].d == 0)
                        __saved_x0 = 0
                    else
                    label_d2a084:
                        int64_t i_17 = x0_6[3]
                        
                        if (i_17 == -1)
                            int64_t x9_7 = *x0_6
                            int64_t x11_15 = x0_6[1]
                            int64_t x10_11 = x11_15 - x9_7
                            
                            if (x11_15 == x9_7)
                                i_17 = 0
                            else
                                int64_t x12_15
                                
                                x12_15 = x10_11 s>= 0 ? x10_11 : -1
                                
                                int64_t x11_16 = x9_7 - x11_15
                                int64_t x12_16
                                
                                x12_16 = x12_15 s< 1 ? x12_15 : 1
                                
                                i_17 = x10_11 s>> 2
                                int64_t x10_12
                                
                                x10_12 = x11_16 s> x10_11 ? x11_16 : x10_11
                                
                                int64_t i_25 = x12_16 * (x10_12 u>> 2)
                                uint64_t x11_17 = 1
                                int64_t i_4
                                
                                do
                                    int32_t x12_17 = *(x9_7 - 4 + (i_25 << 2))
                                    i_4 = i_25
                                    i_25 -= 1
                                    x11_17 = zx.q(x11_17.d)
                                        & zx.q(((x12_17 - 1) & not.d(x12_17)) s>> 0x1f)
                                    i_17 -= x11_17
                                while (i_4 != 1)
                            
                            x0_6[3] = i_17
                        
                        if (i_17 u> 1 || i_17 == 0)
                        label_d2a138:
                            
                            if ((Botan::BigInt::cmp(x0_6, x0_3.b) & 0x80000000) != 0
                                    && x0_9[4].d != 0)
                                int64_t i_18 = x0_9[3]
                                
                                if (i_18 == -1)
                                    int64_t x9_10 = *x0_9
                                    int64_t x11_21 = x0_9[1]
                                    int64_t x10_16 = x11_21 - x9_10
                                    
                                    if (x11_21 == x9_10)
                                        i_18 = 0
                                    else
                                        int64_t x12_20
                                        
                                        x12_20 = x10_16 s>= 0 ? x10_16 : -1
                                        
                                        int64_t x11_22 = x9_10 - x11_21
                                        int64_t x12_21
                                        
                                        x12_21 = x12_20 s< 1 ? x12_20 : 1
                                        
                                        i_18 = x10_16 s>> 2
                                        int64_t x10_17
                                        
                                        x10_17 = x11_22 s> x10_16 ? x11_22 : x10_16
                                        
                                        int64_t i_26 = x12_21 * (x10_17 u>> 2)
                                        uint64_t x11_23 = 1
                                        int64_t i_5
                                        
                                        do
                                            int32_t x12_22 = *(x9_10 - 4 + (i_26 << 2))
                                            i_5 = i_26
                                            i_26 -= 1
                                            x11_23 = zx.q(x11_23.d)
                                                & zx.q(((x12_22 - 1) & not.d(x12_22)) s>> 0x1f)
                                            i_18 -= x11_23
                                        while (i_5 != 1)
                                    
                                    x0_9[3] = i_18
                                
                                if (i_18 u> 1)
                                label_d2a22c:
                                    
                                    if ((Botan::BigInt::cmp(x0_9, x0_3.b) & 0x80000000) == 0)
                                        __saved_x0 = 0
                                    else if ((Botan::is_prime(x0_3, x24, 0x80, (x26 == 0 ? 1 : 0).b)
                                            & 1) == 0)
                                        __saved_x0 = 0
                                    else if ((
                                            Botan::is_prime(x21_2, x24, 0x80, (x26 == 0 ? 1 : 0).b)
                                            & 1) == 0)
                                        __saved_x0 = 0
                                    else
                                        void* var_a8
                                        Botan::Modular_Reducer::Modular_Reducer(&var_a8)
                                        int32_t* var_120
                                        __builtin_memset(&var_120, 0, 0x18)
                                        int32_t var_100_1 = 1
                                        int64_t var_108_1 = -1
                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                            &var_120)
                                        *var_120 = 4
                                        int32_t* x8_12 = var_120
                                        int64_t var_108_2 = -1
                                        int64_t var_118
                                        
                                        if ((var_118 - x8_12) s>> 2 u>= 2)
                                            x8_12[1] = 0
                                        
                                        Botan::Modular_Reducer::cube(&var_a8)
                                        Botan::Modular_Reducer::multiply(&var_a8, &var_120)
                                        int32_t* var_198
                                        __builtin_memset(&var_198, 0, 0x18)
                                        int32_t var_178_1 = 1
                                        int64_t var_180_1 = -1
                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                            &var_198)
                                        *var_198 = 0x1b
                                        int32_t* x8_14 = var_198
                                        int64_t var_180_2 = -1
                                        int64_t var_190
                                        
                                        if ((var_190 - x8_14) s>> 2 u>= 2)
                                            x8_14[1] = 0
                                        
                                        Botan::Modular_Reducer::square(&var_a8)
                                        Botan::Modular_Reducer::multiply(&var_a8, &var_198)
                                        int64_t var_158
                                        int64_t x2_2 = var_158
                                        uint32_t* var_170
                                        
                                        if (x2_2 == -1)
                                            int64_t var_168
                                            void* x9_19 = var_168 - var_170
                                            
                                            if (var_168 == var_170)
                                                x2_2 = 0
                                            else
                                                void* x11_29
                                                
                                                x11_29 = x9_19 s>= 0 ? x9_19 : -ffffffffffffffff
                                                
                                                void* x10_21 = var_170 - var_168
                                                void* x11_30
                                                
                                                x11_30 = x11_29 s< 1 ? x11_29 : 1
                                                
                                                x2_2 = x9_19 s>> 2
                                                void* x9_20
                                                
                                                x9_20 = x10_21 s> x9_19 ? x10_21 : x9_19
                                                
                                                int64_t i_21 = x11_30 * (x9_20 u>> 2)
                                                uint64_t x10_22 = 1
                                                int64_t i_6
                                                
                                                do
                                                    int32_t x11_31 = *(var_170 - 4 + (i_21 << 2))
                                                    i_6 = i_21
                                                    i_21 -= 1
                                                    x10_22 = zx.q(x10_22.d) & zx.q(((x11_31 - 1)
                                                        & not.d(x11_31)) s>> 0x1f)
                                                    x2_2 -= x10_22
                                                while (i_6 != 1)
                                            
                                            int64_t var_158_1 = x2_2
                                        
                                        int32_t var_150
                                        void* var_f8
                                        Botan::BigInt::add2(&var_f8, var_170, x2_2, zx.q(var_150))
                                        Botan::Modular_Reducer::reduce(&var_a8)
                                        void* var_248
                                        
                                        if (var_248 != 0)
                                            void* var_240_1 = var_248
                                            int64_t var_238
                                            Botan::deallocate_memory(var_248, 
                                                (var_238 - var_248) s>> 2, 4)
                                        
                                        if (var_170 != 0)
                                            uint32_t* var_168_1 = var_170
                                            int64_t var_160
                                            Botan::deallocate_memory(var_170, 
                                                (var_160 - var_170) s>> 2, 4)
                                        
                                        void* var_1c0
                                        
                                        if (var_1c0 != 0)
                                            void* var_1b8_1 = var_1c0
                                            int64_t var_1b0
                                            Botan::deallocate_memory(var_1c0, 
                                                (var_1b0 - var_1c0) s>> 2, 4)
                                        
                                        int32_t* x0_33 = var_198
                                        
                                        if (x0_33 != 0)
                                            int32_t* var_190_1 = x0_33
                                            int64_t var_188
                                            Botan::deallocate_memory(x0_33, 
                                                (var_188 - x0_33) s>> 2, 4)
                                        
                                        void* x0_34 = var_f8
                                        
                                        if (x0_34 != 0)
                                            void* var_f0_1 = x0_34
                                            int64_t var_e8
                                            Botan::deallocate_memory(x0_34, (var_e8 - x0_34) s>> 2, 
                                                4)
                                        
                                        void* var_148
                                        
                                        if (var_148 != 0)
                                            void* var_140_1 = var_148
                                            int64_t var_138
                                            Botan::deallocate_memory(var_148, 
                                                (var_138 - var_148) s>> 2, 4)
                                        
                                        int32_t* x0_36 = var_120
                                        
                                        if (x0_36 != 0)
                                            int32_t* var_118_1 = x0_36
                                            int64_t var_110
                                            Botan::deallocate_memory(x0_36, 
                                                (var_110 - x0_36) s>> 2, 4)
                                        
                                        int32_t* var_d0
                                        int32_t var_b0
                                        
                                        if (var_b0 == 0)
                                        label_d2a580:
                                            void* x0_37 = Botan::EC_Group::data()
                                            
                                            if (*(x0_37 + 0x130) == 0)
                                                __saved_x0 = 0
                                            else
                                                int64_t i_20 = *(x0_37 + 0x128)
                                                
                                                if (i_20 == -1)
                                                    int64_t x9_25 = *(x0_37 + 0x110)
                                                    int64_t x11_41 = *(x0_37 + 0x118)
                                                    int64_t x10_28 = x11_41 - x9_25
                                                    
                                                    if (x11_41 == x9_25)
                                                        i_20 = 0
                                                    else
                                                        int64_t x12_31
                                                        
                                                        x12_31 = x10_28 s>= 0 ? x10_28 : -1
                                                        
                                                        int64_t x11_42 = x9_25 - x11_41
                                                        int64_t x12_32
                                                        
                                                        x12_32 = x12_31 s< 1 ? x12_31 : 1
                                                        
                                                        i_20 = x10_28 s>> 2
                                                        int64_t x10_29
                                                        
                                                        x10_29 = x11_42 s> x10_28 ? x11_42 : x10_28
                                                        
                                                        int64_t i_28 = x12_32 * (x10_29 u>> 2)
                                                        uint64_t x11_43 = 1
                                                        int64_t i_7
                                                        
                                                        do
                                                            int32_t x12_33 =
                                                                *(x9_25 - 4 + (i_28 << 2))
                                                            i_7 = i_28
                                                            i_28 -= 1
                                                            x11_43 = zx.q(x11_43.d) & zx.q(((x12_33
                                                                - 1) & not.d(x12_33)) s>> 0x1f)
                                                            i_20 -= x11_43
                                                        while (i_7 != 1)
                                                    
                                                    *(x0_37 + 0x128) = i_20
                                                
                                                if (i_20 u> 1)
                                                label_d2a654:
                                                    
                                                    if ((Botan::PointGFp::on_the_curve() & 1) == 0)
                                                        __saved_x0 = 0
                                                    else
                                                        Botan::operator*(
                                                            Botan::EC_Group::data() + 0x110, 
                                                            x0_11 + 0x10)
                                                        int64_t __saved_x0_1
                                                        __saved_x0 = __saved_x0_1
                                                        int64_t var_1e8
                                                        int64_t var_1e0
                                                        
                                                        if (__saved_x0 == -1)
                                                            int64_t x9_28 = var_1e0 - var_1e8
                                                            
                                                            if (var_1e0 == var_1e8)
                                                                __saved_x0 = 0
                                                            else
                                                                int64_t x11_47
                                                                
                                                                x11_47 = x9_28 s>= 0 ? x9_28 : -1
                                                                
                                                                int64_t x10_34 = var_1e8 - var_1e0
                                                                int64_t x11_48
                                                                
                                                                x11_48 = x11_47 s< 1 ? x11_47 : 1
                                                                
                                                                __saved_x0 = x9_28 s>> 2
                                                                int64_t x9_29
                                                                
                                                                x9_29 = x10_34 s> x9_28 ? x10_34 : x9_28
                                                                
                                                                int64_t i_22 = x11_48 * (x9_29 u>> 2)
                                                                uint64_t x10_35 = 1
                                                                int64_t i_8
                                                                
                                                                do
                                                                    int32_t x11_49 =
                                                                        *(var_1e8 - 4 + (i_22 << 2))
                                                                    i_8 = i_22
                                                                    i_22 -= 1
                                                                    x10_35 = zx.q(x10_35.d) & zx.q(((x11_49
                                                                        - 1) & not.d(x11_49)) s>> 0x1f)
                                                                    __saved_x0 -= x10_35
                                                                while (i_8 != 1)
                                                            
                                                            __saved_x0_1 = __saved_x0
                                                        
                                                        Botan::PointGFp::~PointGFp()
                                                        
                                                        if (__saved_x0 != 0)
                                                            Botan::operator*(x21_2, x0_11 + 0x10)
                                                            int64_t __saved_x0_2 = __saved_x0_1
                                                            
                                                            if (__saved_x0_2 == -1)
                                                                int64_t x10_36 = var_1e0 - var_1e8
                                                                
                                                                if (var_1e0 == var_1e8)
                                                                    __saved_x0_2 = 0
                                                                else
                                                                    int64_t x12_41
                                                                    
                                                                    x12_41 = x10_36 s>= 0 ? x10_36 : -1
                                                                    
                                                                    int64_t x11_52 = var_1e8 - var_1e0
                                                                    int64_t x12_42
                                                                    
                                                                    x12_42 = x12_41 s< 1 ? x12_41 : 1
                                                                    
                                                                    __saved_x0_2 = x10_36 s>> 2
                                                                    int64_t x10_37
                                                                    
                                                                    x10_37 =
                                                                        x11_52 s> x10_36 ? x11_52 : x10_36
                                                                    
                                                                    int64_t i_29 = x12_42 * (x10_37 u>> 2)
                                                                    uint64_t x11_53 = 1
                                                                    int64_t i_9
                                                                    
                                                                    do
                                                                        int32_t x12_43 =
                                                                            *(var_1e8 - 4 + (i_29 << 2))
                                                                        i_9 = i_29
                                                                        i_29 -= 1
                                                                        x11_53 = zx.q(x11_53.d) & zx.q(((x12_43
                                                                            - 1) & not.d(x12_43)) s>> 0x1f)
                                                                        __saved_x0_2 -= x11_53
                                                                    while (i_9 != 1)
                                                                
                                                                int64_t __saved_x0_3 = __saved_x0_2
                                                            
                                                            __saved_x0 =
                                                                zx.q(__saved_x0_2 == 0 ? 1 : 0)
                                                            Botan::PointGFp::~PointGFp()
                                                else if (i_20 == 0)
                                                    __saved_x0 = 0
                                                else
                                                    int32_t* x9_27 = *(x0_37 + 0x110)
                                                    int32_t x10_31 = 0
                                                    int64_t i_10
                                                    
                                                    do
                                                        int32_t x11_44 = *x9_27
                                                        x9_27 = &x9_27[1]
                                                        i_10 = i_20
                                                        i_20 -= 1
                                                        int32_t x11_46 = (((x11_44 ^ 1) - 1)
                                                            & not.d(x11_44)) s>> 0x1f
                                                        x10_31 = (x10_31 & x11_46) | ((
                                                            ((x11_44 - 1) & not.d(x11_44)) s>> 0x1f
                                                            | 1) & not.d(x11_46))
                                                    while (i_10 != 1)
                                                    
                                                    if ((x10_31 & 0x80000000) == 0)
                                                        goto label_d2a654
                                                    
                                                    __saved_x0 = 0
                                        else
                                            int64_t i_30
                                            int64_t i_19 = i_30
                                            
                                            if (i_19 == -1)
                                                int64_t var_c8
                                                void* x10_23 = var_c8 - var_d0
                                                
                                                if (var_c8 == var_d0)
                                                    i_19 = 0
                                                else
                                                    void* x12_26
                                                    
                                                    x12_26 =
                                                        x10_23 s>= 0 ? x10_23 : -ffffffffffffffff
                                                    
                                                    void* x11_34 = var_d0 - var_c8
                                                    void* x12_27
                                                    
                                                    x12_27 = x12_26 s< 1 ? x12_26 : 1
                                                    
                                                    i_19 = x10_23 s>> 2
                                                    void* x10_24
                                                    
                                                    x10_24 = x11_34 s> x10_23 ? x11_34 : x10_23
                                                    
                                                    int64_t i_27 = x12_27 * (x10_24 u>> 2)
                                                    uint64_t x11_35 = 1
                                                    int64_t i_11
                                                    
                                                    do
                                                        int32_t x12_28 = *(var_d0 - 4 + (i_27 << 2))
                                                        i_11 = i_27
                                                        i_27 -= 1
                                                        x11_35 = zx.q(x11_35.d) & zx.q(((x12_28 - 1)
                                                            & not.d(x12_28)) s>> 0x1f)
                                                        i_19 -= x11_35
                                                    while (i_11 != 1)
                                                
                                                int64_t i_31 = i_19
                                            
                                            if (i_19 u> 1)
                                                goto label_d2a580
                                            
                                            if (i_19 == 0)
                                                __saved_x0 = 0
                                            else
                                                int32_t* x9_24 = var_d0
                                                int32_t x10_26 = 0
                                                int64_t i_12
                                                
                                                do
                                                    int32_t x11_36 = *x9_24
                                                    x9_24 = &x9_24[1]
                                                    i_12 = i_19
                                                    i_19 -= 1
                                                    int32_t x11_38 =
                                                        ((x11_36 - 1) & not.d(x11_36)) s>> 0x1f
                                                    x10_26 = (x10_26 & x11_38) | (not.d(x11_38) & 1)
                                                while (i_12 != 1)
                                                
                                                if (x10_26 != 0)
                                                    goto label_d2a580
                                                
                                                __saved_x0 = 0
                                        
                                        if (var_d0 != 0)
                                            int32_t* var_c8_1 = var_d0
                                            int64_t var_c0
                                            Botan::deallocate_memory(var_d0, 
                                                (var_c0 - var_d0) s>> 2, 4)
                                        
                                        void* var_80
                                        
                                        if (var_80 != 0)
                                            void* var_78_1 = var_80
                                            int64_t var_70
                                            Botan::deallocate_memory(var_80, 
                                                (var_70 - var_80) s>> 2, 4)
                                        
                                        void* x0_44 = var_a8
                                        
                                        if (x0_44 != 0)
                                            void* var_a0_1 = x0_44
                                            int64_t var_98
                                            Botan::deallocate_memory(x0_44, (var_98 - x0_44) s>> 2, 
                                                4)
                                else if (i_18 == 0)
                                    __saved_x0 = 0
                                else
                                    int32_t* x9_12 = *x0_9
                                    int32_t x10_19 = 0
                                    int64_t i_13
                                    
                                    do
                                        int32_t x11_24 = *x9_12
                                        x9_12 = &x9_12[1]
                                        i_13 = i_18
                                        i_18 -= 1
                                        int32_t x11_26 = ((x11_24 - 1) & not.d(x11_24)) s>> 0x1f
                                        x10_19 = (x10_19 & x11_26) | (not.d(x11_26) & 1)
                                    while (i_13 != 1)
                                    
                                    if (x10_19 s>= 1)
                                        goto label_d2a22c
                                    
                                    __saved_x0 = 0
                            else
                                __saved_x0 = 0
                        else
                            int32_t* x9_9 = *x0_6
                            int32_t x10_14 = 0
                            int32_t x11_20
                            int64_t i_14
                            
                            do
                                int32_t x11_18 = *x9_9
                                x9_9 = &x9_9[1]
                                i_14 = i_17
                                i_17 -= 1
                                x11_20 = (x10_14 ^ 1) & ((x11_18 - 1) & not.d(x11_18)) s>> 0x1f
                                x10_14 = x11_20 ^ 1
                            while (i_14 != 1)
                            
                            if ((x11_20 & 0x80000000) == 0)
                                goto label_d2a138
                            
                            __saved_x0 = 0
else
    __saved_x0 = 1

return zx.q(__saved_x0.d)
