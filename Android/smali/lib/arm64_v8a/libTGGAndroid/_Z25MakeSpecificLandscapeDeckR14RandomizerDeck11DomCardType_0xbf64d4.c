// 函数: _Z25MakeSpecificLandscapeDeckR14RandomizerDeck11DomCardType
// 地址: 0xbf64d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfig* x19 = *(gPregameContext + 0x28)

if (arg2 == 0x80000000000)
    uint64_t x22_1 = zx.q(*EXP_RISING_SUN_COUNT)
    
    if (x22_1.d s>= 1)
        int32_t x24_2 = *gPregameContext
        int64_t x23_2 = 0
        int32_t* x25_2 = *EXP_RISING_SUN_DEFS
        
        while (true)
            if ((*(x25_2 + x23_2 * 0x780 + 0xc8) & 0x84000000000) == 0x80000000000
                    && x25_2[x23_2 * 0x1e0] != 2 && *(x25_2 + x23_2 * 0x780 + 4) s<= x24_2
                    && *(x25_2 + x23_2 * 0x780 + 8) s> x24_2)
                int32_t x21_2 = *(x25_2 + x23_2 * 0x780 + 0xc0)
                
                if ((IsInConfig(x19, zx.q(x21_2)).d & 1) == 0)
                    int64_t x8_24 = 0
                    
                    while (true)
                        int32_t x9_4 = *(x19 + 0xc04 + x8_24)
                        
                        if (x9_4 != 0)
                            if (x9_4 == x21_2)
                                break
                            
                            x8_24 += 4
                            
                            if (x8_24 != 0xaf0)
                                continue
                        
                        int64_t x8_13 = sx.q(*(arg1 + 0xc80))
                        *(arg1 + 0xc80) = x8_13.d + 1
                        *(arg1 + (x8_13 << 2)) = x21_2
                        break
            
            x23_2 += 1
            
            if (x23_2 == x22_1)
                break
else
    if (arg2 != 0x4000000000)
        pthread_kill(pthread_self(), 6)
        int64_t x0_3
        Vec2I* x1_2
        int32_t x2
        x0_3, x1_2, x2 = XNoReturn()
        return RollKingdom_AddForcedLandscapes(x0_3, x1_2, x2) __tailcall
    
    uint64_t x22 = zx.q(*EXP_ALLIES_COUNT)
    
    if (x22.d s>= 1)
        int32_t x24_1 = *gPregameContext
        int64_t x23_1 = 0
        int32_t* x25_1 = *EXP_ALLIES_DEFS
        
        while (true)
            if ((*(x25_1 + x23_1 * 0x780 + 0xc8) & 0x84000000000) == 0x4000000000
                    && x25_1[x23_1 * 0x1e0] != 2 && *(x25_1 + x23_1 * 0x780 + 4) s<= x24_1
                    && *(x25_1 + x23_1 * 0x780 + 8) s> x24_1)
                int32_t x21_1 = *(x25_1 + x23_1 * 0x780 + 0xc0)
                
                if ((IsInConfig(x19, zx.q(x21_1)).d & 1) == 0)
                    int64_t x8_12 = 0
                    
                    while (true)
                        int32_t x9_2 = *(x19 + 0xc04 + x8_12)
                        
                        if (x9_2 != 0)
                            if (x9_2 == x21_1)
                                break
                            
                            x8_12 += 4
                            
                            if (x8_12 != 0xaf0)
                                continue
                        
                        int64_t x8_1 = sx.q(*(arg1 + 0xc80))
                        *(arg1 + 0xc80) = x8_1.d + 1
                        *(arg1 + (x8_1 << 2)) = x21_1
                        break
            
            x23_1 += 1
            
            if (x23_1 == x22)
                break
