// 函数: _Z23RandomizerDeck_GenerateR14RandomizerDeckRK14DomSetupConfigR10DomKingdom14DomGameVersion14RandomizerFlag
// 地址: 0xbfae80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_6c = arg4
*(arg1 + 0xc80) = 0
*(arg1 + 0x1904) = 0
*(arg1 + 0x2588) = 0
*(arg1 + 0x3e8c) = 0
int32_t var_7c = arg5

if ((DomConfigHasExpansion(arg2, 2, nullptr, nullptr) & 1) == 0)
    int32_t var_b8_1 = var_7c
    int64_t var_c0_1 = 0
    AddExpansionCards(arg2, 2, arg1 + 0xc84, arg1 + 0x1904, 0, 0, 0, zx.q(var_6c))

int32_t* x27 = ExpansionEnumerator::begin()
int64_t x0_6 = ExpansionEnumerator::end()

if (x27 != x0_6)
    uint64_t x22_1 = zx.q(*EXP_PROMOS_COUNT)
    
    while (true)
        int32_t fp_1 = *x27
        int32_t var_68
        
        if ((DomConfigHasExpansion(arg2, zx.q(fp_1), nullptr, &var_68) & 1) != 0)
            if (fp_1 != 0x13)
                int32_t x0_15 = DomConfigEditionFlag(arg2, zx.q(fp_1))
                int32_t var_64
                
                if (x0_15 != 0xffffffff)
                    if (var_68 != var_64)
                        goto label_bfb10c
                    
                    goto label_bfb0c8
                
                x0_15 = DefaultEditionFlag(var_6c, zx.q(fp_1))
                DomSetupConfig const& x0_7
                uint64_t x1
                void* __offset(RandomizerDeck, 0xc84) x2_1
                void* __offset(RandomizerDeck, 0x2588) x3_1
                uint64_t x4
                uint64_t x5_1
                
                if (var_68 == var_64)
                label_bfb0c8:
                    
                    if (fp_1 != 2)
                        int32_t x8_19
                        
                        if (x0_15 != 3)
                            x8_19 = var_7c
                            x4 = zx.q(x0_15 != 1 ? 1 : 0)
                            x5_1 = zx.q(x0_15 == 0 ? 1 : 0)
                        else
                            x8_19 = var_7c
                            x4 = 1
                            x5_1 = 1
                        
                        int32_t var_b8_5 = x8_19
                        x2_1 = arg1 + 0x1908
                        x3_1 = arg1 + 0x2588
                        int64_t var_c0_4 = 0
                        x0_7 = arg2
                        x1 = zx.q(fp_1)
                    else
                        if (x0_15 != 3)
                            x4 = zx.q(x0_15 != 1 ? 1 : 0)
                            x5_1 = zx.q(x0_15 == 0 ? 1 : 0)
                            int32_t var_b8_4 = var_7c
                            x1 = 2
                        else
                            x1 = 2
                            x4 = 1
                            x5_1 = 1
                            int32_t var_b8_3 = var_7c
                        
                        x2_1 = arg1 + 0xc84
                        x3_1 = arg1 + 0x1904
                        int64_t var_c0_3 = 0
                        x0_7 = arg2
                else
                label_bfb10c:
                    int32_t x8_4
                    
                    if (x0_15 != 3)
                        x8_4 = var_7c
                        x4 = zx.q(x0_15 != 1 ? 1 : 0)
                        x5_1 = zx.q(x0_15 == 0 ? 1 : 0)
                    else
                        x8_4 = var_7c
                        x4 = 1
                        x5_1 = 1
                    
                    int32_t var_b8_2 = x8_4
                    x3_1 = arg1 + 0xc80
                    x0_7 = arg2
                    x1 = zx.q(fp_1)
                    x2_1 = arg1
                    int64_t var_c0_2 = 0
                
                AddExpansionCards(x0_7, x1, x2_1, x3_1, x4, x5_1, 0, zx.q(var_6c))
            else
                int32_t x0_11 = DomConfigEditionFlag(arg2, 0x13)
                
                if (x22_1.d s>= 1)
                    int64_t x24_1 = 0
                    int32_t* x19_1 = *EXP_PROMOS_DEFS
                    
                    while (true)
                        if ((zx.d(*(x19_1 + x24_1 * 0x780 + 0xce)) & 1) == 0
                                && (x19_1[x24_1 * 0x1e0] & x0_11) != 0)
                            int32_t x26_1 = *(x19_1 + x24_1 * 0x780 + 0xc0)
                            
                            if ((IsInConfig(arg2, zx.q(x26_1)) & 1) == 0)
                                int64_t x8_10 = 0
                                
                                while (true)
                                    int32_t x9_2 = *(arg2 + 0xc04 + x8_10)
                                    
                                    if (x9_2 != 0)
                                        if (x9_2 == x26_1)
                                            break
                                        
                                        x8_10 += 4
                                        
                                        if (x8_10 != 0xaf0)
                                            continue
                                    
                                    if (*(x19_1 + x24_1 * 0x780 + 4) s> var_6c)
                                        break
                                    
                                    if (*(x19_1 + x24_1 * 0x780 + 8) s> var_6c)
                                        int64_t x8_15 = sx.q(*(arg1 + 0xc80))
                                        *(arg1 + 0xc80) = x8_15.d + 1
                                        *(arg1 + (x8_15 << 2)) = x26_1
                                    
                                    break
                        
                        x24_1 += 1
                        
                        if (x24_1 == x22_1)
                            break
        
        x27 = &x27[1]
        
        if (x27 == x0_6)
            break

