// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK10ScoreEntryS3_EPS1_EEbT0_S8_T_
// 地址: 0xc079cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 2) * 0x6db6db6db6db6db7
char x8_3
int128_t var_60

if (x8_2 u> 5)
    void* __offset(ScoreEntry, 0x54) x22_2 = arg1 + 0x38
    int32_t x0_7 = (*arg3)(arg1 + 0x1c, arg1)
    int32_t x0_9
    char x9_1
    int128_t v0_3
    int128_t v1_3
    x0_9, x9_1, v0_3, v1_3 = (*arg3)(x22_2, arg1 + 0x1c)
    
    if ((x0_7 & 1) == 0)
        if ((x0_9 & 1) != 0)
            int128_t var_54_9 = *(arg1 + 0x28)
            var_60 = *(arg1 + 0x1c)
            v1_3 = *x22_2
            *(arg1 + 0x28) = *(x22_2 + 0xc)
            *(arg1 + 0x1c) = v1_3
            v1_3 = var_60
            *(x22_2 + 0xc) = var_54_9
            *x22_2 = v1_3
            int32_t x0_23
            int128_t v0_8
            int128_t v1_8
            x0_23, x9_1, v0_8, v1_8 = (*arg3)(arg1 + 0x1c, arg1)
            
            if ((x0_23 & 1) != 0)
                int128_t var_54_10 = *(arg1 + 0xc)
                var_60 = *arg1
                v1_8 = *(arg1 + 0x1c)
                *(arg1 + 0xc) = *(arg1 + 0x28)
                *arg1 = v1_8
                v1_8 = var_60
                *(arg1 + 0x28) = var_54_10
                *(arg1 + 0x1c) = v1_8
    else
        int128_t var_54_3
        
        if ((x0_9 & 1) == 0)
            int128_t var_54_12 = *(arg1 + 0xc)
            var_60 = *arg1
            v1_3 = *(arg1 + 0x1c)
            *(arg1 + 0xc) = *(arg1 + 0x28)
            *arg1 = v1_3
            v1_3 = var_60
            *(arg1 + 0x28) = var_54_12
            *(arg1 + 0x1c) = v1_3
            int32_t x0_27
            x0_27, x9_1, v0_3, v1_3 = (*arg3)(x22_2, arg1 + 0x1c)
            
            if ((x0_27 & 1) != 0)
                var_54_3 = *(arg1 + 0x28)
                var_60 = *(arg1 + 0x1c)
                v1_3 = *x22_2
                *(arg1 + 0x28) = *(x22_2 + 0xc)
                *(arg1 + 0x1c) = v1_3
                goto label_c07e40
        else
            var_54_3 = *(arg1 + 0xc)
            var_60 = *arg1
            v1_3 = *x22_2
            *(arg1 + 0xc) = *(x22_2 + 0xc)
            *arg1 = v1_3
        label_c07e40:
            v1_3 = var_60
            *(x22_2 + 0xc) = var_54_3
            *x22_2 = v1_3
    
    void* __offset(ScoreEntry, 0x54) x8_18 = arg1 + 0x54
    char x8_21
    
    if (x8_18 == arg2)
    label_c07f00:
        x8_21 = 1
    else
        int64_t x23_4 = 0
        int32_t x24_3 = 0
        
        while (true)
            void* __offset(ScoreEntry, 0x54) x1_15 = x22_2
            x22_2 = x8_18
            int32_t x0_29
            int128_t v0_9
            int128_t v1_9
            x0_29, x9_1, v0_9, v1_9 = (*arg3)(x8_18, x1_15)
            
            if ((x0_29 & 1) != 0)
                int64_t x25_1 = x23_4
                int128_t var_54_13 = *(x22_2 + 0xc)
                var_60 = *x22_2
                void* x8_17
                
                while (true)
                    void* x8_19 = arg1 + x25_1
                    v1_9 = *(x8_19 + 0x44)
                    *(x8_19 + 0x54) = *(x8_19 + 0x38)
                    *(x8_19 + 0x60) = v1_9
                    
                    if (x25_1 == -0x38)
                        x8_17 = arg1
                        break
                    
                    int32_t x0_31
                    x0_31, x9_1, v0_9, v1_9 = (*arg3)(&var_60, x8_19 + 0x1c)
                    x25_1 -= 0x1c
                    
                    if ((x0_31 & 1) == 0)
                        x8_17 = arg1 + x25_1 + 0x54
                        break
                
                v1_9 = var_60
                x24_3 += 1
                *(x8_17 + 0xc) = var_54_13
                *x8_17 = v1_9
                
                if (x24_3 == 8)
                    x8_21 = 0
                    x9_1 = (x22_2 + 0x1c == arg2 ? 1 : 0).b
                    break
            
            x8_18 = x22_2 + 0x1c
            x23_4 += 0x1c
            
            if (x8_18 == arg2)
                goto label_c07f00
    
    x8_3 = x8_21 | x9_1
