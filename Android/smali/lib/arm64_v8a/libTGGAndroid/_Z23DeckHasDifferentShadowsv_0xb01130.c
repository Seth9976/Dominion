// 函数: _Z23DeckHasDifferentShadowsv
// 地址: 0xb01130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* x19_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = x19_1 + x9 * 0x21d8
    
    do
        if (zx.d(*(x19_1 + 0x21d2)) != 0)
            if (x19_1 != 0xffffffff)
                int32_t x27_1 = 0
                
                while (true)
                    int32_t x8_9
                    
                    if (*(x19_1 + 0x2c) != 0 || zx.d(*(x19_1 + 0x168)) != 0
                            || *(x19_1 + 0xa4) != 0x3eb)
                        x8_9 = x27_1
                    else
                        int32_t x8_4 = *(gDomClient + 0x38)
                        int32_t x8_5
                        
                        x8_5 = x8_4 == 0xffffffff ? 0 : x8_4
                        
                        if (*(x19_1 + 0xa0) != x8_5)
                            x8_9 = x27_1
                        else if ((CardIsShadow(x19_1) & 1) == 0)
                            x8_9 = x27_1
                        else
                            void* x8_6 = x19_1
                            int32_t x10_1 = *(x8_6 + 0x2c)
                            int32_t x0_4
                            
                            if (x10_1 != 3)
                            label_b01240:
                                
                                if (x10_1 == 5)
                                    x0_4 = *(x8_6 + 0x204)
                                else if (x10_1 == 1)
                                    x0_4 = *(x8_6 + 0x170)
                                else
                                    if (x10_1 != 0)
                                        pthread_kill(pthread_self(), 6)
                                        XNoReturn()
                                        return ZoomDiscardToggle() __tailcall
                                    
                                    x0_4 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_6 + 0x98)))
                            else
                                while (true)
                                    x0_4 = *(x8_6 + 0x30)
                                    
                                    if (x0_4 == 0x70d)
                                        break
                                    
                                    if (x0_4 == 0x718)
                                        break
                                    
                                    int32_t x8_7 = *(x8_6 + 0x70)
                                    
                                    if (x8_7 == 0)
                                        break
                                    
                                    x8_6 = *(gDomClient + 0x205e0) + zx.q(x8_7.w) * 0x21d8
                                    x10_1 = *(x8_6 + 0x2c)
                                    
                                    if (x10_1 != 3)
                                        goto label_b01240
                            
                            int32_t x9_7
                            
                            if (x27_1 == 0)
                                x9_7 = 3
                            else
                                x9_7 = x27_1 != x0_4 ? 1 : 0
                            
                            x8_9 = x27_1 == 0 ? x0_4 : x27_1
                            
                            if ((x27_1 != x0_4 || x27_1 == 0) && x9_7 != 3 && x9_7 != 0)
                                return zx.q(x9_7 != 2 ? 1 : 0)
                    
                    void* x10_2 = *(gDomClient + 0x205e0)
                    
                    if (x19_1 == 0)
                        x19_1 = x10_2
                    else
                        x19_1 += 0x21d8
                    
                    int64_t x9_6 = x10_2 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                    
                    if (x19_1 u>= x9_6)
                        break
                    
                    while (zx.d(*(x19_1 + 0x21d2)) == 0)
                        x19_1 += 0x21d8
                        
                        if (x19_1 u>= x9_6)
                            goto label_b012f4
                    
                    x27_1 = x8_9
                    
                    if (x19_1 == 0xffffffff)
                        return zx.q(2 != 2 ? 1 : 0)
            
            break
        
        x19_1 += 0x21d8
    while (x19_1 u< x9_1)

label_b012f4:
return zx.q(2 != 2 ? 1 : 0)
