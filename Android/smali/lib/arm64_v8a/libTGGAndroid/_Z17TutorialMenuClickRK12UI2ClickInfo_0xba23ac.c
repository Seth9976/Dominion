// 函数: _Z17TutorialMenuClickRK12UI2ClickInfo
// 地址: 0xba23ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(zx.q(*(gTutorialMenu + 4)), 5)
else
    XString::~XString()
    GameDlgManagerShow(zx.q(*(gTutorialMenu + 4)), 5)

XString::XString(&var_28)
int32_t x0_6 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_6 & 1) != 0)
    *gTutorialMenu -= 1

XString::XString(&var_28)
int32_t x0_9 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_9 & 1) != 0)
    *gTutorialMenu += 1

XString::XString(&var_28)
int32_t x0_12 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_12 & 1) != 0)
    int32_t x8_5 = *gTutorialMenu
    int32_t x8_7
    
    if (x8_5 s< 2)
        x8_7 = x8_5 << 2
    else
        x8_7 = (x8_5 << 3) - 8
    
    GameQueueStartTutorial(*(&data_1836198 + muls.dp.d(x8_7 + *(arg1 + 0x10), 0x28)))

return 0
