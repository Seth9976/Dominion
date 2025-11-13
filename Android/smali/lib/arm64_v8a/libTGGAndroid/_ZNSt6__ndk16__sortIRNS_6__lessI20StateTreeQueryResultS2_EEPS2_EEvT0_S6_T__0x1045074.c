// 函数: _ZNSt6__ndk16__sortIRNS_6__lessI20StateTreeQueryResultS2_EEPS2_EEvT0_S6_T_
// 地址: 0x1045074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

StateTreeQueryResult* x20 = arg2
StateTreeQueryResult* x19 = arg1

while (true)
    void* __offset(StateTreeQueryResult, -0x18) x21_1 = x20 - 0x18
    void* __offset(StateTreeQueryResult, 0x18) x23_1 = x19
    
    while (true)
    label_10450b4:
        int64_t x8_1 = x20 - x23_1
        int64_t x9_2 = (x8_1 s>> 3) * -0x5555555555555555
        x19 = x23_1
        int128_t v0
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    if (*(x20 - 8) s< *(x19 + 0x10))
                        int64_t x8_49 = *(x19 + 0x10)
                        int128_t var_80_15 = *x19
                        v0 = *(x20 - 0x18)
                        *(x19 + 0x10) = *(x20 - 8)
                        *x19 = v0
                        *(x20 - 8) = x8_49
                        *(x20 - 0x18) = var_80_15
                case 3
                    int32_t x9_31 = *(x19 + 0x28)
                    int32_t x10_18 = *(x20 - 8)
                    
                    if (x9_31 s>= *(x19 + 0x10))
                        if (x10_18 s< x9_31)
                            int64_t x9_46 = *(x19 + 0x28)
                            int128_t var_80_22 = *(x19 + 0x18)
                            v0 = *x21_1
                            *(x19 + 0x28) = *(x21_1 + 0x10)
                            *(x19 + 0x18) = v0
                            *(x21_1 + 0x10) = x9_46
                            *x21_1 = var_80_22
                            
                            if (*(x19 + 0x28) s< *(x19 + 0x10))
                                int64_t x9_50 = *(x19 + 0x10)
                                int128_t var_80_23 = *x19
                                v0 = *(x19 + 0x18)
                                *(x19 + 0x10) = *(x19 + 0x28)
                                *x19 = v0
                                *(x19 + 0x28) = x9_50
                                *(x19 + 0x18) = var_80_23
                    else
                        int128_t var_80_17
                        int64_t var_70_17
                        
                        if (x10_18 s< x9_31)
                        label_10458fc:
                            var_70_17 = *(x19 + 0x10)
                            var_80_17 = *x19
                            v0 = *x21_1
                            *(x19 + 0x10) = *(x21_1 + 0x10)
                            *x19 = v0
                            *(x21_1 + 0x10) = var_70_17
                            *x21_1 = var_80_17
                        else
                            int64_t x9_32 = *(x19 + 0x10)
                            int128_t var_80_16 = *x19
                            v0 = *(x19 + 0x18)
                            *(x19 + 0x10) = *(x19 + 0x28)
                            *x19 = v0
                            *(x19 + 0x28) = x9_32
                            *(x19 + 0x18) = var_80_16
                            
                            if (*(x20 - 8) s< *(x19 + 0x28))
                                var_70_17 = *(x19 + 0x28)
                                var_80_17 = *(x19 + 0x18)
                                v0 = *x21_1
                                *(x19 + 0x28) = *(x21_1 + 0x10)
                                *(x19 + 0x18) = v0
                                *(x21_1 + 0x10) = var_70_17
                                *x21_1 = var_80_17
                case 4
                    return std::__ndk1::__sort4<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                        x19, x19 + 0x18, x19 + 0x30, x21_1, arg3) __tailcall
                case 5
                    x21_1 = x19 + 0x18
                    arg1, v0 = std::__ndk1::__sort4<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                        x19, x21_1, x19 + 0x30, x19 + 0x48, arg3)
                    
                    if (*(x20 - 8) s< *(x19 + 0x58))
                        int64_t x8_56 = *(x19 + 0x58)
                        int128_t var_80_18 = *(x19 + 0x48)
                        v0 = *(x20 - 0x18)
                        *(x19 + 0x58) = *(x20 - 8)
                        *(x19 + 0x48) = v0
                        *(x20 - 8) = x8_56
                        *(x20 - 0x18) = var_80_18
                        
                        if (*(x19 + 0x58) s< *(x19 + 0x40))
                            int64_t x8_60 = *(x19 + 0x40)
                            int128_t var_80_19 = *(x19 + 0x30)
                            v0 = *(x19 + 0x48)
                            *(x19 + 0x40) = *(x19 + 0x58)
                            *(x19 + 0x30) = v0
                            *(x19 + 0x58) = x8_60
                            *(x19 + 0x48) = var_80_19
                            
                            if (*(x19 + 0x40) s< *(x19 + 0x28))
                                int64_t x8_64 = *(x21_1 + 0x10)
                                int128_t var_80_20 = *x21_1
                                v0 = *(x19 + 0x30)
                                *(x21_1 + 0x10) = *(x19 + 0x40)
                                *x21_1 = v0
                                *(x19 + 0x40) = x8_64
                                *(x19 + 0x30) = var_80_20
                                
                                if (*(x19 + 0x28) s< *(x19 + 0x10))
                                    goto label_10458fc
        else if (x8_1 s<= 0x2e7)
            int32_t x12_3 = *(x19 + 0x28)
            int32_t x11_7 = *(x19 + 0x10)
            int32_t x10_21 = *(x19 + 0x40)
            void* __offset(StateTreeQueryResult, 0x48) x8_71 = x19 + 0x30
            
            if (x12_3 s>= x11_7)
                if (x10_21 s< x12_3)
                    int64_t x10_23 = *(x19 + 0x28)
                    int128_t var_80_24 = *(x19 + 0x18)
                    v0 = *x8_71
                    *(x19 + 0x28) = *(x8_71 + 0x10)
                    *(x19 + 0x18) = v0
                    *(x8_71 + 0x10) = x10_23
                    *x8_71 = var_80_24
                    
                    if (*(x19 + 0x28) s< x11_7)
                        int64_t x10_27 = *(x19 + 0x10)
                        int128_t var_80_25 = *x19
                        v0 = *(x19 + 0x18)
                        *(x19 + 0x10) = *(x19 + 0x28)
                        *x19 = v0
                        *(x19 + 0x28) = x10_27
                        *(x19 + 0x18) = var_80_25
            else
                int128_t var_80_21
                int64_t var_70_21
                
                if (x10_21 s>= x12_3)
                    int64_t x11_8 = *(x19 + 0x10)
                    int128_t var_80_26 = *x19
                    v0 = *(x19 + 0x18)
                    *(x19 + 0x10) = *(x19 + 0x28)
                    *x19 = v0
                    *(x19 + 0x28) = x11_8
                    *(x19 + 0x18) = var_80_26
                    
                    if (x10_21 s< *(x19 + 0x28))
                        var_70_21 = *(x19 + 0x28)
                        var_80_21 = *(x19 + 0x18)
                        v0 = *x8_71
                        *(x19 + 0x28) = *(x8_71 + 0x10)
                        *(x19 + 0x18) = v0
                        *(x8_71 + 0x10) = var_70_21
                        *x8_71 = var_80_21
                else
                    var_70_21 = *(x19 + 0x10)
                    var_80_21 = *x19
                    v0 = *x8_71
                    *(x19 + 0x10) = *(x8_71 + 0x10)
                    *x19 = v0
                    *(x8_71 + 0x10) = var_70_21
                    *x8_71 = var_80_21
            
            void* __offset(StateTreeQueryResult, 0x48) x10_32 = x19 + 0x48
            
            if (x10_32 != x20)
                int64_t x9_54 = 0
                
                do
                    int32_t x11_12 = *(x8_71 + 0x10)
                    x8_71 = x10_32
                    int32_t x10_33 = *(x10_32 + 0x10)
                    
                    if (x10_33 s< x11_12)
                        int64_t x12_5 = x9_54
                        int128_t var_80_27 = *x8_71
                        int32_t x11_13 = *(x8_71 + 0x14)
                        void* x12_4
                        
                        while (true)
                            void* x13_2 = x19 + x12_5
                            int64_t x14_2 = *(x13_2 + 0x40)
                            *(x13_2 + 0x48) = *(x13_2 + 0x30)
                            *(x13_2 + 0x58) = x14_2
                            
                            if (x12_5 == -0x30)
                                x12_4 = x19
                                break
                            
                            x12_5 -= 0x18
                            
                            if (x10_33 s>= *(x13_2 + 0x28))
                                x12_4 = x19 + x12_5 + 0x48
                                break
                        
                        *(x12_4 + 0x10) = x10_33
                        *(x12_4 + 0x14) = x11_13
                        *x12_4 = var_80_27
                    
                    x10_32 = x8_71 + 0x18
                    x9_54 += 0x18
                while (x10_32 != x20)
        else
            int32_t x8_18
            int32_t i
            void* __offset(StateTreeQueryResult, -0x18) x23_2
            
            if (x8_1 s>= 0x5da9)
                uint64_t fp_1 = x8_1 u/ 0x60
                uint64_t x27_1 = x8_1 u/ 0x30
                x23_2 = x19 + x27_1 * 0x18
                uint64_t x8_4 = fp_1 * 0x18
                void* x24_1 = x19 + x8_4
                void* x25_1 = x23_2 + x8_4
                arg1, v0 = std::__ndk1::__sort4<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                    x19, x24_1, x23_2, x25_1, arg3)
                
                if (*(x20 - 8) s>= *(x25_1 + 0x10))
                    goto label_10453e4
                
                int64_t x8_6 = *(x25_1 + 0x10)
                int128_t var_80_1 = *x25_1
                v0 = *x21_1
                *(x25_1 + 0x10) = *(x21_1 + 0x10)
                *x25_1 = v0
                *(x21_1 + 0x10) = x8_6
                *x21_1 = var_80_1
                
                if (*(x25_1 + 0x10) s>= *(x19 + x27_1 * 0x18 + 0x10))
                    arg1 = zx.q(arg1.d + 1)
                label_10453e4:
                    i = *(x19 + 0x10)
                    x8_18 = *(x23_2 + 0x10)
                    
                    if (i s>= x8_18)
                        goto label_10452c0
                    
                    goto label_10453f4
                
                int64_t x9_6 = *(x23_2 + 0x10)
                int128_t var_80_2 = *x23_2
                v0 = *x25_1
                *(x23_2 + 0x10) = *(x25_1 + 0x10)
                *x23_2 = v0
                *(x25_1 + 0x10) = x9_6
                *x25_1 = var_80_2
                
                if (*(x19 + x27_1 * 0x18 + 0x10) s>= *(x19 + fp_1 * 0x18 + 0x10))
                    arg1 = zx.q(arg1.d + 2)
                    i = *(x19 + 0x10)
                    x8_18 = *(x23_2 + 0x10)
                    
                    if (i s< x8_18)
                        goto label_10453f4
                    
                    goto label_10452c0
                
                int64_t x8_11 = *(x24_1 + 0x10)
                int128_t var_80_3 = *x24_1
                v0 = *x23_2
                *(x24_1 + 0x10) = *(x23_2 + 0x10)
                *x24_1 = v0
                *(x23_2 + 0x10) = x8_11
                *x23_2 = var_80_3
                
                if (*(x19 + fp_1 * 0x18 + 0x10) s>= *(x19 + 0x10))
                    arg1 = zx.q(arg1.d + 3)
                    i = *(x19 + 0x10)
                    x8_18 = *(x23_2 + 0x10)
                    
                    if (i s< x8_18)
                        goto label_10453f4
                    
                    goto label_10452c0
                
                int64_t x8_15 = *(x19 + 0x10)
                arg1 = zx.q(arg1.d + 4)
                int128_t var_80_4 = *x19
                v0 = *x24_1
                *(x19 + 0x10) = *(x24_1 + 0x10)
                *x19 = v0
                *(x24_1 + 0x10) = x8_15
                *x24_1 = var_80_4
                i = *(x19 + 0x10)
                x8_18 = *(x23_2 + 0x10)
                
                if (i s< x8_18)
                    goto label_10453f4
                
                goto label_10452c0
            
            x23_2 = x19 + zx.q((x8_1.d & 0xffff) u/ 0x30) * 0x18
            int32_t x9_11 = *(x23_2 + 0x10)
            
            if (x9_11 s< *(x19 + 0x10))
                if (*(x20 - 8) s< x9_11)
                    int64_t x8_24 = *(x19 + 0x10)
                    arg1 = 1
                    int128_t var_80_5 = *x19
                    v0 = *x21_1
                    *(x19 + 0x10) = *(x21_1 + 0x10)
                    *x19 = v0
                    *(x21_1 + 0x10) = x8_24
                    *x21_1 = var_80_5
                    i = *(x19 + 0x10)
                    x8_18 = *(x23_2 + 0x10)
                    
                    if (i s< x8_18)
                        goto label_10453f4
                    
                    goto label_10452c0
                
                int64_t x9_22 = *(x19 + 0x10)
                int128_t var_80_11 = *x19
                v0 = *x23_2
                *(x19 + 0x10) = *(x23_2 + 0x10)
                *x19 = v0
                *(x23_2 + 0x10) = x9_22
                *x23_2 = var_80_11
                
                if (*(x20 - 8) s>= *(x23_2 + 0x10))
                    goto label_10455dc
                
                int64_t x8_44 = *(x23_2 + 0x10)
                int128_t var_80_12 = *x23_2
                v0 = *x21_1
                *(x23_2 + 0x10) = *(x21_1 + 0x10)
                *x23_2 = v0
                *(x21_1 + 0x10) = x8_44
                *x21_1 = var_80_12
                goto label_10455ac
            
            if (*(x20 - 8) s< x9_11)
                int64_t x9_13 = *(x23_2 + 0x10)
                int128_t var_80_7 = *x23_2
                v0 = *x21_1
                *(x23_2 + 0x10) = *(x21_1 + 0x10)
                *x23_2 = v0
                *(x21_1 + 0x10) = x9_13
                *x21_1 = var_80_7
                
                if (*(x23_2 + 0x10) s>= *(x19 + 0x10))
                label_10455dc:
                    arg1 = 1
                    i = *(x19 + 0x10)
                    x8_18 = *(x23_2 + 0x10)
                    
                    if (i s>= x8_18)
                        goto label_10452c0
                    
                    goto label_10453f4
                
                int64_t x8_33 = *(x19 + 0x10)
                int128_t var_80_8 = *x19
                v0 = *x23_2
                *(x19 + 0x10) = *(x23_2 + 0x10)
                *x19 = v0
                *(x23_2 + 0x10) = x8_33
                *x23_2 = var_80_8
            label_10455ac:
                arg1 = 2
                i = *(x19 + 0x10)
                x8_18 = *(x23_2 + 0x10)
                
                if (i s< x8_18)
                    goto label_10453f4
                
                goto label_10452c0
            
            arg1 = nullptr
            i = *(x19 + 0x10)
            x8_18 = *(x23_2 + 0x10)
            void* __offset(StateTreeQueryResult, -0x18) x8_29
            StateTreeQueryResult* x24_2
            
            if (i s>= x8_18)
            label_10452c0:
                StateTreeQueryResult* x10_6 = x20
                int32_t x12_1
                
                do
                    if (x19 + 0x30 == x10_6)
                        void* __offset(StateTreeQueryResult, 0x30) x8_31 = x19 + 0x18
                        
                        if (i s>= *(x20 - 8))
                            if (x8_31 == x21_1)
                                goto label_1045b7c
                            
                            x8_31 = x19 + 0x30
                            
                            while (i s>= *(x8_31 - 8))
                                x8_31 += 0x18
                                
                                if (x20 == x8_31)
                                    return 
                            
                            int64_t x9_26 = *(x8_31 - 8)
                            int128_t var_80_13 = *(x8_31 - 0x18)
                            v0 = *x21_1
                            *(x8_31 - 8) = *(x21_1 + 0x10)
                            *(x8_31 - 0x18) = v0
                            *(x21_1 + 0x10) = x9_26
                            *x21_1 = var_80_13
                        
                        if (x8_31 == x21_1)
                            goto label_1045b7c
                        
                        void* __offset(StateTreeQueryResult, -0x18) x9_29 = x21_1
                        
                        while (true)
                            int32_t x10_13 = *(x19 + 0x10)
                            x23_1 = x8_31 - 0x18
                            int32_t x8_47
                            
                            do
                                x8_47 = *(x23_1 + 0x28)
                                x23_1 += 0x18
                            while (x10_13 s>= x8_47)
                            x8_31 = x23_1 + 0x18
                            int32_t x11_4
                            
                            do
                                x11_4 = *(x9_29 - 8)
                                x9_29 -= 0x18
                            while (x10_13 s< x11_4)
                            
                            if (x23_1 u>= x9_29)
                                break
                            
                            int64_t x10_14 = *(x23_1 + 0x10)
                            int128_t var_80_14 = *x23_1
                            v0 = *x9_29
                            *(x23_1 + 0x10) = *(x9_29 + 0x10)
                            *x23_1 = v0
                            *(x9_29 + 0x10) = x10_14
                            *x9_29 = var_80_14
                        
                        goto label_10450b4
                    
                    x12_1 = *(x10_6 - 0x20)
                    x10_6 -= 0x18
                while (x12_1 s>= x8_18)
                int64_t x8_27 = *(x19 + 0x10)
                arg1 = zx.q(arg1.d + 1)
                int128_t var_80_6 = *x19
                v0 = *(x10_6 - 0x18)
                *(x19 + 0x10) = *(x10_6 - 8)
                *x19 = v0
                x8_29 = x10_6 - 0x18
                *(x10_6 - 8) = x8_27
                *(x10_6 - 0x18) = var_80_6
                x24_2 = x19 + 0x18
                
                if (x24_2 u>= x8_29)
                    goto label_1045404
                
                goto label_104544c
            
        label_10453f4:
            x8_29 = x21_1
            x24_2 = x19 + 0x18
            
            if (x24_2 u< x8_29)
            label_104544c:
                void* __offset(StateTreeQueryResult, -0x18) x9_17
                
                while (true)
                    int32_t x10_12 = *(x23_2 + 0x10)
                    x9_17 = x24_2 - 0x18
                    int32_t x11_2
                    
                    do
                        x11_2 = *(x9_17 + 0x28)
                        x9_17 += 0x18
                    while (x11_2 s< x10_12)
                    x24_2 = x9_17 + 0x18
                    int32_t x11_3
                    
                    do
                        x11_3 = *(x8_29 - 8)
                        x8_29 -= 0x18
                    while (x11_3 s>= x10_12)
                    
                    if (x9_17 u> x8_29)
                        break
                    
                    int64_t x10_9 = *(x9_17 + 0x10)
                    arg1 = zx.q(arg1.d + 1)
                    int128_t var_80_9 = *x9_17
                    v0 = *x8_29
                    
                    if (x23_2 == x9_17)
                        x23_2 = x8_29
                    
                    *(x9_17 + 0x10) = *(x8_29 + 0x10)
                    *x9_17 = v0
                    *(x8_29 + 0x10) = x10_9
                    *x8_29 = var_80_9
                
                x24_2 = x9_17
                
                if (x24_2 != x23_2)
                    goto label_1045494
            else
            label_1045404:
                
                if (x24_2 != x23_2)
                label_1045494:
                    
                    if (*(x23_2 + 0x10) s< *(x24_2 + 0x10))
                        int64_t x8_37 = *(x24_2 + 0x10)
                        arg1 = zx.q(arg1.d + 1)
                        int128_t var_80_10 = *x24_2
                        v0 = *x23_2
                        *(x24_2 + 0x10) = *(x23_2 + 0x10)
                        *x24_2 = v0
                        *(x23_2 + 0x10) = x8_37
                        *x23_2 = var_80_10
            
            if (arg1.d != 0)
            label_104551c:
                
                if (((x24_2 - x19) s>> 3) * -0x5555555555555555
                        s>= ((x20 - x24_2) s>> 3) * -0x5555555555555555)
                    arg1, v0 = std::__ndk1::__sort<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                        x24_2 + 0x18, x20, arg3)
                    x20 = x24_2
                    break
                
                arg1, v0 = std::__ndk1::__sort<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                    x19, x24_2, arg3)
                x23_1 = x24_2 + 0x18
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                    x19, x24_2, arg3)
                x23_1 = x24_2 + 0x18
                arg1, v0 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                    x23_1, x20, arg3)
                
                if ((arg1.d & 1) != 0)
                    x20 = x24_2
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_104551c
                    
                    continue
    label_1045b7c:
        return 
