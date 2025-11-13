// 函数: _Z34PregameHasLandscapeAfterDivineWind11DomCardType
// 地址: 0xac3518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
void* x0 = PregameContextGet()
void* x8 = *(x0 + 0x20)
uint64_t x0_1 = zx.q(*(x8 + 0x28))

if (x0_1.d == 0)
    goto label_ac3590

if ((PregameCardIs(x0_1, x19) & 1) == 0)
    x8 = *(x0 + 0x20)
    uint64_t x0_3 = zx.q(*(x8 + 0x64))
    
    if (x0_3.d == 0)
        goto label_ac3590
    
    if ((PregameCardIs(x0_3, x19) & 1) == 0)
        x8 = *(x0 + 0x20)
        uint64_t x0_5 = zx.q(*(x8 + 0xa0))
        
        if (x0_5.d == 0)
            goto label_ac3590
        
        if ((PregameCardIs(x0_5, x19) & 1) == 0)
            x8 = *(x0 + 0x20)
            uint64_t x0_7 = zx.q(*(x8 + 0xdc))
            
            if (x0_7.d == 0)
                goto label_ac3590
            
            if ((PregameCardIs(x0_7, x19) & 1) == 0)
                x8 = *(x0 + 0x20)
            label_ac3590:
                uint64_t result = zx.q(*(x8 + 0x15c))
                
                if (result.d == 0)
                    return result
                
                if ((PregameCardIs(result, x19) & 1) == 0)
                    result = zx.q(*(*(x0 + 0x20) + 0x160))
                    
                    if (result.d == 0)
                        return result
                    
                    if ((PregameCardIs(result, x19) & 1) == 0)
                        result = zx.q(*(*(x0 + 0x20) + 0x164))
                        
                        if (result.d == 0)
                            return result
                        
                        if ((PregameCardIs(result, x19) & 1) == 0)
                            result = zx.q(*(*(x0 + 0x20) + 0x168))
                            
                            if (result.d == 0)
                                return result
                            
                            if ((PregameCardIs(result, x19) & 1) == 0)
                                result = zx.q(*(*(x0 + 0x20) + 0x16c))
                                
                                if (result.d != 0)
                                    return PregameCardIs(result, x19) __tailcall
                                
                                return result

return 1
