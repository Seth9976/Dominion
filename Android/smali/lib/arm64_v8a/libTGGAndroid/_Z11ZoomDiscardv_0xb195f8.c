// 函数: _Z11ZoomDiscardv
// 地址: 0xb195f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gDomClient + 0x38)
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
uint64_t x1

if (x10 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x10)

void* x0_1

if (x9.d != 0)
    void* x8_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = x8_1 + x9 * 0x21d8
    x0_1 = x8_1
    
    do
        if (zx.d(*(x0_1 + 0x21d2)) != 0)
            if (x0_1 != 0xffffffff)
                while (true)
                    if (*(x0_1 + 0x2c) == 3 && *(x0_1 + 0x58) == x1.d && *(x0_1 + 0x5c) == 0x3ec
                            && *(x0_1 + 0x60) == 0)
                        if (x0_1 != 0)
                            goto label_b196e0
                        
                        break
                    
                    if (x0_1 == 0)
                        x0_1 = x8_1
                    else
                        x0_1 += 0x21d8
                    
                    if (x0_1 u>= x9_1)
                        goto label_b196d4
                    
                    while (zx.d(*(x0_1 + 0x21d2)) == 0)
                        x0_1 += 0x21d8
                        
                        if (x0_1 u>= x9_1)
                            goto label_b196d4
                    
                    if (x0_1 == 0xffffffff)
                        goto label_b196d4
            
            break
        
        x0_1 += 0x21d8
    while (x0_1 u< x9_1)

label_b196d4:
x0_1 = DomCreatePile_Other(0x3ec, x1, 0, 0)
label_b196e0:
return DomExpandPile(x0_1, false) __tailcall
