// 函数: _Z23LandscapeCountSetAmountR15LandscapeCounts19LandscapeEntryIndex17LandscapeBoundaryi
// 地址: 0xba7d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u<= 5)
    void* __offset(LandscapeCounts, 0x50) x8_2
    uint32_t x9_2
    int32_t x10_3
    
    switch (arg2)
        case 0
            x8_2 = arg1
            int32_t x11_2
            
            if (arg3 != 0)
            label_ba7d8c:
                int32_t x9_1 = *x8_2
                int32_t x10_2 = *(x8_2 + 8)
                *(x8_2 + 8) = arg4
                *(x8_2 + 0xc) = arg4
                int32_t x13_1 = arg4 - x10_2
                int32_t x12_1
                
                x12_1 = x9_1 s> arg4 ? arg4 : x9_1
                
                x11_2 = x13_1 s> 0 ? 1 : 0
                x10_3 = arg3 == 1 ? 1 : 0
                x9_2 = x13_1 u>> 0x1f
                *x8_2 = x12_1
                
                if (arg2 != 0 && arg3 == 1 && (x13_1 & 0x80000000) != 0)
                    int32_t x9_3
                    int32_t x9_6
                    int32_t x9_7
                    int32_t x9_8
                    
                    if (arg2 != 1)
                        x9_3 = *(arg1 + 0x18)
                        
                        if (arg2 == 2)
                            goto label_ba7e38
                        
                        x9_6 = *(arg1 + 0x28) + x9_3
                        
                        if (arg2 == 3)
                            goto label_ba7e40
                        
                        x9_7 = *(arg1 + 0x38) + x9_6
                        
                        if (arg2 == 4)
                            goto label_ba7e4c
                        
                        x9_8 = *(arg1 + 0x48) + x9_7
                        
                        if (x9_8 s> x12_1)
                            *arg1 = x9_8
                    else
                        x9_3 = *(arg1 + 0x28)
                    label_ba7e38:
                        x9_6 = *(arg1 + 0x38) + x9_3
                    label_ba7e40:
                        x9_7 = *(arg1 + 0x48) + x9_6
                    label_ba7e4c:
                        x9_8 = *(arg1 + 0x58) + x9_7
                        
                        if (x9_8 s> x12_1)
                            *arg1 = x9_8
                    x9_2 = 1
                    x10_3 = 1
                
                if ((arg3 | arg2) == 0)
                label_ba7eb4:
                    
                    if (x11_2 != 0)
                        if (arg2 != 1)
                            while (true)
                                int32_t x7_7 = *(arg1 + 0x18)
                                int32_t x19_13
                                
                                if (arg2 != 2)
                                    int32_t x19_11 = *(arg1 + 0x28) + x7_7
                                    
                                    if (arg2 != 3)
                                        x19_13 = *(arg1 + 0x38) + x19_11
                                        
                                        if (arg2 == 4)
                                            x19_13 += *(arg1 + 0x58)
                                        else
                                            x19_13 += *(arg1 + 0x48)
                                            
                                            if (arg2 != 5)
                                                x19_13 += *(arg1 + 0x58)
                                    else
                                        x19_13 = *(arg1 + 0x58) + *(arg1 + 0x48) + x19_11
                                else
                                    x19_13 = *(arg1 + 0x58) + *(arg1 + 0x48) + *(arg1 + 0x38) + x7_7
                                
                                if (x19_13 s>= *x8_2)
                                    break
                                
                                int32_t x19_14 = *(arg1 + 0x28)
                                int32_t x20_6 = *(arg1 + 0x38)
                                int32_t x7_8
                                
                                x7_8 = x7_7 s< 0x3e8 ? x7_7 : 0x3e8
                                
                                int32_t x21_2
                                
                                x21_2 = x7_7 s>= 0x3e8 ? -1 : 1
                                
                                int32_t x7_9
                                
                                x7_9 = x19_14 s< x7_8 ? x19_14 : x7_8
                                
                                int32_t x19_15 = *(arg1 + 0x48)
                                int32_t x21_3
                                
                                x21_3 = x19_14 s< x7_8 ? 2 : x21_2
                                
                                int32_t x7_10
                                
                                x7_10 = x20_6 s< x7_9 ? x20_6 : x7_9
                                
                                int32_t x21_4
                                
                                x21_4 = x20_6 s< x7_9 ? 3 : x21_3
                                
                                int32_t x7_11
                                
                                x7_11 = x19_15 s< x7_10 ? x19_15 : x7_10
                                
                                int32_t x19_16
                                
                                x19_16 = x19_15 s< x7_10 ? 4 : x21_4
                                
                                uint64_t x7_12
                                
                                if (*(arg1 + 0x58) s< x7_11)
                                    x7_12 = 5
                                else
                                    x7_12 = zx.q(x19_16)
                                
                                if (x7_12.d u> 5)
                                    goto label_ba82a8
                                
                                void* __offset(LandscapeCounts, 0x10) x7_6 = arg1 + 0x10
                                
                                switch (x7_12)
                                    case 2
                                        x7_6 = arg1 + 0x20
                                    case 3
                                        x7_6 = arg1 + 0x30
                                    case 4
                                        x7_6 = arg1 + 0x40
                                    case 5
                                        x7_6 = arg1 + 0x50
                                
                                *(x7_6 + 8) += 1
                        else
                            int32_t x19_1 = *(arg1 + 0x28)
                            int32_t x7_1 = *(arg1 + 0x38)
                            int32_t x20_1 = *(arg1 + 0x48)
                            int32_t x21_1 = *(arg1 + 0x58)
                            
                            while (x21_1 + x20_1 + x7_1 + x19_1 s< *x8_2)
                                int32_t x22_2 = *(arg1 + 0x18)
                                int32_t x22_3
                                
                                x22_3 = x22_2 s< 0x3e8 ? x22_2 : 0x3e8
                                
                                int32_t x23_4
                                
                                x23_4 = x22_2 s>= 0x3e8 ? -1 : 1
                                
                                int32_t x19_4
                                
                                x19_4 = x19_1 s< x22_3 ? x19_1 : x22_3
                                
                                int32_t x22_4
                                
                                x22_4 = x19_1 s< x22_3 ? 2 : x23_4
                                
                                int32_t x7_3
                                
                                x7_3 = x7_1 s< x19_4 ? x7_1 : x19_4
                                
                                int32_t x19_5
                                
                                x19_5 = x7_1 s< x19_4 ? 3 : x22_4
                                
                                int32_t x7_4
                                
                                x7_4 = x20_1 s< x7_3 ? x20_1 : x7_3
                                
                                int32_t x19_6
                                
                                x19_6 = x20_1 s< x7_3 ? 4 : x19_5
                                
                                uint64_t x7_5
                                
                                if (x21_1 s< x7_4)
                                    x7_5 = 5
                                else
                                    x7_5 = zx.q(x19_6)
                                
                                if (x7_5.d u> 5)
                                    goto label_ba82a8
                                
                                void* __offset(LandscapeCounts, 0x30) x7_2 = arg1 + 0x10
                                
                                switch (x7_5)
                                    case 2
                                        x7_2 = arg1 + 0x20
                                    case 3
                                        x7_2 = arg1 + 0x30
                                    case 4
                                        x7_2 = arg1 + 0x40
                                    case 5
                                        x7_2 = arg1 + 0x50
                                
                                *(x7_2 + 8) += 1
                                x19_1 = *(arg1 + 0x28)
                                x7_1 = *(arg1 + 0x38)
                                x20_1 = *(arg1 + 0x48)
                                x21_1 = *(arg1 + 0x58)
            else
            label_ba7de4:
                int32_t x10_4 = *(x8_2 + 8)
                int32_t x9_4 = *x8_2
                *x8_2 = arg4
                *(x8_2 + 4) = arg4
                int32_t x9_5 = arg4 - x9_4
                int32_t x10_5
                
                x10_5 = x10_4 s< arg4 ? arg4 : x10_4
                
                x11_2 = x9_5 s> 0 ? 1 : 0
                *(x8_2 + 8) = x10_5
                
                if (arg2 != 0 && x9_5 s>= 1)
                    void* __offset(LandscapeCounts, 0x40) x12_2 = arg1 + 0x40
                    int32_t x13_4
                    int32_t x13_2
                    
                    if (arg2 != 1)
                        x13_2 = *(arg1 + 0x10)
                        
                        if (arg2 == 2)
                            goto label_ba7e80
                        
                        int32_t x13_3 = *(arg1 + 0x20) + x13_2
                        
                        if (arg2 == 3)
                            x13_4 = *x12_2 + x13_3
                            x12_2 = arg1 + 0x50
                        else
                            x13_4 = *(arg1 + 0x30) + x13_3
                            
                            if (arg2 == 4)
                                x12_2 = arg1 + 0x50
                    else
                        x13_2 = *(arg1 + 0x20)
                    label_ba7e80:
                        x13_4 = *x12_2 + *(arg1 + 0x30) + x13_2
                        x12_2 = arg1 + 0x50
                    int32_t x12_6 = *x12_2 + x13_4
                    
                    if (x12_6 s> x10_5)
                        *(arg1 + 8) = x12_6
                
                x10_3 = 0
                x9_2 = x9_5 u>> 0x1f
                
                if ((arg3 | arg2) == 0)
                    goto label_ba7eb4
        case 1
            x8_2 = arg1 + 0x10
            
            if (arg3 != 0)
                goto label_ba7d8c
            
            goto label_ba7de4
        case 2
            x8_2 = arg1 + 0x20
            
            if (arg3 != 0)
                goto label_ba7d8c
            
            goto label_ba7de4
        case 3
            x8_2 = arg1 + 0x30
            
            if (arg3 != 0)
                goto label_ba7d8c
            
            goto label_ba7de4
        case 4
            x8_2 = arg1 + 0x40
            
            if (arg3 == 0)
                goto label_ba7de4
            
            goto label_ba7d8c
        case 5
            x8_2 = arg1 + 0x50
            
            if (arg3 != 0)
                goto label_ba7d8c
            
            goto label_ba7de4
    
    if ((x9_2 & (arg2 == 0 ? 1 : 0) & x10_3) != 1
            || *(arg1 + 0x50) + *(arg1 + 0x40) + *(arg1 + 0x30) + *(arg1 + 0x20) + *(arg1 + 0x10)
            s<= *(x8_2 + 8))
        return 
    
    while (true)
        int32_t x3_6 = *(arg1 + 0x10)
        int32_t x4_5 = *(arg1 + 0x20)
        int32_t x5_2 = *(arg1 + 0x30)
        int32_t x6_2 = x3_6 & not.d(x3_6 s>> 0x1f)
        int32_t x3_7
        
        x3_7 = x3_6 s<= 0 ? -1 : 1
        
        int32_t x4_6
        
        x4_6 = x4_5 s> x6_2 ? x4_5 : x6_2
        
        int32_t x6_3 = *(arg1 + 0x40)
        int32_t x3_8
        
        x3_8 = x4_5 s> x6_2 ? 2 : x3_7
        
        int32_t x4_7
        
        x4_7 = x5_2 s> x4_6 ? x5_2 : x4_6
        
        int32_t x3_9
        
        x3_9 = x5_2 s> x4_6 ? 3 : x3_8
        
        int32_t x4_8
        
        x4_8 = x6_3 s> x4_7 ? x6_3 : x4_7
        
        int32_t x3_10
        
        x3_10 = x6_3 s> x4_7 ? 4 : x3_9
        
        uint64_t x3_11
        
        if (*(arg1 + 0x50) s> x4_8)
            x3_11 = 5
        else
            x3_11 = zx.q(x3_10)
        
        if (x3_11.d u> 5)
            break
        
        void* __offset(LandscapeCounts, 0x40) x3 = arg1 + 0x10
        
        switch (x3_11)
            case 2
                x3 = arg1 + 0x20
            case 3
                x3 = arg1 + 0x30
            case 4
                x3 = arg1 + 0x40
            case 5
                x3 = arg1 + 0x50
        
        *x3 -= 1
        
        if (*(arg1 + 0x50) + *(arg1 + 0x40) + *(arg1 + 0x30) + *(arg1 + 0x20) + *(arg1 + 0x10)
                s<= *(x8_2 + 8))
            return 

label_ba82a8:
pthread_kill(pthread_self(), 6)
return LandscapeModifiersUpdate(XNoReturn()) __tailcall
