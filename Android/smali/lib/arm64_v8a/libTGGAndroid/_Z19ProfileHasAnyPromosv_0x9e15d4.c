// 函数: _Z19ProfileHasAnyPromosv
// 地址: 0x9e15d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TGGEntitlementSource* var_18
TGGEntitlement* var_8
int32_t x0_1 = ProfileGetEntitlements(&var_8, &var_18)

if ((DomEntitlementsGrantsCard(0x1300, var_8, x0_1, nullptr) & 1) == 0)
    int32_t x0_4 = ProfileGetEntitlements(&var_8, &var_18)
    
    if ((DomEntitlementsGrantsCard(0x1304, var_8, x0_4, nullptr) & 1) == 0)
        int32_t x0_7 = ProfileGetEntitlements(&var_8, &var_18)
        
        if ((DomEntitlementsGrantsCard(0x1305, var_8, x0_7, nullptr) & 1) == 0)
            int32_t x0_11 = ProfileGetEntitlements(&var_8, &var_18)
            return DomEntitlementsGrantsCard(0x130e, var_8, x0_11, nullptr) __tailcall

return 1
