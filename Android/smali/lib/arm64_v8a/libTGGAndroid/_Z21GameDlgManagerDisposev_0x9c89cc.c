// 函数: _Z21GameDlgManagerDisposev
// 地址: 0x9c89cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2Free(gGameDlgManager + 8)
UI2Free(gGameDlgManager + 0x18)
UI2Free(gGameDlgManager + 0x30)
UI2Free(gGameDlgManager + 0x40)
UI2Free(gGameDlgManager + 0x58)
UI2Free(gGameDlgManager + 0x68)
UI2Free(gGameDlgManager + 0x80)
UI2Free(gGameDlgManager + 0x90)
UI2Free(gGameDlgManager + 0xa8)
UI2Free(gGameDlgManager + 0xb8)
UI2Free(gGameDlgManager + 0xd0)
UI2Free(gGameDlgManager + 0xe0)
UI2Free(gGameDlgManager + 0xf8)
UI2Free(gGameDlgManager + 0x108)
UI2Free(gGameDlgManager + 0x120)
UI2Free(gGameDlgManager + 0x130)
UI2Free(gGameDlgManager + 0x148)
UI2Free(gGameDlgManager + 0x158)
UI2Free(gGameDlgManager + 0x170)
UI2Free(gGameDlgManager + 0x180)
UI2Free(gGameDlgManager + 0x198)
UI2Free(gGameDlgManager + 0x1a8)
XString::operator=(gFriendDlg + 0x10)
XString::operator=(gGameDlgManager + 0x1b8)
XString::operator=(gGameDlgManager + 0x1c0)
XString::operator=(gGameDlgManager + 0x1c8)
XString::operator=(gGameDlgManager + 0x1d0)
void* result = *gLoadingScreen

if (result != 0)
    void* i
    
    do
        i = *(result + 8)
        XPooledFree(result, 0x18)
        result = i
    while (i != 0)

*gLoadingScreen = 0
*(gLoadingScreen + 8) = 0
*(gLoadingScreen + 0x10) = 0
return result
