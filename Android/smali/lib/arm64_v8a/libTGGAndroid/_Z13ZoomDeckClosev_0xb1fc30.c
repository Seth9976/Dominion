// 函数: _Z13ZoomDeckClosev
// 地址: 0xb1fc30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11 = *(gDomClient + 0x38)
uint64_t x10 = zx.q(*(gDomClient + 0x205e8))
int32_t x8

x8 = x11 == 0xffffffff ? 0 : x11

if (x10.d != 0)
    void* x9_1 = *(gDomClient + 0x205e0)
    int64_t x10_1 = x9_1 + x10 * 0x21d8
    void* x11_1 = x9_1
    
    do
        if (zx.d(*(x11_1 + 0x21d2)) != 0)
            if (x11_1 != 0xffffffff)
                while (true)
                    if (*(x11_1 + 0x2c) == 3 && *(x11_1 + 0x58) == x8 && *(x11_1 + 0x5c) == 0x3eb
                            && *(x11_1 + 0x60) == 0)
                        return DomMinimizePile(x11_1) __tailcall
                    
                    if (x11_1 == 0)
                        x11_1 = x9_1
                    else
                        x11_1 += 0x21d8
                    
                    if (x11_1 u>= x10_1)
                        break
                    
                    while (true)
                        if (zx.d(*(x11_1 + 0x21d2)) != 0)
                            if (x11_1 != 0xffffffff)
                                break
                            
                            return DomMinimizePile(nullptr) __tailcall
                        
                        x11_1 += 0x21d8
                        
                        if (x11_1 u>= x10_1)
                            goto label_b1fd08
            
            break
        
        x11_1 += 0x21d8
    while (x11_1 u< x10_1)

label_b1fd08:
return DomMinimizePile(nullptr) __tailcall
