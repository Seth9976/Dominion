// 函数: _Z17GetMouseoverStyleR6DomGfx
// 地址: 0xb09b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x21d0)

if (*(gDomClient + 0x1f8c0) == x8)
    if (*(arg1 + 0x21a0) != 4)
        return 4
    
    return 3

if (*(gDomClient + 0x207a4) != 2 || *(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3e9
        || *(gDomClient + 0x20758) == 0x2b || *(arg1 + 0x98) != *(gDomClient + 0x207a8))
    int32_t x12_1 = *(gDomClient + 0x38)
    int32_t x10_3 = *(arg1 + 0x1f78)
    int32_t x11_1 = *(arg1 + 0xa0)
    int32_t x12_2
    
    x12_2 = x12_1 == 0xffffffff ? 0 : x12_1
    
    if (x10_3 s< 1)
        if (x11_1 == x12_2)
            if (x10_3 != 0)
                goto label_b09d18
            
            if (*(arg1 + 0x3b0) != 1 || (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                    || *(arg1 + 0x3bc) != 0x3ea)
                goto label_b09d70
            
            return 2
        
        if (x10_3 == 0)
        label_b09d70:
            
            if ((*(arg1 + 0x3b8) & 0xfffffffe) != 6 || *(arg1 + 0x3b0) != 1
                    || *(arg1 + 0x3bc) u>= 0x49)
                return 0
        else
        label_b09d18:
            
            if (*(arg1 + 0x3b0) != 1 || (*(arg1 + 0x3b8) & 0xfffffffe) != 6)
                return 0
            
            int32_t x8_16 = *(arg1 + 0x3bc)
            
            if (x8_16 u> 0x48 || *(arg1 + 0x478) != 1 || (*(arg1 + 0x480) & 0xfffffffe) != 6
                    || *(arg1 + 0x484) != x8_16)
                return 0
    else
        int32_t x10_4 = *(arg1 + 0x308)
        int32_t x9_1
        
        if (x11_1 != x12_2)
            if (x10_4 == 0)
                return 0
            
            x9_1 = *(gDomClient + 0x1d01c)
        label_b09c84:
            
            if (x8 != x9_1 || (*(arg1 + 0x2030) & 0xfffffffe) != 6 || *(arg1 + 0x2034) u>= 0x49)
                if (*(arg1 + 0x478) != 1)
                    return 0
                
                if ((*(arg1 + 0x480) & 0xfffffffe) == 6)
                    return zx.q(*(arg1 + 0x484) u< 0x49 ? 1 : 0)
                
                return 0
        else
            if (x10_4 == 0 || *(arg1 + 0x3b0) == 0)
                return 0
            
            x9_1 = *(gDomClient + 0x1d01c)
            
            if (x8 == x9_1 && (*(arg1 + 0x2030) & 0xfffffffe) == 6 && *(arg1 + 0x2034) == 0x3ea)
                return 2
            
            int32_t x10_9 = *(arg1 + 0x478)
            
            if (x10_9 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) == 0x3ea)
                return 2
            
            if ((x8 != x9_1 || (*(arg1 + 0x2030) & 0xfffffffe) != 6 || *(arg1 + 0x2034) != 0x3ec)
                    &&
                    (x10_9 != 1 || (*(arg1 + 0x480) & 0xfffffffe) != 6 || *(arg1 + 0x484) != 0x3ec))
                goto label_b09c84

return 1
