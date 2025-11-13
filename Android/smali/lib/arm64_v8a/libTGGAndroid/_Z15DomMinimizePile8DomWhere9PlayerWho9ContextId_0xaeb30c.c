// 函数: _Z15DomMinimizePile8DomWhere9PlayerWho9ContextId
// 地址: 0xaeb30c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* x8_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = x8_1 + x9 * 0x21d8
    void* x10_1 = x8_1
    
    do
        if (zx.d(*(x10_1 + 0x21d2)) != 0)
            if (x10_1 != 0xffffffff)
                while (true)
                    if (*(x10_1 + 0x2c) == 3 && *(x10_1 + 0x58) == arg2 && *(x10_1 + 0x5c) == arg1
                            && *(x10_1 + 0x60) == arg3)
                        return DomMinimizePile(x10_1) __tailcall
                    
                    if (x10_1 == 0)
                        x10_1 = x8_1
                    else
                        x10_1 += 0x21d8
                    
                    if (x10_1 u>= x9_1)
                        break
                    
                    while (true)
                        if (zx.d(*(x10_1 + 0x21d2)) != 0)
                            if (x10_1 != 0xffffffff)
                                break
                            
                            return DomMinimizePile(nullptr) __tailcall
                        
                        x10_1 += 0x21d8
                        
                        if (x10_1 u>= x9_1)
                            goto label_aeb3e0
            
            break
        
        x10_1 += 0x21d8
    while (x10_1 u< x9_1)

label_aeb3e0:
return DomMinimizePile(nullptr) __tailcall
