// 函数: _Z12CreditsClickRK12UI2ClickInfo
// 地址: 0x9c87c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        *(gGameDlgManager + 0xc8) = 4
else
    XString::~XString()
    *(gGameDlgManager + 0xc8) = 4

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *gCredits += 1

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *gCredits -= 1

XString::XString(&var_28)
int32_t x0_11 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    XOpenURL("https://www.mozilla.org/en-US/MPL/2.0/")

XString::XString(&var_28)
int32_t x0_14 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_14 & 1) != 0)
    XOpenURL("https://eigen.tuxfamily.org")

return 0
