// 函数: _Z25DomValidateEntryOwnershipR15DomKingdomEntryP14TGGEntitlementi
// 地址: 0x9e46e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
DomKingdomEntry& x19 = arg1
TGGEntitlement* x20 = arg2

if (x8 == 3)
    int64_t x8_2 = *(x19 + 8)
    
    if (x8_2 s<= 0xfffffff)
        if (x8_2 != 0x400)
            if (x8_2 != 0x8000000)
                goto label_9e4974
            
            if (arg3 s>= 1)
                uint64_t i_11 = zx.q(arg3)
                uint64_t i
                
                do
                    if ((DomEntitlementGrantsExpansion(zx.q(*x20), 0xe).d & 1) != 0)
                        return 
                    
                    i = i_11
                    i_11 -= 1
                    x20 += 4
                while (i != 1)
        else if (arg3 s>= 1)
            uint64_t i_14 = zx.q(arg3)
            TGGEntitlement* x22_2 = x20
            uint64_t i_16 = i_14
            uint64_t i_1
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x22_2), 0xb).d & 1) != 0)
                    return 
                
                i_1 = i_16
                i_16 -= 1
                x22_2 += 4
            while (i_1 != 1)
            TGGEntitlement* x22_3 = x20
            uint64_t i_17 = i_14
            uint64_t i_2
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x22_3), 0xc).d & 1) != 0)
                    return 
                
                i_2 = i_17
                i_17 -= 1
                x22_3 += 4
            while (i_2 != 1)
            TGGEntitlement* x22_4 = x20
            uint64_t i_18 = i_14
            uint64_t i_3
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x22_4), 0xf).d & 1) != 0)
                    return 
                
                i_3 = i_18
                i_18 -= 1
                x22_4 += 4
            while (i_3 != 1)
            TGGEntitlement* x22_5 = x20
            uint64_t i_19 = i_14
            uint64_t i_4
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x22_5), 0x12).d & 1) != 0)
                    return 
                
                i_4 = i_19
                i_19 -= 1
                x22_5 += 4
            while (i_4 != 1)
            uint64_t i_5
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x20), 0x11).d & 1) != 0)
                    return 
                
                i_5 = i_14
                i_14 -= 1
                x20 += 4
            while (i_5 != 1)
    else if (x8_2 == 0x10000000)
        if (arg3 s>= 1)
            uint64_t i_12 = zx.q(arg3)
            uint64_t i_6
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x20), 0xf).d & 1) != 0)
                    return 
                
                i_6 = i_12
                i_12 -= 1
                x20 += 4
            while (i_6 != 1)
    else if (x8_2 != 0x20000000)
        if (x8_2 != 0x10000000000)
            goto label_9e4974
        
        if (arg3 s>= 1)
            uint64_t i_10 = zx.q(arg3)
            uint64_t i_7
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x20), 0x11).d & 1) != 0)
                    return 
                
                i_7 = i_10
                i_10 -= 1
                x20 += 4
            while (i_7 != 1)
    else if (arg3 s>= 1)
        uint64_t i_13 = zx.q(arg3)
        uint64_t i_8
        
        do
            if ((DomEntitlementGrantsExpansion(zx.q(*x20), 0xc).d & 1) != 0)
                return 
            
            i_8 = i_13
            i_13 -= 1
            x20 += 4
        while (i_8 != 1)
else if (x8 != 2)
    if (x8 != 1)
    label_9e4974:
        pthread_kill(pthread_self(), 6)
        GameSetup* x0_12
        TGGEntitlement* x1_2
        int32_t x2
        int64_t x3
        x0_12, x1_2, x2, x3 = XNoReturn()
        return DomValidateOwnernship(x0_12, x1_2, x2, x3) __tailcall
    
    int32_t x21_1 = *(x19 + 4)
    
    if (x21_1 == 0 || (x21_1 & 0xffffff00) == 0x200)
    label_9e4924:
        
        if (x21_1 != 0)
            return 
    else
        if (arg3 s>= 1)
            uint64_t x22_1 = zx.q(arg3)
            
            while (true)
                if ((DomEntitlementGrantsCard(zx.q(*x20), zx.q(x21_1)).d & 1) != 0)
                    x21_1 = *(x19 + 4)
                    break
                
                uint64_t temp6_1 = x22_1
                x22_1 -= 1
                x20 += 4
                
                if (temp6_1 == 1)
                    goto label_9e4750
            
            goto label_9e4924
        
    label_9e4750:
        *(x19 + 4) = 0
else if (arg3 s>= 1)
    int32_t x21_2 = *(x19 + 8)
    uint64_t i_15 = zx.q(arg3)
    uint64_t i_9
    
    do
        if ((DomEntitlementGrantsExpansion(zx.q(*x20), zx.q(x21_2)).d & 1) != 0)
            return 
        
        i_9 = i_15
        i_15 -= 1
        x20 += 4
    while (i_9 != 1)

*x19 = 0
