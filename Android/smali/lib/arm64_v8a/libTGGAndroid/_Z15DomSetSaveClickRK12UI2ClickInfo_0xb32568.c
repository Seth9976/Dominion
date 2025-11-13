// 函数: _Z15DomSetSaveClickRK12UI2ClickInfo
// 地址: 0xb32568
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
    DomSaveSetString()
    XClipboardCopyText(XString::operator char const*())
    UI2SetStateEffect(GameDlgMangerGetUI(0x7f0, 7, true), "exportToClipboard", 1, false)
    XString::~XString()

char* x20_4 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_10 = operator==(x20_4, &var_18)
XString::~XString()

if ((x0_10 & 1) != 0)
    int32_t x0_11 = DomSaveSetSave()
    void* x0_12 = GetActiveGameSetup()
    *(x0_12 + 0xc) = 1
    *(x0_12 + 0x10) = x0_11
    SaveProfiles()
    GameDlgManagerDismiss(7, false)

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_15 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_15 & 1) != 0)
    void* x0_16 = GetActiveGameSetup()
    *(x0_16 + 0xc) = 0
    *(x0_16 + 0x10) = 0
    DomSetSaveDelete(*(gDomSetSave + 0xc))
    GameDlgManagerDismiss(7, false)

return 0
