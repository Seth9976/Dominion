// 函数: _Z11HasHeirloomRK10DomCardDefR11DomCardEnum
// 地址: 0xab00c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_10 = *(arg1 + 0xe0)

if (x8_10 != 0)
    if (x8_10 == 0xf)
        *arg2 = *(arg1 + 0 + 0xf8)
        return 1
    
    int32_t x8_1 = *(arg1 + 0x1a0)
    
    if (x8_1 == 0xf)
        *arg2 = *(arg1 + 0xc0 + 0xf8)
        return 1
    
    if (x8_1 != 0)
        int32_t x8_2 = *(arg1 + 0x260)
        
        if (x8_2 != 0)
            if (x8_2 == 0xf)
                *arg2 = *(arg1 + 2 * 0xc0 + 0xf8)
                return 1
            
            int32_t x8_5 = *(arg1 + 0x320)
            
            if (x8_5 != 0)
                if (x8_5 == 0xf)
                    *arg2 = *(arg1 + 3 * 0xc0 + 0xf8)
                    return 1
                
                int32_t x8_6 = *(arg1 + 0x3e0)
                
                if (x8_6 != 0)
                    if (x8_6 == 0xf)
                        *arg2 = *(arg1 + 4 * 0xc0 + 0xf8)
                        return 1
                    
                    int32_t x8_7 = *(arg1 + 0x4a0)
                    
                    if (x8_7 != 0)
                        if (x8_7 == 0xf)
                            *arg2 = *(arg1 + 5 * 0xc0 + 0xf8)
                            return 1
                        
                        int32_t x8_8 = *(arg1 + 0x560)
                        
                        if (x8_8 != 0)
                            if (x8_8 == 0xf)
                                *arg2 = *(arg1 + 6 * 0xc0 + 0xf8)
                                return 1
                            
                            if (*(arg1 + 0x620) == 0xf)
                                *arg2 = *(arg1 + 7 * 0xc0 + 0xf8)
                                return 1

return 0
