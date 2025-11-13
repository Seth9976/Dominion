// 函数: _Z15DebugPanelClickRK12UI2ClickInfo
// 地址: 0x9c9748
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

int32_t x20_2 = *(ActiveGame() + 0x10)
XString::XString(&var_28)
int32_t x0_6 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_6 & 1) != 0)
    GameEnd()
    GameStart(x20_2, 0, 0)

XString::XString(&var_28)
int32_t x0_10 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_10 & 1) != 0)
    XStringFromInt(x20_2)
    XClipboardCopyText(XString::operator char const*())
    XString::~XString()

XString::XString(&var_28)
int32_t x0_15 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_15 & 1) != 0)
    XString::XString()
    XClipboardPasteText(&var_28)
    *(ActiveGame() + 0x10) = atoi(XString::operator char const*())
    XString::~XString()

XString::XString(&var_28)
int32_t x0_22 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_22 & 1) != 0)
    GameDebugNextPlayer()

XString::XString(&var_28)
operator==(&var_28, *(arg1 + 8))
XString::~XString()
return 0
