// 函数: _Z17TaptipHandleClickRK12UI2ClickInfo
// 地址: 0xb017b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 1)
    int64_t var_70
    
    if (*(GetClient() + 0x5068) != 1)
    label_b01838:
        GetClient()
        char* s1 = *(arg1 + 8)
        char const* const x20_1 = "grpActions"
        char const (** const x21_1)[0x11]
        
        if (strcasecmp(s1, "grpActions") == 0)
            x21_1 = &data_1149788
        label_b019dc:
            XString::XString(&var_70)
            int128_t v0_1
            
            if ((operator==(x20_1, &var_70) & 1) == 0)
                XString::~XString()
            label_b01a44:
                char const (* x20_3)[0x11] = *x21_1
                XString::XString(&var_70)
                
                if ((operator==(x20_3, &var_70) & 1) == 0)
                    XString::~XString()
                label_b01ac0:
                    char const (* x20_6)[0x11] = *x21_1
                    XString::XString(&var_70)
                    
                    if ((operator==(x20_6, &var_70) & 1) == 0)
                        XString::~XString()
                    label_b01b40:
                        char const (* x20_8)[0x11] = *x21_1
                        XString::XString(&var_70)
                        
                        if ((operator==(x20_8, &var_70) & 1) == 0)
                            XString::~XString()
                        label_b01bc0:
                            char const (* x20_10)[0x11] = *x21_1
                            XString::XString(&var_70)
                            DomGame* x0_46
                            int64_t (* const x1_14)()
                            
                            if ((operator==(x20_10, &var_70) & 1) == 0)
                            label_b01c1c:
                                XString::~XString()
                            label_b01c20:
                                char const (* x20_11)[0x11] = *x21_1
                                XString::XString(&var_70)
                                
                                if ((operator==(x20_11, &var_70) & 1) == 0)
                                label_b01c7c:
                                    XString::~XString()
                                label_b01f14:
                                    v0_1 = *(x21_1 + 0x10)
                                    uint64_t x0_55 = zx.q(*arg1)
                                    int32_t x9_10 = x21_1[4].d
                                    int32_t x10_11 = *(x21_1 + 0x24)
                                    *(gDomClient + 0x84318) = *x21_1[1]
                                    int32_t x8_21 = *(gDomClient + 0x38)
                                    char x22_3 = x21_1[5].b
                                    int32_t x8_22
                                    
                                    x8_22 = x8_21 == 0xffffffff ? 0 : x8_21
                                    
                                    int32_t x8_23
                                    
                                    x8_23 = x10_11 == 1 ? x8_22 : -1
                                    
                                    *(gDomClient + 0x84320) = x8_23
                                    *(gDomClient + 0x84330) = 1
                                    *(gDomClient + 0x84338) = x0_55.d
                                    *(gDomClient + 0x8433c) = x9_10
                                    int32_t v0_2
                                    int32_t v1_1
                                    int32_t v2_1
                                    int32_t v3_1
                                    v0_2, v1_1, v2_1, v3_1 = UI2GetRect(x0_55)
                                    XAsset* x1_16 = *(gDomClient + 0x84318)
                                    uint64_t x2_1 = zx.q(*(gDomClient + 0x8433c))
                                    int32_t var_80 = v0_2
                                    int32_t var_7c_1 = v1_1
                                    int32_t var_78_1 = v2_1
                                    int32_t var_74_1 = v3_1
                                    int128_t v0_3
                                    int128_t v1_2
                                    int128_t v2_2
                                    v0_3, v1_2, v2_2 = TaptipRelativeTransform(&var_80, x1_16, x2_1)
                                    v0_3 = var_70.o
                                    char const (* x19_2)[0x11] = *x21_1
                                    int128_t var_60
                                    *(gDomClient + 0x84350) = var_60
                                    *(gDomClient + 0x84360) = v0_1
                                    *(gDomClient + 0x84340) = v0_3
                                    *(gDomClient + 0x84374) = x22_3
                                    XString::XString(&var_70)
                                    int32_t x0_59 = operator==(x19_2, &var_70)
                                    XString::~XString()
                                    
                                    if ((x0_59 & 1) != 0 && *(GetClient() + 0x5068) != 0
                                            && *(GetClient() + 0x5068) == 1)
                                        int32_t x0_64 = GetActiveTutorial(
                                            zx.q(*(ActiveGameSafe() + 0x1c)), &var_70)
                                        int64_t x8_26 = sx.q(*(gDomClient + 0x205cc))
                                        int64_t x9_11
                                        
                                        if (x8_26.d s< x0_64)
                                            x9_11 = var_70
                                        
                                        if (x8_26.d s>= x0_64 || x9_11 == 0)
                                            return 1
                                        
                                        if (*(x9_11 + x8_26 * 0xb0 + 0x18) == 0x1a)
                                            TutorialContinue()
                                    
                                    return 1
                                
                                uint64_t x8_8 = zx.q(*(gDomClient + 0x82b48))
                                
                                if (x8_8.d u<= 4)
                                    switch (x8_8)
                                        case 0, 3
                                            goto label_b01c7c
                                        case 1, 2
                                            XString::~XString()
                                        label_b01d9c:
                                            int32_t x9_7 = *(gDomClient + 0x38)
                                            uint64_t x1_15
                                            
                                            if (x9_7 == 0xffffffff)
                                                x1_15 = 0
                                            else
                                                x1_15 = zx.q(x9_7)
                                            
                                            x1_14 = gScoreDlg
                                            *(gScoreDlg + 0x232fc) =
                                                PlayerSeatToWho(zx.q(*(arg1 + 0x10) + 1), x1_15)
                                            *(gScoreDlg + 0x23300) = 0
                                            x0_46 = gDomClient + 0x20728
                                        label_b01de0:
                                            CalcPlayerScoreInfo(x0_46, x1_14)
                                            GameDlgManagerShow(0x7ec, 5)
                                            return 1
                                        case 4
                                            int32_t x22_2 = *(gDomClient + 0x82b58)
                                            XString::~XString()
                                            
                                            if (x22_2 != 2)
                                                goto label_b01f14
                                            
                                            goto label_b01d9c
                            else
                                uint64_t x8_7 = zx.q(*(gDomClient + 0x82b48))
                                
                                if (x8_7.d u<= 4)
                                    switch (x8_7)
                                        case 0, 3
                                            goto label_b01c1c
                                        case 1, 2
                                            XString::~XString()
                                        case 4
                                            int32_t x22_1 = *(gDomClient + 0x82b58)
                                            XString::~XString()
                                            
                                            if (x22_1 != 2)
                                                goto label_b01c20
                                    
                                    int32_t x8_9 = *(gDomClient + 0x38)
                                    x1_14 = gScoreDlg
                                    int32_t x8_10
                                    
                                    x8_10 = x8_9 == 0xffffffff ? 0 : x8_9
                                    
                                    x0_46 = gDomClient + 0x20728
                                    *(gScoreDlg + 0x232fc) = x8_10
                                    *(gScoreDlg + 0x23300) = 0
                                    goto label_b01de0
                        else
                            int32_t x20_9 = *(arg1 + 0x20)
                            XString::~XString()
                            
                            if (x20_9 != 0)
                                goto label_b01bc0
                            
                            uint64_t x9_5 = zx.q(*(gDomClient + 0x82b48))
                            
                            if (x9_5.d u<= 4)
                                switch (x9_5)
                                    case 0, 3
                                        goto label_b01f14
                                    case 1, 2
                                        ZoomOppDiscardToggle(zx.q(*(arg1 + 0x10) + 1))
                                        return 1
                                    case 4
                                        if (*(gDomClient + 0x82b4c) - 1 u> 1)
                                            goto label_b01f14
                                        
                                        ZoomOppDiscardToggle(zx.q(*(arg1 + 0x10) + 1))
                                        return 1
                    else
                        int32_t x20_7 = *(arg1 + 0x20)
                        XString::~XString()
                        
                        if (x20_7 != 0)
                            goto label_b01b40
                        
                        uint64_t x9_4 = zx.q(*(gDomClient + 0x82b48))
                        
                        if (x9_4.d u<= 4)
                            switch (x9_4)
                                case 0, 3
                                    goto label_b01f14
                                case 1, 2
                                    ZoomOppDeckToggle(zx.q(*(arg1 + 0x10) + 1))
                                    return 1
                                case 4
                                    if (*(gDomClient + 0x82b4c) - 1 u> 1)
                                        goto label_b01f14
                                    
                                    ZoomOppDeckToggle(zx.q(*(arg1 + 0x10) + 1))
                                    return 1
                else
                    int32_t x20_4 = *(arg1 + 0x20)
                    XString::~XString()
                    
                    if (x20_4 != 0)
                        goto label_b01ac0
                    
                    uint64_t x9_3 = zx.q(*(gDomClient + 0x82b48))
                    
                    if (x9_3.d u<= 4)
                        int32_t x20_5 = 1
                        
                        switch (x9_3)
                            case 0, 3
                                x20_5 = 0
                            case 4
                                x20_5 = *(gDomClient + 0x82b4c) - 1 u< 2 ? 1 : 0
                        
                        int32_t x0_52
                        x0_52, v0_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))
                        
                        if ((x20_5 & 1) == 0 && x0_52 != 2)
                            goto label_b01f14
                        
                        ZoomDiscardToggle()
                        return 1
            else
                int32_t x20_2 = *(arg1 + 0x20)
                XString::~XString()
                
                if (x20_2 != 0)
                    goto label_b01a44
                
                uint64_t x23_1 = zx.q(*(gDomClient + 0x82b48))
                
                if (x23_1.d u<= 4)
                    switch (x23_1)
                        case 0, 3
                            x23_1 = 0xffffffff
                        case 2
                            x23_1 = 0
                        case 4
                            x23_1 = zx.q(*(gDomClient + 0x82b4c) - 1)
                    
                    int32_t x0_48
                    x0_48, v0_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))
                    
                    if (x0_48 u<= 5 && (1 << x0_48 & 0x32) != 0)
                    label_b01d38:
                        ZoomDeckToggle()
                        return 1
                    
                    uint64_t x8_13 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x8_13.d != 0)
                        void* i_1 = *(gDomClient + 0x205e0)
                        void* i = i_1
                        
                        do
                            if (zx.d(*(i + 0x21d2)) != 0)
                                while (i != 0xffffffff)
                                    if (*(i + 0x2c) == 0 && zx.d(*(i + 0x168)) == 0
                                            && *(i + 0xa4) == 0x3eb)
                                        int32_t x10_7 = *(gDomClient + 0x38)
                                        int32_t x10_8
                                        
                                        x10_8 = x10_7 == 0xffffffff ? 0 : x10_7
                                        
                                        if (*(i + 0xa0) == x10_8)
                                            int32_t x0_54
                                            x0_54, v0_1 = CardIsShadow(i)
                                            
                                            if ((x0_54 & 1) != 0)
                                                goto label_b01d38
                                            
                                            i_1 = *(gDomClient + 0x205e0)
                                            x8_13 = zx.q(*(gDomClient + 0x205e8))
                                    
                                    if (i == 0)
                                        i = i_1
                                    else
                                        i += 0x21d8
                                    
                                    void* x10_10 = i_1 + mulu.dp.d(x8_13.d, 0x21d8)
                                    
                                    if (i u>= x10_10)
                                        break
                                    
                                    while (zx.d(*(i + 0x21d2)) == 0)
                                        i += 0x21d8
                                        
                                        if (i u>= x10_10)
                                            goto label_b01f0c
                                
                                break
                            
                            i += 0x21d8
                        while (i u< i_1 + x8_13 * 0x21d8)
                    
                label_b01f0c:
                    
                    if (x23_1.d u<= 1)
                        goto label_b01d38
                    
                    goto label_b01f14
            pthread_kill(pthread_self(), 6)
            int64_t x0_67
            XAsset* x1_20
            UI2StateDecl* x2_2
            UI2StateDecl* x3
            int64_t x4
            int64_t x5
            bool x6
            x0_67, x1_20, x2_2, x3, x4, x5, x6 = XNoReturn()
            return TaptipDisplayUI(x0_67, x1_20, x2_2, x3, x4, x5, x6) __tailcall
        
        x20_1 = "grpCleanup"
        
        if (strcasecmp(s1, "grpCleanup") == 0)
            x21_1 = &data_11497b8
            goto label_b019dc
        
        x20_1 = "grpNight"
        
        if (strcasecmp(s1, "grpNight") == 0)
            x21_1 = &data_11497e8
            goto label_b019dc
        
        x20_1 = "grpBuys"
        
        if (strcasecmp(s1, "grpBuys") == 0)
            x21_1 = &data_1149818
            goto label_b019dc
        
        x20_1 = "btn_Deck"
        
        if (strcasecmp(s1, "btn_Deck") == 0)
            x21_1 = &data_1149848
            goto label_b019dc
        
        x20_1 = "btn_Discard"
        
        if (strcasecmp(s1, "btn_Discard") == 0)
            x21_1 = &data_1149878
            goto label_b019dc
        
        x20_1 = "grpScore"
        
        if (strcasecmp(s1, "grpScore") == 0)
            x21_1 = &data_11498a8
            goto label_b019dc
        
        x20_1 = "grpOpponentDeck"
        
        if (strcasecmp(s1, "grpOpponentDeck") == 0)
            x21_1 = &data_11498d8
            goto label_b019dc
        
        x20_1 = "grpOpponentDiscard"
        
        if (strcasecmp(s1, "grpOpponentDiscard") == 0)
            x21_1 = &data_1149908
            goto label_b019dc
        
        x20_1 = "grpOpponentHand"
        
        if (strcasecmp(s1, "grpOpponentHand") == 0)
            x21_1 = &data_1149938
            goto label_b019dc
        
        x20_1 = "grpOpponentScore"
        
        if (strcasecmp(s1, "grpOpponentScore") == 0)
            x21_1 = &data_1149968
            goto label_b019dc
    else
        int32_t x0_3 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_70)
        int64_t x8_2 = sx.q(*(gDomClient + 0x205cc))
        
        if (x8_2.d s>= x0_3)
            goto label_b01838
        
        int64_t x9_1 = var_70
        
        if (x9_1 == 0 || *(x9_1 + x8_2 * 0xb0 + 0x1c) == 0x18)
            goto label_b01838

return 0
