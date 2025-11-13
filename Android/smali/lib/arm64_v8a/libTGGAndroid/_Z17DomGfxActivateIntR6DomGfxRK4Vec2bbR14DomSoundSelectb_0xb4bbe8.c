// 函数: _Z17DomGfxActivateIntR6DomGfxRK4Vec2bbR14DomSoundSelectb
// 地址: 0xb4bbe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg6.d)
DomGfx& x19 = arg1
*arg5 = 0
int32_t x20_1

if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
    XTraceAndLog("failed to submit gfx click, waiting")
    x20_1 = 0
else
    DomGfx& x9_1 = x19
    int32_t x11_1 = *(x9_1 + 0x2c)
    int32_t x22_1
    
    if (x11_1 == 3)
        while (true)
            x22_1 = *(x9_1 + 0x30)
            
            if (x22_1 == 0x70d)
                break
            
            if (x22_1 == 0x718)
                break
            
            int32_t x9_2 = *(x9_1 + 0x70)
            
            if (x9_2 == 0)
                break
            
            x9_1 = *(gDomClient + 0x205e0) + zx.q(x9_2.w) * 0x21d8
            x11_1 = *(x9_1 + 0x2c)
            
            if (x11_1 != 3)
                goto label_b4bc88
        
        goto label_b4bcac
    
