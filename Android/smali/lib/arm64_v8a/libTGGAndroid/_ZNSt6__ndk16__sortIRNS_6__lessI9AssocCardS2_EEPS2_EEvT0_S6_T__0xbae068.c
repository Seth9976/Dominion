// 函数: _ZNSt6__ndk16__sortIRNS_6__lessI9AssocCardS2_EEPS2_EEvT0_S6_T_
// 地址: 0xbae068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AssocCard* x20 = arg2
AssocCard* x19 = arg1

while (true)
    AssocCard* x23_1 = x19
    
    while (true)
        int64_t x8_1 = x20 - x23_1
        int64_t x9_2 = (x8_1 s>> 3) * -0x5555555555555555
        x19 = x23_1
        int128_t v0
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    int32_t x9_22 = *(x20 - 0x18)
                    int32_t x10_18 = *x19
                    
                    if (x9_22 s< x10_18)
                    label_bae58c:
                        int64_t x9_23 = *(x19 + 0x10)
                        int128_t var_80_6 = *x19
                        v0 = *(x20 - 0x18)
                        *(x19 + 0x10) = *(x20 - 8)
                        *x19 = v0
                        *(x20 - 8) = x9_23
                        *(x20 - 0x18) = var_80_6
                    else if (x9_22 s<= x10_18)
                        int64_t x9_31 = *(x20 - 0x10)
                        int64_t x10_24 = *(x19 + 8)
                        
                        if (x9_31 u< x10_24)
                            goto label_bae58c
                        
                        if (x9_31 u<= x10_24 && *(x20 - 8) u< *(x19 + 0x10))
                            goto label_bae58c
                case 3
                    return std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                        x19, x19 + 0x18, x20 - 0x18, arg3) __tailcall
                case 4
                    return std::__ndk1::__sort4<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                        x19, x19 + 0x18, x19 + 0x30, x20 - 0x18, arg3) __tailcall
                case 5
                    return sub_baec00(x19, x19 + 0x18, x19 + 0x30, x19 + 0x48, x20 - 0x18, arg3)
                        __tailcall
        else if (x8_1 s<= 0x2e7)
            void* x22_2 = x19 + 0x30
            int128_t v0_4
            arg1, v0_4 =
                std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(x19, 
                x19 + 0x18, x22_2, arg3)
            void* x9_29 = x19 + 0x48
            
            if (x9_29 != x20)
                int64_t x8_36 = 0
                
                do
                    void* x13_4 = x22_2
                    x22_2 = x9_29
                    int32_t x9_30 = *x9_29
                    int32_t x10_22 = *x13_4
                    int64_t x10_23
                    
                    if (x9_30 s< x10_22)
                        x10_23 = *(x22_2 + 8)
                    label_bae6f0:
                        int32_t x11_20 = *(x22_2 + 4)
                        int64_t x14_5 = *(x13_4 + 0x10)
                        int64_t x12_7 = *(x22_2 + 0x10)
                        *x22_2 = *x13_4
                        *(x22_2 + 0x10) = x14_5
                        void* x14_4
                        
                        if (x13_4 == x19)
                            x14_4 = x19
                        else
                            int64_t x13_5 = x8_36
                            
                            while (true)
                                void* x14_7 = x19 + x13_5 + 0x18
                                int32_t x15_5 = *x14_7
                                
                                if (x9_30 s>= x15_5)
                                    if (x9_30 s> x15_5)
                                    label_bae774:
                                        x14_4 = x19 + x13_5 + 0x30
                                        x13_4 = x14_4
                                        break
                                    
                                    int64_t x15_7 = *(x19 + x13_5 + 0x20)
                                    
                                    if (x10_23 u>= x15_7 &&
                                            (x10_23 u> x15_7 || x12_7 u>= *(x19 + x13_5 + 0x28)))
                                        goto label_bae774
                                
                                v0_4 = *x14_7
                                x13_5 -= 0x18
                                *(x14_7 + 0x28) = *(x14_7 + 0x10)
                                *(x14_7 + 0x18) = v0_4
                                
                                if (x13_5 == -0x30)
                                    x14_4 = x19
                                    x13_4 = x19
                                    break
                        
                        *x14_4 = x9_30
                        *(x13_4 + 4) = x11_20
                        *(x14_4 + 8) = x10_23
                        *(x14_4 + 0x10) = x12_7
                    else if (x9_30 s<= x10_22)
                        x10_23 = *(x22_2 + 8)
                        int64_t x11_18 = *(x13_4 + 8)
                        
                        if (x10_23 u< x11_18)
                            goto label_bae6f0
                        
                        if (x10_23 u<= x11_18 && *(x22_2 + 0x10) u< *(x13_4 + 0x10))
                            goto label_bae6f0
                    x9_29 = x22_2 + 0x18
                    x8_36 += 0x18
                while (x9_29 != x20)
        else
            int32_t x9_4
            int32_t x10_1
            AssocCard* x23_2
            bool cond:1_1
            
            if (x8_1 s>= 0x5da9)
                x23_2 = x19 + x8_1 u/ 0x30 * 0x18
                uint64_t x8_5 = x8_1 u/ 0x60 * 0x18
                arg1, v0 = sub_baec00(x19, x19 + x8_5, x23_2, x23_2 + x8_5, x20 - 0x18, arg3)
                x9_4 = *x19
                x10_1 = *x23_2
                cond:1_1 = x9_4 s<= x10_1
                
                if (x9_4 s< x10_1)
                    goto label_bae374
                
                goto label_bae158
            
            x23_2 = x19 + zx.q((x8_1.d & 0xffff) u/ 0x30) * 0x18
            arg1, v0 = std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                x19, x23_2, x20 - 0x18, arg3)
            x9_4 = *x19
            x10_1 = *x23_2
            cond:1_1 = x9_4 s<= x10_1
            void* __offset(AssocCard, -0x30) x8_9
            void* x24_1
            
            if (x9_4 s< x10_1)
            label_bae374:
                x8_9 = x20 - 0x18
                x24_1 = x19 + 0x18
                
                if (x24_1 u< x8_9)
                label_bae384:
                    
                    while (true)
                        int32_t x9_12 = *x23_2
                        
                        while (true)
                            int32_t x10_11 = *x24_1
                            
                            if (x10_11 s>= x9_12)
                                if (x10_11 s> x9_12)
                                    break
                                
                                int64_t x10_12 = *(x24_1 + 8)
                                int64_t x11_9 = *(x23_2 + 8)
                                
                                if (x10_12 u>= x11_9)
                                    if (x10_12 u> x11_9)
                                        break
                                    
                                    if (*(x24_1 + 0x10) u>= *(x23_2 + 0x10))
                                        break
                            
                            x24_1 += 0x18
                        
                        while (true)
                            x8_9 -= 0x18
                            int32_t x10_14 = *x8_9
                            
                            if (x10_14 s< x9_12)
                                break
                            
                            if (x10_14 s<= x9_12)
                                int64_t x10_15 = *(x8_9 + 8)
                                int64_t x11_11 = *(x23_2 + 8)
                                
                                if (x10_15 u< x11_11)
                                    break
                                
                                if (x10_15 u<= x11_11)
                                    if (*(x8_9 + 0x10) u< *(x23_2 + 0x10))
                                        break
                        
                        if (x24_1 u> x8_9)
                            break
                        
                        int64_t x9_13 = *(x24_1 + 0x10)
                        arg1 = zx.q(arg1.d + 1)
                        int128_t var_80_4 = *x24_1
                        v0 = *x8_9
                        
                        if (x23_2 == x24_1)
                            x23_2 = x8_9
                        
                        *(x24_1 + 0x10) = *(x8_9 + 0x10)
                        *x24_1 = v0
                        x24_1 += 0x18
                        *(x8_9 + 0x10) = x9_13
                        *x8_9 = var_80_4
                    
                    goto label_bae448
                
            label_bae448:
                
                if (x24_1 != x23_2)
                    int32_t x8_21 = *x23_2
                    int32_t x9_16 = *x24_1
                    
                    if (x8_21 s< x9_16)
                    label_bae484:
                        int64_t x8_24 = *(x24_1 + 0x10)
                        arg1 = zx.q(arg1.d + 1)
                        int128_t var_80_5 = *x24_1
                        v0 = *x23_2
                        *(x24_1 + 0x10) = *(x23_2 + 0x10)
                        *x24_1 = v0
                        *(x23_2 + 0x10) = x8_24
                        *x23_2 = var_80_5
                    else if (x8_21 s<= x9_16)
                        int64_t x8_22 = *(x23_2 + 8)
                        int64_t x9_17 = *(x24_1 + 8)
                        
                        if (x8_22 u< x9_17)
                            goto label_bae484
                        
                        if (x8_22 u<= x9_17 && *(x23_2 + 0x10) u< *(x24_1 + 0x10))
                            goto label_bae484
                
                if (arg1.d != 0)
                label_bae504:
                    
                    if (((x24_1 - x19) s>> 3) * -0x5555555555555555
                            s>= ((x20 - x24_1) s>> 3) * -0x5555555555555555)
                        arg1, v0 = std::__ndk1::__sort<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                            x24_1 + 0x18, x20, arg3)
                        x20 = x24_1
                        break
                    
                    arg1, v0 =
                        std::__ndk1::__sort<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                        x19, x24_1, arg3)
                    x23_1 = x24_1 + 0x18
                    continue
                else
                    int32_t x0_3 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                        x19, x24_1, arg3)
                    x23_1 = x24_1 + 0x18
                    arg1, v0 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                        x23_1, x20, arg3)
                    
                    if ((arg1.d & 1) != 0)
                        x20 = x24_1
                        
                        if ((x0_3 & 1) == 0)
                            break
                    else
                        if ((x0_3 & 1) == 0)
                            goto label_bae504
                        
                        continue
            else
            label_bae158:
                int64_t x8_20
                int64_t x11_8
                
                if (cond:1_1)
                    x8_20 = *(x19 + 8)
                    x11_8 = *(x23_2 + 8)
                
                if (cond:1_1 &&
                        (x8_20 u< x11_8 || (x8_20 u<= x11_8 && *(x19 + 0x10) u< *(x23_2 + 0x10))))
                    goto label_bae374
                
                x8_9 = x20 - 0x30
                
                if (x19 != x20 - 0x30)
                    while (true)
                        int32_t x11_1 = *x8_9
                        
                        if (x11_1 s< x10_1)
                            break
                        
                        if (x11_1 s<= x10_1)
                            int64_t x11_2 = *(x8_9 + 8)
                            int64_t x12_1 = *(x23_2 + 8)
                            
                            if (x11_2 u< x12_1)
                                break
                            
                            if (x11_2 u<= x12_1 && *(x8_9 + 0x10) u< *(x23_2 + 0x10))
                                break
                        
                        x8_9 -= 0x18
                        
                        if (x19 == x8_9)
                            goto label_bae168
                    
                    int64_t x9_5 = *(x19 + 0x10)
                    arg1 = zx.q(arg1.d + 1)
                    int128_t var_80_1 = *x19
                    v0 = *x8_9
                    *(x19 + 0x10) = *(x8_9 + 0x10)
                    *x19 = v0
                    *(x8_9 + 0x10) = x9_5
                    *x8_9 = var_80_1
                    x24_1 = x19 + 0x18
                    
                    if (x24_1 u>= x8_9)
                        goto label_bae448
                    
                    goto label_bae384
                
            label_bae168:
                int32_t x8_10 = *(x20 - 0x18)
                x23_1 = x19 + 0x18
                
                if (x9_4 s< x8_10)
                label_bae2a4:
                    
                    if (x23_1 != x20 - 0x18)
                        void* __offset(AssocCard, -0x18) x8_19 = x20 - 0x18
                        
                        while (true)
                            int32_t x9_8 = *x19
                            
                            for (int32_t i = *x23_1; x9_8 s>= i; i = *x23_1)
                                if (x9_8 s<= i)
                                    int64_t x10_6 = *(x19 + 8)
                                    int64_t x11_4 = *(x23_1 + 8)
                                    
                                    if (x10_6 u< x11_4)
                                        break
                                    
                                    if (x10_6 u<= x11_4 && *(x19 + 0x10) u< *(x23_1 + 0x10))
                                        break
                                
                                x23_1 += 0x18
                            
                            while (true)
                                x8_19 -= 0x18
                                int32_t x10_8 = *x8_19
                                
                                if (x9_8 s>= x10_8)
                                    if (x9_8 s> x10_8)
                                        break
                                    
                                    int64_t x10_9 = *(x19 + 8)
                                    int64_t x11_6 = *(x8_19 + 8)
                                    
                                    if (x10_9 u>= x11_6)
                                        if (x10_9 u> x11_6)
                                            break
                                        
                                        if (*(x19 + 0x10) u>= *(x8_19 + 0x10))
                                            break
                            
                            if (x23_1 u>= x8_19)
                                break
                            
                            int64_t x9_9 = *(x23_1 + 0x10)
                            int128_t var_80_3 = *x23_1
                            v0 = *x8_19
                            *(x23_1 + 0x10) = *(x8_19 + 0x10)
                            *x23_1 = v0
                            x23_1 += 0x18
                            *(x8_19 + 0x10) = x9_9
                            *x8_19 = var_80_3
                        
                        continue
                else
                    int64_t x8_11
                    int64_t x10_2
                    
                    if (x9_4 s<= x8_10)
                        x8_11 = *(x19 + 8)
                        x10_2 = *(x20 - 0x10)
                    
                    if (x9_4 s<= x8_10 &&
                            (x8_11 u< x10_2 || (x8_11 u<= x10_2 && *(x19 + 0x10) u< *(x20 - 8))))
                        goto label_bae2a4
                    
                    if (x23_1 != x20 - 0x18)
                        x23_1 = x19 + 0x30
                        
                        while (true)
                            int32_t x8_13 = *(x23_1 - 0x18)
                            
                            if (x9_4 s< x8_13)
                                break
                            
                            if (x9_4 s<= x8_13)
                                int64_t x8_14 = *(x19 + 8)
                                int64_t x10_4 = *(x23_1 - 0x10)
                                
                                if (x8_14 u< x10_4)
                                    break
                                
                                if (x8_14 u<= x10_4 && *(x19 + 0x10) u< *(x23_1 - 8))
                                    break
                            
                            x23_1 += 0x18
                            
                            if (x20 == x23_1)
                                return 
                        
                        int64_t x8_16 = *(x23_1 - 8)
                        int128_t var_80_2 = *(x23_1 - 0x18)
                        v0 = *(x20 - 0x18)
                        *(x23_1 - 8) = *(x20 - 8)
                        *(x23_1 - 0x18) = v0
                        *(x20 - 8) = x8_16
                        *(x20 - 0x18) = var_80_2
                        goto label_bae2a4
        return 
