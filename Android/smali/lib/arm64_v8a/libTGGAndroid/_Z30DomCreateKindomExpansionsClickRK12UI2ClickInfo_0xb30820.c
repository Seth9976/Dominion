// 函数: _Z30DomCreateKindomExpansionsClickRK12UI2ClickInfo
// 地址: 0xb30820
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_19f8
XString::XString(&var_19f8)

if ((operator==(&var_19f8, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_b3088c
else
    XString::~XString()
label_b3088c:
    uint32_t x8_1 = *gKingdomExpansionStyle
    
    if (x8_1 == 1)
        GameDlgManagerShow(0x7f1, 7)
        *gMatchmakingSettingsDlg = 1
    else if (x8_1 != 2)
        GameDlgManagerDismiss(7, false)
    else
        GameDlgManagerShow(0x7f1, 7)
        *gMatchmakingSettingsDlg = 0

XString::XString(&var_19f8)
int32_t x0_5 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()
DomExpSetup var_1030
DomLandscapeModifiers var_e30

if ((x0_5 & 1) != 0)
    uint32_t x9_1 = *gKingdomExpansionStyle
    int32_t var_19f4[0x265]
    
    if (x9_1 != 3)
        int32_t x8_3 = *(gCreateDlg + 0x2c)
        
        if (x9_1 - 1 u> 1)
            Vec2I var_68
            int32_t var_64
            GameSetup* x20_3
            
            if (x8_3 == 1)
                x20_3 = GetActiveGameSetup()
                DomSetupConfigFromString(XString::operator char const*(), *(x20_3 + 0x28))
                int32_t* x21_6 = ExpansionEnumerator::begin()
                int64_t x0_128 = ExpansionEnumerator::end()
                
                if (x21_6 != x0_128)
                    do
                        int32_t x25_2 = *x21_6
                        
                        if ((DomConfigHasExpansion(&var_19f8, zx.q(x25_2), nullptr, &var_68) & 1)
                                != 0 && var_64 == 0xa)
                            ToggleExpansion(GetActiveProfile(), &var_1030, zx.q(x25_2), &var_e30)
                        
                        x21_6 = &x21_6[1]
                    while (x0_128 != x21_6)
                
                SaveSetupData(x20_3, &var_19f8)
            else if (x8_3 == 0)
                x20_3 = GetActiveGameSetup()
                DomSetupConfigFromString(XString::operator char const*(), *(x20_3 + 0x28))
                int32_t* x21_2 = ExpansionEnumerator::begin()
                int64_t x0_17 = ExpansionEnumerator::end()
                
                if (x21_2 != x0_17)
                    do
                        int32_t x25_1 = *x21_2
                        
                        if ((DomConfigHasExpansion(&var_19f8, zx.q(x25_1), nullptr, &var_68) & 1)
                                == 0 || var_64 != 0xa)
                            if (x25_1 != 0x13)
                                if ((ProfileHasEntitlementForExpansion(zx.q(x25_1), nullptr) & 1)
                                        != 0)
                                    ToggleExpansion(GetActiveProfile(), &var_1030, zx.q(x25_1), 
                                        &var_e30)
                            else if ((ProfileHasAnyPromos() & 1) != 0)
                                ToggleExpansion(GetActiveProfile(), &var_1030, zx.q(x25_1), 
                                    &var_e30)
                        
                        x21_2 = &x21_2[1]
                    while (x0_17 != x21_2)
                
                SaveSetupData(x20_3, &var_19f8)
        else if (x8_3 == 1)
            int32_t x22_5 = *(GetActiveProfile() + 0x7560)
            int32_t* x20_15 = ExpansionEnumerator::begin()
            int64_t x0_110 = ExpansionEnumerator::end()
            
            if (x20_15 != x0_110)
                int32_t x24_2
                
                x24_2 = x22_5 != 0 ? 4 : 1
                
                do
                    int32_t i = *x20_15
                    
                    if (i == 2)
                        x24_2 -= 1
                    else
                        int32_t x0_113 =
                            DomExpansionsFromBitset(zx.q(*(GetActiveProfile() + 0x7568)), &var_19f8)
                        
                        if (x0_113 s<= 0)
                        label_b31314:
                            
                            if (i != 0x13)
                                if ((ProfileHasEntitlementForExpansion(zx.q(i), nullptr) & 1) != 0)
                                label_b3133c:
                                    int32_t* x28_3 = GetActiveProfile() + 0x7568
                                    int32_t x0_119 =
                                        DomExpansionsFromBitset(zx.q(*x28_3), &var_19f8)
                                    uint64_t x1_43 = zx.q(x0_119)
                                    uint64_t x8_31
                                    
                                    if (x0_119 s< 1)
                                        x8_31 = sx.q(x1_43.d)
                                    label_b313a8:
                                        x1_43 = zx.q(x1_43.d + 1)
                                        (&var_19f8)[x8_31] = i
                                    else
                                        x8_31 = zx.q(x1_43.d)
                                        int32_t* x9_20 = &var_19f8
                                        uint64_t x10_19 = x8_31
                                        
                                        while (true)
                                            if (*x9_20 == i)
                                                x1_43 = sx.q(x1_43.d) - 1
                                                *x9_20 = (&var_19f8)[x1_43]
                                                break
                                            
                                            uint64_t temp6_1 = x10_19
                                            x10_19 -= 1
                                            x9_20 = &x9_20[1]
                                            
                                            if (temp6_1 == 1)
                                                int32_t* x9_21 = &var_19f8
                                                uint64_t x10_20 = x8_31
                                                
                                                while (*x9_21 != i)
                                                    uint64_t temp9_1 = x10_20
                                                    x10_20 -= 1
                                                    x9_21 = &x9_21[1]
                                                    
                                                    if (temp9_1 == 1)
                                                        goto label_b313a8
                                                
                                                break
                                    *x28_3 = DomExpansionsBitsetFromExpansions(&var_19f8, x1_43.d)
                            else if ((ProfileHasAnyPromos() & 1) != 0)
                                goto label_b3133c
                        else
                            int32_t x8_29
                            
                            if (var_19f8 != i)
                                uint64_t x8_30 = zx.q(x0_113)
                                int64_t x9_18 = 0
                                int32_t x11_11
                                
                                do
                                    if (x8_30 - 1 == x9_18)
                                        x8_29 = x8_30 u< x8_30 ? 1 : 0
                                        
                                        if (i == 0x13)
                                            goto label_b31314
                                        
                                        goto label_b3130c
                                    
                                    x11_11 = var_19f4[x9_18]
                                    x9_18 += 1
                                while (x11_11 != i)
                                x8_29 = x9_18 u< x8_30 ? 1 : 0
                                
                                if (i == 0x13)
                                    goto label_b31314
                            else
                                x8_29 = 1
                                
                                if (i == 0x13)
                                    goto label_b31314
                            
                        label_b3130c:
                            
                            if (x24_2 == 0 || x8_29 == 0)
                                goto label_b31314
                            
                            x24_2 -= 1
                    
                    x20_15 = &x20_15[1]
                while (x20_15 != x0_110)
            
            SaveProfiles()
        else if (x8_3 == 0)
            int32_t* i_1 = ExpansionEnumerator::begin()
            
            for (int64_t x0_10 = ExpansionEnumerator::end(); i_1 != x0_10; i_1 = &i_1[1])
                int32_t j = *i_1
                
                if (j != 0x13)
                    if ((ProfileHasEntitlementForExpansion(zx.q(j), nullptr) & 1) != 0)
                    label_b30d3c:
                        int32_t x0_52 =
                            DomExpansionsFromBitset(zx.q(*(GetActiveProfile() + 0x7568)), &var_19f8)
                        
                        if (x0_52 s<= 0)
                        label_b30d84:
                            int32_t* x27_1 = GetActiveProfile() + 0x7568
                            int32_t x0_55 = DomExpansionsFromBitset(zx.q(*x27_1), &var_19f8)
                            uint64_t x1_15 = zx.q(x0_55)
                            uint64_t x8_18
                            
                            if (x0_55 s< 1)
                                x8_18 = sx.q(x1_15.d)
                            label_b30df0:
                                x1_15 = zx.q(x1_15.d + 1)
                                (&var_19f8)[x8_18] = j
                            else
                                x8_18 = zx.q(x1_15.d)
                                int32_t* x9_8 = &var_19f8
                                uint64_t x10_5 = x8_18
                                
                                while (true)
                                    if (*x9_8 == j)
                                        x1_15 = sx.q(x1_15.d) - 1
                                        *x9_8 = (&var_19f8)[x1_15]
                                        break
                                    
                                    uint64_t temp3_1 = x10_5
                                    x10_5 -= 1
                                    x9_8 = &x9_8[1]
                                    
                                    if (temp3_1 == 1)
                                        int32_t* x9_9 = &var_19f8
                                        uint64_t x10_6 = x8_18
                                        
                                        while (*x9_9 != j)
                                            uint64_t temp8_1 = x10_6
                                            x10_6 -= 1
                                            x9_9 = &x9_9[1]
                                            
                                            if (temp8_1 == 1)
                                                goto label_b30df0
                                        
                                        break
                            *x27_1 = DomExpansionsBitsetFromExpansions(&var_19f8, x1_15.d)
                        else if (var_19f8 != j)
                            uint64_t x9_7 = zx.q(x0_52)
                            int64_t x8_17 = 0
                            int32_t x11_4
                            
                            do
                                if (x9_7 - 1 == x8_17)
                                    goto label_b30d84
                                
                                x11_4 = var_19f4[x8_17]
                                x8_17 += 1
                            while (x11_4 != j)
                            
                            if (x8_17 u>= x9_7)
                                goto label_b30d84
                else if ((ProfileHasAnyPromos() & 1) != 0)
                    goto label_b30d3c
            
            SaveProfiles()
    else
        int32_t x8_2 = *(gCreateDlg + 0x2c)
        
        if (x8_2 == 1)
            int32_t* x20_4 = ExpansionEnumerator::begin()
            int64_t x0_27 = ExpansionEnumerator::end()
            
            if (x20_4 != x0_27)
                int32_t x24_1 = 1
                
                do
                    int32_t i_2 = *x20_4
                    
                    if (i_2 != 2)
                        int32_t x0_32 =
                            DomExpansionsFromBitset(zx.q(*(GetActiveProfile() + 0x428c)), &var_19f8)
                        int32_t x28_1
                        
                        if (x0_32 s>= 1)
                            if (var_19f8 == i_2)
                                x28_1 = 1
                                
                                if (i_2 == 0x13)
                                    goto label_b30b20
                                
                                goto label_b30bcc
                            
                            uint64_t x8_9 = zx.q(x0_32)
                            int64_t x9_5 = 0
                            int32_t x11_3
                            
                            do
                                if (x8_9 - 1 == x9_5)
                                    x28_1 = x8_9 u< x8_9 ? 1 : 0
                                    
                                    if (i_2 == 0x13)
                                        goto label_b30b20
                                    
                                    goto label_b30bcc
                                
                                x11_3 = var_19f4[x9_5]
                                x9_5 += 1
                            while (x11_3 != i_2)
                            x28_1 = x9_5 u< x8_9 ? 1 : 0
                            
                            if (i_2 == 0x13)
                                goto label_b30b20
                            
                            goto label_b30bcc
                        
                        x28_1 = 0
                        
                        if (i_2 != 0x13)
                        label_b30bcc:
                            
                            if ((ProfileHasEntitlementForExpansion(zx.q(i_2), nullptr) & 1) != 0)
                                if (x24_1 == 0 || x28_1 == 1)
                                    goto label_b30b2c
                                
                                x24_1 -= 1
                        else
                        label_b30b20:
                            
                            if ((ProfileHasAnyPromos() & 1) != 0)
                            label_b30b2c:
                                int32_t* x28_2 = GetActiveProfile() + 0x428c
                                int32_t x0_36 = DomExpansionsFromBitset(zx.q(*x28_2), &var_19f8)
                                uint64_t x1_7 = zx.q(x0_36)
                                uint64_t x8_8
                                
                                if (x0_36 s< 1)
                                    x8_8 = sx.q(x1_7.d)
                                label_b30c08:
                                    x1_7 = zx.q(x1_7.d + 1)
                                    (&var_19f8)[x8_8] = i_2
                                else
                                    x8_8 = zx.q(x1_7.d)
                                    int32_t* x9_3 = &var_19f8
                                    uint64_t x10_1 = x8_8
                                    
                                    while (true)
                                        if (*x9_3 == i_2)
                                            x1_7 = sx.q(x1_7.d) - 1
                                            *x9_3 = (&var_19f8)[x1_7]
                                            break
                                        
                                        uint64_t temp2_1 = x10_1
                                        x10_1 -= 1
                                        x9_3 = &x9_3[1]
                                        
                                        if (temp2_1 == 1)
                                            int32_t* x9_4 = &var_19f8
                                            uint64_t x10_2 = x8_8
                                            
                                            while (*x9_4 != i_2)
                                                uint64_t temp7_1 = x10_2
                                                x10_2 -= 1
                                                x9_4 = &x9_4[1]
                                                
                                                if (temp7_1 == 1)
                                                    goto label_b30c08
                                            
                                            break
                                *x28_2 = DomExpansionsBitsetFromExpansions(&var_19f8, x1_7.d)
                    
                    x20_4 = &x20_4[1]
                while (x20_4 != x0_27)
        else if (x8_2 == 0)
            *(GetActiveProfile() + 0x428c) = 0
        
        DomMapClearCache()
        SaveProfiles()

XString::XString(&var_19f8)
int32_t x0_41 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_41 & 1) != 0)
    int32_t x20_6 = *DomExpDefGetByIndex(*(arg1 + 0x10))
    GameDlgManagerDismiss(7, false)
    
    if (x20_6 != 0x13)
        int64_t x0_44 = StoreItemIndexToDlc(0, *(arg1 + 0x10), 0)
        uint32_t x8_13 = *gKingdomExpansionStyle
        int64_t x1_14
        int64_t x2_2
        
        if (x8_13 == 1)
            x1_14 = 0x11
            x2_2 = 0x7f1
        else if (x8_13 == 3)
            x1_14 = 0x11
            x2_2 = 0x7e1
        else if (x8_13 != 2)
            x1_14 = 0x10
            x2_2 = 0
        else
            x1_14 = 0x13
            x2_2 = 0x7f1
        
        StoreItemDlgOpen(x0_44, x1_14, x2_2)
    else
        uint32_t x8_12 = *gKingdomExpansionStyle
        
        if (x8_12 == 1)
            GameDialogOpenStore(2, 0x11, 0x7f1)
        else if (x8_12 != 2)
            GameDialogOpenStore(2, 0x10, 0)
        else
            GameDialogOpenStore(2, 0x13, 0x7f1)

XString::XString(&var_19f8)
int32_t x0_58 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_58 & 1) != 0)
    ShowTaptip(zx.q(*arg1))
    *(gCreateDlg + 0x68) = 1
    *(gCreateDlg + 0x6c) = *(arg1 + 0x10)