FilterDisallowedCards(zx.q(var_6c), arg2, arg1, arg1 + 0xc80)
FilterDisallowedCards(zx.q(var_6c), arg2, arg1 + 0xc84, arg1 + 0x1904)
int64_t result = FilterDisallowedCards(zx.q(var_6c), arg2, arg1 + 0x1908, arg1 + 0x2588)

for (int64_t i = 0; i != 0xa; i += 1)
    int32_t j_6 = *(arg3 + (i << 2))
    
    if (j_6 == 0)
        break
    
    result = GetSplitPileSource(zx.q(j_6))
    RandomizerDeck& x10_1 = arg1
    uint64_t x9_8 = zx.q(*(arg1 + 0xc80))
    int32_t j
    
    if (result.d == 0)
        j = j_6
    else
        j = result.d
    
    uint64_t x11_1 = x9_8
    uint64_t x9_9
    
    if (x9_8.d s>= 1)
        while (*x10_1 != j)
            uint64_t temp0_1 = x11_1
            x11_1 -= 1
            x10_1 += 4
            
            if (temp0_1 == 1)
                goto label_bfb264
        
        *(arg1 + 0xc80) = x9_8.d - 1
        *x10_1 = *(arg1 + ((sx.q(x9_8.d) - 1) << 2))
        x9_9 = zx.q(*(arg1 + 0x1904))
        
        if (x9_9.d s< 1)
            goto label_bfb2b4
        
        goto label_bfb294
    
label_bfb264:
    x9_9 = zx.q(*(arg1 + 0x1904))
    uint64_t j_8
    
    if (x9_9.d s>= 1)
    label_bfb294:
        uint64_t x11_2 = x9_9
        DomCardEnum* x10_2 = arg1 + 0xc84
        
        while (*x10_2 != j)
            uint64_t temp2_1 = x11_2
            x11_2 -= 1
            x10_2 += 4
            
            if (temp2_1 == 1)
                goto label_bfb2b4
        
        *(arg1 + 0x1904) = x9_9.d - 1
        *x10_2 = *(arg1 + ((sx.q(x9_9.d) - 1) << 2) + 0xc84)
        j_8 = zx.q(*(arg1 + 0x2588))
        
        if (j_8.d s>= 1)
            goto label_bfb2e8
    else
    label_bfb2b4:
        j_8 = zx.q(*(arg1 + 0x2588))
        
        if (j_8.d s>= 1)
        label_bfb2e8:
            uint64_t j_4 = j_8
            void* __offset(RandomizerDeck, 0x1908) x10_3 = arg1 + 0x1908
            uint64_t j_1
            
            do
                if (*x10_3 == j)
                    *(arg1 + 0x2588) = j_8.d - 1
                    *x10_3 = *(arg1 + ((sx.q(j_8.d) - 1) << 2) + 0x1908)
                    break
                
                j_1 = j_4
                j_4 -= 1
                x10_3 += 4
            while (j_1 != 1)

int32_t i_11 = *(arg3 + 0x28)

