// 函数: _Z23TutorialCardIsClickableR6DomGfx
// 地址: 0xaf600c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) == 1)
    int64_t var_38
    int32_t x0_3 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_38)
    int64_t x22_1 = sx.q(*(gDomClient + 0x205cc))
    uint64_t result = 1
    
    if (x22_1.d s>= x0_3)
        return result
    
    int64_t x23_1 = var_38
    
    if (x23_1 == 0)
        return result
    
    result = 0
    uint64_t x8_3 = zx.q(*(x23_1 + x22_1 * 0xb0 + 0x1c) - 2)
    
    if (x8_3.d u> 0x15)
        return result
    
    DomGame* x0_10
    uint64_t x1_5
    uint64_t x2_3
    int32_t x8_19
    int32_t x20_2
    
    switch (x8_3)
        case 0, 1, 2, 4
        label_af60a4:
            
            if (*(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3ea)
                return 0
            
            if (CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)))
                    != *(x23_1 + x22_1 * 0xb0 + 0x24))
                return 0
        case 3
            if (*(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3eb)
                goto label_af60a4
            
            if (CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)))
                    != *(x23_1 + x22_1 * 0xb0 + 0x24))
                goto label_af60a4
        case 5
            return zx.q(*(arg1 + 0x2c) == 0 ? 1 : 0) & zx.q(*(arg1 + 0xa4) == 0x3e9 ? 1 : 0)
        case 6, 7, 0x13
            return zx.q(*(arg1 + 0x2c) == 0 ? 1 : 0) & zx.q(*(arg1 + 0xa4) == 0x3ea ? 1 : 0)
        case 8, 9
            if (*(x23_1 + x22_1 * 0xb0 + 0x18) == 0xb && *(gDomClient + 0x20758) == 2)
                int32_t x8_13 = *(arg1 + 0x2c)
                int32_t x20_1 = *(x23_1 + x22_1 * 0xb0 + 0x24)
                
                if (x8_13 == 3)
                    if (*(arg1 + 0x30) == x20_1)
                        return 0
                    
                    int32_t x8_30 = *(arg1 + 0x70)
                    
                    if (x8_30 != 0)
                        int64_t x9_10 = *(gDomClient + 0x205e0)
                        
                        if (x9_10 != 0 && (x20_1 == 0 || (CardIs(gDomClient + 0x20728, 
                                zx.q(*(x9_10 + zx.q(x8_30.w) * 0x21d8 + 0x98)), zx.q(x20_1)) & 1) != 0))
                            return 0
                else if (x8_13 == 0
                        && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), zx.q(x20_1)) & 1)
                        != 0)
                    return 0
            
            x8_19 = *(arg1 + 0x2c)
            
            if (x8_19 != 0 || *(arg1 + 0xa4) != 0x3ea)
                x20_2 = *(x23_1 + x22_1 * 0xb0 + 0x24)
                
                if (x8_19 != 3)
                    goto label_af61fc
                
                goto label_af6188
        case 0xa, 0xc, 0xf, 0x10, 0x11, 0x12, 0x14
            return result
        case 0xb, 0xd
            x8_19 = *(arg1 + 0x2c)
            x20_2 = *(x23_1 + x22_1 * 0xb0 + 0x24)
            
            if (x8_19 != 3)
            label_af61fc:
                
                if (x8_19 != 0)
                    return 0
                
                x1_5 = zx.q(*(arg1 + 0x98))
                x0_10 = gDomClient + 0x20728
                x2_3 = zx.q(x20_2)
                goto label_af629c
            
        label_af6188:
            
            if (*(arg1 + 0x30) != x20_2)
                int32_t x8_15 = *(arg1 + 0x70)
                
                if (x8_15 == 0)
                    return 0
                
                int64_t x9_5 = *(gDomClient + 0x205e0)
                
                if (x9_5 == 0)
                    return 0
                
                if (x20_2 == 0 || (CardIs(gDomClient + 0x20728, 
                        zx.q(*(x9_5 + zx.q(x8_15.w) * 0x21d8 + 0x98)), zx.q(x20_2)) & 1) != 0)
                    return 1
                
                return 0
        case 0xe
            int32_t x8_25 = *(arg1 + 0x2c)
            
            if (x8_25 != 3)
                if (x8_25 != 0)
                    return 0
                
                x1_5 = zx.q(*(arg1 + 0x98))
                x0_10 = gDomClient + 0x20728
                x2_3 = 0
            label_af629c:
                
                if ((CardIs(x0_10, x1_5, x2_3) & 1) == 0)
                    return 0
            else if (*(arg1 + 0x30) != 0)
                int32_t x8_35 = *(arg1 + 0x70)
                
                if (x8_35 == 0)
                    return 0
                
                int64_t x9_11 = *(gDomClient + 0x205e0)
                
                if (x9_11 == 0)
                    return 0
                
                CardIs(gDomClient + 0x20728, zx.q(*(x9_11 + zx.q(x8_35.w) * 0x21d8 + 0x98)), 0)
        case 0x15
            if (*(arg1 + 0x2c) != 5 || *(arg1 + 0x204) != *(x23_1 + x22_1 * 0xb0 + 0x24))
                return 0

return 1
