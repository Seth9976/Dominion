// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIddEEPdEEvT0_S5_T_
// 地址: 0x109fb78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double* x20 = arg2
double* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109fbb4:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 3
        x19 = x23_1
        double v0
        double v1
        double v2
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    v0 = x20[-1]
                    v1 = *x19
                    
                    if (not(v0 >= v1))
                        *x19 = v0
                        x20[-1] = v1
                case 3
                    SystemHintOp_BTI()
                    v0 = *x19
                    v1 = x19[1]
                    v2 = x20[-1]
                    
                    if (v1 >= v0)
                        if (not(v2 >= v1))
                            x19[1] = v2
                            x20[-1] = v1
                            v1 = *x19
                            v0 = x19[1]
                            
                            if (not(v0 >= v1))
                                *x19 = v0
                                x19[1] = v1
                    else if (v2 >= v1)
                        *x19 = v1
                        x19[1] = v0
                        v1 = x20[-1]
                        
                        if (not(v1 >= v0))
                            x19[1] = v1
                            x20[-1] = v0
                    else
                        *x19 = v2
                        x20[-1] = v0
                case 4
                    SystemHintOp_BTI()
                    v1 = *x19
                    v0 = x19[1]
                    v2 = x19[2]
                    
                    if (v0 >= v1)
                        if (v2 >= v0)
                            v0 = v2
                        else
                            x19[1] = v2
                            x19[2] = v0
                            
                            if (not(v2 >= v1))
                                *x19 = v2
                                x19[1] = v1
                    else if (v2 >= v0)
                        *x19 = v0
                        x19[1] = v1
                        
                        if (v2 >= v1)
                            v0 = v2
                        else
                            x19[1] = v2
                            v0 = v1
                            x19[2] = v1
                    else
                        *x19 = v2
                        v0 = v1
                        x19[2] = v1
                    
                    v1 = x20[-1]
                    
                    if (not(v1 >= v0))
                        x19[2] = v1
                        x20[-1] = v0
                        v1 = x19[1]
                        v0 = x19[2]
                        
                        if (not(v0 >= v1))
                            v2 = *x19
                            x19[1] = v0
                            x19[2] = v1
                            
                            if (not(v0 >= v2))
                                *x19 = v0
                                x19[1] = v2
                case 5
                    SystemHintOp_BTI()
                    return sub_10a00b8(x19, &x19[1], &x19[2], &x19[3], x20 - 8) __tailcall
        else if (x9_1 s<= 0xf7)
            v1 = *x19
            v0 = x19[1]
            v2 = x19[2]
            
            if (v0 >= v1)
                if (v2 >= v0)
                    v0 = v2
                else
                    x19[1] = v2
                    x19[2] = v0
                    
                    if (not(v2 >= v1))
                        *x19 = v2
                        x19[1] = v1
            else if (v2 >= v0)
                *x19 = v0
                x19[1] = v1
                
                if (v2 >= v1)
                    v0 = v2
                else
                    x19[1] = v2
                    v0 = v1
                    x19[2] = v1
            else
                *x19 = v2
                v0 = v1
                x19[2] = v1
            
            double* x8_10 = &x19[3]
            
            if (x8_10 != x20)
                int64_t x9_6 = 0x18
                
                while (true)
                    v1 = *x8_10
                    
                    if (not(v1 >= v0))
                        int64_t x10_5 = x9_6
                        double* x10_7
                        
                        while (true)
                            int64_t x11_2 = x10_5 - 8
                            *(x19 + x10_5) = v0
                            
                            if (x10_5 == 8)
                                x10_7 = x19
                                break
                            
                            v0 = *(x19 + x10_5 - 0x10)
                            x10_5 = x11_2
                            
                            if (not(v1 < v0))
                                x10_7 = x19 + x11_2
                                break
                        
                        *x10_7 = v1
                    
                    if (&x8_10[1] == x20)
                        break
                    
                    v0 = *x8_10
                    x9_6 += 8
                    x8_10 = &x8_10[1]
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 2 & 0xfffffffffffffff8)
            
            if (x9_1 s< 0x1f39)
                v1 = *x23_2
                v0 = *x19
                v2 = *(x20 - 8)
                
                if (v1 >= v0)
                    if (v2 >= v1)
                        arg1 = nullptr
                    else
                        *x23_2 = v2
                        *(x20 - 8) = v1
                        v0 = *x23_2
                        v1 = *x19
                        
                        if (v0 >= v1)
                            arg1 = 1
                        else
                            *x19 = v0
                            *x23_2 = v1
                            arg1 = 2
                else if (v2 >= v1)
                    *x19 = v1
                    *x23_2 = v0
                    v1 = *(x20 - 8)
                    
                    if (v1 >= v0)
                        arg1 = 1
                    else
                        *x23_2 = v1
                        *(x20 - 8) = v0
                        arg1 = 2
                else
                    *x19 = v2
                    *(x20 - 8) = v0
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                arg1 = sub_10a00b8(x19, x19 + x8_4, x23_2, x23_2 + x8_4, x20 - 8)
            
            v0 = *x19
            v1 = *x23_2
            void* x8_5
            
            if (v0 >= v1)
                void* x8_6 = x20 - 0x10
                
                while (true)
                    if (x19 == x8_6)
                        v1 = *(x20 - 8)
                        void* x8_8 = &x19[1]
                        
                        if (not(v0 < v1))
                            if (x8_8 == x20 - 8)
                                goto label_10a0094
                            
                            x8_8 = &x19[2]
                            
                            while (true)
                                v2 = *(x8_8 - 8)
                                
                                if (v0 < v2)
                                    *(x8_8 - 8) = v1
                                    *(x20 - 8) = v2
                                    break
                                
                                x8_8 += 8
                                
                                if (x20 == x8_8)
                                    goto label_10a0094
                        
                        if (x8_8 == x20 - 8)
                            goto label_10a0094
                        
                        void* x9_5 = x20 - 8
                        
                        while (true)
                            v1 = *x19
                            
                            do
                                v0 = *x8_8
                                x8_8 += 8
                            while (v1 >= v0)
                            
                            x23_1 = x8_8 - 8
                            
                            do
                                x9_5 -= 8
                                v2 = *x9_5
                            while (v1 < v2)
                            
                            if (x23_1 u>= x9_5)
                                break
                            
                            *x23_1 = v2
                            *x9_5 = v0
                        
                        goto label_109fbb4
                    
                    v2 = *x8_6
                    x8_6 -= 8
                    
                    if (not(v2 >= v1))
                        *x19 = v2
                        x8_5 = x8_6 + 8
                        *x8_5 = v0
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_5 = x20 - 8
            
            double* x24_1 = &x19[1]
            
            if (x24_1 u< x8_5)
                void* x9_3
                
                while (true)
                    v0 = *x23_2
                    x9_3 = x24_1 - 8
                    
                    do
                        x9_3 += 8
                        v1 = *x9_3
                    while (v1 < v0)
                    
                    x24_1 = x9_3 + 8
                    
                    do
                        x8_5 -= 8
                        v2 = *x8_5
                    while (v2 >= v0)
                    
                    if (x9_3 u> x8_5)
                        break
                    
                    *x9_3 = v2
                    *x8_5 = v1
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_3)
                        x23_2 = x8_5
                
                x24_1 = x9_3
            
            if (x24_1 != x23_2)
                v0 = *x23_2
                v1 = *x24_1
                
                if (not(v0 >= v1))
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = v0
                    *x23_2 = v1
            
            if (arg1.d != 0)
            label_109fd94:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<double, double>&, double*>(&x24_1[1], 
                        x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<double, double>&, double*>(x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<double, double>&, double*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<double, double>&, double*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109fd94
                    
                    continue
    label_10a0094:
        SystemHintOp_BTI()
        return 
