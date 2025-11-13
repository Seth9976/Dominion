// 函数: _Z23DomFindOrCreateCardPile9PlayerWho6CardID
// 地址: 0xb243bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gDomClient + 0x205e8))

if (x12.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int64_t x12_1 = i_1 + x12 * 0x21d8
                
                do
                    if (*(i + 0x2c) == 3 && *(i + 0x58) == arg1.d && *(i + 0x5c) == 0x474
                            && *(i + 0x68) == arg2.d)
                        return i
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x12_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x12_1)
                            goto label_b24484
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x12 * 0x21d8)

label_b24484:
return DomCreateCardPile(arg1, arg2) __tailcall
