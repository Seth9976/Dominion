// 函数: _Z20HasReferncePileSetupRK10DomCardDefPPFb11DomCardEnumE
// 地址: 0xbf6f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_10 = *(arg1 + 0xe0)

if (x8_10 != 0)
    int64_t x8
    
    if (x8_10 == 0xe)
        x8 = 0
    label_bf6f84:
        
        if (arg2 == 0)
            return 1
        
        *arg2 = *(arg1 + x8 * 0xc0 + 0x108)
        return 1
    
    int32_t x8_1 = *(arg1 + 0x1a0)
    
    if (x8_1 == 0xe)
        x8 = 1
        goto label_bf6f84
    
    if (x8_1 != 0)
        int32_t x8_2 = *(arg1 + 0x260)
        
        if (x8_2 != 0)
            if (x8_2 == 0xe)
                x8 = 2
                goto label_bf6f84
            
            int32_t x8_5 = *(arg1 + 0x320)
            
            if (x8_5 != 0)
                if (x8_5 == 0xe)
                    x8 = 3
                    goto label_bf6f84
                
                int32_t x8_6 = *(arg1 + 0x3e0)
                
                if (x8_6 != 0)
                    if (x8_6 == 0xe)
                        x8 = 4
                        goto label_bf6f84
                    
                    int32_t x8_7 = *(arg1 + 0x4a0)
                    
                    if (x8_7 != 0)
                        if (x8_7 == 0xe)
                            x8 = 5
                            goto label_bf6f84
                        
                        int32_t x8_8 = *(arg1 + 0x560)
                        
                        if (x8_8 != 0)
                            if (x8_8 == 0xe)
                                x8 = 6
                                goto label_bf6f84
                            
                            if (*(arg1 + 0x620) == 0xe)
                                x8 = 7
                                goto label_bf6f84

return 0
