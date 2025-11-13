// 函数: _Z24DomValidateCardOwnershipR11DomCardEnumP14TGGEntitlementi
// 地址: 0x9e3f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg1

if (x20 == 0 || (x20 & 0xffffff00) == 0x200)
    return 

DomCardEnum& x19_1 = arg1

if (arg3 s>= 1)
    TGGEntitlement* x21_1 = arg2
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        if ((DomEntitlementGrantsCard(zx.q(*x21_1), zx.q(x20)).d & 1) != 0)
            return 
        
        i = i_1
        i_1 -= 1
        x21_1 += 4
    while (i != 1)

*x19_1 = 0
