// 函数: _Z31DomGetCardPlaceholder_ZoomExtra11DomCardEnumi
// 地址: 0xaf3528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))

if (x11.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int64_t x11_1 = i_1 + x11 * 0x21d8
                
                do
                    if (*(i + 0x2c) == 1 && *(i + 0x174) == 1 && *(i + 0x17c) == arg2)
                        return i
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x11_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x11_1)
                            goto label_af35f0
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x11 * 0x21d8)

label_af35f0:
pthread_kill(pthread_self(), 6)
return XNoReturn()
