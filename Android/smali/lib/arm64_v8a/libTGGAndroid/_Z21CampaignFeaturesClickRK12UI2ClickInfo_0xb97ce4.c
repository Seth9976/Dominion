// 函数: _Z21CampaignFeaturesClickRK12UI2ClickInfo
// 地址: 0xb97ce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_18
XString::XString(&var_18)

if ((operator==(x20, &var_18) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(5, false)
else
    XString::~XString()
    GameDlgManagerDismiss(5, false)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_5 = operator==(x20_2, &var_18)
XString::~XString()

if ((x0_5 & 1) != 0)
    GameDlgManagerDismiss(5, false)

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_8 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_8 & 1) != 0)
    void* x0_9 = GetActiveProfile()
    *(x0_9 + 0x4290) ^= 1
    SaveProfiles()

return 0
