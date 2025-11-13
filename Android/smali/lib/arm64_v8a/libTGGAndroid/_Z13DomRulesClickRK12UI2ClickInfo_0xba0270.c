// 函数: _Z13DomRulesClickRK12UI2ClickInfo
// 地址: 0xba0270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameDlgHandlePageButtons(arg1)
char var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x19_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x19_1 == 2)
        goto label_ba02cc
else
    XString::~XString()
label_ba02cc:
    int64_t x0_4
    
    if ((GameDlgManagerDialogActive(0x7d0, 5) & 1) == 0)
        x0_4 = 0x18
    else
        x0_4 = 0x17
    
    GameDlgManagerShow(x0_4, 5)

return 0
