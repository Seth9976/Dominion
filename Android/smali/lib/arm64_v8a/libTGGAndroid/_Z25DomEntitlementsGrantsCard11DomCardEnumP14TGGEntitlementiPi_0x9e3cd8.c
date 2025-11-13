// 函数: _Z25DomEntitlementsGrantsCard11DomCardEnumP14TGGEntitlementiPi
// 地址: 0x9e3cd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    int64_t i = 0
    
    do
        if ((DomEntitlementGrantsCard(zx.q(*(arg2 + (i << 2))), zx.q(arg1)) & 1) != 0)
            if (arg4 != 0)
                *arg4 = i.d
            
            return 1
        
        i += 1
    while (zx.q(arg3) != i)

return 0
