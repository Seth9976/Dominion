// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIllEEPlEEvT0_S5_T_
// 地址: 0x109ccfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2
int64_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109cd38:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 3
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    int64_t x8_12 = x20[-1]
                    int64_t x9_11 = *x19
                    
                    if (x8_12 s< x9_11)
                        *x19 = x8_12
                        x20[-1] = x9_11
                case 3
                    SystemHintOp_BTI()
                    int64_t x8_13 = *x19
                    int64_t x9_12 = x19[1]
                    int64_t x10_10 = x20[-1]
                    
                    if (x9_12 s>= x8_13)
                        if (x10_10 s< x9_12)
                            x19[1] = x10_10
                            x20[-1] = x9_12
                            int64_t x9_16 = *x19
                            int64_t x8_17 = x19[1]
                            
                            if (x8_17 s< x9_16)
                                *x19 = x8_17
                                x19[1] = x9_16
                    else if (x10_10 s>= x9_12)
                        *x19 = x9_12
                        x19[1] = x8_13
                        int64_t x9_17 = x20[-1]
                        
                        if (x9_17 s< x8_13)
                            x19[1] = x9_17
                            x20[-1] = x8_13
                    else
                        *x19 = x10_10
                        x20[-1] = x8_13
                case 4
                    SystemHintOp_BTI()
                    int64_t x9_13 = *x19
                    int64_t x8_14 = x19[1]
                    int64_t x10_11 = x19[2]
                    
                    if (x8_14 s>= x9_13)
                        if (x10_11 s>= x8_14)
                            x8_14 = x10_11
                        else
                            x19[1] = x10_11
                            x19[2] = x8_14
                            
                            if (x10_11 s< x9_13)
                                *x19 = x10_11
                                x19[1] = x9_13
                    else if (x10_11 s>= x8_14)
                        *x19 = x8_14
                        x19[1] = x9_13
                        
                        if (x10_11 s>= x9_13)
                            x8_14 = x10_11
                        else
                            x19[1] = x10_11
                            x8_14 = x9_13
                            x19[2] = x9_13
                    else
                        *x19 = x10_11
                        x8_14 = x9_13
                        x19[2] = x9_13
                    
                    int64_t x9_18 = x20[-1]
                    
                    if (x9_18 s< x8_14)
                        x19[2] = x9_18
                        x20[-1] = x8_14
                        int64_t x9_19 = x19[1]
                        int64_t x8_18 = x19[2]
                        
                        if (x8_18 s< x9_19)
                            int64_t x10_14 = *x19
                            x19[1] = x8_18
                            x19[2] = x9_19
                            
                            if (x8_18 s< x10_14)
                                *x19 = x8_18
                                x19[1] = x10_14
                case 5
                    SystemHintOp_BTI()
                    return sub_109d23c(x19, &x19[1], &x19[2], &x19[3], x20 - 8) __tailcall
        else if (x9_1 s<= 0xf7)
            int64_t x9_15 = *x19
            int64_t x8_16 = x19[1]
            int64_t x10_13 = x19[2]
            
            if (x8_16 s>= x9_15)
                if (x10_13 s>= x8_16)
                    x8_16 = x10_13
                else
                    x19[1] = x10_13
                    x19[2] = x8_16
                    
                    if (x10_13 s< x9_15)
                        *x19 = x10_13
                        x19[1] = x9_15
            else if (x10_13 s>= x8_16)
                *x19 = x8_16
                x19[1] = x9_15
                
                if (x10_13 s>= x9_15)
                    x8_16 = x10_13
                else
                    x19[1] = x10_13
                    x8_16 = x9_15
                    x19[2] = x9_15
            else
                *x19 = x10_13
                x8_16 = x9_15
                x19[2] = x9_15
            
            int64_t* x10_15 = &x19[3]
            
            if (x10_15 != x20)
                int64_t x9_20 = 0x18
                
                while (true)
                    int64_t x11_7 = *x10_15
                    
                    if (x11_7 s< x8_16)
                        int64_t x13_1 = x9_20
                        void* x8_20
                        
                        while (true)
                            int64_t x12_3 = x13_1 - 8
                            *(x19 + x13_1) = x8_16
                            
                            if (x13_1 == 8)
                                x8_20 = x19
                                break
                            
                            x8_16 = *(x19 + x13_1 - 0x10)
                            x13_1 = x12_3
                            
                            if (x11_7 s>= x8_16)
                                x8_20 = x19 + x12_3
                                break
                        
                        *x8_20 = x11_7
                    
                    if (&x10_15[1] == x20)
                        break
                    
                    x8_16 = *x10_15
                    x9_20 += 8
                    x10_15 = &x10_15[1]
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 2 & 0xfffffffffffffff8)
            
            if (x9_1 s< 0x1f39)
                int64_t x9_3 = *x23_2
                int64_t x8_5 = *x19
                int64_t x10_4 = *(x20 - 8)
                
                if (x9_3 s>= x8_5)
                    if (x10_4 s>= x9_3)
                        arg1 = nullptr
                    else
                        *x23_2 = x10_4
                        *(x20 - 8) = x9_3
                        int64_t x8_6 = *x23_2
                        int64_t x9_4 = *x19
                        
                        if (x8_6 s>= x9_4)
                            arg1 = 1
                        else
                            *x19 = x8_6
                            *x23_2 = x9_4
                            arg1 = 2
                else if (x10_4 s>= x9_3)
                    *x19 = x9_3
                    *x23_2 = x8_5
                    int64_t x9_5 = *(x20 - 8)
                    
                    if (x9_5 s>= x8_5)
                        arg1 = 1
                    else
                        *x23_2 = x9_5
                        *(x20 - 8) = x8_5
                        arg1 = 2
                else
                    *x19 = x10_4
                    *(x20 - 8) = x8_5
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                arg1 = sub_109d23c(x19, x19 + x8_4, x23_2, x23_2 + x8_4, x20 - 8)
            
            int64_t x9_6 = *x19
            int64_t x10_5 = *x23_2
            void* x8_7
            
            if (x9_6 s>= x10_5)
                void* x8_8 = x20 - 0x10
                
                while (true)
                    if (x19 == x8_8)
                        int64_t x10_7 = *(x20 - 8)
                        void* x8_11 = &x19[1]
                        
                        if (x9_6 s>= x10_7)
                            if (x8_11 == x20 - 8)
                                goto label_109d218
                            
                            x8_11 = &x19[2]
                            
                            while (true)
                                int64_t x11_3 = *(x8_11 - 8)
                                
                                if (x9_6 s< x11_3)
                                    *(x8_11 - 8) = x10_7
                                    *(x20 - 8) = x11_3
                                    break
                                
                                x8_11 += 8
                                
                                if (x20 == x8_11)
                                    goto label_109d218
                        
                        if (x8_11 == x20 - 8)
                            goto label_109d218
                        
                        void* x9_10 = x20 - 8
                        
                        while (true)
                            int64_t x11_4 = *x19
                            int64_t x10_8
                            
                            do
                                x10_8 = *x8_11
                                x8_11 += 8
                            while (x11_4 s>= x10_8)
                            
                            x23_1 = x8_11 - 8
                            int64_t x12_2
                            
                            do
                                x9_10 -= 8
                                x12_2 = *x9_10
                            while (x11_4 s< x12_2)
                            
                            if (x23_1 u>= x9_10)
                                break
                            
                            *x23_1 = x12_2
                            *x9_10 = x10_8
                        
                        goto label_109cd38
                    
                    int64_t x11_1 = *x8_8
                    x8_8 -= 8
                    
                    if (x11_1 s< x10_5)
                        *x19 = x11_1
                        x8_7 = x8_8 + 8
                        *x8_7 = x9_6
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_7 = x20 - 8
            
            int64_t* x24_1 = &x19[1]
            
            if (x24_1 u< x8_7)
                void* x9_7
                
                while (true)
                    int64_t x10_6 = *x23_2
                    x9_7 = x24_1 - 8
                    int64_t x11_2
                    
                    do
                        x9_7 += 8
                        x11_2 = *x9_7
                    while (x11_2 s< x10_6)
                    
                    x24_1 = x9_7 + 8
                    int64_t x12_1
                    
                    do
                        x8_7 -= 8
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
                int64_t x8_9 = *x23_2
                int64_t x9_8 = *x24_1
                
                if (x8_9 s< x9_8)
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = x8_9
                    *x23_2 = x9_8
            
            if (arg1.d != 0)
            label_109cf18:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<int64_t, int64_t>&, int64_t*>(
                        &x24_1[1], x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<int64_t, int64_t>&, int64_t*>(x19, x24_1, 
                    arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int64_t, int64_t>&, int64_t*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int64_t, int64_t>&, int64_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109cf18
                    
                    continue
        
    label_109d218:
        SystemHintOp_BTI()
        return 
