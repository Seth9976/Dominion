// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIhhEEPhEEvT0_S5_T_
// 地址: 0x1099d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x20 = arg2
uint8_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_1099db8:
        int64_t x8_1 = x20 - x23_1
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    uint32_t x8_10 = zx.d(x20[-1])
                    uint32_t x9_9 = zx.d(*x19)
                    
                    if (x8_10 u< x9_9)
                        *x19 = x8_10.b
                        x20[-1] = x9_9.b
                case 3
                    SystemHintOp_BTI()
                    uint32_t x9_10 = zx.d(x19[1])
                    uint32_t x8_11 = zx.d(*x19)
                    uint32_t x10_7 = zx.d(x20[-1])
                    
                    if (x9_10 u>= x8_11)
                        if (x10_7 u< x9_10)
                            x19[1] = x10_7.b
                            x20[-1] = x9_10.b
                            uint32_t x8_15 = zx.d(x19[1])
                            uint32_t x9_14 = zx.d(*x19)
                            
                            if (x8_15 u< x9_14)
                                *x19 = x8_15.b
                                x19[1] = x9_14.b
                    else if (x10_7 u>= x9_10)
                        *x19 = x9_10.b
                        x19[1] = x8_11.b
                        uint32_t x9_15 = zx.d(x20[-1])
                        
                        if (x9_15 u< x8_11)
                            x19[1] = x9_15.b
                            x20[-1] = x8_11.b
                    else
                        *x19 = x10_7.b
                        x20[-1] = x8_11.b
                case 4
                    SystemHintOp_BTI()
                    uint32_t x8_12 = zx.d(x19[1])
                    uint32_t x9_11 = zx.d(*x19)
                    uint32_t x10_8 = zx.d(x19[2])
                    
                    if (x8_12 u>= x9_11)
                        if (x10_8 u>= x8_12)
                            x8_12 = x10_8
                        else
                            x19[1] = x10_8.b
                            x19[2] = x8_12.b
                            
                            if (x10_8 u< x9_11)
                                *x19 = x10_8.b
                                x19[1] = x9_11.b
                    else if (x10_8 u>= x8_12)
                        *x19 = x8_12.b
                        x19[1] = x9_11.b
                        
                        if (x10_8 u>= x9_11)
                            x8_12 = x10_8
                        else
                            x19[1] = x10_8.b
                            x8_12 = x9_11
                            x19[2] = x9_11.b
                    else
                        *x19 = x10_8.b
                        x8_12 = x9_11
                        x19[2] = x9_11.b
                    
                    uint32_t x9_16 = zx.d(x20[-1])
                    
                    if (x9_16 u< x8_12)
                        x19[2] = x9_16.b
                        x20[-1] = x8_12.b
                        uint32_t x8_16 = zx.d(x19[2])
                        uint32_t x9_17 = zx.d(x19[1])
                        
                        if (x8_16 u< x9_17)
                            uint32_t x10_11 = zx.d(*x19)
                            x19[1] = x8_16.b
                            x19[2] = x9_17.b
                            
                            if (x8_16 u< x10_11)
                                *x19 = x8_16.b
                                x19[1] = x10_11.b
                case 5
                    SystemHintOp_BTI()
                    return sub_109a2d0(x19, &x19[1], &x19[2], &x19[3], x20 - 1) __tailcall
        else if (x8_1 s<= 0x1e)
            uint32_t x8_14 = zx.d(x19[1])
            uint32_t x9_13 = zx.d(*x19)
            uint32_t x10_10 = zx.d(x19[2])
            
            if (x8_14 u>= x9_13)
                if (x10_10 u>= x8_14)
                    x8_14 = x10_10
                else
                    x19[1] = x10_10.b
                    x19[2] = x8_14.b
                    
                    if (x10_10 u< x9_13)
                        *x19 = x10_10.b
                        x19[1] = x9_13.b
            else if (x10_10 u>= x8_14)
                *x19 = x8_14.b
                x19[1] = x9_13.b
                
                if (x10_10 u>= x9_13)
                    x8_14 = x10_10
                else
                    x19[1] = x10_10.b
                    x8_14 = x9_13
                    x19[2] = x9_13.b
            else
                *x19 = x10_10.b
                x8_14 = x9_13
                x19[2] = x9_13.b
            
            char* x9_18 = &x19[3]
            
            if (x9_18 != x20)
                int64_t x10_12 = 0
                
                while (true)
                    uint32_t x11_7 = zx.d(*x9_18)
                    
                    if (x11_7 u< zx.d(x8_14.b))
                        int64_t x12_3 = x10_12
                        void* x8_18
                        
                        while (true)
                            void* x13_1 = &x19[x12_3]
                            *(x13_1 + 3) = x8_14.b
                            
                            if (x12_3 == -2)
                                x8_18 = x19
                                break
                            
                            x8_14 = zx.d(*(x13_1 + 1))
                            x12_3 -= 1
                            
                            if (x11_7 u>= x8_14)
                                x8_18 = &x19[x12_3 + 3]
                                break
                        
                        *x8_18 = x11_7.b
                    
                    if (&x9_18[1] == x20)
                        break
                    
                    x8_14 = zx.d(*x9_18)
                    x10_12 += 1
                    x9_18 = &x9_18[1]
        else
            void* x23_2 = &x19[x8_1 u>> 1]
            
            if (x8_1 s< 0x3e8)
                uint32_t x9_1 = zx.d(*x23_2)
                uint32_t x8_3 = zx.d(*x19)
                uint32_t x10_1 = zx.d(*(x20 - 1))
                
                if (x9_1 u>= x8_3)
                    if (x10_1 u>= x9_1)
                        arg1 = nullptr
                    else
                        *x23_2 = x10_1.b
                        *(x20 - 1) = x9_1.b
                        uint32_t x8_4 = zx.d(*x23_2)
                        uint32_t x9_2 = zx.d(*x19)
                        
                        if (x8_4 u>= x9_2)
                            arg1 = 1
                        else
                            *x19 = x8_4.b
                            *x23_2 = x9_2.b
                            arg1 = 2
                else if (x10_1 u>= x9_1)
                    *x19 = x9_1.b
                    *x23_2 = x8_3.b
                    uint32_t x9_3 = zx.d(*(x20 - 1))
                    
                    if (x9_3 u>= x8_3)
                        arg1 = 1
                    else
                        *x23_2 = x9_3.b
                        *(x20 - 1) = x8_3.b
                        arg1 = 2
                else
                    *x19 = x10_1.b
                    *(x20 - 1) = x8_3.b
                    arg1 = 1
            else
                uint64_t x8_2 = x8_1 u>> 2
                arg1 = sub_109a2d0(x19, &x19[x8_2], x23_2, x23_2 + x8_2, x20 - 1)
            
            uint32_t x9_4 = zx.d(*x19)
            uint32_t x10_2 = zx.d(*x23_2)
            void* x8_5
            
            if (x9_4 u>= x10_2)
                void* x8_6 = x20 - 2
                
                while (true)
                    if (x19 == x8_6)
                        uint32_t x10_4 = zx.d(*(x20 - 1))
                        void* x8_9 = &x19[1]
                        
                        if (x9_4 u>= x10_4)
                            if (x8_9 == x20 - 1)
                                goto label_109a2b0
                            
                            x8_9 = &x19[2]
                            
                            while (true)
                                uint32_t x11_3 = zx.d(*(x8_9 - 1))
                                
                                if (x9_4 u< x11_3)
                                    *(x8_9 - 1) = x10_4.b
                                    *(x20 - 1) = x11_3.b
                                    break
                                
                                x8_9 += 1
                                
                                if (x20 == x8_9)
                                    goto label_109a2b0
                        
                        if (x8_9 == x20 - 1)
                            goto label_109a2b0
                        
                        char* x9_8 = x20 - 1
                        
                        while (true)
                            uint32_t x11_4 = zx.d(*x19)
                            uint32_t x10_5
                            
                            do
                                x10_5 = zx.d(*x8_9)
                                x8_9 += 1
                            while (x11_4 u>= x10_5)
                            
                            x23_1 = x8_9 - 1
                            uint32_t x12_2
                            
                            do
                                x9_8 = &x9_8[-1]
                                x12_2 = zx.d(*x9_8)
                            while (x11_4 u< x12_2)
                            
                            if (x23_1 u>= x9_8)
                                break
                            
                            *x23_1 = x12_2.b
                            *x9_8 = x10_5.b
                        
                        goto label_1099db8
                    
                    uint32_t x11_1 = zx.d(*x8_6)
                    x8_6 -= 1
                    
                    if (x11_1 u< x10_2)
                        *x19 = x11_1.b
                        x8_5 = x8_6 + 1
                        *x8_5 = x9_4.b
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_5 = x20 - 1
            
            uint8_t* x24_1 = &x19[1]
            
            if (x24_1 u< x8_5)
                uint8_t* x9_5
                
                while (true)
                    uint32_t x10_3 = zx.d(*x23_2)
                    x9_5 = x24_1 - 1
                    uint32_t x11_2
                    
                    do
                        x9_5 = &x9_5[1]
                        x11_2 = zx.d(*x9_5)
                    while (x11_2 u< x10_3)
                    
                    x24_1 = &x9_5[1]
                    uint32_t x12_1
                    
                    do
                        x8_5 -= 1
                        x12_1 = zx.d(*x8_5)
                    while (x12_1 u>= x10_3)
                    
                    if (x9_5 u> x8_5)
                        break
                    
                    *x9_5 = x12_1.b
                    *x8_5 = x11_2.b
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_5)
                        x23_2 = x8_5
                
                x24_1 = x9_5
            
            if (x24_1 != x23_2)
                uint32_t x8_7 = zx.d(*x23_2)
                uint32_t x9_6 = zx.d(*x24_1)
                
                if (x8_7 u< x9_6)
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = x8_7.b
                    *x23_2 = x9_6.b
            
            if (arg1.d != 0)
            label_1099f74:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<uint8_t, uint8_t>&, uint8_t*>(
                        &x24_1[1], x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<uint8_t, uint8_t>&, uint8_t*>(x19, x24_1, 
                    arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint8_t, uint8_t>&, uint8_t*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint8_t, uint8_t>&, uint8_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_1099f74
                    
                    continue
        
    label_109a2b0:
        SystemHintOp_BTI()
        return 
