// 函数: _Z19SetupHasKingdomCardRK14DomSetupConfig11DomCardEnum
// 地址: 0x9e76f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_19 = *arg1

if (x8_19 != 0)
    if (x8_19 == 1 && *(arg1 + 4) == arg2)
        return 1
    
    int32_t x8_1 = *(arg1 + 0x10)
    
    if (x8_1 == 1)
        if (*(arg1 + 0x14) == arg2)
            return 1
        
        goto label_9e773c
    
    if (x8_1 != 0)
    label_9e773c:
        int32_t x8_3 = *(arg1 + 0x20)
        
        if (x8_3 != 0)
            if (x8_3 == 1 && *(arg1 + 0x24) == arg2)
                return 1
            
            int32_t x8_5 = *(arg1 + 0x30)
            
            if (x8_5 != 0)
                if (x8_5 == 1 && *(arg1 + 0x34) == arg2)
                    return 1
                
                int32_t x8_7 = *(arg1 + 0x40)
                
                if (x8_7 != 0)
                    if (x8_7 == 1 && *(arg1 + 0x44) == arg2)
                        return 1
                    
                    int32_t x8_9 = *(arg1 + 0x50)
                    
                    if (x8_9 != 0)
                        if (x8_9 == 1 && *(arg1 + 0x54) == arg2)
                            return 1
                        
                        int32_t x8_11 = *(arg1 + 0x60)
                        
                        if (x8_11 != 0)
                            if (x8_11 == 1 && *(arg1 + 0x64) == arg2)
                                return 1
                            
                            int32_t x8_13 = *(arg1 + 0x70)
                            
                            if (x8_13 != 0)
                                if (x8_13 == 1 && *(arg1 + 0x74) == arg2)
                                    return 1
                                
                                int32_t x8_15 = *(arg1 + 0x80)
                                
                                if (x8_15 != 0)
                                    if (x8_15 == 1 && *(arg1 + 0x84) == arg2)
                                        return 1
                                    
                                    int32_t x8_17 = *(arg1 + 0x90)
                                    
                                    if (x8_17 != 0 && x8_17 == 1 && *(arg1 + 0x94) == arg2)
                                        return 1

return 0
