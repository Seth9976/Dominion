// 函数: _Z18CalcCardFaceup_oldR6DomGfxRb
// 地址: 0xb119ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = true

if (*(arg1 + 0x2c) != 0)
    return 1

int32_t x9_1 = *(arg1 + 0xa4)
int32_t x8_3

if (x9_1 == 0x3eb)
    int32_t x8_2 = *(arg1 + 0x21d0)
    int32_t x9_3 = *(gDomClient + 0x1f8e0)
    
    if (x8_2 == x9_3 || x8_2 == *(gDomClient + 0x1f8c0))
    label_b11a94:
        
        if (x8_2 != x9_3)
            x8_3 = 0
            x9_1 = *(arg1 + 0xa4)
            
            if (x9_1 == 0x450 || x9_1 == 0x44e)
                goto label_b11af8
        else
            x8_3 = 0
            *arg2 = true
            x9_1 = *(arg1 + 0xa4)
            
            if (x9_1 == 0x450 || x9_1 == 0x44e)
                goto label_b11af8
    else
        if (*(arg1 + 0x1f78) != 0)
            if (*(arg1 + 0x308) != 1 || (*(arg1 + 0x3b8) & 0xfffffffe) != 6)
                if (*(arg1 + 0x478) != 1 || (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                        || *(arg1 + 0x484) u> 0x48)
                    goto label_b11ac8
                
                goto label_b11a94
            
            if (*(arg1 + 0x314) u< 0x49 || (*(arg1 + 0x478) == 1
                    && (*(arg1 + 0x3b8) & 0xfffffffe) == 6 && *(arg1 + 0x484) u<= 0x48))
                goto label_b11a94
            
            goto label_b11ac8
        
    label_b11ac8:
        x8_3 = 1
        *arg2 = true
        x9_1 = *(arg1 + 0xa4)
        
        if (x9_1 == 0x450 || x9_1 == 0x44e)
            goto label_b11af8
else if (x9_1 != 0x3ea)
    x8_3 = 0
    
    if (x9_1 == 0x450 || x9_1 == 0x44e)
    label_b11af8:
        x8_3 = 1
        *arg2 = true
        x9_1 = *(arg1 + 0xa4)
else
    int32_t x8 = *(gDomClient + 0x38)
    int32_t x8_1
    
    x8_1 = x8 == 0xffffffff ? 0 : x8
    
    x8_3 = *(arg1 + 0xa0) != x8_1 ? 1 : 0
    x9_1 = *(arg1 + 0xa4)
    
    if (x9_1 == 0x450 || x9_1 == 0x44e)
        goto label_b11af8

if (x9_1 == 0x3ed)
    x8_3 = 1
    *arg2 = true
    x9_1 = *(arg1 + 0xa4)

if (x9_1 == 0x474 && *(arg1 + 0x1f78) == 0 && *(arg1 + 0x3b8) == 0x1d)
    uint64_t x11_1 = zx.q(*(gDomClient + 0x205e8))
    void* i_1
    int64_t x11_2
    void* i
    
    if (x11_1.d != 0)
        i_1 = *(gDomClient + 0x205e0)
        x11_2 = i_1 + x11_1 * 0x21d8
        i = i_1
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x11_2)
                goto label_b11bf0
    
    void* i_2
    
    if (x11_1.d == 0 || i == 0xffffffff)
    label_b11bf0:
        i_2 = nullptr
    else
        do
            if (*(i + 0x2c) == 0 && *(i + 0x98) == *(arg1 + 0x3bc) && zx.d(*(i + 0x168)) == 0)
                i_2 = i
                
                if (*(i_2 + 0x1f78) != 0)
                    goto label_b11c00
                
                goto label_b11c38
            
            if (i == 0)
                i = i_1
            else
                i += 0x21d8
            
            if (i u>= x11_2)
                goto label_b11bf0
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x11_2)
                    goto label_b11bf0
            
            i_2 = nullptr
        while (i != 0xffffffff)
    
    int32_t x9_11
    
    if (*0x1f78 == 0)
    label_b11c38:
        
        if (*(i_2 + 0x3b0) != 1)
            x8_3 = 1
            *arg2 = false
        else
            x9_11 = *(i_2 + 0x3b8)
        label_b11c44:
            
            if (x9_11 != 0x21)
                x8_3 = 1
                *arg2 = false
    else
    label_b11c00:
        
        if (*(i_2 + 0x308) != 1 || *(i_2 + 0x310) != 0x21)
            if (*(i_2 + 0x478) == 1)
                x9_11 = *(i_2 + 0x480)
                goto label_b11c44
            
            x8_3 = 1
            *arg2 = false

return zx.q(*(arg1 + 0x128) != 0 ? 1 : 0) | zx.q((zx.d(*(arg1 + 0x114)) | x8_3) == 0 ? 1 : 0)