else
    x8_3 = 1
    void* __offset(ScoreEntry, 0x1c) x22_1
    int128_t v0_7
    int128_t v1_7
    
    switch (x8_2)
        case 2
            int32_t x0_1
            int128_t v0_1
            int128_t v1_1
            x0_1, v0_1, v1_1 = (*arg3)(arg2 - 0x1c, arg1)
            
            if ((x0_1 & 1) == 0)
                x8_3 = 1
            else
                x8_3 = 1
                int128_t var_54_1 = *(arg1 + 0xc)
                var_60 = *arg1
                v1_1 = *(arg2 - 0x1c)
                *(arg1 + 0xc) = *(arg2 - 0x10)
                *arg1 = v1_1
                v1_1 = var_60
                *(arg2 - 0x10) = var_54_1
                *(arg2 - 0x1c) = v1_1
        case 3
            x22_1 = arg1 + 0x1c
            int32_t x0_3 = (*arg3)(x22_1, arg1)
            int32_t x0_5
            int128_t v0_2
            int128_t v1_2
            x0_5, v0_2, v1_2 = (*arg3)(arg2 - 0x1c, x22_1)
            
            if ((x0_3 & 1) == 0)
                if ((x0_5 & 1) == 0)
                    x8_3 = 1
                else
                    int128_t var_54_7 = *(x22_1 + 0xc)
                    var_60 = *x22_1
                    v1_2 = *(arg2 - 0x1c)
                    *(x22_1 + 0xc) = *(arg2 - 0x10)
                    *x22_1 = v1_2
                    v1_2 = var_60
                    *(arg2 - 0x10) = var_54_7
                    *(arg2 - 0x1c) = v1_2
                    int32_t x0_21
                    x0_21, v0_7, v1_7 = (*arg3)(x22_1, arg1)
                    
                    if ((x0_21 & 1) == 0)
                        x8_3 = 1
                    else
                    label_c07ca8:
                        x8_3 = 1
                        int128_t var_54_8 = *(arg1 + 0xc)
                        var_60 = *arg1
                        v1_7 = *x22_1
                        *(arg1 + 0xc) = *(x22_1 + 0xc)
                        *arg1 = v1_7
                        v1_7 = var_60
                        *(x22_1 + 0xc) = var_54_8
                        *x22_1 = v1_7
            else
                int128_t var_54_2
                
                if ((x0_5 & 1) == 0)
                    int128_t var_54_11 = *(arg1 + 0xc)
                    var_60 = *arg1
                    v1_2 = *x22_1
                    *(arg1 + 0xc) = *(x22_1 + 0xc)
                    *arg1 = v1_2
                    v1_2 = var_60
                    *(x22_1 + 0xc) = var_54_11
                    *x22_1 = v1_2
                    int32_t x0_25
                    x0_25, v0_2, v1_2 = (*arg3)(arg2 - 0x1c, x22_1)
                    
                    if ((x0_25 & 1) != 0)
                        var_54_2 = *(x22_1 + 0xc)
                        var_60 = *x22_1
                        v1_2 = *(arg2 - 0x1c)
                        *(x22_1 + 0xc) = *(arg2 - 0x10)
                        *x22_1 = v1_2
                        goto label_c07dbc
                    
                    x8_3 = 1
                else
                    var_54_2 = *(arg1 + 0xc)
                    var_60 = *arg1
                    v1_2 = *(arg2 - 0x1c)
                    *(arg1 + 0xc) = *(arg2 - 0x10)
                    *arg1 = v1_2
                label_c07dbc:
                    v1_2 = var_60
                    x8_3 = 1
                    *(arg2 - 0x10) = var_54_2
                    *(arg2 - 0x1c) = v1_2
        case 4
            std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                arg1, arg1 + 0x1c, arg1 + 0x38, arg2 - 0x1c, arg3)
            x8_3 = 1
        case 5
            x22_1 = arg1 + 0x1c
            std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                arg1, x22_1, arg1 + 0x38, arg1 + 0x54, arg3)
            int32_t x0_13
            int128_t v0_4
            int128_t v1_4
            x0_13, v0_4, v1_4 = (*arg3)(arg2 - 0x1c, arg1 + 0x54)
            
            if ((x0_13 & 1) == 0)
                x8_3 = 1
            else
                int128_t var_54_4 = *(arg1 + 0x60)
                var_60 = *(arg1 + 0x54)
                v1_4 = *(arg2 - 0x1c)
                *(arg1 + 0x60) = *(arg2 - 0x10)
                *(arg1 + 0x54) = v1_4
                v1_4 = var_60
                *(arg2 - 0x10) = var_54_4
                *(arg2 - 0x1c) = v1_4
                int32_t x0_15
                int128_t v0_5
                int128_t v1_5
                x0_15, v0_5, v1_5 = (*arg3)(arg1 + 0x54, arg1 + 0x38)
                
                if ((x0_15 & 1) == 0)
                    x8_3 = 1
                else
                    int128_t var_54_5 = *(arg1 + 0x44)
                    var_60 = *(arg1 + 0x38)
                    v1_5 = *(arg1 + 0x54)
                    *(arg1 + 0x44) = *(arg1 + 0x60)
                    *(arg1 + 0x38) = v1_5
                    v1_5 = var_60
                    *(arg1 + 0x60) = var_54_5
                    *(arg1 + 0x54) = v1_5
                    int32_t x0_17
                    int128_t v0_6
                    int128_t v1_6
                    x0_17, v0_6, v1_6 = (*arg3)(arg1 + 0x38, x22_1)
                    
                    if ((x0_17 & 1) == 0)
                        x8_3 = 1
                    else
                        int128_t var_54_6 = *(x22_1 + 0xc)
                        var_60 = *x22_1
                        v1_6 = *(arg1 + 0x38)
                        *(x22_1 + 0xc) = *(arg1 + 0x44)
                        *x22_1 = v1_6
                        v1_6 = var_60
                        *(arg1 + 0x44) = var_54_6
                        *(arg1 + 0x38) = v1_6
                        int32_t x0_19
                        x0_19, v0_7, v1_7 = (*arg3)(x22_1, arg1)
                        
                        if ((x0_19 & 1) != 0)
                            goto label_c07ca8
                        
                        x8_3 = 1
return x8_3 & 1
