// 函数: _Z18MultiplayerDlgOpen20MultiplayerOpenStyle
// 地址: 0x9be3d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gGameDlgManager + 0xc8) = 0x13

if (arg1 u> 4)
    pthread_kill(pthread_self(), 6)
    return NameAddClick(XNoReturn()) __tailcall

switch (arg1)
    case 0, 3
        *gMultiplayerDlg = HaveAnyActiveGames() & 1
        *(gMultiplayerDlg + 8) = 0
    case 2, 4
        *gMultiplayerDlg = 1
        *(gMultiplayerDlg + 8) = 0

XString::operator=(gMultiplayerDlg + 0x198)
return GameClientQueryGames() __tailcall
