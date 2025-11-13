// 函数: _Z22GameProfileAvatarClickRK12UI2ClickInfo
// 地址: 0x9bbdac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_30
XString::XString(&var_30)

if ((operator==(&var_30, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 != 2)
        XString::XString(&var_30)
        int32_t x0_6 = operator==(&var_30, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_6 & 1) == 0)
            XString::XString(&var_30)
            int32_t x0_15 = operator==(&var_30, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_15 & 1) == 0)
                XString::XString(&var_30)
                int32_t x0_18 = operator==(&var_30, *(arg1 + 8))
                XString::~XString()
                
                if ((x0_18 & 1) != 0)
                    *gProfileAvatarDlg -= 1
            else
                *gProfileAvatarDlg += 1
        else
            void* x0_7 = GetActiveProfile()
            *(x0_7 + 0x10) = GameSpecific_ButtonIndexToAvatar(*gProfileAvatarDlg, *(arg1 + 0x10))
            int64_t x0_10 = CurrentDateTime()
            *(x0_7 + 0x42d0) = x0_10
            var_30 = x0_10
            int32_t var_28_1 = *(x0_7 + 0x10)
            NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42c1, 0x10, &var_30)
            *(gGameDlgManager + 0xc8) = 5
            SaveProfiles()
    else
        *(gGameDlgManager + 0xc8) = 5
else
    XString::~XString()
    *(gGameDlgManager + 0xc8) = 5

return 0
