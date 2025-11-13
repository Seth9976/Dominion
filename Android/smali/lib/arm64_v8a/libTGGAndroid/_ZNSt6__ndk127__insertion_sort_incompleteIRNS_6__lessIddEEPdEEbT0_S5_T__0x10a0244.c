// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIddEEPdEEbT0_S5_T_
// 地址: 0x10a0244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 3
char x8_2
double v0
double v1
double v2

if (x8_1 u> 5)
    v1 = *arg1
    v0 = arg1[1]
    v2 = arg1[2]
    
    if (v0 >= v1)
        if (v2 >= v0)
            v0 = v2
        else
            arg1[1] = v2
            arg1[2] = v0
            
            if (not(v2 >= v1))
                *arg1 = v2
                arg1[1] = v1
    else if (v2 >= v0)
        *arg1 = v0
        arg1[1] = v1
        
        if (v2 >= v1)
            v0 = v2
        else
            arg1[1] = v2
            v0 = v1
            arg1[2] = v1
    else
        *arg1 = v2
        v0 = v1
        arg1[2] = v1
    
    double* x9_1 = &arg1[3]
    char x8_5
    
    if (x9_1 == arg2)
    label_10a0420:
        x8_5 = 1
    else
        int32_t x8_4 = 0
        int64_t x10_2 = 0x18
        
        while (true)
            v1 = *x9_1
            
            if (not(v1 >= v0))
                int64_t x11_2 = x10_2
                double* x11_4
                
                while (true)
                    int64_t x12_1 = x11_2 - 8
                    *(arg1 + x11_2) = v0
                    
                    if (x11_2 == 8)
                        x11_4 = arg1
                        break
                    
                    v0 = *(arg1 + x11_2 - 0x10)
                    x11_2 = x12_1
                    
                    if (not(v1 < v0))
                        x11_4 = arg1 + x12_1
                        break
                
                x8_4 += 1
                *x11_4 = v1
                
                if (x8_4 == 8)
                    x8_5 = 0
                    x9_1 = zx.q(&x9_1[1] == arg2 ? 1 : 0)
                    break
            
            if (&x9_1[1] == arg2)
                goto label_10a0420
            
            v0 = *x9_1
            x10_2 += 8
            x9_1 = &x9_1[1]
    
    x8_2 = x8_5 | x9_1.b
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            SystemHintOp_BTI()
            v0 = arg2[-1]
            v1 = *arg1
            
            if (not(v0 >= v1))
                *arg1 = v0
                arg2[-1] = v1
            
            x8_2 = 1
        case 3
            SystemHintOp_BTI()
            v0 = *arg1
            v1 = arg1[1]
            v2 = arg2[-1]
            
            if (v1 >= v0)
                if (not(v2 >= v1))
                    arg1[1] = v2
                    arg2[-1] = v1
                    v1 = *arg1
                    v0 = arg1[1]
                    
                    if (not(v0 >= v1))
                        *arg1 = v0
                        arg1[1] = v1
            else if (v2 >= v1)
                *arg1 = v1
                arg1[1] = v0
                v1 = arg2[-1]
                
                if (not(v1 >= v0))
                    arg1[1] = v1
                    arg2[-1] = v0
            else
                *arg1 = v2
                arg2[-1] = v0
            
            x8_2 = 1
        case 4
            SystemHintOp_BTI()
            v1 = *arg1
            v0 = arg1[1]
            v2 = arg1[2]
            
            if (v0 >= v1)
                if (v2 >= v0)
                    v0 = v2
                else
                    arg1[1] = v2
                    arg1[2] = v0
                    
                    if (not(v2 >= v1))
                        *arg1 = v2
                        arg1[1] = v1
            else if (v2 >= v0)
                *arg1 = v0
                arg1[1] = v1
                
                if (v2 >= v1)
                    v0 = v2
                else
                    arg1[1] = v2
                    v0 = v1
                    arg1[2] = v1
            else
                *arg1 = v2
                v0 = v1
                arg1[2] = v1
            
            v1 = arg2[-1]
            
            if (not(v1 >= v0))
                arg1[2] = v1
                arg2[-1] = v0
                v1 = arg1[1]
                v0 = arg1[2]
                
                if (not(v0 >= v1))
                    v2 = *arg1
                    arg1[1] = v0
                    arg1[2] = v1
                    
                    if (not(v0 >= v2))
                        *arg1 = v0
                        arg1[1] = v2
            
            x8_2 = 1
        case 5
            SystemHintOp_BTI()
            sub_10a00b8(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 8)
            x8_2 = 1
SystemHintOp_BTI()
return x8_2 & 1
