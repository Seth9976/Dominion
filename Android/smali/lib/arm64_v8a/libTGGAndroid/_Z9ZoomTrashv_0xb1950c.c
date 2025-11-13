// 函数: _Z9ZoomTrashv
// 地址: 0xb1950c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* x0_1

if (x9.d != 0)
    void* x8_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = x8_1 + x9 * 0x21d8
    x0_1 = x8_1
    
    do
        if (zx.d(*(x0_1 + 0x21d2)) != 0)
            if (x0_1 != 0xffffffff)
                while (true)
                    if (*(x0_1 + 0x2c) == 3 && *(x0_1 + 0x58) == 0xffffffff && *(x0_1 + 0x5c) == 2
                            && *(x0_1 + 0x60) == 0)
                        if (x0_1 != 0)
                            goto label_b195ec
                        
                        break
                    
                    if (x0_1 == 0)
                        x0_1 = x8_1
                    else
                        x0_1 += 0x21d8
                    
                    if (x0_1 u>= x9_1)
                        goto label_b195e0
                    
                    while (zx.d(*(x0_1 + 0x21d2)) == 0)
                        x0_1 += 0x21d8
                        
                        if (x0_1 u>= x9_1)
                            goto label_b195e0
                    
                    if (x0_1 == 0xffffffff)
                        goto label_b195e0
            
            break
        
        x0_1 += 0x21d8
    while (x0_1 u< x9_1)

label_b195e0:
x0_1 = DomCreatePile_Other(2, 0xffffffff, 0, 0)
label_b195ec:
return DomExpandPile(x0_1, false) __tailcall
