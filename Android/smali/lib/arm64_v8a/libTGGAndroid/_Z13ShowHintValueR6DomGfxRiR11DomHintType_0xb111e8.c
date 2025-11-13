// 函数: _Z13ShowHintValueR6DomGfxRiR11DomHintType
// 地址: 0xb111e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x2c)
int32_t x8_16
int32_t fp_1

if (x8 == 0)
    int32_t x8_5 = *(arg1 + 0xa0)
    int32_t x9_2 = *(gDomClient + 0x38)
    int32_t x9_3
    
    x9_3 = x9_2 == 0xffffffff ? 0 : x9_2
    
    if (x8_5 != 0xffffffff && x8_5 != x9_3)
        return 0
    
    uint64_t x0_1 = zx.q(*(arg1 + 0xa4))
    fp_1 = *(arg1 + 0x98)
    int32_t x8_6
    
    if (x0_1.d == 2)
        x8_6 = 2
    label_b113dc:
        x8_16 = x8_6 - 7 u> 0x40 ? 1 : 0
        goto label_b113fc
    
    int32_t x0_2 = IsBoardPile(x0_1)
    x8_6 = *(arg1 + 0xa4)
    
    if ((x0_2 & 1) == 0)
        goto label_b113dc
    
    if (x8_6 == 6)
        DomGfx& x8_9 = arg1
        uint64_t x0_4
        int32_t i
        
        for (i = *(x8_9 + 0x2c); i == 3; i = *(x8_9 + 0x2c))
            x0_4 = zx.q(*(x8_9 + 0x30))
            
            if (x0_4.d == 0x70d)
                goto label_b113b4
            
            if (x0_4.d == 0x718)
                goto label_b113b4
            
            int32_t x8_10 = *(x8_9 + 0x70)
            
            if (x8_10 == 0)
                goto label_b113b4
            
            x8_9 = *(gDomClient + 0x205e0) + zx.q(x8_10.w) * 0x21d8
        
        if (i != 5)
            if (i == 1)
                x0_4 = zx.q(*(x8_9 + 0x170))
                goto label_b113b4
            
            if (i != 0)
                goto label_b1181c
            
            x0_4 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_9 + 0x98)))
            goto label_b113b4
        
        x0_4 = zx.q(*(x8_9 + 0x204))
    label_b113b4:
        
        if (*(BoardAreaPile(x0_4) + 0x70) == *(arg1 + 0x21d0))
            goto label_b113c4
    else if (*(*(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x9c)) * 0x21d8 + 0x70) == *(arg1 + 0x21d0))
    label_b113c4:
        x8_6 = *(arg1 + 0xa4)
        
        if (x8_6 - 0x22 u>= 5)
            goto label_b113dc
