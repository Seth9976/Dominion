// 函数: sub_9cbf88
// 地址: 0x9cbf88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_1 = GetActiveProfile()
XString::operator=(x0_1)
SaveProfiles()
GameDlgManagerDismiss(7, false)
GameClientTryLogin()
*(gGameDlgManager + 0xc8) = 0x13
*gMultiplayerDlg = HaveAnyActiveGames() & 1
*(gMultiplayerDlg + 8) = 0
XString::operator=(gMultiplayerDlg + 0x198)
GameClientQueryGames()
NotificationsRequestPermission()
int64_t var_38 = *(x0_1 + 0x42c8)
char var_30[0x10]
SafeStrcpy(&var_30, XString::operator char const*(), 0x10)
NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42bf, 0x18, &var_38)
SaveProfiles()
return GameClientTryLogin()
