// 函数: _Z17ResignSurveyClickRK12UI2ClickInfo
// 地址: 0xba2ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(7, false)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)

XString::XString(&var_18)
int32_t x0_5 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    GameDlgManagerDismiss(7, false)
    ResignActiveGame()
    ToggleScore()

XString::XString(&var_18)
int32_t x0_8 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    GameDlgManagerDismiss(7, false)
    XOpenURL("https://discord.com/channels/609163450077151233/1245133481877704945")

XString::XString(&var_18)
int32_t x0_11 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    GameDlgManagerDismiss(7, false)
    GameDlgManagerShow(0x7f1, 7)
    *gMatchmakingSettingsDlg = 1

return 0
