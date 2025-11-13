// 函数: _Z21DomTryRemoveTokenIcon12DomTokenIcon11DomCardEnum9PlayerWhob
// 地址: 0xb10550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))

if (x11.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        if (i != 0xffffffff)
            int64_t x11_1 = i_1 + x11 * 0x21d8
            
            do
                if (*(i + 0x2c) == 6 && *(i + 0x1e0) == arg1.d && *(i + 0x1e4) == arg3
                        && *(i + 0x1ec) == arg2.d)
                    int32_t x8_1 = *(i + 0x1e8)
                    *(i + 0x1e8) = x8_1 - 1
                    
                    if (x8_1 != 1)
                        break
                    
                    if (arg2.d == 0)
                        PlayerAreaRemove(i)
                    else
                        int32_t x0_1 = BoardPileWhere(gDomClient + 0x20728, arg2)
                        uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
                        
                        if (x9_1.d != 0)
                            DomGfx* k_1 = *(gDomClient + 0x205e0)
                            int64_t x9_2 = k_1 + x9_1 * 0x21d8
                            DomGfx* k = k_1
                            
                            do
                                if (zx.d(*(k + 0x21d2)) != 0)
                                    while (k != 0xffffffff)
                                        if (*(k + 0x2c) == 3 && *(k + 0x58) == 0xffffffff
                                                && *(k + 0x5c) == x0_1 && *(k + 0x60) == 0)
                                            if (k != 0)
                                                PileRemoveToken(i, k)
                                            
                                            break
                                        
                                        if (k == 0)
                                            k = k_1
                                        else
                                            k += 0x21d8
                                        
                                        if (k u>= x9_2)
                                            break
                                        
                                        while (zx.d(*(k + 0x21d2)) == 0)
                                            k += 0x21d8
                                            
                                            if (k u>= x9_2)
                                                goto label_b106a0
                                    
                                    break
                                
                                k += 0x21d8
                            while (k u< x9_2)
                    
                label_b106a0:
                    UI2Free(i + 0x2148)
                    UI2Free(i + 0x214c)
                    UI2Free(i + 0x2150)
                    UI2Free(i + 0x2154)
                    uint64_t x0_7 = zx.q(*(i + 0x1f90))
                    
                    if (x0_7.d != 0)
                        SpineDestroy(x0_7.d)
                    
                    int32_t x10_2 = *(gDomClient + 0x205f0)
                    *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                    *(i + 0x21d0) = x10_2
                    *(gDomClient + 0x205f4) -= 1
                    return 
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x11_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x11_1)
                        return 
            while (i != 0xffffffff)
        
        break
    
    i += 0x21d8
while (i u< i_1 + x11 * 0x21d8)
