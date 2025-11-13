// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIssEEPsEEvT0_S5_T_
// 地址: 0x109a71c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x20 = arg2
int16_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109a750:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 1
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    int32_t x8_12 = sx.d(x20[-1])
                    int32_t x9_11 = sx.d(*x19)
                    
                    if (x8_12 s< x9_11)
                        *x19 = x8_12.w
                        x20[-1] = x9_11.w
                case 3
                    SystemHintOp_BTI()
                    int32_t x9_12 = sx.d(x19[1])
                    int32_t x8_13 = sx.d(*x19)
                    int32_t x10_9 = sx.d(x20[-1])
                    
                    if (x9_12 s>= x8_13)
                        if (x10_9 s< x9_12)
                            x19[1] = x10_9.w
                            x20[-1] = x9_12.w
                            int32_t x8_17 = sx.d(x19[1])
                            int32_t x9_16 = sx.d(*x19)
                            
                            if (x8_17 s< x9_16)
                                *x19 = x8_17.w
                                x19[1] = x9_16.w
                    else if (x10_9 s>= x9_12)
                        *x19 = x9_12.w
                        x19[1] = x8_13.w
                        int32_t x9_17 = sx.d(x20[-1])
                        
                        if (x9_17 s< x8_13)
                            x19[1] = x9_17.w
                            x20[-1] = x8_13.w
                    else
                        *x19 = x10_9.w
                        x20[-1] = x8_13.w
                case 4
                    SystemHintOp_BTI()
                    int32_t x8_14 = sx.d(x19[1])
                    int32_t x9_13 = sx.d(*x19)
                    int32_t x10_10 = sx.d(x19[2])
                    
                    if (x8_14 s>= x9_13)
                        if (x10_10 s>= x8_14)
                            x8_14 = x10_10
                        else
                            x19[1] = x10_10.w
                            x19[2] = x8_14.w
                            
                            if (x10_10 s< x9_13)
                                *x19 = x10_10.w
                                x19[1] = x9_13.w
                    else if (x10_10 s>= x8_14)
                        *x19 = x8_14.w
                        x19[1] = x9_13.w
                        
                        if (x10_10 s>= x9_13)
                            x8_14 = x10_10
                        else
                            x19[1] = x10_10.w
                            x8_14 = x9_13
                            x19[2] = x9_13.w
                    else
                        *x19 = x10_10.w
                        x8_14 = x9_13
                        x19[2] = x9_13.w
                    
                    int32_t x9_18 = sx.d(x20[-1])
                    
                    if (x9_18 s< x8_14)
                        x19[2] = x9_18.w
                        x20[-1] = x8_14.w
                        int32_t x8_18 = sx.d(x19[2])
                        int32_t x9_19 = sx.d(x19[1])
                        
                        if (x8_18 s< x9_19)
                            int32_t x10_13 = sx.d(*x19)
                            x19[1] = x8_18.w
                            x19[2] = x9_19.w
                            
                            if (x8_18 s< x10_13)
                                *x19 = x8_18.w
                                x19[1] = x10_13.w
                case 5
                    SystemHintOp_BTI()
                    return sub_109ac84(x19, &x19[1], &x19[2], &x19[3], x20 - 2) __tailcall
        else if (x9_1 s<= 0x3d)
            int32_t x8_16 = sx.d(x19[1])
            int32_t x9_15 = sx.d(*x19)
            int32_t x10_12 = sx.d(x19[2])
            
            if (x8_16 s>= x9_15)
                if (x10_12 s>= x8_16)
                    x8_16 = x10_12
                else
                    x19[1] = x10_12.w
                    x19[2] = x8_16.w
                    
                    if (x10_12 s< x9_15)
                        *x19 = x10_12.w
                        x19[1] = x9_15.w
            else if (x10_12 s>= x8_16)
                *x19 = x8_16.w
                x19[1] = x9_15.w
                
                if (x10_12 s>= x9_15)
                    x8_16 = x10_12
                else
                    x19[1] = x10_12.w
                    x8_16 = x9_15
                    x19[2] = x9_15.w
            else
                *x19 = x10_12.w
                x8_16 = x9_15
                x19[2] = x9_15.w
            
            int16_t* x10_14 = &x19[3]
            
            if (x10_14 != x20)
                int64_t x9_20 = 6
                
                while (true)
                    int32_t x11_7 = sx.d(*x10_14)
                    
                    if (x11_7 s< sx.d(x8_16.w))
                        int64_t x13_1 = x9_20
                        void* x8_20
                        
                        while (true)
                            int64_t x12_3 = x13_1 - 2
                            *(x19 + x13_1) = x8_16.w
                            
                            if (x13_1 == 2)
                                x8_20 = x19
                                break
                            
                            x8_16 = sx.d(*(x19 + x13_1 - 4))
                            x13_1 = x12_3
                            
                            if (x11_7 s>= x8_16)
                                x8_20 = x19 + x12_3
                                break
                        
                        *x8_20 = x11_7.w
                    
                    if (&x10_14[1] == x20)
                        break
                    
                    x8_16 = zx.d(*x10_14)
                    x9_20 += 2
                    x10_14 = &x10_14[1]
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 & 0xfffffffffffffffe)
            
            if (x9_1 s< 0x7cf)
                int32_t x9_3 = sx.d(*x23_2)
                int32_t x8_5 = sx.d(*x19)
                int32_t x10_3 = sx.d(*(x20 - 2))
                
                if (x9_3 s>= x8_5)
                    if (x10_3 s>= x9_3)
                        arg1 = nullptr
                    else
                        *x23_2 = x10_3.w
                        *(x20 - 2) = x9_3.w
                        int32_t x8_6 = sx.d(*x23_2)
                        int32_t x9_4 = sx.d(*x19)
                        
                        if (x8_6 s>= x9_4)
                            arg1 = 1
                        else
                            *x19 = x8_6.w
                            *x23_2 = x9_4.w
                            arg1 = 2
                else if (x10_3 s>= x9_3)
                    *x19 = x9_3.w
                    *x23_2 = x8_5.w
                    int32_t x9_5 = sx.d(*(x20 - 2))
                    
                    if (x9_5 s>= x8_5)
                        arg1 = 1
                    else
                        *x23_2 = x9_5.w
                        *(x20 - 2) = x8_5.w
                        arg1 = 2
                else
                    *x19 = x10_3.w
                    *(x20 - 2) = x8_5.w
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                arg1 = sub_109ac84(x19, &x19[x8_2 s>> 2], x23_2, x23_2 + (x8_2 s>> 2 << 1), x20 - 2)
            
            int32_t x9_6 = sx.d(*x19)
            int32_t x10_4 = sx.d(*x23_2)
            void* x8_7
            
            if (x9_6 s>= x10_4)
                void* x8_8 = x20 - 4
                
                while (true)
                    if (x19 == x8_8)
                        int32_t x10_6 = sx.d(*(x20 - 2))
                        void* x8_11 = &x19[1]
                        
                        if (x9_6 s>= x10_6)
                            if (x8_11 == x20 - 2)
                                goto label_109ac64
                            
                            x8_11 = &x19[2]
                            
                            while (true)
                                int32_t x11_3 = sx.d(*(x8_11 - 2))
                                
                                if (x9_6 s< x11_3)
                                    *(x8_11 - 2) = x10_6.w
                                    *(x20 - 2) = x11_3.w
                                    break
                                
                                x8_11 += 2
                                
                                if (x20 == x8_11)
                                    goto label_109ac64
                        
                        if (x8_11 == x20 - 2)
                            goto label_109ac64
                        
                        int16_t* x9_10 = x20 - 2
                        
                        while (true)
                            int32_t x11_4 = sx.d(*x19)
                            int32_t x10_7
                            
                            do
                                x10_7 = sx.d(*x8_11)
                                x8_11 += 2
                            while (x11_4 s>= x10_7)
                            
                            x23_1 = x8_11 - 2
                            int32_t x12_2
                            
                            do
                                x9_10 = &x9_10[-1]
                                x12_2 = sx.d(*x9_10)
                            while (x11_4 s< x12_2)
                            
                            if (x23_1 u>= x9_10)
                                break
                            
                            *x23_1 = x12_2.w
                            *x9_10 = x10_7.w
                        
                        goto label_109a750
                    
                    int32_t x11_1 = sx.d(*x8_8)
                    x8_8 -= 2
                    
                    if (x11_1 s< x10_4)
                        *x19 = x11_1.w
                        x8_7 = x8_8 + 2
                        *x8_7 = x9_6.w
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_7 = x20 - 2
            
            int16_t* x24_1 = &x19[1]
            
            if (x24_1 u< x8_7)
                int16_t* x9_7
                
                while (true)
                    int32_t x10_5 = sx.d(*x23_2)
                    x9_7 = x24_1 - 2
                    int32_t x11_2
                    
                    do
                        x9_7 = &x9_7[1]
                        x11_2 = sx.d(*x9_7)
                    while (x11_2 s< x10_5)
                    
                    x24_1 = &x9_7[1]
                    int32_t x12_1
                    
                    do
                        x8_7 -= 2
                        x12_1 = sx.d(*x8_7)
                    while (x12_1 s>= x10_5)
                    
                    if (x9_7 u> x8_7)
                        break
                    
                    *x9_7 = x12_1.w
                    *x8_7 = x11_2.w
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_7)
                        x23_2 = x8_7
                
                x24_1 = x9_7
            
            if (x24_1 != x23_2)
                int32_t x8_9 = sx.d(*x23_2)
                int32_t x9_8 = sx.d(*x24_1)
                
                if (x8_9 s< x9_8)
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = x8_9.w
                    *x23_2 = x9_8.w
            
            if (arg1.d != 0)
            label_109a92c:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<int16_t, int16_t>&, int16_t*>(
                        &x24_1[1], x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<int16_t, int16_t>&, int16_t*>(x19, x24_1, 
                    arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int16_t, int16_t>&, int16_t*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int16_t, int16_t>&, int16_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109a92c
                    
                    continue
        
    label_109ac64:
        SystemHintOp_BTI()
        return 
