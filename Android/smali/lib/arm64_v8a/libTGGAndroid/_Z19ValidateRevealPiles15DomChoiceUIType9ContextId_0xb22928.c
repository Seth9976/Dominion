// 函数: _Z19ValidateRevealPiles15DomChoiceUIType9ContextId
// 地址: 0xb22928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 & 0xffffffbf) != 0x3b)
    return 1

int32_t x11 = *(gDomClient + 0x38)
uint64_t x10 = zx.q(*(gDomClient + 0x205e8))
int32_t x8

x8 = x11 == 0xffffffff ? 0 : x11

if (x10.d != 0)
    void* i_2 = *(gDomClient + 0x205e0)
    int64_t x10_1 = i_2 + x10 * 0x21d8
    void* i = i_2
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int32_t x12_1 = 0
                
                do
                    if (*(i + 0x2c) == 0 && *(i + 0xa0) == x8 && *(i + 0xa4) == 0x3f0
                            && *(i + 0xc8) == arg2)
                        x12_1 += 1
                    
                    if (i == 0)
                        i = i_2
                    else
                        i += 0x21d8
                    
                    if (i u>= x10_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_1)
                            goto label_b22a0c
                while (i != 0xffffffff)
                
            label_b22a0c:
                
                if (x12_1 == 1)
                    void* i_1 = i_2
                    int32_t x12_2
                    
                    while (true)
                        if (zx.d(*(i_1 + 0x21d2)) != 0)
                            if (i_1 == 0xffffffff)
                                return 0
                            
                            x12_2 = 0
                            
                            do
                                if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == x8
                                        && *(i_1 + 0xa4) == 0x3ef && *(i_1 + 0xc8) == arg2)
                                    x12_2 += 1
                                
                                if (i_1 == 0)
                                    i_1 = i_2
                                else
                                    i_1 += 0x21d8
                                
                                if (i_1 u>= x10_1)
                                    break
                                
                                while (zx.d(*(i_1 + 0x21d2)) == 0)
                                    i_1 += 0x21d8
                                    
                                    if (i_1 u>= x10_1)
                                        return zx.q(x12_2 == 1 ? 1 : 0)
                            while (i_1 != 0xffffffff)
                            
                            break
                        
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x10_1)
                            x12_2 = 0
                            break
                    
                    return zx.q(x12_2 == 1 ? 1 : 0)
            
            break
        
        i += 0x21d8
    while (i u< x10_1)

return 0
