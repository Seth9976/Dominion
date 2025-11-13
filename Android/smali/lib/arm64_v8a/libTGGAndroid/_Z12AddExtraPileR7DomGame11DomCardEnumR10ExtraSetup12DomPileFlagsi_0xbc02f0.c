// 函数: _Z12AddExtraPileR7DomGame11DomCardEnumR10ExtraSetup12DomPileFlagsi
// 地址: 0xbc02f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg4
int32_t x22 = arg2
int32_t x0 = NextAvailableNonSupplyPile(arg1)
AddPileNoSetup(arg1, zx.q(x0), zx.q(x22), arg3, zx.q(x20), arg5)
RunPileSetup(arg1, zx.q(x22), arg3, zx.q(x20))
return zx.q(x0)
