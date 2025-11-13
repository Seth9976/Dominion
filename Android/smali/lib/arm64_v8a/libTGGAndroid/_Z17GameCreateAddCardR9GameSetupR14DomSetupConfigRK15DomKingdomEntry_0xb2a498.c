// 函数: _Z17GameCreateAddCardR9GameSetupR14DomSetupConfigRK15DomKingdomEntry
// 地址: 0xb2a498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg3

if (x8 == 3)
    int64_t x8_5 = *(arg3 + 8)
    
    if (x8_5 s<= 0x1fffffff)
        if (x8_5 == 0x400)
            int32_t x8_12 = *(arg2 + 0xbd0)
            int32_t x9_5 = *(arg2 + 0xbd4)
            int32_t x8_13
            
            if (x8_12 s< x9_5)
                x8_13 = x9_5
            else
                x8_13 = x8_12 + 1
            
            *(arg2 + 0xbd0) = x8_12 + 1
            *(arg2 + 0xbd4) = x8_13
        else if (x8_5 == 0x8000000)
            int32_t x8_14 = *(arg2 + 0xbe0)
            int32_t x9_6 = *(arg2 + 0xbe4)
            int32_t x8_15
            
            if (x8_14 s< x9_6)
                x8_15 = x9_6
            else
                x8_15 = x8_14 + 1
            
            *(arg2 + 0xbe0) = x8_14 + 1
            *(arg2 + 0xbe4) = x8_15
        else
            if (x8_5 != 0x10000000)
                goto label_b2a8f8
            
            int32_t x8_8 = *(arg2 + 0xbe8)
            int32_t x9_3 = *(arg2 + 0xbec)
            int32_t x8_9
            
            if (x8_8 s< x9_3)
                x8_9 = x9_3
            else
                x8_9 = x8_8 + 1
            
            *(arg2 + 0xbe8) = x8_8 + 1
            *(arg2 + 0xbec) = x8_9
    else if (x8_5 s> 0xffffffffff)
        if (x8_5 == 0x10000000000)
            int32_t x8_16 = *(arg2 + 0xbf0)
            int32_t x9_7 = *(arg2 + 0xbf4)
            int32_t x8_17
            
            if (x8_16 s< x9_7)
                x8_17 = x9_7
            else
                x8_17 = x8_16 + 1
            
            *(arg2 + 0xbf0) = x8_16 + 1
            *(arg2 + 0xbf4) = x8_17
        else
            if (x8_5 != 0x80000000000)
                goto label_b2a8f8
            
            *(arg2 + 0xbf9) = 1
    else if (x8_5 == 0x20000000)
        int32_t x8_10 = *(arg2 + 0xbd8)
        int32_t x9_4 = *(arg2 + 0xbdc)
        int32_t x8_11
        
        if (x8_10 s< x9_4)
            x8_11 = x9_4
        else
            x8_11 = x8_10 + 1
        
        *(arg2 + 0xbd8) = x8_10 + 1
        *(arg2 + 0xbdc) = x8_11
    else
        if (x8_5 != 0x4000000000)
            goto label_b2a8f8
        
        *(arg2 + 0xbf8) = 1
    
    AddAnyExpansionsRequiredForLandscapes(arg2 + 0xbc8, arg2 + 0x9c8)
    SaveSetupData(arg1, arg2)
    return 0

if (x8 == 2)
    if ((ProfileHasEntitlementForExpansion(zx.q(*(arg3 + 8)), nullptr) & 1) == 0)
        return 1
    
    void* x0_9 = FindOrAddExpSetup(arg2, zx.q(*(arg3 + 8)), *V2I0)
    int32_t x8_6 = *(x0_9 + 8)
    int32_t x9_2 = *(x0_9 + 0xc)
    int32_t x8_7
    
    if (x8_6 s< x9_2)
        x8_7 = x9_2
    else
        x8_7 = x8_6 + 1
    
    *(x0_9 + 8) = x8_6 + 1
    *(x0_9 + 0xc) = x8_7
    SaveSetupData(arg1, arg2)
    return 0

if (x8 != 1)
label_b2a8f8:
    pthread_kill(pthread_self(), 6)
    DomSetupConfig* x0_27
    DomKingdomEntry* x1_11
    x0_27, x1_11 = XNoReturn()
    return ExistingKingdomCards(x0_27, x1_11) __tailcall

