// 函数: _Z13ExpIsSelected12DomExpansion20ExpansionButtonStyleP23DomExpansionEditionFlag
// 地址: 0xb405c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 7)
    pthread_kill(pthread_self(), 6)
    uint64_t x0_19
    int64_t x1_5
    x0_19, x1_5 = XNoReturn()
    return HasExpansion(x0_19, x1_5) __tailcall

int32_t x19 = arg1
int32_t var_19c0
int32_t var_19bc[0x263]

switch (arg2)
    case 0
        void* x0_1 = GetActiveGameSetup()
        DomSetupConfigFromString(XString::operator char const*(), *(x0_1 + 0x28))
        Vec2I var_28
        int32_t var_24
        
        if ((DomConfigHasExpansion(&var_19c0, zx.q(x19), arg3, &var_28) & 1) == 0 || var_24 != 0xa)
            return 0
        
        return 1
    case 1, 2
        return zx.q(*(gCardGallery + 8) == x19 ? 1 : 0)
    case 3
        return zx.q(*(gSetGallery + 4) == x19 ? 1 : 0)
    case 4
        return zx.q(*gAchievementsData == x19 ? 1 : 0)
    case 5
        void* x0_6 = GetActiveProfile()
        
        if (x19 == 0)
            return 1
        
        int32_t x0_8 = DomExpansionsFromBitset(zx.q(*(x0_6 + 0x7568)), &var_19c0)
        
        if (x0_8 s< 1)
            return 0
        
        if (var_19c0 == x19)
            return 1
        
        uint64_t x8_7 = zx.q(x0_8)
        uint64_t x9_2 = 0
        int32_t x12_1
        
        do
            if (x8_7 - 1 == x9_2)
                x9_2 = x8_7
                break
            
            x12_1 = var_19bc[x9_2]
            x9_2 += 1
        while (x12_1 != x19)
        return zx.q(x9_2 u< x8_7 ? 1 : 0)
    case 6
        return 0
    case 7
        if (x19 != 2)
            uint64_t x8_5
            uint64_t x9_1
            
            if (x19 != 0x13)
                if ((ProfileHasEntitlementForExpansion(zx.q(x19), nullptr) & 1) != 0)
                    void* x0_15 = GetActiveProfile()
                    
                    if (x19 == 0)
                        return 1 ^ 1
                    
                    int32_t x0_17 = DomExpansionsFromBitset(zx.q(*(x0_15 + 0x428c)), &var_19c0)
                    
                    if (x0_17 s< 1)
                        return 1
                    
                    if (var_19c0 == x19)
                        return 1 ^ 1
                    
                    x8_5 = zx.q(x0_17)
                    x9_1 = 0
                    int32_t x12_2
                    
                    do
                        if (x8_5 - 1 == x9_1)
                            goto label_b40808
                        
                        x12_2 = var_19bc[x9_1]
                        x9_1 += 1
                    while (x12_2 != x19)
                    return zx.q(x9_1 u< x8_5 ? 1 : 0) ^ 1
            else if ((ProfileHasAnyPromos() & 1) != 0)
                int32_t x0_12 =
                    DomExpansionsFromBitset(zx.q(*(GetActiveProfile() + 0x428c)), &var_19c0)
                
                if (x0_12 s< 1)
                    return 1
                
                if (var_19c0 == 0x13)
                    return 1 ^ 1
                
                x8_5 = zx.q(x0_12)
                x9_1 = 0
                int32_t i
                
                do
                    if (x8_5 - 1 == x9_1)
                    label_b40808:
                        x9_1 = x8_5
                        break
                    
                    i = var_19bc[x9_1]
                    x9_1 += 1
                while (i != 0x13)
                return zx.q(x9_1 u< x8_5 ? 1 : 0) ^ 1
        
        return 0
