// 函数: _Z14TopCardIsStash9PlayerWho
// 地址: 0xb455c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gDomClient + 0x205e8))

if (x10.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    int64_t x11_1 = i_1 + x10 * 0x21d8
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            while (i != 0xffffffff)
                if (*(i + 0x2c) == 3 && *(i + 0x58) == arg1 && *(i + 0x5c) == 0x3eb
                        && *(i + 0x60) == 0)
                    if (i != 0)
                        void* i_2 = i_1
                        int32_t j
                        
                        do
                            j = *(i_2 + 0x21d0)
                            i_2 += 0x21d8
                        while (j u< 0x10000)
                        void* x11_2 = i_2 - 0x21d8
                        
                        while (*(x11_2 + 0x2c) != 3 || *(x11_2 + 0x58) != arg1
                                || *(x11_2 + 0x5c) != 0x3eb || *(x11_2 + 0x60) != 0)
                            void* x14_5 = x11_2 + 0x43a8
                            int32_t k
                            
                            do
                                k = *x14_5
                                x11_2 += 0x21d8
                                x14_5 += 0x21d8
                            while (k u< 0x10000)
                        
                        int32_t x11_3 = *(x11_2 + 0x70)
                        
                        if (x11_3 != 0)
                            uint64_t x12_1 = zx.q(x11_3.w)
                            
                            if (x12_1.d u< x10.d && *(i_1 + x12_1 * 0x21d8 + 0x21d0) == x11_3)
                                return CardIs(gDomClient + 0x20728, 
                                    zx.q(*(i_1 + x12_1 * 0x21d8 + 0x98)), 0x1309) __tailcall
                    
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
