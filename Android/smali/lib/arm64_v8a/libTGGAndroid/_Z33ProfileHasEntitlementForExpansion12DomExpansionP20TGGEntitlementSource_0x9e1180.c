// 函数: _Z33ProfileHasEntitlementForExpansion12DomExpansionP20TGGEntitlementSource
// 地址: 0x9e1180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 2)
    return 1

TGGEntitlementSource* var_28
TGGEntitlement* var_18
int32_t x0_2 = ProfileGetEntitlements(&var_18, &var_28)
int32_t var_2c
int32_t x0_4 = DomEntitlementsGrantsExpansion(zx.q(arg1), var_18, x0_2, &var_2c)

if (arg2 != 0 && (x0_4 & 1) != 0)
    *arg2 = *(var_28 + (sx.q(var_2c) << 2))

return zx.q(x0_4) & 1
