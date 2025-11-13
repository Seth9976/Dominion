// 函数: _Z23NeverShowNewProductIcon7DLCType
// 地址: 0x9bab04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

EntitlementDef* x0 = EntitlementLookupByDLC(arg1)

if (*(x0 + 8) != 5)
    return 0

int32_t var_48
GetBundleInfo(x0, &var_48)
int32_t x8_1 = var_48
return zx.q(0x53 u>> x8_1) & zx.q(x8_1 u< 7 ? 1 : 0)
