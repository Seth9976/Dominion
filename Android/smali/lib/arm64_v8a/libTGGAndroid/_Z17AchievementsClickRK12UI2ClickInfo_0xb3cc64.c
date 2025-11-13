// 函数: _Z17AchievementsClickRK12UI2ClickInfo
// 地址: 0xb3cc64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(4, 5)
else
    XString::~XString()
    GameDlgManagerShow(4, 5)

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *gAchievementsData = *DomExpDefGetByIndex(*(arg1 + 0x10))
    *(gAchievementsData + 4) = 0

XString::XString(&var_28)
int32_t x0_10 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_10 & 1) != 0)
    *(gAchievementsData + 4) += 1

XString::XString(&var_28)
int32_t x0_13 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_13 & 1) != 0)
    *(gAchievementsData + 4) -= 1

return 0
