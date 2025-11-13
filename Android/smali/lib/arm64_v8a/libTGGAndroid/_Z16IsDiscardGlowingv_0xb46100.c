// 函数: _Z16IsDiscardGlowingv
// 地址: 0xb46100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

if (*(gDomClient + 0x207a0) != x8_1)
    return 0

if (GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) == 2)
    uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
    uint64_t x1_1 = zx.q(*(gDomClient + 0x2079c))
    void* x0_3
    void* x8_3
    int64_t x9_2
    
    if (x9_1.d != 0)
        x8_3 = *(gDomClient + 0x205e0)
        x9_2 = x8_3 + x9_1 * 0x21d8
        x0_3 = x8_3
        
        while (zx.d(*(x0_3 + 0x21d2)) == 0)
            x0_3 += 0x21d8
            
            if (x0_3 u>= x9_2)
                goto label_b46218
    
    if (x9_1.d == 0 || x0_3 == 0xffffffff)
    label_b46218:
        x0_3 = DomCreatePile_Other(0x3ec, x1_1, 0, 0)
    else
        while (true)
            if (*(x0_3 + 0x2c) == 3 && *(x0_3 + 0x58) == x1_1.d && *(x0_3 + 0x5c) == 0x3ec
                    && *(x0_3 + 0x60) == 0)
                if (x0_3 != 0)
                    break
                
                goto label_b46218
            
            if (x0_3 == 0)
                x0_3 = x8_3
            else
                x0_3 += 0x21d8
            
            if (x0_3 u>= x9_2)
                goto label_b46218
            
            while (zx.d(*(x0_3 + 0x21d2)) == 0)
                x0_3 += 0x21d8
                
                if (x0_3 u>= x9_2)
                    goto label_b46218
            
            if (x0_3 == 0xffffffff)
                goto label_b46218
    
    if (*(gDomClient + 0x1f8e4) != *(x0_3 + 0x21d0))
        int32_t x8_5 = *(gDomClient + 0x38)
        uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
        int32_t x8_6
        
        x8_6 = x8_5 == 0xffffffff ? 0 : x8_5
        
        if (x10_1.d != 0)
            void* i_1 = *(gDomClient + 0x205e0)
            int64_t x10_2 = i_1 + x10_1 * 0x21d8
            void* i = i_1
            
            do
                if (zx.d(*(i + 0x21d2)) != 0)
                    if (i != 0xffffffff)
                        int32_t x12_2 = 0
                        
                        do
                            if (*(i + 0x2c) == 0 && *(i + 0xa0) == x8_6 && *(i + 0xa4) == 0x3ec
                                    && *(i + 0xc8) == 0)
                                x12_2 += 1
                            
                            if (i == 0)
                                i = i_1
                            else
                                i += 0x21d8
                            
                            if (i u>= x10_2)
                                break
                            
                            while (zx.d(*(i + 0x21d2)) == 0)
                                i += 0x21d8
                                
                                if (i u>= x10_2)
                                    goto label_b462fc
                        while (i != 0xffffffff)
                        
                    label_b462fc:
                        
                        if (x12_2 != 0)
                            return 1
                    
                    break
                
                i += 0x21d8
            while (i u< x10_2)

return 0
