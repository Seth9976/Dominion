// 函数: _Z12CalcCardSizeR6DomGfx
// 地址: 0xb0bcd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))
DomGfx& x20_1

if (x11.d == 0)
    while (true)
        int32_t x8_9 = *(arg1 + 0x2c)
        x20_1 = arg1
        
        if (x8_9 == 1)
            arg1 = x20_1
        label_b0bf1c:
            
            if (*(arg1 + 0x174) != 2)
                goto label_b0c144
            
            if (*(arg1 + 0x1f78) == 0)
                if (*(arg1 + 0x3b0) != 1)
                    goto label_b0c154_1
                
                if (*(arg1 + 0x3b8) != 0x21)
                    goto label_b0c154_1
                
                goto label_b0c144
            
            if (*(arg1 + 0x308) == 1 && *(arg1 + 0x310) == 0x21)
                goto label_b0c144
            
            if (*(arg1 + 0x478) != 1)
                goto label_b0c154_1
            
            if (*(arg1 + 0x480) == 0x21)
                goto label_b0c144
            
            goto label_b0c154_1
        
        if (x8_9 == 3)
            arg1 = x20_1
        label_b0bda0:
            
            if (*(arg1 + 0x21d0) != *(gDomClient + 0x1d01c))
                if (*(arg1 + 0x1f78) == 0)
                label_b0bde0:
                    int32_t x8_16 = *(arg1 + 0x5c)
                    
                    if (x8_16 - 7 u< 0xb)
                        return 2
                    
                    if (x8_16 - 0x27 u< 0x20)
                        return 3
                    
                    return 1
                
                if ((*(arg1 + 0x308) != 1 || *(arg1 + 0x310) != 0x21)
                        && (*(arg1 + 0x478) != 1 || *(arg1 + 0x480) != 0x21))
                    goto label_b0bde0
            
            goto label_b0c144
        
        if (*(x20_1 + 0x1f78) != 0)
            if (*(x20_1 + 0x308) != 1)
                goto label_b0bf84
            
            if (*(x20_1 + 0x310) == 0x1d && *(x20_1 + 0x478) == 1)
                arg1 = nullptr
                
                if (*(x20_1 + 0x480) == 0x1d)
                    continue
            
        label_b0bf6c:
            
            if ((*(x20_1 + 0x3b8) & 0xfffffffe) != 6)
                goto label_b0bf84
            
            break
        
        if (*(x20_1 + 0x3b0) != 1)
            goto label_b0c0c4
        
        arg1 = nullptr
        
        if (*(x20_1 + 0x3b8) != 0x1d)
        label_b0bfcc:
            
            if ((*(x20_1 + 0x3b8) & 0xfffffffe) != 6)
                goto label_b0c0c4
            
            if (*(x20_1 + 0x3bc) != 0x3e9)
                goto label_b0c0c4
            
            goto label_b0bfe0
else
    void* x8_1 = *(gDomClient + 0x205e0)
    int64_t x11_1 = x8_1 + x11 * 0x21d8
    
    while (true)
        int32_t x13_1 = *(arg1 + 0x2c)
        
        if (x13_1 == 1)
            goto label_b0bf1c
        
        if (x13_1 == 3)
            goto label_b0bda0
        
        if (*(arg1 + 0x1f78) == 0)
            if (*(arg1 + 0x3b0) != 1)
                x20_1 = arg1
                goto label_b0c0c4
            
            if (*(arg1 + 0x3b8) != 0x1d)
                x20_1 = arg1
                goto label_b0bfcc
        else
            if (*(arg1 + 0x308) != 1)
                x20_1 = arg1
                goto label_b0bf84
            
            if (*(arg1 + 0x310) != 0x1d)
            label_b0bef4:
                x20_1 = arg1
                
                if ((*(x20_1 + 0x3b8) & 0xfffffffe) == 6)
                    break
                
                goto label_b0bf84
            
            if (*(arg1 + 0x478) != 1)
                x20_1 = arg1
                goto label_b0bf6c
            
            if (*(arg1 + 0x480) != 0x1d)
                goto label_b0bef4
        
        int32_t x13_9 = *(arg1 + 0x3bc)
        void* x14_1 = x8_1
        
        while (true)
            if (zx.d(*(x14_1 + 0x21d2)) != 0)
            label_b0beac:
                arg1 = nullptr
                
                if (x14_1 == 0xffffffff)
                    break
                
                if (*(x14_1 + 0x2c) == 0 && *(x14_1 + 0x98) == x13_9 && zx.d(*(x14_1 + 0x168)) == 0)
                    arg1 = x14_1
                    break
                
                if (x14_1 == 0)
                    x14_1 = x8_1
                else
                    x14_1 += 0x21d8
                
                if (x14_1 u>= x11_1)
                    arg1 = nullptr
                    break
                
                do
                    if (zx.d(*(x14_1 + 0x21d2)) != 0)
                        goto label_b0beac
                    
                    x14_1 += 0x21d8
                while (x14_1 u< x11_1)
                
                arg1 = nullptr
                break
            
            x14_1 += 0x21d8
            
            if (x14_1 u>= x11_1)
                arg1 = nullptr
                break

if (*(x20_1 + 0x314) == 0x3e9)
    goto label_b0bfe0

label_b0bf84:
int32_t x8_40

if (*(x20_1 + 0x478) != 1 || *(x20_1 + 0x520) == 0xb || (*(x20_1 + 0x480) & 0xfffffffe) != 6
    || *(x20_1 + 0x484) != 0x3e9)
label_b0c048:
    
    if (*(x20_1 + 0x3b0) == 1 && (*(x20_1 + 0x3b8) & 0xfffffffe) == 6)
        x8_40 = *(x20_1 + 0x3bc)
        
        if (x8_40 u<= 0x48 && *(x20_1 + 0x478) == 1 && (*(x20_1 + 0x480) & 0xfffffffe) == 6
                && *(x20_1 + 0x484) == x8_40 && (*(x20_1 + 0x308) != 1 || *(x20_1 + 0x314) != 2)
                && (*(x20_1 + 0x520) == 0xb || x8_40 != 2))
            goto label_b0c114
else
label_b0bfe0:
    float v0_1
    float v1_1
    float v2_1
    float v3_1
    v0_1, v1_1, v2_1, v3_1 = RectScreen()
    
    if ((v2_1 - v0_1) / (v3_1 - v1_1) >= float.s(0x3fe10e10))
    labelid_2:
        return 1
    
    if ((CardIs(gDomClient + 0x20728, zx.q(*(x20_1 + 0x98)), 0x2000000) & 1) != 0)
    labelid_2:
        return 1
    
    if ((CardIs(gDomClient + 0x20728, zx.q(*(x20_1 + 0x98)), 0x1000000) & 1) != 0)
    label_b0c154:
        return 1
    
    if (*(x20_1 + 0x1f78) != 0)
        goto label_b0c048
    
label_b0c0c4:
    
    if ((*(x20_1 + 0x3b8) & 0xfffffffe) == 6 && *(x20_1 + 0x3b0) == 1)
        x8_40 = *(x20_1 + 0x3bc)
        
        if (x8_40 u<= 0x48 && x8_40 != 2)
        label_b0c114:
            
            if (*(*(gDomClient + 0x205e0) + zx.q(*(x20_1 + 0x9c)) * 0x21d8 + 0x21d0)
                != *(gDomClient + 0x1f8e4))
            label_b0c154_1:
                return 1
label_b0c144:
return 0
