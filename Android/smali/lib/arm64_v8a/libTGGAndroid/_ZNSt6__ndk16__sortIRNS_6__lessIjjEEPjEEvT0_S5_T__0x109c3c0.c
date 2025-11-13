// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_
// 地址: 0x109c3c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t* x20 = arg2
uint32_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109c3f4:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    uint32_t x8_11 = x20[-1]
                    uint32_t x9_11 = *x19
                    
                    if (x8_11 u< x9_11)
                        *x19 = x8_11
                        x20[-1] = x9_11
                case 3
                    SystemHintOp_BTI()
                    uint32_t x8_12 = *x19
                    uint32_t x9_12 = x19[1]
                    uint32_t x10_10 = x20[-1]
                    
                    if (x9_12 u>= x8_12)
                        if (x10_10 u< x9_12)
                            x19[1] = x10_10
                            x20[-1] = x9_12
                            uint32_t x9_16 = *x19
                            uint32_t x8_16 = x19[1]
                            
                            if (x8_16 u< x9_16)
                                *x19 = x8_16
                                x19[1] = x9_16
                    else if (x10_10 u>= x9_12)
                        *x19 = x9_12
                        x19[1] = x8_12
                        int32_t x9_17 = x20[-1]
                        
                        if (x9_17 u< x8_12)
                            x19[1] = x9_17
                            x20[-1] = x8_12
                    else
                        *x19 = x10_10
                        x20[-1] = x8_12
                case 4
                    SystemHintOp_BTI()
                    uint32_t x9_13 = *x19
                    uint32_t x8_13 = x19[1]
                    uint32_t x10_11 = x19[2]
                    
                    if (x8_13 u>= x9_13)
                        if (x10_11 u>= x8_13)
                            x8_13 = x10_11
                        else
                            x19[1] = x10_11
                            x19[2] = x8_13
                            
                            if (x10_11 u< x9_13)
                                *x19 = x10_11
                                x19[1] = x9_13
                    else if (x10_11 u>= x8_13)
                        *x19 = x8_13
                        x19[1] = x9_13
                        
                        if (x10_11 u>= x9_13)
                            x8_13 = x10_11
                        else
                            x19[1] = x10_11
                            x8_13 = x9_13
                            x19[2] = x9_13
                    else
                        *x19 = x10_11
                        x8_13 = x9_13
                        x19[2] = x9_13
                    
                    int32_t x9_18 = x20[-1]
                    
                    if (x9_18 u< x8_13)
                        x19[2] = x9_18
                        x20[-1] = x8_13
                        int32_t x9_19 = x19[1]
                        uint32_t x8_17 = x19[2]
                        
                        if (x8_17 u< x9_19)
                            uint32_t x10_14 = *x19
                            x19[1] = x8_17
                            x19[2] = x9_19
                            
                            if (x8_17 u< x10_14)
                                *x19 = x8_17
                                x19[1] = x10_14
                case 5
                    SystemHintOp_BTI()
                    return sub_109c8ec(x19, &x19[1], &x19[2], &x19[3], x20 - 4) __tailcall
        else if (x9_1 s<= 0x7b)
            uint32_t x9_15 = *x19
            uint32_t x8_15 = x19[1]
            uint32_t x10_13 = x19[2]
            
            if (x8_15 u>= x9_15)
                if (x10_13 u>= x8_15)
                    x8_15 = x10_13
                else
                    x19[1] = x10_13
                    x19[2] = x8_15
                    
                    if (x10_13 u< x9_15)
                        *x19 = x10_13
                        x19[1] = x9_15
            else if (x10_13 u>= x8_15)
                *x19 = x8_15
                x19[1] = x9_15
                
                if (x10_13 u>= x9_15)
                    x8_15 = x10_13
                else
                    x19[1] = x10_13
                    x8_15 = x9_15
                    x19[2] = x9_15
            else
                *x19 = x10_13
                x8_15 = x9_15
                x19[2] = x9_15
            
            uint32_t* x10_15 = &x19[3]
            
            if (x10_15 != x20)
                int64_t x9_20 = 0xc
                
                while (true)
                    uint32_t x11_7 = *x10_15
                    
                    if (x11_7 u< x8_15)
                        int64_t x13_1 = x9_20
                        void* x8_19
                        
                        while (true)
                            int64_t x12_3 = x13_1 - 4
                            *(x19 + x13_1) = x8_15
                            
                            if (x13_1 == 4)
                                x8_19 = x19
                                break
                            
                            x8_15 = *(x19 + x13_1 - 8)
                            x13_1 = x12_3
                            
                            if (x11_7 u>= x8_15)
                                x8_19 = x19 + x12_3
                                break
                        
                        *x8_19 = x11_7
                    
                    if (&x10_15[1] == x20)
                        break
                    
                    x8_15 = *x10_15
                    x9_20 += 4
                    x10_15 = &x10_15[1]
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 1 & 0xfffffffffffffffc)
            
            if (x9_1 s< 0xf9d)
                uint32_t x9_3 = *x23_2
                uint32_t x8_4 = *x19
                uint32_t x10_4 = *(x20 - 4)
                
                if (x9_3 u>= x8_4)
                    if (x10_4 u>= x9_3)
                        arg1 = nullptr
                    else
                        *x23_2 = x10_4
                        *(x20 - 4) = x9_3
                        uint32_t x8_5 = *x23_2
                        uint32_t x9_4 = *x19
                        
                        if (x8_5 u>= x9_4)
                            arg1 = 1
                        else
                            *x19 = x8_5
                            *x23_2 = x9_4
                            arg1 = 2
                else if (x10_4 u>= x9_3)
                    *x19 = x9_3
                    *x23_2 = x8_4
                    int32_t x9_5 = *(x20 - 4)
                    
                    if (x9_5 u>= x8_4)
                        arg1 = 1
                    else
                        *x23_2 = x9_5
                        *(x20 - 4) = x8_4
                        arg1 = 2
                else
                    *x19 = x10_4
                    *(x20 - 4) = x8_4
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                arg1 = sub_109c8ec(x19, x19 + x8_3, x23_2, x23_2 + x8_3, x20 - 4)
            
            uint32_t x9_6 = *x19
            int32_t x10_5 = *x23_2
            void* x8_6
            
            if (x9_6 u>= x10_5)
                void* x8_7 = x20 - 8
                
                while (true)
                    if (x19 == x8_7)
                        int32_t x10_7 = *(x20 - 4)
                        void* x8_10 = &x19[1]
                        
                        if (x9_6 u>= x10_7)
                            if (x8_10 == x20 - 4)
                                goto label_109c8cc
                            
                            x8_10 = &x19[2]
                            
                            while (true)
                                int32_t x11_3 = *(x8_10 - 4)
                                
                                if (x9_6 u< x11_3)
                                    *(x8_10 - 4) = x10_7
                                    *(x20 - 4) = x11_3
                                    break
                                
                                x8_10 += 4
                                
                                if (x20 == x8_10)
                                    goto label_109c8cc
                        
                        if (x8_10 == x20 - 4)
                            goto label_109c8cc
                        
                        void* x9_10 = x20 - 4
                        
                        while (true)
                            uint32_t x11_4 = *x19
                            int32_t x10_8
                            
                            do
                                x10_8 = *x8_10
                                x8_10 += 4
                            while (x11_4 u>= x10_8)
                            
                            x23_1 = x8_10 - 4
                            int32_t x12_2
                            
                            do
                                x9_10 -= 4
                                x12_2 = *x9_10
                            while (x11_4 u< x12_2)
                            
                            if (x23_1 u>= x9_10)
                                break
                            
                            *x23_1 = x12_2
                            *x9_10 = x10_8
                        
                        goto label_109c3f4
                    
                    uint32_t x11_1 = *x8_7
                    x8_7 -= 4
                    
                    if (x11_1 u< x10_5)
                        *x19 = x11_1
                        x8_6 = x8_7 + 4
                        *x8_6 = x9_6
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_6 = x20 - 4
            
            uint32_t* x24_1 = &x19[1]
            
            if (x24_1 u< x8_6)
                void* x9_7
                
                while (true)
                    int32_t x10_6 = *x23_2
                    x9_7 = x24_1 - 4
                    int32_t x11_2
                    
                    do
                        x9_7 += 4
                        x11_2 = *x9_7
                    while (x11_2 u< x10_6)
                    
                    x24_1 = x9_7 + 4
                    int32_t x12_1
                    
                    do
                        x8_6 -= 4
                        x12_1 = *x8_6
                    while (x12_1 u>= x10_6)
                    
                    if (x9_7 u> x8_6)
                        break
                    
                    *x9_7 = x12_1
                    *x8_6 = x11_2
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_7)
                        x23_2 = x8_6
                
                x24_1 = x9_7
            
            if (x24_1 != x23_2)
                uint32_t x8_8 = *x23_2
                uint32_t x9_8 = *x24_1
                
                if (x8_8 u< x9_8)
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = x8_8
                    *x23_2 = x9_8
            
            if (arg1.d != 0)
            label_109c5d0:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<uint32_t, uint32_t>&, uint32_t*>(
                        &x24_1[1], x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<uint32_t, uint32_t>&, uint32_t*>(x19, 
                    x24_1, arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint32_t, uint32_t>&, uint32_t*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint32_t, uint32_t>&, uint32_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109c5d0
                    
                    continue
        
    label_109c8cc:
        SystemHintOp_BTI()
        return 
