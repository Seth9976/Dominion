// 函数: _Z12DomGfxUpdate9UI2HandleR9DomClientR7DomGame
// 地址: 0xb16f00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = AnyTreasureInPlay(zx.q(*(gDomClient + 0x2079c)))
uint64_t x9 = zx.q(*(arg2 + 0x205e8))

if (x9.d != 0)
    void* i = *(arg2 + 0x205e0)
    int64_t x9_1 = i + x9 * 0x21d8
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                bool x22_1 = result.b & 1
                
                do
                    result = DomGfxUpdate(i, gDomClient + 0x28, arg3, x22_1)
                    int32_t x8_1 = *(i + 0x2c)
                    
                    if (x8_1 == 0)
                        result = UpdateCardHints(i)
                        
                        if (*(i + 0x2c) == 3)
                            result = UpdatePileHints(i)
                    else if (x8_1 == 3)
                        result = UpdatePileHints(i)
                    
                    i += 0x21d8
                    int64_t x8_3 = *(arg2 + 0x205e0) + zx.q(*(arg2 + 0x205e8)) * 0x21d8
                    
                    if (x8_3 u<= i)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x8_3)
                            return result
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< x9_1)

return result
