// 函数: _ZN5Botan23is_lucas_probable_primeERKNS_6BigIntERKNS_15Modular_ReducerE
// 地址: 0xdcdddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_2

if (*(arg1 + 0x20) == 0)
    x19_2 = 0
else
    int64_t i_33 = *(arg1 + 0x18)
    
    if (i_33 == -1)
        int64_t x9_1 = *arg1
        int64_t x11_1 = *(arg1 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 != x9_1)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_33 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_18 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_18 << 2))
                i = i_18
                i_18 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_33 -= x11_3
            while (i != 1)
            *(arg1 + 0x18) = i_33
            
            if (i_33 u<= 1)
                goto label_dcde98
            
            goto label_dcdee8
        
        i_33 = 0
        *(arg1 + 0x18) = 0
    label_dcde98:
        
        if (i_33 == 0)
            x19_2 = 0
        else
            int32_t* x9_3 = *arg1
            int32_t x10_4 = 0
            int64_t i_23 = i_33
            int64_t i_1
            
            do
                int32_t x12_5 = *x9_3
                x9_3 = &x9_3[1]
                i_1 = i_23
                i_23 -= 1
                int32_t x12_7 = (((x12_5 ^ 1) - 1) & not.d(x12_5)) s>> 0x1f
                x10_4 =
                    (x10_4 & x12_7) | ((((x12_5 - 1) & not.d(x12_5)) s>> 0x1f | 1) & not.d(x12_7))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_dcdee8
            
            x19_2 = 0
    else
        if (i_33 u<= 1)
            goto label_dcde98
        
    label_dcdee8:
        
        if (i_33 == -1)
            int64_t x9_4 = *arg1
            int64_t x11_4 = *(arg1 + 8)
            int64_t x10_6 = x11_4 - x9_4
            
            if (x11_4 == x9_4)
                i_33 = 0
                *(arg1 + 0x18) = 0
                
                if (i_33 == 0)
                    goto label_dcdfc0
                
                goto label_dcdf78
            
            int64_t x12_8
            
            x12_8 = x10_6 s>= 0 ? x10_6 : -1
            
            int64_t x11_5 = x9_4 - x11_4
            int64_t x12_9
            
            x12_9 = x12_8 s< 1 ? x12_8 : 1
            
            i_33 = x10_6 s>> 2
            int64_t x10_7
            
            x10_7 = x11_5 s> x10_6 ? x11_5 : x10_6
            
            int64_t i_19 = x12_9 * (x10_7 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_2
            
            do
                int32_t x12_10 = *(x9_4 - 4 + (i_19 << 2))
                i_2 = i_19
                i_19 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_10 - 1) & not.d(x12_10)) s>> 0x1f)
                i_33 -= x11_6
            while (i_2 != 1)
            *(arg1 + 0x18) = i_33
            
            if (i_33 u<= 1 && i_33 != 0)
                goto label_dcdf78
            
            goto label_dcdfc0
        
        if (i_33 u<= 1 && i_33 != 0)
        label_dcdf78:
            int32_t* x9_6 = *arg1
            int32_t x10_9 = 0
            int64_t i_24 = i_33
            int64_t i_3
            
            do
                int32_t x12_12 = *x9_6
                x9_6 = &x9_6[1]
                i_3 = i_24
                i_24 -= 1
                int32_t x12_14 = (((x12_12 ^ 2) - 1) & not.d(x12_12)) s>> 0x1f
                x10_9 = (x10_9 & x12_14)
                    | ((((x12_12 - 2) & not.d(x12_12)) s>> 0x1f | 1) & not.d(x12_14))
            while (i_3 != 1)
            
            if (x10_9 != 0)
                goto label_dcdfc0
            
            x19_2 = 1
        else
        label_dcdfc0:
            char* x9_7 = *arg1
            int64_t x10_11 = *(arg1 + 8)
            
            if (x10_11 == x9_7 || (zx.d(*x9_7) & 1) == 0)
                x19_2 = 0
            else
                if (i_33 == -1)
                    void* x12_15 = x10_11 - x9_7
                    
                    if (x10_11 == x9_7)
                        i_33 = 0
                    else
                        void* x14_5
                        
                        x14_5 = x12_15 s>= 0 ? x12_15 : -ffffffffffffffff
                        
                        void* x13_13 = x9_7 - x10_11
                        void* x14_6
                        
                        x14_6 = x14_5 s< 1 ? x14_5 : 1
                        
                        i_33 = x12_15 s>> 2
                        void* x12_16
                        
                        x12_16 = x13_13 s> x12_15 ? x13_13 : x12_15
                        
                        int64_t i_26 = x14_6 * (x12_16 u>> 2)
                        uint64_t x13_14 = 1
                        int64_t i_4
                        
                        do
                            int32_t x14_7 = *(x9_7 - 4 + (i_26 << 2))
                            i_4 = i_26
                            i_26 -= 1
                            x13_14 = zx.q(x13_14.d) & zx.q(((x14_7 - 1) & not.d(x14_7)) s>> 0x1f)
                            i_33 -= x13_14
                        while (i_4 != 1)
                    
                    *(arg1 + 0x18) = i_33
                
                if (i_33 == -1)
                    void* x12_18 = x10_11 - x9_7
                    
                    if (x10_11 == x9_7)
                        i_33 = 0
                    else
                        void* x14_9
                        
                        x14_9 = x12_18 s>= 0 ? x12_18 : -ffffffffffffffff
                        
                        void* x13_15 = x9_7 - x10_11
                        void* x14_10
                        
                        x14_10 = x14_9 s< 1 ? x14_9 : 1
                        
                        i_33 = x12_18 s>> 2
                        void* x12_19
                        
                        x12_19 = x13_15 s> x12_18 ? x13_15 : x12_18
                        
                        int64_t i_27 = x14_10 * (x12_19 u>> 2)
                        uint64_t x13_16 = 1
                        int64_t i_5
                        
                        do
                            int32_t x14_11 = *(x9_7 - 4 + (i_27 << 2))
                            i_5 = i_27
                            i_27 -= 1
                            x13_16 = zx.q(x13_16.d) & zx.q(((x14_11 - 1) & not.d(x14_11)) s>> 0x1f)
                            i_33 -= x13_16
                        while (i_5 != 1)
                    
                    *(arg1 + 0x18) = i_33
                    goto label_dce104
                
                if (i_33 != 1)
                label_dce104:
                    
                    if (i_33 == -1)
                        void* x12_21 = x10_11 - x9_7
                        
                        if (x10_11 == x9_7)
                            i_33 = 0
                        else
                            void* x14_13
                            
                            x14_13 = x12_21 s>= 0 ? x12_21 : -ffffffffffffffff
                            
                            void* x13_17 = x9_7 - x10_11
                            void* x14_14
                            
                            x14_14 = x14_13 s< 1 ? x14_13 : 1
                            
                            i_33 = x12_21 s>> 2
                            void* x12_22
                            
                            x12_22 = x13_17 s> x12_21 ? x13_17 : x12_21
                            
                            int64_t i_28 = x14_14 * (x12_22 u>> 2)
                            uint64_t x13_18 = 1
                            int64_t i_6
                            
                            do
                                int32_t x14_15 = *(x9_7 - 4 + (i_28 << 2))
                                i_6 = i_28
                                i_28 -= 1
                                x13_18 =
                                    zx.q(x13_18.d) & zx.q(((x14_15 - 1) & not.d(x14_15)) s>> 0x1f)
                                i_33 -= x13_18
                            while (i_6 != 1)
                        
                        *(arg1 + 0x18) = i_33
                    else if (i_33 == 1)
                        goto label_dce110
                    
                    if (i_33 == -1)
                        void* x12_24 = x10_11 - x9_7
                        
                        if (x10_11 == x9_7)
                            i_33 = 0
                        else
                            void* x14_17
                            
                            x14_17 = x12_24 s>= 0 ? x12_24 : -ffffffffffffffff
                            
                            void* x13_19 = x9_7 - x10_11
                            void* x14_18
                            
                            x14_18 = x14_17 s< 1 ? x14_17 : 1
                            
                            i_33 = x12_24 s>> 2
                            void* x12_25
                            
                            x12_25 = x13_19 s> x12_24 ? x13_19 : x12_24
                            
                            int64_t i_29 = x14_18 * (x12_25 u>> 2)
                            uint64_t x13_20 = 1
                            int64_t i_7
                            
                            do
                                int32_t x14_19 = *(x9_7 - 4 + (i_29 << 2))
                                i_7 = i_29
                                i_29 -= 1
                                x13_20 =
                                    zx.q(x13_20.d) & zx.q(((x14_19 - 1) & not.d(x14_19)) s>> 0x1f)
                                i_33 -= x13_20
                            while (i_7 != 1)
                        
                        *(arg1 + 0x18) = i_33
                    else if (i_33 == 1)
                        goto label_dce1b0
                    
                    if (i_33 == -1)
                        void* x11_24 = x10_11 - x9_7
                        
                        if (x10_11 == x9_7)
                            i_33 = 0
                        else
                            void* x13_21
                            
                            x13_21 = x11_24 s>= 0 ? x11_24 : -ffffffffffffffff
                            
                            void* x12_27 = x9_7 - x10_11
                            void* x13_22
                            
                            x13_22 = x13_21 s< 1 ? x13_21 : 1
                            
                            i_33 = x11_24 s>> 2
                            void* x11_25
                            
                            x11_25 = x12_27 s> x11_24 ? x12_27 : x11_24
                            
                            int64_t i_25 = x13_22 * (x11_25 u>> 2)
                            uint64_t x12_28 = 1
                            int64_t i_8
                            
                            do
                                int32_t x13_23 = *(x9_7 - 4 + (i_25 << 2))
                                i_8 = i_25
                                i_25 -= 1
                                x12_28 =
                                    zx.q(x12_28.d) & zx.q(((x13_23 - 1) & not.d(x13_23)) s>> 0x1f)
                                i_33 -= x12_28
                            while (i_8 != 1)
                        
                        *(arg1 + 0x18) = i_33
                    else if (i_33 == 1)
                        goto label_dce24c
                    
                    if (i_33 != 1)
                        goto label_dce31c
                    
                    goto label_dce2e4
                
                int32_t x8_1 = *x9_7
                
                if (((((x8_1 - 3) & not.d(x8_1)) s>> 0x1f | 1)
                    & not.d((((x8_1 ^ 3) - 1) & not.d(x8_1)) s>> 0x1f)) != 0)
                label_dce110:
                    int32_t x8_3 = *x9_7
                    
                    if (((((x8_3 - 5) & not.d(x8_3)) s>> 0x1f | 1)
                        & not.d((((x8_3 ^ 5) - 1) & not.d(x8_3)) s>> 0x1f)) != 0)
                    label_dce1b0:
                        int32_t x8_5 = *x9_7
                        
                        if (((((x8_5 - 7) & not.d(x8_5)) s>> 0x1f | 1)
                            & not.d((((x8_5 ^ 7) - 1) & not.d(x8_5)) s>> 0x1f)) != 0)
                        label_dce24c:
                            int32_t x8_7 = *x9_7
                            
                            if (((((x8_7 - 0xb) & not.d(x8_7)) s>> 0x1f | 1)
                                & not.d((((x8_7 ^ 0xb) - 1) & not.d(x8_7)) s>> 0x1f)) != 0)
                            label_dce2e4:
                                int32_t x8_9 = *x9_7
                                
                                if (((((x8_9 - 0xd) & not.d(x8_9)) s>> 0x1f | 1)
                                        & not.d((((x8_9 ^ 0xd) - 1) & not.d(x8_9)) s>> 0x1f)) == 0)
                                    x19_2 = 1
                                else
                                label_dce31c:
                                    int32_t* var_88
                                    __builtin_memset(&var_88, 0, 0x18)
                                    int32_t var_68_1 = 1
                                    int64_t var_70_1 = -1
                                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                        &var_88)
                                    *var_88 = 5
                                    int32_t* x8_12 = var_88
                                    int64_t i_32 = -1
                                    int64_t var_80
                                    
                                    if ((var_80 - x8_12) s>> 2 u>= 2)
                                        x8_12[1] = 0
                                    
                                    while (true)
                                        int32_t x0_3 = Botan::jacobi(&var_88, arg1)
                                        int32_t var_b0
                                        void* var_a8
                                        int64_t var_a0
                                        
                                        if (x0_3 != 0xffffffff)
                                            if (x0_3 != 0)
                                                if (var_68_1 == 0)
                                                    var_68_1 = 1
                                                    var_b0 = 2
                                                    Botan::BigInt::add(&var_88, &var_b0, 1)
                                                    
                                                    if (var_68_1 == 0)
                                                        continue
                                                else
                                                    var_b0 = 2
                                                    Botan::BigInt::add(&var_88, &var_b0, 1)
                                                    
                                                    if (var_68_1 != 1)
                                                        var_68_1 = 1
                                                    else
                                                        int64_t i_35 = i_32
                                                        
                                                        if (i_35 == -1)
                                                            int32_t* x9_13 = var_88
                                                            void* x10_29 = var_80 - x9_13
                                                            
                                                            if (var_80 == x9_13)
                                                                i_35 = 0
                                                            else
                                                                void* x12_29
                                                                
                                                                x12_29 = x10_29 s>= 0 ? x10_29
                                                                    : -ffffffffffffffff
                                                                
                                                                void* x11_28 = x9_13 - var_80
                                                                void* x12_30
                                                                
                                                                x12_30 = x12_29 s< 1 ? x12_29 : 1
                                                                
                                                                i_35 = x10_29 s>> 2
                                                                void* x10_30
                                                                
                                                                x10_30 =
                                                                    x11_28 s> x10_29 ? x11_28 : x10_29
                                                                
                                                                int64_t i_20 = x12_30 * (x10_30 u>> 2)
                                                                uint64_t x11_29 = 1
                                                                int64_t i_9
                                                                
                                                                do
                                                                    int32_t x12_31 =
                                                                        *(x9_13 - 4 + (i_20 << 2))
                                                                    i_9 = i_20
                                                                    i_20 -= 1
                                                                    x11_29 = zx.q(x11_29.d) & zx.q(((x12_31
                                                                        - 1) & not.d(x12_31)) s>> 0x1f)
                                                                    i_35 -= x11_29
                                                                while (i_9 != 1)
                                                            
                                                            i_32 = i_35
                                                        
                                                        int32_t x8_16 = i_35 == 0 ? 1 : 0
                                                        var_68_1 = x8_16
                                                        
                                                        if (x8_16 == 0)
                                                            continue
                                                
                                                int64_t i_16 = i_32
                                                
                                                if (i_16 == -1)
                                                    int32_t* x9_15 = var_88
                                                    void* x10_32 = var_80 - x9_15
                                                    
                                                    if (var_80 == x9_15)
                                                        i_16 = 0
                                                        i_32 = 0
                                                    else
                                                        void* x12_33
                                                        
                                                        x12_33 = x10_32 s>= 0 ? x10_32
                                                            : -ffffffffffffffff
                                                        
                                                        void* x11_31 = x9_15 - var_80
                                                        void* x12_34
                                                        
                                                        x12_34 = x12_33 s< 1 ? x12_33 : 1
                                                        
                                                        i_16 = x10_32 s>> 2
                                                        void* x10_33
                                                        
                                                        x10_33 = x11_31 s> x10_32 ? x11_31 : x10_32
                                                        
                                                        int64_t i_21 = x12_34 * (x10_33 u>> 2)
                                                        uint64_t x11_32 = 1
                                                        int64_t i_10
                                                        
                                                        do
                                                            int32_t x12_35 =
                                                                *(x9_15 - 4 + (i_21 << 2))
                                                            i_10 = i_21
                                                            i_21 -= 1
                                                            x11_32 = zx.q(x11_32.d) & zx.q(((x12_35
                                                                - 1) & not.d(x12_35)) s>> 0x1f)
                                                            i_16 -= x11_32
                                                        while (i_10 != 1)
                                                        i_32 = i_16
                                                        
                                                        if (i_16 u> 1)
                                                            continue
                                                else if (i_16 u> 1)
                                                    continue
                                                
                                                if (i_16 == 0)
                                                    continue
                                                else
                                                    int32_t* x9_17 = var_88
                                                    int32_t x10_35 = 0
                                                    int64_t i_11
                                                    
                                                    do
                                                        int32_t x11_33 = *x9_17
                                                        x9_17 = &x9_17[1]
                                                        i_11 = i_16
                                                        i_16 -= 1
                                                        int32_t x11_35 = (((x11_33 ^ 0x11) - 1)
                                                            & not.d(x11_33)) s>> 0x1f
                                                        x10_35 = (x10_35 & x11_35) | ((((x11_33
                                                            - 0x11) & not.d(x11_33)) s>> 0x1f | 1)
                                                            & not.d(x11_35))
                                                    while (i_11 != 1)
                                                    
                                                    if (x10_35 != 0)
                                                        continue
                                                    else
                                                        Botan::is_perfect_square(arg1)
                                                        int64_t var_98
                                                        int32_t x25_1
                                                        void* x0_7
                                                        
                                                        if (var_98 == -1)
                                                            x0_7 = var_b0.q
                                                            void* x10_37 = var_a8 - x0_7
                                                            
                                                            if (var_a8 == x0_7)
                                                                x25_1 = 0
                                                                var_98 = 0
                                                                
                                                                if (x0_7 != 0)
                                                                    var_a8 = x0_7
                                                                    Botan::deallocate_memory(x0_7, 
                                                                        (var_a0 - x0_7) s>> 2, 4)
                                                            else
                                                                void* x11_36
                                                                
                                                                x11_36 = x10_37 s>= 0 ? x10_37
                                                                    : -ffffffffffffffff
                                                                
                                                                void* x9_19 = x0_7 - var_a8
                                                                void* x11_37
                                                                
                                                                x11_37 = x11_36 s< 1 ? x11_36 : 1
                                                                
                                                                void* x9_20
                                                                
                                                                x9_20 = x9_19 s> x10_37 ? x9_19 : x10_37
                                                                
                                                                int64_t x8_18 = x10_37 s>> 2
                                                                int64_t i_12 =
                                                                    x11_37 * (x9_20 u>> 2) - 1
                                                                uint64_t x10_38 = 1
                                                                
                                                                do
                                                                    int32_t x11_38 = *(x0_7 + (i_12 << 2))
                                                                    i_12 -= 1
                                                                    x10_38 = zx.q(x10_38.d) & zx.q(((x11_38
                                                                        - 1) & not.d(x11_38)) s>> 0x1f)
                                                                    x8_18 -= x10_38
                                                                while (i_12 != -1)
                                                                
                                                                var_98 = x8_18
                                                                x25_1 = x8_18 != 0 ? 1 : 0
                                                                var_a8 = x0_7
                                                                Botan::deallocate_memory(x0_7, 
                                                                    (var_a0 - x0_7) s>> 2, 4)
                                                        else
                                                            x0_7 = var_b0.q
                                                            x25_1 = var_98 != 0 ? 1 : 0
                                                            
                                                            if (x0_7 != 0)
                                                                var_a8 = x0_7
                                                                Botan::deallocate_memory(x0_7, 
                                                                    (var_a0 - x0_7) s>> 2, 4)
                                                        
                                                        if ((x25_1 & 1) == 0)
                                                            continue
                                            
                                            x19_2 = 0
                                            break
                                        
                                        uint32_t var_d8 = 1
                                        Botan::BigInt::add2(arg1, &var_d8, 1, 1)
                                        int64_t x0_9 = Botan::BigInt::bits()
                                        int32_t var_b8_1 = 1
                                        var_d8.q = 0
                                        int64_t var_d0_1 = 0
                                        int64_t var_c8_1 = 0
                                        int64_t var_c0_1 = -1
                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                            &var_d8)
                                        *var_d8.q = 1
                                        void* x9_24 = var_d8.q
                                        int64_t i_30 = -1
                                        
                                        if ((var_d0_1 - x9_24) s>> 2 u>= 2)
                                            *(x9_24 + 4) = 0
                                        
                                        int32_t* var_100
                                        __builtin_memset(&var_100, 0, 0x18)
                                        int32_t var_e0_1 = 1
                                        int64_t var_e8_1 = -1
                                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                            &var_100)
                                        *var_100 = 1
                                        int32_t* x9_26 = var_100
                                        int64_t var_e8_2 = -1
                                        int64_t var_f8
                                        
                                        if ((var_f8 - x9_26) s>> 2 u>= 2)
                                            x9_26[1] = 0
                                        
                                        void* var_128
                                        __builtin_memset(&var_128, 0, 0x18)
                                        int32_t var_108_1 = 1
                                        uint32_t* var_150
                                        __builtin_memset(&var_150, 0, 0x18)
                                        int32_t var_130_1 = 1
                                        char* var_180
                                        __builtin_memset(&var_180, 0, 0x18)
                                        int32_t var_160_1 = 1
                                        char* var_1b0
                                        __builtin_memset(&var_1b0, 0, 0x18)
                                        int64_t i_36 = -1
                                        uint64_t var_138_1 = -1
                                        int64_t i_40 = -1
                                        int64_t i_39 = -1
                                        int32_t var_190_1 = 1
                                        int64_t var_1a0_1
                                        int64_t var_170_1
                                        int64_t var_140_1
                                        int64_t var_118
                                        
                                        if (x0_9 != 1)
                                            int64_t i_13 = 0
                                            
                                            do
                                                int64_t x8_21 = var_b0.q
                                                int64_t x27_1 = x0_9 - 2 - i_13
                                                uint64_t x9_27 = x27_1 u>> 5
                                                int32_t x28_1
                                                
                                                if (x9_27 u>= (var_a8 - x8_21) s>> 2)
                                                    x28_1 = 0
                                                else
                                                    x28_1 = *(x8_21 + (x9_27 << 2))
                                                
                                                Botan::Modular_Reducer::multiply(arg2, &var_d8)
                                                void* x0_13 = var_128
                                                int128_t var_1d8
                                                int128_t v0_1 = var_1d8
                                                void* var_1e0
                                                var_128 = var_1e0
                                                var_1d8:8.q = var_118
                                                int64_t i_38 = i_36
                                                int64_t var_120_1
                                                var_120_1.o = v0_1
                                                int32_t x10_47 = var_108_1
                                                int64_t i_34
                                                i_36 = i_34
                                                int32_t var_1c0
                                                var_108_1 = var_1c0
                                                
                                                if (x0_13 != 0)
                                                    var_1d8.q = x0_13
                                                    Botan::deallocate_memory(x0_13, 
                                                        (var_118 - x0_13) s>> 2, 4)
                                                
                                                Botan::Modular_Reducer::square(arg2)
                                                Botan::Modular_Reducer::square(arg2)
                                                Botan::Modular_Reducer::multiply(arg2, &var_88)
                                                uint64_t var_240
                                                uint64_t x2_1 = var_240
                                                uint32_t* var_258
                                                uint32_t* var_250
                                                
                                                if (x2_1 == -1)
                                                    void* x9_29 = var_250 - var_258
                                                    
                                                    if (var_250 == var_258)
                                                        x2_1 = 0
                                                    else
                                                        void* x11_40
                                                        
                                                        x11_40 =
                                                            x9_29 s>= 0 ? x9_29 : -ffffffffffffffff
                                                        
                                                        void* x10_48 = var_258 - var_250
                                                        void* x11_41
                                                        
                                                        x11_41 = x11_40 s< 1 ? x11_40 : 1
                                                        
                                                        x2_1 = x9_29 s>> 2
                                                        void* x9_30
                                                        
                                                        x9_30 = x10_48 s> x9_29 ? x10_48 : x9_29
                                                        
                                                        int64_t j_3 = x11_41 * (x9_30 u>> 2)
                                                        uint64_t x10_49 = 1
                                                        int64_t j
                                                        
                                                        do
                                                            int32_t x11_42 =
                                                                *(var_258 - 4 + (j_3 << 2))
                                                            j = j_3
                                                            j_3 -= 1
                                                            x10_49 = zx.q(x10_49.d) & zx.q(((x11_42
                                                                - 1) & not.d(x11_42)) s>> 0x1f)
                                                            x2_1 -= x10_49
                                                        while (j != 1)
                                                    
                                                    var_240 = x2_1
                                                
                                                int32_t var_238
                                                uint32_t* var_230
                                                Botan::BigInt::add2(&var_230, var_258, x2_1, 
                                                    zx.q(var_238))
                                                int128_t v0_2
                                                int128_t v1_1
                                                v0_2, v1_1 = Botan::Modular_Reducer::reduce(arg2)
                                                int64_t x9_32 = var_1d8:8.q
                                                v1_1 = var_150.o
                                                uint64_t x0_19 = v1_1.q
                                                var_1d8:8.q = var_140_1
                                                var_150.o = x0_13.o
                                                void* var_1e0_1
                                                var_1e0_1.o = v1_1
                                                
                                                if (x0_19 != 0)
                                                    var_1d8.q = x0_19
                                                    Botan::deallocate_memory(x0_19, 
                                                        (var_140_1 - x0_19) s>> 2, 4)
                                                
                                                void* var_208
                                                int64_t var_1f8
                                                
                                                if (var_208 != 0)
                                                    void* var_200_1 = var_208
                                                    Botan::deallocate_memory(var_208, 
                                                        (var_1f8 - var_208) s>> 2, 4)
                                                
                                                if (var_258 != 0)
                                                    var_250 = var_258
                                                    int64_t var_248
                                                    Botan::deallocate_memory(var_258, 
                                                        (var_248 - var_258) s>> 2, 4)
                                                
                                                void* var_280
                                                
                                                if (var_280 != 0)
                                                    void* var_278_1 = var_280
                                                    int64_t var_270
                                                    Botan::deallocate_memory(var_280, 
                                                        (var_270 - var_280) s>> 2, 4)
                                                
                                                uint32_t* x0_23 = var_230
                                                uint32_t* var_228
                                                int64_t var_220
                                                
                                                if (x0_23 != 0)
                                                    var_228 = x0_23
                                                    Botan::deallocate_memory(x0_23, 
                                                        (var_220 - x0_23) s>> 2, 4)
                                                
                                                uint32_t* x8_36 = var_150
                                                int64_t var_148
                                                uint64_t x1_17
                                                
                                                if (var_148 == x8_36)
                                                    x1_17 = 0
                                                else
                                                    x1_17 = zx.q(*x8_36) & 1
                                                
                                                Botan::BigInt::ct_cond_add(&var_150, x1_17)
                                                Botan::BigInt::operator>>=(&var_150)
                                                Botan::Modular_Reducer::reduce(arg2)
                                                void* x0_27 = var_150
                                                var_140_1 = var_1d8:8.q
                                                var_1d8:8.q = x9_32
                                                var_150.o = var_1e0_1.o
                                                
                                                if (x0_27 != 0)
                                                    var_1d8.q = x0_27
                                                    Botan::deallocate_memory(x0_27, 
                                                        (x9_32 - x0_27) s>> 2, 4)
                                                
                                                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                                                    &var_d8, var_1e0)
                                                i_30 = i_34
                                                var_b8_1 = var_1c0
                                                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                                                    &var_100, var_150)
                                                uint64_t x2_5 = var_138_1
                                                uint64_t x3_4 = zx.q(var_130_1)
                                                uint32_t* x1_22 = var_150
                                                uint64_t var_e8_3 = x2_5
                                                int32_t var_e0_2 = x3_4.d
                                                
                                                if (x2_5 == -1)
                                                    void* x9_37 = var_148 - x1_22
                                                    
                                                    if (var_148 == x1_22)
                                                        x2_5 = 0
                                                    else
                                                        void* x11_46
                                                        
                                                        x11_46 =
                                                            x9_37 s>= 0 ? x9_37 : -ffffffffffffffff
                                                        
                                                        void* x10_54 = x1_22 - var_148
                                                        void* x11_47
                                                        
                                                        x11_47 = x11_46 s< 1 ? x11_46 : 1
                                                        
                                                        x2_5 = x9_37 s>> 2
                                                        void* x9_38
                                                        
                                                        x9_38 = x10_54 s> x9_37 ? x10_54 : x9_37
                                                        
                                                        int64_t j_4 = x11_47 * (x9_38 u>> 2)
                                                        uint64_t x10_55 = 1
                                                        int64_t j_1
                                                        
                                                        do
                                                            int32_t x11_48 =
                                                                *(x1_22 - 4 + (j_4 << 2))
                                                            j_1 = j_4
                                                            j_4 -= 1
                                                            x10_55 = zx.q(x10_55.d) & zx.q(((x11_48
                                                                - 1) & not.d(x11_48)) s>> 0x1f)
                                                            x2_5 -= x10_55
                                                        while (j_1 != 1)
                                                    
                                                    var_138_1 = x2_5
                                                
                                                Botan::BigInt::add2(&var_128, x1_22, x2_5, x3_4)
                                                int128_t v0_4
                                                int128_t v1_2
                                                v0_4, v1_2 = Botan::Modular_Reducer::reduce(arg2)
                                                v1_2 = var_180.o
                                                int64_t x8_42 = var_170_1
                                                int64_t i_41 = i_40
                                                var_170_1 = var_1d8:8.q
                                                i_40 = i_38
                                                int32_t x10_57 = var_160_1
                                                uint64_t x0_32 = v1_2.q
                                                var_1d8:8.q = x8_42
                                                var_180.o = x0_27.o
                                                var_1e0.o = v1_2
                                                var_160_1 = x10_47
                                                
                                                if (x0_32 != 0)
                                                    var_1d8.q = x0_32
                                                    Botan::deallocate_memory(x0_32, 
                                                        (x8_42 - x0_32) s>> 2, 4)
                                                
                                                if (var_208 != 0)
                                                    void* var_200_2 = var_208
                                                    Botan::deallocate_memory(var_208, 
                                                        (var_1f8 - var_208) s>> 2, 4)
                                                
                                                char* x8_46 = var_180
                                                int64_t var_178
                                                uint64_t x1_25
                                                
                                                if (var_178 == x8_46)
                                                    x1_25 = 0
                                                else
                                                    x1_25 = zx.q(*x8_46) & 1
                                                
                                                Botan::BigInt::ct_cond_add(&var_180, x1_25)
                                                Botan::BigInt::operator>>=(&var_180)
                                                Botan::operator*(&var_128, &var_88)
                                                uint64_t var_218
                                                uint64_t x2_7 = var_218
                                                uint32_t* x1_28 = var_230
                                                
                                                if (x2_7 == -1)
                                                    void* x9_43 = var_228 - x1_28
                                                    
                                                    if (var_228 == x1_28)
                                                        x2_7 = 0
                                                    else
                                                        void* x11_50
                                                        
                                                        x11_50 =
                                                            x9_43 s>= 0 ? x9_43 : -ffffffffffffffff
                                                        
                                                        void* x10_58 = x1_28 - var_228
                                                        void* x11_51
                                                        
                                                        x11_51 = x11_50 s< 1 ? x11_50 : 1
                                                        
                                                        x2_7 = x9_43 s>> 2
                                                        void* x9_44
                                                        
                                                        x9_44 = x10_58 s> x9_43 ? x10_58 : x9_43
                                                        
                                                        int64_t j_5 = x11_51 * (x9_44 u>> 2)
                                                        uint64_t x10_59 = 1
                                                        int64_t j_2
                                                        
                                                        do
                                                            int32_t x11_52 =
                                                                *(x1_28 - 4 + (j_5 << 2))
                                                            j_2 = j_5
                                                            j_5 -= 1
                                                            x10_59 = zx.q(x10_59.d) & zx.q(((x11_52
                                                                - 1) & not.d(x11_52)) s>> 0x1f)
                                                            x2_7 -= x10_59
                                                        while (j_2 != 1)
                                                    
                                                    var_218 = x2_7
                                                
                                                int32_t var_210
                                                Botan::BigInt::add2(&var_150, x1_28, x2_7, 
                                                    zx.q(var_210))
                                                int128_t v0_5
                                                int128_t v1_3
                                                v0_5, v1_3 = Botan::Modular_Reducer::reduce(arg2)
                                                v1_3 = var_1b0.o
                                                int64_t x8_50 = var_1a0_1
                                                int64_t i_37 = i_39
                                                var_1a0_1 = var_1d8:8.q
                                                i_39 = i_41
                                                int32_t x10_61 = var_190_1
                                                uint64_t x0_39 = v1_3.q
                                                var_1d8:8.q = x8_50
                                                i_34 = i_37
                                                var_1b0.o = var_1e0.o
                                                var_1e0.o = v1_3
                                                var_190_1 = x10_57
                                                var_1c0 = x10_61
                                                
                                                if (x0_39 != 0)
                                                    var_1d8.q = x0_39
                                                    Botan::deallocate_memory(x0_39, 
                                                        (x8_50 - x0_39) s>> 2, 4)
                                                
                                                if (var_208 != 0)
                                                    void* var_200_3 = var_208
                                                    Botan::deallocate_memory(var_208, 
                                                        (var_1f8 - var_208) s>> 2, 4)
                                                
                                                uint32_t* x0_41 = var_230
                                                
                                                if (x0_41 != 0)
                                                    var_228 = x0_41
                                                    Botan::deallocate_memory(x0_41, 
                                                        (var_220 - x0_41) s>> 2, 4)
                                                
                                                char* x8_56 = var_1b0
                                                int64_t var_1a8
                                                uint64_t x1_32
                                                
                                                if (var_1a8 == x8_56)
                                                    x1_32 = 0
                                                else
                                                    x1_32 = zx.q(*x8_56) & 1
                                                
                                                Botan::BigInt::ct_cond_add(&var_1b0, x1_32)
                                                Botan::BigInt::operator>>=(&var_1b0)
                                                int32_t x21_3 = x28_1 & 1 << x27_1.d
                                                Botan::BigInt::ct_cond_assign(&var_d8, 
                                                    zx.q(x21_3 != 0 ? 1 : 0))
                                                Botan::BigInt::ct_cond_assign(&var_100, 
                                                    zx.q(x21_3 != 0 ? 1 : 0))
                                                i_13 += 1
                                            while (i_13 != x0_9 - 1)
                                        
                                        int64_t i_17
                                        
                                        if (var_b8_1 != 0)
                                            i_17 = i_30
                                            
                                            if (i_17 == -1)
                                                int64_t x9_49 = var_d8.q
                                                int64_t x10_62 = var_d0_1 - x9_49
                                                
                                                if (var_d0_1 == x9_49)
                                                    i_17 = 0
                                                else
                                                    int64_t x12_46
                                                    
                                                    x12_46 = x10_62 s>= 0 ? x10_62 : -1
                                                    
                                                    int64_t x11_55 = x9_49 - var_d0_1
                                                    int64_t x12_47
                                                    
                                                    x12_47 = x12_46 s< 1 ? x12_46 : 1
                                                    
                                                    i_17 = x10_62 s>> 2
                                                    int64_t x10_63
                                                    
                                                    x10_63 = x11_55 s> x10_62 ? x11_55 : x10_62
                                                    
                                                    int64_t i_22 = x12_47 * (x10_63 u>> 2)
                                                    uint64_t x11_56 = 1
                                                    int64_t i_14
                                                    
                                                    do
                                                        int32_t x12_48 = *(x9_49 - 4 + (i_22 << 2))
                                                        i_14 = i_22
                                                        i_22 -= 1
                                                        x11_56 = zx.q(x11_56.d) & zx.q(((x12_48 - 1)
                                                            & not.d(x12_48)) s>> 0x1f)
                                                        i_17 -= x11_56
                                                    while (i_14 != 1)
                                                
                                                int64_t i_31 = i_17
                                        
                                        if (var_b8_1 == 0 || i_17 u> 1)
                                            x19_2 = 0
                                        else if (i_17 == 0)
                                            x19_2 = 1
                                        else
                                            int32_t* x9_51 = var_d8.q
                                            int32_t x10_65 = 0
                                            int64_t i_15
                                            
                                            do
                                                int32_t x11_57 = *x9_51
                                                x9_51 = &x9_51[1]
                                                i_15 = i_17
                                                i_17 -= 1
                                                int32_t x11_59 =
                                                    ((x11_57 - 1) & not.d(x11_57)) s>> 0x1f
                                                x10_65 = (x10_65 & x11_59) | (not.d(x11_59) & 1)
                                            while (i_15 != 1)
                                            x19_2 = x10_65 == 0 ? 1 : 0
                                        
                                        char* x0_46 = var_1b0
                                        
                                        if (x0_46 != 0)
                                            char* var_1a8_1 = x0_46
                                            Botan::deallocate_memory(x0_46, 
                                                (var_1a0_1 - x0_46) s>> 2, 4)
                                        
                                        char* x0_47 = var_180
                                        
                                        if (x0_47 != 0)
                                            char* var_178_1 = x0_47
                                            Botan::deallocate_memory(x0_47, 
                                                (var_170_1 - x0_47) s>> 2, 4)
                                        
                                        uint32_t* x0_48 = var_150
                                        
                                        if (x0_48 != 0)
                                            uint32_t* var_148_1 = x0_48
                                            Botan::deallocate_memory(x0_48, 
                                                (var_140_1 - x0_48) s>> 2, 4)
                                        
                                        void* x0_49 = var_128
                                        
                                        if (x0_49 != 0)
                                            Botan::deallocate_memory(x0_49, 
                                                (var_118 - x0_49) s>> 2, 4)
                                        
                                        int32_t* x0_50 = var_100
                                        
                                        if (x0_50 != 0)
                                            int32_t* var_f8_1 = x0_50
                                            int64_t var_f0
                                            Botan::deallocate_memory(x0_50, (var_f0 - x0_50) s>> 2, 
                                                4)
                                        
                                        void* x0_51 = var_d8.q
                                        
                                        if (x0_51 != 0)
                                            void* var_d0_2 = x0_51
                                            Botan::deallocate_memory(x0_51, 
                                                (var_c8_1 - x0_51) s>> 2, 4)
                                        
                                        void* x0_52 = var_b0.q
                                        
                                        if (x0_52 != 0)
                                            void* var_a8_1 = x0_52
                                            Botan::deallocate_memory(x0_52, (var_a0 - x0_52) s>> 2, 
                                                4)
                                        
                                        break
                                    
                                    int32_t* x0_53 = var_88
                                    
                                    if (x0_53 != 0)
                                        int32_t* var_80_1 = x0_53
                                        int64_t var_78
                                        Botan::deallocate_memory(x0_53, (var_78 - x0_53) s>> 2, 4)
                            else
                                x19_2 = 1
                        else
                            x19_2 = 1
                    else
                        x19_2 = 1
                else
                    x19_2 = 1

return zx.q(x19_2)
