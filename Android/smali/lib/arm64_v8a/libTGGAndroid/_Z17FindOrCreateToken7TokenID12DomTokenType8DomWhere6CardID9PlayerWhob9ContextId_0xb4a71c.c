// 函数: _Z17FindOrCreateToken7TokenID12DomTokenType8DomWhere6CardID9PlayerWhob9ContextId
// 地址: 0xb4a71c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x7 = arg7
uint64_t x13 = zx.q(*(gDomClient + 0x205e8))

if (x13.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int64_t x13_1 = i_1 + x13 * 0x21d8
                
                do
                    if (*(i + 0x2c) == 4 && *(i + 0x1b0) == arg1.d && *(i + 0x1c8) == x7)
                        return i
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x13_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x13_1)
                            goto label_b4a7f0
                while (i != 0xffffffff)
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x13 * 0x21d8)

label_b4a7f0:
return DomCreateToken(arg1, arg2, arg3, zx.q(arg5), zx.q(arg4), 0, arg6 & 1, x7) __tailcall
