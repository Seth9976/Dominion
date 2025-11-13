// 函数: _Z16FindAbilityStack9PlayerWhoRK14DomAbilityType6CardIDRi
// 地址: 0xb49210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = 0
uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int32_t fp_1 = 0
                
                while (true)
                    if (*(i + 0x2c) == 5 && *(i + 0x1f0) == arg1 && *(i + 0x21c) s>= 1)
                        int32_t x8_1 = *(i + 0x200)
                        int32_t x8_2
                        
                        if (x8_1 == *arg2 && *(i + 0x208) == *(arg2 + 8)
                                && *(i + 0x20c) == *(arg2 + 0xc) && *(i + 0x210) == *(arg2 + 0x10))
                            if (x8_1 != 1 && x8_1 != 2 && x8_1 != 3)
                                pthread_kill(pthread_self(), 6)
                                DomGfx* x0_6
                                DomGfx* x1_1
                                x0_6, x1_1 = XNoReturn()
                                return SortAbilities(x0_6, x1_1) __tailcall
                            
                            x8_2 = *(arg2 + 4)
                            
                            if (*(i + 0x204) != x8_2)
                                goto label_b49360
                            
                            if ((AbilityDoesntStack(arg2) & 1) == 0)
                                return i
                            
                            goto label_b49358
                        
                    label_b49358:
                        x8_2 = *(arg2 + 4)
                    label_b49360:
                        
                        if (x8_2 == 0x1121)
                            if (AbilitySourceCard(gDomClient + 0x20728, zx.q(*(i + 0x1fc))) == arg3)
                                return i
                            
                            fp_1 = *arg4
                        
                        fp_1 += 1
                        *arg4 = fp_1
                        i_1 = *(gDomClient + 0x205e0)
                        x8 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    void* x10_8 = i_1 + mulu.dp.d(x8.d, 0x21d8)
                    
                    if (i u>= x10_8)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_8)
                            return nullptr
                    
                    if (i == 0xffffffff)
                        return nullptr
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x8 * 0x21d8)

return nullptr
