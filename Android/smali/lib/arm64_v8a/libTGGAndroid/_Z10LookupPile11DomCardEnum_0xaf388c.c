// 函数: _Z10LookupPile11DomCardEnum
// 地址: 0xaf388c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                while (true)
                    if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x5c) - 7 u<= 0x40)
                        int32_t x10_5 = *(i + 0x70)
                        
                        if (x10_5 != 0)
                            if ((CardIs(gDomClient + 0x20728, 
                                    zx.q(*(i_1 + zx.q(x10_5.w) * 0x21d8 + 0x98)), zx.q(arg1)) & 1) != 0)
                                return i
                            
                            i_1 = *(gDomClient + 0x205e0)
                            x9 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    void* x10_7 = i_1 + mulu.dp.d(x9.d, 0x21d8)
                    
                    if (i u>= x10_7)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_7)
                            return nullptr
                    
                    if (i == 0xffffffff)
                        return nullptr
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x9 * 0x21d8)

return nullptr
