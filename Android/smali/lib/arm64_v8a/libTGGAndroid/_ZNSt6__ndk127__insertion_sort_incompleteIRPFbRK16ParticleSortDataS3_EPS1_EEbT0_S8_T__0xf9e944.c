// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK16ParticleSortDataS3_EPS1_EEbT0_S8_T_
// 地址: 0xf9e944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 4
char x8_2
int128_t var_50

if (x8_1 u> 5)
    void* __offset(ParticleSortData, 0x30) x22_2 = arg1 + 0x20
    int32_t x0_7 = (*arg3)(arg1 + 0x10, arg1)
    int32_t x0_9
    char x9_1
    int128_t v0_3
    x0_9, x9_1, v0_3 = (*arg3)(x22_2, arg1 + 0x10)
    
    if ((x0_7 & 1) == 0)
        if ((x0_9 & 1) != 0)
            var_50 = *(arg1 + 0x10)
            *(arg1 + 0x10) = *x22_2
            *x22_2 = var_50
            int32_t x0_23
            int128_t v0_8
            x0_23, x9_1, v0_8 = (*arg3)(arg1 + 0x10, arg1)
            
            if ((x0_23 & 1) != 0)
                var_50 = *arg1
                *arg1 = *(arg1 + 0x10)
                *(arg1 + 0x10) = var_50
    else if ((x0_9 & 1) == 0)
        var_50 = *arg1
        *arg1 = *(arg1 + 0x10)
        *(arg1 + 0x10) = var_50
        int32_t x0_27
        x0_27, x9_1, v0_3 = (*arg3)(x22_2, arg1 + 0x10)
        
        if ((x0_27 & 1) != 0)
            var_50 = *(arg1 + 0x10)
            *(arg1 + 0x10) = *x22_2
            *x22_2 = var_50
    else
        var_50 = *arg1
        *arg1 = *x22_2
        *x22_2 = var_50
    
    void* __offset(ParticleSortData, 0x30) x8_17 = arg1 + 0x30
    char x8_20
    
    if (x8_17 == arg2)
    label_f9ed0c:
        x8_20 = 1
    else
        int64_t x23_4 = 0
        int32_t x24_3 = 0
        
        while (true)
            void* __offset(ParticleSortData, 0x30) x1_15 = x22_2
            x22_2 = x8_17
            int32_t x0_29
            int128_t v0_9
            x0_29, x9_1, v0_9 = (*arg3)(x8_17, x1_15)
            
            if ((x0_29 & 1) != 0)
                int64_t x25_1 = x23_4
                var_50 = *x22_2
                void* x8_16
                
                while (true)
                    void* x8_18 = arg1 + x25_1
                    *(x8_18 + 0x30) = *(x8_18 + 0x20)
                    
                    if (x25_1 == -0x20)
                        x8_16 = arg1
                        break
                    
                    int32_t x0_31
                    x0_31, x9_1, v0_9 = (*arg3)(&var_50, x8_18 + 0x10)
                    x25_1 -= 0x10
                    
                    if ((x0_31 & 1) == 0)
                        x8_16 = arg1 + x25_1 + 0x30
                        break
                
                x24_3 += 1
                *x8_16 = var_50
                
                if (x24_3 == 8)
                    x8_20 = 0
                    x9_1 = (x22_2 + 0x10 == arg2 ? 1 : 0).b
                    break
            
            x8_17 = x22_2 + 0x10
            x23_4 += 0x10
            
            if (x8_17 == arg2)
                goto label_f9ed0c
    
    x8_2 = x8_20 | x9_1
else
    x8_2 = 1
    void* __offset(ParticleSortData, 0x10) x22_1
    int128_t v0_7
    
    switch (x8_1)
        case 2
            int32_t x0_1
            int128_t v0_1
            x0_1, v0_1 = (*arg3)(arg2 - 0x10, arg1)
            
            if ((x0_1 & 1) == 0)
                x8_2 = 1
            else
                x8_2 = 1
                var_50 = *arg1
                *arg1 = *(arg2 - 0x10)
                *(arg2 - 0x10) = var_50
        case 3
            x22_1 = arg1 + 0x10
            int32_t x0_3 = (*arg3)(x22_1, arg1)
            int32_t x0_5
            int128_t v0_2
            x0_5, v0_2 = (*arg3)(arg2 - 0x10, x22_1)
            
            if ((x0_3 & 1) == 0)
                if ((x0_5 & 1) == 0)
                    x8_2 = 1
                else
                    var_50 = *x22_1
                    *x22_1 = *(arg2 - 0x10)
                    *(arg2 - 0x10) = var_50
                    int32_t x0_21
                    x0_21, v0_7 = (*arg3)(x22_1, arg1)
                    
                    if ((x0_21 & 1) == 0)
                        x8_2 = 1
                    else
                    label_f9eb70:
                        x8_2 = 1
                        var_50 = *arg1
                        *arg1 = *x22_1
                        *x22_1 = var_50
            else if ((x0_5 & 1) == 0)
                var_50 = *arg1
                *arg1 = *x22_1
                *x22_1 = var_50
                int32_t x0_25
                x0_25, v0_2 = (*arg3)(arg2 - 0x10, x22_1)
                
                if ((x0_25 & 1) == 0)
                    x8_2 = 1
                else
                    var_50 = *x22_1
                    *x22_1 = *(arg2 - 0x10)
                    x8_2 = 1
                    *(arg2 - 0x10) = var_50
            else
                var_50 = *arg1
                *arg1 = *(arg2 - 0x10)
                x8_2 = 1
                *(arg2 - 0x10) = var_50
        case 4
            std::__ndk1::__sort4<bool (*&)(ParticleSortData const&, ParticleSortData const&), ParticleSortData*>(
                arg1, arg1 + 0x10, arg1 + 0x20, arg2 - 0x10, arg3)
            x8_2 = 1
        case 5
            x22_1 = arg1 + 0x10
            std::__ndk1::__sort4<bool (*&)(ParticleSortData const&, ParticleSortData const&), ParticleSortData*>(
                arg1, x22_1, arg1 + 0x20, arg1 + 0x30, arg3)
            int32_t x0_13
            int128_t v0_4
            x0_13, v0_4 = (*arg3)(arg2 - 0x10, arg1 + 0x30)
            
            if ((x0_13 & 1) == 0)
                x8_2 = 1
            else
                var_50 = *(arg1 + 0x30)
                *(arg1 + 0x30) = *(arg2 - 0x10)
                *(arg2 - 0x10) = var_50
                int32_t x0_15
                int128_t v0_5
                x0_15, v0_5 = (*arg3)(arg1 + 0x30, arg1 + 0x20)
                
                if ((x0_15 & 1) == 0)
                    x8_2 = 1
                else
                    var_50 = *(arg1 + 0x20)
                    *(arg1 + 0x20) = *(arg1 + 0x30)
                    *(arg1 + 0x30) = var_50
                    int32_t x0_17
                    int128_t v0_6
                    x0_17, v0_6 = (*arg3)(arg1 + 0x20, x22_1)
                    
                    if ((x0_17 & 1) == 0)
                        x8_2 = 1
                    else
                        var_50 = *x22_1
                        *x22_1 = *(arg1 + 0x20)
                        *(arg1 + 0x20) = var_50
                        int32_t x0_19
                        x0_19, v0_7 = (*arg3)(x22_1, arg1)
                        
                        if ((x0_19 & 1) != 0)
                            goto label_f9eb70
                        
                        x8_2 = 1
return x8_2 & 1
