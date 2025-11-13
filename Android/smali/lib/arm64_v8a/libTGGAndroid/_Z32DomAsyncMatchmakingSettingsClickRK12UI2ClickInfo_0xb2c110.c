// 函数: _Z32DomAsyncMatchmakingSettingsClickRK12UI2ClickInfo
// 地址: 0xb2c110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_28
XString::XString(&var_28)

if ((operator==(x20, &var_28) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(7, false)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)

void* x0_3 = GetActiveProfile()
char* x21 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_6 = operator==(x21, &var_28)
XString::~XString()

if ((x0_6 & 1) != 0)
    *(x0_3 + 0x42f0) = CurrentDateTime()
    int32_t x9_1 = *(x0_3 + 0x7578)
    int32_t x9_2
    
    if (x9_1 s< 1)
        x9_2 = 2
    else
        x9_2 = x9_1 + 1
    
    *(x0_3 + 0x7578) = x9_2
    SaveProfiles()
    PostAsyncSettings()

char* x21_2 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_10 = operator==(x21_2, &var_28)
XString::~XString()

if ((x0_10 & 1) != 0)
    *(x0_3 + 0x42f0) = CurrentDateTime()
    *(x0_3 + 0x7578) -= 1
    SaveProfiles()
    PostAsyncSettings()

char* x19_1 = *(arg1 + 8)
XString::XString(&var_28)
int32_t x0_14 = operator==(x19_1, &var_28)
XString::~XString()

if ((x0_14 & 1) != 0)
    GameSpecific_JoinAsync()

return 0
