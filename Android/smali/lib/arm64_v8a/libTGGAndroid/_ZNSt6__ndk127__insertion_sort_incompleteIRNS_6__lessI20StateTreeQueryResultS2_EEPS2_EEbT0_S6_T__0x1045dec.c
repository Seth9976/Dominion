// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessI20StateTreeQueryResultS2_EEPS2_EEbT0_S6_T_
// 地址: 0x1045dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x5555555555555555
char x8_3
int128_t v0

if (x8_2 u> 5)
    int32_t x12_1 = *(arg1 + 0x28)
    int32_t x11_2 = *(arg1 + 0x10)
    int32_t x10_2 = *(arg1 + 0x40)
    void* __offset(StateTreeQueryResult, 0x48) x8_11 = arg1 + 0x30
    
    if (x12_1 s>= x11_2)
        if (x10_2 s< x12_1)
            int64_t x10_7 = *(arg1 + 0x28)
            int128_t var_50_10 = *(arg1 + 0x18)
            v0 = *x8_11
            *(arg1 + 0x28) = *(x8_11 + 0x10)
            *(arg1 + 0x18) = v0
            *(x8_11 + 0x10) = x10_7
            *x8_11 = var_50_10
            
            if (*(arg1 + 0x28) s< x11_2)
                int64_t x10_11 = *(arg1 + 0x10)
                int128_t var_50_11 = *arg1
                v0 = *(arg1 + 0x18)
                *(arg1 + 0x10) = *(arg1 + 0x28)
                *arg1 = v0
                *(arg1 + 0x28) = x10_11
                *(arg1 + 0x18) = var_50_11
    else
        int128_t var_50_3
        int64_t var_40_3
        
        if (x10_2 s>= x12_1)
            int64_t x11_4 = *(arg1 + 0x10)
            int128_t var_50_13 = *arg1
            v0 = *(arg1 + 0x18)
            *(arg1 + 0x10) = *(arg1 + 0x28)
            *arg1 = v0
            *(arg1 + 0x28) = x11_4
            *(arg1 + 0x18) = var_50_13
            
            if (x10_2 s< *(arg1 + 0x28))
                var_40_3 = *(arg1 + 0x28)
                var_50_3 = *(arg1 + 0x18)
                v0 = *x8_11
                *(arg1 + 0x28) = *(x8_11 + 0x10)
                *(arg1 + 0x18) = v0
                *(x8_11 + 0x10) = var_40_3
                *x8_11 = var_50_3
        else
            var_40_3 = *(arg1 + 0x10)
            var_50_3 = *arg1
            v0 = *x8_11
            *(arg1 + 0x10) = *(x8_11 + 0x10)
            *arg1 = v0
            *(x8_11 + 0x10) = var_40_3
            *x8_11 = var_50_3
    
    void* __offset(StateTreeQueryResult, 0x48) x11_8 = arg1 + 0x48
    char x9_17
    
    if (x11_8 == arg2)
    label_10462dc:
        x9_17 = 1
    else
        int64_t x9_16 = 0
        int32_t x10_22 = 0
        
        while (true)
            int32_t x12_2 = *(x8_11 + 0x10)
            x8_11 = x11_8
            int32_t x11_9 = *(x11_8 + 0x10)
            
            if (x11_9 s< x12_2)
                int64_t x13_2 = x9_16
                int128_t var_50_14 = *x8_11
                int32_t x12_3 = *(x8_11 + 0x14)
                void* x13_1
                
                while (true)
                    void* x14_1 = arg1 + x13_2
                    int64_t x15_1 = *(x14_1 + 0x40)
                    *(x14_1 + 0x48) = *(x14_1 + 0x30)
                    *(x14_1 + 0x58) = x15_1
                    
                    if (x13_2 == -0x30)
                        x13_1 = arg1
                        break
                    
                    x13_2 -= 0x18
                    
                    if (x11_9 s>= *(x14_1 + 0x28))
                        x13_1 = arg1 + x13_2 + 0x48
                        break
                
                x10_22 += 1
                *(x13_1 + 0x10) = x11_9
                *(x13_1 + 0x14) = x12_3
                *x13_1 = var_50_14
                
                if (x10_22 == 8)
                    x9_17 = 0
                    x8_11 = zx.q(x8_11 + 0x18 == arg2 ? 1 : 0)
                    break
            
            x11_8 = x8_11 + 0x18
            x9_16 += 0x18
            
            if (x11_8 == arg2)
                goto label_10462dc
    
    x8_3 = x9_17 | x8_11.b
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            if (*(arg2 - 8) s>= *(arg1 + 0x10))
                x8_3 = 1
            else
                int64_t x8_5 = *(arg1 + 0x10)
                int128_t var_50_1 = *arg1
                v0 = *(arg2 - 0x18)
                *(arg1 + 0x10) = *(arg2 - 8)
                *arg1 = v0
                *(arg2 - 8) = x8_5
                *(arg2 - 0x18) = var_50_1
                x8_3 = 1
        case 3
            int32_t x10_1 = *(arg1 + 0x28)
            int32_t x11_1 = *(arg2 - 8)
            
            if (x10_1 s>= *(arg1 + 0x10))
                if (x11_1 s>= x10_1)
                    x8_3 = 1
                else
                    int64_t x10_3 = *(arg1 + 0x28)
                    int128_t var_50_8 = *(arg1 + 0x18)
                    v0 = *(arg2 - 0x18)
                    *(arg1 + 0x28) = *(arg2 - 8)
                    *(arg1 + 0x18) = v0
                    *(arg2 - 8) = x10_3
                    *(arg2 - 0x18) = var_50_8
                    
                    if (*(arg1 + 0x28) s>= *(arg1 + 0x10))
                        x8_3 = 1
                    else
                        int64_t x9_12 = *(arg1 + 0x10)
                        int128_t var_50_9 = *arg1
                        v0 = *(arg1 + 0x18)
                        *(arg1 + 0x10) = *(arg1 + 0x28)
                        *arg1 = v0
                        *(arg1 + 0x28) = x9_12
                        *(arg1 + 0x18) = var_50_9
                        x8_3 = 1
            else
                int128_t var_50_2
                int64_t var_40_2
                
                if (x11_1 s>= x10_1)
                    int64_t x10_14 = *(arg1 + 0x10)
                    int128_t var_50_12 = *arg1
                    v0 = *(arg1 + 0x18)
                    *(arg1 + 0x10) = *(arg1 + 0x28)
                    *arg1 = v0
                    *(arg1 + 0x28) = x10_14
                    *(arg1 + 0x18) = var_50_12
                    
                    if (*(arg2 - 8) s< *(arg1 + 0x28))
                        var_40_2 = *(arg1 + 0x28)
                        var_50_2 = *(arg1 + 0x18)
                        v0 = *(arg2 - 0x18)
                        *(arg1 + 0x28) = *(arg2 - 8)
                        *(arg1 + 0x18) = v0
                        goto label_10461b8
                    
                    x8_3 = 1
                else
                    var_40_2 = *(arg1 + 0x10)
                    var_50_2 = *arg1
                    v0 = *(arg2 - 0x18)
                    *(arg1 + 0x10) = *(arg2 - 8)
                    *arg1 = v0
                label_10461b8:
                    *(arg2 - 8) = var_40_2
                    *(arg2 - 0x18) = var_50_2
                    x8_3 = 1
        case 4
            std::__ndk1::__sort4<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                arg1, arg1 + 0x18, arg1 + 0x30, arg2 - 0x18, arg3)
            x8_3 = 1
        case 5
            std::__ndk1::__sort4<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
                arg1, arg1 + 0x18, arg1 + 0x30, arg1 + 0x48, arg3)
            
            if (*(arg2 - 8) s< *(arg1 + 0x58))
                int64_t x8_13 = *(arg1 + 0x58)
                int128_t var_50_4 = *(arg1 + 0x48)
                int128_t v0_1 = *(arg2 - 0x18)
                *(arg1 + 0x58) = *(arg2 - 8)
                *(arg1 + 0x48) = v0_1
                *(arg2 - 8) = x8_13
                *(arg2 - 0x18) = var_50_4
                
                if (*(arg1 + 0x58) s< *(arg1 + 0x40))
                    int64_t x8_17 = *(arg1 + 0x40)
                    int128_t var_50_5 = *(arg1 + 0x30)
                    v0_1 = *(arg1 + 0x48)
                    *(arg1 + 0x40) = *(arg1 + 0x58)
                    *(arg1 + 0x30) = v0_1
                    *(arg1 + 0x58) = x8_17
                    *(arg1 + 0x48) = var_50_5
                    
                    if (*(arg1 + 0x40) s< *(arg1 + 0x28))
                        int64_t x8_21 = *(arg1 + 0x28)
                        int128_t var_50_6 = *(arg1 + 0x18)
                        v0_1 = *(arg1 + 0x30)
                        *(arg1 + 0x28) = *(arg1 + 0x40)
                        *(arg1 + 0x18) = v0_1
                        *(arg1 + 0x40) = x8_21
                        *(arg1 + 0x30) = var_50_6
                        
                        if (*(arg1 + 0x28) s< *(arg1 + 0x10))
                            int64_t x8_25 = *(arg1 + 0x10)
                            int128_t var_50_7 = *arg1
                            v0_1 = *(arg1 + 0x18)
                            *(arg1 + 0x10) = *(arg1 + 0x28)
                            *arg1 = v0_1
                            *(arg1 + 0x28) = x8_25
                            *(arg1 + 0x18) = var_50_7
            
            x8_3 = 1
return x8_3 & 1
