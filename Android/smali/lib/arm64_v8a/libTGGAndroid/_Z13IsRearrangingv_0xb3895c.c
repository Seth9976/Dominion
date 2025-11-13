// 函数: _Z13IsRearrangingv
// 地址: 0xb3895c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *(gDomClient + 0x1f8e4)

if (x11 != 0)
    uint64_t x13_1 = zx.q(*(gDomClient + 0x205e8))
    uint64_t x9_1 = zx.q(x11.w)
    
    if (x9_1.d u< x13_1.d)
        void* i_1 = *(gDomClient + 0x205e0)
        
        if (*(i_1 + x9_1 * 0x21d8 + 0x21d0) == x11)
            void* x12_3 = i_1 + x9_1 * 0x21d8
            uint64_t x0 = zx.q(*(x12_3 + 0x5c))
            int64_t x13_2 = i_1 + x13_1 * 0x21d8
            void* i = i_1
            int32_t x4
            
            while (true)
                if (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u< x13_2)
                        continue
                else if (i != 0xffffffff)
                    x4 = 0
                    
                    do
                        if (*(i + 0x2c) == 0 && *(i + 0xa0) == *(x12_3 + 0x58)
                                && *(i + 0xa4) == x0.d && *(i + 0xc8) == *(x12_3 + 0x60))
                            x4 += 1
                        
                        if (i == 0)
                            i = i_1
                        else
                            i += 0x21d8
                        
                        if (i u>= x13_2)
                            break
                        
                        while (zx.d(*(i + 0x21d2)) == 0)
                            i += 0x21d8
                            
                            if (i u>= x13_2)
                                goto label_b38a9c
                    while (i != 0xffffffff)
                    
                    break
                
                x4 = 0
                break
            
        label_b38a9c:
            int32_t x0_2 = CalcPileState(x0, zx.q(*(i_1 + x9_1 * 0x21d8 + 0x30)), 
                zx.q(*(gDomClient + 0x2074c)), zx.q(*(gDomClient + 0x20758)), x4)
            return zx.q((x0_2 & 0xfffffffe) == 0xa ? 1 : 0) | zx.q(x0_2 - 5 u< 2 ? 1 : 0)

return 0
