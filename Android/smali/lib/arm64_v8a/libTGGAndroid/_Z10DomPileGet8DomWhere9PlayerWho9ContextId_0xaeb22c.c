// 函数: _Z10DomPileGet8DomWhere9PlayerWho9ContextId
// 地址: 0xaeb22c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* result_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = result_1 + x9 * 0x21d8
    void* result = result_1
    
    do
        if (zx.d(*(result + 0x21d2)) != 0)
            if (result != 0xffffffff)
                while (true)
                    if (*(result + 0x2c) == 3 && *(result + 0x58) == arg2
                            && *(result + 0x5c) == arg1 && *(result + 0x60) == arg3)
                        return result
                    
                    if (result == 0)
                        result = result_1
                    else
                        result += 0x21d8
                    
                    if (result u>= x9_1)
                        break
                    
                    while (zx.d(*(result + 0x21d2)) == 0)
                        result += 0x21d8
                        
                        if (result u>= x9_1)
                            return 0
                    
                    if (result == 0xffffffff)
                        return 0
            
            break
        
        result += 0x21d8
    while (result u< x9_1)

return 0
