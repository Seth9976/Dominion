// 函数: _Z12CardGetLayerR6DomGfx
// 地址: 0xb05120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x2c)

if (x8 != 1)
    if (*(gDomClient + 0x1f8c0) == *(arg1 + 0x21d0))
        return 0x2e18
    
    if (x8 == 0 && *(arg1 + 0x128) != 0)
        return 0x2d44
    
    int32_t v0
    
    if (*(arg1 + 0x1f78) == 0)
        int32_t x9_8 = *(arg1 + 0x3b0)
        
        if (x9_8 == 0)
            return 0x2e18
        
        if (x9_8 == 1)
            int32_t x10_8 = *(arg1 + 0x3b8)
            
            if (x10_8 - 0x21 u< 2)
                return 0x2eb9
            
            if (x10_8 == 0x15)
                return 0x2cf7
            
            if ((x10_8 & 0xfffffffe) != 6)
                if (x10_8 == 0x1e)
                    return 0x2cf7
            else if (*(arg1 + 0x3bc) - 0x3ee u< 3 || *(arg1 + 0x3bc) == 2
                    || *(arg1 + 0x3bc) == 0x451 || *(arg1 + 0x3bc) == 0x452
                    || *(arg1 + 0x3bc) == 0x453 || *(arg1 + 0x3bc) == 0x454
                    || *(arg1 + 0x3bc) == 0x45f || *(arg1 + 0x3bc) == 0x460
                    || *(arg1 + 0x3bc) == 0x461 || *(arg1 + 0x3bc) == 0x462
                    || *(arg1 + 0x3bc) == 0x463 || *(arg1 + 0x3bc) == 0x464
                    || *(arg1 + 0x3bc) == 0x458 || *(arg1 + 0x3bc) == 0x459
                    || *(arg1 + 0x3bc) == 0x455 || *(arg1 + 0x3bc) == 0x456
                    || *(arg1 + 0x3bc) == 0x45b || *(arg1 + 0x3bc) == 0x457
                    || *(arg1 + 0x3bc) == 0x45a || *(arg1 + 0x3bc) == 0x45d
                    || *(arg1 + 0x3bc) == 0x45e || *(arg1 + 0x3bc) == 0x45c
                    || *(arg1 + 0x3bc) == 0x465 || *(arg1 + 0x3bc) == 0x466
                    || *(arg1 + 0x3bc) == 0x467 || *(arg1 + 0x3bc) == 0x468
                    || *(arg1 + 0x3bc) == 0x469 || *(arg1 + 0x3bc) == 0x46a
                    || *(arg1 + 0x3bc) == 0x46b || *(arg1 + 0x3bc) == 0x46c
                    || *(arg1 + 0x3bc) == 0x46d || *(arg1 + 0x3bc) == 0x46e
                    || *(arg1 + 0x3bc) == 0x471 || *(arg1 + 0x3bc) == 0x470
                    || *(arg1 + 0x3bc) == 0x46f || *(arg1 + 0x3bc) == 3 || *(arg1 + 0x3bc) == 0x44d
                    || *(arg1 + 0x3bc) == 0x44e || *(arg1 + 0x3bc) == 0x450)
                return 0x2cf7
        
        void* x11_19
        
        if (x8 == 3)
        label_b056a8:
            
            if (x9_8 != 1)
            label_b05c54:
                
                if (x8 != 0)
                    return 0x2b2a
                
                int32_t x8_43 = *(arg1 + 0xa4)
                int32_t x9_18
                
                x9_18 = x8_43 == 0x3eb ? 0x2d3e : 0x2b2a
                
                if (x8_43 == 0x3f1)
                    return 0x2d35
                
                return zx.q(x9_18)
            
            int32_t x10_50 = *(arg1 + 0x3b8)
            int32_t x11_18 = x10_50 & 0xfffffffe
            int32_t x8_21
            int32_t x9_12
            
            if (x11_18 == 6)
                if (*(arg1 + 0x3bc) == 0x3ed)
                    return 0x2d33
                
                void* x10_54
                
                if (*(arg1 + 0x3bc) == 0x3eb)
                    uint64_t x10_53 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x10_53.d == 0)
                        return 0x2d3e
                    
                    void* x8_17 = *(gDomClient + 0x205e0)
                    int64_t x11_20 = x8_17 + x10_53 * 0x21d8
                    x10_54 = x8_17
                    
                    while (zx.d(*(x10_54 + 0x21d2)) == 0)
                        x10_54 += 0x21d8
                        
                        if (x10_54 u>= x11_20)
                            return 0x2d3e
                    
                    if (x10_54 == 0xffffffff)
                        return 0x2d3e
                    
                    while (*(x10_54 + 0x2c) != 3 || *(x10_54 + 0x58) != *(arg1 + 0xa0)
                            || *(x10_54 + 0x5c) != 0x3eb || *(x10_54 + 0x60) != 0)
                        if (x10_54 == 0)
                            x10_54 = x8_17
                        else
                            x10_54 += 0x21d8
                        
                        if (x10_54 u>= x11_20)
                            return 0x2d3e
                        
                        while (zx.d(*(x10_54 + 0x21d2)) == 0)
                            x10_54 += 0x21d8
                            
                            if (x10_54 u>= x11_20)
                                return 0x2d3e
                        
                        if (x10_54 == 0xffffffff)
                            return 0x2d3e
                    
                label_b05e8c:
                    
                    if (x10_54 == 0 || *(x10_54 + 0x21d0) != *(gDomClient + 0x1f8e4))
                        return 0x2d3e
                    
                    return 0x2cf7
                
                if (*(arg1 + 0x3bc) != 0x3ec)
                    if (*(arg1 + 0x3bc) != 0x3ea)
                        if (*(arg1 + 0x3bc) != 0x3e9)
                            goto label_b05b98
                        
                        v0 = *(arg1 + 0x2178)
                        x8_21 = 0x2b5c
                        x9_12 = 0x2b5d
                        goto label_b05bc4
                    
                    v0 = *(arg1 + 0x2178)
                    x8_21 = 0x2d33
                    x9_12 = 0x2d34
                label_b05bc4:
                    
                    if (v0 f> 0f)
                        return zx.q(x9_12)
                    
                    return zx.q(x8_21)
                
                uint64_t x10_55 = zx.q(*(gDomClient + 0x205e8))
                
                if (x10_55.d == 0)
                    return 0x2d3e
                
                void* x8_20 = *(gDomClient + 0x205e0)
                int64_t x11_36 = x8_20 + x10_55 * 0x21d8
                x10_54 = x8_20
                
                while (zx.d(*(x10_54 + 0x21d2)) == 0)
                    x10_54 += 0x21d8
                    
                    if (x10_54 u>= x11_36)
                        return 0x2d3e
                
                if (x10_54 == 0xffffffff)
                    return 0x2d3e
                
                while (*(x10_54 + 0x2c) != 3 || *(x10_54 + 0x58) != *(arg1 + 0xa0)
                        || *(x10_54 + 0x5c) != 0x3ec || *(x10_54 + 0x60) != 0)
                    if (x10_54 == 0)
                        x10_54 = x8_20
                    else
                        x10_54 += 0x21d8
                    
                    if (x10_54 u>= x11_36)
                        return 0x2d3e
                    
                    while (zx.d(*(x10_54 + 0x21d2)) == 0)
                        x10_54 += 0x21d8
                        
                        if (x10_54 u>= x11_36)
                            return 0x2d3e
                    
                    if (x10_54 == 0xffffffff)
                        return 0x2d3e
                
                goto label_b05e8c
            
        label_b05b98:
            
            if (x11_18 == 6)
                if (x9_8 != 1)
                    goto label_b05c54
                
                if (*(arg1 + 0x3bc) u> 0x48)
                    if (*(arg1 + 0x3bc) - 0x3ee u< 3)
                        return 0x2cf7
                    
                    if (x10_50 == 7)
                        return 0x2b34
                    
                    goto label_b05c54
                
                if (x8 == 0)
                    if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x4000000) & 1) != 0)
                        return 0x2b34
                    
                    if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x40000000) & 1) != 0)
                        return 0x2b34
                    
                    if (*(arg1 + 0x2c) == 0 && *(arg1 + 0x3bc) - 0x27 u< 0x21)
                        return 0x2cf7
                
                v0 = *(arg1 + 0x2178)
                x8_21 = 0x2b2a
                x9_12 = 0x2b2b
                goto label_b05bc4
            
            if (x9_8 != 1)
                goto label_b05c54
            
            if (x10_50 == 7)
                return 0x2b34
            
            if (x10_50 == 0x15)
                return 0x2cf7
            
            if (x10_50 != 0x1d)
                goto label_b05c54
            
            uint64_t x10_56 = zx.q(*(gDomClient + 0x205e8))
            
            if (x10_56.d != 0)
                void* x8_42 = *(gDomClient + 0x205e0)
                int64_t x10_57 = x8_42 + x10_56 * 0x21d8
                x11_19 = x8_42
                
                while (zx.d(*(x11_19 + 0x21d2)) == 0)
                    x11_19 += 0x21d8
                    
                    if (x11_19 u>= x10_57)
                        goto label_b05e38
                
                if (x11_19 != 0xffffffff)
                    while (*(x11_19 + 0x2c) != 0 || *(x11_19 + 0x98) != *(arg1 + 0x3bc)
                            || zx.d(*(x11_19 + 0x168)) != 0)
                        if (x11_19 == 0)
                            x11_19 = x8_42
                        else
                            x11_19 += 0x21d8
                        
                        if (x11_19 u>= x10_57)
                            goto label_b05e38
                        
                        while (zx.d(*(x11_19 + 0x21d2)) == 0)
                            x11_19 += 0x21d8
                            
                            if (x11_19 u>= x10_57)
                                goto label_b05e38
                        
                        if (x11_19 == 0xffffffff)
                            return zx.q(CardGetLayer(nullptr) - 1)
                    
                    return zx.q(CardGetLayer(x11_19) - 1)
        else
            int32_t x10_49 = *(arg1 + 0xa0)
            
            if (x10_49 == 0xffffffff)
                goto label_b056a8
            
            int32_t x11_16 = *(gDomClient + 0x38)
            int32_t x11_17
            
            x11_17 = x11_16 == 0xffffffff ? 0 : x11_16
            
            if (x10_49 == x11_17)
                goto label_b056a8
            
            if (x9_8 != 1)
                return 0x2b8f
            
            int32_t x8_13 = *(arg1 + 0x3b8)
            
            if (x8_13 == 0x10)
            label_b05998:
                
                if (*(gDomClient + 0x3c) == x10_49)
                    return 0x2b99
                
                return 0x2b8f
            
            if (x8_13 != 0x1d)
                if ((x8_13 & 0xfffffffe) == 6 && *(arg1 + 0x3bc) == 0x3ec)
                    goto label_b05998
                
                if ((*(arg1 + 0x3b8) & 0xfffffffe) != 6 || *(arg1 + 0x3bc) != 0x3e9
                        || x10_49 != *(gDomClient + 0x205c4))
                    return 0x2b8f
                
                return 0x2b5c
            
            uint64_t x10_51 = zx.q(*(gDomClient + 0x205e8))
            
            if (x10_51.d != 0)
                void* x8_15 = *(gDomClient + 0x205e0)
                int64_t x10_52 = x8_15 + x10_51 * 0x21d8
                x11_19 = x8_15
                
                while (zx.d(*(x11_19 + 0x21d2)) == 0)
                    x11_19 += 0x21d8
                    
                    if (x11_19 u>= x10_52)
                        goto label_b05e38
                
                if (x11_19 != 0xffffffff)
                    while (*(x11_19 + 0x2c) != 0 || *(x11_19 + 0x98) != *(arg1 + 0x3bc)
                            || zx.d(*(x11_19 + 0x168)) != 0)
                        if (x11_19 == 0)
                            x11_19 = x8_15
                        else
                            x11_19 += 0x21d8
                        
                        if (x11_19 u>= x10_52)
                            goto label_b05e38
                        
                        while (zx.d(*(x11_19 + 0x21d2)) == 0)
                            x11_19 += 0x21d8
                            
                            if (x11_19 u>= x10_52)
                                goto label_b05e38
                        
                        if (x11_19 == 0xffffffff)
                            return zx.q(CardGetLayer(nullptr) - 1)
                    
                    return zx.q(CardGetLayer(x11_19) - 1)
    label_b05e38:
        return zx.q(CardGetLayer(nullptr) - 1)
    
    int32_t x10_7 = *(arg1 + 0x308)
    
    if (x10_7 == 1 && *(arg1 + 0x310) == 0xa)
        return 0x2d42
    
    int32_t x9_6 = *(arg1 + 0x478)
    
    if ((x9_6 == 1 && *(arg1 + 0x480) == 0xa) || (x10_7 == 1 && *(arg1 + 0x310) == 0xc)
            || (x9_6 == 1 && *(arg1 + 0x480) == 0xc) || (x10_7 == 1 && *(arg1 + 0x310) == 0xb)
            || (x9_6 == 1 && *(arg1 + 0x480) == 0xb) || (x10_7 == 1 && *(arg1 + 0x310) == 0xd)
            || (x9_6 == 1 && *(arg1 + 0x480) == 0xd) || (x10_7 == 1 && *(arg1 + 0x310) == 0xe)
            || (x9_6 == 1 && *(arg1 + 0x480) == 0xe))
        return 0x2d42
    
    if ((x10_7 != 1 || *(arg1 + 0x310) != 0x21) && (x9_6 != 1 || *(arg1 + 0x480) != 0x21)
            && (x10_7 != 1 || *(arg1 + 0x310) != 0x22) && (x9_6 != 1 || *(arg1 + 0x480) != 0x22))
        if ((x10_7 == 1 && (*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) == 0x3ea)
                || (x9_6 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) == 0x3ea)
                || (x10_7 == 1 && (*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) == 0x3ea)
                || (x9_6 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) == 0x3ea))
            return 0x2cf7
        
        int32_t x11_33 = *(arg1 + 0x260)
        
        if ((x11_33 == 1 && *(arg1 + 0x268) == 0x15) || (x10_7 == 1 && *(arg1 + 0x310) == 0x15)
                || (x9_6 == 1 && *(arg1 + 0x480) == 0x15) ||
                (x10_7 == 1 && (*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) - 0x3ee u< 3))
            return 0x2cf7
        
        if (x9_6 == 1)
            if ((*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) - 0x3ee u< 3)
                return 0x2cf7
            
            if (x11_33 == 1)
                int32_t x12_14 = *(arg1 + 0x480)
                
                if (x12_14 == *(arg1 + 0x268))
                    int32_t x11_35 = *(arg1 + 0x484)
                    
                    if (x11_35 == *(arg1 + 0x26c))
                        if ((x12_14 & 0xfffffffe) != 6)
                            return 0x2b35
                        
                        if (x11_35 == 0x3ea)
                            return 0x2d33
                        
                        if (x11_35 == 0x3eb)
                            return 0x2d42
                        
                        if (x11_35 == 0x3e9)
                            return 0x2b5c
                        
                        return 0x2b35
        
        if ((x10_7 == 1 && (*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) == 0x3eb)
                || (x9_6 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) == 0x3eb))
            return 0x2cf7
        
        if (x8 != 3)
            int32_t x8_29 = *(arg1 + 0xa0)
            
            if (x8_29 != 0xffffffff)
                int32_t x11_43 = *(gDomClient + 0x38)
                int32_t x11_44
                
                x11_44 = x11_43 == 0xffffffff ? 0 : x11_43
                
                if (x8_29 != x11_44)
                    return 0x2b94
        
        if (x9_6 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6
                && (*(arg1 + 0x484) == 0x3ec || *(arg1 + 0x484) == 2))
            return 0x2d3e
        
        if (x10_7 == 1)
            if ((*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) == 0x3eb)
                return 0x2d3e
            
            if (*(arg1 + 0x310) != 0xf && (x9_6 != 1 || *(arg1 + 0x480) != 0xf))
                return 0x2b5c
        else if (x9_6 != 1 || *(arg1 + 0x480) != 0xf)
            return 0x2b5c
        
        int32_t x8_39 = *(gDomClient + 0x38)
        int32_t x8_40
        
        x8_40 = x8_39 == 0xffffffff ? 0 : x8_39
        
        if (*(arg1 + 0xa0) == x8_40)
            return 0x2b71
        
        return 0x2b95
    
    v0 = *(arg1 + 0x1f84)
    float v1 = fconvert.s(0.5f)
    
    if ((v0 f>= v1 || *(arg1 + 0x480) != 0x21) && (v0 f<= v1 || *(arg1 + 0x480) == 0x21))
        return 0x2eb9
