// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIeeEEPeEEvT0_S5_T_
// 地址: 0x10a04c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

long double* x26 = arg2
long double* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_10a0508:
        int64_t x9_1 = x26 - x23_1
        int64_t x8_1 = x9_1 s>> 4
        x19 = x23_1
        int128_t var_80_12
        int128_t var_70_13
        int128_t v0
        int128_t v1
        int128_t v2
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    v0 = *(x26 - 0x10)
                    v1 = *x19
                    
                    if (sub_1101750(v0, v1).d s< 0)
                        *x19 = v0
                        *(x26 - 0x10) = v1
                case 3
                    SystemHintOp_BTI()
                    v1 = *x19
                    v0 = *(x19 + 0x10)
                    v2 = *(x26 - 0x10)
                    
                    if ((sub_1101750(v0, v1) & 0x80000000) == 0)
                        if (sub_1101750(v2, v0).d s< 0)
                            *(x19 + 0x10) = v2
                            *(x26 - 0x10) = v0
                            v1 = *x19
                            v0 = *(x19 + 0x10)
                            var_70_13 = v0
                            var_80_12 = v1
                        label_10a0bc0:
                            
                            if (sub_1101750(v0, v1).d s< 0)
                                *x19 = var_70_13
                                *(x19 + 0x10) = var_80_12
                    else if (sub_1101750(v2, v0).d s>= 0)
                        *x19 = v0
                        *(x19 + 0x10) = v1
                        v0 = *(x26 - 0x10)
                        
                        if (sub_1101750(v0, v1).d s< 0)
                            *(x19 + 0x10) = v0
                            *(x26 - 0x10) = v1
                    else
                        *x19 = v2
                        *(x26 - 0x10) = v1
                case 4
                    SystemHintOp_BTI()
                    v1 = *x19
                    v2 = *(x19 + 0x10)
                    int128_t var_80_10 = *(x19 + 0x20)
                    
                    if ((sub_1101750(v2, v1) & 0x80000000) == 0)
                        if (sub_1101750(var_80_10, v2) s>= 0)
                            v1 = var_80_10
                        else
                            *(x19 + 0x10) = var_80_10
                            *(x19 + 0x20) = v2
                            
                            if (sub_1101750(var_80_10, v1) s>= 0)
                                v1 = v2
                            else
                                *x19 = var_80_10
                                *(x19 + 0x10) = v1
                                v1 = v2
                    else if (sub_1101750(var_80_10, v2) s>= 0)
                        *x19 = v2
                        *(x19 + 0x10) = v1
                        
                        if (sub_1101750(var_80_10, v1) s>= 0)
                            v1 = var_80_10
                        else
                            *(x19 + 0x10) = var_80_10
                            v1 = v1
                            *(x19 + 0x20) = v1
                    else
                        *x19 = var_80_10
                        v1 = v1
                        *(x19 + 0x20) = v1
                    
                    v0 = *(x26 - 0x10)
                    
                    if (sub_1101750(v0, v1).d s< 0)
                        *(x19 + 0x20) = v0
                        *(x26 - 0x10) = v1
                        v1 = *(x19 + 0x10)
                        v0 = *(x19 + 0x20)
                        var_70_13 = v0
                        
                        if (sub_1101750(v0, v1).d s< 0)
                            v2 = *x19
                            v0 = var_70_13
                            var_80_12 = v2
                            *(x19 + 0x10) = v0
                            *(x19 + 0x20) = v1
                            v1 = v2
                            goto label_10a0bc0
                case 5
                    SystemHintOp_BTI()
                    return std::__ndk1::__sort5<std::__ndk1::__less<long double, long double>&, long double*>(
                        x19, x19 + 0x10, x19 + 0x20, x19 + 0x30, x26 - 0x10, arg3) __tailcall
        else if (x9_1 s<= 0x1ef)
            v1 = *x19
            v2 = *(x19 + 0x10)
            v0 = *(x19 + 0x20)
            int128_t var_90_7 = v1
            
            if ((sub_1101750(v2, v1) & 0x80000000) == 0)
                if (sub_1101750(v0, v2).d s>= 0)
                    v1 = v0
                else
                    *(x19 + 0x10) = v0
                    *(x19 + 0x20) = v2
                    
                    if (sub_1101750(v0, var_90_7).d s>= 0)
                        v1 = v2
                    else
                        *x19 = v0
                        *(x19 + 0x10) = var_90_7
                        v1 = v2
            else
                v1 = var_90_7
                
                if (sub_1101750(v0, v2).d s>= 0)
                    *x19 = v2
                    *(x19 + 0x10) = v1
                    
                    if (sub_1101750(v0, v1).d s>= 0)
                        v1 = v0
                    else
                        v1 = var_90_7
                        *(x19 + 0x10) = v0
                        *(x19 + 0x20) = v1
                else
                    *x19 = v0
                    *(x19 + 0x20) = v1
            
            void* x21_1 = x19 + 0x30
            
            if (x21_1 != x26)
                int64_t x22_2 = 0x30
                
                while (true)
                    int128_t v0_2 = *x21_1
                    int128_t var_80_15 = v0_2
                    int128_t var_70_16 = v1
                    
                    if (sub_1101750(v0_2, v1).d s< 0)
                        int64_t x8_7 = x22_2
                        void* x8_9
                        
                        while (true)
                            int64_t x20_3 = x8_7 - 0x10
                            *(x19 + x8_7) = var_70_16
                            v0_2 = var_80_15
                            
                            if (x8_7 == 0x10)
                                x8_9 = x19
                                break
                            
                            v1 = *(x19 + x8_7 - 0x20)
                            var_70_16 = v1
                            x8_7 = x20_3
                            
                            if ((sub_1101750(v0_2, v1).d & 0x80000000) == 0)
                                v0_2 = var_80_15
                                x8_9 = x19 + x20_3
                                break
                        
                        *x8_9 = v0_2
                    
                    if (x21_1 + 0x10 == x26)
                        break
                    
                    v1 = *x21_1
                    x22_2 += 0x10
                    x21_1 += 0x10
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 3 & 0xfffffffffffffff0)
            int32_t x24_1
            
            if (x9_1 s< 0x3e71)
                v0 = *x23_2
                v1 = *x19
                v2 = *(x26 - 0x10)
                
                if ((sub_1101750(v0, v1) & 0x80000000) == 0)
                    if (sub_1101750(v2, v0) s>= 0)
                        x24_1 = 0
                    else
                        *x23_2 = v2
                        *(x26 - 0x10) = v0
                        v0 = *x23_2
                        v1 = *x19
                        
                        if (sub_1101750(v0, v1) s>= 0)
                            x24_1 = 1
                        else
                            *x19 = v0
                            *x23_2 = v1
                            x24_1 = 2
                else if (sub_1101750(v2, v0) s>= 0)
                    *x19 = v0
                    *x23_2 = v1
                    v0 = *(x26 - 0x10)
                    
                    if (sub_1101750(v0, v1) s>= 0)
                        x24_1 = 1
                    else
                        *x23_2 = v0
                        *(x26 - 0x10) = v1
                        x24_1 = 2
                else
                    x24_1 = 1
                    *x19 = v2
                    *(x26 - 0x10) = v1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 2 & 0xfffffffffffffff0
                int32_t x0_1
                x0_1, v0, v1, v2 = std::__ndk1::__sort5<std::__ndk1::__less<long double, long double>&, long double*>(
                    x19, x19 + x8_4, x23_2, x23_2 + x8_4, x26 - 0x10, arg3)
                x24_1 = x0_1
            
            v0 = *x19
            v1 = *x23_2
            int128_t var_90_2 = v0
            void* x28_1
            
            if ((sub_1101750(v0, v1) & 0x80000000) == 0)
                void* x20_1 = x26 - 0x20
                
                while (true)
                    if (x19 == x20_1)
                        v1 = *(x26 - 0x10)
                        void* x24_3 = x19 + 0x10
                        int128_t var_80_6 = v1
                        
                        if ((sub_1101750(var_90_2, v1).d & 0x80000000) == 0)
                            if (x24_3 == x26 - 0x10)
                                goto label_10a0c68
                            
                            x24_3 = x19 + 0x20
                            
                            while (true)
                                v1 = *(x24_3 - 0x10)
                                
                                if (sub_1101750(var_90_2, v1).d s< 0)
                                    *(x24_3 - 0x10) = var_80_6
                                    *(x26 - 0x10) = v1
                                    break
                                
                                x24_3 += 0x10
                                
                                if (x26 == x24_3)
                                    goto label_10a0c68
                        
                        if (x24_3 == x26 - 0x10)
                            goto label_10a0c68
                        
                        void* x25_2 = x26 - 0x10
                        
                        while (true)
                            int128_t var_70_8 = *x19
                            int128_t var_90_4
                            int32_t i
                            
                            do
                                v1 = *x24_3
                                x24_3 += 0x10
                                var_90_4 = v1
                                i = sub_1101750(var_70_8, v1)
                            while (i s>= 0)
                            x23_1 = x24_3 - 0x10
                            
                            do
                                v1 = *(x25_2 - 0x10)
                                x25_2 -= 0x10
                                arg1 = sub_1101750(var_70_8, v1)
                            while ((arg1.d & 0x80000000) != 0)
                            
                            if (x23_1 u>= x25_2)
                                break
                            
                            *x23_1 = v1
                            *x25_2 = var_90_4
                        
                        goto label_10a0508
                    
                    v0 = *x20_1
                    x20_1 -= 0x10
                    
                    if (sub_1101750(v0, v1) s< 0)
                        x28_1 = x20_1 + 0x10
                        x24_1 += 1
                        *x19 = v0
                        *(x20_1 + 0x10) = var_90_2
                        break
            else
                x28_1 = x26 - 0x10
            
            long double* x20_2 = x19 + 0x10
            
            if (x20_2 u< x28_1)
                void* x25_1
                
                while (true)
                    x25_1 = x20_2 - 0x10
                    int128_t var_70_5 = *x23_2
                    int128_t var_90_3
                    int32_t x0_9
                    
                    do
                        x25_1 += 0x10
                        v0 = *x25_1
                        var_90_3 = v0
                        x0_9 = sub_1101750(v0, var_70_5)
                    while ((x0_9 & 0x80000000) != 0)
                    x20_2 = x25_1 + 0x10
                    int32_t i_1
                    
                    do
                        v0 = *(x28_1 - 0x10)
                        x28_1 -= 0x10
                        i_1 = sub_1101750(v0, var_70_5)
                    while (i_1 s>= 0)
                    
                    if (x25_1 u> x28_1)
                        break
                    
                    *x25_1 = v0
                    x24_1 += 1
                    
                    if (x23_2 == x25_1)
                        x23_2 = x28_1
                    
                    *x28_1 = var_90_3
                
                x20_2 = x25_1
            
            if (x20_2 != x23_2)
                v0 = *x23_2
                v1 = *x20_2
                
                if (sub_1101750(v0, v1) s< 0)
                    x24_1 += 1
                    *x20_2 = v0
                    *x23_2 = v1
            
            if (x24_1 != 0)
            label_10a07ac:
                
                if (x20_2 - x19 s>= x26 - x20_2)
                    arg1, v0, v1, v2 = std::__ndk1::__sort<std::__ndk1::__less<long double, long double>&, long double*>(
                        x20_2 + 0x10, x26, arg3)
                    x26 = x20_2
                    break
                
                arg1, v0, v1, v2 = std::__ndk1::__sort<std::__ndk1::__less<long double, long double>&, long double*>(
                    x19, x20_2, arg3)
                x23_1 = x20_2 + 0x10
                continue
            else
                int32_t x0_12 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<long double, long double>&, long double*>(
                    x19, x20_2, arg3)
                x23_1 = x20_2 + 0x10
                arg1, v0, v1, v2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<long double, long double>&, long double*>(
                    x23_1, x26, arg3)
                
                if ((arg1.d & 1) != 0)
                    x26 = x20_2
                    
                    if ((x0_12 & 1) == 0)
                        break
                else
                    if ((x0_12 & 1) == 0)
                        goto label_10a07ac
                    
                    continue
    label_10a0c68:
        SystemHintOp_BTI()
        return 
