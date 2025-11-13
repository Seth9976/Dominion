// 函数: _Z14NumTokensWhere12DomTokenType9PlayerWho8DomWhere9ContextId
// 地址: 0xb15f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gDomClient + 0x205e8))

if (x12.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i == 0xffffffff)
                break
            
            uint64_t result = 0
            int64_t x12_1 = i_1 + x12 * 0x21d8
            
            do
                if (*(i + 0x2c) == 4 && *(i + 0x1c4) == arg2 && *(i + 0x1bc) == arg3
                        && *(i + 0x1c8) == arg4)
                    result = zx.q(*(i + 0x1d8) + result.d)
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x12_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x12_1)
                        return result
            while (i != 0xffffffff)
            
            return result
        
        i += 0x21d8
    while (i u< i_1 + x12 * 0x21d8)

return 0
