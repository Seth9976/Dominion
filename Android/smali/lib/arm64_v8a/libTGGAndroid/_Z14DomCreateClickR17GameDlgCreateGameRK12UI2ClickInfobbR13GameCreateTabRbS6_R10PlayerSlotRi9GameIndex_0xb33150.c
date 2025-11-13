// 函数: _Z14DomCreateClickR17GameDlgCreateGameRK12UI2ClickInfobbR13GameCreateTabRbS6_R10PlayerSlotRi9GameIndex
// 地址: 0xb33150
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg4.d
int32_t x22 = arg3.d
GameSetup* x0 = GetActiveGameSetup()
int32_t x22_1
int128_t var_3380
char var_19f0[0xa0]

if (*(arg2 + 0x20) != 9)
    int32_t var_3384
    int32_t x0_9 = CardsetIsZoomed(*(gDomClient + 0x82e30), &var_3384)
    
    if (*(arg2 + 0x20) != 2)
        char* fp_1 = *(arg2 + 8)
        XString::XString(&var_19f0)
        int32_t x0_12 = operator==(fp_1, &var_19f0)
        XString::~XString()
        
        if ((x0_12 & x0_9 & 1) == 0)
            if (*(arg2 + 0x20) == 2)
                goto label_b33308
            
            char* x28_2 = *(arg2 + 8)
            XString::XString(&var_19f0)
            int32_t x0_16 = operator==(x28_2, &var_19f0)
            XString::~XString()
            
            if ((x0_16 & 1) != 0)
                goto label_b33308
        else
            CardsetZoom(*(gDomClient + 0x82e30), 0xffffffff)
    else if ((x0_9 & 1) != 0)
        CardsetZoom(*(gDomClient + 0x82e30), 0xffffffff)
    else
    label_b33308:
        
        if (zx.d(*arg7) == 0)
            if ((x22 & 1) == 0)
                GameDlgManagerShow(3, 5)
            else
                MultiplayerDlgOpen(1)
            
            SaveProfiles()
        else
            *arg7 = false
    
    char* x28_4 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_19 = operator==(x28_4, &var_19f0)
    XString::~XString()
    
    if ((x0_19 & 1) != 0)
        *(x0 + 0xc) = 0
        *(x0 + 0x10) = 0
    
    char* x28_6 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_22 = operator==(x28_6, &var_19f0)
    XString::~XString()
    
    if ((x0_22 & 1) != 0)
        int64_t x28_8 = sx.q(*(x0 + 0x10))
        *(gDomSetSave + 8) = 2
        *(gDomSetSave + 0xc) = x28_8.d
        
        if (x28_8.d == 0xffffffff)
            XString::operator=(gDomSetSave)
        else
            GetActiveProfile()
            XString::operator=(gDomSetSave)
        
        GameDlgManagerShow(0x7f0, 7)
    
    char* x28_9 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_28 = operator==(x28_9, &var_19f0)
    XString::~XString()
    
    if ((x0_28 & 1) != 0)
        *(x0 + 0x20) = 5
    
    char* x28_11 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_31 = operator==(x28_11, &var_19f0)
    XString::~XString()
    
    if ((x0_31 & 1) != 0)
        *(x0 + 0x20) = 1
    
    char* x28_13 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_34 = operator==(x28_13, &var_19f0)
    XString::~XString()
    
    if ((x0_34 & 1) != 0)
        *(x0 + 0x20) = 2
    
    char* x28_15 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_37 = operator==(x28_15, &var_19f0)
    XString::~XString()
    
    if ((x0_37 & 1) != 0)
        *(x0 + 0x20) = 3
    
    char* x28_17 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_40 = operator==(x28_17, &var_19f0)
    XString::~XString()
    
    if ((x0_40 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_2f8_1 = 0
        SaveSetupData(x0, &var_19f0)
    
    char* x28_19 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_45 = operator==(x28_19, &var_19f0)
    XString::~XString()
    
    if ((x0_45 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_2f8_2 = 1
        SaveSetupData(x0, &var_19f0)
    
    char* x28_21 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_50 = operator==(x28_21, &var_19f0)
    XString::~XString()
    
    if ((x0_50 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_2f8_3 = 2
        SaveSetupData(x0, &var_19f0)
    
    char* x28_23 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_55 = operator==(x28_23, &var_19f0)
    XString::~XString()
    
    if ((x0_55 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_2f8_4 = 3
        SaveSetupData(x0, &var_19f0)
    
    char* x28_25 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_60 = operator==(x28_25, &var_19f0)
    XString::~XString()
    
    if ((x0_60 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_2f8_5 = 4
        SaveSetupData(x0, &var_19f0)
    
    char* x28_27 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_65 = operator==(x28_27, &var_19f0)
    XString::~XString()
    
    if ((x0_65 & 1) != 0)
        GameDlgManagerShow(0x7ed, 7)
    
    char* x28_29 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_68 = operator==(x28_29, &var_19f0)
    XString::~XString()
    
    if ((x0_68 & 1) != 0)
        *gKingdomExpansionStyle = 0
        GameDlgManagerShow(0x7ee, 7)
    
    char* x28_31 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_71 = operator==(x28_31, &var_19f0)
    XString::~XString()
    
    if ((x0_71 & 1) != 0)
        GameDlgManagerShow(0x7ef, 7)
    
    char* x28_33 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_74 = operator==(x28_33, &var_19f0)
    XString::~XString()
    
    if ((x0_74 & 1) != 0)
        *(gDomSetSave + 8) = -0x100000000
        XString::operator=(gDomSetSave)
        GameDlgManagerShow(0x7f0, 7)
    
    char* x28_35 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_78 = operator==(x28_35, &var_19f0)
    XString::~XString()
    
    if ((x0_78 & 1) != 0)
        *arg6 = false
    
    char* x28_37 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_81 = operator==(x28_37, &var_19f0)
    XString::~XString()
    
    if ((x0_81 & 1) != 0)
        *arg6 = true
    
    char* x27_1 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_84 = operator==(x27_1, &var_19f0)
    XString::~XString()
    int32_t var_e24
    
    if ((x0_84 & 1) != 0)
        GetKingdomConfig(x0)
        int32_t var_1950
        int32_t x8_7 = var_1950
        int32_t var_1908
        
        if (x8_7 != 0)
            int32_t var_18c0
            
            if (var_1908 == 0)
                x8_7 = 1
            else
                int32_t var_1878
                
                if (var_18c0 == 0)
                    x8_7 = 2
                else if (var_1878 != 0)
                    x8_7 = 4
                else
                    x8_7 = 3
        int32_t var_e20
        int32_t var_e18
        int32_t var_e10
        int32_t var_e08
        int32_t var_e00
        int32_t x8_15 = var_e20 + x8_7 + var_e18 + var_e10 + var_e08 + var_e00
        int32_t x8_16
        
        x8_16 = x8_15 s> var_e24 ? x8_15 : var_e24
        
        int32_t x8_17
        
        x8_17 = x8_16 s< 4 ? x8_16 : 4
        
        var_e24 = x8_17 + 1
        SaveSetupData(x0, &var_19f0)
    
    char* x27_3 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_89 = operator==(x27_3, &var_19f0)
    XString::~XString()
    
    if ((x0_89 & 1) != 0)
        *arg5 = 0
    
    char* x27_5 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_92 = operator==(x27_5, &var_19f0)
    XString::~XString()
    
    if ((x0_92 & 1) != 0)
        *arg5 = 1
    
    char* x27_7 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_95 = operator==(x27_7, &var_19f0)
    XString::~XString()
    
    if ((x0_95 & 1) != 0)
        *arg5 = 2
    
    char* x27_9 = *(arg2 + 8)
    XString::XString(&var_19f0)
    int32_t x0_98 = operator==(x27_9, &var_19f0)
    XString::~XString()
    
    if ((x0_98 & 1) != 0)
        *arg5 = 3
    
    XString::XString(&var_19f0)
    int32_t x0_101 = operator==(&var_19f0, *(arg2 + 8))
    XString::~XString()
    int64_t x0_102
    
    if ((x0_101 & 1) == 0)
        XString::XString(&var_19f0)
        int32_t x0_105 = operator==(&var_19f0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_105 & 1) != 0)
            UI2ClearFocus(true)
            x0_102 = 0x7e6
            *gCardGallery = data_71bdf0
            goto label_b33b80
        
        XString::XString(&var_19f0)
        int32_t x0_120 = operator==(&var_19f0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_120 & 1) != 0)
            GetKingdomConfig(x0)
            int64_t x27_15 = sx.q(*(arg2 + 0x10))
            __builtin_memset(&var_3380, 0, 0xa0)
            ToKingdomEntries(&var_19f0, &var_3380)
            GameCreateRemoveCard(x0, &var_19f0, &(&var_3380)[x27_15])
            goto label_b33b88
        
        XString::XString(&var_19f0)
        int32_t x0_129 = operator==(&var_19f0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_129 & 1) == 0)
            goto label_b33b88
        
        GetKingdomConfig(x0)
        int64_t x27_17 = sx.q(*(arg2 + 0x10))
        __builtin_memset(&var_3380, 0, 0x120)
        ToLandscapeEntries(&var_19f0, &var_3380)
        DomKingdomEntry* x2_2 = &var_3380 + x27_17 * 0x48
        
        if (*x2_2 != 0)
            GameCreateRemoveCard(x0, &var_19f0, x2_2)
            goto label_b33b88
        
        if (x27_17.d s>= 2 && var_e24 s>= 3)
            int32_t var_e24_1 = var_e24 - 1
            SaveSetupData(x0, &var_19f0)
            goto label_b33b88
        
    label_b33efc:
        pthread_kill(pthread_self(), 6)
        DomSetupConfig* x0_142
        bool x1_81
        x0_142, x1_81 = XNoReturn()
        return PasteDombotString(x0_142, x1_81) __tailcall
    
    UI2ClearFocus(true)
    x0_102 = 0x7e7
    *(gSetGallery + 4) = 2
label_b33b80:
    GameDlgManagerShow(x0_102, 7)
label_b33b88:
    int32_t x27_13 = arg10.d
    GameCreateClickPlayers(arg2, x0, arg7, arg8, arg9)
    XString::XString(&var_19f0)
    int32_t x0_109 = operator==(&var_19f0, *(arg2 + 8))
    XString::~XString()
    
    if ((x0_109 & 1) == 0)
        XString::XString(&var_19f0)
        int32_t x0_114 = operator==(&var_19f0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_114 & 1) == 0)
            x22_1 = 0
        else if ((x23 & 1) == 0)
            SaveProfiles()
            
            if ((x22 & 1) == 0)
                *(GetClient() + 0x5044) = 1
                GameDlgManagerDismiss(5, false)
                x22_1 = 0
            else
                GetActiveProfile()
                GameClientCreateMultiplayerGame(x0)
                
                if ((zx.d(*(x0 + 0x18)) & 0x20) == 0)
                    MultiplayerDlgOpen(2)
                    x22_1 = 0
                else
                    *arg5 = 0
                    x22_1 = 1
        else
            int32_t x0_116 = GameCreateButtonState(x0)
            
            if (x0_116 u> 8)
                goto label_b33efc
            
            switch (x0_116)
                case 0, 1, 4, 6, 7
                    goto label_b33efc
                case 2, 3
                    GameClientJoinNetworkGame(zx.q(x27_13))
                    MultiplayerDlgOpen(2)
                    x22_1 = 0
                case 5
                    GameClientStartNetworkGame(zx.q(x27_13))
                    x22_1 = 0
                    *(arg1 + 0xc) = 1
                case 8
                    GameResumeMultiplayer(zx.q(x27_13))
                    x22_1 = 0
    else if ((x23 & 1) == 0)
        CardsetClear(*(gDomClient + 0x82e30))
        int32_t x8_21 = *(x0 + 0x18)
        *(x0 + 0xc) = 0
        *(x0 + 0x10) = 0
        *(x0 + 0x18) = x8_21 & 0xffffffcf
        GetKingdomConfig(x0)
        DomClearKingdom(&var_19f0)
        SaveSetupData(x0, &var_19f0)
        x22_1 = 0
    else
        int32_t x0_111 = GameCreateButtonState(x0)
        uint64_t x0_134
        int64_t x1_69
        
        if (x0_111 - 4 u< 3)
            x1_69 = 1
            x0_134 = zx.q(x27_13)
        else if (x0_111 == 7)
            x1_69 = 4
            x0_134 = zx.q(x27_13)
        else
            if (x0_111 != 2)
                goto label_b33efc
            
            x0_134 = zx.q(x27_13)
            x1_69 = 0
        
        GameClientDismissNetworkGame(x0_134, x1_69)
        RemoveMultiplayerGame(zx.q(x27_13))
        MultiplayerDlgOpen(2)
        x22_1 = 0
else
    memcpy(&var_19f0, DEFAULT_SETUP, 0x1990)
    int32_t x0_3 = PasteDombotString(&var_19f0, (*(arg2 + 0x14) == 7 ? 1 : 0).b)
    x22_1 = x0_3
    
    if ((x0_3 & 1) != 0)
        GetKingdomConfig(x0)
        MergeSetup(x0, &var_3380, &var_19f0)
        SaveSetupData(x0, &var_3380)
        ValidateOwnership(x0, 4, 0)
        *arg5 = 1
        *arg6 = true
return zx.q(x22_1) & 1
