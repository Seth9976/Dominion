// 函数: _Z20GameCreateGameCommitRK13UI2CommitInfo
// 地址: 0x9babcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameSetup* x0 = GetActiveGameSetup()
*(x0 + 0x28) = GameLatestVersion(4, true)
return GameSpecific_GameCreateCommit(gCreateDlg, arg1, x0) __tailcall
