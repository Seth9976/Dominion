// 函数: _Z32KingdomHasRemovedDivineWindCardsR7DomGameP11DomCardEnum
// 地址: 0xb1c2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if ((HasDivineWindTriggered(arg1) & 1) == 0)
    x21 = 0
else
    *arg2 = *(arg1 + 0xd54)
    *(arg2 + 4) = *(arg1 + 0xd58)
    *(arg2 + 8) = *(arg1 + 0xd5c)
    *(arg2 + 0xc) = *(arg1 + 0xd60)
    *(arg2 + 0x10) = *(arg1 + 0xd64)
    *(arg2 + 0x14) = *(arg1 + 0xd68)
    *(arg2 + 0x18) = *(arg1 + 0xd6c)
    *(arg2 + 0x1c) = *(arg1 + 0xd70)
    *(arg2 + 0x20) = *(arg1 + 0xd74)
    *(arg2 + 0x24) = *(arg1 + 0xd78)
    int32_t x8_11 = *(arg1 + 0xec4)
    
    if (x8_11 == 0)
        x21 = 0xa
        
        if (*(arg1 + 0xe6c) != 0)
        label_b1c388:
            
            if ((ExtraPileIsAfterDivineWind(arg1 + 0xd54, 0) & 1) == 0)
                *(arg2 + (zx.q(x21) << 2)) = *(arg1 + 0xe6c)
                x21 += 1
    else
        x21 = 0xb
        *(arg2 + 0x28) = x8_11
        
        if (*(arg1 + 0xe6c) != 0)
            goto label_b1c388
    
    bool (* var_28)(DomCardEnum, DomCardEnum) = SortCardsByCostName
    std::__ndk1::__sort<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(arg2, 
        arg2 + (zx.q(x21) << 2), &var_28)

return zx.q(x21)
