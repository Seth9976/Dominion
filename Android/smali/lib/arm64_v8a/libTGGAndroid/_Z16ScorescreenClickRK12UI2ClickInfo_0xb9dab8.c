// 函数: _Z16ScorescreenClickRK12UI2ClickInfo
// 地址: 0xb9dab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_50
XString::XString(&var_50)

if ((operator==(&var_50, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        ToggleScore()
else
    XString::~XString()
    ToggleScore()

XString::XString(&var_50)
int32_t x0_5 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    int32_t* x0_6 = ActiveGame()
    
    if ((zx.d(x0_6[8].b) & 4) != 0)
        XOpenURL("https://discord.com/channels/609163450077151233/1001235513635782777")
    else
        IsCampaignMission(zx.q(*x0_6), &var_50)
        ToggleScore()
        DomGameRematch(true)

XString::XString(&var_50)
int32_t x0_10 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_10 & 1) != 0)
    int32_t* x0_11 = ActiveGame()
    int32_t x20_6
    
    if ((zx.d(x0_11[8].b) & 4) != 0)
        x20_6 = 1
    else if ((IsCampaignMission(zx.q(*x0_11), &var_50) & 1) != 0)
        *(CampaignGetStatus() + sx.q(var_50) * 0xc + 8) = 0
        SaveProfiles()
        x20_6 = 2
    else if ((zx.d(*(x0_11 + 0x21)) & 1) != 0)
        x20_6 = 2
    else
        int32_t x0_50 = LocalWho()
        ActiveGame()
        int64_t (* x8_9)()
        
        if (x0_50 == 0xffffffff)
            x8_9 = gDomClient + 0x48
        else
            x8_9 = gDomClient + 0x48 + muls.dp.d(x0_50, 0x4d48)
        
        int32_t x22_1 = *(x8_9 + 0x20)
        int32_t x0_52 = PlayerResigned(x0_11, zx.q(x0_50))
        int64_t x9_2 = zx.q(x0_11[0x46d])
        char x8_10
        
        if ((x0_52 & 1) == 0)
            if (x9_2.d s>= 1)
                int64_t x21_2 = 0
                int64_t (* x23_1)() = gDomClient + 0x68
                
                do
                    if ((PlayerResigned(x0_11, zx.q(x21_2.d)) & 1) != 0)
                        x22_1 -= *x23_1 s< x22_1 ? 1 : 0
                    
                    x9_2 = sx.q(x0_11[0x46d])
                    x21_2 += 1
                    x23_1 += 0x4d48
                while (x21_2 s< x9_2)
                
                goto label_b9de88
            
        label_b9df28:
            x8_10 = 1
        else
            x22_1 = -1
        label_b9de88:
            x8_10 = 1
            
            if (x9_2.d s>= 1)
                uint64_t x9_3 = zx.q(x9_2.d)
                void* x10_1 = &x0_11[0x1d]
                
                while (true)
                    int32_t x12_2 = *x10_1 - 0x3e9
                    
                    if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                        x8_10 = 0
                        break
                    
                    uint64_t temp0_1 = x9_3
                    x9_3 -= 1
                    x10_1 += 0x22c
                    
                    if (temp0_1 == 1)
                        goto label_b9df28
        
        GameTryPromptReview((x22_1 == 1 ? 1 : 0).b & x8_10)
        x20_6 = 0
    
    ActiveGameComplete_Retire()
    GameQueueExit(zx.q(x20_6), false)

XString::XString(&var_50)
int32_t x0_18 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_18 & 1) != 0)
    ToggleScore()
    void* x0_19 = ActiveGame()
    
    if ((zx.d(*(x0_19 + 0x20)) & 4) != 0)
        GetActiveGameDate(&var_50)
        TryReplayDaily(&var_50, zx.q(GameSetupMinAILevel(x0_19 + 8)), true)
    else
        DomGameRematch(false)

XString::XString(&var_50)
int32_t x0_26 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_26 & 1) != 0)
    GameDlgManagerShow(0x29, 5)

XString::XString(&var_50)
int32_t x0_29 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_29 & 1) != 0)
    XGetSaveGameFolder(true)
    XFormatString("%sdominion.png")
    TwitterExportDeck(gDomClient + 0x20728, ActiveGame(), XString::operator char const*())
    XString::~XString()

XString::XString(&var_50)
int32_t x0_36 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_36 & 1) != 0)
    int32_t x8_5 = *(gDomClient + 0x38)
    uint64_t x1_19
    
    if (x8_5 == 0xffffffff)
        x1_19 = 0
    else
        x1_19 = zx.q(x8_5)
    
    int32_t x0_38 = PlayerSeatToWho(zx.q(*(arg1 + 0x10)), x1_19)
    *(gScoreDlg + 0x232f8) = 1
    *(gScoreDlg + 0x232fc) = x0_38
    *(gScoreDlg + 0x23300) = 0
    CalcPlayerScoreInfo(gDomClient + 0x20728, gScoreDlg)
    GameDlgManagerShow(0x7eb, 5)

XString::XString(&var_50)
int32_t x0_42 = operator==(&var_50, *(arg1 + 8))
XString::~XString()

if ((x0_42 & 1) != 0)
    int32_t x8_6 = *(gDomClient + 0x38)
    uint64_t x1_23
    
    if (x8_6 == 0xffffffff)
        x1_23 = 0
    else
        x1_23 = zx.q(x8_6)
    
    int32_t x0_44 = PlayerSeatToWho(zx.q(*(arg1 + 0x10)), x1_23)
    PlayerConfig_V1* x0_47 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_44))
    GameCanAddFriend(x0_47)
    GameClientFriendOp(zx.q(*(x0_47 + 0x18)), 0)

return 0
