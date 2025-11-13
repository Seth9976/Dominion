// 函数: _ZNK5Botan8DL_Group12verify_groupERNS_21RandomNumberGeneratorEb
// 地址: 0xd11990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::RandomNumberGenerator* x19 = arg2
int32_t x0_1
int32_t entry_x2

if (*(Botan::DL_Group::data() + 0x168) != 0 || (entry_x2 & 1) != 0)
    Botan::BigInt* x0_2 = Botan::DL_Group::data()
    void* x0_3 = Botan::DL_Group::data()
    void* x0_4 = Botan::DL_Group::data()
    
    if (*(x0_4 + 0x70) == 0)
        x0_1 = 0
    else
        int64_t i_12 = *(x0_4 + 0x68)
        
        if (i_12 == -1)
            int64_t x9_1 = *(x0_4 + 0x50)
            int64_t x11_1 = *(x0_4 + 0x58)
            int64_t x10_1 = x11_1 - x9_1
            
            if (x11_1 == x9_1)
                i_12 = 0
                *(x0_4 + 0x68) = 0
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_1 - x11_1
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_12 = x10_1 s>> 2
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
                    i_12 -= x11_3
                while (i != 1)
                *(x0_4 + 0x68) = i_12
                
                if (i_12 u> 1)
                    goto label_d11acc
            
        label_d11a80:
            
            if (i_12 == 0)
                x0_1 = 0
            else
                int32_t* x9_3 = *(x0_4 + 0x50)
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 = &x9_3[1]
                    i_1 = i_12
                    i_12 -= 1
                    int32_t x11_6 = (((x11_4 ^ 2) - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6)
                        | ((((x11_4 - 2) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
                while (i_1 != 1)
                
                if ((x10_4 & 0x80000000) == 0 && *(x0_2 + 0x20) != 0)
                    goto label_d11ad0
                
                x0_1 = 0
        else
            if (i_12 u<= 1)
                goto label_d11a80
            
        label_d11acc:
            
            if (*(x0_2 + 0x20) == 0)
                x0_1 = 0
            else
            label_d11ad0:
                int64_t i_13 = *(x0_2 + 0x18)
                
                if (i_13 == -1)
                    int64_t x9_4 = *x0_2
                    int64_t x11_7 = *(x0_2 + 8)
                    int64_t x10_6 = x11_7 - x9_4
                    
                    if (x11_7 == x9_4)
                        i_13 = 0
                        *(x0_2 + 0x18) = 0
                    else
                        int64_t x12_10
                        
                        x12_10 = x10_6 s>= 0 ? x10_6 : -1
                        
                        int64_t x11_8 = x9_4 - x11_7
                        int64_t x12_11
                        
                        x12_11 = x12_10 s< 1 ? x12_10 : 1
                        
                        i_13 = x10_6 s>> 2
                        int64_t x10_7
                        
                        x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                        
                        int64_t i_19 = x12_11 * (x10_7 u>> 2)
                        uint64_t x11_9 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_12 = *(x9_4 - 4 + (i_19 << 2))
                            i_2 = i_19
                            i_19 -= 1
                            x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                            i_13 -= x11_9
                        while (i_2 != 1)
                        *(x0_2 + 0x18) = i_13
                        
                        if (i_13 u> 1)
                            goto label_d11bac
                    
                label_d11b60:
                    
                    if (i_13 == 0)
                        x0_1 = 0
                    else
                        int32_t* x9_6 = *x0_2
                        int32_t x10_9 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_10 = *x9_6
                            x9_6 = &x9_6[1]
                            i_3 = i_13
                            i_13 -= 1
                            int32_t x11_12 = (((x11_10 ^ 3) - 1) & not.d(x11_10)) s>> 0x1f
                            x10_9 = (x10_9 & x11_12)
                                | ((((x11_10 - 3) & not.d(x11_10)) s>> 0x1f | 1) & not.d(x11_12))
                        while (i_3 != 1)
                        
                        if ((x10_9 & 0x80000000) == 0 && *(x0_3 + 0x48) != 0)
                            goto label_d11bb0
                        
                        x0_1 = 0
                else
                    if (i_13 u<= 1)
                        goto label_d11b60
                    
                label_d11bac:
                    
                    if (*(x0_3 + 0x48) == 0)
                        x0_1 = 0
                    else
                    label_d11bb0:
                        int64_t i_14 = *(x0_3 + 0x40)
                        
                        if (i_14 == -1)
                            int64_t x9_7 = *(x0_3 + 0x28)
                            int64_t x11_13 = *(x0_3 + 0x30)
                            int64_t x10_11 = x11_13 - x9_7
                            
                            if (x11_13 == x9_7)
                                i_14 = 0
                            else
                                int64_t x12_19
                                
                                x12_19 = x10_11 s>= 0 ? x10_11 : -1
                                
                                int64_t x11_14 = x9_7 - x11_13
                                int64_t x12_20
                                
                                x12_20 = x12_19 s< 1 ? x12_19 : 1
                                
                                i_14 = x10_11 s>> 2
                                int64_t x10_12
                                
                                x10_12 = x11_14 s> x10_11 ? x11_14 : x10_11
                                
                                int64_t i_20 = x12_20 * (x10_12 u>> 2)
                                uint64_t x11_15 = 1
                                int64_t i_4
                                
                                do
                                    int32_t x12_21 = *(x9_7 - 4 + (i_20 << 2))
                                    i_4 = i_20
                                    i_20 -= 1
                                    x11_15 = zx.q(x11_15.d)
                                        & zx.q(((x12_21 - 1) & not.d(x12_21)) s>> 0x1f)
                                    i_14 -= x11_15
                                while (i_4 != 1)
                            
                            *(x0_3 + 0x40) = i_14
                        
                        if (i_14 u> 1 || i_14 == 0)
                        label_d11c68:
                            int32_t x24_1 = *(Botan::DL_Group::data() + 0x168)
                            
                            if (*(x0_3 + 0x48) == 0)
                            label_d11d24:
                                uint32_t var_34 = 1
                                Botan::BigInt::add2(x0_2, &var_34, 1, 0)
                                void* var_90
                                Botan::operator%(&var_90, x0_3 + 0x28)
                                void* var_68
                                void* var_60
                                int64_t i_24
                                int32_t var_48
                                int64_t i_16
                                
                                if (var_48 != 0)
                                    i_16 = i_24
                                    
                                    if (i_16 == -1)
                                        void* x10_21 = var_60 - var_68
                                        
                                        if (var_60 == var_68)
                                            i_16 = 0
                                        else
                                            void* x12_29
                                            
                                            x12_29 = x10_21 s>= 0 ? x10_21 : -ffffffffffffffff
                                            
                                            void* x11_28 = var_68 - var_60
                                            void* x12_30
                                            
                                            x12_30 = x12_29 s< 1 ? x12_29 : 1
                                            
                                            i_16 = x10_21 s>> 2
                                            void* x10_22
                                            
                                            x10_22 = x11_28 s> x10_21 ? x11_28 : x10_21
                                            
                                            int64_t i_22 = x12_30 * (x10_22 u>> 2)
                                            uint64_t x11_29 = 1
                                            int64_t i_5
                                            
                                            do
                                                int32_t x12_31 = *(var_68 - 4 + (i_22 << 2))
                                                i_5 = i_22
                                                i_22 -= 1
                                                x11_29 = zx.q(x11_29.d)
                                                    & zx.q(((x12_31 - 1) & not.d(x12_31)) s>> 0x1f)
                                                i_16 -= x11_29
                                            while (i_5 != 1)
                                        
                                        i_24 = i_16
                                
                                int32_t x23_2
                                
                                if (var_48 == 0 || i_16 u> 1)
                                    x23_2 = 0
                                else if (i_16 == 0)
                                    x23_2 = 1
                                else
                                    void* x9_15 = var_68
                                    int32_t x10_24 = 0
                                    int64_t i_6
                                    
                                    do
                                        int32_t x11_30 = *x9_15
                                        x9_15 += 4
                                        i_6 = i_16
                                        i_16 -= 1
                                        int32_t x11_32 = ((x11_30 - 1) & not.d(x11_30)) s>> 0x1f
                                        x10_24 = (x10_24 & x11_32) | (not.d(x11_32) & 1)
                                    while (i_6 != 1)
                                    x23_2 = x10_24 == 0 ? 1 : 0
                                
                                int64_t var_58
                                
                                if (var_68 != 0)
                                    var_60 = var_68
                                    Botan::deallocate_memory(var_68, (var_58 - var_68) s>> 2, 4)
                                
                                void* x0_9 = var_90
                                
                                if (x0_9 != 0)
                                    void* var_88_1 = x0_9
                                    int64_t var_80
                                    Botan::deallocate_memory(x0_9, (var_80 - x0_9) s>> 2, 4)
                                
                                if ((x23_2 & 1) == 0)
                                    x0_1 = 0
                                else
                                    void* x0_10 = Botan::DL_Group::data()
                                    Botan::BigInt::bits()
                                    Botan::Montgomery_Exponentation_State::exponentiation(
                                        *(x0_10 + 0x138), x0_3 + 0x28)
                                    int64_t i_17
                                    
                                    if (var_48 != 0)
                                        i_17 = i_24
                                        
                                        if (i_17 == -1)
                                            void* x10_26 = var_60 - var_68
                                            
                                            if (var_60 == var_68)
                                                i_17 = 0
                                            else
                                                void* x12_34
                                                
                                                x12_34 = x10_26 s>= 0 ? x10_26 : -ffffffffffffffff
                                                
                                                void* x11_36 = var_68 - var_60
                                                void* x12_35
                                                
                                                x12_35 = x12_34 s< 1 ? x12_34 : 1
                                                
                                                i_17 = x10_26 s>> 2
                                                void* x10_27
                                                
                                                x10_27 = x11_36 s> x10_26 ? x11_36 : x10_26
                                                
                                                int64_t i_23 = x12_35 * (x10_27 u>> 2)
                                                uint64_t x11_37 = 1
                                                int64_t i_7
                                                
                                                do
                                                    int32_t x12_36 = *(var_68 - 4 + (i_23 << 2))
                                                    i_7 = i_23
                                                    i_23 -= 1
                                                    x11_37 = zx.q(x11_37.d) & zx.q(((x12_36 - 1)
                                                        & not.d(x12_36)) s>> 0x1f)
                                                    i_17 -= x11_37
                                                while (i_7 != 1)
                                            
                                            int64_t i_25 = i_17
                                    
                                    int32_t __saved_x0_2
                                    
                                    if (var_48 == 0 || i_17 u> 1 || i_17 == 0)
                                        __saved_x0_2 = 0
                                    else
                                        void* x9_19 = var_68
                                        int32_t x10_29 = 0
                                        int64_t i_8
                                        
                                        do
                                            int32_t x11_38 = *x9_19
                                            x9_19 += 4
                                            i_8 = i_17
                                            i_17 -= 1
                                            int32_t x11_40 =
                                                (((x11_38 ^ 1) - 1) & not.d(x11_38)) s>> 0x1f
                                            x10_29 = (x10_29 & x11_40) | ((
                                                ((x11_38 - 1) & not.d(x11_38)) s>> 0x1f | 1)
                                                & not.d(x11_40))
                                        while (i_8 != 1)
                                        __saved_x0_2 = x10_29 == 0 ? 1 : 0
                                    
                                    if (var_68 != 0)
                                        void* var_60_1 = var_68
                                        Botan::deallocate_memory(var_68, (var_58 - var_68) s>> 2, 4)
                                    
                                    if (__saved_x0_2 == 0)
                                        x0_1 = 0
                                    else if ((Botan::is_prime(x0_3 + 0x28, x19, 0x80, 
                                            (x24_1 != 2 ? 1 : 0).b) & 1) == 0)
                                        x0_1 = 0
                                    else
                                        x0_1 =
                                            Botan::is_prime(x0_2, x19, 0x80, (x24_1 != 2 ? 1 : 0).b)
                            else
                                int64_t i_15 = *(x0_3 + 0x40)
                                
                                if (i_15 == -1)
                                    int64_t x9_10 = *(x0_3 + 0x28)
                                    int64_t x11_19 = *(x0_3 + 0x30)
                                    int64_t x10_16 = x11_19 - x9_10
                                    
                                    if (x11_19 == x9_10)
                                        i_15 = 0
                                    else
                                        int64_t x12_24
                                        
                                        x12_24 = x10_16 s>= 0 ? x10_16 : -1
                                        
                                        int64_t x11_20 = x9_10 - x11_19
                                        int64_t x12_25
                                        
                                        x12_25 = x12_24 s< 1 ? x12_24 : 1
                                        
                                        i_15 = x10_16 s>> 2
                                        int64_t x10_17
                                        
                                        x10_17 = x11_20 s> x10_16 ? x11_20 : x10_16
                                        
                                        int64_t i_21 = x12_25 * (x10_17 u>> 2)
                                        uint64_t x11_21 = 1
                                        int64_t i_9
                                        
                                        do
                                            int32_t x12_26 = *(x9_10 - 4 + (i_21 << 2))
                                            i_9 = i_21
                                            i_21 -= 1
                                            x11_21 = zx.q(x11_21.d)
                                                & zx.q(((x12_26 - 1) & not.d(x12_26)) s>> 0x1f)
                                            i_15 -= x11_21
                                        while (i_9 != 1)
                                    
                                    *(x0_3 + 0x40) = i_15
                                
                                if (i_15 u> 1)
                                    goto label_d11d24
                                
                                if (i_15 == 0)
                                    x0_1 = Botan::is_prime(x0_2, x19, 0x80, (x24_1 != 2 ? 1 : 0).b)
                                else
                                    int32_t* x9_12 = *(x0_3 + 0x28)
                                    int32_t x10_19 = 0
                                    int64_t i_10
                                    
                                    do
                                        int32_t x11_22 = *x9_12
                                        x9_12 = &x9_12[1]
                                        i_10 = i_15
                                        i_15 -= 1
                                        int32_t x11_24 = ((x11_22 - 1) & not.d(x11_22)) s>> 0x1f
                                        x10_19 = (x10_19 & x11_24) | (not.d(x11_24) & 1)
                                    while (i_10 != 1)
                                    
                                    if (x10_19 != 0)
                                        goto label_d11d24
                                    
                                    x0_1 = Botan::is_prime(x0_2, x19, 0x80, (x24_1 != 2 ? 1 : 0).b)
                        else
                            int32_t* x9_9 = *(x0_3 + 0x28)
                            int32_t x10_14 = 0
                            int32_t x11_18
                            int64_t i_11
                            
                            do
                                int32_t x11_16 = *x9_9
                                x9_9 = &x9_9[1]
                                i_11 = i_14
                                i_14 -= 1
                                x11_18 = (x10_14 ^ 1) & ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f
                                x10_14 = x11_18 ^ 1
                            while (i_11 != 1)
                            
                            if ((x11_18 & 0x80000000) == 0)
                                goto label_d11c68
                            
                            x0_1 = 0
else
    x0_1 = 1

return zx.q(x0_1) & 1