XString::XString(&var_19f8)
int32_t x0_62 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_62 & 1) != 0)
    ClearTaptip()
    int32_t x22_2 = *DomExpDefGetByIndex(*(gCreateDlg + 0x6c))
    GameSetup* x0_65 = GetActiveGameSetup()
    DomSetupConfigFromString(XString::operator char const*(), *(x0_65 + 0x28))
    
    for (int64_t i_3 = 0; i_3 != 0x200; i_3 += 0x10)
        int32_t x9_12 = *(&var_19f8 + i_3 + 0x9c8)
        
        if (x9_12 == 0)
            break
        
        if (x9_12 == x22_2)
            *(&var_19f8 + i_3 + 0x9cc) = 0
    
    SaveSetupData(x0_65, &var_19f8)

XString::XString(&var_19f8)
int32_t x0_71 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_71 & 1) != 0)
    ClearTaptip()
    int32_t x22_3 = *DomExpDefGetByIndex(*(gCreateDlg + 0x6c))
    GameSetup* x0_74 = GetActiveGameSetup()
    DomSetupConfigFromString(XString::operator char const*(), *(x0_74 + 0x28))
    
    for (int64_t i_4 = 0; i_4 != 0x200; i_4 += 0x10)
        int32_t x10_8 = *(&var_19f8 + i_4 + 0x9c8)
        
        if (x10_8 == 0)
            break
        
        if (x10_8 == x22_3)
            *(&var_19f8 + i_4 + 0x9cc) = 1
    
    SaveSetupData(x0_74, &var_19f8)

