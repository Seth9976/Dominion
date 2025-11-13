// 函数: _Z22GameCreateClickPlayersRK12UI2ClickInfoR9GameSetupRbR10PlayerSlotRi
// 地址: 0x9b8690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_950[0x8f0]
XString::XString(&var_950)
int32_t x0_2 = operator==(&var_950, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    int32_t x23_1 = *(arg1 + 0x10)
    int32_t x10_1
    
    if (GameSpecific_MaxPlayers() == 5)
        x10_1 = x23_1 + 1
    else
        x10_1 = x23_1
    
    *arg3 = true
    *arg4 = x10_1
    *(gCreateDlg + 0x18) = x10_1

XString::XString(&var_950)
int32_t x0_6 = operator==(&var_950, *(arg1 + 8))
XString::~XString()

if ((x0_6 & 1) != 0)
    Cardset* x0_7 = *(gStoreItemDlg + 8)
    
    if (x0_7 == 0)
        x0_7 = CardsetAlloc()
        *(gStoreItemDlg + 8) = x0_7
    
    *(gStoreItemDlg + 0x10) = 0x200000000
    *gStoreItemDlg = 0
    *(gStoreItemDlg + 0x18) = 0x10
    CardsetClear(x0_7)
    *(gGameDlgManager + 0xc8) = 0x16
    *arg3 = false
else if (zx.d(*arg3) != 0)
    uint64_t x26_1 = zx.q(*arg4)
    GameSpecific_MaxPlayers()
    XString::XString(&var_950)
    int32_t x0_10 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_10 & 1) != 0)
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_13 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_13 & 1) != 0)
        *arg5 = 1
    
    XString::XString(&var_950)
    int32_t x0_16 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_16 & 1) != 0)
        *arg5 = 0
    
    XString::XString(&var_950)
    int32_t x0_19 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_19 & 1) != 0)
        *arg5 = 1
    
    XString::XString(&var_950)
    int32_t x0_22 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_22 & 1) != 0)
        *arg5 = 0
    
    XString::XString(&var_950)
    int32_t x0_25 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_25 & 1) != 0)
        void* x24_2 = arg2 + x26_1 * 0x22c
        *(x24_2 + 0x60) = 0x300000003
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "Very Easy AI")
        *(x24_2 + 0x5c) = *(x24_2 + 0x64) + (GameSpecific_GetAvatarRange(1) u>> 0x20).d + 1
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_30 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_30 & 1) != 0)
        void* x24_4 = arg2 + x26_1 * 0x22c
        *(x24_4 + 0x60) = 3
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "Easy AI")
        *(x24_4 + 0x5c) = *(x24_4 + 0x64) + (GameSpecific_GetAvatarRange(1) u>> 0x20).d + 1
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_35 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_35 & 1) != 0)
        void* x24_6 = arg2 + x26_1 * 0x22c
        *(x24_6 + 0x60) = 0x100000003
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "AI")
        *(x24_6 + 0x5c) = *(x24_6 + 0x64) + (GameSpecific_GetAvatarRange(1) u>> 0x20).d + 1
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_40 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_40 & 1) != 0)
        void* x24_8 = arg2 + x26_1 * 0x22c
        *(x24_8 + 0x60) = 0x200000003
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "Hard AI")
        *(x24_8 + 0x5c) = *(x24_8 + 0x64) + (GameSpecific_GetAvatarRange(1) u>> 0x20).d + 1
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_45 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_45 & 1) != 0)
        *(arg2 + x26_1 * 0x22c + 0x60) = 0x100000002
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "OPTIONAL")
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_49 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_49 & 1) != 0)
        *(arg2 + x26_1 * 0x22c + 0x60) = 2
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "REQUIRED")
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_53 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_53 & 1) != 0)
        int64_t x0_54 = GameSpecific_GetAvatarRange(1)
        int32_t x24_12 = x0_54.d
        uint32_t x27_1 = (x0_54 u>> 0x20).d
        int32_t x25_7
        
        if (x24_12 s>= x27_1)
            x25_7 = 0
        else
            x25_7 = 0
            
            do
                if ((IsAvatarUsed(arg2, zx.q(x24_12)) & 1) == 0)
                    *(&var_950 + (sx.q(x25_7) << 2)) = x24_12
                    x25_7 += 1
                
                x24_12 += 1
            while (x27_1 != x24_12)
        
        void* x9_1 = arg2 + x26_1 * 0x22c
        *(x9_1 + 0x5c) = *(&var_950 + (sx.q(RandomInt(gRNG, x25_7)) << 2))
        *(x9_1 + 0x60) = 0x3e9
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, "Guest")
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_62 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_62 & 1) != 0)
        void* x0_64 = GetProfileByIndex(zx.q(*(gCreateDlg + (sx.q(*(arg1 + 0x10)) << 2) + 0x1c)))
        void* x25_8 = arg2 + x26_1 * 0x22c
        *(x25_8 + 0x60) = 0x3e8
        AssignName(arg2 + x26_1 * 0x22c + 0x4c, XString::operator char const*())
        *(x25_8 + 0x5c) = *(x0_64 + 0x10)
        *(x25_8 + 0x64) = *(x0_64 + 0x4320)
        *arg3 = false
    
    XString::XString(&var_950)
    
    if ((operator==(&var_950, *(arg1 + 8)) & 1) == 0)
        char var_958
        XString::XString(&var_958)
        int32_t x0_72 = operator==(&var_958, *(arg1 + 8))
        int32_t x24_15 = *(arg1 + 0x20)
        XString::~XString()
        XString::~XString()
        
        if ((x0_72 & 1) != 0 || x24_15 == 2)
            *arg3 = false
    else
        XString::~XString()
        *arg3 = false
    
    XString::XString(&var_950)
    int32_t x0_75 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_75 & 1) != 0)
        *arg3 = false
        void* x0_76 = GetClient()
        uint64_t x8_22 = zx.q(*(x0_76 + 0x5028))
        uint64_t x0_77
        
        if (x8_22.d s< 1)
            x0_77 = 0
        else if (*(x0_76 + 0x3c) != 3)
            uint64_t x9_3 = 0
            void* x10_2 = x0_76 + 0x5c
            int32_t i
            
            do
                if (x8_22 - 1 == x9_3)
                    x9_3 = x8_22
                    break
                
                i = *x10_2
                x10_2 += 0x20
                x9_3 += 1
            while (i != 3)
            x0_77 = zx.q(x9_3 u< x8_22 ? 1 : 0)
        else
            x0_77 = 1
        
        *gFriendDlg = 1
        *(gFriendDlg + 4) = x0_77.d
        *(gFriendDlg + 8) = 0
        *(gGameDlgManager + 0xc8) = 9
        FriendsQueryServerForMore(x0_77, 0)
    
    XString::XString(&var_950)
    int32_t x0_80 = operator==(&var_950, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_80 & 1) != 0)
        uint64_t x24_16 = zx.q(*arg4)
        int64_t x22_1 = sx.q(*(arg1 + 0x10))
        int64_t x0_81 = GetActiveGameSetup()
        void* x0_83 = LookupFriend(zx.q(*(gCreateDlg + (x22_1 << 2) + 0x1c)))
        void* x24_17 = x0_81 + x24_16 * 0x22c
        *(x24_17 + 0x5c) = *(x0_83 + 0x10)
        AssignName(x24_17 + 0x4c, XString::operator char const*())
        *(x24_17 + 0x60) = 1
        *(x24_17 + 0x64) = *(x0_83 + 4)
        *arg3 = false

XString::XString(&var_950)
int32_t x0_89 = operator==(&var_950, *(arg1 + 8))
int64_t result = XString::~XString()

if ((x0_89 & 1) != 0)
    int32_t x21_1 = *(arg1 + 0x10)
    int32_t x21_2
    
    if (GameSpecific_MaxPlayers() == 5)
        x21_2 = x21_1 + 1
    else
        x21_2 = x21_1
    
    result = GameSpecific_MaxPlayers()
    *(arg2 + mulu.dp.d(x21_2, 0x22c) + 0x60) = 0
    *arg3 = false

return result
