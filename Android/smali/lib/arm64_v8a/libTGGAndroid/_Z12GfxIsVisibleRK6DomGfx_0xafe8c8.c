// 函数: _Z12GfxIsVisibleRK6DomGfx
// 地址: 0xafe8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x8 = *(arg1 + 0x2c)

if (x8 != 5 || *(x0 + 0x10) == *(x0 + 0xc))
    if (zx.d(*gKV) != 0)
        return 0
    
    if (zx.d(*(arg1 + 0x2144)) == 0)
        if (x8 != 8)
            if (x8 == 2)
                return IsPlaceholderVisible(arg1) __tailcall
            
            if (x8 != 1)
                goto label_afea60
            
            int32_t x8_1 = *(arg1 + 0x174)
            
            if (x8_1 == 3)
                return 1
            
            if (x8_1 == 2)
                return GameDlgManagerDialogActive(0x3e8, 5) __tailcall
            
            return IsPlaceholderVisible(arg1) __tailcall
        
        int32_t x8_4 = *(arg1 + 0x240)
        
        if (x8_4 != 0)
            uint64_t x10_4 = zx.q(x8_4.w)
            
            if (x10_4.d u< *(gDomClient + 0x205e8))
                int64_t x9_6 = *(gDomClient + 0x205e0)
                DomGfx* x20_1 = x9_6 + x10_4 * 0x21d8
                
                if (*(x20_1 + 0x21d0) == x8_4)
                    DomGfx* x0_5
                    
                    if (*(x9_6 + x10_4 * 0x21d8 + 0x2c) == 3)
                        x0_5 = x20_1
                    label_afe9fc:
                        return GfxIsVisible(x0_5) __tailcall
                    
                    int32_t x10_7 = *(x9_6 + x10_4 * 0x21d8 + 0x9c)
                    uint64_t x10_8
                    
                    if (x10_7 != 0)
                        x10_8 = zx.q(x10_7.w)
                    
                    if (x10_7 != 0 && *(x9_6 + x10_8 * 0x21d8 + 0x5c) - 8 u<= 0x3e
                            && *(x9_6 + x10_8 * 0x21d8 + 0x70) == x8_4)
                        return 1
                    
                    bool var_24
                    
                    if ((GfxIsVisible(x20_1) & 1) != 0 && (CalcCardFaceup(x20_1, &var_24) & 1) != 0)
                        x8 = *(arg1 + 0x2c)
                    label_afea60:
                        int32_t x9_10
                        
                        if (x8 != 3)
                        label_afeb28:
                            
                            if (x8 == 0 && *(gDomClient + 0x1f8c0) == *(arg1 + 0x21d0))
                                return 1
                            
                            if (x8 != 3)
                            label_afedac:
                                int32_t x8_17 = *(arg1 + 0x2134)
                                uint64_t x10_27
                                
                                if (x8_17 != 0)
                                    x10_27 = zx.q(x8_17.w)
                                
                                if (x8_17 == 0 || x10_27.d u>= *(gDomClient + 0x205e8)
                                        || *(*(gDomClient + 0x205e0) + x10_27 * 0x21d8 + 0x21d0)
                                        != x8_17)
                                    int32_t x8_18 = *(arg1 + 0x2c)
                                    
                                    if (x8_18 == 0)
                                        if ((zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb))
                                            & 0x44444444) == 0)
                                        label_afef18:
                                            x8_18 = *(arg1 + 0x2c)
                                        label_afef1c:
                                            
                                            if (x8_18 != 0)
                                                if (x8_18 != 5)
                                                    return 1
                                                
                                                int32_t x8_32 = *(gDomClient + 0x38)
                                                int32_t x8_33
                                                
                                                x8_33 = x8_32 == 0xffffffff ? 0 : x8_32
                                                
                                                if (*(arg1 + 0x1f0) != x8_33)
                                                    return 0
                                                
                                                return zx.q(LocalWho() == *(gDomClient + 0x207a0)
                                                    ? 1 : 0)
                                            
                                            int32_t x9_26 = *(arg1 + 0x21d0)
                                            int32_t x8_35 = *(gDomClient + 0x1d01c)
                                            
                                            if (x8_35 == x9_26)
                                                return 1
                                            
                                            if (x8_35 == 0)
                                            label_afefe8:
                                                
                                                if (*(arg1 + 0x128) != 0)
                                                    return 1
                                                
                                                int32_t x12_9 = *(arg1 + 0xa4)
                                                
                                                if (x12_9 != 1)
                                                    if (*(arg1 + 0x1f78) != 0)
                                                        return 1
                                                    
                                                    int32_t x16_4 = *(arg1 + 0x9c)
                                                    
                                                    if (x16_4 == 0)
                                                        return 1
                                                    
                                                    int32_t x15_14 = *(arg1 + 0x3b0)
                                                    
                                                    if (x15_14 != 1)
                                                    label_aff054:
                                                        uint64_t x14_6 =
                                                            zx.q(*(gDomClient + 0x205e8))
                                                        uint64_t x11_23 = zx.q(x16_4.w)
                                                        
                                                        if (x11_23.d u< x14_6.d)
                                                            void* x8_46 = *(gDomClient + 0x205e0)
                                                            
                                                            if (*(x8_46 + x11_23 * 0x21d8 + 0x21d0)
                                                                    == x16_4)
                                                                int32_t x10_33 = *(gDomClient + 0x1f8e4)
                                                                uint64_t x17_4
                                                                
                                                                if (x10_33 != 0)
                                                                    x17_4 = zx.q(x10_33.w)
                                                                
                                                                void* const x17_6
                                                                
                                                                if (x10_33 == 0 || x17_4.d u>= x14_6.d)
                                                                    x17_6 = nullptr
                                                                else
                                                                    void* x17_5 = x8_46 + x17_4 * 0x21d8
                                                                    
                                                                    if (*(x17_5 + 0x21d0) == x10_33)
                                                                        x17_6 = x17_5
                                                                    else
                                                                        x17_6 = nullptr
                                                                
                                                                if (x12_9 == 0x3eb)
                                                                    if ((*(x8_46 + x11_23 * 0x21d8 + 0x70)
                                                                        == x9_26 && (x17_6 == 0
                                                                        || *(x17_6 + 0x5c) != 0x3eb
                                                                        || *(x17_6 + 0x58) != *(arg1 + 0xa0)))
                                                                        || *(arg1 + 0xc0) != 0)
                                                                    label_aff1d0:
                                                                        
                                                                        if (x16_4 == x10_33)
                                                                            return 1
                                                                        
                                                                        if (x15_14 != 1)
                                                                        label_aff34c:
                                                                            uint64_t x16_44 = zx.q(x12_9 - 0x451)
                                                                            
                                                                            if (x16_44.d u> 0x23)
                                                                            label_aff3ac:
                                                                                
                                                                                if (x12_9 == 2)
                                                                                    int64_t x11_25 = x8_46 + x14_6 * 0x21d8
                                                                                    void* x9_29 = x8_46
                                                                                    
                                                                                    while (zx.d(*(x9_29 + 0x21d2)) == 0)
                                                                                        x9_29 += 0x21d8
                                                                                        
                                                                                        if (x9_29 u>= x11_25)
                                                                                            return 0
                                                                                    
                                                                                    if (x9_29 != 0xffffffff)
                                                                                        while (*(x9_29 + 0x2c) != 3
                                                                                                || *(x9_29 + 0x58) != 0xffffffff
                                                                                                || *(x9_29 + 0x5c) != 2
                                                                                                || *(x9_29 + 0x60) != 0)
                                                                                            if (x9_29 == 0)
                                                                                                x9_29 = x8_46
                                                                                            else
                                                                                                x9_29 += 0x21d8
                                                                                            
                                                                                            if (x9_29 u>= x11_25)
                                                                                                return 0
                                                                                            
                                                                                            while (zx.d(*(x9_29 + 0x21d2)) == 0)
                                                                                                x9_29 += 0x21d8
                                                                                                
                                                                                                if (x9_29 u>= x11_25)
                                                                                                    return 0
                                                                                            
                                                                                            if (x9_29 == 0xffffffff)
                                                                                                return 0
                                                                                        
                                                                                        if (x9_29 != 0
                                                                                                && *(x9_29 + 0x21d0) == x10_33)
                                                                                            return 1
                                                                                else
                                                                                    if (x12_9 == 0x3ec)
                                                                                    label_aff3c8:
                                                                                        return zx.q(
                                                                                            *(x8_46 + x11_23 * 0x21d8 + 0x70)
                                                                                            == x9_26 ? 1 : 0)
                                                                                    
                                                                                    if (x15_14 == 1
                                                                                            && *(arg1 + 0x3b8) == 0x15)
                                                                                        return 1
                                                                                    
                                                                                    int64_t result = 1
                                                                                    
                                                                                    if (x12_9 s<= 0x3ee)
                                                                                        if (x12_9 == 6)
                                                                                            return result
                                                                                        
                                                                                        if (x12_9 != 0x3ee)
                                                                                        label_aff5b8:
                                                                                            
                                                                                            if ((*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                                    || x15_14 != 1
                                                                                                    || *(arg1 + 0x3bc) u>= 0x49)
                                                                                                if (x12_9 == 0x3e9)
                                                                                                    return 1
                                                                                                
                                                                                                int32_t x15_33 = *(gDomClient + 0x38)
                                                                                                int32_t x13_5 = *(arg1 + 0xa0)
                                                                                                int32_t x15_34
                                                                                                
                                                                                                x15_34 =
                                                                                                    x15_33 == 0xffffffff ? 0 : x15_33
                                                                                                
                                                                                                if (x12_9 == 0x3ea && x13_5 == x15_34)
                                                                                                    return 1
                                                                                                
                                                                                                if (x12_9 != 0x3eb || x13_5 != x15_34)
                                                                                                    return zx.q(x12_9 == 0x3f1 ? 1 : 0)
                                                                                                        | zx.q(x13_5 == 0xffffffff ? 1 : 0)
                                                                                                        | zx.q(x13_5 == x15_34 ? 1 : 0)
                                                                                                
                                                                                                int64_t x14_10 = x8_46 + x14_6 * 0x21d8
                                                                                                void* x12_12 = x8_46
                                                                                                
                                                                                                do
                                                                                                    if (zx.d(*(x12_12 + 0x21d2)) != 0)
                                                                                                        if (x12_12 != 0xffffffff)
                                                                                                            while (true)
                                                                                                                if (*(x12_12 + 0x2c) == 3
                                                                                                                        && *(x12_12 + 0x58) == x13_5
                                                                                                                        && *(x12_12 + 0x5c) == 0x3eb
                                                                                                                        && *(x12_12 + 0x60) == 0)
                                                                                                                    if (x12_12 == 0)
                                                                                                                        break
                                                                                                                    
                                                                                                                    if (*(x12_12 + 0x21d0) != x10_33)
                                                                                                                        break
                                                                                                                    
                                                                                                                    return 1
                                                                                                                
                                                                                                                if (x12_12 == 0)
                                                                                                                    x12_12 = x8_46
                                                                                                                else
                                                                                                                    x12_12 += 0x21d8
                                                                                                                
                                                                                                                if (x12_12 u>= x14_10)
                                                                                                                    goto label_aff3c8
                                                                                                                
                                                                                                                while (zx.d(*(x12_12 + 0x21d2)) == 0)
                                                                                                                    x12_12 += 0x21d8
                                                                                                                    
                                                                                                                    if (x12_12 u>= x14_10)
                                                                                                                        goto label_aff3c8
                                                                                                                
                                                                                                                if (x12_12 == 0xffffffff)
                                                                                                                    goto label_aff3c8
                                                                                                        
                                                                                                        break
                                                                                                    
                                                                                                    x12_12 += 0x21d8
                                                                                                while (x12_12 u< x14_10)
                                                                                                
                                                                                                goto label_aff3c8
                                                                                    else
                                                                                        if (x12_9 - 0x3ef u>= 2)
                                                                                            if (x12_9 == 0x474)
                                                                                                return result
                                                                                            
                                                                                            goto label_aff5b8
                                                                                        
                                                                                        if (x10_33 != 0)
                                                                                            uint64_t x9_30 = zx.q(x10_33.w)
                                                                                            
                                                                                            if (x9_30.d u< x14_6.d
                                                                                                    && *(x8_46 + x9_30 * 0x21d8 + 0x21d0)
                                                                                                    == x10_33)
                                                                                                void* x8_49 = x8_46 + x9_30 * 0x21d8
                                                                                                int64_t x10_35 = *(arg1 + 0xc8)
                                                                                                int64_t x8_50 = *(x8_49 + 0x60)
                                                                                                
                                                                                                if (((x12_9 == 0x3f0 ? 1 : 0)
                                                                                                        & (*(x8_49 + 0x5c) == 0x3ef ? 1 : 0)
                                                                                                        & (x8_50 == x10_35 - 1 ? 1 : 0) & 1)
                                                                                                        != 0 || x8_50 == x10_35)
                                                                                                    return 1
                                                                            else if ((1 << x16_44 & 0x23207) == 0)
                                                                                if (x16_44 != 0x23)
                                                                                    goto label_aff3ac
                                                                                
                                                                                int64_t x10_34 = x8_46 + x14_6 * 0x21d8
                                                                                void* x11_24 = x8_46
                                                                                
                                                                                do
                                                                                    if (zx.d(*(x11_24 + 0x21d2)) != 0)
                                                                                        if (x11_24 != 0xffffffff)
                                                                                            while (true)
                                                                                                if (*(x11_24 + 0x2c) == 0
                                                                                                        && *(x11_24 + 0x98)
                                                                                                        == *(x8_46 + x11_23 * 0x21d8 + 0x68)
                                                                                                        && zx.d(*(x11_24 + 0x168)) == 0)
                                                                                                    return GfxIsVisible(x11_24) __tailcall
                                                                                                
                                                                                                if (x11_24 == 0)
                                                                                                    x11_24 = x8_46
                                                                                                else
                                                                                                    x11_24 += 0x21d8
                                                                                                
                                                                                                if (x11_24 u>= x10_34)
                                                                                                    break
                                                                                                
                                                                                                while (zx.d(*(x11_24 + 0x21d2)) == 0)
                                                                                                    x11_24 += 0x21d8
                                                                                                    
                                                                                                    if (x11_24 u>= x10_34)
                                                                                                        goto label_aff514
                                                                                                
                                                                                                x0_5 = nullptr
                                                                                                
                                                                                                if (x11_24 == 0xffffffff)
                                                                                                    goto label_afe9fc
                                                                                        
                                                                                        break
                                                                                    
                                                                                    x11_24 += 0x21d8
                                                                                while (x11_24 u< x10_34)
                                                                                
                                                                            label_aff514:
                                                                                return GfxIsVisible(nullptr) __tailcall
                                                                        else if ((
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x461) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x45f) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x457) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x45c) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x456) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x455) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x44d) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x450) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x44e) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x460) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x463) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 0x464) && (
                                                                                (*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                                || *(arg1 + 0x3bc) != 6))
                                                                            goto label_aff34c
                                                                else if ((x12_9 == 0x3ec
                                                                        && *(x8_46 + x11_23 * 0x21d8 + 0x70)
                                                                        == x9_26 && (x17_6 == 0
                                                                        || *(x17_6 + 0x5c) != 0x3ec
                                                                        || *(x17_6 + 0x58) != *(arg1 + 0xa0)))
                                                                        || *(arg1 + 0xc0) != 0)
                                                                    goto label_aff1d0
                                                    else if ((*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                            || *(arg1 + 0x3bc) != 6)
                                                        if ((*(arg1 + 0x3b8) & 0xfffffffe) != 6
                                                                || *(arg1 + 0x3bc) != 0x3f1)
                                                            goto label_aff054
                                                        
                                                        return 1
                                            else
                                                uint64_t x10_30 = zx.q(x8_35.w)
                                                
                                                if (x10_30.d u>= *(gDomClient + 0x205e8))
                                                    goto label_afefe8
                                                
                                                int64_t x11_22 = *(gDomClient + 0x205e0)
                                                
                                                if (*(x11_22 + x10_30 * 0x21d8 + 0x21d0) != x8_35
                                                        || *(x11_22 + x10_30 * 0x21d8 + 0x178)
                                                        != x9_26)
                                                    goto label_afefe8
                                        else
                                            int32_t x8_28
                                            
                                            if (*(arg1 + 0x1f78) != 0)
                                                if (*(arg1 + 0x308) == 1 && *(arg1 + 0x310) == 0x21)
                                                    goto label_afef18
                                                
                                                if (*(arg1 + 0x478) != 1)
                                                    goto label_afeef8
                                                
                                                x8_28 = *(arg1 + 0x480)
                                                goto label_afeeec
                                            
                                            if (*(arg1 + 0x3b0) != 1)
                                            label_afeef8:
                                                
                                                if (*(arg1 + 0xa4) == 0x3f1 || *(arg1 + 0x9c)
                                                        != *(gDomClient + 0x1d014))
                                                    goto label_afef18
                                            else
                                                x8_28 = *(arg1 + 0x3b8)
                                            label_afeeec:
                                                
                                                if (x8_28 == 0x21 || *(arg1 + 0xa4) == 0x3f1
                                                        || *(arg1 + 0x9c)
                                                        != *(gDomClient + 0x1d014))
                                                    goto label_afef18
                                    else
                                        if (x8_18 != 4)
                                            if (x8_18 != 3)
                                                goto label_afef1c
                                            
                                            int32_t x8_19 = *(arg1 + 0x5c)
                                            
                                            if (x8_19 == 6 || x8_19 == 0x3f1)
                                                return 0
                                            
                                            goto label_afef18
                                        
                                        if (*(arg1 + 0x1bc) != 0x474)
                                            return 1
                                        
                                        uint64_t x10_28 = zx.q(*(gDomClient + 0x205e8))
                                        
                                        if (x10_28.d != 0)
                                            void* x8_22 = *(gDomClient + 0x205e0)
                                            int64_t x10_29 = x8_22 + x10_28 * 0x21d8
                                            void* x11_20 = x8_22
                                            
                                            do
                                                if (zx.d(*(x11_20 + 0x21d2)) != 0)
                                                    if (x11_20 != 0xffffffff)
                                                        while (true)
                                                            if (*(x11_20 + 0x2c) == 0
                                                                    && *(x11_20 + 0x98) == *(arg1 + 0x1c0)
                                                                    && zx.d(*(x11_20 + 0x168)) == 0)
                                                                if ((GfxIsVisible(x11_20) & 1) == 0)
                                                                    return 0
                                                                
                                                                return 1
                                                            
                                                            if (x11_20 == 0)
                                                                x11_20 = x8_22
                                                            else
                                                                x11_20 += 0x21d8
                                                            
                                                            if (x11_20 u>= x10_29)
                                                                goto label_aff12c
                                                            
                                                            while (zx.d(*(x11_20 + 0x21d2)) == 0)
                                                                x11_20 += 0x21d8
                                                                
                                                                if (x11_20 u>= x10_29)
                                                                    goto label_aff12c
                                                            
                                                            if (x11_20 == 0xffffffff)
                                                                goto label_aff12c
                                                    
                                                    break
                                                
                                                x11_20 += 0x21d8
                                            while (x11_20 u< x10_29)
                                        
                                    label_aff12c:
                                        
                                        if ((GfxIsVisible(nullptr) & 1) != 0)
                                            return 1
                            else
                                x9_10 = *(arg1 + 0x5c)
                            label_afeb58:
                                
                                if (x9_10 != 3)
                                    goto label_afec6c
                                
                                int32_t i = BoardPileWhere(gDomClient + 0x20728, 0xd00)
                                uint64_t x9_16 = zx.q(*(gDomClient + 0x205e8))
                                
                                if (x9_16.d != 0)
                                    void* x10_12 = *(gDomClient + 0x205e0)
                                    int64_t x11_13 = x10_12 + x9_16 * 0x21d8
                                    void* x9_17 = x10_12
                                    
                                    while (zx.d(*(x9_17 + 0x21d2)) == 0)
                                        x9_17 += 0x21d8
                                        
                                        if (x9_17 u>= x11_13)
                                            return 0
                                    
                                    if (x9_17 != 0xffffffff)
                                        while (*(x9_17 + 0x2c) != 3 || *(x9_17 + 0x58) != 0xffffffff
                                                || *(x9_17 + 0x5c) != i || *(x9_17 + 0x60) != 0)
                                            if (x9_17 == 0)
                                                x9_17 = x10_12
                                            else
                                                x9_17 += 0x21d8
                                            
                                            if (x9_17 u>= x11_13)
                                                return 0
                                            
                                            while (zx.d(*(x9_17 + 0x21d2)) == 0)
                                                x9_17 += 0x21d8
                                                
                                                if (x9_17 u>= x11_13)
                                                    return 0
                                            
                                            if (x9_17 == 0xffffffff)
                                                return 0
                                        
                                        if (x9_17 != 0 && (GfxIsVisible(x9_17) & 1) != 0)
                                            if (*(arg1 + 0x2c) != 3)
                                                goto label_afedac
                                            
                                            goto label_afec6c
                        else
                            x9_10 = *(arg1 + 0x5c)
                            
                            if (x9_10 != 0x3ee)
                                goto label_afeb58
                            
                            int64_t x9_11 = *(arg1 + 0x60)
                            
                            if (x9_11 == 0)
                            label_afec6c:
                                
                                if (*(arg1 + 0x5c) - 0x3ef u>= 2
                                        && *(arg1 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                    int32_t x20_2 = *(arg1 + 0x30)
                                    
                                    if (x20_2 == 0)
                                        goto label_afedac
                                    
                                    uint64_t x1_5
                                    
                                    if (*(GetClient() + 0x5068) == 0)
                                        x1_5 = 0x18
                                    else
                                        x1_5 = zx.q(*(ActiveGame() + 0x30))
                                    
                                    if ((IsLandscape(zx.q(x20_2), x1_5) & 1) == 0)
                                        goto label_afedac
                                    
                                    uint64_t x8_12 = zx.q(*(arg1 + 0x70))
                                    int64_t x9_19 = *(gDomClient + 0x205e0)
                                    
                                    if (*(x9_19 + x8_12 * 0x21d8 + 0x1f78) == 0)
                                        if ((*(x9_19 + x8_12 * 0x21d8 + 0x3b8) & 0xfffffffe) == 6
                                                && *(x9_19 + x8_12 * 0x21d8 + 0x3b0) == 1
                                                && *(x9_19 + x8_12 * 0x21d8 + 0x3bc) u<= 0x48)
                                            goto label_afedac
                                    else if (*(x9_19 + x8_12 * 0x21d8 + 0x3b0) == 1
                                            && (*(x9_19 + x8_12 * 0x21d8 + 0x3b8) & 0xfffffffe)
                                            == 6)
                                        int32_t x10_21 = *(x9_19 + x8_12 * 0x21d8 + 0x3bc)
                                        
                                        if (x10_21 u<= 0x48
                                                && *(x9_19 + x8_12 * 0x21d8 + 0x478) == 1
                                                && (*(x9_19 + x8_12 * 0x21d8 + 0x480) & 0xfffffffe)
                                                == 6
                                                && *(x9_19 + x8_12 * 0x21d8 + 0x484) == x10_21)
                                            goto label_afedac
                            else
                                uint32_t i_2 = (x9_11 u>> 0x20).d
                                
                                if (i_2 == 0)
                                    goto label_afec6c
                                
                                void* x9_12 = *(gDomClient + 0x205e0)
                                void* x12_4 = x9_12
                                int32_t i_1
                                
                                do
                                    i_1 = *(x12_4 + 0x21d0)
                                    x12_4 += 0x21d8
                                while (i_1 u< 0x10000)
                                void* x12_5 = x12_4 - 0x21d8
                                
                                while (*(x12_5 + 0x2c) != 0 || *(x12_5 + 0x98) != i_2
                                        || zx.d(*(x12_5 + 0x168)) != 0)
                                    void* x15_7 = x12_5 + 0x43a8
                                    int32_t j
                                    
                                    do
                                        j = *x15_7
                                        x12_5 += 0x21d8
                                        x15_7 += 0x21d8
                                    while (j u< 0x10000)
                                
                                int32_t x10_9 = *(x12_5 + 0x2134)
                                
                                if (x10_9 == 0)
                                    goto label_afeb28
                                
                                uint64_t x12_6 = zx.q(x10_9.w)
                                
                                if (x12_6.d u>= *(gDomClient + 0x205e8)
                                        || *(x9_12 + x12_6 * 0x21d8 + 0x21d0) != x10_9)
                                    goto label_afeb28

return 0