else if (x8 == 3)
    int32_t x8_1 = *(arg1 + 0x70)
    
    if (x8_1 == 0)
    label_b112cc:
        fp_1 = 0
        
        if (*(arg1 + 0x5c) - 7 u< 0x41)
        label_b112e0:
            x8_16 = 1
        label_b113fc:
            DomGfx& x8_17 = arg1
            int32_t x11_4 = *(x8_17 + 0x2c)
            int32_t x23_1
            
            if (x11_4 == 3)
                while (true)
                    x23_1 = *(x8_17 + 0x30)
                    
                    if (x23_1 == 0x70d)
                        goto label_b1148c
                    
                    if (x23_1 == 0x718)
                        goto label_b1148c
                    
                    int32_t x8_18 = *(x8_17 + 0x70)
                    
                    if (x8_18 == 0)
                        break
                    
                    x8_17 = *(gDomClient + 0x205e0) + zx.q(x8_18.w) * 0x21d8
                    x11_4 = *(x8_17 + 0x2c)
                    
                    if (x11_4 != 3)
                        goto label_b1143c
                
                goto label_b11474
            
        label_b1143c:
            
            if (x11_4 == 5)
                x23_1 = *(x8_17 + 0x204)
            label_b11474:
                
                if (x23_1 != 0)
                label_b1148c:
                    uint64_t x1_2
                    
                    if (*(GetClient() + 0x5068) == 0)
                        x1_2 = 0x18
                    else
                        x1_2 = zx.q(*(ActiveGame() + 0x30))
                    
                    void* x0_12 = DomDefGet(zx.q(x23_1), x1_2)
                    int64_t x25_1 = 0
                    int32_t* x24_1 = x0_12 + 0x730
                    int32_t var_74_1 = fp_1
                    
                    while (x24_1[-4] != 0)
                        bool var_6c
                        
                        if ((CalcCardFaceup(arg1, &var_6c) & 1) == 0)
                            break
                        
                        int32_t x8_22 = *(gDomClient + 0x38)
                        int32_t x27_1
                        
                        x27_1 = x8_22 == 0xffffffff ? 0 : x8_22
                        
                        *arg3 = x24_1[-4]
                        DomPushHintContext(gDomClient + 0x20728, zx.q(x27_1), zx.q(fp_1))
                        int64_t x8_27
                        int32_t x22_1
                        
                        if (*arg3 != 1)
                            x22_1 = 1
                            x8_27 = *(x24_1 - 8)
                        else
                            if ((HasOngoing(gDomClient + 0x20728, zx.q(x25_1.d), 0x2d, x23_1, 0)
                                    & 1) != 0)
                                x22_1 = 2
                            else
                                x22_1 = 1
                            
                            if (*arg3 != 1 || *(x24_1 - 8) != 0)
                                x8_27 = *(x24_1 - 8)
                            else
                                x8_27 = *(x0_12 + 0xd8)
                        
                        *arg2 = x8_27() * x22_1
                        DomPopContext()
                        int32_t x22_2 = *arg3
                        
                        if (((x8_16 == 0 ? 1 : 0) & (x22_2 == 1 ? 1 : 0) & 1) == 0 && *arg2 != 0)
                            int32_t x8_33 = *x24_1
                            
                            if ((x8_33 & 0x16) != 0)
                                break
                            
                            int32_t x9_13
                            int32_t fp_2
                            
                            if ((x8_33 & 8) != 0)
                                fp_2 = 0
                                x9_13 = 2
                                x22_2 = 6
                            else if (x22_2 == 1)
                                fp_2 = 0
                                x9_13 = x22_2
                            else if (x22_2 == 6)
                                int64_t temp0_1 = *(x0_12 + 0xc8) & 0x4000000000
                                
                                x22_2 = temp0_1 == 0 ? 4 : 1
                                
                                fp_2 = temp0_1 == 0 ? 1 : 0
                                
                                x9_13 = temp0_1 != 0 ? 2 : 1
                            else if ((*(x0_12 + 0xc8) & 0x4000000400) == 0)
                                x22_2 = 4
                                
                                if (*(arg1 + 0x2c) == 0)
                                    int32_t x0_20 =
                                        CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 4)
                                    int32_t x0_22 =
                                        CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 2)
                                    x8_33 = *x24_1
                                    int32_t x9_18
                                    
                                    if ((x0_20 & x0_22 & 1) != 0)
                                        x9_18 = 0xc
                                    else
                                        x9_18 = 4
                                    
                                    int32_t x10_2
                                    
                                    if ((x0_22 & 1) != 0)
                                        x10_2 = 8
                                    else
                                        x10_2 = 2
                                    
                                    if ((x0_20 & 1) != 0)
                                        x9_13 = x9_18
                                    else
                                        x9_13 = x10_2
                                else
                                    x9_13 = 2
                                
                                fp_2 = 1
                            else
                                fp_2 = 0
                                x9_13 = 2
                                x22_2 = 1
                            
                            int32_t x28_3 = (x8_33 u>> 0xf & 1) | x22_2
                            int32_t x8_34
                            
                            if ((x8_33 & 0x1000) == 0)
                                x8_34 = x9_13
                            else
                                x8_34 = x28_3 | 2
                            
                            int32_t x8_35
                            
                            if ((x8_34 & 1) != 0)
                                x8_35 = 1
                            else if (*(gDomClient + 0x220fc) != x27_1)
                                x8_35 = 0
                            else if ((x8_34 & 2) != 0)
                                x8_35 = 1
                            else
                                int32_t x9_20 = *(gDomClient + 0x2211c)
                                
                                if ((x8_34 & 8) == 0 || x9_20 != 2)
                                    x8_35 = (x9_20 == 1 ? 1 : 0) & x8_34 u>> 2
                                    int32_t var_64
                                    
                                    if ((x8_35 & 1) == 0 && ((fp_2 ^ 1) & 1) == 0)
                                        x8_35 = IsCardInActiveSet(arg1, &var_64, false)
                                            & (var_64 - 1 u< 3 ? 1 : 0)
                                else
                                    x8_35 = 1
                            
                            int32_t x9_21 = *(arg1 + 0x2c)
                            int32_t x10_6
                            
                            if (x9_21 == 0)
                                x10_6 = *(arg1 + 0xa4)
                            else
                                x10_6 = 0
                            
                            if ((x28_3 & 1) != 0 || ((x22_2 & 2) != 0 && x10_6 == 0x3e9))
                                if ((x8_35 & 1) != 0)
                                    return 1
                            else if ((x8_35 & (x10_6 == 0x3ea ? 1 : 0) & x22_2 u>> 2 & 1) != 0)
                                return 1
                            
                            fp_1 = var_74_1
                            int32_t var_68
                            
                            if ((((fp_2 ^ 1) | (x9_21 != 0 ? 1 : 0)) & 1) == 0
                                    && (IsCardInActiveSet(arg1, &var_68, false) & 1) != 0
                                    && var_68 - 1 u< 3)
                                return 1
                        
                        x25_1 += 1
                        x24_1 = &x24_1[6]
                        
                        if (x25_1 == 4)
                            break
            else if (x11_4 == 1)
                x23_1 = *(x8_17 + 0x170)
                
                if (x23_1 != 0)
                    goto label_b1148c
            else
                if (x11_4 != 0)
                label_b1181c:
                    pthread_kill(pthread_self(), 6)
                    DomGfx* x0_28
                    DomWhere* x1_10
                    DomWhere* x2_1
                    DomWhere* x3_2
                    x0_28, x1_10, x2_1, x3_2 = XNoReturn()
                    return GetCardWhere(x0_28, x1_10, x2_1, x3_2) __tailcall
                
                x23_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_17 + 0x98)))
                
                if (x23_1 != 0)
                    goto label_b1148c
    else
        uint64_t x9_1 = zx.q(x8_1.w)
        
        if (x9_1.d u>= *(gDomClient + 0x205e8))
            goto label_b112cc
        
        int64_t x10_1 = *(gDomClient + 0x205e0)
        
        if (*(x10_1 + x9_1 * 0x21d8 + 0x21d0) != x8_1)
            goto label_b112cc
        
        fp_1 = *(x10_1 + x9_1 * 0x21d8 + 0x98)
        
        if (*(arg1 + 0x5c) - 7 u< 0x41)
            goto label_b112e0
return 0
