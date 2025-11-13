// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_7greaterIfEEPfEEbT0_S5_T_
// 地址: 0xa06dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2
float v0
float v1
float v2

if (x8_1 u<= 5)
    switch (x8_1)
        case 0, 1
            return 1
        case 2
            v0 = arg2[-1]
            v1 = *arg1
            
            if (v0 <= v1)
                return 1
            
            *arg1 = v0
            arg2[-1] = v1
            return 1
        case 3
            v0 = *arg1
            v1 = arg1[1]
            v2 = arg2[-1]
            
            if (not(v1 <= v0))
                if (not(v2 <= v1))
                    *arg1 = v2
                    arg2[-1] = v0
                    return 1
                
                *arg1 = v1
                arg1[1] = v0
                v1 = arg2[-1]
                
                if (not(v1 <= v0))
                    arg1[1] = v1
                    arg2[-1] = v0
            else if (not(v2 <= v1))
                arg1[1] = v2
                arg2[-1] = v1
                v1 = *arg1
                v0 = arg1[1]
                
                if (not(v0 <= v1))
                    *arg1 = v0
                    arg1[1] = v1
            
            return 1
        case 4
            v1 = *arg1
            v0 = arg1[1]
            v2 = arg1[2]
            
            if (v0 <= v1)
                if (v2 <= v0)
                    v0 = v2
                label_a07060:
                    v1 = arg2[-1]
                    
                    if (not(v1 <= v0))
                    label_a0706c:
                        arg1[2] = v1
                        arg2[-1] = v0
                        v1 = arg1[1]
                        v0 = arg1[2]
                        
                        if (not(v0 <= v1))
                            v2 = *arg1
                            arg1[1] = v0
                            arg1[2] = v1
                            
                            if (not(v0 <= v2))
                                *arg1 = v0
                                arg1[1] = v2
                else
                    arg1[1] = v2
                    arg1[2] = v0
                    
                    if (v2 <= v1)
                        goto label_a07060
                    
                    *arg1 = v2
                    arg1[1] = v1
                    v1 = arg2[-1]
                    
                    if (v1 > v0)
                        goto label_a0706c
            else if (v2 <= v0)
                *arg1 = v0
                arg1[1] = v1
                
                if (not(v2 <= v1))
                    arg1[1] = v2
                    goto label_a06f98
                
                v0 = v2
                v1 = arg2[-1]
                
                if (v1 > v0)
                    goto label_a0706c
            else
                *arg1 = v2
            label_a06f98:
                v0 = v1
                arg1[2] = v1
                v1 = arg2[-1]
                
                if (v1 > v0)
                    goto label_a0706c
            
            return 1
        case 5
            sub_a06bfc(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 4)
            return 1
    
    return 

v1 = *arg1
v0 = arg1[1]
v2 = arg1[2]
float* x9

if (v0 <= v1)
    if (v2 <= v0)
        v0 = v2
    label_a06fc0:
        x9 = &arg1[3]
        
        if (x9 == arg2)
            return (1 | x9.b) & 1
    else
        arg1[1] = v2
        arg1[2] = v0
        
        if (v2 <= v1)
            goto label_a06fc0
        
        *arg1 = v2
        arg1[1] = v1
        x9 = &arg1[3]
        
        if (x9 == arg2)
            return (1 | x9.b) & 1
else if (v2 <= v0)
    *arg1 = v0
    arg1[1] = v1
    
    if (not(v2 <= v1))
        arg1[1] = v2
        goto label_a06f48
    
    v0 = v2
    x9 = &arg1[3]
    
    if (x9 == arg2)
        return (1 | x9.b) & 1
else
    *arg1 = v2
label_a06f48:
    v0 = v1
    arg1[2] = v1
    x9 = &arg1[3]
    
    if (x9 == arg2)
        return (1 | x9.b) & 1

int32_t x8_3 = 0
int64_t x10_2 = 0xc
v1 = *x9

if (not(v1 <= v0))
    goto label_a06ffc

while (true)
    if (&x9[1] == arg2)
        return (1 | x9.b) & 1
    
    v0 = *x9
    x10_2 += 4
    x9 = &x9[1]
    v1 = *x9
    
    if (not(v1 <= v0))
    label_a06ffc:
    label_a07000:
        *(arg1 + x10_2) = v0
        float* x11_4
        
        if (x10_2 == 4)
            x11_4 = arg1
        else
            if (v1 > *(arg1 + x10_2 - 8))
                break
            
            x11_4 = arg1 + x10_2 - 4
        
        x8_3 += 1
        *x11_4 = v1
        
        if (x8_3 == 8)
            return (&x9[1] == arg2 ? 1 : 0).b & 1
