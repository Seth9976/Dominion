// 函数: _Z14PauseMenuClickRK12UI2ClickInfo
// 地址: 0x9c0434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_28
XString::XString(&var_28)
char var_30

if ((operator==(&var_28, *(arg1 + 8)) & 1) != 0)
    XString::~XString()
    GameDlgManagerDismiss(5, false)
else
    XString::XString(&var_30)
    
    if ((operator==(&var_30, *(arg1 + 8)) & 1) == 0)
        char var_38
        XString::XString(&var_38)
        int32_t x0_47 = operator==(&var_38, *(arg1 + 8))
        int32_t x21_1 = *(arg1 + 0x20)
        XString::~XString()
        XString::~XString()
        XString::~XString()
        
        if ((x0_47 & 1) != 0 || x21_1 == 2)
            GameDlgManagerDismiss(5, false)
    else
        XString::~XString()
        XString::~XString()
        GameDlgManagerDismiss(5, false)

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0xe

XString::XString(&var_28)
int32_t x0_11 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0xe

XString::XString(&var_28)
int32_t x0_14 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_14 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0x17

XString::XString(&var_28)
int32_t x0_17 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_17 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0x28

XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    XString::XString(&var_30)
    int32_t x0_23 = operator==(&var_30, *(arg1 + 8))
    XString::~XString()
    XString::~XString()
    
    if ((x0_23 & 1) != 0)
        goto label_9c05f8
else
    XString::~XString()
label_9c05f8:
    GameDlgManagerDismiss(5, false)
    
    if ((GameSpecific_ResignDialog() & 1) == 0)
        *(gGameDlgManager + 0x118) = 0x20
        L("dom_msg_resign_header", nullptr)
        XString::operator=(gGameDlgManager + 0x1b8)
        L("dom_msg_resign_body", nullptr)
        XString::operator=(gGameDlgManager + 0x1c0)
        L("dom_msg_resign_ok", nullptr)
        XString::operator=(gGameDlgManager + 0x1c8)
        L(&data_793a18, nullptr)
        XString::operator=(gGameDlgManager + 0x1d0)
        *(gGameDlgManager + 0x1d8) = sub_9cbde0
        *(gGameDlgManager + 0x1e0) = 0

XString::XString(&var_28)
int32_t x0_35 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_35 & 1) != 0)
    GameSave* x0_36 = ActiveGame()
    
    if ((GameSpecific_IsGameOver(x0_36) & 1) != 0)
        ActiveGameComplete_Retire()
    
    int32_t x0_39 = IsCampaignMission(zx.q(*x0_36), &var_28)
    *(GetClient() + 0x5044) = 7
    *(GetClient() + 0x5064) = 0
    void* x0_42 = GetClient()
    int32_t x8_1
    
    if ((x0_39 & 1) != 0)
        x8_1 = 2
    else
        x8_1 = 0
    
    *(x0_42 + 0x5060) = x8_1

GameSpecific_PauseMenuClick(arg1)
return 0
