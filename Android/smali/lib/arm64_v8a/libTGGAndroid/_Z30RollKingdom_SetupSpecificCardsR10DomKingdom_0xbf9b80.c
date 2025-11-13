// 函数: _Z30RollKingdom_SetupSpecificCardsR10DomKingdom
// 地址: 0xbf9b80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*arg1)

if (x0.d != 0)
    RollKingdom_SetupPile(x0, 0)
    uint64_t x0_1 = zx.q(*(arg1 + 4))
    
    if (x0_1.d != 0)
        RollKingdom_SetupPile(x0_1, 0)
        uint64_t x0_2 = zx.q(*(arg1 + 8))
        
        if (x0_2.d != 0)
            RollKingdom_SetupPile(x0_2, 0)
            uint64_t x0_3 = zx.q(*(arg1 + 0xc))
            
            if (x0_3.d != 0)
                RollKingdom_SetupPile(x0_3, 0)
                uint64_t x0_4 = zx.q(*(arg1 + 0x10))
                
                if (x0_4.d != 0)
                    RollKingdom_SetupPile(x0_4, 0)
                    uint64_t x0_5 = zx.q(*(arg1 + 0x14))
                    
                    if (x0_5.d != 0)
                        RollKingdom_SetupPile(x0_5, 0)
                        uint64_t x0_6 = zx.q(*(arg1 + 0x18))
                        
                        if (x0_6.d != 0)
                            RollKingdom_SetupPile(x0_6, 0)
                            uint64_t x0_7 = zx.q(*(arg1 + 0x1c))
                            
                            if (x0_7.d != 0)
                                RollKingdom_SetupPile(x0_7, 0)
                                uint64_t x0_8 = zx.q(*(arg1 + 0x20))
                                
                                if (x0_8.d != 0)
                                    RollKingdom_SetupPile(x0_8, 0)
                                    uint64_t x0_9 = zx.q(*(arg1 + 0x24))
                                    
                                    if (x0_9.d != 0)
                                        RollKingdom_SetupPile(x0_9, 0)

uint64_t result = zx.q(*(arg1 + 0x28))

if (result.d != 0)
    RollKingdom_SetupPile(result, 0)
    result = zx.q(*(arg1 + 0x64))
    
    if (result.d != 0)
        RollKingdom_SetupPile(result, 0)
        result = zx.q(*(arg1 + 0xa0))
        
        if (result.d != 0)
            RollKingdom_SetupPile(result, 0)
            result = zx.q(*(arg1 + 0xdc))
            
            if (result.d != 0)
                return RollKingdom_SetupPile(result, 0) __tailcall

return result
