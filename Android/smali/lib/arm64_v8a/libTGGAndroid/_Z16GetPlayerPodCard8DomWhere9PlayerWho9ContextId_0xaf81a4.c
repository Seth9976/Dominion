// 函数: _Z16GetPlayerPodCard8DomWhere9PlayerWho9ContextId
// 地址: 0xaf81a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
uint64_t result

if (x9.d != 0)
    void* x8_1 = *(gDomClient + 0x205e0)
    int64_t x10_1 = x8_1 + x9 * 0x21d8
    void* x9_1 = x8_1
    
    do
        if (zx.d(*(x9_1 + 0x21d2)) != 0)
            if (x9_1 != 0xffffffff)
                while (true)
                    if (*(x9_1 + 0x2c) == 3 && *(x9_1 + 0x58) == arg2 && *(x9_1 + 0x5c) == arg1
                            && *(x9_1 + 0x60) == arg3)
                        if (x9_1 == 0)
                            break
                        
                        result = zx.q(*(x9_1 + 0x2148))
                        
                        if (result.d != 0)
                            goto label_af828c
                        
                        break
                    
                    if (x9_1 == 0)
                        x9_1 = x8_1
                    else
                        x9_1 += 0x21d8
                    
                    if (x9_1 u>= x10_1)
                        goto label_af8274
                    
                    while (zx.d(*(x9_1 + 0x21d2)) == 0)
                        x9_1 += 0x21d8
                        
                        if (x9_1 u>= x10_1)
                            goto label_af8274
                    
                    if (x9_1 == 0xffffffff)
                        goto label_af8274
            
            break
        
        x9_1 += 0x21d8
    while (x9_1 u< x10_1)

label_af8274:
result = CalcPodIconHandle(zx.q(arg2), 0)

if (result.d == 0)
    return result

label_af828c:
return UI2GetHandle(result, "tbl_card", 0) __tailcall
