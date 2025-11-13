// 函数: _Z11IsInKingdomR10DomKingdom11DomCardEnum
// 地址: 0xbf7174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_15 = *arg1

if (x8_15 != 0)
    if (x8_15 == arg2)
        return 1
    
    int32_t x8 = *(arg1 + 4)
    
    if (x8 != 0)
        if (x8 == arg2)
            return 1
        
        int32_t x8_1 = *(arg1 + 8)
        
        if (x8_1 != 0)
            if (x8_1 == arg2)
                return 1
            
            int32_t x8_2 = *(arg1 + 0xc)
            
            if (x8_2 != 0)
                if (x8_2 == arg2)
                    return 1
                
                int32_t x8_3 = *(arg1 + 0x10)
                
                if (x8_3 != 0)
                    if (x8_3 == arg2)
                        return 1
                    
                    int32_t x8_4 = *(arg1 + 0x14)
                    
                    if (x8_4 != 0)
                        if (x8_4 == arg2)
                            return 1
                        
                        int32_t x8_5 = *(arg1 + 0x18)
                        
                        if (x8_5 != 0)
                            if (x8_5 == arg2)
                                return 1
                            
                            int32_t x8_6 = *(arg1 + 0x1c)
                            
                            if (x8_6 != 0)
                                if (x8_6 == arg2)
                                    return 1
                                
                                int32_t x8_7 = *(arg1 + 0x20)
                                
                                if (x8_7 != 0)
                                    if (x8_7 == arg2)
                                        return 1
                                    
                                    int32_t x8_8 = *(arg1 + 0x24)
                                    
                                    if (x8_8 != 0 && x8_8 == arg2)
                                        return 1

int32_t x8_9 = *(arg1 + 0x28)

if (x8_9 != 0)
    if (x8_9 == arg2)
        return 1
    
    int32_t x8_10 = *(arg1 + 0x64)
    
    if (x8_10 != 0)
        if (x8_10 == arg2)
            return 1
        
        int32_t x8_11 = *(arg1 + 0xa0)
        
        if (x8_11 != 0)
            if (x8_11 == arg2)
                return 1
            
            int32_t x8_12 = *(arg1 + 0xdc)
            
            if (x8_12 != 0 && x8_12 == arg2)
                return 1

int32_t x8_13 = *(arg1 + 0x118)

if (x8_13 != 0 && x8_13 == arg2)
    return 1

int64_t x10 = 0
int64_t x9_1

while (true)
    x9_1 = x10
    
    if (x10 == 0x6a)
        break
    
    int32_t x11_1 = *(arg1 + 0x11c + (x9_1 << 2))
    x10 = x9_1 + 1
    
    if (x11_1 != 0)
        if (x11_1 == arg2)
            break

return zx.q(x9_1 u< 0x6a ? 1 : 0)
