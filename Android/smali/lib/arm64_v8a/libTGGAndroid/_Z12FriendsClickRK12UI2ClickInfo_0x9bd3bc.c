// 函数: _Z12FriendsClickRK12UI2ClickInfo
// 地址: 0x9bd3bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameFriend* var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9bd41c
    
    XString::XString(&var_28)
    int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
    XString::~XString()
    uint64_t x0_6
    int32_t x1_4
    
    if ((x0_5 & 1) == 0)
        XString::XString(&var_28)
        int32_t x0_9 = operator==(&var_28, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_9 & 1) == 0)
            XString::XString(&var_28)
            int32_t x0_12 = operator==(&var_28, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_12 & 1) == 0)
                XString::XString(&var_28)
                int32_t x0_15 = operator==(&var_28, *(arg1 + 8))
                XString::~XString()
                int64_t x2_1
                int64_t v0_1
                
                if ((x0_15 & 1) != 0)
                label_9bd540:
                    v0_1 = 1
                    x2_1 = 0
                    goto label_9bd5a4
                
                XString::XString(&var_28)
                int32_t x0_18 = operator==(&var_28, *(arg1 + 8))
                XString::~XString()
                
                if ((x0_18 & 1) == 0)
                    XString::XString(&var_28)
                    int32_t x0_22 = operator==(&var_28, *(arg1 + 8))
                    XString::~XString()
                    
                    if ((x0_22 & 1) != 0)
                        goto label_9bd540
                    
                    XString::XString(&var_28)
                    int32_t x0_25 = operator==(&var_28, *(arg1 + 8))
                    XString::~XString()
                    
                    if ((x0_25 & 1) == 0)
                        XString::XString(&var_28)
                        int32_t x0_28 = operator==(&var_28, *(arg1 + 8))
                        XString::~XString()
                        
                        if ((x0_28 & 1) == 0)
                            XString::XString(&var_28)
                            int32_t x0_34 = operator==(&var_28, *(arg1 + 8))
                            XString::~XString()
                            
                            if ((x0_34 & 1) == 0)
                                XString::XString(&var_28)
                                int32_t x0_39 = operator==(&var_28, *(arg1 + 8))
                                XString::~XString()
                                
                                if ((x0_39 & 1) == 0)
                                    XString::XString(&var_28)
                                    int32_t x0_44 = operator==(&var_28, *(arg1 + 8))
                                    XString::~XString()
                                    
                                    if ((x0_44 & 1) != 0)
                                        int32_t x19_4 = *(arg1 + 0x10)
                                        uint64_t x0_45 = zx.q(*(gFriendDlg + 4))
                                        int32_t x21_3 = *(gFriendDlg + 8)
                                        int32_t x21_4
                                        
                                        if (x0_45.d == 0)
                                            x21_4 = x19_4 + x21_3 * 6 - 1
                                        else
                                            CalcFriendsForTab(x0_45, &var_28)
                                            x21_4 = x19_4 + x21_3 * 6
                                                + ((var_28 - GetClient() - 0x28) u>> 5).d
                                        
                                        void* x0_58 = GetClient()
                                        *(gFriendDlg + 0x18) =
                                            *(x0_58 + (zx.q(x21_4) << 0x20 s>> 0x1b) + 0x2c)
                                        GetClient()
                                        void var_38
                                        XString::XString(&var_38)
                                        uint64_t x8_24 = zx.q(*(gFriendDlg + 4))
                                        
                                        if (x8_24.d u> 3)
                                            pthread_kill(pthread_self(), 6)
                                            return DoTranslate(XNoReturn()) __tailcall
                                        
                                        char var_50
                                        int64_t (* x8_27)()
                                        
                                        switch (x8_24)
                                            case 0
                                                XString::XString()
                                                XString::XString()
                                                char const* const x0_62
                                                void var_40
                                                
                                                if (*(x0_58 + (sx.q(x21_4) << 5) + 0x3c) != 2)
                                                    GetTranslation("dom_msg_remove_friend_header")
                                                    XString::operator=(&var_40)
                                                    XString::~XString()
                                                    x0_62 = "dom_msg_remove_friend_body"
                                                else
                                                    GetTranslation("
                                                        dom_msg_remove_pending_friend_header")
                                                    XString::operator=(&var_40)
                                                    XString::~XString()
                                                    x0_62 = "dom_msg_remove_pending_friend_body"
                                                GetTranslation(x0_62)
                                                StringReplace(XString::operator char const*(), 
                                                    "[username]", XString::operator char const*())
                                                XString::~XString()
                                                void var_48
                                                XString::operator=(&var_48)
                                                XString::~XString()
                                                XString::XString(&var_28)
                                                XString::XString(&var_50)
                                                *(gGameDlgManager + 0x118) = 0x20
                                                XString::operator=(gGameDlgManager + 0x1b8)
                                                XString::operator=(gGameDlgManager + 0x1c0)
                                                XString::operator=(gGameDlgManager + 0x1c8)
                                                XString::operator=(gGameDlgManager + 0x1d0)
                                                x8_27 = sub_9cbd90
                                            case 1
                                                GetTranslation("dom_msg_reject_friend_header")
                                                GetTranslation("dom_msg_reject_friend_body")
                                                StringReplace(XString::operator char const*(), 
                                                    "[username]", XString::operator char const*())
                                                XString::~XString()
                                                XString::XString(&var_28)
                                                XString::XString(&var_50)
                                                *(gGameDlgManager + 0x118) = 0x20
                                                XString::operator=(gGameDlgManager + 0x1b8)
                                                XString::operator=(gGameDlgManager + 0x1c0)
                                                XString::operator=(gGameDlgManager + 0x1c8)
                                                XString::operator=(gGameDlgManager + 0x1d0)
                                                x8_27 = sub_9cbda4
                                            case 2
                                                GetTranslation("dom_msg_unreject_friend_header")
                                                GetTranslation("dom_msg_unreject_friend_body")
                                                StringReplace(XString::operator char const*(), 
                                                    "[username]", XString::operator char const*())
                                                XString::~XString()
                                                XString::XString(&var_28)
                                                XString::XString(&var_50)
                                                *(gGameDlgManager + 0x118) = 0x20
                                                XString::operator=(gGameDlgManager + 0x1b8)
                                                XString::operator=(gGameDlgManager + 0x1c0)
                                                XString::operator=(gGameDlgManager + 0x1c8)
                                                XString::operator=(gGameDlgManager + 0x1d0)
                                                x8_27 = sub_9cbdb8
                                            case 3
                                                GetTranslation("dom_msg_unblock_header")
                                                GetTranslation("dom_msg_unblock_body")
                                                StringReplace(XString::operator char const*(), 
                                                    "[username]", XString::operator char const*())
                                                XString::~XString()
                                                XString::XString(&var_28)
                                                XString::XString(&var_50)
                                                *(gGameDlgManager + 0x118) = 0x20
                                                XString::operator=(gGameDlgManager + 0x1b8)
                                                XString::operator=(gGameDlgManager + 0x1c0)
                                                XString::operator=(gGameDlgManager + 0x1c8)
                                                XString::operator=(gGameDlgManager + 0x1d0)
                                                x8_27 = sub_9cbdcc
                                        
                                        *(gGameDlgManager + 0x1d8) = x8_27
                                        *(gGameDlgManager + 0x1e0) = 0
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                else
                                    int32_t x19_2 = *(arg1 + 0x10)
                                    uint64_t x0_40 = zx.q(*(gFriendDlg + 4))
                                    int32_t x20_14 = *(gFriendDlg + 8)
                                    int32_t x19_3
                                    
                                    if (x0_40.d == 0)
                                        x19_3 = x19_2 + x20_14 * 6 - 1
                                    else
                                        CalcFriendsForTab(x0_40, &var_28)
                                        x19_3 = x19_2 + x20_14 * 6
                                            + ((var_28 - GetClient() - 0x28) u>> 5).d
                                    
                                    GameClientFriendOp(
                                        zx.q(*(GetClient() + (sx.q(x19_3) << 5) + 0x2c)), 1)
                            else
                                int32_t x20_11 = *(gFriendDlg + 8)
                                
                                if (x20_11 == 0 && *(arg1 + 0x10) == 0)
                                    XString::XString(&var_28)
                                    *(gGameDlgManager + 0x118) = 0x22
                                    *(gGameDlgManager + 0x1e8) = &data_11cef18
                                    *(gGameDlgManager + 0x1f8) = sub_9cbd10
                                    *(gGameDlgManager + 0x200) = sub_9cbd8c
                                    XString::operator=(gGameDlgManager + 0x1f0)
                                    *(gGameDlgManager + 0x208) = 4
                                    XString::~XString()
                                else if (*gFriendDlg == 1)
                                    uint64_t x0_35 = zx.q(*(gFriendDlg + 4))
                                    int32_t x19_1 = *(arg1 + 0x10)
                                    int32_t x20_12
                                    
                                    if (x0_35.d == 0)
                                        x20_12 = x19_1 + x20_11 * 6 - 1
                                    else
                                        CalcFriendsForTab(x0_35, &var_28)
                                        x20_12 = x19_1 + x20_11 * 6
                                            + ((var_28 - GetClient() - 0x28) u>> 5).d
                                    
                                    void* x20_16 = GetClient() + (sx.q(x20_12) << 5)
                                    void* x21_5 =
                                        GetActiveGameSetup() + sx.q(*(gCreateDlg + 0x18)) * 0x22c
                                    *(x21_5 + 0x5c) = *(x20_16 + 0x38)
                                    AssignName(x21_5 + 0x4c, XString::operator char const*())
                                    *(x21_5 + 0x60) = 1
                                    *(x21_5 + 0x64) = *(x20_16 + 0x2c)
                                    int64_t x8_18 = *(MostRecentFriend() + 0x18)
                                    uint64_t x0_55 = zx.q(*(x20_16 + 0x2c))
                                    *(x20_16 + 0x40) = x8_18 + 1
                                    GameClientFriendOp(x0_55, 6)
                                    *(gGameDlgManager + 0xc8) = 0x10
                        else
                            GetActiveProfile()
                            XClipboardCopyText(XString::operator char const*())
                    else
                        *(gFriendDlg + 4) = 3
                        ModifyFriendRange(3, 0, 1)
                else
                    v0_1 = 2
                    x2_1 = 1
                label_9bd5a4:
                    *(gFriendDlg + 4) = v0_1
                    ModifyFriendRange(2, 0, x2_1)
                    ModifyFriendRange(3, 0, 0)
            else
                *(gFriendDlg + 4) = 0
                *(gFriendDlg + 8) = 0
                ModifyFriendRange(3, 0, 0)
        else
            x0_6 = zx.q(*(gFriendDlg + 4))
            x1_4 = *(gFriendDlg + 8) + 1
            *(gFriendDlg + 8) = x1_4
            FriendsQueryServerForMore(x0_6, x1_4)
    else
        x0_6 = zx.q(*(gFriendDlg + 4))
        x1_4 = *(gFriendDlg + 8) - 1
        *(gFriendDlg + 8) = x1_4
        FriendsQueryServerForMore(x0_6, x1_4)
else
    XString::~XString()
label_9bd41c:
    
    if (*gFriendDlg != 1)
        *(gGameDlgManager + 0xc8) = 4
    else
        *(gGameDlgManager + 0xc8) = 0x10

return 0