label_b4bc88:
    DomGfx& x8_95
    int32_t x21_8
    int32_t x21_10
    
    if (x11_1 == 1)
        x22_1 = *(x9_1 + 0x170)
        
        if (x22_1 != 0x718 && x22_1 != 0x70d)
        label_b4bd0c:
            
            if (*(gDomClient + 0x207a0) != LocalWho())
                x20_1 = 0
            else
                int32_t x9_4 = *(gDomClient + 0x2074c)
                
                if (x9_4 == 0)
                    x20_1 = 0
                else
                    int32_t x8_2 = *(x19 + 0x2c)
                    int32_t x8_5
                    
                    if (x8_2 != 1)
                        if (x9_4 != 7)
                            goto label_b4be10
                        
                        uint64_t x1_1
                        
                        if (*(GetClient() + 0x5068) == 0)
                            x1_1 = 0x18
                        else
                            x1_1 = zx.q(*(ActiveGame() + 0x30))
                        
                        if ((zx.d(*(DomDefGet(zx.q(x22_1), x1_1) + 0xce)) & 0x10) != 0)
                            x8_2 = *(x19 + 0x2c)
                        label_b4be10:
                            DomYield var_d80
                            int64_t var_d0c
                            
                            if (x8_2 == 3)
                            label_b4bf44:
                                
                                if (x8_2 != 3 || *(x19 + 0x30) != 0)
                                    if ((zx.d(*(CardDef(gDomClient + 0x20728, x19) + 0xcb)) & 0x10)
                                            == 0 || *(gDomClient + 0x20758) == 0xbe)
                                        goto label_b4bfc0
                                    
                                    if ((IsCardInActiveSet(x19, nullptr, false) & 1) == 0)
                                        goto label_b4bfc0
                                    
                                    if (*(x19 + 0x2c) == 0)
                                        ToggleWay(x19)
                                        x20_1 = 2
                                    else
                                        ToggleWay(*(gDomClient + 0x205e0)
                                            + zx.q(*(x19 + 0x70)) * 0x21d8)
                                        x20_1 = 0
                                else
                                label_b4bfc0:
                                    int32_t x8_13 = *(x19 + 0x2c)
                                    int32_t var_d7c_4
                                    int32_t x8_38
                                    int32_t x8_41
                                    
                                    if (x8_13 == 0)
                                        DomGfx* x22_2 = x19
                                        
                                        if (GetLocalControlScheme() == 1)
                                            int16_t x0_23 = TopmostInStack(x19 + 0x138)
                                            x22_2 = *(gDomClient + 0x205e0)
                                                + mulu.dp.d(zx.d(x0_23), 0x21d8)
                                        
                                        if ((IsCardInActiveSet(x22_2, nullptr, true) & 1) == 0)
                                            x20_1 = 0
                                        else if ((TutorialCardIsClickable(x22_2) & 1) == 0)
                                            x20_1 = 0
                                        else
                                            int32_t x8_17 = *(gDomClient + 0x20758)
                                            int32_t x1_5
                                            
                                            if (x8_17 - 0x4d u<= 1)
                                                x1_5 = x8_17 != 0x4e ? 2 : 1
                                                
                                                goto label_b4c08c
                                            
                                            if (x8_17 != 0xfd && x8_17 != 2)
                                                goto label_b4ca28
                                            
                                            int32_t x0_37 = LocalWho()
                                            void* x0_40 =
                                                GameGetPlayer(ActiveGame() + 8, zx.q(x0_37))
                                            uint64_t x8_32 = zx.q(*(x0_40 + 0x228))
                                            int32_t x26_1
                                            
                                            if (x8_32.d s< 1)
                                            label_b4c240:
                                                x26_1 = 1
                                            else
                                                void* x9_15 = x0_40 + 0x2c
                                                
                                                while (*(x9_15 - 4) != 0x16)
                                                    uint64_t temp1_1 = x8_32
                                                    x8_32 -= 1
                                                    x9_15 += 8
                                                    
                                                    if (temp1_1 == 1)
                                                        goto label_b4c240
                                                
                                                x26_1 = *x9_15
                                            
                                            int32_t x0_53 = LocalWho()
                                            void* x0_56
                                            int32_t x11_12
                                            x0_56, x11_12 =
                                                GameGetPlayer(ActiveGame() + 8, zx.q(x0_53))
                                            uint64_t x8_46 = zx.q(*(x0_56 + 0x228))
                                            int32_t x8_47
                                            
                                            if (x8_46.d s< 1)
                                            label_b4c640:
                                                x8_47 = 1
                                            else
                                                void* x9_23 = x0_56 + 0x2c
                                                
                                                while (*(x9_23 - 4) != 0x16)
                                                    uint64_t temp3_1 = x8_46
                                                    x8_46 -= 1
                                                    x9_23 += 8
                                                    
                                                    if (temp3_1 == 1)
                                                        goto label_b4c640
                                                
                                                x8_47 = *x9_23
                                            
                                            int32_t i = *(x19 + 0x98)
                                            int32_t x10_16
                                            
                                            if (zx.d(*(gDomClient + 0x22134)) == 0)
                                                uint64_t x10_17 = zx.q(*(gDomClient + 0x20770))
                                                int32_t x10_18
                                                
                                                if (x10_17.d s< 1)
                                                label_b4c8a0:
                                                    x10_18 = 0
                                                else
                                                    int32_t* x13_8 = *(gDomClient + 0x20760)
                                                    x11_12 = *x13_8
                                                    
                                                    if (i != zx.d(x11_12.w))
                                                        int64_t x12_7 = 0
                                                        
                                                        do
                                                            if (x10_17 - 1 == x12_7)
                                                                goto label_b4c8a0
                                                            
                                                            x11_12 = x13_8[1 + x12_7]
                                                            x12_7 += 1
                                                        while (i != zx.d(x11_12.w))
                                                        
                                                        x10_18 = x12_7 u< x10_17 ? 1 : 0
                                                    else
                                                        x10_18 = 1
                                                    
                                                    x11_12 = (x11_12 & 0x50000) != 0 ? 1 : 0
                                                
                                                x10_16 = x10_18 & x11_12
                                            else
                                                x10_16 = 0
                                            
                                            uint64_t x11_15 = zx.q(*(gDomClient + 0x207bc))
                                            int32_t x9_29
                                            
                                            if (x11_15.d s< 1)
                                                x9_29 = 0
                                            else if (*(gDomClient + 0x207c0) != i)
                                                int64_t x15_3 = 0
                                                int64_t x14_7
                                                
                                                do
                                                    x14_7 = x15_3
                                                    
                                                    if (x11_15 - 1 == x15_3)
                                                        break
                                                    
                                                    x15_3 = x14_7 + 1
                                                while (*(gDomClient + (x14_7 << 2) + 0x207c4) != i)
                                                
                                                x9_29 = x14_7 + 1 u< x11_15 ? 1 : 0
                                            else
                                                x9_29 = 1
                                            
                                            if (((x26_1 != 4 ? 1 : 0) & (x8_47 != 7 ? 1 : 0) & 1)
                                                    != 0 || (x10_16 | (x9_29 ^ 1)) == 0)
                                                x8_17 = *(gDomClient + 0x20758)
                                            label_b4ca28:
                                                
                                                if (x8_17 == 0xd2)
                                                    x20_1 = 1
                                                    int32_t x8_64
                                                    
                                                    if (*(x19 + 0xa4) == 0x462)
                                                        x8_64 = 0x86
                                                    else
                                                        x8_64 = 0x85
                                                    
                                                    *(gDomClient + 0x207c0) = x8_64
                                                    *(gDomClient + 0x207bc) = 1
                                                    SubmitAction(LocalWho(), gDomClient + 0x20748)
                                                    YldCopy(&var_d80, gDomClient + 0x20748)
                                                    x8_41 = *(x19 + 0x98)
                                                    var_d7c_4 = 1
                                                    goto label_b4cb10
                                                
                                                if (x8_17 != 0xd0)
                                                    if ((x8_17 & 0xfffffffe) == 0x2c)
                                                        int64_t v0_1
                                                        
                                                        if (*(x19 + 0xa4) != 2)
                                                            v0_1 = 0x1a00000001
                                                        else
                                                            v0_1 = 0x1b00000001
                                                        
                                                        *(gDomClient + 0x207bc) = v0_1
                                                        SubmitAction(LocalWho(), 
                                                            gDomClient + 0x20748)
                                                        YldCopy(&var_d80, gDomClient + 0x20748)
                                                        goto label_b4cc8c
                                                    
                                                    if (x8_17 == 0x33)
                                                        uint64_t x0_90 = zx.q(*(x19 + 0xa0))
                                                        
                                                        if (*(x19 + 0xa4) != 0x3eb)
                                                            uint64_t x9_42 =
                                                                zx.q(*(gDomClient + 0x205e8))
                                                            DomGfx* i_11
                                                            int64_t x9_43
                                                            DomGfx* i_1
                                                            
                                                            if (x9_42.d != 0)
                                                                i_11 = *(gDomClient + 0x205e0)
                                                                x9_43 = i_11 + x9_42 * 0x21d8
                                                                i_1 = i_11
                                                                
                                                                while (zx.d(*(i_1 + 0x21d2)) == 0)
                                                                    i_1 += 0x21d8
                                                                    
                                                                    if (i_1 u>= x9_43)
                                                                        goto label_b4d18c
                                                            
                                                            DomGfx* i_13
                                                            
                                                            if (x9_42.d == 0 || i_1 == 0xffffffff)
                                                            label_b4d18c:
                                                                i_13 = nullptr
                                                            else
                                                                do
                                                                    if (*(i_1 + 0x2c) == 3
                                                                            && *(i_1 + 0x58) == x0_90.d
                                                                            && *(i_1 + 0x5c) == 0x3eb
                                                                            && *(i_1 + 0x60) == 0)
                                                                        i_13 = i_1
                                                                        break
                                                                    
                                                                    if (i_1 == 0)
                                                                        i_1 = i_11
                                                                    else
                                                                        i_1 += 0x21d8
                                                                    
                                                                    if (i_1 u>= x9_43)
                                                                        goto label_b4d18c
                                                                    
                                                                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                                                                        i_1 += 0x21d8
                                                                        
                                                                        if (i_1 u>= x9_43)
                                                                            goto label_b4d18c
                                                                    
                                                                    i_13 = nullptr
                                                                while (i_1 != 0xffffffff)
                                                            
                                                            DomMoveCard(x0_90, zx.q(*(x19 + 0x98)), 
                                                                i_13, &data_7ef484, 0, false, 0xb, 
                                                                false)
                                                            *(gDomClient + 0x1f8e0) =
                                                                *(x19 + 0x21d0)
                                                            DomExpandPile(i_13, false)
                                                            x20_1 = 1
                                                        else
                                                            uint64_t x9_38 =
                                                                zx.q(*(gDomClient + 0x205e8))
                                                            DomGfx* i_10
                                                            int64_t x9_39
                                                            DomGfx* i_2
                                                            
                                                            if (x9_38.d != 0)
                                                                i_10 = *(gDomClient + 0x205e0)
                                                                x9_39 = i_10 + x9_38 * 0x21d8
                                                                i_2 = i_10
                                                                
                                                                while (zx.d(*(i_2 + 0x21d2)) == 0)
                                                                    i_2 += 0x21d8
                                                                    
                                                                    if (i_2 u>= x9_39)
                                                                        goto label_b4d0d8
                                                            
                                                            DomGfx* i_9
                                                            
                                                            if (x9_38.d == 0 || i_2 == 0xffffffff)
                                                            label_b4d0d8:
                                                                i_9 = nullptr
                                                            else
                                                                do
                                                                    if (*(i_2 + 0x2c) == 3
                                                                            && *(i_2 + 0x58) == x0_90.d
                                                                            && *(i_2 + 0x5c) == 0x3ea
                                                                            && *(i_2 + 0x60) == 0)
                                                                        i_9 = i_2
                                                                        break
                                                                    
                                                                    if (i_2 == 0)
                                                                        i_2 = i_10
                                                                    else
                                                                        i_2 += 0x21d8
                                                                    
                                                                    if (i_2 u>= x9_39)
                                                                        goto label_b4d0d8
                                                                    
                                                                    while (zx.d(*(i_2 + 0x21d2)) == 0)
                                                                        i_2 += 0x21d8
                                                                        
                                                                        if (i_2 u>= x9_39)
                                                                            goto label_b4d0d8
                                                                    
                                                                    i_9 = nullptr
                                                                while (i_2 != 0xffffffff)
                                                            
                                                            DomMoveCard(x0_90, zx.q(*(x19 + 0x98)), 
                                                                i_9, &data_7ef484, 0, false, 0xb, false)
                                                            *(gDomClient + 0x1f8e0) = 0
                                                            x20_1 = 1
                                                    else
                                                        if (x8_17 == 0x107)
                                                            YldCopy(&var_d80, gDomClient + 0x20748)
                                                            var_d0c = 0xbf00000001
                                                            SubmitAction(LocalWho(), &var_d80)
                                                        label_b4cc8c:
                                                            x20_1 = 1
                                                            int32_t var_d7c_5 = 1
                                                            var_d0c.d = 1
                                                            var_d0c:4.d = *(x19 + 0x98)
                                                            goto label_b4cb18
                                                        
                                                        int32_t var_54_1 = x8_17
                                                        
                                                        if (x8_17 == 0x114)
                                                            *(gDomClient + 0x207bc) = 0xc900000001
                                                            SubmitAction(LocalWho(), 
                                                                gDomClient + 0x20748)
                                                            YldCopy(&var_d80, gDomClient + 0x20748)
                                                            x8_38 = *(x19 + 0x98)
                                                            goto label_b4c468
                                                        
                                                        uint64_t x8_74 = zx.q(*(x19 + 0x9c))
                                                        void* i_14 = *(gDomClient + 0x205e0)
                                                        uint64_t x25_1 =
                                                            zx.q(*(gDomClient + 0x205e8))
                                                        void* x10_28 = i_14 + x8_74 * 0x21d8
                                                        uint64_t x0_93 = zx.q(*(x10_28 + 0x5c))
                                                        int64_t x11_19
                                                        void* i_3
                                                        
                                                        if (x25_1.d != 0)
                                                            x11_19 = i_14 + x25_1 * 0x21d8
                                                            i_3 = i_14
                                                            
                                                            while (zx.d(*(i_3 + 0x21d2)) == 0)
                                                                i_3 += 0x21d8
                                                                
                                                                if (i_3 u>= x11_19)
                                                                    goto label_b4cf00
                                                        
                                                        int32_t x4
                                                        
                                                        if (x25_1.d == 0 || i_3 == 0xffffffff)
                                                        label_b4cf00:
                                                            x4 = 0
                                                        else
                                                            x4 = 0
                                                            
                                                            do
                                                                if (*(i_3 + 0x2c) == 0
                                                                        && *(i_3 + 0xa0) == *(x10_28 + 0x58)
                                                                        && *(i_3 + 0xa4) == x0_93.d
                                                                        && *(i_3 + 0xc8) == *(x10_28 + 0x60))
                                                                    x4 += 1
                                                                
                                                                if (i_3 == 0)
                                                                    i_3 = i_14
                                                                else
                                                                    i_3 += 0x21d8
                                                                
                                                                if (i_3 u>= x11_19)
                                                                    break
                                                                
                                                                while (zx.d(*(i_3 + 0x21d2)) == 0)
                                                                    i_3 += 0x21d8
                                                                    
                                                                    if (i_3 u>= x11_19)
                                                                        goto label_b4cf24
                                                            while (i_3 != 0xffffffff)
                                                        
                                                    label_b4cf24:
                                                        int32_t x8_77 = CalcPileState(x0_93, 
                                                            zx.q(*(i_14 + x8_74 * 0x21d8 + 0x30)), 
                                                            zx.q(*(gDomClient + 0x2074c)), 
                                                            zx.q(var_54_1), x4) - 5
                                                        
                                                        if (x8_77 u< 7 && (0x63 u>> x8_77 & 1) != 0)
                                                            x20_1 = 0
                                                        else if (var_54_1 == 0x133)
                                                            x1_5 = 3
                                                        label_b4c08c:
                                                            *arg5 = ToggleSelection(x22_2, x1_5)
                                                            x20_1 = 2
                                                        else if (var_54_1 != 0x36)
                                                            int32_t x8_81 = *(gDomClient + 0x207ac)
                                                            
                                                            if (x8_81 == 1 || var_54_1 - 2 u< 2
                                                                    || var_54_1 == 0xfd)
                                                                int32_t x8_82 = *(gDomClient + 0x1f8e4)
                                                                
                                                                if (x8_82 != 0)
                                                                    uint64_t x9_47 = zx.q(x8_82.w)
                                                                    
                                                                    if (x9_47.d u< x25_1.d
                                                                            && *(i_14 + x9_47 * 0x21d8 + 0x21d0)
                                                                            == x8_82
                                                                            && *(i_14 + x9_47 * 0x21d8 + 0x5c)
                                                                            - 0x3ee u>= 3)
                                                                        DomMinimizePileAny()
                                                                        var_54_1 = *(gDomClient + 0x20758)
                                                                
                                                                if (var_54_1 != 0xb2)
                                                                label_b4d380:
                                                                    *(gDomClient + 0x207c0) = *(x19 + 0x98)
                                                                    *(gDomClient + 0x207bc) = 1
                                                                    SubmitAction(LocalWho(), 
                                                                        gDomClient + 0x20748)
                                                                    x8_95 = x19
                                                                    int32_t i_4
                                                                    
                                                                    for (i_4 = *(x8_95 + 0x2c); i_4 == 3; 
                                                                            i_4 = *(x8_95 + 0x2c))
                                                                        x21_10 = *(x8_95 + 0x30)
                                                                        
                                                                        if (x21_10 == 0x70d)
                                                                            goto label_b4d438
                                                                        
                                                                        if (x21_10 == 0x718)
                                                                            goto label_b4d438
                                                                        
                                                                        int32_t x8_96 = *(x8_95 + 0x70)
                                                                        
                                                                        if (x8_96 == 0)
                                                                            goto label_b4d438
                                                                        
                                                                        x8_95 = *(gDomClient + 0x205e0)
                                                                            + zx.q(x8_96.w) * 0x21d8
                                                                    
                                                                    if (i_4 == 5)
                                                                        goto label_b4d424
                                                                    
                                                                    if (i_4 == 1)
                                                                        x21_10 = *(x8_95 + 0x170)
                                                                        goto label_b4d438
                                                                    
                                                                    if (i_4 != 0)
                                                                        goto label_b4d41c
                                                                    
                                                                    x21_10 = CardWhat(gDomClient + 0x20728, 
                                                                        zx.q(*(x8_95 + 0x98)))
                                                                    goto label_b4d438
                                                                
                                                                int32_t x21_6 = *(gDomClient + 0x2079c)
                                                                int32_t x0_98 = CardWhat(
                                                                    gDomClient + 0x20728, 
                                                                    zx.q(*(x19 + 0x98)))
                                                                
                                                                if (x0_98 == 0x100)
                                                                    goto label_b4d380
                                                                
                                                                if (x0_98 != 0x101)
                                                                    int64_t x8_89 = 1
                                                                    int32_t x10_32
                                                                    
                                                                    do
                                                                        if (x8_89 == 0xe)
                                                                            goto label_b4d208
                                                                        
                                                                        x10_32 = *(&data_7ef48c + (x8_89 << 2))
                                                                        x8_89 += 1
                                                                    while (x10_32 != x0_98)
                                                                    
                                                                    if (x8_89 - 2 u< 0xd)
                                                                        goto label_b4d380
                                                                    
                                                                label_b4d208:
                                                                    
                                                                    if (x0_98 == 0x104 || x0_98 == 0x807
                                                                            || x0_98 == 0xd07)
                                                                        goto label_b4d380
                                                                    
                                                                    goto label_b4d238
                                                                
                                                                if ((PlayerHasInheritance(
                                                                        gDomClient + 0x20728, zx.q(x21_6)) & 1)
                                                                        == 0)
                                                                    goto label_b4d380
                                                                
                                                            label_b4d238:
                                                                void* x0_104 = GameGetPlayer(
                                                                    ActiveGame() + 8, 
                                                                    zx.q(*(gDomClient + 0x207a0)))
                                                                uint64_t x8_91 = zx.q(*(x0_104 + 0x228))
                                                                
                                                                if (x8_91.d s>= 1)
                                                                    void* x9_48 = x0_104 + 0x2c
                                                                    
                                                                    while (*(x9_48 - 4) != 0x1a)
                                                                        uint64_t temp4_1 = x8_91
                                                                        x8_91 -= 1
                                                                        x9_48 += 8
                                                                        
                                                                        if (temp4_1 == 1)
                                                                            goto label_b4d2a8
                                                                    
                                                                    if (*x9_48 != 2)
                                                                        goto label_b4d380
                                                                    
                                                                    goto label_b4d2a8
                                                                
                                                            label_b4d2a8:
                                                                int32_t x11_20 = *(gDomClient + 0x207bc)
                                                                data_182a73c = *(gDomClient + 0x207c0)
                                                                data_182a740 = x11_20
                                                                *(gDomClient + 0x207c0) = *(x19 + 0x98)
                                                                *(gDomClient + 0x207bc) = 1
                                                                x20 = zx.q(GetCurrentLanguage())
                                                                DoTranslate("dom_msg_confirm_lost_in_the_woods_header")
                                                                uint64_t x1_46
                                                                int32_t i_5
                                                                
                                                                for (i_5 = *(x19 + 0x2c); i_5 == 3; 
                                                                        i_5 = *(x19 + 0x2c))
                                                                    x1_46 = zx.q(*(x19 + 0x30))
                                                                    
                                                                    if (x1_46.d == 0x70d)
                                                                        goto label_b4d594
                                                                    
                                                                    if (x1_46.d == 0x718)
                                                                        goto label_b4d594
                                                                    
                                                                    int32_t x10_36 = *(x19 + 0x70)
                                                                    
                                                                    if (x10_36 == 0)
                                                                        goto label_b4d594
                                                                    
                                                                    x19 = *(gDomClient + 0x205e0)
                                                                        + zx.q(x10_36.w) * 0x21d8
                                                                
                                                                if (i_5 == 5)
                                                                    x1_46 = zx.q(*(x19 + 0x204))
                                                                else if (i_5 == 1)
                                                                    x1_46 = zx.q(*(x19 + 0x170))
                                                                else
                                                                    if (i_5 != 0)
                                                                        goto label_b4d41c
                                                                    
                                                                    x1_46 = zx.q(CardWhat(
                                                                        gDomClient + 0x20728, 
                                                                        zx.q(*(x19 + 0x98))))
                                                                
                                                            label_b4d594:
                                                                GetCardName(zx.q(x20.d), x1_46)
                                                                void var_d88
                                                                DoTranslateWithReplacement(
                                                                    "dom_msg_confirm_lost_in_the_woods_body", 
                                                                    "[card]", &var_d88)
                                                                DoTranslate("dom_msg_confirm_lost_in_the_woods_discard")
                                                                char var_da0
                                                                XString::XString(&var_da0)
                                                                XString var_d98
                                                                XString var_d90
                                                                GameMsgBox(&var_d80, &var_d90, 0x21, 
                                                                    &var_d98, &var_da0, sub_bad0dc, 
                                                                    sub_bad100)
                                                                XString::~XString()
                                                                XString::~XString()
                                                                XString::~XString()
                                                                XString::~XString()
                                                                XString::~XString()
                                                                x20_1 = 2
                                                            else if (x8_81 == 0xffffffff)
                                                                x20_1 = 0
                                                            else
                                                                *arg5 = ToggleSelection(x22_2, 0)
                                                                x21_8 = 2
                                                            label_b4d55c:
                                                                
                                                                if (*(gDomClient + 0x20758) == 0xa9)
                                                                    x20_1 = 2
                                                                else
                                                                    x20_1 = x21_8
                                                        else
                                                            x20_1 = 2
                                                            *arg5 = ToggleSelection(x22_2, 2)
                                                else
                                                    int32_t x20_6
                                                    
                                                    if (*(gDomClient + 0x2056c) s< 1)
                                                    label_b4cd4c:
                                                        x20_6 = 0
                                                    else
                                                        int32_t x0_70 = CardWhat(
                                                            gDomClient + 0x20728, 
                                                            zx.q(*(gDomClient + 0x1f8ec)))
                                                        uint64_t x8_62 =
                                                            zx.q(*(gDomClient + 0x205e8))
                                                        
                                                        if (x8_62.d == 0)
                                                        label_b4cd4c_1:
                                                            x20_6 = 0
                                                        else
                                                            void* i_12 = *(gDomClient + 0x205e0)
                                                            int32_t x23_5 = *(gDomClient + 0x2079c)
                                                            void* i_6 = i_12
                                                            
                                                            while (zx.d(*(i_6 + 0x21d2)) == 0)
                                                                i_6 += 0x21d8
                                                                
                                                                if (i_6 u>= i_12 + x8_62 * 0x21d8)
                                                                    goto label_b4cd4c_2
                                                            
                                                            if (i_6 == 0xffffffff)
                                                            label_b4cd4c_2:
                                                                x20_6 = 0
                                                            else
                                                                x20_6 = 0
                                                                
                                                                do
                                                                    if (*(i_6 + 0x2c) == 0
                                                                            && *(i_6 + 0xa0) == x23_5
                                                                            && *(i_6 + 0xa4) == 0x3ea)
                                                                        int32_t x0_88 = CardWhat(
                                                                            gDomClient + 0x20728, 
                                                                            zx.q(*(i_6 + 0x98)))
                                                                        i_12 = *(gDomClient + 0x205e0)
                                                                        x8_62 = zx.q(*(gDomClient + 0x205e8))
                                                                        
                                                                        if (x0_88 == x0_70)
                                                                            x20_6 += 1
                                                                    
                                                                    if (i_6 == 0)
                                                                        i_6 = i_12
                                                                    else
                                                                        i_6 += 0x21d8
                                                                    
                                                                    void* x10_27 =
                                                                        i_12 + mulu.dp.d(x8_62.d, 0x21d8)
                                                                    
                                                                    if (i_6 u>= x10_27)
                                                                        break
                                                                    
                                                                    while (zx.d(*(i_6 + 0x21d2)) == 0)
                                                                        i_6 += 0x21d8
                                                                        
                                                                        if (i_6 u>= x10_27)
                                                                            goto label_b4cd58
                                                                while (i_6 != 0xffffffff)
                                                    
                                                label_b4cd58:
                                                    ToggleSelection(x22_2, x20_6)
                                                    x20_1 = 2
                                            else
                                                if (x26_1 == 4 || x8_47 == 7)
                                                    int32_t x8_58
                                                    
                                                    x8_58 = x26_1 == 4 ? 0xb : 0xa
                                                    
                                                    *(gDomClient + 0x2074c) = x8_58
                                                    *(gDomClient + 0x207bc) = 1
                                                    x20 = gDomClient + 0x20748
                                                    *(gDomClient + 0x207c0) = *(x19 + 0x98)
                                                    SubmitAction(LocalWho(), x20)
                                                
                                                int32_t i_7
                                                
                                                for (i_7 = *(x19 + 0x2c); i_7 == 3; 
                                                        i_7 = *(x19 + 0x2c))
                                                    x20 = zx.q(*(x19 + 0x30))
                                                    
                                                    if (x20.d == 0x70d)
                                                        goto label_b4cbf4
                                                    
                                                    if (x20.d == 0x718)
                                                        goto label_b4cbf4
                                                    
                                                    int32_t x10_21 = *(x19 + 0x70)
                                                    
                                                    if (x10_21 == 0)
                                                        goto label_b4cbf4
                                                    
                                                    x19 = *(gDomClient + 0x205e0)
                                                        + zx.q(x10_21.w) * 0x21d8
                                                
                                                if (i_7 == 5)
                                                    x20 = zx.q(*(x19 + 0x204))
                                                else if (i_7 == 1)
                                                    x20 = zx.q(*(x19 + 0x170))
                                                else
                                                    if (i_7 != 0)
                                                        goto label_b4d41c
                                                    
                                                    x20 = zx.q(CardWhat(gDomClient + 0x20728, 
                                                        zx.q(*(x19 + 0x98))))
                                                
                                            label_b4cbf4:
                                                uint64_t x1_31
                                                
                                                if (*(GetClient() + 0x5068) == 0)
                                                    x1_31 = 0x18
                                                else
                                                    x1_31 = zx.q(*(ActiveGame() + 0x30))
                                                
                                                int32_t x0_80 = IsLandscape(zx.q(x20.d), x1_31)
                                                uint32_t x8_70
                                                
                                                if ((x0_80 & 1) != 0)
                                                    uint64_t x1_32
                                                    
                                                    if (*(GetClient() + 0x5068) == 0)
                                                        x1_32 = 0x18
                                                    else
                                                        x1_32 = zx.q(*(ActiveGame() + 0x30))
                                                    
                                                    x8_70 = zx.d(
                                                        *(DomDefGet(zx.q(x20.d), x1_32) + 0xcb))
                                                
                                                if ((x0_80 & 1) != 0 && (x8_70 & 3) == 0)
                                                    x20_1 = 2
                                                else
                                                    x20_1 = 1
                                    else
                                        if (x8_13 != 3)
                                            goto label_b4d41c
                                        
                                        if ((IsPileInActiveSet(x19, nullptr) & 1) == 0)
                                            int32_t x8_22
                                            
                                            if (*(x19 + 0x1f78) != 0)
                                                if (*(x19 + 0x3b0) != 1
                                                        || (*(x19 + 0x3b8) & 0xfffffffe) != 6)
                                                    goto label_b4c1b4
                                                
                                                x8_22 = *(x19 + 0x3bc)
                                                
                                                if (x8_22 u> 0x48 || *(x19 + 0x478) != 1
                                                        || (*(x19 + 0x480) & 0xfffffffe) != 6
                                                        || *(x19 + 0x484) != x8_22
                                                        || x8_22 - 0x27 u> 0x20)
                                                    goto label_b4c1b4
                                                
                                                goto label_b4c188
                                            
                                            if ((*(x19 + 0x3b8) & 0xfffffffe) != 6
                                                || *(x19 + 0x3b0) != 1)
                                            label_b4c1b4:
                                                
                                                if (*(x19 + 0x5c) - 0x44c u> 0x26)
                                                    x20_1 = 0
                                                else if (*(gDomClient + 0x1f8e4) != *(x19 + 0x21d0))
                                                    DomExpandPile(x19, false)
                                                    x20_1 = 0
                                                else
                                                    DomMinimizePile(x19)
                                                    x20_1 = 0
                                            else
                                                x8_22 = *(x19 + 0x3bc)
                                                
                                                if (x8_22 u> 0x48 || x8_22 - 0x27 u> 0x20)
                                                    goto label_b4c1b4
                                                
                                            label_b4c188:
                                                int32_t x8_28 = *(x19 + 0x30)
                                                
                                                if (x8_28 == 0x718 || x8_28 == 0x70d)
                                                    DomExpandPile(x19, false)
                                                    x20_1 = 0
                                                else
                                                    DomZoomPile(x19, false)
                                                    x20_1 = 0
                                        else
                                            int32_t x8_14 = *(gDomClient + 0x20758)
                                            
                                            if (x8_14 == 2 || x8_14 == 0xfd)
                                                int32_t x0_29 = LocalWho()
                                                void* x0_32 =
                                                    GameGetPlayer(ActiveGame() + 8, zx.q(x0_29))
                                                uint64_t x8_23 = zx.q(*(x0_32 + 0x228))
                                                int32_t x23_2
                                                
                                                if (x8_23.d s< 1)
                                                label_b4c13c:
                                                    x23_2 = 1
                                                else
                                                    void* x9_13 = x0_32 + 0x2c
                                                    
                                                    while (*(x9_13 - 4) != 0x16)
                                                        uint64_t temp0_1 = x8_23
                                                        x8_23 -= 1
                                                        x9_13 += 8
                                                        
                                                        if (temp0_1 == 1)
                                                            goto label_b4c13c
                                                    
                                                    x23_2 = *x9_13
                                                
                                                int32_t x0_41 = LocalWho()
                                                void* x0_44 =
                                                    GameGetPlayer(ActiveGame() + 8, zx.q(x0_41))
                                                uint64_t x8_33 = zx.q(*(x0_44 + 0x228))
                                                int32_t x9_17
                                                
                                                if (x8_33.d s< 1)
                                                label_b4c28c:
                                                    x9_17 = 1
                                                else
                                                    void* x9_16 = x0_44 + 0x2c
                                                    
                                                    while (*(x9_16 - 4) != 0x16)
                                                        uint64_t temp2_1 = x8_33
                                                        x8_33 -= 1
                                                        x9_16 += 8
                                                        
                                                        if (temp2_1 == 1)
                                                            goto label_b4c28c
                                                    
                                                    x9_17 = *x9_16
                                                
                                                int32_t x12_3 = 0x22134
                                                int32_t* x8_36 = *(gDomClient + 0x205e0)
                                                    + zx.q(*(x19 + 0x70)) * 0x21d8 + 0x98
                                                int32_t i_8 = *x8_36
                                                int32_t x11_9
                                                
                                                if (zx.d(*(gDomClient + 0x22134)) == 0)
                                                    uint64_t x11_10 = zx.q(*(gDomClient + 0x20770))
                                                    int32_t x11_11
                                                    
                                                    if (x11_10.d s< 1)
                                                    label_b4c33c:
                                                        x11_11 = 0
                                                    else
                                                        int32_t* x14_4 = *(gDomClient + 0x20760)
                                                        x12_3 = *x14_4
                                                        
                                                        if (i_8 != zx.d(x12_3.w))
                                                            int64_t x13_4 = 0
                                                            
                                                            do
                                                                if (x11_10 - 1 == x13_4)
                                                                    goto label_b4c33c
                                                                
                                                                x12_3 = x14_4[1 + x13_4]
                                                                x13_4 += 1
                                                            while (i_8 != zx.d(x12_3.w))
                                                            
                                                            x11_11 = x13_4 u< x11_10 ? 1 : 0
                                                        else
                                                            x11_11 = 1
                                                        
                                                        x12_3 = (x12_3 & 0x50000) != 0 ? 1 : 0
                                                    
                                                    x11_9 = x11_11 & x12_3
                                                else
                                                    x11_9 = 0
                                                
                                                uint64_t x12_4 = zx.q(*(gDomClient + 0x207bc))
                                                int32_t x10_10
                                                
                                                if (x12_4.d s< 1)
                                                    x10_10 = 1
                                                else if (*(gDomClient + 0x207c0) != i_8)
                                                    int64_t x16_1 = 0
                                                    int64_t x15_2
                                                    
                                                    do
                                                        x15_2 = x16_1
                                                        
                                                        if (x12_4 - 1 == x16_1)
                                                            break
                                                        
                                                        x16_1 = x15_2 + 1
                                                    while (*(gDomClient + (x15_2 << 2) + 0x207c4)
                                                        != i_8)
                                                    
                                                    x10_10 = x15_2 + 1 u>= x12_4 ? 1 : 0
                                                else
                                                    x10_10 = 0
                                                
                                                if (((x23_2 != 4 ? 1 : 0) & (x9_17 != 7 ? 1 : 0)
                                                        & 1) != 0 || ((x11_9 | x10_10) & 1) == 0)
                                                    x8_14 = *(gDomClient + 0x20758)
                                                label_b4c40c:
                                                    
                                                    if ((x8_14 & 0xfffffffe) != 0x2c)
                                                        if (x8_14 == 0x107)
                                                            YldCopy(&var_d80, gDomClient + 0x20748)
                                                            var_d0c = 0xbf00000001
                                                            SubmitAction(LocalWho(), &var_d80)
                                                            x20_1 = 1
                                                            int32_t var_d7c_2 = 1
                                                            x8_41 = *(*(gDomClient + 0x205e0)
                                                                + zx.q(*(x19 + 0x70)) * 0x21d8 + 0x98)
                                                        label_b4cb10:
                                                            var_d0c:4.d = x8_41
                                                            goto label_b4cb14
                                                        
                                                        if (x8_14 != 0xd2)
                                                            goto label_b4c504
                                                        
                                                        x20_1 = 1
                                                        void* x21_2 = *(gDomClient + 0x205e0)
                                                            + zx.q(*(x19 + 0x70)) * 0x21d8
                                                        int32_t x9_20
                                                        
                                                        if (*(x21_2 + 0xa4) == 0x462)
                                                            x9_20 = 0x86
                                                        else
                                                            x9_20 = 0x85
                                                        
                                                        *(gDomClient + 0x207c0) = x9_20
                                                        *(gDomClient + 0x207bc) = 1
                                                        SubmitAction(LocalWho(), 
                                                            gDomClient + 0x20748)
                                                        YldCopy(&var_d80, gDomClient + 0x20748)
                                                        x8_41 = *(x21_2 + 0x98)
                                                        var_d7c_4 = 1
                                                        goto label_b4cb10
                                                    
                                                    uint64_t x20_2 = zx.q(*(x19 + 0x70))
                                                    int64_t x21_1 = *(gDomClient + 0x205e0)
                                                    *(gDomClient + 0x207bc) = 0x1a00000001
                                                    SubmitAction(LocalWho(), gDomClient + 0x20748)
                                                    YldCopy(&var_d80, gDomClient + 0x20748)
                                                    x8_38 = *(x21_1 + x20_2 * 0x21d8 + 0x98)
                                                label_b4c468:
                                                    x20_1 = 1
                                                    var_d0c:4.d = x8_38
                                                    int32_t var_d7c_1 = 1
                                                label_b4cb14:
                                                    var_d0c.d = 1
                                                label_b4cb18:
                                                    int32_t x0_73 = LocalWho()
                                                    int64_t (* x8_66)()
                                                    
                                                    if (x0_73 == 0xffffffff)
                                                        x8_66 = gDomClient + 0x48
                                                    else
                                                        x8_66 = gDomClient + 0x48
                                                            + muls.dp.d(x0_73, 0x4d48)
                                                    
                                                    int64_t x9_35 = sx.q(*(x8_66 + 0x4098))
                                                    *(x8_66 + 0x4098) = x9_35.d + 1
                                                    memcpy(x8_66 + x9_35 * 0xd20 + 0x1938, 
                                                        &var_d80, 0xd20)
                                                else
                                                    int32_t x10_13
                                                    
                                                    if (x23_2 != 4)
                                                        x20_1 = 1
                                                        
                                                        if (x9_17 == 7)
                                                            x10_13 = 0xa
                                                            goto label_b4c534
                                                    else
                                                        x10_13 = 0xb
                                                        x20_1 = 1
                                                    label_b4c534:
                                                        *(gDomClient + 0x2074c) = x10_13
                                                        *(gDomClient + 0x207bc) = 1
                                                        *(gDomClient + 0x207c0) = *x8_36
                                                        SubmitAction(LocalWho(), 
                                                            gDomClient + 0x20748)
                                            else
                                                if (x8_14 != 0x51)
                                                    goto label_b4c40c
                                                
                                                if (*(x19 + 0x30) == 0x70d)
                                                    DomExpandPile(x19, false)
                                                    x20_1 = 0
                                                else
                                                    x8_14 = 0x51
                                                label_b4c504:
                                                    
                                                    if (*(gDomClient + 0x2074c) == 8)
                                                        x8_5 = *(x19 + 0x30)
                                                        goto label_b4bdac
                                                    
                                                    if (x8_14 == 2 || *(gDomClient + 0x207ac) == 1)
                                                        *(gDomClient + 0x207c0) = *(
                                                            *(gDomClient + 0x205e0)
                                                            + zx.q(*(x19 + 0x70)) * 0x21d8 + 0x98)
                                                        *(gDomClient + 0x207bc) = 1
                                                        SubmitAction(LocalWho(), 
                                                            gDomClient + 0x20748)
                                                        int32_t x8_51 = *(x19 + 0x2c)
                                                        
                                                        if (x8_51 != 3)
                                                            goto label_b4c744
                                                        
                                                        int32_t x8_52 = *(x19 + 0x70)
                                                        
                                                        if (x8_52 == 0)
                                                            x20_1 = 2
                                                        else
                                                            uint64_t x9_25 = zx.q(x8_52.w)
                                                            
                                                            if (x9_25.d u>= *(gDomClient + 0x205e8))
                                                                x20_1 = 2
                                                            else
                                                                int64_t x10_20 = *(gDomClient + 0x205e0)
                                                                
                                                                if (*(x10_20 + x9_25 * 0x21d8 + 0x21d0)
                                                                        != x8_52)
                                                                    x20_1 = 2
                                                                else
                                                                    x19 = x10_20 + x9_25 * 0x21d8
                                                                    x8_51 = *(x19 + 0x2c)
                                                                label_b4c744:
                                                                    
                                                                    if (x8_51 != 0)
                                                                        x20_1 = 2
                                                                    else if ((CardIs(gDomClient + 0x20728, 
                                                                            zx.q(*(x19 + 0x98)), 4) & 1) == 0)
                                                                        x20_1 = 2
                                                                    else
                                                                        TrySubmitWay(gDomClient + 0x20748, 
                                                                            gDomClient + 0x20570, x20.b & 1, true)
                                                                        x20_1 = 2
                                                    else
                                                        *arg5 = ToggleSelection(x19, 0)
                                                        x20_1 = 2
                            else
                                int32_t x9_5 = *(gDomClient + 0x20788)
                                
                                if (x9_5 == 0)
                                    goto label_b4bf44
                                
                                uint64_t x10_1 = zx.q(*(gDomClient + 0x20770))
                                
                                if (x10_1.d s< 1)
                                    goto label_b4bf44
                                
                                int32_t* x11_2 = *(gDomClient + 0x20760)
                                uint64_t x1_3 = zx.q(*(x19 + 0x98))
                                int64_t x12_2
                                
                                if (*x11_2 != x1_3.d)
                                    int64_t x13_1 = 1
                                    
                                    do
                                        x12_2 = x13_1
                                        
                                        if (x10_1 == x13_1)
                                            break
                                        
                                        x13_1 = x12_2 + 1
                                    while (x11_2[x12_2] != x1_3.d)
                                
                                if (*x11_2 != x1_3.d && x12_2 u>= x10_1)
                                    goto label_b4bf44
                                
                                uint64_t x10_2 = zx.q(*(gDomClient + 0x207bc))
                                
                                if (x10_2.d s>= 1)
                                    if (*(gDomClient + 0x207c0) == x1_3.d)
                                        goto label_b4bf44
                                    
                                    int64_t x14_1 = 0
                                    int64_t x13_3
                                    
                                    do
                                        x13_3 = x14_1
                                        
                                        if (x10_2 - 1 == x14_1)
                                            break
                                        
                                        x14_1 = x13_3 + 1
                                    while (*(gDomClient + (x13_3 << 2) + 0x207c4) != x1_3.d)
                                    
                                    if (x13_3 + 1 u< x10_2
                                            || *(x19 + 0xa0) != *(gDomClient + 0x2079c)
                                            || *(x19 + 0xa4) != 0x3ea)
                                        goto label_b4bf44
                                    
                                    goto label_b4bf08
                                
                                if (*(x19 + 0xa0) != *(gDomClient + 0x2079c)
                                        || *(x19 + 0xa4) != 0x3ea)
                                    goto label_b4bf44
                                
                            label_b4bf08:
                                uint64_t x8_7 = zx.q(x9_5 - 1)
                                
                                if (x8_7.d u> 5)
                                    goto label_b4d41c
                                
                                x20_1 = 0
                                DomGame* x0_13
                                int64_t x2
                                
                                switch (x8_7)
                                    case 0, 1
                                        x0_13 = gDomClient + 0x20728
                                        x2 = 4
                                    label_b4c7a0:
                                        
                                        if ((CardIs(x0_13, x1_3, x2) & 1) == 0)
                                            x20_1 = 0
                                        else
                                            int32_t x8_54
                                            
                                            if (*(gDomClient + 0x2074c) != 3)
                                                x8_54 = 0
                                            else
                                                *(gDomClient + 0x21450) = 0x475
                                                x8_54 = 1
                                            
                                            *(gDomClient + 0x207bc) = x8_54
                                            SubmitAction(LocalWho(), gDomClient + 0x20748)
                                            YldCopy(&var_d80, gDomClient + 0x20748)
                                            x20_1 = 1
                                            int32_t var_d7c_3 = 1
                                            var_d0c.d = 1
                                            var_d0c:4.d = *(x19 + 0x98)
                                            int32_t x0_64 = LocalWho()
                                            int64_t (* x8_57)()
                                            
                                            if (x0_64 == 0xffffffff)
                                                x8_57 = gDomClient + 0x48
                                            else
                                                x8_57 = gDomClient + 0x48 + muls.dp.d(x0_64, 0x4d48)
                                            
                                            int64_t x9_27 = sx.q(*(x8_57 + 0x4098))
                                            *(x8_57 + 0x4098) = x9_27.d + 1
                                            memcpy(x8_57 + x9_27 * 0xd20 + 0x1938, &var_d80, 0xd20)
                                            GetFirstWayCard()
                                    case 2, 3
                                        x0_13 = gDomClient + 0x20728
                                        x2 = 2
                                        goto label_b4c7a0
                                    case 5
                                        x0_13 = gDomClient + 0x20728
                                        x2 = 0x40000
                                        goto label_b4c7a0
                        else
                            *(gDomClient + 0x207c0) = x22_1
                            *(gDomClient + 0x207bc) = 1
                            SubmitAction(LocalWho(), gDomClient + 0x20748)
                            x20_1 = 2
                    else
                        int32_t x8_3 = *(x19 + 0x174)
                        
                        if (x8_3 == 3)
                            x8_5 = *(x19 + 0x170)
                        label_b4bdac:
                            *(gDomClient + 0x207c0) = x8_5
                            *(gDomClient + 0x207bc) = 1
                            SubmitAction(LocalWho(), gDomClient + 0x20748)
                            x20_1 = 2
                        else
                            if (x8_3 == 1)
                                DomZoomExtra(x19)
                            
                            x20_1 = 0
        else
            DomExpandPile(x19, false)
            x20_1 = 2
    else
        if (x11_1 != 0)
        label_b4d41c:
            pthread_kill(pthread_self(), 6)
            x8_95 = XNoReturn()
        label_b4d424:
            x21_10 = *(x8_95 + 0x204)
        label_b4d438:
            uint64_t x1_49
            
            if (*(GetClient() + 0x5068) == 0)
                x1_49 = 0x18
            else
                x1_49 = zx.q(*(ActiveGame() + 0x30))
            
            if ((IsLandscape(zx.q(x21_10), x1_49) & 1) == 0)
                x21_8 = 1
            else
                uint64_t x1_50
                
                if (*(GetClient() + 0x5068) == 0)
                    x1_50 = 0x18
                else
                    x1_50 = zx.q(*(ActiveGame() + 0x30))
                
                if ((zx.d(*(DomDefGet(zx.q(x21_10), x1_50) + 0xcb)) & 3) == 0)
                    x21_8 = 2
                else
                    x21_8 = 1
            
            int32_t x8_101 = *(gDomClient + 0x20758)
            
            if (x8_101 s<= 0x8e)
                uint64_t x8_102 = zx.q(x8_101 - 0x35)
                
                if (x8_102.d u<= 0x3f && (1 << x8_102 & 0x8000000028100411) != 0)
                    x21_8 = 2
            else if (x8_101 - 0x8f u> 0x17)
                if (x8_101 == 0x102 || x8_101 == 0xe8)
                    x21_8 = 2
            else if ((1 << (x8_101 - 0x8f) & 0x800403) != 0 || x8_101 == 0x102 || x8_101 == 0xe8)
                x21_8 = 2
            
            if ((CardIs(gDomClient + 0x20728, zx.q(*(x19 + 0x98)), 4) & 1) != 0)
                TrySubmitWay(gDomClient + 0x20748, gDomClient + 0x20570, x20.b & 1, 
                    IsBoardPile(zx.q(*(x19 + 0xa4))) & 1)
            
            goto label_b4d55c
        
        x22_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_1 + 0x98)))
    label_b4bcac:
        
        if (x22_1 != 0x718 && x22_1 != 0x70d)
            goto label_b4bd0c
        
        DomExpandPile(x19, false)
        x20_1 = 2

return zx.q(x20_1)
