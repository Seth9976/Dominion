// 函数: _Z10RulesClickRK12UI2ClickInfo
// 地址: 0x9c5280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_9c52dc
else
    XString::~XString()
label_9c52dc:
    
    if (*(gGameDlgManager + 0xcc) == 0x18)
        *(gGameDlgManager + 0xc8) = 0x17
    else if (*(gGameDlgManager + 0x2c) != 0x27)
        if (*(gGameDlgManager + 0x3c) != 0x27 || *(gGameDlgManager + 0x40) == 0)
            *(gGameDlgManager + 0xc8) = 4
        else
            GameDlgManagerDismiss(5, false)
    else if (*(gGameDlgManager + 0x30) != 0)
        GameDlgManagerDismiss(5, false)
    else
        *(gGameDlgManager + 0xc8) = 4

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0x23

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    GameSpecific_GetRulesDefs(&var_28)
    void* x8_9 = var_28
    int64_t x9_2 = sx.q(*(arg1 + 0x10)) + 1
    int32_t x10_2 = *(x8_9 + x9_2 * 0x30 + 0x10)
    
    if (x10_2 == 1)
        *(gGameDlgManager + 0xc8) = *(x8_9 + x9_2 * 0x30 + 0x20)
    else
        if (x10_2 != 0)
            pthread_kill(pthread_self(), 6)
            return HowToPlayButtons(XNoReturn()) __tailcall
        
        XOpenURL(*(x8_9 + x9_2 * 0x30 + 0x18))

XString::XString(&var_28)
int32_t x0_13 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_13 & 1) != 0)
    GameSpecific_GetRulesDefs(&var_28)
    *(gGameDlgManager + 0xc8) = *(var_28 + 0x20)

XString::XString(&var_28)
int32_t x0_17 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_17 & 1) != 0)
    *(gGameDlgManager + 0xc8) = 0x18

GameSpecific_RulesClick(arg1)
return 0
