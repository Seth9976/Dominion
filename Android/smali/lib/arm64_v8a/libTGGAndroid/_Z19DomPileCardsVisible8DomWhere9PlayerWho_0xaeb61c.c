// 函数: _Z19DomPileCardsVisible8DomWhere9PlayerWho
// 地址: 0xaeb61c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))

if (x11.d != 0)
    void* x10_1 = *(gDomClient + 0x205e0)
    int64_t x11_1 = x10_1 + x11 * 0x21d8
    void* x12_1 = x10_1
    
    do
        if (zx.d(*(x12_1 + 0x21d2)) != 0)
            if (x12_1 != 0xffffffff)
                while (true)
                    if (*(x12_1 + 0x2c) == 3 && *(x12_1 + 0x58) == arg2 && *(x12_1 + 0x5c) == arg1
                            && *(x12_1 + 0x60) == 0)
                        if (x12_1 != 0)
                            return zx.q((*(x12_1 + 0x21d0) == *(gDomClient + 0x1f8e4) ? 1 : 0) << 1)
                        
                        break
                    
                    if (x12_1 == 0)
                        x12_1 = x10_1
                    else
                        x12_1 += 0x21d8
                    
                    if (x12_1 u>= x11_1)
                        break
                    
                    while (zx.d(*(x12_1 + 0x21d2)) == 0)
                        x12_1 += 0x21d8
                        
                        if (x12_1 u>= x11_1)
                            return 0
                    
                    if (x12_1 == 0xffffffff)
                        return 0
            
            break
        
        x12_1 += 0x21d8
    while (x12_1 u< x11_1)

return 0
