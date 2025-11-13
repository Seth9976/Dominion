// 函数: _Z14LogLayoutClickRK12UI2ClickInfo
// 地址: 0xba1d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(5, false)
else
    XString::~XString()
    GameDlgManagerDismiss(5, false)

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    GameDlgCreateGameShow(3, 0, 0)

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *(gDomSetSave + 8) = -0xffffffff
    XString::operator=(gDomSetSave)
    GameDlgManagerShow(0x7f0, 7)

XString::XString(&var_28)
int32_t x0_12 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_12 & 1) != 0)
    *(GetLocalSettings() + 0x38) = 1
    SaveLocalSettings()
    GameDlgManagerDismiss(5, false)
    GameDlgManagerRefreshMainLayout()

XString::XString(&var_28)
int32_t x0_16 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_16 & 1) != 0)
    *(gLogData + 0xc0c) = 1
    *(gLogData + 0xc00) = 0
    *(gLogData + 0xc08) = 0xffffffff
    *(gLogData + 0xc10) = 0x1ffffffff

XString::XString(&var_28)
int32_t x0_19 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_19 & 1) != 0)
    *(gLogData + 0xc0c) = 0
    *(gLogData + 0xc08) = 0xffffffff
    *(gLogData + 0xc10) = 0xffffffff

LogItemClick(arg1)
return 0
