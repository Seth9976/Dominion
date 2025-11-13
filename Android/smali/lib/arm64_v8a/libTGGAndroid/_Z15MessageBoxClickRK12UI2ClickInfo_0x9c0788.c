// 函数: _Z15MessageBoxClickRK12UI2ClickInfo
// 地址: 0x9c0788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)
int64_t x8_1

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9c07dc
    
    XString::XString(&var_18)
    int32_t x0_6 = operator==(&var_18, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_6 & 1) != 0)
        x8_1 = *(gGameDlgManager + 0x1d8)
        
        if (x8_1 != 0)
            x8_1()
            GameDlgManagerDismiss(7, false)
        else
            GameDlgManagerDismiss(7, false)
else
    XString::~XString()
label_9c07dc:
    x8_1 = *(gGameDlgManager + 0x1e0)
    
    if (x8_1 == 0)
        GameDlgManagerDismiss(7, false)
    else
        x8_1()
        GameDlgManagerDismiss(7, false)
return 0
