// 函数: _Z15CalcDeckShadowsR11DomCardEnumRiPbPP6DomGfx
// 地址: 0xb3505c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
*arg1 = 0
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
DomGfx* i

if (x9.d != 0)
    i = *(gDomClient + 0x205e0)
    int64_t x9_1 = i + x9 * 0x21d8
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x9_1)
            goto label_b35348

int32_t x25

if (x9.d == 0 || i == 0xffffffff)
label_b35348:
    x25 = 0
else
    x25 = 0
    
    do
        if (*(i + 0x2c) == 0 && zx.d(*(i + 0x168)) == 0 && *(i + 0xa4) == 0x3eb)
            int32_t x8_4 = *(gDomClient + 0x38)
            int32_t x8_5
            
            x8_5 = x8_4 == 0xffffffff ? 0 : x8_4
            
            if (*(i + 0xa0) == x8_5 && (CardIsShadow(i) & 1) != 0)
                *arg2 += 1
                DomGfx* i_1 = i
                int32_t j
                int32_t x26_1
                
                for (j = *(i_1 + 0x2c); j == 3; j = *(i_1 + 0x2c))
                    x26_1 = *(i_1 + 0x30)
                    
                    if (x26_1 == 0x70d)
                        goto label_b351e4
                    
                    if (x26_1 == 0x718)
                        goto label_b351e4
                    
                    int32_t x8_8 = *(i_1 + 0x70)
                    
                    if (x8_8 == 0)
                        goto label_b351e4
                    
                    i_1 = *(gDomClient + 0x205e0) + zx.q(x8_8.w) * 0x21d8
                
                if (j == 5)
                    x26_1 = *(i_1 + 0x204)
                else if (j == 1)
                    x26_1 = *(i_1 + 0x170)
                else
                    if (j != 0)
                        pthread_kill(pthread_self(), 6)
                        return DomMainLayoutButtons(XNoReturn()) __tailcall
                    
                    x26_1 = CardWhat(gDomClient + 0x20728, zx.q(*(i_1 + 0x98)))
                
            label_b351e4:
                int32_t x8_10 = *arg1
                
                if (x8_10 == 0)
                    if (arg3 != 0)
                        bool x8_16
                        
                        if ((IsCardInActiveSet(i, nullptr, true) & 1) == 0)
                            x8_16 = false
                        else
                            int32_t x8_14 = *(gDomClient + 0x38)
                            uint64_t x10_2 = zx.q(*(gDomClient + 0x205e8))
                            int32_t x8_15
                            
                            x8_15 = x8_14 == 0xffffffff ? 0 : x8_14
                            
                            if (x10_2.d != 0)
                                void* x9_6 = *(gDomClient + 0x205e0)
                                int64_t x11_3 = x9_6 + x10_2 * 0x21d8
                                void* x10_3 = x9_6
                                
                                do
                                    if (zx.d(*(x10_3 + 0x21d2)) != 0)
                                        while (true)
                                            if (x10_3 == 0xffffffff)
                                                goto label_b352a0
                                            
                                            if (*(x10_3 + 0x2c) == 3 && *(x10_3 + 0x58) == x8_15
                                                    && *(x10_3 + 0x5c) == 0x3eb
                                                    && *(x10_3 + 0x60) == 0)
                                                if (x10_3 == 0)
                                                    break
                                                
                                                if (*(x10_3 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                                    break
                                                
                                                x8_16 = false
                                                goto label_b352b0
                                            
                                            if (x10_3 == 0)
                                                x10_3 = x9_6
                                            else
                                                x10_3 += 0x21d8
                                            
                                            if (x10_3 u>= x11_3)
                                                goto label_b352a0
                                            
                                            while (zx.d(*(x10_3 + 0x21d2)) == 0)
                                                x10_3 += 0x21d8
                                                
                                                if (x10_3 u>= x11_3)
                                                    goto label_b352a0
                                        
                                        break
                                    
                                    x10_3 += 0x21d8
                                while (x10_3 u< x11_3)
                            
                        label_b352a0:
                            x8_16 = true
                        
                    label_b352b0:
                        *arg3 = x8_16
                    
                    if (arg4 != 0)
                        *arg4 = i
                    
                    *arg1 = x26_1
                    x25 = 1
                else if (x8_10 != x26_1)
                    x25 = 2
        
        DomGfx* i_2 = *(gDomClient + 0x205e0)
        
        if (i == 0)
            i = i_2
        else
            i += 0x21d8
        
        int64_t x8_13 = i_2 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
        
        if (i u>= x8_13)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x8_13)
                return zx.q(x25)
    while (i != 0xffffffff)

return zx.q(x25)
