// 函数: _Z17DomValidatePromosR12DomPromoFlagP14TGGEntitlementi
// 地址: 0x9e41c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
DomPromoFlag& x19 = arg1

if ((x8 & 1) != 0)
    arg1 = ProfileHasEntitlementForCard(0x1300)
    x8 = *x19
    
    if ((arg1.d & 1) == 0)
        x8 &= 0xfffffffe
        *x19 = x8

if ((x8 & 2) != 0)
    arg1 = ProfileHasEntitlementForCard(0x130b)
    x8 = *x19
    
    if ((arg1.d & 1) == 0)
        x8 &= 0xfffffffd
        *x19 = x8

if ((x8 & 4) != 0)
    arg1 = ProfileHasEntitlementForCard(0x130a)
    x8 = *x19
    
    if ((arg1.d & 1) == 0)
        x8 &= 0xfffffffb
        *x19 = x8

if ((x8 & 8) != 0 && (ProfileHasEntitlementForCard(0x130e).d & 1) == 0)
    *x19 &= 0xfffffff7
