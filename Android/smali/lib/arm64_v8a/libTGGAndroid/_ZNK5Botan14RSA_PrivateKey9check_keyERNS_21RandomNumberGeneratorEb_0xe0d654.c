// 函数: _ZNK5Botan14RSA_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xe0d654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg1 + 0x10)
uint64_t i_12 = zx.q(x9[4].d)

if (i_12.d != 0)
    i_12 = x9[3]
    Botan::RandomNumberGenerator* x20_1 = arg2
    
    if (i_12 == -1)
        int64_t x10_1 = *x9
        int64_t x12_1 = x9[1]
        int64_t x11_1 = x12_1 - x10_1
        
        if (x12_1 == x10_1)
            i_12 = 0
            x9[3] = 0
        else
            int64_t x13_1
            
            x13_1 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x12_2 = x10_1 - x12_1
            int64_t x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            i_12 = x11_1 s>> 2
            int64_t x11_2
            
            x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
            
            int64_t i_15 = x13_2 * (x11_2 u>> 2)
            uint64_t x12_3 = 1
            int64_t i
            
            do
                int32_t x13_3 = *(x10_1 - 4 + (i_15 << 2))
                i = i_15
                i_15 -= 1
                x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
                i_12 -= x12_3
            while (i != 1)
            x9[3] = i_12
            
            if (i_12 u> 1)
                goto label_e0d758
        
    label_e0d70c:
        
        if (i_12 != 0)
            int32_t* x9_1 = *x9
            int32_t x10_3 = 0
            uint64_t i_1
            
            do
                int32_t x12_4 = *x9_1
                x9_1 = &x9_1[1]
                i_1 = i_12
                i_12 -= 1
                int32_t x12_6 = (((x12_4 ^ 0x23) - 1) & not.d(x12_4)) s>> 0x1f
                x10_3 = (x10_3 & x12_6)
                    | ((((x12_4 - 0x23) & not.d(x12_4)) s>> 0x1f | 1) & not.d(x12_6))
            while (i_1 != 1)
            
            if ((x10_3 & 0x80000000) == 0)
                goto label_e0d758
            
            i_12 = 0
    else
        if (i_12 u<= 1)
            goto label_e0d70c
        
    label_e0d758:
        int64_t* x9_2 = *(arg1 + 0x10)
        char* x8 = *x9_2
        
        if (x9_2[1] == x8 || (zx.d(*x8) & 1) == 0)
            i_12 = 0
        else
            i_12 = zx.q(x9_2[9].d)
            
            if (i_12.d != 0)
                i_12 = x9_2[8]
                
                if (i_12 == -1)
                    int64_t x10_6 = x9_2[5]
                    int64_t x12_7 = x9_2[6]
                    int64_t x11_4 = x12_7 - x10_6
                    
                    if (x12_7 == x10_6)
                        i_12 = 0
                    else
                        int64_t x13_10
                        
                        x13_10 = x11_4 s>= 0 ? x11_4 : -1
                        
                        int64_t x12_8 = x10_6 - x12_7
                        int64_t x13_11
                        
                        x13_11 = x13_10 s< 1 ? x13_10 : 1
                        
                        i_12 = x11_4 s>> 2
                        int64_t x11_5
                        
                        x11_5 = x12_8 s> x11_4 ? x12_8 : x11_4
                        
                        int64_t i_16 = x13_11 * (x11_5 u>> 2)
                        uint64_t x12_9 = 1
                        int64_t i_2
                        
                        do
                            int32_t x13_12 = *(x10_6 - 4 + (i_16 << 2))
                            i_2 = i_16
                            i_16 -= 1
                            x12_9 = zx.q(x12_9.d) & zx.q(((x13_12 - 1) & not.d(x13_12)) s>> 0x1f)
                            i_12 -= x12_9
                        while (i_2 != 1)
                    
                    x9_2[8] = i_12
                    
                    if (i_12 u> 1)
                        goto label_e0d860
                    
                    goto label_e0d818
                
                if (i_12 u<= 1)
                label_e0d818:
                    
                    if (i_12 != 0)
                        int32_t* x9_3 = x9_2[5]
                        int32_t x10_8 = 0
                        uint64_t i_3
                        
                        do
                            int32_t x11_7 = *x9_3
                            x9_3 = &x9_3[1]
                            i_3 = i_12
                            i_12 -= 1
                            int32_t x11_9 = (((x11_7 ^ 3) - 1) & not.d(x11_7)) s>> 0x1f
                            x10_8 = (x10_8 & x11_9)
                                | ((((x11_7 - 3) & not.d(x11_7)) s>> 0x1f | 1) & not.d(x11_9))
                        while (i_3 != 1)
                        
                        if ((x10_8 & 0x80000000) == 0)
                            goto label_e0d860
                        
                        i_12 = 0
                else
                label_e0d860:
                    void* x8_2 = *(arg1 + 0x10)
                    char* x8_3 = *(x8_2 + 0x28)
                    
                    if (*(x8_2 + 0x30) == x8_3 || (zx.d(*x8_3) & 1) == 0)
                        i_12 = 0
                    else
                        int64_t* x9_5 = *(arg1 + 0x20)
                        i_12 = zx.q(x9_5[4].d)
                        
                        if (i_12.d != 0)
                            i_12 = x9_5[3]
                            
                            if (i_12 == -1)
                                int64_t x10_10 = *x9_5
                                int64_t x12_15 = x9_5[1]
                                int64_t x11_10 = x12_15 - x10_10
                                
                                if (x12_15 == x10_10)
                                    i_12 = 0
                                else
                                    int64_t x13_16
                                    
                                    x13_16 = x11_10 s>= 0 ? x11_10 : -1
                                    
                                    int64_t x12_16 = x10_10 - x12_15
                                    int64_t x13_17
                                    
                                    x13_17 = x13_16 s< 1 ? x13_16 : 1
                                    
                                    i_12 = x11_10 s>> 2
                                    int64_t x11_11
                                    
                                    x11_11 = x12_16 s> x11_10 ? x12_16 : x11_10
                                    
                                    int64_t i_17 = x13_17 * (x11_11 u>> 2)
                                    uint64_t x12_17 = 1
                                    int64_t i_4
                                    
                                    do
                                        int32_t x13_18 = *(x10_10 - 4 + (i_17 << 2))
                                        i_4 = i_17
                                        i_17 -= 1
                                        x12_17 = zx.q(x12_17.d)
                                            & zx.q(((x13_18 - 1) & not.d(x13_18)) s>> 0x1f)
                                        i_12 -= x12_17
                                    while (i_4 != 1)
                                
                                x9_5[3] = i_12
                            
                            if (i_12 u> 1)
                            label_e0d944:
                                void* x9_7 = *(arg1 + 0x20)
                                i_12 = zx.q(*(x9_7 + 0x48))
                                
                                if (i_12.d != 0)
                                    i_12 = *(x9_7 + 0x40)
                                    
                                    if (i_12 == -1)
                                        int64_t x10_14 = *(x9_7 + 0x28)
                                        int64_t x12_23 = *(x9_7 + 0x30)
                                        int64_t x11_16 = x12_23 - x10_14
                                        
                                        if (x12_23 == x10_14)
                                            i_12 = 0
                                        else
                                            int64_t x13_22
                                            
                                            x13_22 = x11_16 s>= 0 ? x11_16 : -1
                                            
                                            int64_t x12_24 = x10_14 - x12_23
                                            int64_t x13_23
                                            
                                            x13_23 = x13_22 s< 1 ? x13_22 : 1
                                            
                                            i_12 = x11_16 s>> 2
                                            int64_t x11_17
                                            
                                            x11_17 = x12_24 s> x11_16 ? x12_24 : x11_16
                                            
                                            int64_t i_18 = x13_23 * (x11_17 u>> 2)
                                            uint64_t x12_25 = 1
                                            int64_t i_5
                                            
                                            do
                                                int32_t x13_24 = *(x10_14 - 4 + (i_18 << 2))
                                                i_5 = i_18
                                                i_18 -= 1
                                                x12_25 = zx.q(x12_25.d)
                                                    & zx.q(((x13_24 - 1) & not.d(x13_24)) s>> 0x1f)
                                                i_12 -= x12_25
                                            while (i_5 != 1)
                                        
                                        *(x9_7 + 0x40) = i_12
                                    
                                    if (i_12 u> 1)
                                    label_e0da10:
                                        void* x9_9 = *(arg1 + 0x20)
                                        i_12 = zx.q(*(x9_9 + 0x70))
                                        
                                        if (i_12.d != 0)
                                            i_12 = *(x9_9 + 0x68)
                                            
                                            if (i_12 == -1)
                                                int64_t x10_18 = *(x9_9 + 0x50)
                                                int64_t x12_31 = *(x9_9 + 0x58)
                                                int64_t x11_22 = x12_31 - x10_18
                                                
                                                if (x12_31 == x10_18)
                                                    i_12 = 0
                                                else
                                                    int64_t x13_28
                                                    
                                                    x13_28 = x11_22 s>= 0 ? x11_22 : -1
                                                    
                                                    int64_t x12_32 = x10_18 - x12_31
                                                    int64_t x13_29
                                                    
                                                    x13_29 = x13_28 s< 1 ? x13_28 : 1
                                                    
                                                    i_12 = x11_22 s>> 2
                                                    int64_t x11_23
                                                    
                                                    x11_23 = x12_32 s> x11_22 ? x12_32 : x11_22
                                                    
                                                    int64_t i_19 = x13_29 * (x11_23 u>> 2)
                                                    uint64_t x12_33 = 1
                                                    int64_t i_6
                                                    
                                                    do
                                                        int32_t x13_30 = *(x10_18 - 4 + (i_19 << 2))
                                                        i_6 = i_19
                                                        i_19 -= 1
                                                        x12_33 = zx.q(x12_33.d) & zx.q(((x13_30 - 1)
                                                            & not.d(x13_30)) s>> 0x1f)
                                                        i_12 -= x12_33
                                                    while (i_6 != 1)
                                                
                                                *(x9_9 + 0x68) = i_12
                                            
                                            if (i_12 u> 1)
                                            label_e0dadc:
                                                void* x8_5 = *(arg1 + 0x20)
                                                Botan::operator*(x8_5 + 0x28, x8_5 + 0x50)
                                                *(arg1 + 0x10)
                                                void* var_60
                                                int32_t x0_3 = Botan::BigInt::is_equal(&var_60)
                                                void* x8_6 = var_60
                                                void* var_58
                                                void* var_50
                                                
                                                if (x8_6 != 0)
                                                    var_58 = x8_6
                                                    Botan::deallocate_memory(x8_6, 
                                                        (var_50 - x8_6) s>> 2, 4)
                                                
                                                if ((x0_3 & 1) == 0)
                                                    i_12 = 0
                                                else if ((Botan::BigInt::is_equal(*(arg1 + 0x20)
                                                        + 0x28) & 1) != 0)
                                                    i_12 = 0
                                                else
                                                    Botan::BigInt* x22_2 = *(arg1 + 0x20)
                                                    uint32_t var_b0 = 1
                                                    Botan::BigInt::add2(x22_2 + 0x28, &var_b0, 1, 0)
                                                    void* var_88
                                                    Botan::ct_modulo(x22_2, &var_88)
                                                    int32_t x0_10 =
                                                        Botan::BigInt::is_equal(x22_2 + 0x78)
                                                    void* x8_8 = var_60
                                                    
                                                    if (x8_8 != 0)
                                                        var_58 = x8_8
                                                        Botan::deallocate_memory(x8_8, 
                                                            (var_50 - x8_8) s>> 2, 4)
                                                    
                                                    void* x0_12 = var_88
                                                    int64_t var_78
                                                    
                                                    if (x0_12 != 0)
                                                        void* var_80_1 = x0_12
                                                        Botan::deallocate_memory(x0_12, 
                                                            (var_78 - x0_12) s>> 2, 4)
                                                    
                                                    if ((x0_10 & 1) == 0)
                                                        i_12 = 0
                                                    else
                                                        Botan::BigInt* x22_4 = *(arg1 + 0x20)
                                                        var_b0 = 1
                                                        Botan::BigInt::add2(x22_4 + 0x50, &var_b0, 
                                                            1, 0)
                                                        Botan::ct_modulo(x22_4, &var_88)
                                                        int32_t x0_16 =
                                                            Botan::BigInt::is_equal(x22_4 + 0xa0)
                                                        void* x8_11 = var_60
                                                        
                                                        if (x8_11 != 0)
                                                            var_58 = x8_11
                                                            Botan::deallocate_memory(x8_11, 
                                                                (var_50 - x8_11) s>> 2, 4)
                                                        
                                                        void* x0_18 = var_88
                                                        
                                                        if (x0_18 != 0)
                                                            void* var_80_2 = x0_18
                                                            Botan::deallocate_memory(x0_18, 
                                                                (var_78 - x0_18) s>> 2, 4)
                                                        
                                                        if ((x0_16 & 1) == 0)
                                                            i_12 = 0
                                                        else
                                                            void* x8_14 = *(arg1 + 0x20)
                                                            Botan::inverse_mod(x8_14 + 0x50, 
                                                                x8_14 + 0x28)
                                                            int32_t x0_21 =
                                                                Botan::BigInt::is_equal(x8_14 + 0xc8)
                                                            void* x8_15 = var_60
                                                            
                                                            if (x8_15 != 0)
                                                                Botan::deallocate_memory(x8_15, 
                                                                    (var_50 - x8_15) s>> 2, 4)
                                                            
                                                            if ((x0_21 & 1) == 0)
                                                                i_12 = 0
                                                            else
                                                                int32_t entry_x2
                                                                uint64_t x22_8
                                                                
                                                                if ((entry_x2 & 1) != 0)
                                                                    x22_8 = 0x80
                                                                else
                                                                    x22_8 = 0xc
                                                                
                                                                i_12 = 0
                                                                
                                                                if ((Botan::is_prime(
                                                                        *(arg1 + 0x20) + 0x28, x20_1, x22_8, 
                                                                        false) & 1) != 0)
                                                                    int32_t i_22 = Botan::is_prime(
                                                                        *(arg1 + 0x20) + 0x50, x20_1, x22_8, 
                                                                        false)
                                                                    i_12 = zx.q(i_22)
                                                                    
                                                                    if ((i_22 & 1) != 0
                                                                            && (entry_x2 & 1) != 0)
                                                                        Botan::operator*(*(arg1 + 0x10) + 0x28, 
                                                                            *(arg1 + 0x20))
                                                                        void* x8_19 = *(arg1 + 0x20)
                                                                        uint32_t var_100 = 1
                                                                        Botan::BigInt::add2(x8_19 + 0x28, 
                                                                            &var_100, 1, 0)
                                                                        void* x8_20 = *(arg1 + 0x20)
                                                                        uint32_t var_34 = 1
                                                                        Botan::BigInt::add2(x8_20 + 0x50, 
                                                                            &var_34, 1, 0)
                                                                        void* var_d8
                                                                        Botan::lcm(&var_d8, &var_100)
                                                                        Botan::ct_modulo(&var_88, &var_b0)
                                                                        int32_t var_40
                                                                        int64_t i_13
                                                                        
                                                                        if (var_40 != 0)
                                                                            int64_t i_20
                                                                            i_13 = i_20
                                                                            
                                                                            if (i_13 == -1)
                                                                                void* x9_19 = var_60
                                                                                void* x10_22 = var_58 - x9_19
                                                                                
                                                                                if (var_58 == x9_19)
                                                                                    i_13 = 0
                                                                                else
                                                                                    void* x12_39
                                                                                    
                                                                                    x12_39 = x10_22 s>= 0 ? x10_22
                                                                                        : -ffffffffffffffff
                                                                                    
                                                                                    void* x11_29 = x9_19 - var_58
                                                                                    void* x12_40
                                                                                    
                                                                                    x12_40 = x12_39 s< 1 ? x12_39 : 1
                                                                                    
                                                                                    i_13 = x10_22 s>> 2
                                                                                    void* x10_23
                                                                                    
                                                                                    x10_23 =
                                                                                        x11_29 s> x10_22 ? x11_29 : x10_22
                                                                                    
                                                                                    int64_t i_14 = x12_40 * (x10_23 u>> 2)
                                                                                    uint64_t x11_30 = 1
                                                                                    int64_t i_7
                                                                                    
                                                                                    do
                                                                                        int32_t x12_41 =
                                                                                            *(x9_19 - 4 + (i_14 << 2))
                                                                                        i_7 = i_14
                                                                                        i_14 -= 1
                                                                                        x11_30 = zx.q(x11_30.d) & zx.q(((x12_41
                                                                                            - 1) & not.d(x12_41)) s>> 0x1f)
                                                                                        i_13 -= x11_30
                                                                                    while (i_7 != 1)
                                                                                
                                                                                int64_t i_21 = i_13
                                                                        
                                                                        int32_t x21_2
                                                                        
                                                                        if (var_40 == 0 || i_13 u> 1
                                                                                || i_13 == 0)
                                                                            x21_2 = 0
                                                                        else
                                                                            void* x9_21 = var_60
                                                                            int32_t x10_25 = 0
                                                                            int64_t i_8
                                                                            
                                                                            do
                                                                                int32_t x11_31 = *x9_21
                                                                                x9_21 += 4
                                                                                i_8 = i_13
                                                                                i_13 -= 1
                                                                                int32_t x11_33 = (((x11_31 ^ 1) - 1)
                                                                                    & not.d(x11_31)) s>> 0x1f
                                                                                x10_25 = (x10_25 & x11_33) | ((
                                                                                    ((x11_31 - 1) & not.d(x11_31)) s>> 0x1f
                                                                                    | 1) & not.d(x11_33))
                                                                            while (i_8 != 1)
                                                                            x21_2 = x10_25 == 0 ? 1 : 0
                                                                        
                                                                        void* x0_31 = var_60
                                                                        
                                                                        if (x0_31 != 0)
                                                                            var_58 = x0_31
                                                                            Botan::deallocate_memory(x0_31, 
                                                                                (var_50 - x0_31) s>> 2, 4)
                                                                        
                                                                        void* x0_32 = var_b0.q
                                                                        
                                                                        if (x0_32 != 0)
                                                                            void* var_a8_1 = x0_32
                                                                            int64_t var_a0
                                                                            Botan::deallocate_memory(x0_32, 
                                                                                (var_a0 - x0_32) s>> 2, 4)
                                                                        
                                                                        void* x0_33 = var_100.q
                                                                        
                                                                        if (x0_33 != 0)
                                                                            void* var_f8_1 = x0_33
                                                                            int64_t var_f0
                                                                            Botan::deallocate_memory(x0_33, 
                                                                                (var_f0 - x0_33) s>> 2, 4)
                                                                        
                                                                        void* x0_34 = var_d8
                                                                        
                                                                        if (x0_34 != 0)
                                                                            void* var_d0_1 = x0_34
                                                                            int64_t var_c8
                                                                            Botan::deallocate_memory(x0_34, 
                                                                                (var_c8 - x0_34) s>> 2, 4)
                                                                        
                                                                        void* x0_35 = var_88
                                                                        
                                                                        if (x0_35 != 0)
                                                                            void* var_80_3 = x0_35
                                                                            Botan::deallocate_memory(x0_35, 
                                                                                (var_78 - x0_35) s>> 2, 4)
                                                                        
                                                                        if ((x21_2 & 1) == 0)
                                                                            i_12 = 0
                                                                        else
                                                                            var_60.b = 0x1c
                                                                            __builtin_strncpy(&var_60:1, 
                                                                                "EMSA4(SHA-256)", 0xf)
                                                                            int32_t i_23 = Botan::KeyPair::signature_consistency_check(
                                                                                x20_1, arg1, arg1 + *(*arg1 - 0x88), 
                                                                                &var_60)
                                                                            
                                                                            if ((zx.d(var_60.b) & 1) != 0)
                                                                                operator delete(var_50)
                                                                            
                                                                            i_12 = zx.q(i_23)
                                            else if (i_12 != 0)
                                                int32_t* x9_10 = *(x9_9 + 0x50)
                                                int32_t x10_20 = 0
                                                uint64_t i_9
                                                
                                                do
                                                    int32_t x11_25 = *x9_10
                                                    x9_10 = &x9_10[1]
                                                    i_9 = i_12
                                                    i_12 -= 1
                                                    int32_t x11_27 = (((x11_25 ^ 3) - 1)
                                                        & not.d(x11_25)) s>> 0x1f
                                                    x10_20 = (x10_20 & x11_27) | ((
                                                        ((x11_25 - 3) & not.d(x11_25)) s>> 0x1f | 1)
                                                        & not.d(x11_27))
                                                while (i_9 != 1)
                                                
                                                if ((x10_20 & 0x80000000) == 0)
                                                    goto label_e0dadc
                                                
                                                i_12 = 0
                                    else if (i_12 != 0)
                                        int32_t* x9_8 = *(x9_7 + 0x28)
                                        int32_t x10_16 = 0
                                        uint64_t i_10
                                        
                                        do
                                            int32_t x11_19 = *x9_8
                                            x9_8 = &x9_8[1]
                                            i_10 = i_12
                                            i_12 -= 1
                                            int32_t x11_21 =
                                                (((x11_19 ^ 3) - 1) & not.d(x11_19)) s>> 0x1f
                                            x10_16 = (x10_16 & x11_21) | ((
                                                ((x11_19 - 3) & not.d(x11_19)) s>> 0x1f | 1)
                                                & not.d(x11_21))
                                        while (i_10 != 1)
                                        
                                        if ((x10_16 & 0x80000000) == 0)
                                            goto label_e0da10
                                        
                                        i_12 = 0
                            else if (i_12 != 0)
                                int32_t* x9_6 = *x9_5
                                int32_t x10_12 = 0
                                uint64_t i_11
                                
                                do
                                    int32_t x11_13 = *x9_6
                                    x9_6 = &x9_6[1]
                                    i_11 = i_12
                                    i_12 -= 1
                                    int32_t x11_15 = (((x11_13 ^ 2) - 1) & not.d(x11_13)) s>> 0x1f
                                    x10_12 = (x10_12 & x11_15) | ((
                                        ((x11_13 - 2) & not.d(x11_13)) s>> 0x1f | 1) & not.d(x11_15))
                                while (i_11 != 1)
                                
                                if ((x10_12 & 0x80000000) == 0)
                                    goto label_e0d944
                                
                                i_12 = 0

return zx.q(i_12.d) & 1
