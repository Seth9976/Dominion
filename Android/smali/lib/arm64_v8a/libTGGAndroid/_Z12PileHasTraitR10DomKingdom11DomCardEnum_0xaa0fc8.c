// 函数: _Z12PileHasTraitR10DomKingdom11DomCardEnum
// 地址: 0xaa0fc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x28))

if (result.d != 0)
    int32_t x20_1 = arg2
    
    if ((PregameCardIs(result, 0x10000000000) & 1) != 0 && *(arg1 + 0x2c) == x20_1)
        return 1
    
    result = zx.q(*(arg1 + 0x64))
    
    if (result.d != 0)
        if ((PregameCardIs(result, 0x10000000000) & 1) != 0 && *(arg1 + 0x68) == x20_1)
            return 1
        
        result = zx.q(*(arg1 + 0xa0))
        
        if (result.d != 0)
            if ((PregameCardIs(result, 0x10000000000) & 1) != 0 && *(arg1 + 0xa4) == x20_1)
                return 1
            
            result = zx.q(*(arg1 + 0xdc))
            
            if (result.d != 0)
                if ((PregameCardIs(result, 0x10000000000) & 1) != 0 && *(arg1 + 0xe0) == x20_1)
                    return 1
                
                return 0

return result
