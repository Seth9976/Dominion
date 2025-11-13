// 函数: _Z17GetAssociatedPileR6DomGfx8DomWhere
// 地址: 0xb924fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& result = arg1
int64_t x0
uint64_t x1
int64_t x2_1

if (arg2 == 0x3f0)
    x1 = zx.q(*(result + 0x58))
    x2_1 = *(result + 0x60)
    uint64_t x9_3 = zx.q(*(gDomClient + 0x205e8))
    
    if (x9_3.d != 0)
        DomGfx* result_2 = *(gDomClient + 0x205e0)
        int64_t x9_4 = result_2 + x9_3 * 0x21d8
        result = result_2
        
        do
            if (zx.d(*(result + 0x21d2)) != 0)
                if (result != 0xffffffff)
                    while (true)
                        if (*(result + 0x2c) == 3 && *(result + 0x58) == x1.d
                                && *(result + 0x5c) == 0x3f0 && *(result + 0x60) == x2_1)
                            if (result != 0)
                                return result
                            
                            break
                        
                        if (result == 0)
                            result = result_2
                        else
                            result += 0x21d8
                        
                        if (result u>= x9_4)
                            goto label_b926b8
                        
                        while (zx.d(*(result + 0x21d2)) == 0)
                            result += 0x21d8
                            
                            if (result u>= x9_4)
                                goto label_b926b8
                        
                        if (result == 0xffffffff)
                            goto label_b926b8
                
                break
            
            result += 0x21d8
        while (result u< x9_4)
    
label_b926b8:
    x0 = 0x3f0
label_b926d0:
    result = DomCreatePile_Other(x0, x1, x2_1, 0)
    
    if (*(gDomClient + 0x1f8e4) == 0)
        DomExpandPile(result, false)
else if (arg2 == 0x3ef)
    x1 = zx.q(*(result + 0x58))
    x2_1 = *(result + 0x60)
    uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
    
    if (x9_1.d != 0)
        DomGfx* result_1 = *(gDomClient + 0x205e0)
        int64_t x9_2 = result_1 + x9_1 * 0x21d8
        result = result_1
        
        do
            if (zx.d(*(result + 0x21d2)) != 0)
                if (result != 0xffffffff)
                    while (true)
                        if (*(result + 0x2c) == 3 && *(result + 0x58) == x1.d
                                && *(result + 0x5c) == 0x3ef && *(result + 0x60) == x2_1)
                            if (result != 0)
                                return result
                            
                            break
                        
                        if (result == 0)
                            result = result_1
                        else
                            result += 0x21d8
                        
                        if (result u>= x9_2)
                            goto label_b92634
                        
                        while (zx.d(*(result + 0x21d2)) == 0)
                            result += 0x21d8
                            
                            if (result u>= x9_2)
                                goto label_b92634
                        
                        if (result == 0xffffffff)
                            goto label_b92634
                
                break
            
            result += 0x21d8
        while (result u< x9_2)
    
label_b92634:
    x0 = 0x3ef
    goto label_b926d0
return result
