// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK9PileCountS3_EPS1_EEbT0_S8_T_
// 地址: 0xbb60ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * 0x6db6db6db6db6db7
char x8_3
int128_t var_80

if (x8_2 u> 5)
    void* __offset(PileCount, 0xa8) x22_2 = arg1 + 0x70
    int32_t x0_7 = (*arg3)(arg1 + 0x38, arg1)
    int32_t x0_9
    uint64_t x9_1
    int128_t v0_3
    int128_t v1_3
    int128_t v2_3
    x0_9, x9_1, v0_3, v1_3, v2_3 = (*arg3)(x22_2, arg1 + 0x38)
    
    if ((x0_7 & 1) == 0)
        if ((x0_9 & 1) != 0)
            int64_t x8_36 = *(arg1 + 0x68)
            int128_t var_70_9 = *(arg1 + 0x48)
            int128_t var_60_9 = *(arg1 + 0x58)
            var_80 = *(arg1 + 0x38)
            v1_3 = *(x22_2 + 0x10)
            v0_3 = *(x22_2 + 0x20)
            v2_3 = *x22_2
            *(arg1 + 0x68) = *(x22_2 + 0x30)
            *(arg1 + 0x48) = v1_3
            *(arg1 + 0x58) = v0_3
            *(arg1 + 0x38) = v2_3
            v2_3 = var_80
            *(x22_2 + 0x30) = x8_36
            *(x22_2 + 0x10) = var_70_9
            *(x22_2 + 0x20) = var_60_9
            *x22_2 = v2_3
            int32_t x0_23
            int128_t v0_8
            int128_t v1_8
            int128_t v2_8
            x0_23, x9_1, v0_8, v1_8, v2_8 = (*arg3)(arg1 + 0x38, arg1)
            
            if ((x0_23 & 1) != 0)
                int64_t x8_40 = *(arg1 + 0x30)
                int128_t var_70_10 = *(arg1 + 0x10)
                int128_t var_60_10 = *(arg1 + 0x20)
                var_80 = *arg1
                v1_8 = *(arg1 + 0x48)
                v0_8 = *(arg1 + 0x58)
                v2_8 = *(arg1 + 0x38)
                *(arg1 + 0x30) = *(arg1 + 0x68)
                *(arg1 + 0x10) = v1_8
                *(arg1 + 0x20) = v0_8
                *arg1 = v2_8
                v2_8 = var_80
                *(arg1 + 0x68) = x8_40
                *(arg1 + 0x48) = var_70_10
                *(arg1 + 0x58) = var_60_10
                *(arg1 + 0x38) = v2_8
    else
        int128_t var_70_3
        int128_t var_60_3
        int64_t var_50_3
        
        if ((x0_9 & 1) == 0)
            int64_t x8_50 = *(arg1 + 0x30)
            int128_t var_70_12 = *(arg1 + 0x10)
            int128_t var_60_12 = *(arg1 + 0x20)
            var_80 = *arg1
            v1_3 = *(arg1 + 0x48)
            v0_3 = *(arg1 + 0x58)
            v2_3 = *(arg1 + 0x38)
            *(arg1 + 0x30) = *(arg1 + 0x68)
            *(arg1 + 0x10) = v1_3
            *(arg1 + 0x20) = v0_3
            *arg1 = v2_3
            v2_3 = var_80
            *(arg1 + 0x68) = x8_50
            *(arg1 + 0x48) = var_70_12
            *(arg1 + 0x58) = var_60_12
            *(arg1 + 0x38) = v2_3
            int32_t x0_27
            x0_27, x9_1, v0_3, v1_3, v2_3 = (*arg3)(x22_2, arg1 + 0x38)
            
            if ((x0_27 & 1) != 0)
                var_50_3 = *(arg1 + 0x68)
                var_70_3 = *(arg1 + 0x48)
                var_60_3 = *(arg1 + 0x58)
                var_80 = *(arg1 + 0x38)
                v1_3 = *(x22_2 + 0x10)
                v0_3 = *(x22_2 + 0x20)
                v2_3 = *x22_2
                *(arg1 + 0x68) = *(x22_2 + 0x30)
                *(arg1 + 0x48) = v1_3
                *(arg1 + 0x58) = v0_3
                *(arg1 + 0x38) = v2_3
                goto label_bb669c
        else
            var_50_3 = *(arg1 + 0x30)
            var_70_3 = *(arg1 + 0x10)
            var_60_3 = *(arg1 + 0x20)
            var_80 = *arg1
            v1_3 = *(x22_2 + 0x10)
            v0_3 = *(x22_2 + 0x20)
            v2_3 = *x22_2
            *(arg1 + 0x30) = *(x22_2 + 0x30)
            *(arg1 + 0x10) = v1_3
            *(arg1 + 0x20) = v0_3
            *arg1 = v2_3
        label_bb669c:
            v2_3 = var_80
            *(x22_2 + 0x30) = var_50_3
            *(x22_2 + 0x10) = var_70_3
            *(x22_2 + 0x20) = var_60_3
            *x22_2 = v2_3
    
    void* __offset(PileCount, 0xa8) x8_58 = arg1 + 0xa8
    char x8_62
    
    if (x8_58 == arg2)
    label_bb677c:
        x8_62 = 1
    else
        int64_t x23_4 = 0
        int32_t x24_3 = 0
        
        while (true)
            void* __offset(PileCount, 0xa8) x1_15 = x22_2
            x22_2 = x8_58
            int32_t x0_29
            int128_t v0_9
            int128_t v1_9
            int128_t v2_9
            x0_29, x9_1, v0_9, v1_9, v2_9 = (*arg3)(x8_58, x1_15)
            
            if ((x0_29 & 1) != 0)
                uint64_t x8_59 = *(x22_2 + 0x30)
                int64_t x25_1 = x23_4
                int128_t var_70_13 = *(x22_2 + 0x10)
                int128_t var_60_13 = *(x22_2 + 0x20)
                var_80 = *x22_2
                void* x8_57
                
                while (true)
                    void* x8_60 = arg1 + x25_1
                    v1_9 = *(x8_60 + 0x80)
                    v2_9 = *(x8_60 + 0x90)
                    int64_t x9_3 = *(x8_60 + 0xa0)
                    *(x8_60 + 0xa8) = *(x8_60 + 0x70)
                    *(x8_60 + 0xb8) = v1_9
                    *(x8_60 + 0xc8) = v2_9
                    *(x8_60 + 0xd8) = x9_3
                    
                    if (x25_1 == -0x70)
                        x8_57 = arg1
                        break
                    
                    int32_t x0_31
                    x0_31, v0_9, v1_9, v2_9 = (*arg3)(&var_80, x8_60 + 0x38)
                    x25_1 -= 0x38
                    
                    if ((x0_31 & 1) == 0)
                        x8_57 = arg1 + x25_1 + 0xa8
                        break
                
                v0_9 = var_80
                x9_1 = x8_59
                x24_3 += 1
                *(x8_57 + 0x30) = x9_1
                *(x8_57 + 0x10) = var_70_13
                *(x8_57 + 0x20) = var_60_13
                *x8_57 = v0_9
                
                if (x24_3 == 8)
                    x8_62 = 0
                    x9_1 = zx.q(x22_2 + 0x38 == arg2 ? 1 : 0)
                    break
            
            x8_58 = x22_2 + 0x38
            x23_4 += 0x38
            
            if (x8_58 == arg2)
                goto label_bb677c
    
    x8_3 = x8_62 | x9_1.b
