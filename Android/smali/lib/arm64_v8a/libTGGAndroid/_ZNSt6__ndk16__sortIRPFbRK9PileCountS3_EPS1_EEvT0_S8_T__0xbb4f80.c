// 函数: _ZNSt6__ndk16__sortIRPFbRK9PileCountS3_EPS1_EEvT0_S8_T_
// 地址: 0xbb4f80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

PileCount* x22 = arg2
PileCount* x19 = arg1

while (true)
    void* __offset(PileCount, 0x38) x23_1 = x19
    
    while (true)
    label_bb4fd0:
        int64_t x8_2 = x22 - x23_1
        int64_t x9_2 = (x8_2 s>> 3) * 0x6db6db6db6db6db7
        x19 = x23_1
        int128_t var_a0_15
        int128_t var_90_15
        int128_t var_80_15
        int64_t var_70_15
        PileCount* x22_1
        int128_t v0_13
        int128_t v1_13
        int128_t v2_13
        
        if (x9_2 u<= 5)
            switch (x9_2)
                case 2
                    arg1, v0_13, v1_13, v2_13 = (*arg3)(x22 - 0x38, x19)
                    
                    if ((arg1.d & 1) != 0)
                    label_bb57b8:
                        var_70_15 = *(x19 + 0x30)
                        var_90_15 = *(x19 + 0x10)
                        var_80_15 = *(x19 + 0x20)
                        var_a0_15 = *x19
                        v1_13 = *(x22 - 0x28)
                        v0_13 = *(x22 - 0x18)
                        v2_13 = *(x22 - 0x38)
                        *(x19 + 0x30) = *(x22 - 8)
                        *(x19 + 0x10) = v1_13
                        *(x19 + 0x20) = v0_13
                        *x19 = v2_13
                    label_bb57e8:
                        *(x22 - 8) = var_70_15
                        *(x22 - 0x28) = var_90_15
                        *(x22 - 0x18) = var_80_15
                        *(x22 - 0x38) = var_a0_15
                case 3
                    x22_1 = x19 + 0x38
                    int32_t x0_40 = (*arg3)(x22_1, x19)
                    arg1, v0_13, v1_13, v2_13 = (*arg3)(x22 - 0x38, x22_1)
                    
                    if ((x0_40 & 1) != 0)
                        if ((arg1.d & 1) != 0)
                            goto label_bb57b8
                        
                        int64_t x8_96 = *(x19 + 0x30)
                        int128_t var_90_21 = *(x19 + 0x10)
                        int128_t var_80_21 = *(x19 + 0x20)
                        int128_t var_a0_21 = *x19
                        v1_13 = *(x22_1 + 0x10)
                        v0_13 = *(x22_1 + 0x20)
                        v2_13 = *x22_1
                        *(x19 + 0x30) = *(x22_1 + 0x30)
                        *(x19 + 0x10) = v1_13
                        *(x19 + 0x20) = v0_13
                        *x19 = v2_13
                        *(x22_1 + 0x30) = x8_96
                        *(x22_1 + 0x10) = var_90_21
                        *(x22_1 + 0x20) = var_80_21
                        *x22_1 = var_a0_21
                        arg1, v0_13, v1_13, v2_13 = (*arg3)(x22 - 0x38, x22_1)
                        
                        if ((arg1.d & 1) != 0)
                            var_70_15 = *(x22_1 + 0x30)
                            var_90_15 = *(x22_1 + 0x10)
                            var_80_15 = *(x22_1 + 0x20)
                            var_a0_15 = *x22_1
                            v1_13 = *(x22 - 0x28)
                            v0_13 = *(x22 - 0x18)
                            v2_13 = *(x22 - 0x38)
                            *(x22_1 + 0x30) = *(x22 - 8)
                            *(x22_1 + 0x10) = v1_13
                            *(x22_1 + 0x20) = v0_13
                            *x22_1 = v2_13
                            goto label_bb57e8
                    else if ((arg1.d & 1) != 0)
                        int64_t x8_89 = *(x22_1 + 0x30)
                        int128_t var_90_19 = *(x22_1 + 0x10)
                        int128_t var_80_19 = *(x22_1 + 0x20)
                        int128_t var_a0_19 = *x22_1
                        v1_13 = *(x22 - 0x28)
                        v0_13 = *(x22 - 0x18)
                        v2_13 = *(x22 - 0x38)
                        *(x22_1 + 0x30) = *(x22 - 8)
                        *(x22_1 + 0x10) = v1_13
                        *(x22_1 + 0x20) = v0_13
                        *x22_1 = v2_13
                        v1_13 = var_90_19
                        v0_13 = var_80_19
                        v2_13 = var_a0_19
                        *(x22 - 8) = x8_89
                        *(x22 - 0x28) = v1_13
                        *(x22 - 0x18) = v0_13
                        *(x22 - 0x38) = v2_13
                    label_bb59ec:
                        int128_t v0_17
                        int128_t v1_17
                        int128_t v2_17
                        arg1, v0_17, v1_17, v2_17 = (*arg3)(x22_1, x19, v0_13, v1_13, v2_13)
                        
                        if ((arg1.d & 1) != 0)
                            int64_t x8_93 = *(x19 + 0x30)
                            int128_t var_90_20 = *(x19 + 0x10)
                            int128_t var_80_20 = *(x19 + 0x20)
                            int128_t var_a0_20 = *x19
                            v1_17 = *(x22_1 + 0x10)
                            v0_17 = *(x22_1 + 0x20)
                            v2_17 = *x22_1
                            *(x19 + 0x30) = *(x22_1 + 0x30)
                            *(x19 + 0x10) = v1_17
                            *(x19 + 0x20) = v0_17
                            *x19 = v2_17
                            *(x22_1 + 0x30) = x8_93
                            *(x22_1 + 0x10) = var_90_20
                            *(x22_1 + 0x20) = var_80_20
                            *x22_1 = var_a0_20
                case 4
                    return std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                        x19, x19 + 0x38, x19 + 0x70, x22 - 0x38, arg3) __tailcall
                case 5
                    x22_1 = x19 + 0x38
                    std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                        x19, x22_1, x19 + 0x70, x19 + 0xa8, arg3)
                    int128_t v0_15
                    int128_t v1_15
                    int128_t v2_15
                    arg1, v0_15, v1_15, v2_15 = (*arg3)(x22 - 0x38, x19 + 0xa8)
                    
                    if ((arg1.d & 1) != 0)
                        int64_t x8_78 = *(x19 + 0xd8)
                        int128_t var_90_16 = *(x19 + 0xb8)
                        int128_t var_80_16 = *(x19 + 0xc8)
                        int128_t var_a0_16 = *(x19 + 0xa8)
                        v1_15 = *(x22 - 0x28)
                        v0_15 = *(x22 - 0x18)
                        v2_15 = *(x22 - 0x38)
                        *(x19 + 0xd8) = *(x22 - 8)
                        *(x19 + 0xb8) = v1_15
                        *(x19 + 0xc8) = v0_15
                        *(x19 + 0xa8) = v2_15
                        *(x22 - 8) = x8_78
                        *(x22 - 0x28) = var_90_16
                        *(x22 - 0x18) = var_80_16
                        *(x22 - 0x38) = var_a0_16
                        int128_t v0_16
                        int128_t v1_16
                        int128_t v2_16
                        arg1, v0_16, v1_16, v2_16 = (*arg3)(x19 + 0xa8, x19 + 0x70)
                        
                        if ((arg1.d & 1) != 0)
                            int64_t x8_82 = *(x19 + 0xa0)
                            int128_t var_90_17 = *(x19 + 0x80)
                            int128_t var_80_17 = *(x19 + 0x90)
                            int128_t var_a0_17 = *(x19 + 0x70)
                            v1_16 = *(x19 + 0xb8)
                            v0_16 = *(x19 + 0xc8)
                            v2_16 = *(x19 + 0xa8)
                            *(x19 + 0xa0) = *(x19 + 0xd8)
                            *(x19 + 0x80) = v1_16
                            *(x19 + 0x90) = v0_16
                            *(x19 + 0x70) = v2_16
                            *(x19 + 0xd8) = x8_82
                            *(x19 + 0xb8) = var_90_17
                            *(x19 + 0xc8) = var_80_17
                            *(x19 + 0xa8) = var_a0_17
                            arg1, v0_13, v1_13, v2_13 = (*arg3)(x19 + 0x70, x22_1)
                            
                            if ((arg1.d & 1) != 0)
                                int64_t x8_86 = *(x22_1 + 0x30)
                                int128_t var_90_18 = *(x22_1 + 0x10)
                                int128_t var_80_18 = *(x22_1 + 0x20)
                                int128_t var_a0_18 = *x22_1
                                v1_13 = *(x19 + 0x80)
                                v0_13 = *(x19 + 0x90)
                                v2_13 = *(x19 + 0x70)
                                *(x22_1 + 0x30) = *(x19 + 0xa0)
                                *(x22_1 + 0x10) = v1_13
                                *(x22_1 + 0x20) = v0_13
                                *x22_1 = v2_13
                                v1_13 = var_90_18
                                v0_13 = var_80_18
                                v2_13 = var_a0_18
                                *(x19 + 0xa0) = x8_86
                                *(x19 + 0x80) = v1_13
                                *(x19 + 0x90) = v0_13
                                *(x19 + 0x70) = v2_13
                                goto label_bb59ec
        else
            if (x8_2 s<= 0x6c7)
                return std::__ndk1::__insertion_sort_3<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                    x19, x22, arg3) __tailcall
            
            void* __offset(PileCount, -0x38) x23_2
            int32_t x24_1
            
            if (x8_2 s< 0xda89)
                x23_2 = x19 + (mulu.dp.d(x8_2.d u>> 4 & 0xfff, 0x24924925) u>> 0x20) * 0x38
                int32_t x0_11 = (*arg3)(x23_2, x19)
                int32_t x0_13
                int128_t v0_5
                int128_t v1_5
                int128_t v2_5
                x0_13, v0_5, v1_5, v2_5 = (*arg3)(x22 - 0x38, x23_2)
                
                if ((x0_11 & 1) == 0)
                    if ((x0_13 & 1) == 0)
                        x24_1 = 0
                    else
                        int64_t x8_29 = *(x23_2 + 0x30)
                        int128_t var_90_6 = *(x23_2 + 0x10)
                        int128_t var_80_6 = *(x23_2 + 0x20)
                        int128_t var_a0_6 = *x23_2
                        v1_5 = *(x22 - 0x28)
                        v0_5 = *(x22 - 0x18)
                        v2_5 = *(x22 - 0x38)
                        *(x23_2 + 0x30) = *(x22 - 8)
                        *(x23_2 + 0x10) = v1_5
                        *(x23_2 + 0x20) = v0_5
                        *x23_2 = v2_5
                        *(x22 - 8) = x8_29
                        *(x22 - 0x28) = var_90_6
                        *(x22 - 0x18) = var_80_6
                        *(x22 - 0x38) = var_a0_6
                        int32_t x0_15
                        int128_t v0_6
                        int128_t v1_6
                        int128_t v2_6
                        x0_15, v0_6, v1_6, v2_6 = (*arg3)(x23_2, x19)
                        
                        if ((x0_15 & 1) == 0)
                            x24_1 = 1
                        else
                            int64_t x8_33 = *(x19 + 0x30)
                            int128_t var_90_7 = *(x19 + 0x10)
                            int128_t var_80_7 = *(x19 + 0x20)
                            int128_t var_a0_7 = *x19
                            v1_6 = *(x23_2 + 0x10)
                            v0_6 = *(x23_2 + 0x20)
                            v2_6 = *x23_2
                            *(x19 + 0x30) = *(x23_2 + 0x30)
                            *(x19 + 0x10) = v1_6
                            *(x19 + 0x20) = v0_6
                            *x19 = v2_6
                            *(x23_2 + 0x30) = x8_33
                            *(x23_2 + 0x10) = var_90_7
                            *(x23_2 + 0x20) = var_80_7
                            *x23_2 = var_a0_7
                            x24_1 = 2
                else if ((x0_13 & 1) == 0)
                    int64_t x8_36 = *(x19 + 0x30)
                    int128_t var_90_8 = *(x19 + 0x10)
                    int128_t var_80_8 = *(x19 + 0x20)
                    int128_t var_a0_8 = *x19
                    v1_5 = *(x23_2 + 0x10)
                    v0_5 = *(x23_2 + 0x20)
                    v2_5 = *x23_2
                    *(x19 + 0x30) = *(x23_2 + 0x30)
                    *(x19 + 0x10) = v1_5
                    *(x19 + 0x20) = v0_5
                    *x19 = v2_5
                    *(x23_2 + 0x30) = x8_36
                    *(x23_2 + 0x10) = var_90_8
                    *(x23_2 + 0x20) = var_80_8
                    *x23_2 = var_a0_8
                    int32_t x0_17
                    int128_t v0_7
                    int128_t v1_7
                    int128_t v2_7
                    x0_17, v0_7, v1_7, v2_7 = (*arg3)(x22 - 0x38, x23_2)
                    
                    if ((x0_17 & 1) == 0)
                        x24_1 = 1
                    else
                        int64_t x8_40 = *(x23_2 + 0x30)
                        int128_t var_90_9 = *(x23_2 + 0x10)
                        int128_t var_80_9 = *(x23_2 + 0x20)
                        int128_t var_a0_9 = *x23_2
                        v1_7 = *(x22 - 0x28)
                        v0_7 = *(x22 - 0x18)
                        v2_7 = *(x22 - 0x38)
                        *(x23_2 + 0x30) = *(x22 - 8)
                        *(x23_2 + 0x10) = v1_7
                        *(x23_2 + 0x20) = v0_7
                        *x23_2 = v2_7
                        *(x22 - 8) = x8_40
                        *(x22 - 0x28) = var_90_9
                        *(x22 - 0x18) = var_80_9
                        *(x22 - 0x38) = var_a0_9
                        x24_1 = 2
                else
                    int64_t x8_26 = *(x19 + 0x30)
                    x24_1 = 1
                    int128_t var_90_5 = *(x19 + 0x10)
                    int128_t var_80_5 = *(x19 + 0x20)
                    int128_t var_a0_5 = *x19
                    v1_5 = *(x22 - 0x28)
                    v0_5 = *(x22 - 0x18)
                    v2_5 = *(x22 - 0x38)
                    *(x19 + 0x30) = *(x22 - 8)
                    *(x19 + 0x10) = v1_5
                    *(x19 + 0x20) = v0_5
                    *x19 = v2_5
                    *(x22 - 8) = x8_26
                    *(x22 - 0x28) = var_90_5
                    *(x22 - 0x18) = var_80_5
                    *(x22 - 0x38) = var_a0_5
            else
                x23_2 = x19 + x8_2 u/ 0x70 * 0x38
                int64_t x8_5 = x8_2 u/ 0xe0 * 0x38
                void* x25_1 = x19 + x8_5
                void* x26_1 = x23_2 + x8_5
                x24_1 =
                    std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                    x19, x25_1, x23_2, x26_1, arg3)
                int32_t x0_3
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                x0_3, v0_1, v1_1, v2_1 = (*arg3)(x22 - 0x38, x26_1)
                
                if ((x0_3 & 1) != 0)
                    int64_t x8_7 = *(x26_1 + 0x30)
                    int128_t var_90_1 = *(x26_1 + 0x10)
                    int128_t var_80_1 = *(x26_1 + 0x20)
                    int128_t var_a0_1 = *x26_1
                    v1_1 = *(x22 - 0x28)
                    v0_1 = *(x22 - 0x18)
                    v2_1 = *(x22 - 0x38)
                    *(x26_1 + 0x30) = *(x22 - 8)
                    *(x26_1 + 0x10) = v1_1
                    *(x26_1 + 0x20) = v0_1
                    *x26_1 = v2_1
                    *(x22 - 8) = x8_7
                    *(x22 - 0x28) = var_90_1
                    *(x22 - 0x18) = var_80_1
                    *(x22 - 0x38) = var_a0_1
                    int32_t x0_5
                    int128_t v0_2
                    int128_t v1_2
                    int128_t v2_2
                    x0_5, v0_2, v1_2, v2_2 = (*arg3)(x26_1, x23_2)
                    
                    if ((x0_5 & 1) == 0)
                        x24_1 += 1
                    else
                        int64_t x8_11 = *(x23_2 + 0x30)
                        int128_t var_90_2 = *(x23_2 + 0x10)
                        int128_t var_80_2 = *(x23_2 + 0x20)
                        int128_t var_a0_2 = *x23_2
                        v1_2 = *(x26_1 + 0x10)
                        v0_2 = *(x26_1 + 0x20)
                        v2_2 = *x26_1
                        *(x23_2 + 0x30) = *(x26_1 + 0x30)
                        *(x23_2 + 0x10) = v1_2
                        *(x23_2 + 0x20) = v0_2
                        *x23_2 = v2_2
                        *(x26_1 + 0x30) = x8_11
                        *(x26_1 + 0x10) = var_90_2
                        *(x26_1 + 0x20) = var_80_2
                        *x26_1 = var_a0_2
                        int32_t x0_7
                        int128_t v0_3
                        int128_t v1_3
                        int128_t v2_3
                        x0_7, v0_3, v1_3, v2_3 = (*arg3)(x23_2, x25_1)
                        
                        if ((x0_7 & 1) == 0)
                            x24_1 += 2
                        else
                            int64_t x8_15 = *(x25_1 + 0x30)
                            int128_t var_90_3 = *(x25_1 + 0x10)
                            int128_t var_80_3 = *(x25_1 + 0x20)
                            int128_t var_a0_3 = *x25_1
                            v1_3 = *(x23_2 + 0x10)
                            v0_3 = *(x23_2 + 0x20)
                            v2_3 = *x23_2
                            *(x25_1 + 0x30) = *(x23_2 + 0x30)
                            *(x25_1 + 0x10) = v1_3
                            *(x25_1 + 0x20) = v0_3
                            *x25_1 = v2_3
                            *(x23_2 + 0x30) = x8_15
                            *(x23_2 + 0x10) = var_90_3
                            *(x23_2 + 0x20) = var_80_3
                            *x23_2 = var_a0_3
                            int32_t x0_9
                            int128_t v0_4
                            int128_t v1_4
                            int128_t v2_4
                            x0_9, v0_4, v1_4, v2_4 = (*arg3)(x25_1, x19)
                            
                            if ((x0_9 & 1) == 0)
                                x24_1 += 3
                            else
                                int64_t x8_19 = *(x19 + 0x30)
                                x24_1 += 4
                                int128_t var_90_4 = *(x19 + 0x10)
                                int128_t var_80_4 = *(x19 + 0x20)
                                int128_t var_a0_4 = *x19
                                v1_4 = *(x25_1 + 0x10)
                                v0_4 = *(x25_1 + 0x20)
                                v2_4 = *x25_1
                                *(x19 + 0x30) = *(x25_1 + 0x30)
                                *(x19 + 0x10) = v1_4
                                *(x19 + 0x20) = v0_4
                                *x19 = v2_4
                                *(x25_1 + 0x30) = x8_19
                                *(x25_1 + 0x10) = var_90_4
                                *(x25_1 + 0x20) = var_80_4
                                *x25_1 = var_a0_4
            
            PileCount* x25_2
            void* __offset(PileCount, -0x38) x26_2
            
            if (((*arg3)(x19, x23_2) & 1) == 0)
                void* __offset(PileCount, -0x70) x25_3 = x22 - 0x70
                int128_t v0_8
                int128_t v1_8
                int128_t v2_8
                int32_t x0_21
                
                do
                    if (x19 == x25_3)
                        void* __offset(PileCount, 0x70) x25_4 = x19 + 0x38
                        
                        if (((*arg3)(x19, x22 - 0x38).d & 1) == 0)
                            if (x25_4 == x22 - 0x38)
                                goto label_bb5aec
                            
                            x25_4 = x19 + 0x70
                            int128_t v0_11
                            int128_t v1_11
                            int128_t v2_11
                            
                            while (true)
                                arg1, v0_11, v1_11, v2_11 = (*arg3)(x19, x25_4 - 0x38)
                                
                                if ((arg1.d & 1) != 0)
                                    break
                                
                                x25_4 += 0x38
                                
                                if (x22 == x25_4)
                                    return 
                            
                            int64_t x8_62 = *(x25_4 - 8)
                            int128_t var_90_13 = *(x25_4 - 0x28)
                            int128_t var_80_13 = *(x25_4 - 0x18)
                            int128_t var_a0_13 = *(x25_4 - 0x38)
                            v1_11 = *(x22 - 0x28)
                            v0_11 = *(x22 - 0x18)
                            v2_11 = *(x22 - 0x38)
                            *(x25_4 - 8) = *(x22 - 8)
                            *(x25_4 - 0x18) = v0_11
                            *(x25_4 - 0x28) = v1_11
                            *(x25_4 - 0x38) = v2_11
                            *(x22 - 8) = x8_62
                            *(x22 - 0x28) = var_90_13
                            *(x22 - 0x18) = var_80_13
                            *(x22 - 0x38) = var_a0_13
                        
                        if (x25_4 == x22 - 0x38)
                            goto label_bb5aec
                        
                        void* __offset(PileCount, -0x38) x24_4 = x22 - 0x38
                        
                        while (true)
                            x23_1 = x25_4 - 0x38
                            int32_t x0_35
                            
                            do
                                x23_1 += 0x38
                                x0_35 = (*arg3)(x19, x23_1)
                            while ((x0_35 & 1) == 0)
                            x25_4 = x23_1 + 0x38
                            int128_t v0_12
                            int128_t v1_12
                            int128_t v2_12
                            
                            do
                                x24_4 -= 0x38
                                arg1, v0_12, v1_12, v2_12 = (*arg3)(x19, x24_4)
                            while ((arg1.d & 1) != 0)
                            
                            if (x23_1 u>= x24_4)
                                break
                            
                            int64_t x8_67 = *(x23_1 + 0x30)
                            int128_t var_90_14 = *(x23_1 + 0x10)
                            int128_t var_80_14 = *(x23_1 + 0x20)
                            int128_t var_a0_14 = *x23_1
                            v1_12 = *(x24_4 + 0x10)
                            v0_12 = *(x24_4 + 0x20)
                            v2_12 = *x24_4
                            *(x23_1 + 0x30) = *(x24_4 + 0x30)
                            *(x23_1 + 0x10) = v1_12
                            *(x23_1 + 0x20) = v0_12
                            *x23_1 = v2_12
                            *(x24_4 + 0x30) = x8_67
                            *(x24_4 + 0x10) = var_90_14
                            *(x24_4 + 0x20) = var_80_14
                            *x24_4 = var_a0_14
                        
                        goto label_bb4fd0
                    
                    x0_21, v0_8, v1_8, v2_8 = (*arg3)(x25_3, x23_2)
                    x25_3 -= 0x38
                while ((x0_21 & 1) == 0)
                int64_t x8_45 = *(x19 + 0x30)
                x26_2 = x25_3 + 0x38
                int128_t var_90_10 = *(x19 + 0x10)
                int128_t var_80_10 = *(x19 + 0x20)
                int128_t var_a0_10 = *x19
                v0_8 = *(x25_3 + 0x58)
                v1_8 = *(x25_3 + 0x48)
                v2_8 = *(x25_3 + 0x38)
                *(x19 + 0x30) = *(x25_3 + 0x68)
                x24_1 += 1
                *(x19 + 0x10) = v1_8
                *(x19 + 0x20) = v0_8
                *x19 = v2_8
                *(x25_3 + 0x58) = var_80_10
                *(x25_3 + 0x68) = x8_45
                *(x25_3 + 0x48) = var_90_10
                *(x25_3 + 0x38) = var_a0_10
                x25_2 = x19 + 0x38
                
                if (x25_2 u< x26_2)
                    goto label_bb54dc
                
                goto label_bb547c
            
            x26_2 = x22 - 0x38
            x25_2 = x19 + 0x38
            
            if (x25_2 u< x26_2)
            label_bb54dc:
                void* __offset(PileCount, -0x38) x27_1
                
                while (true)
                    x27_1 = x25_2 - 0x38
                    int32_t x0_23
                    
                    do
                        x27_1 += 0x38
                        x0_23 = (*arg3)(x27_1, x23_2)
                    while ((x0_23 & 1) != 0)
                    x25_2 = x27_1 + 0x38
                    int128_t v0_9
                    int128_t v1_9
                    int32_t x0_25
                    
                    do
                        x26_2 -= 0x38
                        int128_t v2_9
                        x0_25, v0_9, v1_9, v2_9 = (*arg3)(x26_2, x23_2)
                    while ((x0_25 & 1) == 0)
                    
                    if (x27_1 u> x26_2)
                        break
                    
                    int64_t x8_48 = *(x27_1 + 0x30)
                    int128_t var_90_11 = *(x27_1 + 0x10)
                    int128_t var_80_11 = *(x27_1 + 0x20)
                    int128_t var_a0_11 = *x27_1
                    v0_9 = *(x26_2 + 0x20)
                    int64_t x8_49 = *(x26_2 + 0x30)
                    v1_9 = *x26_2
                    x24_1 += 1
                    *(x27_1 + 0x10) = *(x26_2 + 0x10)
                    *(x27_1 + 0x20) = v0_9
                    *(x27_1 + 0x30) = x8_49
                    *x27_1 = v1_9
                    
                    if (x23_2 == x27_1)
                        x23_2 = x26_2
                    
                    *(x26_2 + 0x10) = var_90_11
                    *(x26_2 + 0x20) = var_80_11
                    *(x26_2 + 0x30) = x8_48
                    *x26_2 = var_a0_11
                
                x25_2 = x27_1
                
                if (x25_2 != x23_2)
                    goto label_bb5538
            else
            label_bb547c:
                
                if (x25_2 != x23_2)
                label_bb5538:
                    int32_t x0_27
                    int128_t v0_10
                    int128_t v1_10
                    int128_t v2_10
                    x0_27, v0_10, v1_10, v2_10 = (*arg3)(x23_2, x25_2)
                    
                    if ((x0_27 & 1) != 0)
                        int64_t x8_54 = *(x25_2 + 0x30)
                        x24_1 += 1
                        int128_t var_90_12 = *(x25_2 + 0x10)
                        int128_t var_80_12 = *(x25_2 + 0x20)
                        int128_t var_a0_12 = *x25_2
                        v1_10 = *(x23_2 + 0x10)
                        v0_10 = *(x23_2 + 0x20)
                        v2_10 = *x23_2
                        *(x25_2 + 0x30) = *(x23_2 + 0x30)
                        *(x25_2 + 0x10) = v1_10
                        *(x25_2 + 0x20) = v0_10
                        *x25_2 = v2_10
                        *(x23_2 + 0x30) = x8_54
                        *(x23_2 + 0x10) = var_90_12
                        *(x23_2 + 0x20) = var_80_12
                        *x23_2 = var_a0_12
            
            if (x24_1 != 0)
            label_bb55d8:
                
                if (((x25_2 - x19) s>> 3) * 0x6db6db6db6db6db7
                        s>= ((x22 - x25_2) s>> 3) * 0x6db6db6db6db6db7)
                    std::__ndk1::__sort<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                        x25_2 + 0x38, x22, arg3)
                    x22 = x25_2
                    break
                
                std::__ndk1::__sort<bool (*&)(PileCount const&, PileCount const&), PileCount*>(x19, 
                    x25_2, arg3)
                x23_1 = x25_2 + 0x38
                continue
            else
                int32_t x0_29 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                    x19, x25_2, arg3)
                x23_1 = x25_2 + 0x38
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(PileCount const&, PileCount const&), PileCount*>(
                        x23_1, x22, arg3).d & 1) != 0)
                    x22 = x25_2
                    
                    if ((x0_29 & 1) == 0)
                        break
                else
                    if ((x0_29 & 1) == 0)
                        goto label_bb55d8
                    
                    continue
    label_bb5aec:
        return 
