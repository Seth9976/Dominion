// 函数: _ZNSt6__ndk16__sortIRPFbRK16CardHandSortInfoS3_EPS1_EEvT0_S8_T_
// 地址: 0xbad1f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardHandSortInfo* x22 = arg2
CardHandSortInfo* x19 = arg1

while (true)
    void* __offset(CardHandSortInfo, 0x10) x23_1 = x19
    
    while (true)
    label_bad230:
        int64_t x9_1 = x22 - x23_1
        int64_t x8_1 = x9_1 s>> 4
        x19 = x23_1
        int128_t var_70_15
        CardHandSortInfo* x22_1
        int128_t v0_13
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    arg1, v0_13 = (*arg3)(x22 - 0x10, x19)
                    
                    if ((arg1.d & 1) != 0)
                    label_bad730:
                        var_70_15 = *x19
                        *x19 = *(x22 - 0x10)
                        *(x22 - 0x10) = var_70_15
                case 3
                    x22_1 = x19 + 0x10
                    int32_t x0_40 = (*arg3)(x22_1, x19)
                    arg1, v0_13 = (*arg3)(x22 - 0x10, x22_1)
                    
                    if ((x0_40 & 1) != 0)
                        if ((arg1.d & 1) != 0)
                            goto label_bad730
                        
                        int128_t var_70_21 = *x19
                        *x19 = *x22_1
                        *x22_1 = var_70_21
                        arg1, v0_13 = (*arg3)(x22 - 0x10, x22_1)
                        
                        if ((arg1.d & 1) != 0)
                            var_70_15 = *x22_1
                            *x22_1 = *(x22 - 0x10)
                            *(x22 - 0x10) = var_70_15
                    else if ((arg1.d & 1) != 0)
                        int128_t var_70_19 = *x22_1
                        *x22_1 = *(x22 - 0x10)
                        v0_13 = var_70_19
                        *(x22 - 0x10) = v0_13
                    label_bad87c:
                        int128_t v0_17
                        arg1, v0_17 = (*arg3)(x22_1, x19, v0_13)
                        
                        if ((arg1.d & 1) != 0)
                            int128_t var_70_20 = *x19
                            *x19 = *x22_1
                            *x22_1 = var_70_20
                case 4
                    return std::__ndk1::__sort4<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                        x19, x19 + 0x10, x19 + 0x20, x22 - 0x10, arg3) __tailcall
                case 5
                    x22_1 = x19 + 0x10
                    std::__ndk1::__sort4<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                        x19, x22_1, x19 + 0x20, x19 + 0x30, arg3)
                    int128_t v0_15
                    arg1, v0_15 = (*arg3)(x22 - 0x10, x19 + 0x30)
                    
                    if ((arg1.d & 1) != 0)
                        int128_t var_70_16 = *(x19 + 0x30)
                        *(x19 + 0x30) = *(x22 - 0x10)
                        *(x22 - 0x10) = var_70_16
                        int128_t v0_16
                        arg1, v0_16 = (*arg3)(x19 + 0x30, x19 + 0x20)
                        
                        if ((arg1.d & 1) != 0)
                            int128_t var_70_17 = *(x19 + 0x20)
                            *(x19 + 0x20) = *(x19 + 0x30)
                            *(x19 + 0x30) = var_70_17
                            arg1, v0_13 = (*arg3)(x19 + 0x20, x22_1)
                            
                            if ((arg1.d & 1) != 0)
                                int128_t var_70_18 = *x22_1
                                *x22_1 = *(x19 + 0x20)
                                v0_13 = var_70_18
                                *(x19 + 0x20) = v0_13
                                goto label_bad87c
        else
            if (x9_1 s<= 0x1ef)
                return std::__ndk1::__insertion_sort_3<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                    x19, x22, arg3) __tailcall
            
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* __offset(CardHandSortInfo, -0x10) x23_2 = x19 + (x10_1 << 3 & 0xfffffffffffffff0)
            int32_t x24_1
            
            if (x9_1 s< 0x3e71)
                int32_t x0_11 = (*arg3)(x23_2, x19)
                int32_t x0_13
                int128_t v0_5
                x0_13, v0_5 = (*arg3)(x22 - 0x10, x23_2)
                
                if ((x0_11 & 1) == 0)
                    if ((x0_13 & 1) == 0)
                        x24_1 = 0
                    else
                        int128_t var_70_6 = *x23_2
                        *x23_2 = *(x22 - 0x10)
                        *(x22 - 0x10) = var_70_6
                        int32_t x0_15
                        int128_t v0_6
                        x0_15, v0_6 = (*arg3)(x23_2, x19)
                        
                        if ((x0_15 & 1) == 0)
                            x24_1 = 1
                        else
                            int128_t var_70_7 = *x19
                            *x19 = *x23_2
                            *x23_2 = var_70_7
                            x24_1 = 2
                else if ((x0_13 & 1) == 0)
                    int128_t var_70_8 = *x19
                    *x19 = *x23_2
                    *x23_2 = var_70_8
                    int32_t x0_17
                    int128_t v0_7
                    x0_17, v0_7 = (*arg3)(x22 - 0x10, x23_2)
                    
                    if ((x0_17 & 1) == 0)
                        x24_1 = 1
                    else
                        int128_t var_70_9 = *x23_2
                        *x23_2 = *(x22 - 0x10)
                        *(x22 - 0x10) = var_70_9
                        x24_1 = 2
                else
                    x24_1 = 1
                    int128_t var_70_5 = *x19
                    *x19 = *(x22 - 0x10)
                    *(x22 - 0x10) = var_70_5
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 2 & 0xfffffffffffffff0
                void* x25_1 = x19 + x8_4
                CardHandSortInfo* x26_1 = x23_2 + x8_4
                x24_1 = std::__ndk1::__sort4<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                    x19, x25_1, x23_2, x26_1, arg3)
                int32_t x0_3
                int128_t v0_1
                x0_3, v0_1 = (*arg3)(x22 - 0x10, x26_1)
                
                if ((x0_3 & 1) != 0)
                    int128_t var_70_1 = *x26_1
                    *x26_1 = *(x22 - 0x10)
                    *(x22 - 0x10) = var_70_1
                    int32_t x0_5
                    int128_t v0_2
                    x0_5, v0_2 = (*arg3)(x26_1, x23_2)
                    
                    if ((x0_5 & 1) == 0)
                        x24_1 += 1
                    else
                        int128_t var_70_2 = *x23_2
                        *x23_2 = *x26_1
                        *x26_1 = var_70_2
                        int32_t x0_7
                        int128_t v0_3
                        x0_7, v0_3 = (*arg3)(x23_2, x25_1)
                        
                        if ((x0_7 & 1) == 0)
                            x24_1 += 2
                        else
                            int128_t var_70_3 = *x25_1
                            *x25_1 = *x23_2
                            *x23_2 = var_70_3
                            int32_t x0_9
                            int128_t v0_4
                            x0_9, v0_4 = (*arg3)(x25_1, x19)
                            
                            if ((x0_9 & 1) == 0)
                                x24_1 += 3
                            else
                                x24_1 += 4
                                int128_t var_70_4 = *x19
                                *x19 = *x25_1
                                *x25_1 = var_70_4
            
            CardHandSortInfo* x25_2
            void* __offset(CardHandSortInfo, -0x10) x26_2
            
            if (((*arg3)(x19, x23_2) & 1) == 0)
                void* __offset(CardHandSortInfo, -0x20) x25_3 = x22 - 0x20
                int32_t x0_21
                
                do
                    if (x19 == x25_3)
                        void* __offset(CardHandSortInfo, 0x20) x25_4 = x19 + 0x10
                        
                        if (((*arg3)(x19, x22 - 0x10).d & 1) == 0)
                            if (x25_4 == x22 - 0x10)
                                goto label_bad8fc
                            
                            x25_4 = x19 + 0x20
                            
                            while (true)
                                int128_t v0_11
                                arg1, v0_11 = (*arg3)(x19, x25_4 - 0x10)
                                
                                if ((arg1.d & 1) != 0)
                                    break
                                
                                x25_4 += 0x10
                                
                                if (x22 == x25_4)
                                    return 
                            
                            int128_t var_70_13 = *(x25_4 - 0x10)
                            *(x25_4 - 0x10) = *(x22 - 0x10)
                            *(x22 - 0x10) = var_70_13
                        
                        if (x25_4 == x22 - 0x10)
                            goto label_bad8fc
                        
                        void* __offset(CardHandSortInfo, -0x10) x24_4 = x22 - 0x10
                        
                        while (true)
                            x23_1 = x25_4 - 0x10
                            int32_t x0_35
                            
                            do
                                x23_1 += 0x10
                                x0_35 = (*arg3)(x19, x23_1)
                            while ((x0_35 & 1) == 0)
                            x25_4 = x23_1 + 0x10
                            
                            do
                                x24_4 -= 0x10
                                int128_t v0_12
                                arg1, v0_12 = (*arg3)(x19, x24_4)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x24_4)
                                break
                            
                            int128_t var_70_14 = *x23_1
                            *x23_1 = *x24_4
                            *x24_4 = var_70_14
                        
                        goto label_bad230
                    
                    int128_t v0_8
                    x0_21, v0_8 = (*arg3)(x25_3, x23_2)
                    x25_3 -= 0x10
                while ((x0_21 & 1) == 0)
                x26_2 = x25_3 + 0x10
                x24_1 += 1
                int128_t var_70_10 = *x19
                *x19 = *(x25_3 + 0x10)
                *(x25_3 + 0x10) = var_70_10
                x25_2 = x19 + 0x10
                
                if (x25_2 u< x26_2)
                    goto label_bad508
                
                goto label_bad4d8
            
            x26_2 = x22 - 0x10
            x25_2 = x19 + 0x10
            
            if (x25_2 u< x26_2)
            label_bad508:
                void* __offset(CardHandSortInfo, -0x10) x27_1
                
                while (true)
                    x27_1 = x25_2 - 0x10
                    int32_t x0_23
                    
                    do
                        x27_1 += 0x10
                        x0_23 = (*arg3)(x27_1, x23_2)
                    while ((x0_23 & 1) != 0)
                    x25_2 = x27_1 + 0x10
                    int32_t x0_25
                    
                    do
                        x26_2 -= 0x10
                        int128_t v0_9
                        x0_25, v0_9 = (*arg3)(x26_2, x23_2)
                    while ((x0_25 & 1) == 0)
                    
                    if (x27_1 u> x26_2)
                        break
                    
                    x24_1 += 1
                    
                    if (x23_2 == x27_1)
                        x23_2 = x26_2
                    
                    int128_t var_70_11 = *x27_1
                    *x27_1 = *x26_2
                    *x26_2 = var_70_11
                
                x25_2 = x27_1
                
                if (x25_2 != x23_2)
                    goto label_bad560
            else
            label_bad4d8:
                
                if (x25_2 != x23_2)
                label_bad560:
                    int32_t x0_27
                    int128_t v0_10
                    x0_27, v0_10 = (*arg3)(x23_2, x25_2)
                    
                    if ((x0_27 & 1) != 0)
                        x24_1 += 1
                        int128_t var_70_12 = *x25_2
                        *x25_2 = *x23_2
                        *x23_2 = var_70_12
            
            if (x24_1 != 0)
            label_bad5c0:
                
                if (x25_2 - x19 s>= x22 - x25_2)
                    std::__ndk1::__sort<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                        x25_2 + 0x10, x22, arg3)
                    x22 = x25_2
                    break
                
                std::__ndk1::__sort<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x10
                continue
            else
                int32_t x0_29 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x10
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
                        x23_1, x22, arg3).d & 1) != 0)
                    x22 = x25_2
                    
                    if ((x0_29 & 1) == 0)
                        break
                else
                    if ((x0_29 & 1) == 0)
                        goto label_bad5c0
                    
                    continue
    label_bad8fc:
        return 
