// 函数: _Z17AddExpansionCardsRK14DomSetupConfig12DomExpansion23DomExpansionEditionFlagP11DomCardEnumRii11DomCardType14RandomizerFlag
// 地址: 0xbf3c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x4
uint64_t x5

if (arg3 != 3)
    x4 = zx.q(arg3 != 1 ? 1 : 0)
    x5 = zx.q(arg3 == 0 ? 1 : 0)
else
    x4 = 1
    x5 = 1

int32_t var_18 = arg8
int64_t var_20 = arg7
return AddExpansionCards(arg1, arg2, arg4, arg5, x4, x5, 0, zx.q(arg6))
