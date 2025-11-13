// 函数: _Z14DeckHasShadowsv
// 地址: 0xb0100c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                while (true)
                    if (*(i + 0x2c) == 0 && zx.d(*(i + 0x168)) == 0 && *(i + 0xa4) == 0x3eb)
                        int32_t x10_4 = *(gDomClient + 0x38)
                        int32_t x10_5
                        
                        x10_5 = x10_4 == 0xffffffff ? 0 : x10_4
                        
                        if (*(i + 0xa0) == x10_5)
                            if ((CardIsShadow(i) & 1) != 0)
                                return 1
                            
                            i_1 = *(gDomClient + 0x205e0)
                            x8 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    void* x10_7 = i_1 + mulu.dp.d(x8.d, 0x21d8)
                    
                    if (i u>= x10_7)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_7)
                            return 0
                    
                    if (i == 0xffffffff)
                        return 0
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x8 * 0x21d8)

return 0
