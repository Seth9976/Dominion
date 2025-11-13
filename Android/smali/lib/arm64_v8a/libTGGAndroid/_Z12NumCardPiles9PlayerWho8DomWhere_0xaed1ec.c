// 函数: _Z12NumCardPiles9PlayerWho8DomWhere
// 地址: 0xaed1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gDomClient + 0x205e8))

if (x10.d != 0)
    void* x9_1 = *(gDomClient + 0x205e0)
    int64_t x10_1 = x9_1 + x10 * 0x21d8
    void* x11_1 = x9_1
    
    while (true)
        if (zx.d(*(x11_1 + 0x21d2)) != 0)
            if (x11_1 != 0xffffffff)
                while (true)
                    int32_t x8_7
                    
                    if (*(x11_1 + 0x2c) != 3 || *(x11_1 + 0x58) != arg1 || *(x11_1 + 0x5c) != arg2
                            || *(x11_1 + 0x60) != 0)
                        if (x11_1 == 0)
                            x11_1 = x9_1
                        else
                            x11_1 += 0x21d8
                        
                        if (x11_1 u>= x10_1)
                            break
                        
                        while (zx.d(*(x11_1 + 0x21d2)) == 0)
                            x11_1 += 0x21d8
                            
                            if (x11_1 u>= x10_1)
                                return 0
                        
                        x8_7 = 0
                        
                        if (x11_1 != 0xffffffff)
                            continue
                    else
                        if (x11_1 == 0)
                            break
                        
                        int32_t i = *(x11_1 + 0x70)
                        
                        if (i == 0)
                            break
                        
                        x8_7 = 0
                        
                        do
                            void* x11_3 = x9_1 + mulu.dp.d(i & 0xffff, 0x21d8)
                            i = *(x11_3 + 0x213c)
                            
                            if (*(x11_3 + 0xc0) != 0)
                                x8_7 += 1
                        while (i != 0)
                    
                    return zx.q(x8_7)
            
            break
        
        x11_1 += 0x21d8
        
        if (x11_1 u>= x10_1)
            break

return 0
