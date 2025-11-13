// 函数: _Z23PlayerInfoFloatingClickRK12UI2ClickInfo
// 地址: 0xb006f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = *(arg1 + 8)
uint32_t x20 = *gPlayerInfoPopup
char var_28
XString::XString(&var_28)
int32_t x0_2 = operator==(x21, &var_28)
XString::~XString()

if ((x0_2 & 1) != 0)
    PlayerConfig_V1* x0_5 = GameGetPlayer(ActiveGame() + 8, zx.q(x20))
    GameCanAddFriend(x0_5)
    GameClientFriendOp(zx.q(*(x0_5 + 0x18)), 0)

char* x21_3 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_9 = operator==(x21_3, &var_28)
XString::~XString()

if ((x0_9 & 1) != 0)
    GameClientFriendOp(zx.q(*(GameGetPlayer(ActiveGame() + 8, zx.q(x20)) + 0x18)), 4)

char* x21_5 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_16 = operator==(x21_5, &var_28)
XString::~XString()

if ((x0_16 & 1) != 0)
    TryModifyAI(zx.q(x20), 3)

char* x21_7 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_20 = operator==(x21_7, &var_28)
XString::~XString()

if ((x0_20 & 1) != 0)
    TryModifyAI(zx.q(x20), 0)

char* x21_9 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_24 = operator==(x21_9, &var_28)
XString::~XString()

if ((x0_24 & 1) != 0)
    TryModifyAI(zx.q(x20), 1)

char* x21_11 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_28 = operator==(x21_11, &var_28)
XString::~XString()

if ((x0_28 & 1) != 0)
    TryModifyAI(zx.q(x20), 2)

char* x20_1 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_32 = operator==(x20_1, &var_28)
XString::~XString()

if ((x0_32 & 1) == 0)
    char* x20_3 = *(arg1 + 8)
    XString::XString(&var_28)
    int32_t x0_36 = operator==(x20_3, &var_28)
    XString::~XString()
    
    if ((x0_36 & 1) == 0)
        char* x20_5 = *(arg1 + 8)
        XString::XString(&var_28)
        int32_t x0_39 = operator==(x20_5, &var_28)
        XString::~XString()
        
        if ((x0_39 & 1) == 0)
            char* x19_1 = *(arg1 + 8)
            XString::XString(&var_28)
            int32_t x0_42 = operator==(x19_1, &var_28)
            XString::~XString()
            
            if ((x0_42 & 1) != 0)
                SetDefaultAILevel(2)
        else
            SetDefaultAILevel(1)
    else
        SetDefaultAILevel(0)
else
    SetDefaultAILevel(3)

return 0
