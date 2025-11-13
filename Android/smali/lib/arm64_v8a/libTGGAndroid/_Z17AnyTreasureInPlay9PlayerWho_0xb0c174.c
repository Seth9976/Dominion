// 函数: _Z17AnyTreasureInPlay9PlayerWho
// 地址: 0xb0c174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gDomClient + 0x205e8))

if (x10.d != 0)
    void* x9_1 = *(gDomClient + 0x205e0)
    int64_t x10_1 = x9_1 + x10 * 0x21d8
    void* x11_1 = x9_1
    
    do
        if (zx.d(*(x11_1 + 0x21d2)) != 0)
            if (x11_1 != 0xffffffff)
                while (true)
                    if (*(x11_1 + 0x2c) == 3 && *(x11_1 + 0x58) == arg1 && *(x11_1 + 0x5c) == 0x3e9
                            && *(x11_1 + 0x60) == 0)
                        if (x11_1 == 0)
                            break
                        
                        int32_t x10_2 = *(x11_1 + 0x70)
                        int32_t x8_7 = 0
                        
                        if (x10_2 == 0)
                            return zx.q(x8_7)
                        
                        if (x9_1 == 0)
                            return zx.q(x8_7)
                        
                        void* x24_1 = x9_1 + zx.q(x10_2.w) * 0x21d8
                        
                        while (true)
                            if ((CardIs(gDomClient + 0x20728, zx.q(*(x24_1 + 0x98)), 2) & 1) != 0)
                                return 1
                            
                            x8_7 = *(x24_1 + 0x213c)
                            
                            if (x8_7 == 0)
                                return zx.q(x8_7)
                            
                            uint64_t x9_2 = zx.q(x8_7.w)
                            
                            if (x9_2.d u>= *(gDomClient + 0x205e8))
                                break
                            
                            x24_1 = *(gDomClient + 0x205e0) + x9_2 * 0x21d8
                            
                            if (*(x24_1 + 0x21d0) != x8_7)
                                return 0
                        
                        break
                    
                    if (x11_1 == 0)
                        x11_1 = x9_1
                    else
                        x11_1 += 0x21d8
                    
                    if (x11_1 u>= x10_1)
                        break
                    
                    while (zx.d(*(x11_1 + 0x21d2)) == 0)
                        x11_1 += 0x21d8
                        
                        if (x11_1 u>= x10_1)
                            goto label_b0c2d4
                    
                    if (x11_1 == 0xffffffff)
                        return 0
            
            break
        
        x11_1 += 0x21d8
    while (x11_1 u< x10_1)

label_b0c2d4:
return 0
