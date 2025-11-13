// 函数: _Z12UndoDlgClickRK12UI2ClickInfo
// 地址: 0xb1aefc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
int32_t var_18
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
    void* x0_6 = ActiveGame()
    
    if ((*(x0_6 + 0x1318) & 0xfffffffe) != 4)
        var_18 = *(x0_6 + 0x131c)
        int32_t var_14_1 = 0
        NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42b7, 8, &var_18)
        *(x0_6 + 0x1318) = 2
    else
        *(x0_6 + 0x1318) = 0
        GameDlgManagerDismiss(5, false)
        *(gDomClient + 0x20591) = 0

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_11 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_11 & 1) != 0)
    void* x0_12 = ActiveGame()
    var_18 = *(x0_12 + 0x131c)
    int32_t x8_6
    
    if (*(GetActiveProfile() + 0x42ac) == *(x0_12 + 0x1324))
        x8_6 = 2
    else
        x8_6 = 1
    
    int32_t var_14_2 = x8_6
    *(x0_12 + 0x1318) = 0
    GameDlgManagerDismiss(5, false)
    *(gDomClient + 0x20591) = 0
    NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42b7, 8, &var_18)

return 0
