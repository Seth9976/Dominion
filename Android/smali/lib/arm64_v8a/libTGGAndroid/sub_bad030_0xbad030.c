// 函数: sub_bad030
// 地址: 0xbad030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGameUndo(*gDecisionIndexToUndo, 0)
GameSave* x0_1 = ActiveGame()
*(x0_1 + 0x20) |= 1
return LocalGameSave(x0_1, *(GetClient() + 0x506c)) __tailcall
