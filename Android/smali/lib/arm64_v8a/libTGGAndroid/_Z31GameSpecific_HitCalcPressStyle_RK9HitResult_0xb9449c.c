// 函数: _Z31GameSpecific_HitCalcPressStyle_RK9HitResult
// 地址: 0xb9449c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19

if (zx.d(*gKV) != 0)
    x19 = 0x20
else if (*(gDomClient + 0x1d00c) != 0)
label_b94518:
    
    if (*(arg1 + 8) != 1)
        x19 = 0x40
    else
        int32_t x8_3 = *(arg1 + 0xc)
        
        if (x8_3 == 0)
            x19 = 0x40
        else
            uint64_t x9_1 = zx.q(x8_3.w)
            
            if (x9_1.d u>= *(gDomClient + 0x205e8))
                x19 = 0x40
            else
                int64_t x10_2 = *(gDomClient + 0x205e0)
                
                if (*(x10_2 + x9_1 * 0x21d8 + 0x21d0) != x8_3)
                    x19 = 0x40
                else
                    int32_t x11_4 = *(x10_2 + x9_1 * 0x21d8 + 0x2c)
                    
                    if (x11_4 == 2)
                        x19 = 0x14
                    else if (x11_4 != 1 || *(x10_2 + x9_1 * 0x21d8 + 0x174) != 1)
                        x19 = 0x40
                    else if (x8_3 == *(gDomClient + 0x1d01c))
                        x19 = 0
                    else
                        x19 = 0x16
