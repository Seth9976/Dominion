// 函数: _ZNSt6__ndk16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_
// 地址: 0x109f23c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float* x20 = arg2
float* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_109f270:
        int64_t x9_1 = x20 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x19 = x23_1
        float v0
        float v1
        float v2
        
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
                    return sub_109f768(x19, &x19[1], &x19[2], &x19[3], x20 - 4) __tailcall
        else if (x9_1 s<= 0x7b)
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
            
            float* x8_9 = &x19[3]
            
            if (x8_9 != x20)
                int64_t x9_6 = 0xc
                
                while (true)
                    v1 = *x8_9
                    
                    if (not(v1 >= v0))
                        int64_t x10_5 = x9_6
                        float* x10_7
                        
                        while (true)
                            int64_t x11_2 = x10_5 - 4
                            *(x19 + x10_5) = v0
                            
                            if (x10_5 == 4)
                                x10_7 = x19
                                break
                            
                            v0 = *(x19 + x10_5 - 8)
                            x10_5 = x11_2
                            
                            if (not(v1 < v0))
                                x10_7 = x19 + x11_2
                                break
                        
                        *x10_7 = v1
                    
                    if (&x8_9[1] == x20)
                        break
                    
                    v0 = *x8_9
                    x9_6 += 4
                    x8_9 = &x8_9[1]
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* x23_2 = x19 + (x10_1 << 1 & 0xfffffffffffffffc)
            
            if (x9_1 s< 0xf9d)
                v1 = *x23_2
                v0 = *x19
                v2 = *(x20 - 4)
                
                if (v1 >= v0)
                    if (v2 >= v1)
                        arg1 = nullptr
                    else
                        *x23_2 = v2
                        *(x20 - 4) = v1
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
                    v1 = *(x20 - 4)
                    
                    if (v1 >= v0)
                        arg1 = 1
                    else
                        *x23_2 = v1
                        *(x20 - 4) = v0
                        arg1 = 2
                else
                    *x19 = v2
                    *(x20 - 4) = v0
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                arg1 = sub_109f768(x19, x19 + x8_3, x23_2, x23_2 + x8_3, x20 - 4)
            
            v0 = *x19
            v1 = *x23_2
            void* x8_4
            
            if (v0 >= v1)
                void* x8_5 = x20 - 8
                
                while (true)
                    if (x19 == x8_5)
                        v1 = *(x20 - 4)
                        void* x8_7 = &x19[1]
                        
                        if (not(v0 < v1))
                            if (x8_7 == x20 - 4)
                                goto label_109f748
                            
                            x8_7 = &x19[2]
                            
                            while (true)
                                v2 = *(x8_7 - 4)
                                
                                if (v0 < v2)
                                    *(x8_7 - 4) = v1
                                    *(x20 - 4) = v2
                                    break
                                
                                x8_7 += 4
                                
                                if (x20 == x8_7)
                                    goto label_109f748
                        
                        if (x8_7 == x20 - 4)
                            goto label_109f748
                        
                        void* x9_5 = x20 - 4
                        
                        while (true)
                            v1 = *x19
                            
                            do
                                v0 = *x8_7
                                x8_7 += 4
                            while (v1 >= v0)
                            
                            x23_1 = x8_7 - 4
                            
                            do
                                x9_5 -= 4
                                v2 = *x9_5
                            while (v1 < v2)
                            
                            if (x23_1 u>= x9_5)
                                break
                            
                            *x23_1 = v2
                            *x9_5 = v0
                        
                        goto label_109f270
                    
                    v2 = *x8_5
                    x8_5 -= 4
                    
                    if (not(v2 >= v1))
                        *x19 = v2
                        x8_4 = x8_5 + 4
                        *x8_4 = v0
                        arg1 = zx.q(arg1.d + 1)
                        break
            else
                x8_4 = x20 - 4
            
            float* x24_1 = &x19[1]
            
            if (x24_1 u< x8_4)
                void* x9_3
                
                while (true)
                    v0 = *x23_2
                    x9_3 = x24_1 - 4
                    
                    do
                        x9_3 += 4
                        v1 = *x9_3
                    while (v1 < v0)
                    
                    x24_1 = x9_3 + 4
                    
                    do
                        x8_4 -= 4
                        v2 = *x8_4
                    while (v2 >= v0)
                    
                    if (x9_3 u> x8_4)
                        break
                    
                    *x9_3 = v2
                    *x8_4 = v1
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_3)
                        x23_2 = x8_4
                
                x24_1 = x9_3
            
            if (x24_1 != x23_2)
                v0 = *x23_2
                v1 = *x24_1
                
                if (not(v0 >= v1))
                    arg1 = zx.q(arg1.d + 1)
                    *x24_1 = v0
                    *x23_2 = v1
            
            if (arg1.d != 0)
            label_109f44c:
                
                if (x24_1 - x19 s>= x20 - x24_1)
                    std::__ndk1::__sort<std::__ndk1::__less<float, float>&, float*>(&x24_1[1], x20, 
                        arg3)
                    x20 = x24_1
                    break
                
                std::__ndk1::__sort<std::__ndk1::__less<float, float>&, float*>(x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                continue
            else
                int32_t x0_2 = std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<float, float>&, float*>(
                    x19, x24_1, arg3)
                x23_1 = &x24_1[1]
                
                if ((std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<float, float>&, float*>(
                        x23_1, x20, arg3).d & 1) != 0)
                    x20 = x24_1
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_109f44c
                    
                    continue
    label_109f748:
        SystemHintOp_BTI()
        return 
