// 函数: _Z15CanBuyExpansion11DomCardEnum
// 地址: 0xb39f68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_8

if ((TryCardToDLC(arg1, &var_8) & 1) == 0)
    return 0

return zx.q(ProfileDLCState(GameSepcific_GetDlcDef(&var_8)) == 1 ? 1 : 0)