else
    int32_t var_34
    
    if ((CardsetIsZoomed(*(gDomClient + 0x82e28), &var_34) & 1) != 0)
        goto label_b94518
    
    if ((CardsetIsZoomed(*(gDomClient + 0x82e30), &var_34) & 1) != 0)
        goto label_b94518
    
    int32_t x8_4 = *(arg1 + 8)
    
    if (x8_4 == 1)
        int32_t x8_5 = *(arg1 + 0xc)
        
        if (x8_5 == 0)
            x19 = 0
        else
            uint64_t x22_1 = zx.q(x8_5.w)
            
            if (x22_1.d u>= *(gDomClient + 0x205e8))
                x19 = 0
            else
                int64_t x23_1 = *(gDomClient + 0x205e0)
                DomGfx* x20_1 = x23_1 + x22_1 * 0x21d8
                
                if (*(x20_1 + 0x21d0) != x8_5)
                    x19 = 0
                else
                    uint64_t x8_7 = zx.q(*(x23_1 + x22_1 * 0x21d8 + 0x2c))
                    
                    if (x8_7.d u> 6)
                        x19 = 0
                    else
                        x19 = 4
                        
                        switch (x8_7)
                            case 0
                                int32_t x0_6 = IsCardInActiveSet(x20_1, nullptr, false)
                                int32_t x0_8
                                
                                if ((x0_6 & 1) != 0)
                                    x0_8 = TutorialCardIsClickable(x20_1)
                                
                                if ((x0_6 & 1) != 0 && (x0_8 & 1) != 0)
                                label_b946e0:
                                    
                                    if ((CanDragCard(x20_1) & 1) != 0)
                                        x19 = 0xe
                                    else
                                        x19 = 6
                                else
                                    int32_t x8_8 = *(gDomClient + 0x20758)
                                    x19 = 4
                                    
                                    if (((x8_8 != 0x34 ? 1 : 0) & (x8_8 != 0x101 ? 1 : 0) & 1) == 0
                                            && *(gDomClient + 0x20770) s>= 1)
                                        if (**(gDomClient + 0x20760)
                                                == *(x23_1 + x22_1 * 0x21d8 + 0x98))
                                            goto label_b946e0
                                        
                                        x19 = 4
                                
                                int32_t x9_10 = *(x23_1 + x22_1 * 0x21d8 + 0x9c)
                                
                                if (x9_10 == 0)
                                    LocalWho()
                                else
                                    void* i_1 = *(gDomClient + 0x205e0)
                                    uint64_t x9_11 = zx.q(x9_10.w)
                                    uint64_t x12_1 = zx.q(*(gDomClient + 0x205e8))
                                    void* x11_6 = i_1 + x9_11 * 0x21d8
                                    uint64_t x0_15 = zx.q(*(x11_6 + 0x5c))
                                    int64_t x12_2
                                    void* i
                                    
                                    if (x12_1.d != 0)
                                        x12_2 = i_1 + x12_1 * 0x21d8
                                        i = i_1
                                        
                                        while (zx.d(*(i + 0x21d2)) == 0)
                                            i += 0x21d8
                                            
                                            if (i u>= x12_2)
                                                goto label_b94838
                                    
                                    int32_t x4_1
                                    
                                    if (x12_1.d == 0 || i == 0xffffffff)
                                    label_b94838:
                                        x4_1 = 0
                                    else
                                        x4_1 = 0
                                        
                                        do
                                            if (*(i + 0x2c) == 0 && *(i + 0xa0) == *(x11_6 + 0x58)
                                                    && *(i + 0xa4) == x0_15.d
                                                    && *(i + 0xc8) == *(x11_6 + 0x60))
                                                x4_1 += 1
                                            
                                            if (i == 0)
                                                i = i_1
                                            else
                                                i += 0x21d8
                                            
                                            if (i u>= x12_2)
                                                break
                                            
                                            while (zx.d(*(i + 0x21d2)) == 0)
                                                i += 0x21d8
                                                
                                                if (i u>= x12_2)
                                                    goto label_b94860
                                        while (i != 0xffffffff)
                                    
                                label_b94860:
                                    int32_t x0_16 = CalcPileState(x0_15, 
                                        zx.q(*(i_1 + x9_11 * 0x21d8 + 0x30)), 
                                        zx.q(*(gDomClient + 0x2074c)), 
                                        zx.q(*(gDomClient + 0x20758)), x4_1)
                                    int32_t x8_17 = *(x23_1 + x22_1 * 0x21d8 + 0xa4)
                                    
                                    if ((x0_16 & 0xfffffffe) != 2)
                                        if (x8_17 s> 0x3e9)
                                            if (x8_17 == 0x3ea)
                                                goto label_b948b4
                                            
                                            if (x8_17 == 0x3ec)
                                                x19 |= 0x10
                                                LocalWho()
                                            else
                                                LocalWho()
                                        else if (x8_17 == 2 || x8_17 == 0x3e9)
                                            x19 |= 0x10
                                            LocalWho()
                                        else
                                            LocalWho()
                                    else if (x8_17 != 0x3ea)
                                        x19 |= 0x10
                                        LocalWho()
                                    else
                                    label_b948b4:
                                        int32_t x0_17 = GameMainUI()
                                        int32_t x0_19
                                        
                                        if (data_182ac48 == "tbl_player_hand"
                                                && data_182a980 == x0_17
                                                && zx.d(data_182a6e8) != 0)
                                            x0_19 = UI2Exists(zx.q(data_182a988))
                                        
                                        int32_t x20_3
                                        
                                        if (data_182ac48 != "tbl_player_hand"
                                                || data_182a980 != x0_17 || zx.d(data_182a6e8) == 0
                                                || (x0_19 & 1) == 0)
                                            int32_t x0_21 =
                                                UI2GetHandle(zx.q(x0_17), "tbl_player_hand")
                                            x20_3 = x0_21
                                            data_182a988 = x0_21
                                            
                                            if (x0_21 != 0)
                                                data_182ac48 = "tbl_player_hand"
                                                data_182a980 = x0_17
                                                data_182a6e8 = 1
                                        else
                                            x20_3 = data_182a988
                                        
                                        float var_50
                                        float var_4c
                                        float var_48
                                        float var_44
                                        
                                        if ((UI2GetScrollExtents(zx.q(x20_3), &var_50) & 1) == 0 ||
                                                (not(fabs(var_50) > float.s(0x3727c5ac))
                                                && not(fabs(var_48) > float.s(0x3727c5ac))
                                                && not(fabs(var_4c) > float.s(0x3727c5ac))
                                                && not(fabs(var_44) > float.s(0x3727c5ac))))
                                            UI2ApplyScrollDelta(zx.q(x20_3), V20)
                                            LocalWho()
                                        else
                                            x19 |= 0x10
                                            LocalWho()
                            case 1, 2
                                x19 = 0
                            case 3
                                int32_t x0_11 = IsRearranging()
                                int32_t x0_12
                                
                                if ((x0_11 & 1) == 0)
                                    x0_12 = GetLocalControlScheme()
                                
                                if ((x0_11 & 1) != 0 || x0_12 != 2)
                                    if ((IsPileInActiveSet(x20_1, nullptr) & 1) != 0)
                                        x19 = 0xc
                                    else
                                        x19 = 4
                                else
                                    x19 = 4
                            case 5
                                x19 = 0x24
    else if (x8_4 != 3)
        x19 = 0
    else
        x19 = 0x10

return zx.q(x19)
