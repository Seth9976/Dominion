// 函数: _Z20CampaignHomeDlgClickRK12UI2ClickInfo
// 地址: 0xb982c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
int64_t var_18
XString::XString(&var_18)

if ((operator==(x20, &var_18) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(3, 5)
else
    XString::~XString()
    GameDlgManagerShow(3, 5)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_5 = operator==(x20_2, &var_18)
XString::~XString()

if ((x0_5 & 1) != 0)
    *(GetActiveProfile() + 0x3528) = 1
    SaveProfiles()

char* x20_4 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_9 = operator==(x20_4, &var_18)
XString::~XString()

if ((x0_9 & 1) != 0)
    *(gCampaignDlg + 0x502c) = 0
    CampaignClear(CampaignGetStatus())
    int64_t x0_11 = DomMapCreateCached()
    *(gCampaignDlg + 8) = x0_11.d
    
    if (x0_11.d != 0)
        memcpy(gCampaignDlg + 0xc, DomMapGetIncomplete(x0_11), 0x5020)
        void* x0_14 = GetActiveProfile()
        ToCampaignString(gCampaignDlg + 0xc, x0_14 + 0x3530, x0_14 + 0x3538)
        SaveProfiles()
    
    GameDlgManagerShow(0x7e3, 5)

char* x20_7 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_18 = operator==(x20_7, &var_18)
XString::~XString()

if ((x0_18 & 1) != 0)
    DomGetExpansions(&var_18)
    CampaignOfficial(zx.q(*(var_18 + sx.q(*(arg1 + 0x10)) * 0x28 + 0x28)))
    GameDlgManagerShow(0x7e3, 5)

char* x20_9 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_23 = operator==(x20_9, &var_18)
XString::~XString()

if ((x0_23 & 1) != 0)
    *(GetActiveProfile() + 0x3528) = 0
    SaveProfiles()

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_27 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_27 & 1) != 0)
    *gKingdomExpansionStyle = 3
    GameDlgManagerShow(0x7ee, 7)

return 0
