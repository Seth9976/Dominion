// 函数: _Z23GameProfilesManageClickRK12UI2ClickInfo
// 地址: 0x9bc700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_18
XString::XString(&var_18)

if ((operator==(x20, &var_18) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 != 2)
        char* x20_2 = *(arg1 + 8)
        XString::XString(&var_18)
        int32_t x0_6 = operator==(x20_2, &var_18)
        XString::~XString()
        
        if ((x0_6 & 1) != 0)
            *(gProfileAccount + 0x1c) = *(arg1 + 0x10)
            *(gGameDlgManager + 0x118) = 0x20
            L("dom_msg_delete_profile_header", nullptr)
            XString::operator=(gGameDlgManager + 0x1b8)
            L("dom_msg_delete_profile_body", nullptr)
            XString::operator=(gGameDlgManager + 0x1c0)
            L(&data_793a18, nullptr)
            XString::operator=(gGameDlgManager + 0x1c8)
            L(&data_793a18, nullptr)
            XString::operator=(gGameDlgManager + 0x1d0)
            *(gGameDlgManager + 0x1d8) = sub_9cbcac
            *(gGameDlgManager + 0x1e0) = 0
            return 0
        
        char* x20_4 = *(arg1 + 8)
        XString::XString(&var_18)
        int32_t x0_18 = operator==(x20_4, &var_18)
        XString::~XString()
        
        if ((x0_18 & 1) != 0)
            XString::operator=(gProfileAccount + 8)
            *gProfileAccount = 0
            GameClientClearData()
            
            if (*(arg1 + 0x10) == NumProfiles())
                XString::XString(&var_18)
                *(gGameDlgManager + 0x118) = 0x22
                *(gGameDlgManager + 0x1e8) = &data_11cef00
                *(gGameDlgManager + 0x1f8) = sub_9cbcc8
                *(gGameDlgManager + 0x200) = sub_9cbd0c
                XString::operator=(gGameDlgManager + 0x1f0)
                *(gGameDlgManager + 0x208) = 1
                XString::~XString()
                return 0
            
            SetActiveProfileBySlot(*(arg1 + 0x10))
            int32_t* x8_1 = GetActiveProfile() + 0x4324
            
            if (*x8_1 == 2)
                *x8_1 = 0
            
            if (*(GetClient() + 0x18) != 3)
                ClientNetworkConnect()
            else
                GameClientTryLogin()
            
            GameClientClearData()
            SaveProfiles()
    else
        *(gGameDlgManager + 0xc8) = 5
else
    XString::~XString()
    *(gGameDlgManager + 0xc8) = 5

return 0
