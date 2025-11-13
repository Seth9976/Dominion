// 函数: _Z11DomMoveCard9PlayerWho6CardIDR6DomGfxRK10DomPileLoc12DomMoveStyleb13CardMoveStyleb
// 地址: 0xb257d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = MouseCard(gDomClient + 0x20728)
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = i_1 + x9 * 0x21d8
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int32_t x11_1 = 0
                int64_t var_1960[0x120]
                
                do
                    if (*(i + 0x2c) == 0 && *(i + 0x98) == arg2)
                        var_1960[sx.q(x11_1)] = i
                        x11_1 += 1
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x9_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x9_1)
                            goto label_b258d0
                while (i != 0xffffffff)
                
            label_b258d0:
                
                if (x11_1 s>= 1)
                    uint64_t x27_1 = zx.q(x11_1)
                    int64_t (* x28_1)[0x120] = &var_1960
                    
                    while (true)
                        DomGfx* x25_1 = *x28_1
                        
                        if (zx.d(*(x25_1 + 0x168)) == 0)
                            result = DomMoveCard(zx.q(arg1), x25_1, arg3, arg4, zx.q(arg5), 
                                arg6 & 1, zx.q(arg7), false)
                            uint64_t temp0_1 = x27_1
                            x27_1 -= 1
                            x28_1 = &(*x28_1)[1]
                            
                            if (temp0_1 == 1)
                                break
                        else
                            PileRemoveCard(x25_1, 
                                *(gDomClient + 0x205e0) + zx.q(*(x25_1 + 0x9c)) * 0x21d8, true, 
                                false)
                            UI2Free(x25_1 + 0x2148)
                            UI2Free(x25_1 + 0x214c)
                            UI2Free(x25_1 + 0x2150)
                            UI2Free(x25_1 + 0x2154)
                            result = zx.q(*(x25_1 + 0x1f90))
                            
                            if (result.d != 0)
                                result = SpineDestroy(result.d)
                            
                            int32_t x9_3 = *(gDomClient + 0x205f0)
                            *(gDomClient + 0x205f0) = zx.d(*(x25_1 + 0x21d0))
                            *(x25_1 + 0x21d0) = x9_3
                            *(gDomClient + 0x205f4) -= 1
                            uint64_t temp1_1 = x27_1
                            x27_1 -= 1
                            x28_1 = &(*x28_1)[1]
                            
                            if (temp1_1 == 1)
                                break
            
            break
        
        i += 0x21d8
    while (i u< x9_1)

return result
