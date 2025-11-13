// 函数: _Z29HasEntitlementsGrantedProduct7DLCType
// 地址: 0x9ba98c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TGGEntitlementSource* var_20
TGGEntitlement* var_18
int32_t x0_1 = ProfileGetEntitlements(&var_18, &var_20)
return zx.q(DomEntitlementsGrantsDLC(zx.q(arg1), var_18, x0_1, nullptr)) & 1
