// 函数: _Z9FindToken12DomTokenType9PlayerWho8DomWhere6CardID9ContextId
// 地址: 0xb49d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gDomClient + 0x205e8))

if (x12.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int64_t x12_1 = i_1 + x12 * 0x21d8
                
                while (true)
                    if (*(i + 0x2c) == 4 && *(i + 0x1b4) == arg1 && *(i + 0x1bc) == arg3
                            && *(i + 0x1c0) == arg4 && *(i + 0x1c4) == arg2
                            && *(i + 0x1c8) == arg5)
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
                            return 0
                    
                    if (i == 0xffffffff)
                        return 0
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x12 * 0x21d8)

return 0
