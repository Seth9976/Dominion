// 函数: _Z15DomBoardPileGet11DomCardEnum
// 地址: 0xb199e8
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
                    if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x60) == 0
                            && *(i + 0x30) == arg1)
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
                            goto label_b19ab8
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x12 * 0x21d8)

label_b19ab8:
pthread_kill(pthread_self(), 6)
return XNoReturn()
