// 函数: _Z16CanGainCardTrait11DomCardEnum
// 地址: 0xaa3b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0_2 = LandscapeRefPiles(*(DomGetContext() + 8) + 0xd54, zx.q(arg1))
uint64_t result = zx.q(*x0_2)

if (result.d != 0)
    if (GetPileTop(result) != 0)
        return 1
    
    result = zx.q(x0_2[1])
    
    if (result.d != 0)
        if (GetPileTop(result) != 0)
            return 1
        
        result = zx.q(x0_2[2])
        
        if (result.d != 0)
            if (GetPileTop(result) != 0)
                return 1
            
            result = zx.q(x0_2[3])
            
            if (result.d != 0)
                if (GetPileTop(result) != 0)
                    return 1
                
                result = zx.q(x0_2[4])
                
                if (result.d != 0)
                    if (GetPileTop(result) != 0)
                        return 1
                    
                    result = zx.q(x0_2[5])
                    
                    if (result.d != 0)
                        if (GetPileTop(result) != 0)
                            return 1
                        
                        result = zx.q(x0_2[6])
                        
                        if (result.d != 0)
                            if (GetPileTop(result) != 0)
                                return 1
                            
                            result = zx.q(x0_2[7])
                            
                            if (result.d != 0)
                                if (GetPileTop(result) != 0)
                                    return 1
                                
                                result = zx.q(x0_2[8])
                                
                                if (result.d != 0)
                                    if (GetPileTop(result) != 0)
                                        return 1
                                    
                                    result = zx.q(x0_2[9])
                                    
                                    if (result.d != 0)
                                        if (GetPileTop(result) != 0)
                                            return 1
                                        
                                        result = zx.q(x0_2[0xa])
                                        
                                        if (result.d != 0)
                                            if (GetPileTop(result) != 0)
                                                return 1
                                            
                                            result = zx.q(x0_2[0xb])
                                            
                                            if (result.d != 0)
                                                if (GetPileTop(result) != 0)
                                                    return 1
                                                
                                                result = zx.q(x0_2[0xc])
                                                
                                                if (result.d != 0)
                                                    if (GetPileTop(result) != 0)
                                                        return 1
                                                    
                                                    result = zx.q(x0_2[0xd])
                                                    
                                                    if (result.d != 0)
                                                        return zx.q(GetPileTop(result) != 0 ? 1 : 0)

return result