if (i_11 != 0)
    result = GetSplitPileSource(zx.q(i_11))
    uint64_t x9_17 = zx.q(*(arg1 + 0xc80))
    int32_t i_1
    
    if (result.d == 0)
        i_1 = i_11
    else
        i_1 = result.d
    
    uint64_t x9_18
    
    if (x9_17.d s>= 1)
        uint64_t x11_3 = x9_17
        RandomizerDeck& x10_4 = arg1
        
        while (*x10_4 != i_1)
            uint64_t temp1_1 = x11_3
            x11_3 -= 1
            x10_4 += 4
            
            if (temp1_1 == 1)
                goto label_bfb354
        
        *(arg1 + 0xc80) = x9_17.d - 1
        *x10_4 = *(arg1 + ((sx.q(x9_17.d) - 1) << 2))
        x9_18 = zx.q(*(arg1 + 0x1904))
        
        if (x9_18.d s< 1)
            goto label_bfb3a4
        
        goto label_bfb384
    
label_bfb354:
    x9_18 = zx.q(*(arg1 + 0x1904))
    uint64_t x9_26
    
    if (x9_18.d s>= 1)
    label_bfb384:
        void* __offset(RandomizerDeck, 0xc84) x10_5 = arg1 + 0xc84
        uint64_t x11_4 = x9_18
        
        while (*x10_5 != i_1)
            uint64_t temp4_1 = x11_4
            x11_4 -= 1
            x10_5 += 4
            
            if (temp4_1 == 1)
                goto label_bfb3a4
        
        *(arg1 + 0x1904) = x9_18.d - 1
        *x10_5 = *(arg1 + ((sx.q(x9_18.d) - 1) << 2) + 0xc84)
        x9_26 = zx.q(*(arg1 + 0x2588))
        
        if (x9_26.d s< 1)
            goto label_bfb3fc
        
        goto label_bfb3dc
    
