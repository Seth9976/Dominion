// 函数: _Z13GetCardInHand11DomCardEnum
// 地址: 0xae82ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_i
void* entry_i_1 = entry_i
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    entry_i = *(gDomClient + 0x205e0)
    int64_t x9_1 = entry_i + x9 * 0x21d8
    
    do
        if (zx.d(*(entry_i + 0x21d2)) != 0)
            while (entry_i != 0xffffffff)
                int32_t x0_1
                
                if (*(entry_i + 0x2c) == 0 && *(entry_i + 0xa4) == 0x3ea)
                    x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(entry_i + 0x98)))
                
                void* entry_i_2
                
                if (*(entry_i + 0x2c) == 0 && *(entry_i + 0xa4) == 0x3ea && x0_1 == arg1)
                    int32_t x8_3 = *(gDomClient + 0x38)
                    int32_t x8_4
                    
                    x8_4 = x8_3 == 0xffffffff ? 0 : x8_3
                    
                    if (*(entry_i + 0xa0) == x8_4)
                        return entry_i
                    
                    entry_i_2 = *(gDomClient + 0x205e0)
                    entry_i += 0x21d8
                else if (entry_i == 0)
                    entry_i_2 = *(gDomClient + 0x205e0)
                    entry_i = entry_i_2
                else
                    entry_i_2 = *(gDomClient + 0x205e0)
                    entry_i += 0x21d8
                
                int64_t x8_5 = entry_i_2 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                
                if (entry_i u>= x8_5)
                    break
                
                while (zx.d(*(entry_i + 0x21d2)) == 0)
                    entry_i += 0x21d8
                    
                    if (entry_i u>= x8_5)
                        goto label_ae8414
            
            break
        
        entry_i += 0x21d8
    while (entry_i u< x9_1)

label_ae8414:
pthread_kill(pthread_self(), 6)
XNoReturn()
return entry_i
