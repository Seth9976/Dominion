// 函数: _Z12GetCardsHere6CardIDPP6DomGfx
// 地址: 0xb0ee00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x15 = zx.q(*(gDomClient + 0x205e8))
void* i
void* x11_1

if (x15.d != 0)
    x11_1 = *(gDomClient + 0x205e0)
    i = x11_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x11_1 + x15 * 0x21d8)
            goto label_b0ef80

int32_t x8_1

if (x15.d == 0 || i == 0xffffffff)
label_b0ef80:
    x8_1 = 0
else
    x8_1 = 0
    
    do
        if (*(i + 0x2c) == 0 && *(i + 0xa4) == 0x474
                && *(x11_1 + zx.q(*(i + 0x9c)) * 0x21d8 + 0x68) == arg1)
            void* x15_1
            void* j
            
            if (x15.d != 0)
                x15_1 = x11_1 + mulu.dp.d(x15.d, 0x21d8)
                j = x11_1
                
                while (zx.d(*(j + 0x21d2)) == 0)
                    j += 0x21d8
                    
                    if (j u>= x15_1)
                        goto label_b0ef28
            
            void* j_1
            
            if (x15.d == 0 || j == 0xffffffff)
            label_b0ef28:
                j_1 = nullptr
            else
                do
                    if (*(j + 0x2c) == 0 && *(j + 0x98) == *(i + 0x98) && zx.d(*(j + 0x168)) == 0)
                        j_1 = j
                        break
                    
                    if (j == 0)
                        j = x11_1
                    else
                        j += 0x21d8
                    
                    if (j u>= x15_1)
                        goto label_b0ef28
                    
                    while (zx.d(*(j + 0x21d2)) == 0)
                        j += 0x21d8
                        
                        if (j u>= x15_1)
                            goto label_b0ef28
                    
                    j_1 = nullptr
                while (j != 0xffffffff)
            
            arg2[sx.q(x8_1)] = j_1
            x11_1 = *(gDomClient + 0x205e0)
            x15 = zx.q(*(gDomClient + 0x205e8))
            x8_1 += 1
        
        if (i == 0)
            i = x11_1
        else
            i += 0x21d8
        
        void* x16_8 = x11_1 + mulu.dp.d(x15.d, 0x21d8)
        
        if (i u>= x16_8)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x16_8)
                return zx.q(x8_1)
    while (i != 0xffffffff)

return zx.q(x8_1)
