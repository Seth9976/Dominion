// 函数: _Z20GameSpecific_GetDlcs11GameDlcAreaRPK6DlcDef
// 地址: 0xbb6fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u> 3)
    pthread_kill(pthread_self(), 6)
    return GameSepcific_TryGetDlcDef(XNoReturn()) __tailcall

switch (arg1)
    case 0
        return DomGetExpansionDlcs(arg2) __tailcall
    case 1
        *arg2 = &data_1154060
        return 3
    case 2
        return DomGetPromoDlcs(arg2) __tailcall
    case 3
        return DomGetBundleDlcs(arg2) __tailcall
