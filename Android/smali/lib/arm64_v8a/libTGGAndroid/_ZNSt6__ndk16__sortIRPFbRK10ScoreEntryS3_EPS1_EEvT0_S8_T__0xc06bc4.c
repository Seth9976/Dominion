// 函数: _ZNSt6__ndk16__sortIRPFbRK10ScoreEntryS3_EPS1_EEvT0_S8_T_
// 地址: 0xc06bc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ScoreEntry* x22 = arg2
ScoreEntry* x19 = arg1

while (true)
    void* __offset(ScoreEntry, 0x1c) x23_1 = x19
    
    while (true)
    label_c06c14:
        int64_t x8_2 = x22 - x23_1
        int64_t x9_2 = (x8_2 s>> 2) * 0x6db6db6db6db6db7
        x19 = x23_1
        int128_t var_80_15
        int128_t var_74_15
        ScoreEntry* x22_1
        int128_t v0_13
        int128_t v1_13
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    arg1, v0_13, v1_13 = (*arg3)(x22 - 0x1c, x19)
                    
                    if ((arg1.d & 1) != 0)
                    label_c07298:
                        var_74_15 = *(x19 + 0xc)
                        var_80_15 = *x19
                        v1_13 = *(x22 - 0x1c)
                        *(x19 + 0xc) = *(x22 - 0x10)
                        *x19 = v1_13
                        *(x22 - 0x10) = var_74_15
                        *(x22 - 0x1c) = var_80_15
                case 3
                    x22_1 = x19 + 0x1c
                    int32_t x0_40 = (*arg3)(x22_1, x19)
                    arg1, v0_13, v1_13 = (*arg3)(x22 - 0x1c, x22_1)
                    
                    if ((x0_40 & 1) != 0)
                        if ((arg1.d & 1) != 0)
                            goto label_c07298
                        
                        int128_t var_74_21 = *(x19 + 0xc)
                        int128_t var_80_21 = *x19
                        v1_13 = *x22_1
                        *(x19 + 0xc) = *(x22_1 + 0xc)
                        *x19 = v1_13
                        *(x22_1 + 0xc) = var_74_21
                        *x22_1 = var_80_21
                        arg1, v0_13, v1_13 = (*arg3)(x22 - 0x1c, x22_1)
                        
                        if ((arg1.d & 1) != 0)
                            var_74_15 = *(x22_1 + 0xc)
                            var_80_15 = *x22_1
                            v1_13 = *(x22 - 0x1c)
                            *(x22_1 + 0xc) = *(x22 - 0x10)
                            *x22_1 = v1_13
                            *(x22 - 0x10) = var_74_15
                            *(x22 - 0x1c) = var_80_15
                    else if ((arg1.d & 1) != 0)
                        int128_t var_74_19 = *(x22_1 + 0xc)
                        int128_t var_80_19 = *x22_1
                        v1_13 = *(x22 - 0x1c)
                        *(x22_1 + 0xc) = *(x22 - 0x10)
                        *x22_1 = v1_13
                        v0_13 = var_74_19
                        v1_13 = var_80_19
                        *(x22 - 0x10) = v0_13
                        *(x22 - 0x1c) = v1_13
                    label_c07458:
                        int128_t v0_17
                        int128_t v1_17
                        arg1, v0_17, v1_17 = (*arg3)(x22_1, x19, v0_13, v1_13)
                        
                        if ((arg1.d & 1) != 0)
                            int128_t var_74_20 = *(x19 + 0xc)
                            int128_t var_80_20 = *x19
                            v1_17 = *x22_1
                            *(x19 + 0xc) = *(x22_1 + 0xc)
                            *x19 = v1_17
                            *(x22_1 + 0xc) = var_74_20
                            *x22_1 = var_80_20
                case 4
                    return std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                        x19, x19 + 0x1c, x19 + 0x38, x22 - 0x1c, arg3) __tailcall
                case 5
                    x22_1 = x19 + 0x1c
                    std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                        x19, x22_1, x19 + 0x38, x19 + 0x54, arg3)
                    int128_t v0_15
                    int128_t v1_15
                    arg1, v0_15, v1_15 = (*arg3)(x22 - 0x1c, x19 + 0x54)
                    
                    if ((arg1.d & 1) != 0)
                        int128_t var_74_16 = *(x19 + 0x60)
                        int128_t var_80_16 = *(x19 + 0x54)
                        v1_15 = *(x22 - 0x1c)
                        *(x19 + 0x60) = *(x22 - 0x10)
                        *(x19 + 0x54) = v1_15
                        *(x22 - 0x10) = var_74_16
                        *(x22 - 0x1c) = var_80_16
                        int128_t v0_16
                        int128_t v1_16
                        arg1, v0_16, v1_16 = (*arg3)(x19 + 0x54, x19 + 0x38)
                        
                        if ((arg1.d & 1) != 0)
                            int128_t var_74_17 = *(x19 + 0x44)
                            int128_t var_80_17 = *(x19 + 0x38)
                            v1_16 = *(x19 + 0x54)
                            *(x19 + 0x44) = *(x19 + 0x60)
                            *(x19 + 0x38) = v1_16
                            *(x19 + 0x60) = var_74_17
                            *(x19 + 0x54) = var_80_17
                            arg1, v0_13, v1_13 = (*arg3)(x19 + 0x38, x22_1)
                            
                            if ((arg1.d & 1) != 0)
                                int128_t var_74_18 = *(x22_1 + 0xc)
                                int128_t var_80_18 = *x22_1
                                v1_13 = *(x19 + 0x38)
                                *(x22_1 + 0xc) = *(x19 + 0x44)
                                *x22_1 = v1_13
                                v0_13 = var_74_18
                                v1_13 = var_80_18
                                *(x19 + 0x44) = v0_13
                                *(x19 + 0x38) = v1_13
                                goto label_c07458
        else
            if (x8_2 s<= 0x363)
                return std::__ndk1::__insertion_sort_3<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                    x19, x22, arg3) __tailcall
            
            void* __offset(ScoreEntry, -0x1c) x23_2
            int32_t x24_1
            
            if (x8_2 s< 0x6d45)
                x23_2 = x19 + (mulu.dp.d(x8_2.d u>> 3 & 0x1fff, 0x24924925) u>> 0x20) * 0x1c
                int32_t x0_11 = (*arg3)(x23_2, x19)
                int32_t x0_13
                int128_t v0_5
                int128_t v1_5
                x0_13, v0_5, v1_5 = (*arg3)(x22 - 0x1c, x23_2)
                
                if ((x0_11 & 1) == 0)
                    if ((x0_13 & 1) == 0)
                        x24_1 = 0
                    else
                        int128_t var_74_6 = *(x23_2 + 0xc)
                        int128_t var_80_6 = *x23_2
                        v1_5 = *(x22 - 0x1c)
                        *(x23_2 + 0xc) = *(x22 - 0x10)
                        *x23_2 = v1_5
                        *(x22 - 0x10) = var_74_6
                        *(x22 - 0x1c) = var_80_6
                        int32_t x0_15
                        int128_t v0_6
                        int128_t v1_6
                        x0_15, v0_6, v1_6 = (*arg3)(x23_2, x19)
                        
                        if ((x0_15 & 1) == 0)
                            x24_1 = 1
                        else
                            int128_t var_74_7 = *(x19 + 0xc)
                            int128_t var_80_7 = *x19
                            v1_6 = *x23_2
                            *(x19 + 0xc) = *(x23_2 + 0xc)
                            *x19 = v1_6
                            *(x23_2 + 0xc) = var_74_7
                            *x23_2 = var_80_7
                            x24_1 = 2
                else if ((x0_13 & 1) == 0)
                    int128_t var_74_8 = *(x19 + 0xc)
                    int128_t var_80_8 = *x19
                    v1_5 = *x23_2
                    *(x19 + 0xc) = *(x23_2 + 0xc)
                    *x19 = v1_5
                    *(x23_2 + 0xc) = var_74_8
                    *x23_2 = var_80_8
                    int32_t x0_17
                    int128_t v0_7
                    int128_t v1_7
                    x0_17, v0_7, v1_7 = (*arg3)(x22 - 0x1c, x23_2)
                    
                    if ((x0_17 & 1) == 0)
                        x24_1 = 1
                    else
                        int128_t var_74_9 = *(x23_2 + 0xc)
                        int128_t var_80_9 = *x23_2
                        v1_7 = *(x22 - 0x1c)
                        *(x23_2 + 0xc) = *(x22 - 0x10)
                        *x23_2 = v1_7
                        *(x22 - 0x10) = var_74_9
                        *(x22 - 0x1c) = var_80_9
                        x24_1 = 2
                else
                    x24_1 = 1
                    int128_t var_74_5 = *(x19 + 0xc)
                    int128_t var_80_5 = *x19
                    v1_5 = *(x22 - 0x1c)
                    *(x19 + 0xc) = *(x22 - 0x10)
                    *x19 = v1_5
                    *(x22 - 0x10) = var_74_5
                    *(x22 - 0x1c) = var_80_5
            else
                x23_2 = x19 + x8_2 u/ 0x38 * 0x1c
                int64_t x8_5 = x8_2 u/ 0x70 * 0x1c
                void* x25_1 = x19 + x8_5
                void* x26_1 = x23_2 + x8_5
                x24_1 = std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                    x19, x25_1, x23_2, x26_1, arg3)
                int32_t x0_3
                int128_t v0_1
                int128_t v1_1
                x0_3, v0_1, v1_1 = (*arg3)(x22 - 0x1c, x26_1)
                
                if ((x0_3 & 1) != 0)
                    int128_t var_74_1 = *(x26_1 + 0xc)
                    int128_t var_80_1 = *x26_1
                    v1_1 = *(x22 - 0x1c)
                    *(x26_1 + 0xc) = *(x22 - 0x10)
                    *x26_1 = v1_1
                    *(x22 - 0x10) = var_74_1
                    *(x22 - 0x1c) = var_80_1
                    int32_t x0_5
                    int128_t v0_2
                    int128_t v1_2
                    x0_5, v0_2, v1_2 = (*arg3)(x26_1, x23_2)
                    
                    if ((x0_5 & 1) == 0)
                        x24_1 += 1
                    else
                        int128_t var_74_2 = *(x23_2 + 0xc)
                        int128_t var_80_2 = *x23_2
                        v1_2 = *x26_1
                        *(x23_2 + 0xc) = *(x26_1 + 0xc)
                        *x23_2 = v1_2
                        *(x26_1 + 0xc) = var_74_2
                        *x26_1 = var_80_2
                        int32_t x0_7
                        int128_t v0_3
                        int128_t v1_3
                        x0_7, v0_3, v1_3 = (*arg3)(x23_2, x25_1)
                        
                        if ((x0_7 & 1) == 0)
                            x24_1 += 2
                        else
                            int128_t var_74_3 = *(x25_1 + 0xc)
                            int128_t var_80_3 = *x25_1
                            v1_3 = *x23_2
                            *(x25_1 + 0xc) = *(x23_2 + 0xc)
                            *x25_1 = v1_3
                            *(x23_2 + 0xc) = var_74_3
                            *x23_2 = var_80_3
                            int32_t x0_9
                            int128_t v0_4
                            int128_t v1_4
                            x0_9, v0_4, v1_4 = (*arg3)(x25_1, x19)
                            
                            if ((x0_9 & 1) == 0)
                                x24_1 += 3
                            else
                                x24_1 += 4
                                int128_t var_74_4 = *(x19 + 0xc)
                                int128_t var_80_4 = *x19
                                v1_4 = *x25_1
                                *(x19 + 0xc) = *(x25_1 + 0xc)
                                *x19 = v1_4
                                *(x25_1 + 0xc) = var_74_4
                                *x25_1 = var_80_4
            
            ScoreEntry* x25_2
            void* __offset(ScoreEntry, -0x1c) x26_2
            
            if (((*arg3)(x19, x23_2) & 1) == 0)
                void* __offset(ScoreEntry, -0x38) x25_3 = x22 - 0x38
                int128_t v1_8
                int32_t x0_21
                
                do
                    if (x19 == x25_3)
                        void* __offset(ScoreEntry, 0x38) x25_4 = x19 + 0x1c
                        
                        if (((*arg3)(x19, x22 - 0x1c).d & 1) == 0)
                            if (x25_4 == x22 - 0x1c)
                                goto label_c07518
                            
                            x25_4 = x19 + 0x38
                            int128_t v1_11
                            
                            while (true)
                                int128_t v0_11
                                arg1, v0_11, v1_11 = (*arg3)(x19, x25_4 - 0x1c)
                                
                                if ((arg1.d & 1) != 0)
                                    break
                                
                                x25_4 += 0x1c
                                
                                if (x22 == x25_4)
                                    return 
                            
                            int128_t var_74_13 = *(x25_4 - 0x10)
                            int128_t var_80_13 = *(x25_4 - 0x1c)
                            v1_11 = *(x22 - 0x1c)
                            *(x25_4 - 0x10) = *(x22 - 0x10)
                            *(x25_4 - 0x1c) = v1_11
                            *(x22 - 0x10) = var_74_13
                            *(x22 - 0x1c) = var_80_13
                        
                        if (x25_4 == x22 - 0x1c)
                            goto label_c07518
                        
                        void* __offset(ScoreEntry, -0x1c) x24_4 = x22 - 0x1c
                        
                        while (true)
                            x23_1 = x25_4 - 0x1c
                            int32_t x0_35
                            
                            do
                                x23_1 += 0x1c
                                x0_35 = (*arg3)(x19, x23_1)
                            while ((x0_35 & 1) == 0)
                            x25_4 = x23_1 + 0x1c
                            int128_t v1_12
                            
                            do
                                x24_4 -= 0x1c
                                int128_t v0_12
                                arg1, v0_12, v1_12 = (*arg3)(x19, x24_4)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x24_4)
                                break
                            
                            int128_t var_74_14 = *(x23_1 + 0xc)
                            int128_t var_80_14 = *x23_1
                            v1_12 = *x24_4
                            *(x23_1 + 0xc) = *(x24_4 + 0xc)
                            *x23_1 = v1_12
                            *(x24_4 + 0xc) = var_74_14
                            *x24_4 = var_80_14
                        
                        goto label_c06c14
                    
                    int128_t v0_8
                    x0_21, v0_8, v1_8 = (*arg3)(x25_3, x23_2)
                    x25_3 -= 0x1c
                while ((x0_21 & 1) == 0)
                x26_2 = x25_3 + 0x1c
                x24_1 += 1
                int128_t var_74_10 = *(x19 + 0xc)
                int128_t var_80_10 = *x19
                v1_8 = *(x25_3 + 0x1c)
                *(x19 + 0xc) = *(x25_3 + 0x28)
                *x19 = v1_8
                *(x25_3 + 0x28) = var_74_10
                *(x25_3 + 0x1c) = var_80_10
                x25_2 = x19 + 0x1c
                
                if (x25_2 u< x26_2)
                    goto label_c07010
                
                goto label_c06fc8
            
            x26_2 = x22 - 0x1c
            x25_2 = x19 + 0x1c
            
            if (x25_2 u< x26_2)
            label_c07010:
                void* __offset(ScoreEntry, -0x1c) x27_1
                
                while (true)
                    x27_1 = x25_2 - 0x1c
                    int32_t x0_23
                    
                    do
                        x27_1 += 0x1c
                        x0_23 = (*arg3)(x27_1, x23_2)
                    while ((x0_23 & 1) != 0)
                    x25_2 = x27_1 + 0x1c
                    int128_t v1_9
                    int32_t x0_25
                    
                    do
                        x26_2 -= 0x1c
                        int128_t v0_9
                        x0_25, v0_9, v1_9 = (*arg3)(x26_2, x23_2)
                    while ((x0_25 & 1) == 0)
                    
                    if (x27_1 u> x26_2)
                        break
                    
                    x24_1 += 1
                    int128_t var_74_11 = *(x27_1 + 0xc)
                    int128_t var_80_11 = *x27_1
                    v1_9 = *x26_2
                    
                    if (x23_2 == x27_1)
                        x23_2 = x26_2
                    
                    *(x27_1 + 0xc) = *(x26_2 + 0xc)
                    *x27_1 = v1_9
                    *(x26_2 + 0xc) = var_74_11
                    *x26_2 = var_80_11
                
                x25_2 = x27_1
                
                if (x25_2 != x23_2)
                    goto label_c0706c
            else
            label_c06fc8:
                
                if (x25_2 != x23_2)
                label_c0706c:
                    int32_t x0_27
                    int128_t v0_10
                    int128_t v1_10
                    x0_27, v0_10, v1_10 = (*arg3)(x23_2, x25_2)
                    
                    if ((x0_27 & 1) != 0)
                        x24_1 += 1
                        int128_t var_74_12 = *(x25_2 + 0xc)
                        int128_t var_80_12 = *x25_2
                        v1_10 = *x23_2
                        *(x25_2 + 0xc) = *(x23_2 + 0xc)
                        *x25_2 = v1_10
                        *(x23_2 + 0xc) = var_74_12
                        *x23_2 = var_80_12
            
            if (x24_1 != 0)
            label_c070f4:
                
                if (((x25_2 - x19) s>> 2) * 0x6db6db6db6db6db7
                        s>= ((x22 - x25_2) s>> 2) * 0x6db6db6db6db6db7)
                    std::__ndk1::__sort<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                        x25_2 + 0x1c, x22, arg3)
                    x22 = x25_2
                    break
                
                std::__ndk1::__sort<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x1c
                continue
            else
                int32_t x0_29 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x1c
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
                        x23_1, x22, arg3).d & 1) != 0)
                    x22 = x25_2
                    
                    if ((x0_29 & 1) == 0)
                        break
                else
                    if ((x0_29 & 1) == 0)
                        goto label_c070f4
                    
                    continue
    label_c07518:
        return 
