// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessI11DomCardEnumS2_EEPS2_EEbT0_S6_T_
// 地址: 0xc10984
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2

if (x8_1 u<= 5)
    switch (x8_1)
        case 0, 1
            return 1
        case 2
            int32_t x8_3 = *(arg2 - 4)
            int32_t x9_1 = *arg1
            
            if (x8_3 s>= x9_1)
                return 1
            
            *arg1 = x8_3
            *(arg2 - 4) = x9_1
            return 1
        case 3
            int32_t x8_4 = *arg1
            int32_t x9_2 = *(arg1 + 4)
            int32_t x10_2 = *(arg2 - 4)
            
            if (x9_2 s< x8_4)
                if (x10_2 s< x9_2)
                    *arg1 = x10_2
                    *(arg2 - 4) = x8_4
                    return 1
                
                *arg1 = x9_2
                *(arg1 + 4) = x8_4
                int32_t x9_6 = *(arg2 - 4)
                
                if (x9_6 s< x8_4)
                    *(arg1 + 4) = x9_6
                    *(arg2 - 4) = x8_4
            else if (x10_2 s< x9_2)
                *(arg1 + 4) = x10_2
                *(arg2 - 4) = x9_2
                int32_t x9_4 = *arg1
                int32_t x8_7 = *(arg1 + 4)
                
                if (x8_7 s< x9_4)
                    *arg1 = x8_7
                    *(arg1 + 4) = x9_4
            
            return 1
        case 4
            int32_t x9_3 = *arg1
            int32_t x8_6 = *(arg1 + 4)
            int32_t x10_3 = *(arg1 + 8)
            int32_t x9_5
            
            if (x8_6 s>= x9_3)
                if (x10_3 s>= x8_6)
                    x8_6 = x10_3
                label_c10c1c:
                    x9_5 = *(arg2 - 4)
                    
                    if (x9_5 s< x8_6)
                    label_c10c28:
                        *(arg1 + 8) = x9_5
                        *(arg2 - 4) = x8_6
                        int32_t x9_7 = *(arg1 + 4)
                        int32_t x8_11 = *(arg1 + 8)
                        
                        if (x8_11 s< x9_7)
                            int32_t x10_5 = *arg1
                            *(arg1 + 4) = x8_11
                            *(arg1 + 8) = x9_7
                            
                            if (x8_11 s< x10_5)
                                *arg1 = x8_11
                                *(arg1 + 4) = x10_5
                else
                    *(arg1 + 4) = x10_3
                    *(arg1 + 8) = x8_6
                    
                    if (x10_3 s>= x9_3)
                        goto label_c10c1c
                    
                    *arg1 = x10_3
                    *(arg1 + 4) = x9_3
                    x9_5 = *(arg2 - 4)
                    
                    if (x9_5 s< x8_6)
                        goto label_c10c28
            else if (x10_3 s>= x8_6)
                *arg1 = x8_6
                *(arg1 + 4) = x9_3
                
                if (x10_3 s< x9_3)
                    *(arg1 + 4) = x10_3
                    goto label_c10b54
                
                x8_6 = x10_3
                x9_5 = *(arg2 - 4)
                
                if (x9_5 s< x8_6)
                    goto label_c10c28
            else
                *arg1 = x10_3
            label_c10b54:
                x8_6 = x9_3
                *(arg1 + 8) = x9_3
                x9_5 = *(arg2 - 4)
                
                if (x9_5 s< x8_6)
                    goto label_c10c28
            return 1
        case 5
            sub_c107b8(arg1, arg1 + 4, arg1 + 8, arg1 + 0xc, arg2 - 4)
            return 1
    
    return 

int32_t x9 = *arg1
int32_t x8_2 = *(arg1 + 4)
int32_t x10_1 = *(arg1 + 8)
void* __offset(DomCardEnum, 0xc) x10_4

if (x8_2 s>= x9)
    if (x10_1 s>= x8_2)
        x8_2 = x10_1
    label_c10b7c:
        x10_4 = arg1 + 0xc
        
        if (x10_4 == arg2)
            return (1 | x9.b) & 1
    else
        *(arg1 + 4) = x10_1
        *(arg1 + 8) = x8_2
        
        if (x10_1 s>= x9)
            goto label_c10b7c
        
        *arg1 = x10_1
        *(arg1 + 4) = x9
        x10_4 = arg1 + 0xc
        
        if (x10_4 == arg2)
            return (1 | x9.b) & 1
else if (x10_1 s>= x8_2)
    *arg1 = x8_2
    *(arg1 + 4) = x9
    
    if (x10_1 s< x9)
        *(arg1 + 4) = x10_1
        goto label_c10b04
    
    x8_2 = x10_1
    x10_4 = arg1 + 0xc
    
    if (x10_4 == arg2)
        return (1 | x9.b) & 1
else
    *arg1 = x10_1
label_c10b04:
    x8_2 = x9
    *(arg1 + 8) = x9
    x10_4 = arg1 + 0xc
    
    if (x10_4 == arg2)
        return (1 | x9.b) & 1

x9 = 0
int64_t x11_2 = 0xc
int32_t x12_1 = *x10_4

if (x12_1 s< x8_2)
    goto label_c10bb8

while (true)
    if (x10_4 + 4 == arg2)
        return (1 | x9.b) & 1
    
    x8_2 = *x10_4
    x11_2 += 4
    x10_4 += 4
    x12_1 = *x10_4
    
    if (x12_1 s< x8_2)
    label_c10bb8:
    label_c10bbc:
        *(arg1 + x11_2) = x8_2
        void* x8_9
        
        if (x11_2 == 4)
            x8_9 = arg1
        else
            if (x12_1 s< *(arg1 + x11_2 - 8))
                break
            
            x8_9 = arg1 + x11_2 - 4
        
        x9 += 1
        *x8_9 = x12_1
        
        if (x9 == 8)
            return (x10_4 + 4 == arg2 ? 1 : 0).b & 1
