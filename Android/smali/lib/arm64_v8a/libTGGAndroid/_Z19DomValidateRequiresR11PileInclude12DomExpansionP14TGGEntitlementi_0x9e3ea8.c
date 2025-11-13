// 函数: _Z19DomValidateRequiresR11PileInclude12DomExpansionP14TGGEntitlementi
// 地址: 0x9e3ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
PileInclude& x19 = arg1

if (arg4 s>= 1)
    TGGEntitlement* x21_1 = arg3
    uint64_t i_1 = zx.q(arg4)
    uint64_t i
    
    do
        if ((DomEntitlementGrantsExpansion(zx.q(*x21_1), zx.q(x20)).d & 1) != 0)
            return 
        
        i = i_1
        i_1 -= 1
        x21_1 += 4
    while (i != 1)

if (x20 != 2)
    *x19 = 0
