// 函数: _ZNSt6__ndk16__sortIRPFb9GameIndexS1_EPS1_EEvT0_S6_T_
// 地址: 0x9cd118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameIndex* x21 = arg2
GameIndex* x19 = arg1

while (true)
    void* __offset(GameIndex, 0x4) x23_1 = x19
    
    while (true)
    label_9cd148:
        int64_t x9_1 = x21 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x19 = x23_1
        uint64_t x0_48
        uint64_t x1_32
        bool (* x8_46)(GameIndex, GameIndex)
        int32_t x9_18
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    if (((*arg3)(zx.q(*(x21 - 4)), zx.q(*x19)).d & 1) != 0)
                        x9_18 = *x19
                        *x19 = *(x21 - 4)
                        *(x21 - 4) = x9_18
                case 3
                    int32_t x0_40 = (*arg3)(zx.q(*(x19 + 4)), zx.q(*x19))
                    arg1 = (*arg3)(zx.q(*(x21 - 4)), zx.q(*(x19 + 4)))
                    
                    if ((x0_40 & 1) != 0)
                        int32_t x1_25 = *x19
                        
                        if ((arg1.d & 1) == 0)
                            *x19 = *(x19 + 4)
                            *(x19 + 4) = x1_25
                            
                            if (((*arg3)(zx.q(*(x21 - 4))).d & 1) != 0)
                                x9_18 = *(x19 + 4)
                                *(x19 + 4) = *(x21 - 4)
                                *(x21 - 4) = x9_18
                        else
                            *x19 = *(x21 - 4)
                            *(x21 - 4) = x1_25
                    else if ((arg1.d & 1) != 0)
                        int32_t x9_22 = *(x19 + 4)
                        *(x19 + 4) = *(x21 - 4)
                        *(x21 - 4) = x9_22
                        x8_46 = *arg3
                        x1_32 = zx.q(*x19)
                        x0_48 = zx.q(*(x19 + 4))
                    label_9cd6e0:
                        int128_t v0_4
                        arg1, v0_4 = x8_46(x0_48, x1_32)
                        
                        if ((arg1.d & 1) != 0)
                            v0_4.q = *x19
                            *x19 = vrev64_s32(v0_4)
                case 4
                    return std::__ndk1::__sort4<bool (*&)(GameIndex, GameIndex), GameIndex*>(x19, 
                        x19 + 4, x19 + 8, x21 - 4, arg3) __tailcall
                case 5
                    std::__ndk1::__sort4<bool (*&)(GameIndex, GameIndex), GameIndex*>(x19, x19 + 4, 
                        x19 + 8, x19 + 0xc, arg3)
                    
                    if (((*arg3)(zx.q(*(x21 - 4)), zx.q(*(x19 + 0xc))).d & 1) != 0)
                        int32_t x9_21 = *(x19 + 0xc)
                        *(x19 + 0xc) = *(x21 - 4)
                        *(x21 - 4) = x9_21
                        int128_t v0_2
                        arg1, v0_2 = (*arg3)(zx.q(*(x19 + 0xc)), zx.q(*(x19 + 8)))
                        
                        if ((arg1.d & 1) != 0)
                            v0_2.q = *(x19 + 8)
                            *(x19 + 8) = vrev64_s32(v0_2)
                            int128_t v0_3
                            arg1, v0_3 = (*arg3)(zx.q(v0_2:4.d), zx.q(*(x19 + 4)))
                            
                            if ((arg1.d & 1) != 0)
                                v0_3.q = *(x19 + 4)
                                x1_32 = zx.q(*x19)
                                *(x19 + 4) = vrev64_s32(v0_3)
                                x8_46 = *arg3
                                x0_48 = zx.q(v0_3:4.d)
                                goto label_9cd6e0
        else
            if (x9_1 s<= 0x7b)
                return std::__ndk1::__insertion_sort_3<bool (*&)(GameIndex, GameIndex), GameIndex*>(
                    x19, x21, arg3) __tailcall
            
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* __offset(GameIndex, -0x4) x23_2 = x19 + (x10_1 << 1 & 0xfffffffffffffffc)
            int32_t x24_1
            
            if (x9_1 s< 0xf9d)
                int32_t x0_11 = (*arg3)(zx.q(*x23_2), zx.q(*x19))
                int32_t x0_13 = (*arg3)(zx.q(*(x21 - 4)), zx.q(*x23_2))
                
                if ((x0_11 & 1) != 0)
                    int32_t x1_7 = *x19
                    
                    if ((x0_13 & 1) == 0)
                        *x19 = *x23_2
                        *x23_2 = x1_7
                        
                        if (((*arg3)(zx.q(*(x21 - 4))) & 1) == 0)
                            x24_1 = 1
                        else
                            int32_t x9_11 = *x23_2
                            *x23_2 = *(x21 - 4)
                            *(x21 - 4) = x9_11
                            x24_1 = 2
                    else
                        x24_1 = 1
                        *x19 = *(x21 - 4)
                        *(x21 - 4) = x1_7
                else if ((x0_13 & 1) == 0)
                    x24_1 = 0
                else
                    int32_t x9_9 = *x23_2
                    *x23_2 = *(x21 - 4)
                    *(x21 - 4) = x9_9
                    
                    if (((*arg3)(zx.q(*x23_2), zx.q(*x19)) & 1) == 0)
                        x24_1 = 1
                    else
                        int32_t x9_10 = *x19
                        *x19 = *x23_2
                        *x23_2 = x9_10
                        x24_1 = 2
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                void* x25_1 = x19 + x8_3
                GameIndex* x26_1 = x23_2 + x8_3
                x24_1 = std::__ndk1::__sort4<bool (*&)(GameIndex, GameIndex), GameIndex*>(x19, 
                    x25_1, x23_2, x26_1, arg3)
                
                if (((*arg3)(zx.q(*(x21 - 4)), zx.q(*x26_1)) & 1) != 0)
                    int32_t x9_4 = *x26_1
                    *x26_1 = *(x21 - 4)
                    *(x21 - 4) = x9_4
                    
                    if (((*arg3)(zx.q(*x26_1), zx.q(*x23_2)) & 1) == 0)
                        x24_1 += 1
                    else
                        int32_t x9_5 = *x23_2
                        *x23_2 = *x26_1
                        *x26_1 = x9_5
                        
                        if (((*arg3)(zx.q(*x23_2), zx.q(*x25_1)) & 1) == 0)
                            x24_1 += 2
                        else
                            int32_t x9_6 = *x25_1
                            *x25_1 = *x23_2
                            *x23_2 = x9_6
                            
                            if (((*arg3)(zx.q(*x25_1), zx.q(*x19)) & 1) == 0)
                                x24_1 += 3
                            else
                                int32_t x9_7 = *x19
                                x24_1 += 4
                                *x19 = *x25_1
                                *x25_1 = x9_7
            
            GameIndex* x25_2
            void* __offset(GameIndex, -0x4) x26_2
            
            if (((*arg3)(zx.q(*x19), zx.q(*x23_2)) & 1) == 0)
                void* __offset(GameIndex, -0x8) x26_3 = x21 - 8
                int32_t x0_21
                
                do
                    if (x19 == x26_3)
                        int32_t* x24_4 = x19
                        void* __offset(GameIndex, 0x8) x24_5 = &x24_4[1]
                        
                        if (((*arg3)(zx.q(*x24_4), zx.q(*(x21 - 4))).d & 1) == 0)
                            if (x24_5 == x21 - 4)
                                goto label_9cd738
                            
                            x24_5 = x19 + 8
                            
                            while (((*arg3)(zx.q(*x19), zx.q(*(x24_5 - 4))).d & 1) == 0)
                                x24_5 += 4
                                
                                if (x21 == x24_5)
                                    return 
                            
                            int32_t x9_16 = *(x24_5 - 4)
                            *(x24_5 - 4) = *(x21 - 4)
                            *(x21 - 4) = x9_16
                        
                        if (x24_5 == x21 - 4)
                            goto label_9cd738
                        
                        void* __offset(GameIndex, -0x4) x25_3 = x21 - 4
                        
                        while (true)
                            x23_1 = x24_5 - 4
                            int32_t x0_35
                            
                            do
                                x23_1 += 4
                                x0_35 = (*arg3)(zx.q(*x19), zx.q(*x23_1))
                            while ((x0_35 & 1) == 0)
                            x24_5 = x23_1 + 4
                            
                            do
                                x25_3 -= 4
                                arg1 = (*arg3)(zx.q(*x19), zx.q(*x25_3))
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x25_3)
                                break
                            
                            int32_t x9_17 = *x23_1
                            *x23_1 = *x25_3
                            *x25_3 = x9_17
                        
                        goto label_9cd148
                    
                    uint64_t x0_20 = zx.q(*x26_3)
                    x26_3 -= 4
                    x0_21 = (*arg3)(x0_20, zx.q(*x23_2))
                while ((x0_21 & 1) == 0)
                int32_t x8_23 = *x19
                x26_2 = x26_3 + 4
                x24_1 += 1
                *x19 = *x26_2
                *x26_2 = x8_23
                x25_2 = x19 + 4
                
                if (x25_2 u< x26_2)
                    goto label_9cd3bc
                
                goto label_9cd394
            
            x26_2 = x21 - 4
            x25_2 = x19 + 4
            
            if (x25_2 u< x26_2)
            label_9cd3bc:
                void* __offset(GameIndex, -0x4) x28_1
                
                while (true)
                    x28_1 = x25_2 - 4
                    int32_t x0_23
                    
                    do
                        x28_1 += 4
                        x0_23 = (*arg3)(zx.q(*x28_1), zx.q(*x23_2))
                    while ((x0_23 & 1) != 0)
                    x25_2 = x28_1 + 4
                    int32_t x0_25
                    
                    do
                        x26_2 -= 4
                        x0_25 = (*arg3)(zx.q(*x26_2), zx.q(*x23_2))
                    while ((x0_25 & 1) == 0)
                    
                    if (x28_1 u> x26_2)
                        break
                    
                    int32_t x9_13 = *x28_1
                    x24_1 += 1
                    *x28_1 = *x26_2
                    *x26_2 = x9_13
                    
                    if (x23_2 == x28_1)
                        x23_2 = x26_2
                
                x25_2 = x28_1
                
                if (x25_2 != x23_2)
                    goto label_9cd40c
            else
            label_9cd394:
                
                if (x25_2 != x23_2)
                label_9cd40c:
                    
                    if (((*arg3)(zx.q(*x23_2), zx.q(*x25_2)) & 1) != 0)
                        int32_t x9_14 = *x25_2
                        x24_1 += 1
                        *x25_2 = *x23_2
                        *x23_2 = x9_14
            
            if (x24_1 != 0)
            label_9cd464:
                
                if (x25_2 - x19 s>= x21 - x25_2)
                    std::__ndk1::__sort<bool (*&)(GameIndex, GameIndex), GameIndex*>(x25_2 + 4, 
                        x21, arg3)
                    x21 = x25_2
                    break
                
                std::__ndk1::__sort<bool (*&)(GameIndex, GameIndex), GameIndex*>(x19, x25_2, arg3)
                x23_1 = x25_2 + 4
                continue
            else
                int32_t x0_29 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(GameIndex, GameIndex), GameIndex*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 4
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(GameIndex, GameIndex), GameIndex*>(
                        x23_1, x21, arg3).d & 1) != 0)
                    x21 = x25_2
                    
                    if ((x0_29 & 1) == 0)
                        break
                else
                    if ((x0_29 & 1) == 0)
                        goto label_9cd464
                    
                    continue
    label_9cd738:
        return 
