// 函数: _Z14SmartplayClickRK12UI2ClickInfo
// 地址: 0xb94cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_238[0x208]
XString::XString(&var_238)

if ((operator==(x20, &var_238) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(5, false)
        GameDlgManagerShow(0xe, 5)
else
    XString::~XString()
    GameDlgManagerDismiss(5, false)
    GameDlgManagerShow(0xe, 5)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_238)
int32_t x0_5 = operator==(x20_2, &var_238)
XString::~XString()

if ((x0_5 & 1) != 0)
    ToggleSmartplaySetting(
        zx.q(*(&data_1151610 + muls.dp.d(*(arg1 + 0x10) + *(gSmartplayGlobals + 4) * 6, 0x158))), 
        zx.q(*gSmartplayGlobals))

char* x20_4 = *(arg1 + 8)
XString::XString(&var_238)
int32_t x0_9 = operator==(x20_4, &var_238)
XString::~XString()

if ((x0_9 & 1) != 0)
    *(gSmartplayGlobals + 4) -= 1

char* x20_6 = *(arg1 + 8)
XString::XString(&var_238)
int32_t x0_12 = operator==(x20_6, &var_238)
XString::~XString()

if ((x0_12 & 1) != 0)
    *(gSmartplayGlobals + 4) += 1

char* x20_8 = *(arg1 + 8)
XString::XString(&var_238)
int32_t x0_15 = operator==(x20_8, &var_238)
XString::~XString()

if ((x0_15 & 1) != 0)
    PlayerSmartplays* x0_17 = GetSmartplays(zx.q(*gSmartplayGlobals))
    DefaultSmartplays()
    CopySmartplays(x0_17, &var_238)
    SaveSmartplays(zx.q(*gSmartplayGlobals))

char* x19_1 = *(arg1 + 8)
XString::XString(&var_238)
int32_t x0_22 = operator==(x19_1, &var_238)
XString::~XString()

if ((x0_22 & 1) != 0)
    PlayerSmartplays* x0_24 = GetSmartplays(zx.q(*gSmartplayGlobals))
    NoSmartplays()
    CopySmartplays(x0_24, &var_238)
    SaveSmartplays(zx.q(*gSmartplayGlobals))

return 0
