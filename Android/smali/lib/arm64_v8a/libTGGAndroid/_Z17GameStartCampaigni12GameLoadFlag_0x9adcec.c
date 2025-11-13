// 函数: _Z17GameStartCampaigni12GameLoadFlag
// 地址: 0x9adcec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CampaignStatus* x0 = CampaignGetStatus()
int32_t x20 = *(x0 + muls.dp.d(arg1, 0xc) + 8)
int32_t* x24 = GetClient() + 0x5068
int32_t var_1210

if (x20 == 0)
    memset(&var_1210, 0, 0x11b0)
    XString::XString()
    XString::XString()
    XString::XString()
    int32_t var_1214
    int32_t x0_8 = IsWeeklyCampaign(x0, &var_1214)
    void* x0_9
    int64_t x8_1
    
    if ((x0_8 & 1) == 0)
        int32_t var_11b0_2 = 0x3e8
        x0_9 = GetActiveProfile()
        x8_1 = 0x4320
    else
        int32_t var_11b0_1 = 1
        x0_9 = GetActiveProfile()
        x8_1 = 0x42ac
    
    int32_t var_11ac_1 = *(x0_9 + x8_1)
    uint64_t x1_2 = zx.q(*x0)
    int32_t var_f84_1 = 3
    int32_t var_f80_1 = x1_2.d
    GameSetupSetAILevel(&var_1210, x1_2)
    int32_t x8_4
    int32_t var_11f8
    
    if (arg1 == 9 || arg1 == 4)
        void var_1440
        void var_11c4
        memcpy(&var_1440, &var_11c4, 0x22c)
        void var_f98
        memcpy(&var_11c4, &var_f98, 0x22c)
        memcpy(&var_f98, &var_1440, 0x22c)
        x8_4 = var_11f8 | 0x42
    else
        x8_4 = var_11f8 | 2
    int32_t x9_1
    
    if ((x0_8 & 1) != 0)
        x9_1 = 0x180
    else
        x9_1 = 0x80
    
    int32_t var_11f8_1 = x8_4 | x9_1
    int32_t var_11fc_1 = 0
    int32_t var_11e8_1 = GameLatestVersion(4, false)
    CampaignGetMissionSetup(arg1)
    void var_11d8
    XString::operator=(&var_11d8)
    XString::~XString()
    int32_t var_64_1 = 2
    int32_t* x8_7 = GetActiveProfile() + 0x4330
    int32_t x11_1 = x8_7[1]
    int32_t x9_2 = x8_7[2]
    int32_t x10_1 = *x8_7
    int32_t x9_3
    
    x9_3 = x9_2 s> 1 ? x9_2 : 1
    
    int32_t x12_1
    
    x12_1 = x11_1 s> x10_1 ? x10_1 : x11_1
    
    if (x9_3 s<= neg.d(x12_1))
        if (x11_1 s<= x10_1)
            x9_3 = neg.d(x11_1)
        else
            x9_3 = neg.d(x10_1)
    
    int32_t x27_1 = neg.d(x9_3)
    x8_7[2] = x9_3 + 1
    *x24 = 1
    x24[1] = x27_1
    x24[0x10] = x27_1
    *(x0 + muls.dp.d(arg1, 0xc) + 8) = x27_1
    LocalGameInitNew(&var_1210, &x24[0x10], 2, 0xffffffff, 0)
    GameStartSmartplays(&x24[0x10])
    GameSpecific_Load(&x24[0x10], LOAD_START, zx.q(arg2))
    
    if ((x0_8 & 1) == 0)
        LocalGameSave(&x24[0x10], x27_1)
    else
        int32_t var_11fc_2 = arg1 | var_1214 << 4
        GameClientCreateNewtorkBackedCampaignMission(&var_1210)
    
    SaveProfiles()
    XString::~XString()
    XString::~XString()
    XString::~XString()
else
    int32_t x8 = *(x0 + muls.dp.d(arg1, 0xc) + 8)
    *x24 = 1
    x24[1] = x8
    x24[0x10] = x8
    
    if ((LocalGameLoad(x24, &x24[0x10]) & 1) == 0)
        return 0
    
    if (x24[0x1c] s>= GameMinimumVersion(GameSpecific_GameType(), false))
        GameSpecific_Load(&x24[0x10], LOAD_ALL, 0)
        
        if (var_1210 == 1)
            return 0
    else
        GameMsgBoxTranslated("dom_msg_out_of_date_header", "dom_msg_game_out_of_date_body", 0x20, 
            nullptr, nullptr, nullptr, nullptr)
return 1
