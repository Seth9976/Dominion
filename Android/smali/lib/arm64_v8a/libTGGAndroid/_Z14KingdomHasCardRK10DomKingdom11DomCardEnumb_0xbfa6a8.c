// 函数: _Z14KingdomHasCardRK10DomKingdom11DomCardEnumb
// 地址: 0xbfa6a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0x923)
    int32_t x9_1 = *arg1
    
    if (x9_1 == 0)
    label_bfa750:
        int32_t x10_1 = *(arg1 + 0x170)
        
        if (x10_1 == arg2 || (arg3.d & 1) != 0)
            return zx.q(x10_1 == arg2 ? 1 : 0)
        
        if (*(arg1 + 0x118) != arg2)
            return 0
        
        if (x9_1 == 0)
        label_bfa818:
            
            if (x10_1 != 0x707)
                return 0
        else if (x9_1 != 0x707)
            int32_t x8_12 = *(arg1 + 4)
            
            if (x8_12 != 0x707)
                if (x8_12 == 0)
                    goto label_bfa818
                
                int32_t x8_13 = *(arg1 + 8)
                
                if (x8_13 == 0)
                    goto label_bfa818
                
                if (x8_13 != 0x707)
                    int32_t x8_14 = *(arg1 + 0xc)
                    
                    if (x8_14 == 0)
                        goto label_bfa818
                    
                    if (x8_14 != 0x707)
                        int32_t x8_15 = *(arg1 + 0x10)
                        
                        if (x8_15 == 0)
                            goto label_bfa818
                        
                        if (x8_15 != 0x707)
                            int32_t x8_16 = *(arg1 + 0x14)
                            
                            if (x8_16 == 0)
                                goto label_bfa818
                            
                            if (x8_16 != 0x707)
                                int32_t x8_17 = *(arg1 + 0x18)
                                
                                if (x8_17 == 0)
                                    goto label_bfa818
                                
                                if (x8_17 != 0x707)
                                    int32_t x8_18 = *(arg1 + 0x1c)
                                    
                                    if (x8_18 == 0)
                                        goto label_bfa818
                                    
                                    if (x8_18 != 0x707)
                                        int32_t x8_19 = *(arg1 + 0x20)
                                        
                                        if (x8_19 == 0)
                                            goto label_bfa818
                                        
                                        if (x8_19 != 0x707)
                                            if (*(arg1 + 0x24) == 0x707 || x10_1 == 0x707)
                                                return 1
                                            
                                            return 0
    else if (x9_1 != arg2)
        int32_t x8_1 = *(arg1 + 4)
        
        if (x8_1 == 0)
            goto label_bfa750
        
        if (x8_1 != arg2)
            int32_t x8_2 = *(arg1 + 8)
            
            if (x8_2 == 0)
                goto label_bfa750
            
            if (x8_2 != arg2)
                int32_t x8_3 = *(arg1 + 0xc)
                
                if (x8_3 == 0)
                    goto label_bfa750
                
                if (x8_3 != arg2)
                    int32_t x8_4 = *(arg1 + 0x10)
                    
                    if (x8_4 == 0)
                        goto label_bfa750
                    
                    if (x8_4 != arg2)
                        int32_t x8_5 = *(arg1 + 0x14)
                        
                        if (x8_5 == 0)
                            goto label_bfa750
                        
                        if (x8_5 != arg2)
                            int32_t x8_6 = *(arg1 + 0x18)
                            
                            if (x8_6 == 0)
                                goto label_bfa750
                            
                            if (x8_6 != arg2)
                                int32_t x8_7 = *(arg1 + 0x1c)
                                
                                if (x8_7 == 0)
                                    goto label_bfa750
                                
                                if (x8_7 != arg2)
                                    int32_t x8_8 = *(arg1 + 0x20)
                                    
                                    if (x8_8 == 0)
                                        goto label_bfa750
                                    
                                    if (x8_8 != arg2)
                                        int32_t x8_9 = *(arg1 + 0x24)
                                        
                                        if (x8_9 == 0 || x8_9 != arg2)
                                            goto label_bfa750

return 1
