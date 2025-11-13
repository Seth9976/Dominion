// 函数: _Z30DomCreateKingdomModifiersClickRK12UI2ClickInfo
// 地址: 0xb2f9d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_18
XString::XString(&var_18)

if ((operator==(x20, &var_18) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(7, false)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_5 = operator==(x20_2, &var_18)
XString::~XString()

if ((x0_5 & 1) != 0)
    StoreItemDlgOpen(0x800000000, 0x10, 0x7ef)
    GameDlgManagerDismiss(7, false)
    ClearTaptip()

char* x20_4 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_8 = operator==(x20_4, &var_18)
XString::~XString()

if ((x0_8 & 1) != 0)
    StoreItemDlgOpen(0x400100000000, 0x10, 0x7ef)
    GameDlgManagerDismiss(7, false)
    ClearTaptip()

char* x20_6 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_11 = operator==(x20_6, &var_18)
XString::~XString()

if ((x0_11 & 1) != 0)
    ToggleKingdomModifier(*(arg1 + 0x10), 0)

char* x20_8 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_15 = operator==(x20_8, &var_18)
XString::~XString()

if ((x0_15 & 1) != 0)
    ToggleKingdomModifier(*(arg1 + 0x10), 1)

char* x20_10 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_19 = operator==(x20_10, &var_18)
XString::~XString()

if ((x0_19 & 1) != 0)
    ToggleKingdomModifier(*(arg1 + 0x10), 2)

return 0
