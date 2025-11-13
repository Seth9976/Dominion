// 函数: _Z30KingdomCardsForImbalancedStartP11DomCardEnum
// 地址: 0xa36fa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x21 = *(DomGetContext() + 8)
int32_t x0_2 = BoardPileWhat(x21, 0x13)
int32_t x20 = x0_2
int32_t x23 = 0

if (x0_2 s> 0x1018)
    if (x20 - 0x1019 u> 0x19 || (1 << (x20 - 0x1019) & 0x2108421) == 0)
    label_a373dc:
        
        if ((AllowedImbalanced(zx.q(x20)) & 1) == 0)
            x23 = 0
        else
            *arg1 = x20
            x23 = 1
        
        goto label_a3700c
    
label_a3700c:
    int32_t x0_4 = BoardPileWhat(x21, 0x14)
    
    if (x0_4 s<= 0x1018)
        if (x0_4 != 0)
            if (x0_4 == 0x91c || x0_4 == 0xc0a)
                goto label_a37048
            
            goto label_a37408
        
        x20 = x23
    else
        if (x0_4 - 0x1019 u> 0x19 || (1 << (x0_4 - 0x1019) & 0x2108421) == 0)
        label_a37408:
            
            if ((AllowedImbalanced(zx.q(x0_4)) & 1) == 0)
                goto label_a37048
            
            x20 = x23 + 1
            *(arg1 + (zx.q(x23) << 2)) = x0_4
        else
        label_a37048:
            x20 = x23
        
        int32_t x0_6 = BoardPileWhat(x21, 0x15)
        
        if (x0_6 s> 0x1018)
            if (x0_6 - 0x1019 u> 0x19 || (1 << (x0_6 - 0x1019) & 0x2108421) == 0)
            label_a37434:
                
                if ((AllowedImbalanced(zx.q(x0_6)) & 1) != 0)
                    *(arg1 + (zx.q(x20) << 2)) = x0_6
                    x20 += 1
                
                goto label_a37098
            
        label_a37098:
            int32_t x0_8 = BoardPileWhat(x21, 0x16)
            
            if (x0_8 s> 0x1018)
                if (x0_8 - 0x1019 u> 0x19 || (1 << (x0_8 - 0x1019) & 0x2108421) == 0)
                label_a37464:
                    
                    if ((AllowedImbalanced(zx.q(x0_8)) & 1) != 0)
                        *(arg1 + (zx.q(x20) << 2)) = x0_8
                        x20 += 1
                    
                    goto label_a370dc
                
            label_a370dc:
                int32_t x0_10 = BoardPileWhat(x21, 0x17)
                
                if (x0_10 s> 0x1018)
                    if (x0_10 - 0x1019 u> 0x19 || (1 << (x0_10 - 0x1019) & 0x2108421) == 0)
                    label_a37494:
                        
                        if ((AllowedImbalanced(zx.q(x0_10)) & 1) != 0)
                            *(arg1 + (zx.q(x20) << 2)) = x0_10
                            x20 += 1
                        
                        goto label_a37120
                    
                label_a37120:
                    int32_t x0_12 = BoardPileWhat(x21, 0x18)
                    
                    if (x0_12 s> 0x1018)
                        if (x0_12 - 0x1019 u> 0x19 || (1 << (x0_12 - 0x1019) & 0x2108421) == 0)
                        label_a374c4:
                            
                            if ((AllowedImbalanced(zx.q(x0_12)) & 1) != 0)
                                *(arg1 + (zx.q(x20) << 2)) = x0_12
                                x20 += 1
                            
                            goto label_a37164
                        
                    label_a37164:
                        int32_t x0_14 = BoardPileWhat(x21, 0x19)
                        
                        if (x0_14 s> 0x1018)
                            if (x0_14 - 0x1019 u> 0x19 || (1 << (x0_14 - 0x1019) & 0x2108421) == 0)
                            label_a374f4:
                                
                                if ((AllowedImbalanced(zx.q(x0_14)) & 1) != 0)
                                    *(arg1 + (zx.q(x20) << 2)) = x0_14
                                    x20 += 1
                                
                                goto label_a371a8
                            
                        label_a371a8:
                            int32_t x0_16 = BoardPileWhat(x21, 0x1a)
                            
                            if (x0_16 s> 0x1018)
                                if (x0_16 - 0x1019 u> 0x19
                                    || (1 << (x0_16 - 0x1019) & 0x2108421) == 0)
                                label_a37524:
                                    
                                    if ((AllowedImbalanced(zx.q(x0_16)) & 1) != 0)
                                        *(arg1 + (zx.q(x20) << 2)) = x0_16
                                        x20 += 1
                                    
                                    goto label_a371ec
                                
                            label_a371ec:
                                int32_t x0_18 = BoardPileWhat(x21, 0x1b)
                                
                                if (x0_18 s> 0x1018)
                                    if (x0_18 - 0x1019 u> 0x19
                                        || (1 << (x0_18 - 0x1019) & 0x2108421) == 0)
                                    label_a37554:
                                        
                                        if ((AllowedImbalanced(zx.q(x0_18)) & 1) != 0)
                                            *(arg1 + (zx.q(x20) << 2)) = x0_18
                                            x20 += 1
                                        
                                        goto label_a37230
                                    
                                label_a37230:
                                    int32_t x0_20 = BoardPileWhat(x21, 0x1c)
                                    
                                    if (x0_20 s> 0x1018)
                                        if (x0_20 - 0x1019 u> 0x19
                                            || (1 << (x0_20 - 0x1019) & 0x2108421) == 0)
                                        label_a37584:
                                            
                                            if ((AllowedImbalanced(zx.q(x0_20)) & 1) != 0)
                                                *(arg1 + (zx.q(x20) << 2)) = x0_20
                                                x20 += 1
                                            
                                            goto label_a37274
                                        
                                    label_a37274:
                                        int32_t x0_22 = BoardPileWhat(x21, 0x1d)
                                        
                                        if (x0_22 s> 0x1018)
                                            if (x0_22 - 0x1019 u> 0x19
                                                || (1 << (x0_22 - 0x1019) & 0x2108421) == 0)
                                            label_a375b4:
                                                
                                                if ((AllowedImbalanced(zx.q(x0_22)) & 1) != 0)
                                                    *(arg1 + (zx.q(x20) << 2)) = x0_22
                                                    x20 += 1
                                                
                                                goto label_a372b8
                                            
                                        label_a372b8:
                                            int32_t x0_24 = BoardPileWhat(x21, 0x1e)
                                            
                                            if (x0_24 s> 0x1018)
                                                if (x0_24 - 0x1019 u> 0x19
                                                    || (1 << (x0_24 - 0x1019) & 0x2108421) == 0)
                                                label_a375e4:
                                                    
                                                    if ((AllowedImbalanced(zx.q(x0_24)) & 1) != 0)
                                                        *(arg1 + (zx.q(x20) << 2)) = x0_24
                                                        x20 += 1
                                                    
                                                    goto label_a372fc
                                                
                                            label_a372fc:
                                                int32_t x0_26 = BoardPileWhat(x21, 0x1f)
                                                
                                                if (x0_26 s> 0x1018)
                                                    if (x0_26 - 0x1019 u> 0x19
                                                        || (1 << (x0_26 - 0x1019) & 0x2108421)
                                                        == 0)
                                                    label_a37614:
                                                        
                                                        if ((AllowedImbalanced(zx.q(x0_26)) & 1)
                                                                != 0)
                                                            *(arg1 + (zx.q(x20) << 2)) = x0_26
                                                            x20 += 1
                                                        
                                                        goto label_a37340
                                                    
                                                label_a37340:
                                                    int32_t x0_28 = BoardPileWhat(x21, 0x20)
                                                    
                                                    if (x0_28 s> 0x1018)
                                                        if (x0_28 - 0x1019 u> 0x19
                                                            || (1 << (x0_28 - 0x1019) & 0x2108421)
                                                            == 0)
                                                        label_a37644:
                                                            
                                                            if ((AllowedImbalanced(zx.q(x0_28)) & 1)
                                                                    != 0)
                                                                *(arg1 + (zx.q(x20) << 2)) = x0_28
                                                                x20 += 1
                                                            
                                                            goto label_a37384
                                                        
                                                    label_a37384:
                                                        int32_t x0_30 = BoardPileWhat(x21, 0x21)
                                                        
                                                        if (x0_30 s<= 0x1018)
                                                            if (x0_30 != 0 && x0_30 != 0x91c
                                                                    && x0_30 != 0xc0a)
                                                                goto label_a3767c
                                                        else if (x0_30 - 0x1019 u> 0x19
                                                            || (1 << (x0_30 - 0x1019) & 0x2108421)
                                                            == 0)
                                                        label_a3767c:
                                                            
                                                            if ((AllowedImbalanced(zx.q(x0_30)) & 1)
                                                                    != 0)
                                                                *(arg1 + (zx.q(x20) << 2)) = x0_30
                                                                x20 += 1
                                                    else if (x0_28 != 0)
                                                        if (x0_28 == 0x91c || x0_28 == 0xc0a)
                                                            goto label_a37384
                                                        
                                                        goto label_a37644
                                                else if (x0_26 != 0)
                                                    if (x0_26 == 0x91c || x0_26 == 0xc0a)
                                                        goto label_a37340
                                                    
                                                    goto label_a37614
                                            else if (x0_24 != 0)
                                                if (x0_24 == 0x91c || x0_24 == 0xc0a)
                                                    goto label_a372fc
                                                
                                                goto label_a375e4
                                        else if (x0_22 != 0)
                                            if (x0_22 == 0x91c || x0_22 == 0xc0a)
                                                goto label_a372b8
                                            
                                            goto label_a375b4
                                    else if (x0_20 != 0)
                                        if (x0_20 == 0x91c || x0_20 == 0xc0a)
                                            goto label_a37274
                                        
                                        goto label_a37584
                                else if (x0_18 != 0)
                                    if (x0_18 == 0x91c || x0_18 == 0xc0a)
                                        goto label_a37230
                                    
                                    goto label_a37554
                            else if (x0_16 != 0)
                                if (x0_16 == 0x91c || x0_16 == 0xc0a)
                                    goto label_a371ec
                                
                                goto label_a37524
                        else if (x0_14 != 0)
                            if (x0_14 == 0x91c || x0_14 == 0xc0a)
                                goto label_a371a8
                            
                            goto label_a374f4
                    else if (x0_12 != 0)
                        if (x0_12 == 0x91c || x0_12 == 0xc0a)
                            goto label_a37164
                        
                        goto label_a374c4
                else if (x0_10 != 0)
                    if (x0_10 == 0x91c || x0_10 == 0xc0a)
                        goto label_a37120
                    
                    goto label_a37494
            else if (x0_8 != 0)
                if (x0_8 == 0x91c || x0_8 == 0xc0a)
                    goto label_a370dc
                
                goto label_a37464
        else if (x0_6 != 0)
            if (x0_6 == 0x91c || x0_6 == 0xc0a)
                goto label_a37098
            
            goto label_a37434
else if (x20 != 0)
    if (x20 == 0x91c || x20 == 0xc0a)
        goto label_a3700c
    
    goto label_a373dc

return zx.q(x20)