if ((*(DomDefGet(zx.q(*(arg3 + 4)), zx.q(*(arg1 + 0x28))) + 0xc8) & 0x7020047004810) == 0
        && (ProfileHasEntitlementForCard(zx.q(*(arg3 + 4))) & 1) != 0)
    void* x0_4
    int128_t v0_1
    x0_4, v0_1 = GetClient()
    uint64_t x1_1
    int32_t x8_3
    
    if (*(x0_4 + 0x5068) != 0)
        void* x0_5
        x0_5, v0_1 = ActiveGame()
        x1_1 = zx.q(*(x0_5 + 0x30))
        x8_3 = *arg3
        
        if (x8_3 == 1)
            goto label_b2a6f8
        
        goto label_b2a524
    
    x1_1 = 0x18
    x8_3 = *arg3
    int64_t x8_4
    
    if (x8_3 != 1)
    label_b2a524:
        
        if (x8_3 == 3)
            x8_4 = *(arg3 + 8)
            int64_t x9_1
            
            if (x8_4 s<= 0x1fffffff)
                if (x8_4 == 0x400 || x8_4 == 0x8000000)
                    goto label_b2a744
                
                x9_1 = 0x10000000
                goto label_b2a738
            
            if (x8_4 == 0x20000000 || x8_4 == 0x4000000000)
                goto label_b2a744
            
            x9_1 = 0x10000000000
        label_b2a738:
            
            if (x8_4 != x9_1)
                goto label_b2a768
            
            goto label_b2a744
        
    label_b2a768:
        
        if (*arg2 == 0)
            *(arg2 + (0 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x10) == 0)
            *(arg2 + (1 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x20) == 0)
            *(arg2 + (2 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x30) == 0)
            *(arg2 + (3 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x40) == 0)
            *(arg2 + (4 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x50) == 0)
            *(arg2 + (5 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x60) == 0)
            *(arg2 + (6 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x70) == 0)
            *(arg2 + (7 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x80) == 0)
            *(arg2 + (8 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
        else if (*(arg2 + 0x90) == 0)
            *(arg2 + (9 << 4)) = *arg3
            SaveSetupData(arg1, arg2)
    else
    label_b2a6f8:
        int32_t x0_14
        x0_14, v0_1 = IsLandscape(zx.q(*(arg3 + 4)), x1_1)
        
        if ((x0_14 & 1) == 0)
            goto label_b2a768
        
        int32_t x8_18 = *arg3
        
        if (x8_18 != 1)
            if (x8_18 != 3)
                goto label_b2a7ec
            
            x8_4 = *(arg3 + 8)
        label_b2a744:
            
            if (x8_4 != 0x4000000000)
                goto label_b2a804
            
            goto label_b2a758
        
        void* x0_18
        x0_18, v0_1 = DomDefGet(zx.q(*(arg3 + 4)), zx.q(*(arg1 + 0x28)))
        int32_t var_24
        
        if ((zx.d(*(x0_18 + 0xcc)) & 0x40) != 0)
        label_b2a758:
            int32_t x0_16
            x0_16, v0_1 = HasAlly(arg2, &var_24, zx.q(*(arg1 + 0x28)))
            
            if ((x0_16 & 1) == 0)
                goto label_b2a7e8
            
        label_b2a838:
            *(arg2 + sx.q(var_24) * 0x48 + 0xa0) = *arg3
            SaveSetupData(arg1, arg2)
        else
        label_b2a7e8:
            x8_18 = *arg3
        label_b2a7ec:
            
            if (x8_18 == 1)
                void* x0_20
                x0_20, v0_1 = DomDefGet(zx.q(*(arg3 + 4)), zx.q(*(arg1 + 0x28)))
                
                if ((zx.d(*(x0_20 + 0xcd)) & 8) != 0)
                label_b2a830:
                    int32_t x0_22
                    x0_22, v0_1 = HasProphecy(arg2, &var_24, zx.q(*(arg1 + 0x28)))
                    
                    if ((x0_22 & 1) != 0)
                        goto label_b2a838
            else if (x8_18 == 3)
                x8_4 = *(arg3 + 8)
            label_b2a804:
                
                if (x8_4 == 0x80000000000)
                    goto label_b2a830
            
            if (*(arg2 + 0xa0) == 0)
                *(arg2 + 0xa0) = *arg3
                SaveSetupData(arg1, arg2)
            else if (*(arg2 + 0xe8) == 0)
                *(arg2 + 0xe8) = *arg3
                SaveSetupData(arg1, arg2)
            else if (*(arg2 + 0x130) == 0)
                *(arg2 + 2 * 0x48 + 0xa0) = *arg3
                SaveSetupData(arg1, arg2)
            else if (*(arg2 + 0x178) == 0)
                *(arg2 + 3 * 0x48 + 0xa0) = *arg3
                SaveSetupData(arg1, arg2)

return 1