else
    x8_3 = 1
    void* __offset(PileCount, 0x38) x22_1
    int128_t v0_7
    int128_t v1_7
    int128_t v2_7
    
    switch (x8_2)
        case 2
            int32_t x0_1
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            x0_1, v0_1, v1_1, v2_1 = (*arg3)(arg2 - 0x38, arg1)
            
            if ((x0_1 & 1) == 0)
                x8_3 = 1
            else
                int64_t x8_5 = *(arg1 + 0x30)
                int128_t var_70_1 = *(arg1 + 0x10)
                int128_t var_60_1 = *(arg1 + 0x20)
                var_80 = *arg1
                v1_1 = *(arg2 - 0x28)
                v0_1 = *(arg2 - 0x18)
                v2_1 = *(arg2 - 0x38)
                *(arg1 + 0x30) = *(arg2 - 8)
                *(arg1 + 0x10) = v1_1
                *(arg1 + 0x20) = v0_1
                *arg1 = v2_1
                v2_1 = var_80
                *(arg2 - 8) = x8_5
                *(arg2 - 0x28) = var_70_1
                *(arg2 - 0x18) = var_60_1
                *(arg2 - 0x38) = v2_1
                x8_3 = 1
        case 3
            x22_1 = arg1 + 0x38
            int32_t x0_3 = (*arg3)(x22_1, arg1)
            int32_t x0_5
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            x0_5, v0_2, v1_2, v2_2 = (*arg3)(arg2 - 0x38, x22_1)
            
            if ((x0_3 & 1) == 0)
                if ((x0_5 & 1) == 0)
                    x8_3 = 1
                else
                    int64_t x8_29 = *(x22_1 + 0x30)
                    int128_t var_70_7 = *(x22_1 + 0x10)
                    int128_t var_60_7 = *(x22_1 + 0x20)
                    var_80 = *x22_1
                    v1_2 = *(arg2 - 0x28)
                    v0_2 = *(arg2 - 0x18)
                    v2_2 = *(arg2 - 0x38)
                    *(x22_1 + 0x30) = *(arg2 - 8)
                    *(x22_1 + 0x10) = v1_2
                    *(x22_1 + 0x20) = v0_2
                    *x22_1 = v2_2
                    v2_2 = var_80
                    *(arg2 - 8) = x8_29
                    *(arg2 - 0x28) = var_70_7
                    *(arg2 - 0x18) = var_60_7
                    *(arg2 - 0x38) = v2_2
                    int32_t x0_21
                    x0_21, v0_7, v1_7, v2_7 = (*arg3)(x22_1, arg1)
                    
                    if ((x0_21 & 1) == 0)
                        x8_3 = 1
                    else
                    label_bb6458:
                        int64_t x8_33 = *(arg1 + 0x30)
                        int128_t var_70_8 = *(arg1 + 0x10)
                        int128_t var_60_8 = *(arg1 + 0x20)
                        var_80 = *arg1
                        v1_7 = *(x22_1 + 0x10)
                        v0_7 = *(x22_1 + 0x20)
                        v2_7 = *x22_1
                        *(arg1 + 0x30) = *(x22_1 + 0x30)
                        *(arg1 + 0x10) = v1_7
                        *(arg1 + 0x20) = v0_7
                        *arg1 = v2_7
                        v2_7 = var_80
                        *(x22_1 + 0x30) = x8_33
                        *(x22_1 + 0x10) = var_70_8
                        *(x22_1 + 0x20) = var_60_8
                        *x22_1 = v2_7
                        x8_3 = 1
            else
                int128_t var_70_2
                int128_t var_60_2
                int64_t var_50_2
                
                if ((x0_5 & 1) == 0)
                    int64_t x8_43 = *(arg1 + 0x30)
                    int128_t var_70_11 = *(arg1 + 0x10)
                    int128_t var_60_11 = *(arg1 + 0x20)
                    var_80 = *arg1
                    v1_2 = *(x22_1 + 0x10)
                    v0_2 = *(x22_1 + 0x20)
                    v2_2 = *x22_1
                    *(arg1 + 0x30) = *(x22_1 + 0x30)
                    *(arg1 + 0x10) = v1_2
                    *(arg1 + 0x20) = v0_2
                    *arg1 = v2_2
                    v2_2 = var_80
                    *(x22_1 + 0x30) = x8_43
                    *(x22_1 + 0x10) = var_70_11
                    *(x22_1 + 0x20) = var_60_11
                    *x22_1 = v2_2
                    int32_t x0_25
                    x0_25, v0_2, v1_2, v2_2 = (*arg3)(arg2 - 0x38, x22_1)
                    
                    if ((x0_25 & 1) != 0)
                        var_50_2 = *(x22_1 + 0x30)
                        var_70_2 = *(x22_1 + 0x10)
                        var_60_2 = *(x22_1 + 0x20)
                        var_80 = *x22_1
                        v1_2 = *(arg2 - 0x28)
                        v0_2 = *(arg2 - 0x18)
                        v2_2 = *(arg2 - 0x38)
                        *(x22_1 + 0x30) = *(arg2 - 8)
                        *(x22_1 + 0x10) = v1_2
                        *(x22_1 + 0x20) = v0_2
                        *x22_1 = v2_2
                        goto label_bb65e8
                    
                    x8_3 = 1
                else
                    var_50_2 = *(arg1 + 0x30)
                    var_70_2 = *(arg1 + 0x10)
                    var_60_2 = *(arg1 + 0x20)
                    var_80 = *arg1
                    v1_2 = *(arg2 - 0x28)
                    v0_2 = *(arg2 - 0x18)
                    v2_2 = *(arg2 - 0x38)
                    *(arg1 + 0x30) = *(arg2 - 8)
                    *(arg1 + 0x10) = v1_2
                    *(arg1 + 0x20) = v0_2
                    *arg1 = v2_2
                label_bb65e8:
                    v2_2 = var_80
                    *(arg2 - 8) = var_50_2
                    *(arg2 - 0x28) = var_70_2
                    *(arg2 - 0x18) = var_60_2
                    *(arg2 - 0x38) = v2_2
                    x8_3 = 1
        case 4
            std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(arg1, 
                arg1 + 0x38, arg1 + 0x70, arg2 - 0x38, arg3)
            x8_3 = 1
        case 5
            x22_1 = arg1 + 0x38
            std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(arg1, 
                x22_1, arg1 + 0x70, arg1 + 0xa8, arg3)
            int32_t x0_13
            int128_t v0_4
            int128_t v1_4
            int128_t v2_4
            x0_13, v0_4, v1_4, v2_4 = (*arg3)(arg2 - 0x38, arg1 + 0xa8)
            
            if ((x0_13 & 1) == 0)
                x8_3 = 1
            else
                int64_t x8_17 = *(arg1 + 0xd8)
                int128_t var_70_4 = *(arg1 + 0xb8)
                int128_t var_60_4 = *(arg1 + 0xc8)
                var_80 = *(arg1 + 0xa8)
                v1_4 = *(arg2 - 0x28)
                v0_4 = *(arg2 - 0x18)
                v2_4 = *(arg2 - 0x38)
                *(arg1 + 0xd8) = *(arg2 - 8)
                *(arg1 + 0xb8) = v1_4
                *(arg1 + 0xc8) = v0_4
                *(arg1 + 0xa8) = v2_4
                v2_4 = var_80
                *(arg2 - 8) = x8_17
                *(arg2 - 0x28) = var_70_4
                *(arg2 - 0x18) = var_60_4
                *(arg2 - 0x38) = v2_4
                int32_t x0_15
                int128_t v0_5
                int128_t v1_5
                int128_t v2_5
                x0_15, v0_5, v1_5, v2_5 = (*arg3)(arg1 + 0xa8, arg1 + 0x70)
                
                if ((x0_15 & 1) == 0)
                    x8_3 = 1
                else
                    int64_t x8_21 = *(arg1 + 0xa0)
                    int128_t var_70_5 = *(arg1 + 0x80)
                    int128_t var_60_5 = *(arg1 + 0x90)
                    var_80 = *(arg1 + 0x70)
                    v1_5 = *(arg1 + 0xb8)
                    v0_5 = *(arg1 + 0xc8)
                    v2_5 = *(arg1 + 0xa8)
                    *(arg1 + 0xa0) = *(arg1 + 0xd8)
                    *(arg1 + 0x80) = v1_5
                    *(arg1 + 0x90) = v0_5
                    *(arg1 + 0x70) = v2_5
                    v2_5 = var_80
                    *(arg1 + 0xd8) = x8_21
                    *(arg1 + 0xb8) = var_70_5
                    *(arg1 + 0xc8) = var_60_5
                    *(arg1 + 0xa8) = v2_5
                    int32_t x0_17
                    int128_t v0_6
                    int128_t v1_6
                    int128_t v2_6
                    x0_17, v0_6, v1_6, v2_6 = (*arg3)(arg1 + 0x70, x22_1)
                    
                    if ((x0_17 & 1) == 0)
                        x8_3 = 1
                    else
                        int64_t x8_25 = *(x22_1 + 0x30)
                        int128_t var_70_6 = *(x22_1 + 0x10)
                        int128_t var_60_6 = *(x22_1 + 0x20)
                        var_80 = *x22_1
                        v1_6 = *(arg1 + 0x80)
                        v0_6 = *(arg1 + 0x90)
                        v2_6 = *(arg1 + 0x70)
                        *(x22_1 + 0x30) = *(arg1 + 0xa0)
                        *(x22_1 + 0x10) = v1_6
                        *(x22_1 + 0x20) = v0_6
                        *x22_1 = v2_6
                        v2_6 = var_80
                        *(arg1 + 0xa0) = x8_25
                        *(arg1 + 0x80) = var_70_6
                        *(arg1 + 0x90) = var_60_6
                        *(arg1 + 0x70) = v2_6
                        int32_t x0_19
                        x0_19, v0_7, v1_7, v2_7 = (*arg3)(x22_1, arg1)
                        
                        if ((x0_19 & 1) != 0)
                            goto label_bb6458
                        
                        x8_3 = 1
return x8_3 & 1
