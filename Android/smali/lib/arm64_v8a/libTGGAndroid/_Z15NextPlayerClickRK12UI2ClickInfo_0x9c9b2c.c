// 函数: _Z15NextPlayerClickRK12UI2ClickInfo
// 地址: 0x9c9b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_18
XString::XString(&var_18)
int32_t x0_2 = operator==(x20, &var_18)
XString::~XString()

if ((x0_2 & 1) != 0)
    GameDlgManagerDismiss(6, false)
    GameDlgManagerDismiss(7, false)

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_5 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_5 & 1) != 0)
    GameSpecific_UndoPassAndPlayOne()
    GameDlgManagerDismiss(6, false)
    GameDlgManagerDismiss(7, false)

return 0
