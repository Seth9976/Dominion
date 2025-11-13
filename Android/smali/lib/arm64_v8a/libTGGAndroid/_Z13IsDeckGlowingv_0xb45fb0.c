// 函数: _Z13IsDeckGlowingv
// 地址: 0xb45fb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

if (*(gDomClient + 0x207a0) != x8_1)
    return 0

if (GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) != 1)
    return 0

uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
uint64_t x1_1 = zx.q(*(gDomClient + 0x2079c))
void* x0_3

if (x9_1.d != 0)
    void* x8_3 = *(gDomClient + 0x205e0)
    int64_t x9_2 = x8_3 + x9_1 * 0x21d8
    x0_3 = x8_3
    
    do
        if (zx.d(*(x0_3 + 0x21d2)) != 0)
            if (x0_3 != 0xffffffff)
                while (true)
                    if (*(x0_3 + 0x2c) == 3 && *(x0_3 + 0x58) == x1_1.d && *(x0_3 + 0x5c) == 0x3eb
                            && *(x0_3 + 0x60) == 0)
                        if (x0_3 != 0)
                            return zx.q(*(gDomClient + 0x1f8e4) != *(x0_3 + 0x21d0) ? 1 : 0)
                        
                        break
                    
                    if (x0_3 == 0)
                        x0_3 = x8_3
                    else
                        x0_3 += 0x21d8
                    
                    if (x0_3 u>= x9_2)
                        goto label_b460d4
                    
                    while (zx.d(*(x0_3 + 0x21d2)) == 0)
                        x0_3 += 0x21d8
                        
                        if (x0_3 u>= x9_2)
                            goto label_b460d4
                    
                    if (x0_3 == 0xffffffff)
                        goto label_b460d4
            
            break
        
        x0_3 += 0x21d8
    while (x0_3 u< x9_2)

label_b460d4:
x0_3 = DomCreatePile_Other(0x3eb, x1_1, 0, 0)
return zx.q(*(gDomClient + 0x1f8e4) != *(x0_3 + 0x21d0) ? 1 : 0)