label_bfb3a4:
    x9_26 = zx.q(*(arg1 + 0x2588))
    int32_t i_12
    
    if (x9_26.d s>= 1)
    label_bfb3dc:
        void* __offset(RandomizerDeck, 0x1908) x10_6 = arg1 + 0x1908
        uint64_t x11_5 = x9_26
        
        while (*x10_6 != i_1)
            uint64_t temp7_1 = x11_5
            x11_5 -= 1
            x10_6 += 4
            
            if (temp7_1 == 1)
                goto label_bfb3fc
        
        *(arg1 + 0x2588) = x9_26.d - 1
        *x10_6 = *(arg1 + ((sx.q(x9_26.d) - 1) << 2) + 0x1908)
        i_12 = *(arg3 + 0x64)
        
        if (i_12 != 0)
            goto label_bfb42c
    else
    label_bfb3fc:
        i_12 = *(arg3 + 0x64)
        
        if (i_12 != 0)
        label_bfb42c:
            result = GetSplitPileSource(zx.q(i_12))
            uint64_t x9_27 = zx.q(*(arg1 + 0xc80))
            int32_t i_2
            
            if (result.d == 0)
                i_2 = i_12
            else
                i_2 = result.d
            
            uint64_t x9_28
            
            if (x9_27.d s>= 1)
                uint64_t x11_6 = x9_27
                RandomizerDeck& x10_7 = arg1
                
                while (*x10_7 != i_2)
                    uint64_t temp9_1 = x11_6
                    x11_6 -= 1
                    x10_7 += 4
                    
                    if (temp9_1 == 1)
                        goto label_bfb464
                
                *(arg1 + 0xc80) = x9_27.d - 1
                *x10_7 = *(arg1 + ((sx.q(x9_27.d) - 1) << 2))
                x9_28 = zx.q(*(arg1 + 0x1904))
                
                if (x9_28.d s< 1)
                    goto label_bfb4b4
                
                goto label_bfb494
            
        label_bfb464:
            x9_28 = zx.q(*(arg1 + 0x1904))
            uint64_t x9_36
            
            if (x9_28.d s>= 1)
            label_bfb494:
                void* __offset(RandomizerDeck, 0xc84) x10_8 = arg1 + 0xc84
                uint64_t x11_7 = x9_28
                
                while (*x10_8 != i_2)
                    uint64_t temp10_1 = x11_7
                    x11_7 -= 1
                    x10_8 += 4
                    
                    if (temp10_1 == 1)
                        goto label_bfb4b4
                
                *(arg1 + 0x1904) = x9_28.d - 1
                *x10_8 = *(arg1 + ((sx.q(x9_28.d) - 1) << 2) + 0xc84)
                x9_36 = zx.q(*(arg1 + 0x2588))
                
                if (x9_36.d s< 1)
                    goto label_bfb50c
                
                goto label_bfb4ec
            
        label_bfb4b4:
            x9_36 = zx.q(*(arg1 + 0x2588))
            int32_t i_13
            
            if (x9_36.d s>= 1)
            label_bfb4ec:
                void* __offset(RandomizerDeck, 0x1908) x10_9 = arg1 + 0x1908
                uint64_t x11_8 = x9_36
                
                while (*x10_9 != i_2)
                    uint64_t temp11_1 = x11_8
                    x11_8 -= 1
                    x10_9 += 4
                    
                    if (temp11_1 == 1)
                        goto label_bfb50c
                
                *(arg1 + 0x2588) = x9_36.d - 1
                *x10_9 = *(arg1 + ((sx.q(x9_36.d) - 1) << 2) + 0x1908)
                i_13 = *(arg3 + 0xa0)
                
                if (i_13 != 0)
                    goto label_bfb53c
            else
            label_bfb50c:
                i_13 = *(arg3 + 0xa0)
                
                if (i_13 != 0)
                label_bfb53c:
                    result = GetSplitPileSource(zx.q(i_13))
                    uint64_t x9_37 = zx.q(*(arg1 + 0xc80))
                    int32_t i_3
                    
                    if (result.d == 0)
                        i_3 = i_13
                    else
                        i_3 = result.d
                    
                    uint64_t x9_38
                    
                    if (x9_37.d s>= 1)
                        uint64_t x11_9 = x9_37
                        RandomizerDeck& x10_10 = arg1
                        
                        while (*x10_10 != i_3)
                            uint64_t temp12_1 = x11_9
                            x11_9 -= 1
                            x10_10 += 4
                            
                            if (temp12_1 == 1)
                                goto label_bfb574
                        
                        *(arg1 + 0xc80) = x9_37.d - 1
                        *x10_10 = *(arg1 + ((sx.q(x9_37.d) - 1) << 2))
                        x9_38 = zx.q(*(arg1 + 0x1904))
                        
                        if (x9_38.d s< 1)
                            goto label_bfb5c4
                        
                        goto label_bfb5a4
                    
                label_bfb574:
                    x9_38 = zx.q(*(arg1 + 0x1904))
                    uint64_t x9_46
                    
                    if (x9_38.d s>= 1)
                    label_bfb5a4:
                        void* __offset(RandomizerDeck, 0xc84) x10_11 = arg1 + 0xc84
                        uint64_t x11_10 = x9_38
                        
                        while (*x10_11 != i_3)
                            uint64_t temp13_1 = x11_10
                            x11_10 -= 1
                            x10_11 += 4
                            
                            if (temp13_1 == 1)
                                goto label_bfb5c4
                        
                        *(arg1 + 0x1904) = x9_38.d - 1
                        *x10_11 = *(arg1 + ((sx.q(x9_38.d) - 1) << 2) + 0xc84)
                        x9_46 = zx.q(*(arg1 + 0x2588))
                        
                        if (x9_46.d s< 1)
                            goto label_bfb61c
                        
                        goto label_bfb5fc
                    
                label_bfb5c4:
                    x9_46 = zx.q(*(arg1 + 0x2588))
                    int32_t x24_2
                    
                    if (x9_46.d s>= 1)
                    label_bfb5fc:
                        void* __offset(RandomizerDeck, 0x1908) x10_12 = arg1 + 0x1908
                        uint64_t x11_11 = x9_46
                        
                        while (*x10_12 != i_3)
                            uint64_t temp14_1 = x11_11
                            x11_11 -= 1
                            x10_12 += 4
                            
                            if (temp14_1 == 1)
                                goto label_bfb61c
                        
                        *(arg1 + 0x2588) = x9_46.d - 1
                        *x10_12 = *(arg1 + ((sx.q(x9_46.d) - 1) << 2) + 0x1908)
                        x24_2 = *(arg3 + 0xdc)
                        
                        if (x24_2 != 0)
                            goto label_bfb64c
                    else
                    label_bfb61c:
                        x24_2 = *(arg3 + 0xdc)
                        
                        if (x24_2 != 0)
                        label_bfb64c:
                            result = GetSplitPileSource(zx.q(x24_2))
                            uint64_t i_14 = zx.q(*(arg1 + 0xc80))
                            int32_t x8_38
                            
                            if (result.d == 0)
                                x8_38 = x24_2
                            else
                                x8_38 = result.d
                            
                            if (i_14.d s>= 1)
                                uint64_t i_8 = i_14
                                RandomizerDeck& x10_13 = arg1
                                uint64_t i_4
                                
                                do
                                    if (*x10_13 == x8_38)
                                        *(arg1 + 0xc80) = i_14.d - 1
                                        *x10_13 = *(arg1 + ((sx.q(i_14.d) - 1) << 2))
                                        break
                                    
                                    i_4 = i_8
                                    i_8 -= 1
                                    x10_13 += 4
                                while (i_4 != 1)
                            
                            uint64_t i_15 = zx.q(*(arg1 + 0x1904))
                            
                            if (i_15.d s>= 1)
                                void* __offset(RandomizerDeck, 0xc84) x10_14 = arg1 + 0xc84
                                uint64_t i_9 = i_15
                                uint64_t i_5
                                
                                do
                                    if (*x10_14 == x8_38)
                                        *(arg1 + 0x1904) = i_15.d - 1
                                        *x10_14 = *(arg1 + ((sx.q(i_15.d) - 1) << 2) + 0xc84)
                                        break
                                    
                                    i_5 = i_9
                                    i_9 -= 1
                                    x10_14 += 4
                                while (i_5 != 1)
                            
                            uint64_t i_16 = zx.q(*(arg1 + 0x2588))
                            
                            if (i_16.d s>= 1)
                                void* __offset(RandomizerDeck, 0x1908) x10_15 = arg1 + 0x1908
                                uint64_t i_10 = i_16
                                uint64_t i_6
                                
                                do
                                    if (*x10_15 == x8_38)
                                        *(arg1 + 0x2588) = i_16.d - 1
                                        *x10_15 = *(arg1 + ((sx.q(i_16.d) - 1) << 2) + 0x1908)
                                        break
                                    
                                    i_6 = i_10
                                    i_10 -= 1
                                    x10_15 += 4
                                while (i_6 != 1)

