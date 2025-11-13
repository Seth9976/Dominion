// 函数: _Z12TitleButtonsRK12UI2ClickInfo
// 地址: 0x9c8cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
XString::XString(&var_38)
int32_t x0_2 = operator==(&var_38, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    TitleBannerClick(true)

XString::XString(&var_38)
char var_40

if ((operator==(&var_38, *(arg1 + 8)) & 1) == 0)
    XString::XString(&var_40)
    int32_t x0_8 = operator==(&var_40, *(arg1 + 8))
    XString::~XString()
    XString::~XString()
    
    if ((x0_8 & 1) != 0)
        TitleBannerClick(false)
else
    XString::~XString()
    TitleBannerClick(false)

XString::XString(&var_38)
int32_t x0_11 = operator==(&var_38, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    *(gStoreDlg + 8) = 0
    *gStoreDlg = 0x300000000
    *(gGameDlgManager + 0xc8) = 0x15

XString::XString(&var_38)
int32_t x0_14 = operator==(&var_38, *(arg1 + 8))
XString::~XString()

if ((x0_14 & 1) != 0)
    void* x0_15 = GetActiveProfile()
    int64_t x23_1 = zx.q(*(x0_15 + 0x7588)) & 0xfffffffffffffdff
    int32_t* x8_2 = *(*(x0_15 + 0x7580) + (x23_1 << 3))
    
    if (x8_2 == 0)
    label_9c8e30:
        int64_t* x0_16 = XPooledMalloc(0x10)
        *x0_16 = 0x1ffffd8f1
        x0_16[1] = (*(x0_15 + 0x7580))[x23_1]
        (*(x0_15 + 0x7580))[x23_1] = x0_16
        *(x0_15 + 0x758c) += 1
    else
        while (*x8_2 != 0xffffd8f1)
            x8_2 = *(x8_2 + 8)
            
            if (x8_2 == 0)
                goto label_9c8e30
        
        x8_2[1] = 1
    
    SaveProfiles()

XString::XString(&var_38)

if ((operator==(&var_38, *(arg1 + 8)) & 1) == 0)
    XString::XString(&var_40)
    int32_t x0_22 = operator==(&var_40, *(arg1 + 8))
    XString::~XString()
    XString::~XString()
    
    if ((x0_22 & 1) != 0)
        ToggleOffline()
        ClearTaptip()
else
    XString::~XString()
    ToggleOffline()
    ClearTaptip()

XString::XString(&var_38)
int32_t x0_25 = operator==(&var_38, *(arg1 + 8))
XString::~XString()

if ((x0_25 & 1) == 0)
    XString::XString(&var_38)
    
    if ((operator==(&var_38, *(arg1 + 8)) & 1) == 0)
        int32_t x20_7 = *(arg1 + 0x20)
        XString::~XString()
        
        if (x20_7 != 2)
            XString::XString(&var_38)
            int32_t x0_35 = operator==(&var_38, *(arg1 + 8))
            XString::~XString()
            int64_t (* x10_2)()
            int64_t (* x11_1)()
            
            if ((x0_35 & 1) == 0)
                XString::XString(&var_38)
                int32_t x0_42 = operator==(&var_38, *(arg1 + 8))
                XString::~XString()
                
                if ((x0_42 & 1) == 0)
                    XString::XString(&var_38)
                    int32_t x0_48 = operator==(&var_38, *(arg1 + 8))
                    XString::~XString()
                    
                    if ((x0_48 & 1) == 0)
                        XString::XString(&var_38)
                        int32_t x0_51 = operator==(&var_38, *(arg1 + 8))
                        XString::~XString()
                        
                        if ((x0_51 & 1) == 0)
                            XString::XString(&var_38)
                            int32_t x0_56 = operator==(&var_38, *(arg1 + 8))
                            XString::~XString()
                            int32_t x0_59
                            
                            if ((x0_56 & 1) == 0)
                                XString::XString(&var_38)
                                x0_59 = operator==(&var_38, *(arg1 + 8))
                                XString::~XString()
                            
                            if ((x0_56 & 1) == 0 && (x0_59 & 1) == 0)
                                XString::XString(&var_38)
                                int32_t x0_62 = operator==(&var_38, *(arg1 + 8))
                                XString::~XString()
                                
                                if ((x0_62 & 1) == 0)
                                    XString::XString(&var_38)
                                    int32_t x0_65 = operator==(&var_38, *(arg1 + 8))
                                    XString::~XString()
                                    
                                    if ((x0_65 & 1) == 0)
                                        XString::XString(&var_38)
                                        int32_t x0_68 = operator==(&var_38, *(arg1 + 8))
                                        XString::~XString()
                                        
                                        if ((x0_68 & 1) == 0)
                                            XString::XString(&var_38)
                                            int32_t x0_71 = operator==(&var_38, *(arg1 + 8))
                                            XString::~XString()
                                            
                                            if ((x0_71 & 1) == 0)
                                                XString::XString(&var_38)
                                                int32_t x0_74 = operator==(&var_38, *(arg1 + 8))
                                                XString::~XString()
                                                
                                                if ((x0_74 & 1) == 0)
                                                    XString::XString(&var_38)
                                                    int32_t x0_77 = operator==(&var_38, *(arg1 + 8))
                                                    XString::~XString()
                                                    
                                                    if ((x0_77 & 1) == 0)
                                                        XString::XString(&var_38)
                                                        int32_t x0_80 =
                                                            operator==(&var_38, *(arg1 + 8))
                                                        XString::~XString()
                                                        
                                                        if ((x0_80 & 1) == 0)
                                                            XString::XString(&var_38)
                                                            int32_t x0_86 =
                                                                operator==(&var_38, *(arg1 + 8))
                                                            XString::~XString()
                                                            
                                                            if ((x0_86 & 1) == 0)
                                                                XString::XString(&var_38)
                                                                int32_t x0_93 =
                                                                    operator==(&var_38, *(arg1 + 8))
                                                                XString::~XString()
                                                                
                                                                if ((x0_93 & 1) == 0)
                                                                    GameSpecific_TitleButton(arg1)
                                                                else
                                                                    if ((operator==(GetActiveProfile(), 
                                                                            &data_793a18) & 1) != 0)
                                                                        XString::XString(&var_38)
                                                                        x10_2 = sub_9cbf88
                                                                        x11_1 = sub_9cc058
                                                                        goto label_9c9008
                                                                    
                                                                    *(gGameDlgManager + 0xc8) = 0x13
                                                                    *gMultiplayerDlg =
                                                                        HaveAnyActiveGames() & 1
                                                                    *(gMultiplayerDlg + 8) = 0
                                                                    XString::operator=(gMultiplayerDlg
                                                                        + 0x198)
                                                                    GameClientQueryGames()
                                                                    NotificationsRequestPermission()
                                                            else if ((GameSpecific_NewGameOverride()
                                                                    & 1) == 0)
                                                                *(gCreateDlg + 0x70) = 0
                                                                *(gCreateDlg + 0x50) = zx.o(0)
                                                                *(gCreateDlg + 0x60) = zx.o(0)
                                                                *(gCreateDlg + 0x30) = zx.o(0)
                                                                *(gCreateDlg + 0x40) = zx.o(0)
                                                                *(gCreateDlg + 0x10) = zx.o(0)
                                                                *(gCreateDlg + 0x20) = zx.o(0)
                                                                *gCreateDlg = zx.o(0)
                                                                GameSetup* x0_88 = GetActiveGameSetup()
                                                                *(x0_88 + 0x28) =
                                                                    GameLatestVersion(4, true)
                                                                GameSpecific_CreateGameShow(gCreateDlg, 
                                                                    x0_88)
                                                                *(gGameDlgManager + 0xc8) = 0x10
                                                        else if ((operator==(GetActiveProfile(), 
                                                                &data_793a18) & 1) == 0)
                                                            *(gGameDlgManager + 0xc8) = 5
                                                        else
                                                            XString::operator=(gNameDlg)
                                                            *(gNameDlg + 8) = 0
                                                            *(gGameDlgManager + 0x118) = 0xb
                                                    else
                                                        XOpenURL("https://discord.gg/RBddmRGJWA")
                                                else
                                                    GameSpecific_AchievementsOpen()
                                            else
                                                *(gGameDlgManager + 0xc8) = 0xf
                                                *gCredits = 0
                                        else
                                            *(gGameDlgManager + 0xc8) = 0x19
                                    else
                                        *(gStoreDlg + 8) = 0
                                        *gStoreDlg = 0x300000000
                                        *(gGameDlgManager + 0xc8) = 0x15
                                else
                                    *(gGameDlgManager + 0xc8) = 4
                            else
                                *(gGameDlgManager + 0xc8) = 0xe
                        else
                            void* x0_52 = GetClient()
                            uint64_t x8_8 = zx.q(*(x0_52 + 0x5028))
                            uint64_t x0_53
                            
                            if (x8_8.d s< 1)
                                x0_53 = 0
                            else if (*(x0_52 + 0x3c) != 3)
                                uint64_t x9_6 = 0
                                void* x10_3 = x0_52 + 0x5c
                                int32_t i
                                
                                do
                                    if (x8_8 - 1 == x9_6)
                                        x9_6 = x8_8
                                        break
                                    
                                    i = *x10_3
                                    x10_3 += 0x20
                                    x9_6 += 1
                                while (i != 3)
                                x0_53 = zx.q(x9_6 u< x8_8 ? 1 : 0)
                            else
                                x0_53 = 1
                            
                            *gFriendDlg = 0
                            *(gFriendDlg + 4) = x0_53.d
                            *(gFriendDlg + 8) = 0
                            *(gGameDlgManager + 0xc8) = 9
                            FriendsQueryServerForMore(x0_53, 0)
                    else
                        *(gGameDlgManager + 0xc8) = 0x23
                        *(gTutorialMenu + 4) = 3
                else
                    int64_t x0_43 = Now()
                    
                    if (x0_43 - data_11a7570 s>= 0x3a99)
                        data_11a7570 = x0_43
                        NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42ca)
                    
                    *(gGameDlgManager + 0xc8) = 0xc
            else if ((operator==(GetActiveProfile(), &data_793a18) & 1) == 0)
                *(gGameDlgManager + 0xc8) = 5
            else
                XString::XString(&var_38)
                x10_2 = sub_9cbf44
                x11_1 = sub_9cbf84
            label_9c9008:
                *(gGameDlgManager + 0x118) = 0x22
                *(gGameDlgManager + 0x1e8) = &data_11cef00
                *(gGameDlgManager + 0x1f8) = x10_2
                *(gGameDlgManager + 0x200) = x11_1
                XString::operator=(gGameDlgManager + 0x1f0)
                *(gGameDlgManager + 0x208) = 1
                XString::~XString()
        else
            XExit()
    else
        XString::~XString()
        XExit()
else
    int32_t x0_26 = GetLocalGameIndex()
    *(GetClient() + 0x5044) = 5
    *(GetClient() + 0x5058) = x0_26

return 0
