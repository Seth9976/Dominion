// 函数: _Z26ExtraPileIsAfterDivineWindR14DomKingdomDatai
// 地址: 0xbf80b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 - 6 u< 0x10)
    return 1

uint64_t x1 = zx.q(*(arg1 + (sx.q(arg2) << 2) + 0x118))

while (true)
    x1 = zx.q(ExtraPileSourceCard(arg1, x1, zx.q(*gPregameContext)))
    int64_t result = 0
    
    if (x1.d != 0 && *arg1 != x1.d)
        result = 0
        
        if (*(arg1 + 4) != x1.d && *(arg1 + 8) != x1.d && *(arg1 + 0xc) != x1.d
                && *(arg1 + 0x10) != x1.d && *(arg1 + 0x14) != x1.d && *(arg1 + 0x18) != x1.d
                && *(arg1 + 0x1c) != x1.d && *(arg1 + 0x20) != x1.d && *(arg1 + 0x24) != x1.d)
            int32_t x8_12 = *(arg1 + 0x28)
            
            if (x8_12 != 0)
                if (x8_12 == x1.d)
                    return 0
                
                int32_t x8_13 = *(arg1 + 0x64)
                
                if (x8_13 != 0)
                    if (x8_13 == x1.d)
                        return 0
                    
                    int32_t x8_14 = *(arg1 + 0xa0)
                    
                    if (x8_14 != 0)
                        if (x8_14 == x1.d)
                            return 0
                        
                        int32_t x8_15 = *(arg1 + 0xdc)
                        
                        if (x8_15 != 0 && x8_15 == x1.d)
                            return 0
            
            if (*(arg1 + 0x130) == x1.d)
                break
            
            result = 1
            
            if (*(arg1 + 0x134) != x1.d && *(arg1 + 0x138) != x1.d && *(arg1 + 0x13c) != x1.d
                    && *(arg1 + 0x140) != x1.d && *(arg1 + 0x144) != x1.d
                    && *(arg1 + 0x148) != x1.d && *(arg1 + 0x14c) != x1.d
                    && *(arg1 + 0x150) != x1.d && *(arg1 + 0x154) != x1.d
                    && *(arg1 + 0x158) != x1.d && *(arg1 + 0x15c) != x1.d
                    && *(arg1 + 0x160) != x1.d && *(arg1 + 0x164) != x1.d
                    && *(arg1 + 0x168) != x1.d)
                continue
    
    return result

return 1