else
    if (*(arg1 + 0x174) == 3)
        return 0x2e18
    
    if (*(arg1 + 0x1f78) == 0)
        if (*(arg1 + 0x3b0) != 1)
            return 0x2e7d
        
        if (*(arg1 + 0x3b8) != 0x21 && *(arg1 + 0x3b8) != 0x22)
            if (*(arg1 + 0x3b8) == 0x23)
                return 0x2ecd
            
            if (*(arg1 + 0x3b8) != 0x24)
                return 0x2e7d
            
            return 0x2ed6
    else
        int32_t x8_3 = *(arg1 + 0x308)
        
        if (x8_3 != 1 || *(arg1 + 0x310) != 0x21)
            int32_t x9_3 = *(arg1 + 0x478)
            
            if ((x9_3 != 1 || *(arg1 + 0x480) != 0x21) && (x8_3 != 1 || *(arg1 + 0x310) != 0x22)
                    && (x9_3 != 1 || *(arg1 + 0x480) != 0x22))
                if ((x8_3 == 1 && *(arg1 + 0x310) == 0x23)
                        || (x9_3 == 1 && *(arg1 + 0x480) == 0x23))
                    return 0x2ecd
                
                if (x8_3 != 1)
                    if (x9_3 != 1 || *(arg1 + 0x480) != 0x24)
                        return 0x2e7d
                    
                    return 0x2ed6
                
                if (*(arg1 + 0x310) == 0x24 || (x9_3 == 1 && *(arg1 + 0x480) == 0x24))
                    return 0x2ed6
                
                return 0x2e7d

return 0x2eb8
