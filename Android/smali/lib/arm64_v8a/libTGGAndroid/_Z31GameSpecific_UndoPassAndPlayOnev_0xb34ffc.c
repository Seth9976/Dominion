// 函数: _Z31GameSpecific_UndoPassAndPlayOnev
// 地址: 0xb34ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_2c
int32_t x0 = DomLogGetLastPlayerDecision(0xffffffff, &var_2c)
DomMinimizePileAny()
GameDlgManagerDismiss(2, false)
GameDlgManagerDismiss(5, (not.d(GameDlgManagerDialogActive(0x29, 5))).b & 1)
return GameUndo(ActiveGame(), x0)
