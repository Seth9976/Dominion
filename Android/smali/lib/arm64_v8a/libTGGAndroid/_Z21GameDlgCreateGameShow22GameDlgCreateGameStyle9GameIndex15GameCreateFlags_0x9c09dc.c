// 函数: _Z21GameDlgCreateGameShow22GameDlgCreateGameStyle9GameIndex15GameCreateFlags
// 地址: 0x9c09dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gCreateDlg = zx.o(0)
*(gCreateDlg + 0x10) = zx.o(0)
*(gCreateDlg + 0x70) = 0
*(gCreateDlg + 0x50) = zx.o(0)
*(gCreateDlg + 0x60) = zx.o(0)
*(gCreateDlg + 0x30) = zx.o(0)
*(gCreateDlg + 0x40) = zx.o(0)
*(gCreateDlg + 0x20) = zx.o(0)
*(gCreateDlg + 0x10) = arg2
*gCreateDlg = arg1
*(gCreateDlg + 8) = arg3
GameSetup* x0 = GetActiveGameSetup()
*(x0 + 0x28) = GameLatestVersion(4, true)
int64_t result = GameSpecific_CreateGameShow(gCreateDlg, x0)
*(gGameDlgManager + 0xc8) = 0x10
return result
