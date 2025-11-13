// 函数: _ZNSt6__ndk16__sortIRNS_6__lessI11DomCardEnumS2_EEPS2_EEvT0_S6_T_
// 地址: 0xc10264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomCardEnum* x20 = arg2
DomCardEnum* x19 = arg1

while (true)
    void* __offset(DomCardEnum, 0x4) x23_1 = x19
    
    while (true)
    label_c10290:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    int32_t x8_11 = *(x20 - 4)
                    int32_t x9_11 = *x19
                    
                    if (x8_11 s< x9_11)
                        *x19 = x8_11
                        *(x20 - 4) = x9_11
                case 3
                    int32_t x8_12 = *x19
                    int32_t x9_12 = *(x19 + 4)
                    int32_t x10_10 = *(x20 - 4)
                    
                    if (x9_12 s>= x8_12)
                        if (x10_10 s< x9_12)
                            *(x19 + 4) = x10_10
                            *(x20 - 4) = x9_12
                            int32_t x9_16 = *x19
                            int32_t x8_16 = *(x19 + 4)
                            
                            if (x8_16 s< x9_16)
                                *x19 = x8_16
                                *(x19 + 4) = x9_16
                    else if (x10_10 s>= x9_12)
                        *x19 = x9_12
                        *(x19 + 4) = x8_12
                        int32_t x9_17 = *(x20 - 4)
                        
                        if (x9_17 s< x8_12)
                            *(x19 + 4) = x9_17
                            *(x20 - 4) = x8_12
                    else
                        *x19 = x10_10
                        *(x20 - 4) = x8_12
                case 4
                    int32_t x9_13 = *x19
                    int32_t x8_13 = *(x19 + 4)
                    int32_t x10_11 = *(x19 + 8)
                    
                    if (x8_13 s>= x9_13)
                        if (x10_11 s>= x8_13)
                            x8_13 = x10_11
                        else
                            *(x19 + 4) = x10_11
                            *(x19 + 8) = x8_13
                            
                            if (x10_11 s< x9_13)
                                *x19 = x10_11
                                *(x19 + 4) = x9_13
                    else if (x10_11 s>= x8_13)
                        *x19 = x8_13
                        *(x19 + 4) = x9_13
                        
                        if (x10_11 s>= x9_13)
                            x8_13 = x10_11
                        else
                            *(x19 + 4) = x10_11
                            x8_13 = x9_13
                            *(x19 + 8) = x9_13
                    else
                        *x19 = x10_11
                        x8_13 = x9_13
                        *(x19 + 8) = x9_13
                    
                    int32_t x9_18 = *(x20 - 4)
                    
                    if (x9_18 s< x8_13)
                        *(x19 + 8) = x9_18
                        *(x20 - 4) = x8_13
                        int32_t x9_19 = *(x19 + 4)
                        int32_t x8_17 = *(x19 + 8)
                        
                        if (x8_17 s< x9_19)
                            int32_t x10_14 = *x19
                            *(x19 + 4) = x8_17
                            *(x19 + 8) = x9_19
                            
                            if (x8_17 s< x10_14)
                                *x19 = x8_17
                                *(x19 + 4) = x10_14
                case 5
                    return sub_c107b8(x19, x19 + 4, x19 + 8, x19 + 0xc, x20 - 4) __tailcall
        else if (x9_1 s<= 0x7b)
            int32_t x9_15 = *x19
            int32_t x8_15 = *(x19 + 4)
            int32_t x10_13 = *(x19 + 8)
            
            if (x8_15 s>= x9_15)
                if (x10_13 s>= x8_15)
                    x8_15 = x10_13
                else
                    *(x19 + 4) = x10_13
                    *(x19 + 8) = x8_15
                    
                    if (x10_13 s< x9_15)
                        *x19 = x10_13
                        *(x19 + 4) = x9_15
            else if (x10_13 s>= x8_15)
                *x19 = x8_15
                *(x19 + 4) = x9_15
                
                if (x10_13 s>= x9_15)
                    x8_15 = x10_13
                else
                    *(x19 + 4) = x10_13
                    x8_15 = x9_15
                    *(x19 + 8) = x9_15
            else
                *x19 = x10_13
                x8_15 = x9_15
                *(x19 + 8) = x9_15
            
            void* __offset(DomCardEnum, 0xc) x10_15 = x19 + 0xc
            
            if (x10_15 != x20)
                int64_t x9_20 = 0xc
                int32_t x11_7 = *x10_15
                
                if (x11_7 s< x8_15)
                    goto label_c10760
                
                while (true)
                    if (x10_15 + 4 == x20)
                        return 
                    
                    x8_15 = *x10_15
                    x9_20 += 4
                    x10_15 += 4
                    x11_7 = *x10_15
                    
                    if (x11_7 s< x8_15)
                    label_c10760:
                    label_c10764:
                        *(x19 + x9_20) = x8_15
                        void* x8_19
                        
                        if (x9_20 == 4)
                            x8_19 = x19
                        else
                            if (x11_7 s< *(x19 + x9_20 - 8))
                                break
                            
                            x8_19 = x19 + x9_20 - 4
                        
                        *x8_19 = x11_7
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* __offset(DomCardEnum, -0x4) x23_2 = x19 + (x10_1 << 1 & 0xfffffffffffffffc)
            int32_t x9_3
            int32_t x10_4
            
            if (x9_1 s>= 0xf9d)
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                arg1 = sub_c107b8(x19, x19 + x8_3, x23_2, x23_2 + x8_3, x20 - 4)
                x9_3 = *x19
                x10_4 = *x23_2
                
                if (x9_3 s>= x10_4)
                    goto label_c103bc
                
                goto label_c10304
            
            int32_t x9_4 = *x23_2
            int32_t x8_4 = *x19
            int32_t x10_5 = *(x20 - 4)
            
            if (x9_4 s< x8_4)
                if (x10_5 s>= x9_4)
                    *x19 = x9_4
                    *x23_2 = x8_4
                    int32_t x9_6 = *(x20 - 4)
                    
                    if (x9_6 s>= x8_4)
                        goto label_c103a8
                    
                    *x23_2 = x9_6
                    *(x20 - 4) = x8_4
                    goto label_c10390
                
                *x19 = x10_5
                *(x20 - 4) = x8_4
            label_c103a8:
                arg1 = 1
                x9_3 = *x19
                x10_4 = *x23_2
                
                if (x9_3 s< x10_4)
                    goto label_c10304
                
                goto label_c103bc
            
            if (x10_5 s< x9_4)
                *x23_2 = x10_5
                *(x20 - 4) = x9_4
                int32_t x8_5 = *x23_2
                int32_t x9_5 = *x19
                
                if (x8_5 s>= x9_5)
                    goto label_c103a8
                
                *x19 = x8_5
                *x23_2 = x9_5
            label_c10390:
                arg1 = 2
                x9_3 = *x19
                x10_4 = *x23_2
                
                if (x9_3 s< x10_4)
                    goto label_c10304
                
                goto label_c103bc
            
            arg1 = nullptr
            x9_3 = *x19
            x10_4 = *x23_2
            void* __offset(DomCardEnum, -0x4) x8_7
            DomCardEnum* x24_1
            
            if (x9_3 s>= x10_4)
            label_c103bc:
                void* __offset(DomCardEnum, -0x8) x8_6 = x20 - 8
                int32_t x11_1
                
                do
                    if (x19 == x8_6)
                        int32_t x10_7 = *(x20 - 4)
                        void* __offset(DomCardEnum, 0x8) x8_10 = x19 + 4
                        
                        if (x9_3 s>= x10_7)
                            if (x8_10 == x20 - 4)
                                goto label_c107b4
                            
                            x8_10 = x19 + 8
                            int32_t x11_3
                            
                            while (true)
                                x11_3 = *(x8_10 - 4)
                                
                                if (x9_3 s< x11_3)
                                    break
                                
                                x8_10 += 4
                                
                                if (x20 == x8_10)
                                    return 
                            
                            *(x8_10 - 4) = x10_7
                            *(x20 - 4) = x11_3
                        
                        if (x8_10 == x20 - 4)
                            goto label_c107b4
                        
                        void* __offset(DomCardEnum, -0x4) x9_10 = x20 - 4
                        
                        while (true)
                            int32_t x11_4 = *x19
                            int32_t x10_8
                            
                            do
                                x10_8 = *x8_10
                                x8_10 += 4
                            while (x11_4 s>= x10_8)
                            
                            x23_1 = x8_10 - 4
                            int32_t x12_2
                            
                            do
                                x9_10 -= 4
                                x12_2 = *x9_10
                            while (x11_4 s< x12_2)
                            
                            if (x23_1 u>= x9_10)
                                break
                            
                            *x23_1 = x12_2
                            *x9_10 = x10_8
                        
                        goto label_c10290
                    
                    x11_1 = *x8_6
                    x8_6 -= 4
                while (x11_1 s>= x10_4)
                
                *x19 = x11_1
                x8_7 = x8_6 + 4
                *x8_7 = x9_3
                arg1 = zx.q(arg1.d + 1)
                x24_1 = x19 + 4
                
                if (x24_1 u< x8_7)
                    goto label_c10404
                
                goto label_c10314
            
        label_c10304:
            x8_7 = x20 - 4
            x24_1 = x19 + 4
            
            if (x24_1 u< x8_7)
            label_c10404:
                void* __offset(DomCardEnum, -0x4) x9_7
                
                while (true)
                    int32_t x10_6 = *x23_2
                    x9_7 = x24_1 - 4
                    int32_t x11_2
                    
                    do
                        x9_7 += 4
                        x11_2 = *x9_7
                    while (x11_2 s< x10_6)
                    
                    x24_1 = x9_7 + 4
                    int32_t x12_1
                    
                    do
                        x8_7 -= 4
                        x12_1 = *x8_7
                    while (x12_1 s>= x10_6)
                    
                    if (x9_7 u> x8_7)
                        break
                    
                    *x9_7 = x12_1
                    *x8_7 = x11_2
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_7)
                        x23_2 = x8_7
                
                x24_1 = x9_7
                
                if (x24_1 != x23_2)
                    goto label_c1043c
            else
            label_c10314:
                
                if (x24_1 != x23_2)
                label_c1043c:
                    int32_t x8_8 = *x23_2
                    int32_t x9_8 = *x24_1
                    
                    if (x8_8 s< x9_8)
                        arg1 = zx.q(arg1.d + 1)
                        *x24_1 = x8_8
                        *x23_2 = x9_8
            
            if (arg1.d != 0)
            label_c10494:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<DomCardEnum, DomCardEnum>&, DomCardEnum*>(
                        x24_1 + 4, x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<DomCardEnum, DomCardEnum>&, DomCardEnum*>(
                    x19, x24_1, arg3)
                x23_1 = x24_1 + 4
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<DomCardEnum, DomCardEnum>&, DomCardEnum*>(
                    x19, x24_1, arg3)
                x23_1 = x24_1 + 4
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<DomCardEnum, DomCardEnum>&, DomCardEnum*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_c10494
                    
                    continue
        
    label_c107b4:
        return 