XString::XString(&var_19f8)
int32_t x0_80 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_80 & 1) != 0)
    ClearTaptip()
    int32_t x22_4 = *DomExpDefGetByIndex(*(gCreateDlg + 0x6c))
    GameSetup* x0_83 = GetActiveGameSetup()
    DomSetupConfigFromString(XString::operator char const*(), *(x0_83 + 0x28))
    
    for (int64_t i_5 = 0; i_5 != 0x200; i_5 += 0x10)
        int32_t x10_11 = *(&var_19f8 + i_5 + 0x9c8)
        
        if (x10_11 == 0)
            break
        
        if (x10_11 == x22_4)
            *(&var_19f8 + i_5 + 0x9cc) = 2
    
    SaveSetupData(x0_83, &var_19f8)

XString::XString(&var_19f8)
int32_t x0_89 = operator==(&var_19f8, *(arg1 + 8))
XString::~XString()

if ((x0_89 & 1) != 0)
    int32_t i_6 = *DomExpDefGetByIndex(*(arg1 + 0x10))
    void* x0_92 = GetActiveProfile()
    uint32_t x8_20 = *gKingdomExpansionStyle
    
    if (x8_20 - 1 u<= 1)
        int32_t x0_94 = DomExpansionsFromBitset(zx.q(*(x0_92 + 0x7568)), &var_19f8)
        uint64_t x1_35 = zx.q(x0_94)
        uint64_t x8_21
        
        if (x0_94 s< 1)
            x8_21 = sx.q(x1_35.d)
        label_b311d4:
            x1_35 = zx.q(x1_35.d + 1)
            (&var_19f8)[x8_21] = i_6
        else
            x8_21 = zx.q(x1_35.d)
            int32_t* x9_14 = &var_19f8
            uint64_t x10_14 = x8_21
            
            while (true)
                if (*x9_14 == i_6)
                    x1_35 = sx.q(x1_35.d) - 1
                    *x9_14 = (&var_19f8)[x1_35]
                    break
                
                uint64_t temp0_1 = x10_14
                x10_14 -= 1
                x9_14 = &x9_14[1]
                
                if (temp0_1 == 1)
                    int32_t* x9_15 = &var_19f8
                    uint64_t x10_15 = x8_21
                    
                    while (*x9_15 != i_6)
                        uint64_t temp4_1 = x10_15
                        x10_15 -= 1
                        x9_15 = &x9_15[1]
                        
                        if (temp4_1 == 1)
                            goto label_b311d4
                    
                    break
        *(x0_92 + 0x7568) = DomExpansionsBitsetFromExpansions(&var_19f8, x1_35.d)
    else if (x8_20 != 3)
        GameSetup* x0_99 = GetActiveGameSetup()
        ToggleExpansion(DomSetupConfigFromString(XString::operator char const*(), *(x0_99 + 0x28)), 
            &var_1030, zx.q(i_6), &var_e30)
        SaveSetupData(x0_99, &var_19f8)
    else
        int32_t i_7 = *DomExpDefGetByIndex(*(arg1 + 0x10) + 1)
        int32_t x0_98 = DomExpansionsFromBitset(zx.q(*(x0_92 + 0x428c)), &var_19f8)
        uint64_t x1_37 = zx.q(x0_98)
        uint64_t x8_23
        
        if (x0_98 s< 1)
            x8_23 = sx.q(x1_37.d)
        label_b31210:
            x1_37 = zx.q(x1_37.d + 1)
            (&var_19f8)[x8_23] = i_7
        else
            x8_23 = zx.q(x1_37.d)
            int32_t* x9_16 = &var_19f8
            uint64_t x10_16 = x8_23
            
            while (true)
                if (*x9_16 == i_7)
                    x1_37 = sx.q(x1_37.d) - 1
                    *x9_16 = (&var_19f8)[x1_37]
                    break
                
                uint64_t temp1_1 = x10_16
                x10_16 -= 1
                x9_16 = &x9_16[1]
                
                if (temp1_1 == 1)
                    int32_t* x9_17 = &var_19f8
                    uint64_t x10_17 = x8_23
                    
                    while (*x9_17 != i_7)
                        uint64_t temp5_1 = x10_17
                        x10_17 -= 1
                        x9_17 = &x9_17[1]
                        
                        if (temp5_1 == 1)
                            goto label_b31210
                    
                    break
        *(x0_92 + 0x428c) = DomExpansionsBitsetFromExpansions(&var_19f8, x1_37.d)
        DomMapClearCache()
    
    SaveProfiles()

return 0
