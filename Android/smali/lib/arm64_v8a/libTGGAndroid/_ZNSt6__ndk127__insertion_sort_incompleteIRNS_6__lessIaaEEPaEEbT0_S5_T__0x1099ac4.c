// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIaaEEPaEEbT0_S5_T_
// 地址: 0x1099ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2 - arg1
char x8_1

if (x8 u> 5)
    int32_t x8_3 = sx.d(arg1[1])
    int32_t x9_2 = sx.d(*arg1)
    int32_t x10_1 = sx.d(arg1[2])
    
    if (x8_3 s>= x9_2)
        if (x10_1 s>= x8_3)
            x8_3 = x10_1
        else
            arg1[1] = x10_1.b
            arg1[2] = x8_3.b
            
            if (x10_1 s< x9_2)
                *arg1 = x10_1.b
                arg1[1] = x9_2.b
    else if (x10_1 s>= x8_3)
        *arg1 = x8_3.b
        arg1[1] = x9_2.b
        
        if (x10_1 s>= x9_2)
            x8_3 = x10_1
        else
            arg1[1] = x10_1.b
            x8_3 = x9_2
            arg1[2] = x9_2.b
    else
        *arg1 = x10_1.b
        x8_3 = x9_2
        arg1[2] = x9_2.b
    
    void* x9_6 = &arg1[3]
    char x8_11
    
    if (x9_6 == arg2)
    label_1099cc8:
        x8_11 = 1
    else
        int64_t x10_4 = 0
        int32_t x11_2 = 0
        
        while (true)
            int32_t x12_1 = sx.d(*x9_6)
            
            if (x12_1 s< sx.d(x8_3.b))
                int64_t x13_1 = x10_4
                char* x8_9
                
                while (true)
                    void* x14_1 = &arg1[x13_1]
                    *(x14_1 + 3) = x8_3.b
                    
                    if (x13_1 == -2)
                        x8_9 = arg1
                        break
                    
                    x8_3 = sx.d(*(x14_1 + 1))
                    x13_1 -= 1
                    
                    if (x12_1 s>= x8_3)
                        x8_9 = &arg1[x13_1 + 3]
                        break
                
                x11_2 += 1
                *x8_9 = x12_1.b
                
                if (x11_2 == 8)
                    x8_11 = 0
                    x9_6 = zx.q(x9_6 + 1 == arg2 ? 1 : 0)
                    break
            
            if (x9_6 + 1 == arg2)
                goto label_1099cc8
            
            x8_3 = zx.d(*x9_6)
            x10_4 += 1
            x9_6 += 1
    
    x8_1 = x8_11 | x9_6.b
else
    x8_1 = 1
    
    switch (x8)
        case 2
            SystemHintOp_BTI()
            int32_t x8_2 = sx.d(arg2[-1])
            int32_t x9_1 = sx.d(*arg1)
            
            if (x8_2 s< x9_1)
                *arg1 = x8_2.b
                arg2[-1] = x9_1.b
            
            x8_1 = 1
        case 3
            SystemHintOp_BTI()
            int32_t x9_3 = sx.d(arg1[1])
            int32_t x8_4 = sx.d(*arg1)
            int32_t x10_2 = sx.d(arg2[-1])
            
            if (x9_3 s>= x8_4)
                if (x10_2 s< x9_3)
                    arg1[1] = x10_2.b
                    arg2[-1] = x9_3.b
                    int32_t x8_7 = sx.d(arg1[1])
                    int32_t x9_5 = sx.d(*arg1)
                    
                    if (x8_7 s< x9_5)
                        *arg1 = x8_7.b
                        arg1[1] = x9_5.b
            else if (x10_2 s>= x9_3)
                *arg1 = x9_3.b
                arg1[1] = x8_4.b
                int32_t x9_7 = sx.d(arg2[-1])
                
                if (x9_7 s< x8_4)
                    arg1[1] = x9_7.b
                    arg2[-1] = x8_4.b
            else
                *arg1 = x10_2.b
                arg2[-1] = x8_4.b
            
            x8_1 = 1
        case 4
            SystemHintOp_BTI()
            int32_t x8_6 = sx.d(arg1[1])
            int32_t x9_4 = sx.d(*arg1)
            int32_t x10_3 = sx.d(arg1[2])
            
            if (x8_6 s>= x9_4)
                if (x10_3 s>= x8_6)
                    x8_6 = x10_3
                else
                    arg1[1] = x10_3.b
                    arg1[2] = x8_6.b
                    
                    if (x10_3 s< x9_4)
                        *arg1 = x10_3.b
                        arg1[1] = x9_4.b
            else if (x10_3 s>= x8_6)
                *arg1 = x8_6.b
                arg1[1] = x9_4.b
                
                if (x10_3 s>= x9_4)
                    x8_6 = x10_3
                else
                    arg1[1] = x10_3.b
                    x8_6 = x9_4
                    arg1[2] = x9_4.b
            else
                *arg1 = x10_3.b
                x8_6 = x9_4
                arg1[2] = x9_4.b
            
            int32_t x9_8 = sx.d(arg2[-1])
            
            if (x9_8 s< x8_6)
                arg1[2] = x9_8.b
                arg2[-1] = x8_6.b
                int32_t x8_10 = sx.d(arg1[2])
                int32_t x9_9 = sx.d(arg1[1])
                
                if (x8_10 s< x9_9)
                    int32_t x10_5 = sx.d(*arg1)
                    arg1[1] = x8_10.b
                    arg1[2] = x9_9.b
                    
                    if (x8_10 s< x10_5)
                        *arg1 = x8_10.b
                        arg1[1] = x10_5.b
            
            x8_1 = 1
        case 5
            SystemHintOp_BTI()
            sub_1099938(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 1)
            x8_1 = 1

SystemHintOp_BTI()
return x8_1 & 1
