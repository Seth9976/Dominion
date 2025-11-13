// 函数: _Z16HowToPlayButtonsRK12UI2ClickInfo
// 地址: 0x9c5488
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
            *(gGameDlgManager + 0xc8) = 0x23
            *(gTutorialMenu + 4) = 0x19
            return 0
        
        XString::XString(&var_18)
        int32_t x0_10 = operator==(&var_18, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_10 & 1) != 0)
            *(gGameDlgManager + 0xc8) = 0x17
            return 0
        
        XString::XString(&var_18)
        int32_t x0_14 = operator==(&var_18, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_14 & 1) == 0)
            XString::XString(&var_18)
            int32_t x0_17 = operator==(&var_18, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_17 & 1) != 0)
                XOpenURL("https://www.templegatesgames.com/how-to-play-video/")
    else
        *(gGameDlgManager + 0xc8) = 4
else
    XString::~XString()
    *(gGameDlgManager + 0xc8) = 4

return 0
