// 函数: _Z20GameMsgBoxTranslatedPKcS0_11GameDlgTypeS0_S0_PFvvES3_
// 地址: 0x9bc970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gGameDlgManager + 0x118) = arg3

if (arg1 != 0)
    L(arg1, nullptr)
    XString::operator=(gGameDlgManager + 0x1b8)
    
    if (arg2 == 0)
        goto label_9bca28
    
    goto label_9bc9c4

XString::operator=(gGameDlgManager + 0x1b8)

if (arg2 == 0)
label_9bca28:
    XString::operator=(gGameDlgManager + 0x1c0)
    
    if (arg4 != 0)
        goto label_9bc9e0
    
    goto label_9bca3c

label_9bc9c4:
L(arg2, nullptr)
XString::operator=(gGameDlgManager + 0x1c0)

if (arg4 == 0)
label_9bca3c:
    XString::operator=(gGameDlgManager + 0x1c8)
    
    if (arg5 != 0)
        L(arg5, nullptr)
else
label_9bc9e0:
    L(arg4, nullptr)
    XString::operator=(gGameDlgManager + 0x1c8)
    
    if (arg5 != 0)
        L(arg5, nullptr)

int64_t result = XString::operator=(gGameDlgManager + 0x1d0)
*(gGameDlgManager + 0x1d8) = arg6
*(gGameDlgManager + 0x1e0) = arg7
return result
