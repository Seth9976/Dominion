// 函数: _Z37GameCreateDlgHandleJoinByCodeResponseRK19JoinByCodeResultMsg
// 地址: 0x9c14f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result

if (*arg1 == 0xffffffff)
    GetTranslation("dom_msg_gamecode_error_header")
    GetTranslation("dom_msg_gamecode_error_body")
    StringReplace(XString::operator char const*(), "[code]", XString::operator char const*())
    XString::~XString()
    char var_28
    XString::XString(&var_28)
    char var_48
    XString::XString(&var_48)
    *(gGameDlgManager + 0x118) = 0x20
    XString::operator=(gGameDlgManager + 0x1b8)
    XString::operator=(gGameDlgManager + 0x1c0)
    XString::operator=(gGameDlgManager + 0x1c8)
    XString::operator=(gGameDlgManager + 0x1d0)
    *(gGameDlgManager + 0x1d8) = 0
    *(gGameDlgManager + 0x1e0) = 0
    XString::~XString()
    XString::~XString()
    XString::operator=(gMultiplayerDlg + 0x198)
    XString::~XString()
    result = XString::~XString()
else
    int64_t x0_1 = GameIdxLookupByDBID(zx.q(*(arg1 + 4)))
    
    if (x0_1.d == 0)
        *(arg1 + 4)
        result = XTrace("GameCreateDlgHandleJoinByCodeResponse couldn't find game %d")
    else if (*arg1 != 1)
        *gCreateDlg = zx.o(0)
        *(gCreateDlg + 0x10) = zx.o(0)
        *(gCreateDlg + 0x70) = 0
        *(gCreateDlg + 0x50) = zx.o(0)
        *(gCreateDlg + 0x60) = zx.o(0)
        *(gCreateDlg + 0x30) = zx.o(0)
        *(gCreateDlg + 0x40) = zx.o(0)
        *(gCreateDlg + 0x20) = zx.o(0)
        *(gCreateDlg + 0x10) = x0_1.d
        *gCreateDlg = 2
        *(gCreateDlg + 8) = 0
        GameSetup* x0_13 = GetActiveGameSetup()
        *(x0_13 + 0x28) = GameLatestVersion(4, true)
        result = GameSpecific_CreateGameShow(gCreateDlg, x0_13)
        *(gGameDlgManager + 0xc8) = 0x10
    else
        result = GameResumeMultiplayer(x0_1)

*(gMultiplayerDlg + 0x1a0) = 0
return result
