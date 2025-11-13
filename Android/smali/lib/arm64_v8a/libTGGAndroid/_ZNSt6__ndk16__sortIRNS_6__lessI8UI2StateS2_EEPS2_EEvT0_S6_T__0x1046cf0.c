// 函数: _ZNSt6__ndk16__sortIRNS_6__lessI8UI2StateS2_EEPS2_EEvT0_S6_T_
// 地址: 0x1046cf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2State* x21 = arg2
UI2State* x19 = arg1

while (true)
    void* __offset(UI2State, 0x30) x23_1 = x19
    
    while (true)
    label_1046d34:
        int64_t x8_3 = x21 - x23_1
        int64_t x9_2 = (x8_3 s>> 4) * -0x5555555555555555
        x19 = x23_1
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    void* x22_4 = *(x21 - 0x30)
                    void* x23_3 = *x19
                    int128_t v0_6
                    int128_t v1_6
                    int128_t v2_6
                    arg1, v0_6, v1_6, v2_6 = strcmp(*(x22_4 + 0x10), *(x23_3 + 0x10))
                    
                    if ((arg1.d & 0x80000000) != 0)
                    label_1047274:
                        int128_t var_80_6 = *(x19 + 0x10)
                        int128_t var_70_6 = *(x19 + 0x20)
                        int128_t var_90_6 = *x19
                        v0_6 = *(x21 - 0x10)
                        v2_6 = *(x21 - 0x30)
                        *(x19 + 0x10) = *(x21 - 0x20)
                        *(x19 + 0x20) = v0_6
                        *x19 = v2_6
                        *(x21 - 0x20) = var_80_6
                        *(x21 - 0x10) = var_70_6
                        *(x21 - 0x30) = var_90_6
                    else if (arg1.d == 0)
                        int32_t x8_30 = *(x21 - 0x28)
                        int32_t x9_19 = *(x19 + 8)
                        
                        if (x8_30 s< x9_19)
                            goto label_1047274
                        
                        if (x22_4 u< x23_3 && x8_30 s<= x9_19)
                            goto label_1047274
                case 3
                    return
                        std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                        x19, x19 + 0x30, x21 - 0x30, arg3) __tailcall
                case 4
                    return
                        std::__ndk1::__sort4<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                        x19, x19 + 0x30, x19 + 0x60, x21 - 0x30, arg3) __tailcall
                case 5
                    return sub_10477f4(x19, x19 + 0x30, x19 + 0x60, x19 + 0x90, x21 - 0x30, arg3)
                        __tailcall
        else
            if (x8_3 s<= 0x5cf)
                return std::__ndk1::__insertion_sort_3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                    x19, x21, arg3) __tailcall
            
            int32_t x0_1
            void* __offset(UI2State, -0x60) x23_2
            
            if (x8_3 s< 0xbb51)
                x23_2 = x19 + zx.q((x8_3.d & 0xffff) u/ 0x60) * 0x30
                x0_1 = std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                    x19, x23_2, x21 - 0x30, arg3)
            else
                x23_2 = x19 + x8_3 u/ 0x60 * 0x30
                uint64_t x8_7 = x8_3 u/ 0xc0 * 0x30
                x0_1 = sub_10477f4(x19, x19 + x8_7, x23_2, x23_2 + x8_7, x21 - 0x30, arg3)
            
            void* x28_1 = *x19
            void* x27_1 = *x23_2
            int32_t x24_1 = x0_1
            int64_t x25_1 = *(x28_1 + 0x10)
            int64_t x26_1 = *(x27_1 + 0x10)
            int32_t x0_4 = strcmp(x25_1, x26_1)
            int32_t x8_21
            int32_t x9_11
            
            if ((x0_4 & 0x80000000) == 0 && x0_4 == 0)
                x8_21 = *(x19 + 8)
                x9_11 = *(x23_2 + 8)
            
            UI2State* x25_2
            void* __offset(UI2State, -0x60) x22_1
            
            if ((x0_4 & 0x80000000) != 0
                    || (x0_4 == 0 && (x8_21 s< x9_11 || (x28_1 u< x27_1 && x8_21 s<= x9_11))))
                x22_1 = x21 - 0x30
                x25_2 = x19 + 0x30
                
                if (x25_2 u< x22_1)
                label_1046ecc:
                    
                    while (true)
                        void* x28_2 = *x23_2
                        int64_t x26_2 = *(x28_2 + 0x10)
                        
                        while (true)
                            void* x20_2 = *x25_2
                            int32_t x0_8 = strcmp(*(x20_2 + 0x10), x26_2)
                            
                            if ((x0_8 & 0x80000000) == 0)
                                if (x0_8 != 0)
                                    break
                                
                                int32_t x8_12 = *(x25_2 + 8)
                                int32_t x9_5 = *(x23_2 + 8)
                                
                                if (x8_12 s>= x9_5)
                                    if (x20_2 u>= x28_2)
                                        break
                                    
                                    if (x8_12 s> x9_5)
                                        break
                            
                            x25_2 += 0x30
                        
                        int128_t v0_2
                        int128_t v2_2
                        
                        while (true)
                            x22_1 -= 0x30
                            void* x27_2 = *x22_1
                            int32_t x0_10
                            int128_t v1_2
                            x0_10, v0_2, v1_2, v2_2 = strcmp(*(x27_2 + 0x10), x26_2)
                            
                            if ((x0_10 & 0x80000000) != 0)
                                break
                            
                            if (x0_10 == 0)
                                int32_t x8_13 = *(x22_1 + 8)
                                int32_t x9_6 = *(x23_2 + 8)
                                
                                if (x8_13 s< x9_6)
                                    break
                                
                                if (x27_2 u< x28_2)
                                    if (x8_13 s<= x9_6)
                                        break
                        
                        if (x25_2 u> x22_1)
                            break
                        
                        x24_1 += 1
                        int128_t var_80_2 = *(x25_2 + 0x10)
                        int128_t var_70_2 = *(x25_2 + 0x20)
                        int128_t var_90_2 = *x25_2
                        v0_2 = *(x22_1 + 0x20)
                        v2_2 = *x22_1
                        
                        if (x23_2 == x25_2)
                            x23_2 = x22_1
                        
                        *(x25_2 + 0x10) = *(x22_1 + 0x10)
                        *(x25_2 + 0x20) = v0_2
                        *x25_2 = v2_2
                        x25_2 += 0x30
                        *(x22_1 + 0x10) = var_80_2
                        *(x22_1 + 0x20) = var_70_2
                        *x22_1 = var_90_2
            else
                x22_1 = x21 - 0x60
                int128_t v0_1
                int128_t v2_1
                
                while (true)
                    if (x19 == x22_1)
                        x23_1 = x19 + 0x30
                        void* x20_5 = *(x21 - 0x30)
                        arg1 = strcmp(x25_1, *(x20_5 + 0x10))
                        
                        if ((arg1.d & 0x80000000) == 0)
                            if (arg1.d == 0)
                                int32_t x8_23 = *(x19 + 8)
                                int32_t x9_13 = *(x21 - 0x28)
                                
                                if (x8_23 s>= x9_13 && (x28_1 u>= x20_5 || x8_23 s> x9_13))
                                    goto label_1047054
                            else
                            label_1047054:
                                
                                if (x23_1 == x21 - 0x30)
                                    goto label_104737c
                                
                                x23_1 = x19 + 0x60
                                int128_t v0_4
                                int128_t v2_4
                                
                                while (true)
                                    void* x20_6 = *(x23_1 - 0x30)
                                    int128_t v1_4
                                    arg1, v0_4, v1_4, v2_4 = strcmp(x25_1, *(x20_6 + 0x10))
                                    
                                    if ((arg1.d & 0x80000000) != 0)
                                        break
                                    
                                    if (arg1.d == 0)
                                        int32_t x8_19 = *(x19 + 8)
                                        int32_t x9_10 = *(x23_1 - 0x28)
                                        
                                        if (x8_19 s< x9_10)
                                            break
                                        
                                        if (x28_1 u< x20_6 && x8_19 s<= x9_10)
                                            break
                                    
                                    x23_1 += 0x30
                                    
                                    if (x21 == x23_1)
                                        return 
                                
                                int128_t var_80_4 = *(x23_1 - 0x20)
                                int128_t var_70_4 = *(x23_1 - 0x10)
                                int128_t var_90_4 = *(x23_1 - 0x30)
                                v0_4 = *(x21 - 0x10)
                                v2_4 = *(x21 - 0x30)
                                *(x23_1 - 0x20) = *(x21 - 0x20)
                                *(x23_1 - 0x10) = v0_4
                                *(x23_1 - 0x30) = v2_4
                                *(x21 - 0x20) = var_80_4
                                *(x21 - 0x10) = var_70_4
                                *(x21 - 0x30) = var_90_4
                        
                        if (x23_1 == x21 - 0x30)
                            goto label_104737c
                        
                        void* __offset(UI2State, -0x30) x22_3 = x21 - 0x30
                        
                        while (true)
                            void* x25_3 = *x19
                            void* x26_3 = *x23_1
                            int64_t x24_3 = *(x25_3 + 0x10)
                            
                            while (true)
                                int32_t x0_20 = strcmp(x24_3, *(x26_3 + 0x10))
                                
                                if ((x0_20 & 0x80000000) != 0)
                                    break
                                
                                if (x0_20 == 0)
                                    int32_t x8_25 = *(x19 + 8)
                                    int32_t x9_14 = *(x23_1 + 8)
                                    
                                    if (x8_25 s< x9_14)
                                        break
                                    
                                    if (x25_3 u< x26_3 && x8_25 s<= x9_14)
                                        break
                                
                                x23_1 += 0x30
                                x26_3 = *x23_1
                            
                            int128_t v0_5
                            int128_t v2_5
                            
                            while (true)
                                x22_3 -= 0x30
                                void* x20_7 = *x22_3
                                int128_t v1_5
                                arg1, v0_5, v1_5, v2_5 = strcmp(x24_3, *(x20_7 + 0x10))
                                
                                if ((arg1.d & 0x80000000) == 0)
                                    if (arg1.d != 0)
                                        break
                                    
                                    int32_t x8_26 = *(x19 + 8)
                                    int32_t x9_15 = *(x22_3 + 8)
                                    
                                    if (x8_26 s>= x9_15)
                                        if (x25_3 u>= x20_7)
                                            break
                                        
                                        if (x8_26 s> x9_15)
                                            break
                            
                            if (x23_1 u>= x22_3)
                                break
                            
                            int128_t var_80_5 = *(x23_1 + 0x10)
                            int128_t var_70_5 = *(x23_1 + 0x20)
                            int128_t var_90_5 = *x23_1
                            v0_5 = *(x22_3 + 0x20)
                            v2_5 = *x22_3
                            *(x23_1 + 0x10) = *(x22_3 + 0x10)
                            *(x23_1 + 0x20) = v0_5
                            *x23_1 = v2_5
                            x23_1 += 0x30
                            *(x22_3 + 0x10) = var_80_5
                            *(x22_3 + 0x20) = var_70_5
                            *x22_3 = var_90_5
                        
                        goto label_1046d34
                    
                    void* x20_1 = *x22_1
                    int32_t x0_6
                    int128_t v1_1
                    x0_6, v0_1, v1_1, v2_1 = strcmp(*(x20_1 + 0x10), x26_1)
                    
                    if ((x0_6 & 0x80000000) != 0)
                        break
                    
                    if (x0_6 == 0)
                        int32_t x8_11 = *(x22_1 + 8)
                        int32_t x9_4 = *(x23_2 + 8)
                        
                        if (x8_11 s< x9_4)
                            break
                        
                        if (x20_1 u< x27_1 && x8_11 s<= x9_4)
                            break
                    
                    x22_1 -= 0x30
                
                x24_1 += 1
                int128_t var_80_1 = *(x19 + 0x10)
                int128_t var_70_1 = *(x19 + 0x20)
                int128_t var_90_1 = *x19
                v0_1 = *(x22_1 + 0x20)
                v2_1 = *x22_1
                *(x19 + 0x10) = *(x22_1 + 0x10)
                *(x19 + 0x20) = v0_1
                *x19 = v2_1
                *(x22_1 + 0x10) = var_80_1
                *(x22_1 + 0x20) = var_70_1
                *x22_1 = var_90_1
                x25_2 = x19 + 0x30
                
                if (x25_2 u< x22_1)
                    goto label_1046ecc
            
            if (x25_2 != x23_2)
                void* x22_2 = *x23_2
                void* x20_3 = *x25_2
                int32_t x0_12
                int128_t v0_3
                int128_t v1_3
                int128_t v2_3
                x0_12, v0_3, v1_3, v2_3 = strcmp(*(x22_2 + 0x10), *(x20_3 + 0x10))
                
                if ((x0_12 & 0x80000000) != 0)
                label_1046f7c:
                    x24_1 += 1
                    int128_t var_80_3 = *(x25_2 + 0x10)
                    int128_t var_70_3 = *(x25_2 + 0x20)
                    int128_t var_90_3 = *x25_2
                    v0_3 = *(x23_2 + 0x20)
                    v2_3 = *x23_2
                    *(x25_2 + 0x10) = *(x23_2 + 0x10)
                    *(x25_2 + 0x20) = v0_3
                    *x25_2 = v2_3
                    *(x23_2 + 0x10) = var_80_3
                    *(x23_2 + 0x20) = var_70_3
                    *x23_2 = var_90_3
                else if (x0_12 == 0)
                    int32_t x8_22 = *(x23_2 + 8)
                    int32_t x9_12 = *(x25_2 + 8)
                    
                    if (x8_22 s< x9_12)
                        goto label_1046f7c
                    
                    if (x22_2 u< x20_3 && x8_22 s<= x9_12)
                        goto label_1046f7c
            
            if (x24_1 != 0)
            label_1047010:
                
                if (((x25_2 - x19) s>> 4) * -0x5555555555555555
                        s>= ((x21 - x25_2) s>> 4) * -0x5555555555555555)
                    std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                        x25_2 + 0x30, x21, arg3)
                    x21 = x25_2
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(x19, 
                    x25_2, arg3)
                x23_1 = x25_2 + 0x30
                continue
            else
                int32_t x0_14 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x30
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(
                        x23_1, x21, arg3).d & 1) != 0)
                    x21 = x25_2
                    
                    if ((x0_14 & 1) == 0)
                        break
                else
                    if ((x0_14 & 1) == 0)
                        goto label_1047010
                    
                    continue
        
    label_104737c:
        return 
