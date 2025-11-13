// 函数: _Z25DomValidateCardsOwnershipP11DomCardEnumiP14TGGEntitlementi
// 地址: 0x9e3fc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

DomCardEnum* x19_1 = arg1
uint64_t i_1 = zx.q(arg2)

if (arg4 s<= 0)
    uint64_t i
    
    do
        int32_t x8_2 = *x19_1
        
        if (x8_2 == 0)
            break
        
        if ((x8_2 & 0xffffff00) != 0x200)
            *x19_1 = 0
        
        i = i_1
        i_1 -= 1
        x19_1 += 4
    while (i != 1)
else
    int64_t x23_1 = 0
    
    do
        int32_t x21_1 = *(x19_1 + (x23_1 << 2))
        
        if (x21_1 == 0)
            break
        
        if ((x21_1 & 0xffffff00) != 0x200)
            TGGEntitlement* x25_1 = arg3
            uint64_t x26_1 = zx.q(arg4)
            
            while ((DomEntitlementGrantsCard(zx.q(*x25_1), zx.q(x21_1)).d & 1) == 0)
                uint64_t temp1_1 = x26_1
                x26_1 -= 1
                x25_1 += 4
                
                if (temp1_1 == 1)
                    *(x19_1 + (x23_1 << 2)) = 0
                    break
        
        x23_1 += 1
    while (x23_1 != i_1)
