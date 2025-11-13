// 函数: _Z16CalcPodIconWhereRK6DomGfx
// 地址: 0xaf39cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))
uint32_t x8_2
int32_t x9_1

if (x8.d u<= 8)
    switch (x8)
        case 0
            int32_t x8_1 = *(arg1 + 0xa4)
            
            if (x8_1 == 0x3f1)
                x8_2 = *(arg1 + 0xa0)
                
                if (*(arg1 + 0x3b0) != 1)
                    return 1 | zx.q(x8_2) << 0x20
                
            label_af3b70:
                *(arg1 + 0x3c4)
                return 1 | zx.q(x8_2) << 0x20
            
            if (x8_1 == 6)
                x8_2 = *(BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)))) + 0x5c)
                *(arg1 + 0x3c4)
                *(arg1 + 0x3b0)
                return 3 | zx.q(x8_2) << 0x20
        case 3
            *(arg1 + 0x3c4)
            return 1 | zx.q(*(arg1 + 0x58)) << 0x20
        case 4
            x8_2 = *(arg1 + 0x1bc)
            
            if (x8_2 == 0x474)
                x8_2 = *(arg1 + 0x1c0)
                x9_1 = 2
                
                if (*(arg1 + 0x3b0) == 1)
                    *(arg1 + 0x3c4)
            else if (x8_2 != 0x3f1)
                *(arg1 + 0x1c4)
                x9_1 = 3
                
                if (*(arg1 + 0x3b0) == 1)
                    *(arg1 + 0x3c4)
            else
                x8_2 = *(arg1 + 0x1c4)
                x9_1 = 1
                
                if (*(arg1 + 0x3b0) == 1)
                    *(arg1 + 0x3c4)
            
            return zx.q(x9_1) | zx.q(x8_2) << 0x20
        case 6
            int32_t x20_1 = *(arg1 + 0x1ec)
            
            if (x20_1 == 0)
                x8_2 = *(arg1 + 0x1e4)
                
                if (*(arg1 + 0x3b0) == 1)
                    goto label_af3b70
                
                return 1 | zx.q(x8_2) << 0x20
            
            uint64_t x11_2 = zx.q(*(gDomClient + 0x205e8))
            
            if (x11_2.d != 0)
                void* x10_4 = *(gDomClient + 0x205e0)
                void* x22_1 = x10_4
                
                while (zx.d(*(x22_1 + 0x21d2)) == 0)
                    x22_1 += 0x21d8
                    
                    if (x22_1 u>= x10_4 + x11_2 * 0x21d8)
                        goto label_af3cfc
                
                if (x22_1 != 0xffffffff)
                    while (true)
                        if (*(x22_1 + 0x2c) == 3 && *(x22_1 + 0x58) == 0xffffffff
                                && *(x22_1 + 0x5c) - 7 u<= 0x40)
                            int32_t x8_12 = *(x22_1 + 0x70)
                            
                            if (x8_12 != 0)
                                if ((CardIs(gDomClient + 0x20728, 
                                        zx.q(*(x10_4 + zx.q(x8_12.w) * 0x21d8 + 0x98)), zx.q(x20_1)) & 1)
                                        != 0)
                                    break
                                
                                x10_4 = *(gDomClient + 0x205e0)
                                x11_2 = zx.q(*(gDomClient + 0x205e8))
                        
                        if (x22_1 == 0)
                            x22_1 = x10_4
                        else
                            x22_1 += 0x21d8
                        
                        void* x12_3 = x10_4 + mulu.dp.d(x11_2.d, 0x21d8)
                        
                        if (x22_1 u>= x12_3)
                            goto label_af3cfc
                        
                        while (true)
                            x8_2 = zx.d(*(x22_1 + 0x21d2))
                            
                            if (x8_2 != 0)
                                break
                            
                            x22_1 += 0x21d8
                            
                            if (x22_1 u>= x12_3)
                                return zx.q(x8_2) << 0x20
                        
                        if (x22_1 == 0xffffffff)
                            return 0 << 0x20
                    
                    if (x22_1 != 0)
                        x8_2 = *(x22_1 + 0x5c)
                        
                        if (*(arg1 + 0x3b0) != 1)
                            return 3 | zx.q(x8_2) << 0x20
                        
                        *(arg1 + 0x3c4)
                        return 3 | zx.q(x8_2) << 0x20
            
        label_af3cfc:
            return 0 << 0x20
        case 7
            int32_t x8_3 = *(arg1 + 0x224)
            
            if (x8_3 == 2)
                *(arg1 + 0x3c4)
                return 2 | zx.q(*(arg1 + 0x228)) << 0x20
            
            if (x8_3 == 1)
                *(arg1 + 0x230)
                *(arg1 + 0x3c4)
                return 3 | zx.q(*(arg1 + 0x22c)) << 0x20
            
            if (x8_3 == 0)
                *(arg1 + 0x3c4)
                return 1 | zx.q(*(arg1 + 0x228)) << 0x20
        case 8
            void* x8_5 = *(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x240)) * 0x21d8
            int32_t x9_5 = *(x8_5 + 0x2c)
            void* x8_7
            
            if (x9_5 == 3)
                x8_7 = x8_5 + 0x5c
            else
                x8_7 = x8_5 + 0x98
            
            x9_1 = x9_5 == 3 ? 3 : 2
            
            return zx.q(x9_1) | zx.q(*x8_7) << 0x20
pthread_kill(pthread_self(), 6)
return PileIsIcon(XNoReturn()) __tailcall
