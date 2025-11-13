// 函数: _Z14PodIconGetPileRK6DomGfx
// 地址: 0xaf5314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))

if (x8.d u<= 8)
    switch (x8)
        case 0
            int32_t x9 = *(arg1 + 0x9c)
            
            if (x9 == 0)
                return BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98))))
                    __tailcall
            
            uint64_t x10_2 = zx.q(x9.w)
            
            if (x10_2.d u>= *(gDomClient + 0x205e8))
                return BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98))))
                    __tailcall
            
            void* x8_2 = *(gDomClient + 0x205e0) + x10_2 * 0x21d8
            
            if (*(x8_2 + 0x21d0) != x9)
                return BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98))))
                    __tailcall
            
            return x8_2
        case 4
            return *(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x1b8)) * 0x21d8
        case 6
            uint64_t x9_2 = zx.q(*(gDomClient + 0x205e8))
            
            if (x9_2.d != 0)
                void* i_1 = *(gDomClient + 0x205e0)
                int32_t x19_1 = *(arg1 + 0x1ec)
                void* i = i_1
                
                do
                    if (zx.d(*(i + 0x21d2)) != 0)
                        if (i != 0xffffffff)
                            while (true)
                                if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff
                                        && *(i + 0x5c) - 7 u<= 0x40)
                                    int32_t x8_12 = *(i + 0x70)
                                    
                                    if (x8_12 != 0)
                                        if ((CardIs(gDomClient + 0x20728, 
                                                zx.q(*(i_1 + zx.q(x8_12.w) * 0x21d8 + 0x98)), 
                                                zx.q(x19_1)) & 1) != 0)
                                            return i
                                        
                                        i_1 = *(gDomClient + 0x205e0)
                                        x9_2 = zx.q(*(gDomClient + 0x205e8))
                                
                                if (i == 0)
                                    i = i_1
                                else
                                    i += 0x21d8
                                
                                void* x8_16 = i_1 + mulu.dp.d(x9_2.d, 0x21d8)
                                
                                if (i u>= x8_16)
                                    return nullptr
                                
                                while (zx.d(*(i + 0x21d2)) == 0)
                                    i += 0x21d8
                                    
                                    if (i u>= x8_16)
                                        return nullptr
                                
                                if (i == 0xffffffff)
                                    return nullptr
                        
                        break
                    
                    i += 0x21d8
                while (i u< i_1 + x9_2 * 0x21d8)
            
            return nullptr
        case 7
            int32_t x9_3 = *(arg1 + 0x228)
            void* x10_6 = *(gDomClient + 0x205e0)
            
            if (*(arg1 + 0x224) != 0)
                return x10_6 + zx.q(x9_3.w) * 0x21d8
            
            uint64_t x8_6 = zx.q(*(gDomClient + 0x205e8))
            
            if (x8_6.d != 0)
                int64_t x11_5 = x10_6 + x8_6 * 0x21d8
                void* x12_3 = x10_6
                
                while (zx.d(*(x12_3 + 0x21d2)) == 0)
                    x12_3 += 0x21d8
                    
                    if (x12_3 u>= x11_5)
                        return nullptr
                
                if (x12_3 != 0xffffffff)
                    while (true)
                        if (*(x12_3 + 0x2c) == 3 && *(x12_3 + 0x58) == x9_3
                                && *(x12_3 + 0x5c) == 0x3f1 && *(x12_3 + 0x60) == 0)
                            return x12_3
                        
                        if (x12_3 == 0)
                            x12_3 = x10_6
                        else
                            x12_3 += 0x21d8
                        
                        if (x12_3 u>= x11_5)
                            return nullptr
                        
                        while (zx.d(*(x12_3 + 0x21d2)) == 0)
                            x12_3 += 0x21d8
                            
                            if (x12_3 u>= x11_5)
                                return nullptr
                        
                        if (x12_3 == 0xffffffff)
                            return nullptr
            
            return nullptr
        case 8
            return *(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x240)) * 0x21d8

pthread_kill(pthread_self(), 6)
return DomZoomExtraGroup(XNoReturn()) __tailcall
