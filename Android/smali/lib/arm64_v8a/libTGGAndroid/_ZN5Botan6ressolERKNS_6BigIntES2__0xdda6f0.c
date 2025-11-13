// 函数: _ZN5Botan6ressolERKNS_6BigIntES2_
// 地址: 0xdda6f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_e0

if (*(arg2 + 0x20) != 0)
    int64_t i_18 = *(arg2 + 0x18)
    char* x9_1
    
    if (i_18 == -1)
        int64_t x9_2 = *arg2
        int64_t x11_1 = *(arg2 + 8)
        int64_t x10_1 = x11_1 - x9_2
        
        if (x11_1 != x9_2)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_2 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_18 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_24 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_2 - 4 + (i_24 << 2))
                i = i_24
                i_24 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_18 -= x11_3
            while (i != 1)
            *(arg2 + 0x18) = i_18
            x9_1 = *arg2
            
            if (i_18 u> 1)
                goto label_dda808
            
            goto label_dda7b8
        
        i_18 = 0
        *(arg2 + 0x18) = 0
        x9_1 = *arg2
    label_dda7b8:
        
        if (i_18 != 0)
            int32_t x10_4 = 0
            char* x11_4 = x9_1
            int64_t i_1
            
            do
                int32_t x12_5 = *x11_4
                x11_4 = &x11_4[4]
                i_1 = i_18
                i_18 -= 1
                int32_t x12_7 = (((x12_5 ^ 1) - 1) & not.d(x12_5)) s>> 0x1f
                x10_4 =
                    (x10_4 & x12_7) | ((((x12_5 - 1) & not.d(x12_5)) s>> 0x1f | 1) & not.d(x12_7))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_dda808
    else
        x9_1 = *arg2
        
        if (i_18 u<= 1)
            goto label_dda7b8
        
    label_dda808:
        
        if (*(arg2 + 8) != x9_1 && (zx.d(*x9_1) & 1) != 0)
            int128_t var_df
            
            if (*(arg1 + 0x20) != 0)
                int64_t i_19 = *(arg1 + 0x18)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8
                
                if (i_19 == -1)
                    int64_t x9_4 = *arg1
                    int64_t x11_5 = *(arg1 + 8)
                    int64_t x10_6 = x11_5 - x9_4
                    
                    if (x11_5 == x9_4)
                        i_19 = 0
                        *(arg1 + 0x18) = 0
                    label_dda8b0:
                        int32_t x10_9
                        
                        if (i_19 != 0)
                            int32_t* x9_6 = *arg1
                            x10_9 = 0
                            int64_t i_34 = i_19
                            int64_t i_2
                            
                            do
                                int32_t x12_12 = *x9_6
                                x9_6 = &x9_6[1]
                                i_2 = i_34
                                i_34 -= 1
                                int32_t x12_14 = ((x12_12 - 1) & not.d(x12_12)) s>> 0x1f
                                x10_9 = (x10_9 & x12_14) | (not.d(x12_14) & 1)
                            while (i_2 != 1)
                        
                        if (i_19 == 0 || x10_9 == 0)
                            __builtin_memset(entry_x8, 0, 0x18)
                            *(entry_x8 + 0x18) = -1
                            *(entry_x8 + 0x20) = 1
                            return 
                    else
                        int64_t x12_8
                        
                        x12_8 = x10_6 s>= 0 ? x10_6 : -1
                        
                        int64_t x11_6 = x9_4 - x11_5
                        int64_t x12_9
                        
                        x12_9 = x12_8 s< 1 ? x12_8 : 1
                        
                        i_19 = x10_6 s>> 2
                        int64_t x10_7
                        
                        x10_7 = x11_6 s> x10_6 ? x11_6 : x10_6
                        
                        int64_t i_25 = x12_9 * (x10_7 u>> 2)
                        uint64_t x11_7 = 1
                        int64_t i_3
                        
                        do
                            int32_t x12_10 = *(x9_4 - 4 + (i_25 << 2))
                            i_3 = i_25
                            i_25 -= 1
                            x11_7 = zx.q(x11_7.d) & zx.q(((x12_10 - 1) & not.d(x12_10)) s>> 0x1f)
                            i_19 -= x11_7
                        while (i_3 != 1)
                        *(arg1 + 0x18) = i_19
                        
                        if (i_19 u<= 1)
                            goto label_dda8b0
                else if (i_19 u<= 1)
                    goto label_dda8b0
                
                if (i_19 == -1)
                    int64_t x9_7 = *arg1
                    int64_t x11_8 = *(arg1 + 8)
                    int64_t x10_11 = x11_8 - x9_7
                    
                    if (x11_8 == x9_7)
                        i_19 = 0
                        *(arg1 + 0x18) = 0
                        
                        if (i_19 == 0)
                            goto label_dda9cc
                        
                        goto label_dda994
                    
                    int64_t x12_17
                    
                    x12_17 = x10_11 s>= 0 ? x10_11 : -1
                    
                    int64_t x11_9 = x9_7 - x11_8
                    int64_t x12_18
                    
                    x12_18 = x12_17 s< 1 ? x12_17 : 1
                    
                    i_19 = x10_11 s>> 2
                    int64_t x10_12
                    
                    x10_12 = x11_9 s> x10_11 ? x11_9 : x10_11
                    
                    int64_t i_26 = x12_18 * (x10_12 u>> 2)
                    uint64_t x11_10 = 1
                    int64_t i_4
                    
                    do
                        int32_t x12_19 = *(x9_7 - 4 + (i_26 << 2))
                        i_4 = i_26
                        i_26 -= 1
                        x11_10 = zx.q(x11_10.d) & zx.q(((x12_19 - 1) & not.d(x12_19)) s>> 0x1f)
                        i_19 -= x11_10
                    while (i_4 != 1)
                    *(arg1 + 0x18) = i_19
                    
                    if (i_19 u<= 1 && i_19 != 0)
                        goto label_dda994
                    
                    goto label_dda9cc
                
                if (i_19 u> 1 || i_19 == 0)
                label_dda9cc:
                    
                    if ((Botan::BigInt::cmp(arg1, arg2.b) & 0x80000000) == 0)
                        void** x0_66 = __cxa_allocate_exception(0x20)
                        int64_t x0_67
                        int128_t v0_8
                        x0_67, v0_8 = operator new(0x30)
                        (*"t be less than p")[0].o
                        var_df:0xf.q = x0_67
                        v0_8 = data_71a900
                        __builtin_strncpy(x0_67, "ressol: value to solve for must be less than p", 
                            0x2f)
                        var_e0.o = v0_8
                        *x0_66 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_66[1])
                        *x0_66 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_66, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    if (*(arg2 + 0x20) == 0)
                    label_ddaabc:
                        
                        if (Botan::jacobi(arg1, arg2) != 1)
                            __builtin_memset(&var_e0, 0, 0x18)
                            int32_t var_c0_1 = 1
                            int64_t var_c8_1 = -1
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                &var_e0)
                            *var_e0.q = 1
                            void* x8_14 = var_e0.q
                            int64_t var_c8_2 = -1
                            
                            if ((var_df:7.q - x8_14) s>> 2 u>= 2)
                                *(x8_14 + 4) = 0
                            
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                                entry_x8)
                            int64_t x8_15 = var_c8_2
                            *(entry_x8 + 0x18) = x8_15
                            *(entry_x8 + 0x20) = var_c0_1
                            
                            if (var_c0_1 != 1)
                                arg1 = var_e0.q
                                *(entry_x8 + 0x20) = 1
                                
                                if (arg1 != 0)
                                label_ddb6e4:
                                    int64_t x8_62 = var_df:0xf.q
                                    var_df:7.q = arg1
                                    Botan::deallocate_memory(arg1, (x8_62 - arg1) s>> 2, 4)
                            else
                                if (x8_15 == -1)
                                    int64_t x9_19 = *entry_x8
                                    int64_t x11_20 = *(entry_x8 + 8)
                                    int64_t x10_22 = x11_20 - x9_19
                                    
                                    if (x11_20 == x9_19)
                                        x8_15 = 0
                                    else
                                        int64_t x12_31
                                        
                                        x12_31 = x10_22 s>= 0 ? x10_22 : -1
                                        
                                        int64_t x11_21 = x9_19 - x11_20
                                        int64_t x12_32
                                        
                                        x12_32 = x12_31 s< 1 ? x12_31 : 1
                                        
                                        x8_15 = x10_22 s>> 2
                                        int64_t x10_23
                                        
                                        x10_23 = x11_21 s> x10_22 ? x11_21 : x10_22
                                        
                                        int64_t i_28 = x12_32 * (x10_23 u>> 2)
                                        uint64_t x11_22 = 1
                                        int64_t i_5
                                        
                                        do
                                            int32_t x12_33 = *(x9_19 - 4 + (i_28 << 2))
                                            i_5 = i_28
                                            i_28 -= 1
                                            x11_22 = zx.q(x11_22.d)
                                                & zx.q(((x12_33 - 1) & not.d(x12_33)) s>> 0x1f)
                                            x8_15 -= x11_22
                                        while (i_5 != 1)
                                    
                                    *(entry_x8 + 0x18) = x8_15
                                
                                arg1 = var_e0.q
                                *(entry_x8 + 0x20) = x8_15 == 0 ? 1 : 0
                                
                                if (arg1 != 0)
                                    goto label_ddb6e4
                        else
                            int32_t* x8_4 = *arg2
                            int128_t var_110
                            uint32_t var_80
                            int64_t var_70
                            
                            if (*(arg2 + 8) == x8_4)
                            label_ddac54:
                                var_80 = 1
                                Botan::BigInt::add2(arg2, &var_80, 1, 0)
                                void* x0_11 = var_e0.q
                                int64_t x10_25 = var_df:7.q
                                void* x11_23 = x10_25 - x0_11
                                int32_t x22_1
                                int64_t x23_1
                                
                                if (x10_25 == x0_11)
                                    x22_1 = 0
                                    x23_1 = 0
                                else
                                    void* x12_35
                                    
                                    x12_35 = x11_23 s>= 0 ? x11_23 : -ffffffffffffffff
                                    
                                    void* x10_26 = x0_11 - x10_25
                                    void* x12_36
                                    
                                    x12_36 = x12_35 s< 1 ? x12_35 : 1
                                    
                                    void* x10_27
                                    
                                    x10_27 = x10_26 s> x11_23 ? x10_26 : x11_23
                                    
                                    x23_1 = 0
                                    int64_t i_6 = 0
                                    x22_1 = 0
                                    
                                    do
                                        int32_t x11_24
                                        
                                        if (x11_23 s>> 2 u> i_6)
                                            x11_24 = *(x0_11 + (i_6 << 2))
                                        else
                                            x11_24 = 0
                                        
                                        int32_t x13_17 = ((x11_24 & 0xffff) - 1) u>> 0x1b & 0x10
                                        int32_t x12_38 = (x11_24 - 1) & not.d(x11_24)
                                        uint32_t x11_25 = x11_24 u>> x13_17
                                        int32_t x14_6 = ((x11_25 & 0xff) - 1) u>> 0x1c & 8
                                        uint32_t x11_26 = x11_25 u>> x14_6
                                        int32_t x14_10 = ((x11_26 & 0xf) - 1) u>> 0x1d & 4
                                        uint32_t x11_27 = x11_26 u>> x14_10
                                        int32_t x14_14 = ((x11_27 & 3) - 1) u>> 0x1e & 2
                                        i_6 += 1
                                        x23_1 += zx.q(((x13_17 & 0xfffffffe)
                                            | (x12_38 & 0x80000000) u>> 0x1f | x14_6 | x14_10
                                            | x14_14) + (((x11_27 u>> x14_14 & 1) - 1) u>> 0x1f))
                                            & zx.q(not.d(x22_1))
                                        x22_1 |= not.d(x12_38 s>> 0x1f)
                                    while (x12_36 * (x10_27 u>> 2) != i_6)
                                
                                if (x0_11 != 0)
                                    int64_t x8_16 = var_df:0xf.q
                                    var_df:7.q = x0_11
                                    Botan::deallocate_memory(x0_11, (x8_16 - x0_11) s>> 2, 4)
                                
                                uint64_t x22_2 = zx.q(x23_1.d) & zx.q(x22_1)
                                Botan::operator>>(arg2, x22_2)
                                var_e0.d = 1
                                Botan::BigInt::add(&var_80, &var_e0, 1)
                                Botan::BigInt::operator>>=(&var_80)
                                Botan::Modular_Reducer::Modular_Reducer(&var_e0)
                                Botan::power_mod(arg1, &var_80, arg2)
                                Botan::Modular_Reducer::square(&var_e0)
                                Botan::Modular_Reducer::multiply(&var_e0, arg1)
                                void* var_170
                                void* x0_19 = var_170
                                int64_t var_160
                                
                                if (x0_19 != 0)
                                    void* var_168_1 = x0_19
                                    Botan::deallocate_memory(x0_19, (var_160 - x0_19) s>> 2, 4)
                                
                                int128_t v0_1
                                int128_t v1_1
                                v0_1, v1_1 = Botan::Modular_Reducer::multiply(&var_e0, &var_110)
                                v1_1 = var_110
                                int64_t var_100_1 = var_160
                                int64_t var_158
                                int64_t var_f8_1 = var_158
                                uint64_t x0_21 = v1_1.q
                                int64_t var_100
                                int64_t var_160_1 = var_100
                                int64_t var_f8
                                int64_t var_158_1 = var_f8
                                var_110 = var_170.o
                                var_170.o = v1_1
                                int32_t var_150
                                int32_t var_f0_1 = var_150
                                int32_t var_f0
                                int32_t var_150_1 = var_f0
                                
                                if (x0_21 != 0)
                                    uint64_t var_168_2 = x0_21
                                    Botan::deallocate_memory(x0_21, (var_100 - x0_21) s>> 2, 4)
                                
                                void* var_140
                                int64_t var_130
                                int32_t var_120
                                int64_t var_138
                                int64_t i_35
                                
                                if (var_120 == 0)
                                label_ddaf8c:
                                    int64_t x21_2 = 2
                                    
                                    while (true)
                                        Botan::BigInt::BigInt(&var_170)
                                        int32_t x0_25 = Botan::jacobi(&var_170, arg2)
                                        void* x0_26 = var_170
                                        
                                        if (x0_26 != 0)
                                            void* var_168_3 = x0_26
                                            Botan::deallocate_memory(x0_26, 
                                                (var_160_1 - x0_26) s>> 2, 4)
                                        
                                        if (x0_25 == 0xffffffff)
                                            void* var_1a0
                                            Botan::BigInt::BigInt(&var_1a0)
                                            Botan::operator<<(&var_80, 1)
                                            uint32_t var_54 = 1
                                            void* var_1f0
                                            Botan::BigInt::add2(&var_1f0, &var_54, 1, 1)
                                            void* var_1c8
                                            Botan::power_mod(&var_1a0, &var_1c8, arg2)
                                            void* x0_33 = var_1c8
                                            
                                            if (x0_33 != 0)
                                                void* var_1c0_1 = x0_33
                                                int64_t var_1b8
                                                Botan::deallocate_memory(x0_33, 
                                                    (var_1b8 - x0_33) s>> 2, 4)
                                            
                                            void* x0_34 = var_1f0
                                            
                                            if (x0_34 != 0)
                                                void* var_1e8_1 = x0_34
                                                int64_t var_1e0
                                                Botan::deallocate_memory(x0_34, 
                                                    (var_1e0 - x0_34) s>> 2, 4)
                                            
                                            void* x0_35 = var_1a0
                                            int64_t var_190
                                            
                                            if (x0_35 != 0)
                                                void* var_198_1 = x0_35
                                                Botan::deallocate_memory(x0_35, 
                                                    (var_190 - x0_35) s>> 2, 4)
                                            
                                            if (var_120 == 0)
                                            label_ddb5a4:
                                                int128_t v0_2 = var_110
                                                __builtin_memset(&var_110, 0, 0x18)
                                                int64_t var_f8_2 = -1
                                                *entry_x8 = v0_2
                                                *(entry_x8 + 0x10) = var_100_1
                                                *(entry_x8 + 0x18) = var_f8_1
                                                *(entry_x8 + 0x20) = var_f0_1
                                                int32_t var_f0_2 = 1
                                            else
                                            label_ddb16c:
                                                int64_t i_22 = i_35
                                                void* x1_29
                                                
                                                if (i_22 == -1)
                                                    void* x9_33 = var_140
                                                    void* x10_40 = var_138 - x9_33
                                                    
                                                    if (var_138 == x9_33)
                                                        i_22 = 0
                                                        i_35 = 0
                                                        x1_29 = var_140
                                                    label_ddb208:
                                                        
                                                        if (i_22 == 0)
                                                            goto label_ddb5a4
                                                        
                                                        int32_t x9_35 = 0
                                                        void* x10_43 = x1_29
                                                        int64_t i_7
                                                        
                                                        do
                                                            int32_t x11_46 = *x10_43
                                                            x10_43 += 4
                                                            i_7 = i_22
                                                            i_22 -= 1
                                                            int32_t x11_48 = (((x11_46 ^ 1) - 1)
                                                                & not.d(x11_46)) s>> 0x1f
                                                            x9_35 = (x9_35 & x11_48) | ((
                                                                ((x11_46 - 1) & not.d(x11_46)) s>> 0x1f
                                                                | 1) & not.d(x11_48))
                                                        while (i_7 != 1)
                                                        
                                                        if (x9_35 s< 1)
                                                            goto label_ddb5a4
                                                    else
                                                        void* x12_52
                                                        
                                                        x12_52 = x10_40 s>= 0 ? x10_40
                                                            : -ffffffffffffffff
                                                        
                                                        void* x11_44 = x9_33 - var_138
                                                        void* x12_53
                                                        
                                                        x12_53 = x12_52 s< 1 ? x12_52 : 1
                                                        
                                                        i_22 = x10_40 s>> 2
                                                        void* x10_41
                                                        
                                                        x10_41 = x11_44 s> x10_40 ? x11_44 : x10_40
                                                        
                                                        int64_t i_31 = x12_53 * (x10_41 u>> 2)
                                                        uint64_t x11_45 = 1
                                                        int64_t i_8
                                                        
                                                        do
                                                            int32_t x12_54 =
                                                                *(x9_33 - 4 + (i_31 << 2))
                                                            i_8 = i_31
                                                            i_31 -= 1
                                                            x11_45 = zx.q(x11_45.d) & zx.q(((x12_54
                                                                - 1) & not.d(x12_54)) s>> 0x1f)
                                                            i_22 -= x11_45
                                                        while (i_8 != 1)
                                                        i_35 = i_22
                                                        x1_29 = var_140
                                                        
                                                        if (i_22 u<= 1)
                                                            goto label_ddb208
                                                else
                                                    x1_29 = var_140
                                                    
                                                    if (i_22 u<= 1)
                                                        goto label_ddb208
                                                
                                                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                                                    &var_80, x1_29)
                                                uint64_t x10_44
                                                
                                                x10_44 = x22_2 u> 1 ? x22_2 : 1
                                                
                                                uint64_t x24_1 = 0
                                                int64_t i_36 = i_35
                                                int32_t var_60_1 = var_120
                                                
                                                if (var_120 == 0)
                                                    goto label_ddb368
                                                
                                                while (true)
                                                    int64_t i_23 = i_36
                                                    int64_t i_37
                                                    int32_t var_180
                                                    
                                                    if (i_23 == -1)
                                                        int64_t x9_38 = var_80.q
                                                        int64_t var_78
                                                        int64_t x10_45 = var_78 - x9_38
                                                        
                                                        if (var_78 == x9_38)
                                                            i_23 = 0
                                                            i_36 = 0
                                                        label_ddb314:
                                                            
                                                            if (i_23 != 0)
                                                                int32_t* x9_40 = var_80.q
                                                                int32_t x10_48 = 0
                                                                int64_t i_9
                                                                
                                                                do
                                                                    int32_t x11_52 = *x9_40
                                                                    x9_40 = &x9_40[1]
                                                                    i_9 = i_23
                                                                    i_23 -= 1
                                                                    int32_t x11_54 = (((x11_52 ^ 1) - 1)
                                                                        & not.d(x11_52)) s>> 0x1f
                                                                    x10_48 = (x10_48 & x11_54) | ((
                                                                        ((x11_52 - 1) & not.d(x11_52)) s>> 0x1f
                                                                        | 1) & not.d(x11_54))
                                                                while (i_9 != 1)
                                                                
                                                                if (x10_48 == 0)
                                                                    uint64_t x25_2 = x22_2 + not.q(x24_1)
                                                                    __builtin_memset(&var_1c8, 0, 0x18)
                                                                    int32_t var_1a8_1 = 1
                                                                    int64_t var_1b0_1 = -1
                                                                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                                                        &var_1c8)
                                                                    *(var_1c8 + (x25_2 u>> 5 << 2)) =
                                                                        1 << x25_2.d
                                                                    int128_t v0_4
                                                                    int128_t v1_2
                                                                    v0_4, v1_2 = Botan::power_mod(&var_170, 
                                                                        &var_1c8, arg2)
                                                                    v1_2 = var_170.o
                                                                    uint64_t x0_41 = v1_2.q
                                                                    var_170.o = var_1a0.o
                                                                    var_1a0.o = v1_2
                                                                    
                                                                    if (x0_41 != 0)
                                                                        uint64_t var_198_3 = x0_41
                                                                        Botan::deallocate_memory(x0_41, 
                                                                            (var_160_1 - x0_41) s>> 2, 4)
                                                                    
                                                                    void* x0_42 = var_1c8
                                                                    
                                                                    if (x0_42 != 0)
                                                                        void* var_1c0_2 = x0_42
                                                                        int64_t var_1b8_1
                                                                        Botan::deallocate_memory(x0_42, 
                                                                            (var_1b8_1 - x0_42) s>> 2, 4)
                                                                    
                                                                    Botan::Modular_Reducer::multiply(
                                                                        &var_e0, &var_110)
                                                                    void* x0_44 = var_110.q
                                                                    int64_t x8_50 = var_100_1
                                                                    int64_t x11_56 = var_f8_1
                                                                    var_100_1 = var_160_1
                                                                    var_f8_1 = var_158_1
                                                                    int32_t x9_47 = var_f0_1
                                                                    var_110 = var_1a0.o
                                                                    var_1a0 = x0_44
                                                                    var_f0_1 = var_150_1
                                                                    
                                                                    if (x0_44 != 0)
                                                                        void* var_198_4 = x0_44
                                                                        Botan::deallocate_memory(x0_44, 
                                                                            (x8_50 - x0_44) s>> 2, 4)
                                                                    
                                                                    Botan::Modular_Reducer::square(&var_e0)
                                                                    void* x0_46 = var_170
                                                                    var_160_1 = x8_50
                                                                    var_158_1 = x11_56
                                                                    var_170.o = var_1a0.o
                                                                    var_1a0 = x0_46
                                                                    var_150_1 = x9_47
                                                                    
                                                                    if (x0_46 != 0)
                                                                        void* var_198_5 = x0_46
                                                                        Botan::deallocate_memory(x0_46, 
                                                                            (var_190 - x0_46) s>> 2, 4)
                                                                    
                                                                    Botan::Modular_Reducer::multiply(
                                                                        &var_e0, &var_140)
                                                                    void* x0_48 = var_140
                                                                    int64_t x9_50 = var_130
                                                                    int64_t i_39 = i_35
                                                                    var_130 = var_190
                                                                    i_35 = i_37
                                                                    int32_t x10_59 = var_120
                                                                    int32_t x8_55 = var_180
                                                                    var_190 = x9_50
                                                                    i_37 = i_39
                                                                    var_140.o = var_1a0.o
                                                                    var_1a0 = x0_48
                                                                    var_120 = x8_55
                                                                    var_180 = x10_59
                                                                    
                                                                    if (x0_48 != 0)
                                                                        void* var_198_6 = x0_48
                                                                        Botan::deallocate_memory(x0_48, 
                                                                            (x9_50 - x0_48) s>> 2, 4)
                                                                        x8_55 = var_120
                                                                    
                                                                    x22_2 = x24_1
                                                                    
                                                                    if (x8_55 != 0)
                                                                        goto label_ddb16c
                                                                    
                                                                    goto label_ddb5a4
                                                        else
                                                            int64_t x12_61
                                                            
                                                            x12_61 = x10_45 s>= 0 ? x10_45 : -1
                                                            
                                                            int64_t x11_50 = x9_38 - var_78
                                                            int64_t x12_62
                                                            
                                                            x12_62 = x12_61 s< 1 ? x12_61 : 1
                                                            
                                                            i_23 = x10_45 s>> 2
                                                            int64_t x10_46
                                                            
                                                            x10_46 =
                                                                x11_50 s> x10_45 ? x11_50 : x10_45
                                                            
                                                            int64_t i_32 = x12_62 * (x10_46 u>> 2)
                                                            uint64_t x11_51 = 1
                                                            int64_t i_10
                                                            
                                                            do
                                                                int32_t x12_63 =
                                                                    *(x9_38 - 4 + (i_32 << 2))
                                                                i_10 = i_32
                                                                i_32 -= 1
                                                                x11_51 = zx.q(x11_51.d) & zx.q(((x12_63
                                                                    - 1) & not.d(x12_63)) s>> 0x1f)
                                                                i_23 -= x11_51
                                                            while (i_10 != 1)
                                                            i_36 = i_23
                                                            
                                                            if (i_23 u<= 1)
                                                                goto label_ddb314
                                                    else if (i_23 u<= 1)
                                                        goto label_ddb314
                                                    
                                                label_ddb368:
                                                    Botan::Modular_Reducer::square(&var_e0)
                                                    void* x0_38 = var_80.q
                                                    int64_t x8_38 = var_70
                                                    int64_t i_38 = i_36
                                                    var_70 = var_190
                                                    i_36 = i_37
                                                    int32_t x9_42 = var_60_1
                                                    var_190 = x8_38
                                                    i_37 = i_38
                                                    var_80.o = var_1a0.o
                                                    var_1a0 = x0_38
                                                    var_60_1 = var_180
                                                    var_180 = x9_42
                                                    
                                                    if (x0_38 != 0)
                                                        void* var_198_2 = x0_38
                                                        Botan::deallocate_memory(x0_38, 
                                                            (x8_38 - x0_38) s>> 2, 4)
                                                    
                                                    if (x24_1 == x10_44 - 1)
                                                        __builtin_memset(&var_1a0, 0, 0x18)
                                                        int32_t var_180_4 = 1
                                                        int64_t var_188_3 = -1
                                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                                            &var_1a0)
                                                        *var_1a0 = 1
                                                        void* x8_59 = var_1a0
                                                        int64_t var_188_4 = -1
                                                        int64_t var_198_7
                                                        
                                                        if ((var_198_7 - x8_59) s>> 2 u>= 2)
                                                            *(x8_59 + 4) = 0
                                                        
                                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                                                            entry_x8)
                                                        int64_t x8_60 = var_188_4
                                                        *(entry_x8 + 0x18) = x8_60
                                                        *(entry_x8 + 0x20) = var_180_4
                                                        void* var_198_8
                                                        int64_t var_190_4
                                                        void* x0_52
                                                        
                                                        if (var_180_4 != 1)
                                                            x0_52 = var_1a0
                                                            *(entry_x8 + 0x20) = 1
                                                            
                                                            if (x0_52 != 0)
                                                                var_198_8 = x0_52
                                                                Botan::deallocate_memory(x0_52, 
                                                                    (var_190_4 - x0_52) s>> 2, 4)
                                                        else
                                                            if (x8_60 == -1)
                                                                int64_t x9_56 = *entry_x8
                                                                int64_t x11_59 = *(entry_x8 + 8)
                                                                int64_t x10_60 = x11_59 - x9_56
                                                                
                                                                if (x11_59 == x9_56)
                                                                    x8_60 = 0
                                                                else
                                                                    int64_t x12_70
                                                                    
                                                                    x12_70 = x10_60 s>= 0 ? x10_60 : -1
                                                                    
                                                                    int64_t x11_60 = x9_56 - x11_59
                                                                    int64_t x12_71
                                                                    
                                                                    x12_71 = x12_70 s< 1 ? x12_70 : 1
                                                                    
                                                                    x8_60 = x10_60 s>> 2
                                                                    int64_t x10_61
                                                                    
                                                                    x10_61 =
                                                                        x11_60 s> x10_60 ? x11_60 : x10_60
                                                                    
                                                                    int64_t i_33 = x12_71 * (x10_61 u>> 2)
                                                                    uint64_t x11_61 = 1
                                                                    int64_t i_11
                                                                    
                                                                    do
                                                                        int32_t x12_72 =
                                                                            *(x9_56 - 4 + (i_33 << 2))
                                                                        i_11 = i_33
                                                                        i_33 -= 1
                                                                        x11_61 = zx.q(x11_61.d) & zx.q(((x12_72
                                                                            - 1) & not.d(x12_72)) s>> 0x1f)
                                                                        x8_60 -= x11_61
                                                                    while (i_11 != 1)
                                                                
                                                                *(entry_x8 + 0x18) = x8_60
                                                            
                                                            x0_52 = var_1a0
                                                            *(entry_x8 + 0x20) = x8_60 == 0 ? 1 : 0
                                                            
                                                            if (x0_52 != 0)
                                                                var_198_8 = x0_52
                                                                Botan::deallocate_memory(x0_52, 
                                                                    (var_190_4 - x0_52) s>> 2, 4)
                                                        break
                                                    
                                                    x24_1 += 1
                                                    
                                                    if (var_60_1 == 0)
                                                        goto label_ddb368
                                            
                                            void* x0_53 = var_170
                                            
                                            if (x0_53 != 0)
                                                void* var_168_6 = x0_53
                                                Botan::deallocate_memory(x0_53, 
                                                    (var_160_1 - x0_53) s>> 2, 4)
                                            
                                            break
                                        
                                        x21_2 += 1
                                        
                                        if (x21_2 == 0x100)
                                            __builtin_memset(&var_170, 0, 0x18)
                                            int32_t var_150_2 = 1
                                            int64_t var_158_2 = -1
                                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                                &var_170)
                                            *var_170 = 1
                                            void* x8_28 = var_170
                                            int64_t var_158_3 = -1
                                            int64_t var_168_4
                                            
                                            if ((var_168_4 - x8_28) s>> 2 u>= 2)
                                                *(x8_28 + 4) = 0
                                            
                                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                                                entry_x8)
                                            int64_t x8_29 = var_158_3
                                            *(entry_x8 + 0x18) = x8_29
                                            *(entry_x8 + 0x20) = var_150_2
                                            void* var_168_5
                                            int64_t var_160_2
                                            void* x0_51
                                            
                                            if (var_150_2 != 1)
                                                x0_51 = var_170
                                                *(entry_x8 + 0x20) = 1
                                                
                                                if (x0_51 != 0)
                                                    var_168_5 = x0_51
                                                    Botan::deallocate_memory(x0_51, 
                                                        (var_160_2 - x0_51) s>> 2, 4)
                                            else
                                                if (x8_29 == -1)
                                                    int64_t x9_31 = *entry_x8
                                                    int64_t x11_40 = *(entry_x8 + 8)
                                                    int64_t x10_37 = x11_40 - x9_31
                                                    
                                                    if (x11_40 == x9_31)
                                                        x8_29 = 0
                                                    else
                                                        int64_t x12_48
                                                        
                                                        x12_48 = x10_37 s>= 0 ? x10_37 : -1
                                                        
                                                        int64_t x11_41 = x9_31 - x11_40
                                                        int64_t x12_49
                                                        
                                                        x12_49 = x12_48 s< 1 ? x12_48 : 1
                                                        
                                                        x8_29 = x10_37 s>> 2
                                                        int64_t x10_38
                                                        
                                                        x10_38 = x11_41 s> x10_37 ? x11_41 : x10_37
                                                        
                                                        int64_t i_30 = x12_49 * (x10_38 u>> 2)
                                                        uint64_t x11_42 = 1
                                                        int64_t i_12
                                                        
                                                        do
                                                            int32_t x12_50 =
                                                                *(x9_31 - 4 + (i_30 << 2))
                                                            i_12 = i_30
                                                            i_30 -= 1
                                                            x11_42 = zx.q(x11_42.d) & zx.q(((x12_50
                                                                - 1) & not.d(x12_50)) s>> 0x1f)
                                                            x8_29 -= x11_42
                                                        while (i_12 != 1)
                                                    
                                                    *(entry_x8 + 0x18) = x8_29
                                                
                                                x0_51 = var_170
                                                *(entry_x8 + 0x20) = x8_29 == 0 ? 1 : 0
                                                
                                                if (x0_51 != 0)
                                                    var_168_5 = x0_51
                                                    Botan::deallocate_memory(x0_51, 
                                                        (var_160_2 - x0_51) s>> 2, 4)
                                            break
                                else
                                    int64_t i_21 = i_35
                                    
                                    if (i_21 == -1)
                                        void* x9_24 = var_140
                                        void* x10_32 = var_138 - x9_24
                                        
                                        if (var_138 == x9_24)
                                            i_21 = 0
                                            i_35 = 0
                                            
                                            if (i_21 == 0)
                                                goto label_ddaf8c
                                        else
                                            void* x12_39
                                            
                                            x12_39 = x10_32 s>= 0 ? x10_32 : -ffffffffffffffff
                                            
                                            void* x11_35 = x9_24 - var_138
                                            void* x12_40
                                            
                                            x12_40 = x12_39 s< 1 ? x12_39 : 1
                                            
                                            i_21 = x10_32 s>> 2
                                            void* x10_33
                                            
                                            x10_33 = x11_35 s> x10_32 ? x11_35 : x10_32
                                            
                                            int64_t i_29 = x12_40 * (x10_33 u>> 2)
                                            uint64_t x11_36 = 1
                                            int64_t i_13
                                            
                                            do
                                                int32_t x12_41 = *(x9_24 - 4 + (i_29 << 2))
                                                i_13 = i_29
                                                i_29 -= 1
                                                x11_36 = zx.q(x11_36.d)
                                                    & zx.q(((x12_41 - 1) & not.d(x12_41)) s>> 0x1f)
                                                i_21 -= x11_36
                                            while (i_13 != 1)
                                            i_35 = i_21
                                            
                                            if (i_21 u> 1 || i_21 == 0)
                                                goto label_ddaf8c
                                    else if (i_21 u> 1 || i_21 == 0)
                                        goto label_ddaf8c
                                    
                                    void* x9_26 = var_140
                                    int32_t x10_35 = 0
                                    int64_t i_14
                                    
                                    do
                                        int32_t x11_37 = *x9_26
                                        x9_26 += 4
                                        i_14 = i_21
                                        i_21 -= 1
                                        int32_t x11_39 =
                                            (((x11_37 ^ 1) - 1) & not.d(x11_37)) s>> 0x1f
                                        x10_35 = (x10_35 & x11_39) | ((
                                            ((x11_37 - 1) & not.d(x11_37)) s>> 0x1f | 1)
                                            & not.d(x11_39))
                                    while (i_14 != 1)
                                    
                                    if (x10_35 != 0)
                                        goto label_ddaf8c
                                    
                                    v0_1 = var_110
                                    __builtin_memset(&var_110, 0, 0x18)
                                    int64_t var_f8_3 = -1
                                    *entry_x8 = v0_1
                                    *(entry_x8 + 0x10) = var_100_1
                                    *(entry_x8 + 0x18) = var_f8_1
                                    *(entry_x8 + 0x20) = var_f0_1
                                    int32_t var_f0_3 = 1
                                void* x0_54 = var_140
                                
                                if (x0_54 != 0)
                                    void* var_138_1 = x0_54
                                    Botan::deallocate_memory(x0_54, (var_130 - x0_54) s>> 2, 4)
                                
                                void* x0_55 = var_110.q
                                
                                if (x0_55 != 0)
                                    var_110:8.q = x0_55
                                    Botan::deallocate_memory(x0_55, (var_100_1 - x0_55) s>> 2, 4)
                                
                                void* var_b8
                                
                                if (var_b8 != 0)
                                    void* var_b0_1 = var_b8
                                    int64_t var_a8
                                    Botan::deallocate_memory(var_b8, (var_a8 - var_b8) s>> 2, 4)
                                
                                void* x0_57 = var_e0.q
                                
                                if (x0_57 != 0)
                                    int64_t x8_79 = var_df:0xf.q
                                    var_df:7.q = x0_57
                                    Botan::deallocate_memory(x0_57, (x8_79 - x0_57) s>> 2, 4)
                                
                                arg1 = var_80.q
                                
                                if (arg1 != 0)
                                    Botan::BigInt const& var_78_2 = arg1
                                    Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
                            else
                                int32_t x8_6 = *x8_4 & 3
                                
                                if (x8_6 == 0)
                                    goto label_ddac54
                                
                                int32_t x8_7
                                
                                if (*(arg2 + 0x20) == 0)
                                    x8_7 = 4 - x8_6
                                else
                                    x8_7 = x8_6
                                
                                if (x8_7 != 3)
                                    goto label_ddac54
                                
                                var_110.d = 1
                                Botan::BigInt::add2(arg2, &var_110, 1, 1)
                                Botan::operator>>(&var_80, 2)
                                Botan::power_mod(arg1, &var_e0, arg2)
                                void* x0_7 = var_e0.q
                                
                                if (x0_7 != 0)
                                    int64_t x8_9 = var_df:0xf.q
                                    var_df:7.q = x0_7
                                    Botan::deallocate_memory(x0_7, (x8_9 - x0_7) s>> 2, 4)
                                
                                arg1 = var_80.q
                                
                                if (arg1 != 0)
                                    Botan::BigInt const& var_78_1 = arg1
                                    Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
                    else
                        int64_t i_20 = *(arg2 + 0x18)
                        
                        if (i_20 == -1)
                            int64_t x9_10 = *arg2
                            int64_t x11_14 = *(arg2 + 8)
                            int64_t x10_16 = x11_14 - x9_10
                            
                            if (x11_14 == x9_10)
                                i_20 = 0
                                *(arg2 + 0x18) = 0
                                
                                if (i_20 == 0)
                                    goto label_ddaabc
                            else
                                int64_t x12_22
                                
                                x12_22 = x10_16 s>= 0 ? x10_16 : -1
                                
                                int64_t x11_15 = x9_10 - x11_14
                                int64_t x12_23
                                
                                x12_23 = x12_22 s< 1 ? x12_22 : 1
                                
                                i_20 = x10_16 s>> 2
                                int64_t x10_17
                                
                                x10_17 = x11_15 s> x10_16 ? x11_15 : x10_16
                                
                                int64_t i_27 = x12_23 * (x10_17 u>> 2)
                                uint64_t x11_16 = 1
                                int64_t i_15
                                
                                do
                                    int32_t x12_24 = *(x9_10 - 4 + (i_27 << 2))
                                    i_15 = i_27
                                    i_27 -= 1
                                    x11_16 = zx.q(x11_16.d)
                                        & zx.q(((x12_24 - 1) & not.d(x12_24)) s>> 0x1f)
                                    i_20 -= x11_16
                                while (i_15 != 1)
                                *(arg2 + 0x18) = i_20
                                
                                if (i_20 u> 1 || i_20 == 0)
                                    goto label_ddaabc
                        else if (i_20 u> 1 || i_20 == 0)
                            goto label_ddaabc
                        
                        int32_t* x9_12 = *arg2
                        int32_t x10_19 = 0
                        int64_t i_16
                        
                        do
                            int32_t x11_17 = *x9_12
                            x9_12 = &x9_12[1]
                            i_16 = i_20
                            i_20 -= 1
                            int32_t x11_19 = (((x11_17 ^ 2) - 1) & not.d(x11_17)) s>> 0x1f
                            x10_19 = (x10_19 & x11_19)
                                | ((((x11_17 - 2) & not.d(x11_17)) s>> 0x1f | 1) & not.d(x11_19))
                        while (i_16 != 1)
                        
                        if (x10_19 != 0)
                            goto label_ddaabc
                        
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                            entry_x8)
                        *(entry_x8 + 0x18) = *(arg1 + 0x18)
                        *(entry_x8 + 0x20) = *(arg1 + 0x20)
                    
                    return 
                
            label_dda994:
                int32_t* x9_9 = *arg1
                int32_t x10_14 = 0
                int32_t x11_13
                int64_t i_17
                
                do
                    int32_t x11_11 = *x9_9
                    x9_9 = &x9_9[1]
                    i_17 = i_19
                    i_19 -= 1
                    x11_13 = (x10_14 ^ 1) & ((x11_11 - 1) & not.d(x11_11)) s>> 0x1f
                    x10_14 = x11_13 ^ 1
                while (i_17 != 1)
                
                if ((x11_13 & 0x80000000) == 0)
                    goto label_dda9cc
            
            void** x0_61 = __cxa_allocate_exception(0x20)
            int64_t x0_62
            int128_t v0_7
            x0_62, v0_7 = operator new(0x30)
            (*"must be positive")[0].o
            var_df:0xf.q = x0_62
            v0_7 = data_71cfc0
            __builtin_strncpy(x0_62, "ressol: value to solve for must be positive", 0x2c)
            var_e0.o = v0_7
            *x0_61 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_61[1])
            *x0_61 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_61, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn

void** x0_58 = __cxa_allocate_exception(0x20)
__builtin_strncpy(&var_e0, "*ressol: invalid prime", 0x17)
*x0_58 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_58[1])
*x0_58 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_58, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
