// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIeeEEPeEEbT0_S5_T_
// 地址: 0x10a0f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 4
char x8_2
int128_t v0
int128_t v1
int128_t v2

if (x8_1 u> 5)
    v1 = *arg1
    v2 = *(arg1 + 0x10)
    v0 = *(arg1 + 0x20)
    char x9_1
    
    if ((sub_1101750(v2, v1) & 0x80000000) == 0)
        int32_t x0_8
        x0_8, x9_1 = sub_1101750(v0, v2)
        
        if (x0_8 s>= 0)
            v1 = v0
        else
            *(arg1 + 0x10) = v0
            *(arg1 + 0x20) = v2
            int32_t x0_9
            x0_9, x9_1 = sub_1101750(v0, v1)
            
            if (x0_9 s>= 0)
                v1 = v2
            else
                *arg1 = v0
                *(arg1 + 0x10) = v1
                v1 = v2
    else
        int32_t x0_2
        x0_2, x9_1 = sub_1101750(v0, v2)
        
        if (x0_2 s>= 0)
            *arg1 = v2
            *(arg1 + 0x10) = v1
            int32_t x0_13
            x0_13, x9_1 = sub_1101750(v0, v1)
            
            if (x0_13 s>= 0)
                v1 = v0
            else
                *(arg1 + 0x10) = v0
                v1 = v1
                *(arg1 + 0x20) = v1
        else
            *arg1 = v0
            v1 = v1
            *(arg1 + 0x20) = v1
    
    void* x22_1 = arg1 + 0x30
    char x8_7
    
    if (x22_1 == arg2)
    label_10a129c:
        x8_7 = 1
    else
        int32_t x21_1 = 0
        int64_t x23_1 = 0x30
        
        while (true)
            int128_t v0_1 = *x22_1
            int128_t var_60_6 = v0_1
            int32_t x0_16
            x0_16, x9_1 = sub_1101750(v0_1, v1)
            
            if (x0_16 s< 0)
                v0_1 = v1
                int64_t x8_3 = x23_1
                void* x8_5
                
                while (true)
                    int64_t x24_1 = x8_3 - 0x10
                    *(arg1 + x8_3) = v0_1
                    
                    if (x8_3 == 0x10)
                        x8_5 = arg1
                        break
                    
                    v1 = *(arg1 + x8_3 - 0x20)
                    int32_t x0_17
                    x0_17, x9_1 = sub_1101750(var_60_6, v1)
                    v0_1 = v1
                    x8_3 = x24_1
                    
                    if ((x0_17 & 0x80000000) == 0)
                        x8_5 = arg1 + x24_1
                        break
                
                x21_1 += 1
                *x8_5 = var_60_6
                
                if (x21_1 == 8)
                    x8_7 = 0
                    x9_1 = (x22_1 + 0x10 == arg2 ? 1 : 0).b
                    break
            
            if (x22_1 + 0x10 == arg2)
                goto label_10a129c
            
            v1 = *x22_1
            x23_1 += 0x10
            x22_1 += 0x10
    
    x8_2 = x8_7 | x9_1
else
    x8_2 = 1
    int128_t var_60_5
    int128_t var_50_5
    
    switch (x8_1)
        case 2
            SystemHintOp_BTI()
            v0 = *(arg2 - 0x10)
            v1 = *arg1
            
            if (sub_1101750(v0, v1) s>= 0)
                x8_2 = 1
            else
                *arg1 = v0
                *(arg2 - 0x10) = v1
                x8_2 = 1
        case 3
            SystemHintOp_BTI()
            v1 = *arg1
            v0 = *(arg1 + 0x10)
            v2 = *(arg2 - 0x10)
            
            if ((sub_1101750(v0, v1) & 0x80000000) == 0)
                if (sub_1101750(v2, v0) s>= 0)
                    x8_2 = 1
                else
                    *(arg1 + 0x10) = v2
                    *(arg2 - 0x10) = v0
                    v1 = *arg1
                    v0 = *(arg1 + 0x10)
                    var_50_5 = v0
                    var_60_5 = v1
                label_10a1318:
                    
                    if (sub_1101750(v0, v1) s>= 0)
                        x8_2 = 1
                    else
                        x8_2 = 1
                        *arg1 = var_50_5
                        *(arg1 + 0x10) = var_60_5
            else if (sub_1101750(v2, v0) s>= 0)
                *arg1 = v0
                *(arg1 + 0x10) = v1
                v0 = *(arg2 - 0x10)
                
                if (sub_1101750(v0, v1) s< 0)
                    *(arg1 + 0x10) = v0
                    goto label_10a11c0
                
                x8_2 = 1
            else
                *arg1 = v2
            label_10a11c0:
                *(arg2 - 0x10) = v1
                x8_2 = 1
        case 4
            SystemHintOp_BTI()
            v1 = *arg1
            v2 = *(arg1 + 0x10)
            int128_t var_60_4 = *(arg1 + 0x20)
            int128_t var_70_3 = v1
            
            if ((sub_1101750(v2, v1) & 0x80000000) == 0)
                if (sub_1101750(var_60_4, v2) s>= 0)
                    v1 = var_60_4
                else
                    *(arg1 + 0x10) = var_60_4
                    *(arg1 + 0x20) = v2
                    
                    if (sub_1101750(var_60_4, var_70_3) s>= 0)
                        v1 = v2
                    else
                        *arg1 = var_60_4
                        *(arg1 + 0x10) = var_70_3
                        v1 = v2
            else
                v1 = var_70_3
                
                if (sub_1101750(var_60_4, v2) s>= 0)
                    *arg1 = v2
                    *(arg1 + 0x10) = v1
                    
                    if (sub_1101750(var_60_4, v1) s>= 0)
                        v1 = var_60_4
                    else
                        v1 = var_70_3
                        *(arg1 + 0x10) = var_60_4
                        *(arg1 + 0x20) = v1
                else
                    *arg1 = var_60_4
                    *(arg1 + 0x20) = v1
            
            v0 = *(arg2 - 0x10)
            
            if (sub_1101750(v0, v1) s>= 0)
                x8_2 = 1
            else
                *(arg1 + 0x20) = v0
                *(arg2 - 0x10) = v1
                v1 = *(arg1 + 0x10)
                v0 = *(arg1 + 0x20)
                var_50_5 = v0
                
                if (sub_1101750(v0, v1) s< 0)
                    v2 = *arg1
                    v0 = var_50_5
                    var_60_5 = v2
                    *(arg1 + 0x10) = v0
                    *(arg1 + 0x20) = v1
                    v1 = v2
                    goto label_10a1318
                
                x8_2 = 1
        case 5
            SystemHintOp_BTI()
            std::__ndk1::__sort5<std::__ndk1::__less<long double, long double>&, long double*>(
                arg1, arg1 + 0x10, arg1 + 0x20, arg1 + 0x30, arg2 - 0x10, arg3)
            x8_2 = 1
SystemHintOp_BTI()
return x8_2 & 1
