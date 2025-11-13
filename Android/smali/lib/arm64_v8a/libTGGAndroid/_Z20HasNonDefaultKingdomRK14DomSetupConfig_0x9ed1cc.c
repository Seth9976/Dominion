// 函数: _Z20HasNonDefaultKingdomRK14DomSetupConfig
// 地址: 0x9ed1cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 0)
    return 1

if (*(arg1 + 0xa0) != 0)
    return 1

if (*(arg1 + 0xbfc) != 0)
    return 1

if (*(arg1 + 0xc00) != 0)
    return 1

if (*(arg1 + 0x16f4) != 0)
    return 1

int64_t x9 = 0
int32_t x8_5

while (true)
    void* x10_1 = arg1 + x9
    
    if (*(x10_1 + 0x9c8) != 0)
        x8_5 = 1
        
        if (*(x10_1 + 0x9d0) != 0)
            break
        
        if (*(x10_1 + 0x9d4) != 0xa)
            break
        
        x9 += 0x10
        
        if (x9 != 0x200)
            continue
    
    x8_5 = 1
    
    if (*(arg1 + 0xbc8) == 0 && *(arg1 + 0xbcc) == 2)
        x8_5 = 1
        
        if (*(arg1 + 0xbd0) == 0 && *(arg1 + 0xbd4) == 2)
            x8_5 = 1
            
            if (*(arg1 + 0xbd8) == 0 && *(arg1 + 0xbdc) == 2)
                x8_5 = 1
                
                if (*(arg1 + 0xbe0) == 0 && *(arg1 + 0xbe4) == 2)
                    x8_5 = 1
                    
                    if (*(arg1 + 0xbe8) == 0 && *(arg1 + 0xbec) == 1)
                        x8_5 = 1
                        
                        if (*(arg1 + 0xbf0) == 0 && *(arg1 + 0xbf4) == 2)
                            if (zx.d(*(arg1 + 0xbf8)) != 0)
                                return 1
                            
                            if (zx.d(*(arg1 + 0xbf9)) != 0)
                                return 1
                            
                            x8_5 = *(arg1 + 0x1710) != 0 ? 1 : 0
    
    break

return zx.q(x8_5)
