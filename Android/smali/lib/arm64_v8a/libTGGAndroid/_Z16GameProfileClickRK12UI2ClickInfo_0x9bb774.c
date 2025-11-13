// 函数: _Z16GameProfileClickRK12UI2ClickInfo
// 地址: 0x9bb774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 != 2)
        XString::XString(&var_28)
        int32_t x0_6 = operator==(&var_28, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_6 & 1) == 0)
            XString::XString(&var_28)
            int32_t x0_9 = operator==(&var_28, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_9 & 1) == 0)
                XString::XString(&var_28)
                int32_t x0_12 = operator==(&var_28, *(arg1 + 8))
                XString::~XString()
                
                if ((x0_12 & 1) == 0)
                    char* x20_5 = *(arg1 + 8)
                    XString::XString(&var_28)
                    int32_t x0_15 = operator==(x20_5, &var_28)
                    XString::~XString()
                    
                    if ((x0_15 & 1) == 0)
                        char* x20_7 = *(arg1 + 8)
                        XString::XString(&var_28)
                        int32_t x0_21 = operator==(x20_7, &var_28)
                        XString::~XString()
                        
                        if ((x0_21 & 1) == 0)
                            char* x20_10 = *(arg1 + 8)
                            XString::XString(&var_28)
                            int32_t x0_29 = operator==(x20_10, &var_28)
                            XString::~XString()
                            
                            if ((x0_29 & 1) == 0)
                                XString::XString(&var_28)
                                int32_t x0_37 = operator==(&var_28, *(arg1 + 8))
                                XString::~XString()
                                
                                if ((x0_37 & 1) == 0)
                                    XString::XString(&var_28)
                                    int32_t x0_43 = operator==(&var_28, *(arg1 + 8))
                                    XString::~XString()
                                    
                                    if ((x0_43 & 1) == 0)
                                        char* x19_3 = *(arg1 + 8)
                                        XString::XString(&var_28)
                                        int32_t x0_48 = operator==(x19_3, &var_28)
                                        XString::~XString()
                                        
                                        if ((x0_48 & 1) != 0)
                                            *(gGameDlgManager + 0xc8) = 0x1e
                                    else
                                        void* x0_44 = GetActiveProfile()
                                        
                                        if ((zx.d(*(GetActiveProfile() + 0x42c0)) & 1) != 0)
                                            GameClientSetReceiveNewsletter(false)
                                            *(x0_44 + 0x42c0) &= 0xfffffffe
                                        else
                                            GameClientSetReceiveNewsletter(true)
                                            *(x0_44 + 0x42c0) |= 1
                                else
                                    GetActiveProfile()
                                    GameClientSetEmail(XString::operator char const*(), true)
                            else
                                void* x0_30 = GetActiveProfile()
                                XString::operator=(x0_30 + 8)
                                XString::operator=(gProfileAccount + 8)
                                *gProfileAccount = 1
                                *(x0_30 + 0x42c0) &= 0xfffffffe
                                XString::XString(&var_28)
                                *(gGameDlgManager + 0x118) = 0x22
                                *(gGameDlgManager + 0x1e8) = &data_11ceee8
                                *(gGameDlgManager + 0x1f8) = sub_9cbc6c
                                *(gGameDlgManager + 0x200) = sub_9cbca8
                                XString::operator=(gGameDlgManager + 0x1f0)
                                *(gGameDlgManager + 0x208) = 2
                                XString::~XString()
                        else
                            GameClientSetEmail(&data_793a18, false)
                            XString::operator=(gProfileAccount + 0x10)
                            XString::operator=(gProfileAccount + 8)
                            *(gProfileAccount + 0x18) = 0
                            *gProfileAccount = 0
                            void* x0_24 = GetActiveProfile()
                            XString::operator=(x0_24 + 8)
                            XString::operator=(x0_24 + 0x42b8)
                            *(x0_24 + 0x42c0) &= 0xfffffffe
                            SaveProfiles()
                    else
                        XString::operator=(gProfileAccount + 0x10)
                        *(gProfileAccount + 0x18) = 1
                        XString::XString(&var_28)
                        *(gGameDlgManager + 0x118) = 0x22
                        *(gGameDlgManager + 0x1e8) = &data_11cef30
                        *(gGameDlgManager + 0x1f8) = j_GameClientSetEmailCode
                        *(gGameDlgManager + 0x200) = sub_9cbc68
                        XString::operator=(gGameDlgManager + 0x1f0)
                        *(gGameDlgManager + 0x208) = 3
                        XString::~XString()
                else
                    ToggleOffline()
            else
                *(gGameDlgManager + 0xc8) = 8
        else
            *gProfileAvatarDlg = 0
            *(gGameDlgManager + 0xc8) = 6
    else
        *(gGameDlgManager + 0xc8) = 4
else
    XString::~XString()
    *(gGameDlgManager + 0xc8) = 4

return 0
