// 函数: _Z7GetPile11DomCardEnum
// 地址: 0xae81ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(gDomClient + 0x205e8))

if (result.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int64_t x14_2 = i_1 + result * 0x21d8
                
                do
                    int32_t x17_1 = *(i + 0x2c)
                    int32_t x1_1 = *(i + 0x30) == arg1 ? 1 : 0
                    int32_t x16_2
                    
                    x16_2 = x17_1 == 3 ? x1_1 : 3
                    
                    if (((x17_1 == 3 ? 1 : 0) & x1_1) != 0)
                        result = i
                    
                    if (x16_2 != 3 && x16_2 != 0)
                        return result
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x14_2)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x14_2)
                            goto label_ae82c0
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< i_1 + result * 0x21d8)

label_ae82c0:
pthread_kill(pthread_self(), 6)
return XNoReturn()