for (int64_t i_7 = 0; i_7 != 0x6b; i_7 += 1)
    int32_t j_7 = *(arg3 + (i_7 << 2) + 0x118)
    
    if (j_7 != 0)
        result = GetSplitPileSource(zx.q(j_7))
        uint64_t x9_54 = zx.q(*(arg1 + 0xc80))
        int32_t j_2
        
        if (result.d == 0)
            j_2 = j_7
        else
            j_2 = result.d
        
        RandomizerDeck& x10_16 = arg1
        uint64_t x11_12 = x9_54
        uint64_t x9_55
        
        if (x9_54.d s>= 1)
            while (*x10_16 != j_2)
                uint64_t temp3_1 = x11_12
                x11_12 -= 1
                x10_16 += 4
                
                if (temp3_1 == 1)
                    goto label_bfb7b0
            
            *(arg1 + 0xc80) = x9_54.d - 1
            *x10_16 = *(arg1 + ((sx.q(x9_54.d) - 1) << 2))
            x9_55 = zx.q(*(arg1 + 0x1904))
            
            if (x9_55.d s< 1)
                goto label_bfb800
            
            goto label_bfb7e0
        
    label_bfb7b0:
        x9_55 = zx.q(*(arg1 + 0x1904))
        uint64_t j_9
        
        if (x9_55.d s>= 1)
        label_bfb7e0:
            uint64_t x11_13 = x9_55
            void* __offset(RandomizerDeck, 0xc84) x10_17 = arg1 + 0xc84
            
            while (*x10_17 != j_2)
                uint64_t temp6_1 = x11_13
                x11_13 -= 1
                x10_17 += 4
                
                if (temp6_1 == 1)
                    goto label_bfb800
            
            *(arg1 + 0x1904) = x9_55.d - 1
            *x10_17 = *(arg1 + ((sx.q(x9_55.d) - 1) << 2) + 0xc84)
            j_9 = zx.q(*(arg1 + 0x2588))
            
            if (j_9.d s>= 1)
                goto label_bfb834
        else
        label_bfb800:
            j_9 = zx.q(*(arg1 + 0x2588))
            
            if (j_9.d s>= 1)
            label_bfb834:
                uint64_t j_5 = j_9
                void* __offset(RandomizerDeck, 0x1908) x10_18 = arg1 + 0x1908
                uint64_t j_3
                
                do
                    if (*x10_18 == j_2)
                        *(arg1 + 0x2588) = j_9.d - 1
                        *x10_18 = *(arg1 + ((sx.q(j_9.d) - 1) << 2) + 0x1908)
                        break
                    
                    j_3 = j_5
                    j_5 -= 1
                    x10_18 += 4
                while (j_3 != 1)

return result
