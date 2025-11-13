// 函数: _Z17ValidateOwnershipR9GameSetup11TggGameType14DomConfigStyle
// 地址: 0x9eb408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TGGEntitlementSource* var_30
TGGEntitlement* var_28
int64_t result = ProfileGetEntitlements(&var_28, &var_30)

if (arg2 != 4)
    return result

return DomValidateOwnernship(arg1, var_28, result.d, zx.q(arg3))
