// 函数: _Z22NotificationPanelClickRK12UI2ClickInfo
// 地址: 0x9c994c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)
int32_t x0_2 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    int64_t x0_4 = GameIdxLookupByDBID(zx.q(*(gNotificationDlg + 8)))
    
    if (x0_4.d != 0)
        int32_t x19_2 = x0_4.d
        
        if (*(GetMultplayerGameByIndex(x0_4) + 0x2c) != 1)
            *gCreateDlg = zx.o(0)
            *(gCreateDlg + 0x10) = zx.o(0)
            *(gCreateDlg + 0x70) = 0
            *(gCreateDlg + 0x50) = zx.o(0)
            *(gCreateDlg + 0x60) = zx.o(0)
            *(gCreateDlg + 0x30) = zx.o(0)
            *(gCreateDlg + 0x40) = zx.o(0)
            *(gCreateDlg + 0x20) = zx.o(0)
            *(gCreateDlg + 0x10) = x19_2
            *gCreateDlg = 2
            *(gCreateDlg + 8) = 0
            GameSetup* x0_8 = GetActiveGameSetup()
            *(x0_8 + 0x28) = GameLatestVersion(4, true)
            GameSpecific_CreateGameShow(gCreateDlg, x0_8)
            *(gGameDlgManager + 0xc8) = 0x10
            return 0
        
        GameResumeMultiplayer(zx.q(x19_2))

return 0
