// 函数: _Z19DomFindOrCreatePile9PlayerWho8DomWhere9ContextId6CardID
// 地址: 0xaee5cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
uint64_t x1 = zx.q(arg1)
void* result

if (x9.d != 0)
    void* result_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = result_1 + x9 * 0x21d8
    result = result_1
    
    do
        if (zx.d(*(result + 0x21d2)) != 0)
            if (result != 0xffffffff)
                while (true)
                    if (*(result + 0x2c) == 3 && *(result + 0x58) == x1.d && *(result + 0x5c) == x20
                            && *(result + 0x60) == arg3)
                        if (result != 0)
                            return result
                        
                        break
                    
                    if (result == 0)
                        result = result_1
                    else
                        result += 0x21d8
                    
                    if (result u>= x9_1)
                        goto label_aee6ac
                    
                    while (zx.d(*(result + 0x21d2)) == 0)
                        result += 0x21d8
                        
                        if (result u>= x9_1)
                            goto label_aee6ac
                    
                    if (result == 0xffffffff)
                        goto label_aee6ac
            
            break
        
        result += 0x21d8
    while (result u< x9_1)

label_aee6ac:
result = DomCreatePile_Other(zx.q(x20), x1, arg3, arg4)

if (x20 == 0x3ee)
    DomExpandPile(result, false)
else if (x20 - 0x3ef u<= 1 && *(gDomClient + 0x1f8e4) == 0)
    DomExpandPile(result, false)

return result
