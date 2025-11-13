// 函数: _Z13InputBoxClickRK12UI2ClickInfo
// 地址: 0x9bae30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 != 2)
        XString::XString(&var_18)
        int32_t x0_6 = operator==(&var_18, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_6 & 1) != 0)
            XClipboardPasteText(gGameDlgManager + 0x1f0)
            return 0
        
        XString::XString(&var_18)
        int32_t x0_11 = operator==(&var_18, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_11 & 1) != 0)
            GameDlgManagerDismiss(7, false)
            int64_t x19_2 = *(gGameDlgManager + 0x1f8)
            XString::operator char const*()
            x19_2()
    else
        GameDlgManagerDismiss(7, false)
        (*(gGameDlgManager + 0x200))()
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)
    (*(gGameDlgManager + 0x200))()

return 0
