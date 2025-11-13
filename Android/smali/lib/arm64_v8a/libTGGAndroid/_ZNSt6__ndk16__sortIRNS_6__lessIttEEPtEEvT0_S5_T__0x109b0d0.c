// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIttEEPtEEvT0_S5_T_
// 地址: 0x109b0d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint16_t* x20 = arg2
uint16_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109b104:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 1
        x19 = x23_1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    SystemHintOp_BTI()
                    uint32_t x8_12 = zx.d(x20[-1])
                    uint32_t x9_11 = zx.d(*x19)
                    
                    if (x8_12 u< x9_11)
                        *x19 = x8_12.w
                        x20[-1] = x9_11.w
                case 3
                    SystemHintOp_BTI()
                    uint32_t x9_12 = zx.d(x19[1])
                    uint32_t x8_13 = zx.d(*x19)
                    uint32_t x10_9 = zx.d(x20[-1])
                    
                    if (x9_12 u>= x8_13)
                        if (x10_9 u< x9_12)
                            x19[1] = x10_9.w
                            x20[-1] = x9_12.w
                            uint32_t x8_17 = zx.d(x19[1])
                            uint32_t x9_16 = zx.d(*x19)
                            
                            if (x8_17 u< x9_16)
                                *x19 = x8_17.w
                                x19[1] = x9_16.w
                    else if (x10_9 u>= x9_12)
                        *x19 = x9_12.w
                        x19[1] = x8_13.w
                        uint32_t x9_17 = zx.d(x20[-1])
                        
                        if (x9_17 u< x8_13)
                            x19[1] = x9_17.w
                            x20[-1] = x8_13.w
                    else
                        *x19 = x10_9.w
                        x20[-1] = x8_13.w
                case 4
                    SystemHintOp_BTI()
                    uint32_t x8_14 = zx.d(x19[1])
                    uint32_t x9_13 = zx.d(*x19)
                    uint32_t x10_10 = zx.d(x19[2])
                    
                    if (x8_14 u>= x9_13)
                        if (x10_10 u>= x8_14)
                            x8_14 = x10_10
                        else
                            x19[1] = x10_10.w
                            x19[2] = x8_14.w
                            
                            if (x10_10 u< x9_13)
                                *x19 = x10_10.w
                                x19[1] = x9_13.w
                    else if (x10_10 u>= x8_14)
                        *x19 = x8_14.w
                        x19[1] = x9_13.w
                        
                        if (x10_10 u>= x9_13)
                            x8_14 = x10_10
                        else
                            x19[1] = x10_10.w
                            x8_14 = x9_13
                            x19[2] = x9_13.w
                    else
                        *x19 = x10_10.w
                        x8_14 = x9_13
                        x19[2] = x9_13.w
                    
                    uint32_t x9_18 = zx.d(x20[-1])
                    
                    if (x9_18 u< x8_14)
                        x19[2] = x9_18.w
                        x20[-1] = x8_14.w
                        uint32_t x8_18 = zx.d(x19[2])
                        uint32_t x9_19 = zx.d(x19[1])
                        
                        if (x8_18 u< x9_19)
                            uint32_t x10_13 = zx.d(*x19)
                            x19[1] = x8_18.w
                            x19[2] = x9_19.w
                            
                            if (x8_18 u< x10_13)
                                *x19 = x8_18.w
                                x19[1] = x10_13.w
                case 5
                    SystemHintOp_BTI()
                    return sub_109b638(x19, &x19[1], &x19[2], &x19[3], x20 - 2) __tailcall
        else if (x9_1 s<= 0x3d)
            uint32_t x8_16 = zx.d(x19[1])
            uint32_t x9_15 = zx.d(*x19)
            uint32_t x10_12 = zx.d(x19[2])
            
            if (x8_16 u>= x9_15)
                if (x10_12 u>= x8_16)
                    x8_16 = x10_12
                else
                    x19[1] = x10_12.w
                    x19[2] = x8_16.w
                    
                    if (x10_12 u< x9_15)
                        *x19 = x10_12.w
                        x19[1] = x9_15.w
            else if (x10_12 u>= x8_16)
                *x19 = x8_16.w
                x19[1] = x9_15.w
                
                if (x10_12 u>= x9_15)
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
                    uint32_t x11_7 = zx.d(*x10_14)
                    
                    if (x11_7 u< zx.d(x8_16.w))
                        int64_t x13_1 = x9_20
                        void* x8_20
                        
                        while (true)
                            int64_t x12_3 = x13_1 - 2
                            *(x19 + x13_1) = x8_16.w
                            
                            if (x13_1 == 2)
                                x8_20 = x19
                                break
                            
                            x8_16 = zx.d(*(x19 + x13_1 - 4))
                            x13_1 = x12_3
                            
                            if (x11_7 u>= x8_16)
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
                uint32_t x9_3 = zx.d(*x23_2)
                uint32_t x8_5 = zx.d(*x19)
                uint32_t x10_3 = zx.d(*(x20 - 2))
                
                if (x9_3 u>= x8_5)
                    if (x10_3 u>= x9_3)
                        arg1 = nullptr
                    else
                        *x23_2 = x10_3.w
                        *(x20 - 2) = x9_3.w
                        uint32_t x8_6 = zx.d(*x23_2)
                        uint32_t x9_4 = zx.d(*x19)
                        
                        if (x8_6 u>= x9_4)
                            arg1 = 1
                        else
                            *x19 = x8_6.w
                            *x23_2 = x9_4.w
                            arg1 = 2
                else if (x10_3 u>= x9_3)
                    *x19 = x9_3.w
                    *x23_2 = x8_5.w
                    uint32_t x9_5 = zx.d(*(x20 - 2))
                    
                    if (x9_5 u>= x8_5)
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
                
                arg1 = sub_109b638(x19, &x19[x8_2 s>> 2], x23_2, x23_2 + (x8_2 s>> 2 << 1), x20 - 2)
            
            uint32_t x9_6 = zx.d(*x19)
            uint32_t x10_4 = zx.d(*x23_2)
            void* x8_7
            
            if (x9_6 u>= x10_4)
                void* x8_8 = x20 - 4
                
                while (true)
                    if (x19 == x8_8)
                        uint32_t x10_6 = zx.d(*(x20 - 2))
                        void* x8_11 = &x19[1]
                        
                        if (x9_6 u>= x10_6)
                            if (x8_11 == x20 - 2)
                                goto label_109b618
                            
                            x8_11 = &x19[2]
                            
                            while (true)
                                uint32_t x11_3 = zx.d(*(x8_11 - 2))
                                
                                if (x9_6 u< x11_3)
                                    *(x8_11 - 2) = x10_6.w
                                    *(x20 - 2) = x11_3.w
                                    break
                                
                                x8_11 += 2
                                
                                if (x20 == x8_11)
                                    goto label_109b618
                        
                        if (x8_11 == x20 - 2)
                            goto label_109b618
                        
                        int16_t* x9_10 = x20 - 2
                        
                        while (true)
                            uint32_t x11_4 = zx.d(*x19)
                            uint32_t x10_7
                            
                            do
                                x10_7 = zx.d(*x8_11)
                                x8_11 += 2
                            while (x11_4 u>= x10_7)
                            
                            x23_1 = x8_11 - 2
                            uint32_t x12_2
                            
                            do
                                x9_10 = &x9_10[-1]
                                x12_2 = zx.d(*x9_10)
                            while (x11_4 u< x12_2)
                            
                            if (x23_1 u>= x9_10)
                                break
                            
                            *x23_1 = x12_2.w
                            *x9_10 = x10_7.w
                        
                        goto label_109b104
                    
                    uint32_t x11_1 = zx.d(*x8_8)
                    x8_8 -= 2
                    
                    if (x11_1 u< x10_4)
                        *x19 = x11_1.w
                        x8_7 = x8_8 + 2
                        *x8_7 = x9_6.w
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_7 = x20 - 2
            
            uint16_t* x24_1 = &x19[1]
            
            if (x24_1 u< x8_7)
                uint16_t* x9_7
                
                while (true)
                    uint32_t x10_5 = zx.d(*x23_2)
                    x9_7 = x24_1 - 2
                    uint32_t x11_2
                    
                    do
                        x9_7 = &x9_7[1]
                        x11_2 = zx.d(*x9_7)
                    while (x11_2 u< x10_5)
                    
                    x24_1 = &x9_7[1]
                    uint32_t x12_1
                    
                    do
                        x8_7 -= 2
                        x12_1 = zx.d(*x8_7)
                    while (x12_1 u>= x10_5)
                    
                    if (x9_7 u> x8_7)
                        break
                    
                    *x9_7 = x12_1.w
                    *x8_7 = x11_2.w
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_7)
                        x23_2 = x8_7
                
                x24_1 = x9_7
            
            if (x24_1 != x23_2)
                uint32_t x8_9 = zx.d(*x23_2)
                uint32_t x9_8 = zx.d(*x24_1)
                
                if (x8_9 u< x9_8)
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = x8_9.w
                    *x23_2 = x9_8.w
            
            if (arg1.d != 0)
            label_109b2e0:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<uint16_t, uint16_t>&, uint16_t*>(
                        &x24_1[1], x20, arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<uint16_t, uint16_t>&, uint16_t*>(x19, 
                    x24_1, arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint16_t, uint16_t>&, uint16_t*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<uint16_t, uint16_t>&, uint16_t*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109b2e0
                    
                    continue
        
    label_109b618:
        SystemHintOp_BTI()
        return 
