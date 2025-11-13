// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIxxEEPxEEbT0_S5_T_
// 地址: 0x109e668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 3
char x8_2

if (x8_1 u> 5)
    int64_t x9_2 = *arg1
    int64_t x8_4 = arg1[1]
    int64_t x10_1 = arg1[2]
    
    if (x8_4 s>= x9_2)
        if (x10_1 s>= x8_4)
            x8_4 = x10_1
        else
            arg1[1] = x10_1
            arg1[2] = x8_4
            
            if (x10_1 s< x9_2)
                *arg1 = x10_1
                arg1[1] = x9_2
    else if (x10_1 s>= x8_4)
        *arg1 = x8_4
        arg1[1] = x9_2
        
        if (x10_1 s>= x9_2)
            x8_4 = x10_1
        else
            arg1[1] = x10_1
            x8_4 = x9_2
            arg1[2] = x9_2
    else
        *arg1 = x10_1
        x8_4 = x9_2
        arg1[2] = x9_2
    
    void* x10_4 = &arg1[3]
    char x8_12
    
    if (x10_4 == arg2)
    label_109e844:
        x8_12 = 1
    else
        x9_2 = 0
        int64_t x11_2 = 0x18
        
        while (true)
            int64_t x12_1 = *x10_4
            
            if (x12_1 s< x8_4)
                int64_t x14_1 = x11_2
                void* x8_10
                
                while (true)
                    int64_t x13_1 = x14_1 - 8
                    *(arg1 + x14_1) = x8_4
                    
                    if (x14_1 == 8)
                        x8_10 = arg1
                        break
                    
                    x8_4 = *(arg1 + x14_1 - 0x10)
                    x14_1 = x13_1
                    
                    if (x12_1 s>= x8_4)
                        x8_10 = arg1 + x13_1
                        break
                
                x9_2 = zx.q(x9_2.d + 1)
                *x8_10 = x12_1
                
                if (x9_2.d == 8)
                    x8_12 = 0
                    x9_2 = zx.q(x10_4 + 8 == arg2 ? 1 : 0)
                    break
            
            if (x10_4 + 8 == arg2)
                goto label_109e844
            
            x8_4 = *x10_4
            x11_2 += 8
            x10_4 += 8
    
    x8_2 = x8_12 | x9_2.b
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            SystemHintOp_BTI()
            int64_t x8_3 = arg2[-1]
            int64_t x9_1 = *arg1
            
            if (x8_3 s< x9_1)
                *arg1 = x8_3
                arg2[-1] = x9_1
            
            x8_2 = 1
        case 3
            SystemHintOp_BTI()
            int64_t x8_5 = *arg1
            int64_t x9_3 = arg1[1]
            int64_t x10_2 = arg2[-1]
            
            if (x9_3 s>= x8_5)
                if (x10_2 s< x9_3)
                    arg1[1] = x10_2
                    arg2[-1] = x9_3
                    int64_t x9_5 = *arg1
                    int64_t x8_8 = arg1[1]
                    
                    if (x8_8 s< x9_5)
                        *arg1 = x8_8
                        arg1[1] = x9_5
            else if (x10_2 s>= x9_3)
                *arg1 = x9_3
                arg1[1] = x8_5
                int64_t x9_6 = arg2[-1]
                
                if (x9_6 s< x8_5)
                    arg1[1] = x9_6
                    arg2[-1] = x8_5
            else
                *arg1 = x10_2
                arg2[-1] = x8_5
            
            x8_2 = 1
        case 4
            SystemHintOp_BTI()
            int64_t x9_4 = *arg1
            int64_t x8_7 = arg1[1]
            int64_t x10_3 = arg1[2]
            
            if (x8_7 s>= x9_4)
                if (x10_3 s>= x8_7)
                    x8_7 = x10_3
                else
                    arg1[1] = x10_3
                    arg1[2] = x8_7
                    
                    if (x10_3 s< x9_4)
                        *arg1 = x10_3
                        arg1[1] = x9_4
            else if (x10_3 s>= x8_7)
                *arg1 = x8_7
                arg1[1] = x9_4
                
                if (x10_3 s>= x9_4)
                    x8_7 = x10_3
                else
                    arg1[1] = x10_3
                    x8_7 = x9_4
                    arg1[2] = x9_4
            else
                *arg1 = x10_3
                x8_7 = x9_4
                arg1[2] = x9_4
            
            int64_t x9_7 = arg2[-1]
            
            if (x9_7 s< x8_7)
                arg1[2] = x9_7
                arg2[-1] = x8_7
                int64_t x9_8 = arg1[1]
                int64_t x8_11 = arg1[2]
                
                if (x8_11 s< x9_8)
                    int64_t x10_5 = *arg1
                    arg1[1] = x8_11
                    arg1[2] = x9_8
                    
                    if (x8_11 s< x10_5)
                        *arg1 = x8_11
                        arg1[1] = x10_5
            
            x8_2 = 1
        case 5
            SystemHintOp_BTI()
            sub_109e4dc(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 8)
            x8_2 = 1

SystemHintOp_BTI()
return x8_2 & 1
