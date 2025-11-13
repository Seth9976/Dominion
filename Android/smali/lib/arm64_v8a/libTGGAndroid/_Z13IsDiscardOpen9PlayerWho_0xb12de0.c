// 函数: _Z13IsDiscardOpen9PlayerWho
// 地址: 0xb12de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gDomClient + 0x205e8))

if (x10.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    int64_t x11_1 = i_1 + x10 * 0x21d8
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            while (i != 0xffffffff)
                if (*(i + 0x2c) == 3 && *(i + 0x58) == arg1 && *(i + 0x5c) == 0x3ec
                        && *(i + 0x60) == 0)
                    if (i != 0 && *(i + 0x21d0) == *(gDomClient + 0x1f8e4))
                        return 1
                    
                    break
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x11_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x11_1)
                        return 0
            
            break
        
        i += 0x21d8
    while (i u< x11_1)

return 0
