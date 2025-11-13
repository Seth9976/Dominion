// 函数: _Z20ExpansionCanActivate12DomExpansionRK14DomSetupConfig
// 地址: 0xb30760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void var_18
int32_t var_14

if ((DomConfigHasExpansion(arg2, zx.q(x19), nullptr, &var_18) & 1) != 0 && var_14 == 0xa)
    return 0

if (x19 != 0x13)
    return zx.q(ProfileHasEntitlementForExpansion(zx.q(x19), nullptr)) & 1

return zx.q(ProfileHasAnyPromos()) & 1
