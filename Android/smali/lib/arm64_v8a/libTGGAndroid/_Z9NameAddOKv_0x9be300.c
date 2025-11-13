// 函数: _Z9NameAddOKv
// 地址: 0x9be300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = XString::operator char const*()

if (zx.d(*result) != 0)
    int32_t x8_1 = *(gNameDlg + 8)
    
    if (x8_1 != 0 && x8_1 != 2)
        if (x8_1 != 1)
            pthread_kill(pthread_self(), 6)
            return MultiplayerDlgOpen(XNoReturn()) __tailcall
        
        NewProfile()
    
    XString::operator=(GetActiveProfile())
    SaveProfiles()
    GameDlgManagerDismiss(7, false)
    result = GameClientTryLogin()
    int32_t x8_2 = *(gNameDlg + 8)
    
    if (x8_2 u>= 2)
        if (x8_2 != 2)
            pthread_kill(pthread_self(), 6)
            return MultiplayerDlgOpen(XNoReturn()) __tailcall
        
        *(gGameDlgManager + 0xc8) = 0x13
        *gMultiplayerDlg = HaveAnyActiveGames() & 1
        *(gMultiplayerDlg + 8) = 0
        XString::operator=(gMultiplayerDlg + 0x198)
        return GameClientQueryGames() __tailcall
    
    *(gGameDlgManager + 0xc8) = 5

return result
