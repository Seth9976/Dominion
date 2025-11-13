// 函数: _Z16SetGalleryUpdate9UI2Handle
// 地址: 0xb429c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = arg1.d
UI2SetHandler(arg1, SetGalleryClick)
UI2SetState(zx.q(x27), UIS_GAME, 0xffffffff, 0)
int32_t x8 = *gSetGallery
int64_t* x1_2

if (x8 == 0)
    x1_2 = &data_182e770
label_b42a40:
    UI2SetState(zx.q(x27), x1_2, 0xffffffff, 0)
    GameSpecific_UpdateExpansionButtons(zx.q(x27), 3, 0)
    void* var_1ad0
    int32_t x0_4 = DomGetExpansions(&var_1ad0)
    int32_t var_100[0x28]
    int32_t x20_1
    
    if (x0_4 s< 1)
        x20_1 = 0
    else
        int64_t i = 0
        x20_1 = 0
        
        do
            void* x8_1 = var_1ad0
            
            if (*(x8_1 + i + 4) != 0)
                int32_t x0_6 = ProfileHasEntitlementForExpansion(zx.q(*(x8_1 + i)), nullptr)
                void* x8_2 = var_1ad0
                
                if ((x0_6 & 1) != 0)
                    var_100[sx.q(x20_1)] = *(x8_2 + i + 4)
                    x20_1 += 1
                
                if (*(x8_2 + i + 8) != 0
                        && (ProfileHasEntitlementForFirstEdition(zx.q(*(x8_2 + i))) & 1) != 0)
                    var_100[sx.q(x20_1)] = *(var_1ad0 + i + 8)
                    x20_1 += 1
            
            i += 0x28
        while (mulu.dp.d(x0_4, 0x28) != i)
    
    int32_t x0_10 = GetNumSetPages(zx.q(*gSetGallery), zx.q(*(gSetGallery + 4)), x20_1, &var_100, 4)
    int32_t x8_6 = *(gSetGallery + 8)
    
    if (x8_6 == 0)
        UI2SetState(zx.q(x27), &data_1830e10, 0xffffffff, 0)
        
        if (x0_10 == 0 || *(gSetGallery + 8) == x0_10 - 1)
            UI2SetState(zx.q(x27), &data_1830e28, 0xffffffff, 0)
    else if (x0_10 == 0 || x8_6 == x0_10 - 1)
        UI2SetState(zx.q(x27), &data_1830e28, 0xffffffff, 0)
    
    UI2SetInt(zx.q(x27), &data_1831668, x0_10, 0xffffffff)
    int32_t x19_1
    
    x19_1 = x0_10 s< 8 ? x0_10 : 8
    
    if (x0_10 s>= 1)
        int32_t x8_7
        
        x8_7 = x0_10 s> 8 ? x0_10 : 8
        
        int32_t x22_1 = 0
        
        do
            int32_t x8_8 = *(gSetGallery + 8)
            int32_t x9_10
            
            if (x8_8 - 4 s> x8_7 - 8)
                x9_10 = x8_7 - 8
            else
                x9_10 = x8_8 - 4
            
            int32_t x8_9
            
            x8_9 = x8_8 s< 4 ? 0 : x9_10
            
            int32_t x26_1 = x8_9 + x22_1
            XStringFromInt(x26_1 + 1)
            UI2SetText(zx.q(x27), &data_1831680, &var_1ad0, x22_1)
            XString::~XString()
            
            if (x26_1 == *(gSetGallery + 8))
                UI2SetState(zx.q(x27), &data_1831698, x22_1, 0)
            
            x22_1 += 1
        while (x22_1 s< x19_1)
    
    DomKingdomSet var_140
    int32_t x0_18 = GetCurrentSets(zx.q(*gSetGallery), *(gSetGallery + 8), 
        zx.q(*(gSetGallery + 4)), x20_1, &var_100, &var_140, 4)
    uint64_t result = UI2SetInt(zx.q(x27), &data_182e6b0, x0_18, 0xffffffff)
    
    if (x0_18 s< 1)
        return result
    
    int64_t x20_2 = 0
    void* x22_2 = &data_18113b0
    int32_t var_1b8c_1 = x27
    
    while (true)
        void* fp_1 = &var_140 + (x20_2 << 4)
        int32_t x25_2 = *fp_1
        int64_t x19_2
        
        if (x25_2 == 0)
            int64_t x0_24 = GetActiveProfile()
            x19_2 = sx.q(*(fp_1 + 8))
            UI2SetText(zx.q(x27), &data_182e6c8, x0_24 + x19_2 * 0x18 + 0x6f58, x20_2.d)
        else
            if (x25_2 != 1)
                break
            
            x19_2 = *(&var_140 + (x20_2 << 4) + 8)
            *(x19_2 + 8)
            XString::XString(&var_1ad0)
            UI2SetText(zx.q(x27), &data_182e6c8, &var_1ad0, x20_2.d)
            XString::~XString()
        
        int32_t var_1b80_1 = x19_2.d
        int32_t x0_27
        
        if (*((x20_2 << 6) + 0x1833d30) == "tbl_sets" && *((x20_2 << 6) + 0x1833d28) == x27
                && x20_2 == zx.q(*((x20_2 << 6) + 0x1833d38)) && *((x20_2 << 6) + 0x1833d40) == 0)
            x0_27 = UI2Exists(zx.q(*((x20_2 << 6) + 0x1833d60)))
        
        int32_t x28_1
        
        if (*((x20_2 << 6) + 0x1833d30) != "tbl_sets" || *((x20_2 << 6) + 0x1833d28) != x27
                || x20_2 != zx.q(*((x20_2 << 6) + 0x1833d38)) || *((x20_2 << 6) + 0x1833d40) != 0
                || (x0_27 & 1) == 0)
            int32_t x0_30 = UI2GetHandle(zx.q(x27), "tbl_sets", x20_2.d)
            *((x20_2 << 6) + 0x1833d60) = x0_30
            
            if (x0_30 == 0)
                UI2SetState(zx.q(x27), &data_182e6f8, x20_2.d, 0)
                result = UI2SetState(zx.q(x27), &data_182e6e0, x20_2.d, 0)
            else
                x28_1 = x0_30
                *((x20_2 << 6) + 0x1833d30) = "tbl_sets"
                *((x20_2 << 6) + 0x1833d28) = x27
                *((x20_2 << 6) + 0x1833d38) = x20_2.d
                *((x20_2 << 6) + 0x1833d40) = 0
                bool var_1b70
                uint64_t x0_28
                int32_t x2_11
                
                if (x25_2 != 1)
                label_b42e0c:
                    
                    if (x25_2 != 0)
                        break
                    
                    x0_28 = zx.q(x27)
                    x2_11 = x20_2.d
                label_b42f18:
                    UI2SetState(x0_28, &data_182e6e0, x2_11, 0)
                else
                label_b42e70:
                    void* x19_4 = *(&var_140 + (x20_2 << 4) + 8)
                    *(x19_4 + 8)
                    XString::XString(&var_1ad0)
                    UI2SetText(zx.q(x27), &data_182e6c8, &var_1ad0, x20_2.d)
                    XString::~XString()
                    var_1b80_1 = x19_4.d
                    int32_t x0_34 = SyncedDataKeyFromRecommendedSet(*(x19_4 + 4))
                    
                    if ((AILevelFromSyncedAchievementLevel(
                            SyncedDataGet(GetActiveProfile(), zx.q(x0_34)), &var_1b70, &var_1ad0) & 1) == 0)
                        x2_11 = -1
                        x0_28 = zx.q(x28_1)
                        goto label_b42f18
                    
                    int64_t* x1_9
                    
                    if (zx.d(var_1b70) == 0)
                        x1_9 = &data_182e728
                    else
                        x1_9 = &data_182e710
                    
                    UI2SetState(zx.q(x28_1), x1_9, 0xffffffff, 0)
                    DecalreAILevel(zx.q(x28_1), zx.q(var_1ad0.d))
                ToSetupConfig(fp_1)
                int32_t* x26_2 = &var_1ad0 | 4
                int64_t i_1 = 0
                int64_t x27_1 = 0
                int32_t fp_2 = 0
                
                do
                    if (x26_2[-1] == 1)
                        void* x21_6 = x22_2 + i_1
                        fp_2 += 1
                        int32_t x23_3
                        
                        if (*(x21_6 + 8) != "tbl_cards" || *(x22_2 + i_1) != x28_1)
                        label_b43024:
                            int32_t x0_50 = UI2GetHandle(zx.q(x28_1), "tbl_cards", x27_1.d)
                            *(x21_6 + 0x38) = x0_50
                            
                            if (x0_50 != 0)
                                void* x8_30 = x22_2 + i_1
                                x23_3 = x0_50
                                *(x21_6 + 8) = "tbl_cards"
                                *x8_30 = x28_1
                                *(x8_30 + 0x10) = x27_1.d
                                *(x8_30 + 0x18) = 0
                            label_b43050:
                                DomCardDef* x0_52 = DomDefGet(zx.q(*x26_2), 0x18)
                                XAsset** x8_31 = *(x0_52 + 0x68)
                                
                                if (x8_31 != 0)
                                    PreloadTexture(gDomClient + 0x82eb8, *x8_31, false)
                                
                                UI2SetState(zx.q(x23_3), x0_52 + 0x90, 0xffffffff, 0)
                                UI2SetState(zx.q(x23_3), &data_182d4c8, 0xffffffff, 0)
                                DomDeclareCardComponents(zx.q(x23_3), x0_52, nullptr, 0, 0)
                                DomDeclareType(zx.q(x23_3), x0_52, 0)
                                DomDeclareExpansion(zx.q(x23_3), x0_52)
                                LanguageStateSet(zx.q(x23_3))
                        else
                            void* x8_28 = x22_2 + i_1
                            
                            if (x27_1 != zx.q(*(x8_28 + 0x10)) || *(x8_28 + 0x18) != 0)
                                goto label_b43024
                            
                            void* x23_2 = x22_2 + i_1
                            
                            if ((UI2Exists(zx.q(*(x23_2 + 0x38))) & 1) == 0)
                                goto label_b43024
                            
                            x23_3 = *(x23_2 + 0x38)
                            
                            if (x23_3 != 0)
                                goto label_b43050
                    
                    i_1 += 0x40
                    x27_1 += 1
                    x26_2 = &x26_2[4]
                while (i_1 != 0x280)
                
                UI2SetInt(zx.q(x28_1), &data_18316b0, fp_2, 0xffffffff)
                
                if (x25_2 == 0)
                    int32_t x0_59 = DomExpansionsFromBitset(
                        zx.q(*(GetActiveProfile() + muls.dp.d(var_1b80_1, 0x18) + 0x6f68)), 
                        &var_1b70)
                    int64_t x8_47
                    
                    if (x0_59 == 2)
                        x8_47 = 1
                    label_b43260:
                        char* x23_6 = (&data_114dab8)[x8_47]
                        int32_t x0_66
                        
                        if (*(x20_2 * 0xc0 + 0x1835720) == x23_6
                                && *(x20_2 * 0xc0 + 0x1835718) == x28_1
                                && *(x20_2 * 0xc0 + 0x1835728) == 0xffffffff)
                            x0_66 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835750)))
                        
                        int32_t x21_12
                        
                        if (*(x20_2 * 0xc0 + 0x1835720) != x23_6
                                || *(x20_2 * 0xc0 + 0x1835718) != x28_1
                                || *(x20_2 * 0xc0 + 0x1835728) != 0xffffffff || (x0_66 & 1) == 0)
                            int32_t x0_72 = UI2GetHandle(zx.q(x28_1), x23_6)
                            *(x20_2 * 0xc0 + 0x1835750) = x0_72
                            
                            if (x0_72 != 0)
                                *(x20_2 * 0xc0 + 0x1835720) = x23_6
                                x21_12 = x0_72
                                *(x20_2 * 0xc0 + 0x1835718) = x28_1
                                *(x20_2 * 0xc0 + 0x1835728) = 0xffffffff
                                
                                if (x0_59 s> 0)
                                label_b432c0:
                                    UI2SetState(zx.q(x21_12), 
                                        *(DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1b70.d)))
                                            + 0x10), 
                                        0xffffffff, 0)
                                else
                                label_b43314:
                                    UI2SetState(zx.q(x21_12), &data_182e740, 0xffffffff, 0)
                        else
                            x21_12 = *(x20_2 * 0xc0 + 0x1835750)
                            
                            if (x21_12 != 0)
                                if (x0_59 s<= 0)
                                    goto label_b43314
                                
                                goto label_b432c0
                        char* x23_7 = (&data_114dab8)[zx.q(x0_59 != 2 ? 1 : 0)]
                        int32_t x0_74
                        
                        if (*(x20_2 * 0xc0 + 0x1835760) == x23_7
                                && *(x20_2 * 0xc0 + 0x1835758) == x28_1
                                && *(x20_2 * 0xc0 + 0x1835768) == 0xffffffff)
                            x0_74 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835790)))
                        
                        int32_t x21_14
                        
                        if (*(x20_2 * 0xc0 + 0x1835760) != x23_7
                                || *(x20_2 * 0xc0 + 0x1835758) != x28_1
                                || *(x20_2 * 0xc0 + 0x1835768) != 0xffffffff || (x0_74 & 1) == 0)
                            int32_t x0_80 = UI2GetHandle(zx.q(x28_1), x23_7)
                            *(x20_2 * 0xc0 + 0x1835790) = x0_80
                            
                            if (x0_80 != 0)
                                *(x20_2 * 0xc0 + 0x1835760) = x23_7
                                x21_14 = x0_80
                                *(x20_2 * 0xc0 + 0x1835758) = x28_1
                                *(x20_2 * 0xc0 + 0x1835768) = 0xffffffff
                                
                                if (x0_59 s> 1)
                                label_b433a4:
                                    int32_t var_1b6c
                                    UI2SetState(zx.q(x21_14), 
                                        *(DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1b6c)))
                                            + 0x10), 
                                        0xffffffff, 0)
                                else
                                label_b433f8:
                                    UI2SetState(zx.q(x21_14), &data_182e740, 0xffffffff, 0)
                        else
                            x21_14 = *(x20_2 * 0xc0 + 0x1835790)
                            
                            if (x21_14 != 0)
                                if (x0_59 s<= 1)
                                    goto label_b433f8
                                
                                goto label_b433a4
                        char* x21_15 = (&data_114dab8)[zx.q(x0_59 - 1 u< 2 ? 1 : 0) * 2]
                        
                        if (*(x20_2 * 0xc0 + 0x18357a0) == x21_15
                                && *(x20_2 * 0xc0 + 0x1835798) == x28_1
                                && *(x20_2 * 0xc0 + 0x18357a8) == 0xffffffff)
                            result = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x18357d0)))
                        
                        int32_t x23_9
                        bool cond:8_1
                        
                        if (*(x20_2 * 0xc0 + 0x18357a0) != x21_15
                                || *(x20_2 * 0xc0 + 0x1835798) != x28_1
                                || *(x20_2 * 0xc0 + 0x18357a8) != 0xffffffff
                                || (result.d & 1) == 0)
                            result = UI2GetHandle(zx.q(x28_1), x21_15)
                            *(x20_2 * 0xc0 + 0x18357d0) = result.d
                            
                            if (result.d != 0)
                                *(x20_2 * 0xc0 + 0x18357a0) = x21_15
                                x23_9 = result.d
                                *(x20_2 * 0xc0 + 0x1835798) = x28_1
                                *(x20_2 * 0xc0 + 0x18357a8) = 0xffffffff
                                cond:8_1 = x0_59 s<= 3
                                
                                if (x0_59 s>= 3)
                                label_b43484:
                                    int32_t var_1b68
                                    
                                    if (cond:8_1)
                                        result = UI2SetState(zx.q(x23_9), 
                                            *(DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1b68)))
                                                + 0x10), 
                                            -1, 0)
                                    else
                                        UI2SetState(zx.q(x23_9), &data_182e740, 0xffffffff, 0)
                                        result =
                                            UI2SetState(zx.q(var_1b8c_1), &data_182e758, x20_2.d, 0)
                                else
                                label_b434f4:
                                    result = UI2SetState(zx.q(x23_9), &data_182e740, -1, 0)
                        else
                            x23_9 = *(x20_2 * 0xc0 + 0x18357d0)
                            
                            if (x23_9 != 0)
                                cond:8_1 = x0_59 s<= 3
                                
                                if (x0_59 s< 3)
                                    goto label_b434f4
                                
                                goto label_b43484
                    else
                        if (x0_59 != 1)
                            x8_47 = 2
                            goto label_b43260
                        
                        int32_t x0_61
                        
                        if (*(x20_2 * 0xc0 + 0x1835720) == "tbl_exp3"
                                && *(x20_2 * 0xc0 + 0x1835718) == x28_1
                                && *(x20_2 * 0xc0 + 0x1835728) == 0xffffffff)
                            x0_61 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835750)))
                        
                        if (*(x20_2 * 0xc0 + 0x1835720) != "tbl_exp3"
                                || *(x20_2 * 0xc0 + 0x1835718) != x28_1
                                || *(x20_2 * 0xc0 + 0x1835728) != 0xffffffff || (x0_61 & 1) == 0)
                            int32_t x0_85 = UI2GetHandle(zx.q(x28_1), "tbl_exp3")
                            *(x20_2 * 0xc0 + 0x1835750) = x0_85
                            
                            if (x0_85 != 0)
                                *(x20_2 * 0xc0 + 0x1835720) = "tbl_exp3"
                                *(x20_2 * 0xc0 + 0x1835718) = x28_1
                                *(x20_2 * 0xc0 + 0x1835728) = 0xffffffff
                                UI2SetState(zx.q(x0_85), 
                                    *(DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1b70.d)))
                                        + 0x10), 
                                    0xffffffff, 0)
                        else
                            int32_t x21_10 = *(x20_2 * 0xc0 + 0x1835750)
                            
                            if (x21_10 != 0)
                                UI2SetState(zx.q(x21_10), 
                                    *(DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1b70.d)))
                                        + 0x10), 
                                    0xffffffff, 0)
                        
                        int32_t x0_91
                        
                        if (*(x20_2 * 0xc0 + 0x1835760) == "tbl_exp2"
                                && *(x20_2 * 0xc0 + 0x1835758) == x28_1
                                && *(x20_2 * 0xc0 + 0x1835768) == 0xffffffff)
                            x0_91 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835790)))
                        
                        uint64_t x0_92
                        
                        if (*(x20_2 * 0xc0 + 0x1835760) != "tbl_exp2"
                                || *(x20_2 * 0xc0 + 0x1835758) != x28_1
                                || *(x20_2 * 0xc0 + 0x1835768) != 0xffffffff || (x0_91 & 1) == 0)
                            x0_92 = UI2GetHandle(zx.q(x28_1), "tbl_exp2")
                            *(x20_2 * 0xc0 + 0x1835790) = x0_92.d
                            
                            if (x0_92.d != 0)
                                *(x20_2 * 0xc0 + 0x1835760) = "tbl_exp2"
                                *(x20_2 * 0xc0 + 0x1835758) = x28_1
                                *(x20_2 * 0xc0 + 0x1835768) = 0xffffffff
                                UI2SetState(x0_92, &data_182e740, 0xffffffff, 0)
                        else
                            x0_92 = zx.q(*(x20_2 * 0xc0 + 0x1835790))
                            
                            if (x0_92.d != 0)
                                UI2SetState(x0_92, &data_182e740, 0xffffffff, 0)
                        int32_t x0_95
                        
                        if (*(x20_2 * 0xc0 + 0x18357a0) == "tbl_exp1"
                                && *(x20_2 * 0xc0 + 0x1835798) == x28_1
                                && *(x20_2 * 0xc0 + 0x18357a8) == 0xffffffff)
                            x0_95 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x18357d0)))
                        
                        if (*(x20_2 * 0xc0 + 0x18357a0) != "tbl_exp1"
                                || *(x20_2 * 0xc0 + 0x1835798) != x28_1
                                || *(x20_2 * 0xc0 + 0x18357a8) != 0xffffffff || (x0_95 & 1) == 0)
                            result = UI2GetHandle(zx.q(x28_1), "tbl_exp1")
                            *(x20_2 * 0xc0 + 0x18357d0) = result.d
                            
                            if (result.d != 0)
                                *(x20_2 * 0xc0 + 0x18357a0) = "tbl_exp1"
                                *(x20_2 * 0xc0 + 0x1835798) = x28_1
                                *(x20_2 * 0xc0 + 0x18357a8) = 0xffffffff
                            label_b436a0:
                                result = UI2SetState(result, &data_182e740, -1, 0)
                        else
                            result = zx.q(*(x20_2 * 0xc0 + 0x18357d0))
                            
                            if (result.d != 0)
                                goto label_b436a0
                else
                    if (x25_2 != 1)
                        break
                    
                    int32_t x0_56
                    
                    if (*(x20_2 * 0xc0 + 0x1835720) == "tbl_exp3"
                            && *(x20_2 * 0xc0 + 0x1835718) == x28_1
                            && *(x20_2 * 0xc0 + 0x1835728) == 0xffffffff)
                        x0_56 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835750)))
                    
                    int32_t fp_3
                    
                    if (*(x20_2 * 0xc0 + 0x1835720) != "tbl_exp3"
                            || *(x20_2 * 0xc0 + 0x1835718) != x28_1
                            || *(x20_2 * 0xc0 + 0x1835728) != 0xffffffff || (x0_56 & 1) == 0)
                        int32_t x0_63 = UI2GetHandle(zx.q(x28_1), "tbl_exp3")
                        *(x20_2 * 0xc0 + 0x1835750) = x0_63
                        
                        if (x0_63 != 0)
                            *(x20_2 * 0xc0 + 0x1835720) = "tbl_exp3"
                            fp_3 = x0_63
                            *(x20_2 * 0xc0 + 0x1835718) = x28_1
                            *(x20_2 * 0xc0 + 0x1835728) = 0xffffffff
                        label_b431f8:
                            uint64_t x0_64 = zx.q(*(*(&var_140 + (x20_2 << 4) + 8) + 0x4c))
                            
                            if (x0_64.d u> 0x18)
                                break
                            
                            int32_t x8_46 = 0
                            int32_t x9_17 = 0
                            int32_t x10_2 = 0
                            int32_t x11_1 = 0
                            int32_t x19_7 = 0
                            
                            switch (x0_64)
                                case 0
                                    UI2SetState(zx.q(fp_3), &data_182e740, 0xffffffff, 0)
                                case 1
                                    x0_64 = 2
                                    x19_7 = 1
                                    goto label_b437cc
                                case 2
                                    goto label_b437cc
                                case 3
                                    x8_46 = 1
                                label_b436d8:
                                    x0_64 = 3
                                    x19_7 = x8_46
                                label_b437cc:
                                    UI2SetState(zx.q(fp_3), 
                                        *(DomExpDefGetByIndex(DomGetIndxByExp(x0_64)) + 0x10), 
                                        0xffffffff, 0)
                                    
                                    if (x19_7 != 0)
                                        UI2SetState(zx.q(fp_3), &data_18316c8, 0xffffffff, 0)
                                case 4
                                    goto label_b436d8
                                case 5
                                    x9_17 = 1
                                label_b436e8:
                                    x0_64 = 4
                                    x19_7 = x9_17
                                    goto label_b437cc
                                case 6
                                    goto label_b436e8
                                case 7
                                    x19_7 = 0
                                    x0_64 = 5
                                    goto label_b437cc
                                case 8
                                    x10_2 = 1
                                label_b43704:
                                    x0_64 = 6
                                    x19_7 = x10_2
                                    goto label_b437cc
                                case 9
                                    goto label_b43704
                                case 0xa
                                    x0_64 = 7
                                    x19_7 = 1
                                    goto label_b437cc
                                case 0xb
                                    x19_7 = 0
                                    x0_64 = 7
                                    goto label_b437cc
                                case 0xc
                                    x11_1 = 1
                                label_b43728:
                                    x0_64 = 8
                                    x19_7 = x11_1
                                    goto label_b437cc
                                case 0xd
                                    goto label_b43728
                                case 0xe
                                    x19_7 = 0
                                    x0_64 = 9
                                    goto label_b437cc
                                case 0xf
                                    x0_64 = 0xa
                                    x19_7 = 1
                                    goto label_b437cc
                                case 0x10
                                    x19_7 = 0
                                    x0_64 = 0xa
                                    goto label_b437cc
                                case 0x11
                                    x19_7 = 0
                                    x0_64 = 0xb
                                    goto label_b437cc
                                case 0x12
                                    x19_7 = 0
                                    x0_64 = 0xc
                                    goto label_b437cc
                                case 0x13
                                    x19_7 = 0
                                    x0_64 = 0xd
                                    goto label_b437cc
                                case 0x14
                                    x19_7 = 0
                                    x0_64 = 0xe
                                    goto label_b437cc
                                case 0x15
                                    x19_7 = 0
                                    x0_64 = 0xf
                                    goto label_b437cc
                                case 0x16
                                    x19_7 = 0
                                    x0_64 = 0x10
                                    goto label_b437cc
                                case 0x17
                                    x19_7 = 0
                                    x0_64 = 0x11
                                    goto label_b437cc
                                case 0x18
                                    x19_7 = 0
                                    x0_64 = 0x12
                                    goto label_b437cc
                    else
                        fp_3 = *(x20_2 * 0xc0 + 0x1835750)
                        
                        if (fp_3 != 0)
                            goto label_b431f8
                    int32_t x0_105
                    
                    if (*(x20_2 * 0xc0 + 0x1835760) == "tbl_exp2"
                            && *(x20_2 * 0xc0 + 0x1835758) == x28_1
                            && *(x20_2 * 0xc0 + 0x1835768) == 0xffffffff)
                        x0_105 = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x1835790)))
                    
                    int32_t fp_5
                    
                    if (*(x20_2 * 0xc0 + 0x1835760) != "tbl_exp2"
                            || *(x20_2 * 0xc0 + 0x1835758) != x28_1
                            || *(x20_2 * 0xc0 + 0x1835768) != 0xffffffff || (x0_105 & 1) == 0)
                        int32_t x0_107 = UI2GetHandle(zx.q(x28_1), "tbl_exp2")
                        *(x20_2 * 0xc0 + 0x1835790) = x0_107
                        
                        if (x0_107 != 0)
                            *(x20_2 * 0xc0 + 0x1835760) = "tbl_exp2"
                            fp_5 = x0_107
                            *(x20_2 * 0xc0 + 0x1835758) = x28_1
                            *(x20_2 * 0xc0 + 0x1835768) = 0xffffffff
                        label_b438a0:
                            uint64_t x0_108 = zx.q(*(*(&var_140 + (x20_2 << 4) + 8) + 0x50))
                            
                            if (x0_108.d u> 0x18)
                                break
                            
                            int32_t x8_97 = 0
                            int32_t x9_25 = 0
                            int32_t x10_3 = 0
                            int32_t x11_2 = 0
                            int32_t x19_14 = 0
                            
                            switch (x0_108)
                                case 0
                                    UI2SetState(zx.q(fp_5), &data_182e740, 0xffffffff, 0)
                                case 1
                                    x0_108 = 2
                                    x19_14 = 1
                                label_b439ec:
                                    UI2SetState(zx.q(fp_5), 
                                        *(DomExpDefGetByIndex(DomGetIndxByExp(x0_108)) + 0x10), 
                                        0xffffffff, 0)
                                    
                                    if (x19_14 != 0)
                                        UI2SetState(zx.q(fp_5), &data_18316c8, 0xffffffff, 0)
                                case 2
                                    goto label_b439ec
                                case 3
                                    x11_2 = 1
                                label_b438f4:
                                    x0_108 = 3
                                    x19_14 = x11_2
                                    goto label_b439ec
                                case 4
                                    goto label_b438f4
                                case 5
                                    x10_3 = 1
                                label_b43904:
                                    x0_108 = 4
                                    x19_14 = x10_3
                                    goto label_b439ec
                                case 6
                                    goto label_b43904
                                case 7
                                    x19_14 = 0
                                    x0_108 = 5
                                    goto label_b439ec
                                case 8
                                    x9_25 = 1
                                label_b43920:
                                    x0_108 = 6
                                    x19_14 = x9_25
                                    goto label_b439ec
                                case 9
                                    goto label_b43920
                                case 0xa
                                    x0_108 = 7
                                    x19_14 = 1
                                    goto label_b439ec
                                case 0xb
                                    x19_14 = 0
                                    x0_108 = 7
                                    goto label_b439ec
                                case 0xc
                                    x8_97 = 1
                                label_b43948:
                                    x0_108 = 8
                                    x19_14 = x8_97
                                    goto label_b439ec
                                case 0xd
                                    goto label_b43948
                                case 0xe
                                    x19_14 = 0
                                    x0_108 = 9
                                    goto label_b439ec
                                case 0xf
                                    x0_108 = 0xa
                                    x19_14 = 1
                                    goto label_b439ec
                                case 0x10
                                    x19_14 = 0
                                    x0_108 = 0xa
                                    goto label_b439ec
                                case 0x11
                                    x19_14 = 0
                                    x0_108 = 0xb
                                    goto label_b439ec
                                case 0x12
                                    x19_14 = 0
                                    x0_108 = 0xc
                                    goto label_b439ec
                                case 0x13
                                    x19_14 = 0
                                    x0_108 = 0xd
                                    goto label_b439ec
                                case 0x14
                                    x19_14 = 0
                                    x0_108 = 0xe
                                    goto label_b439ec
                                case 0x15
                                    x19_14 = 0
                                    x0_108 = 0xf
                                    goto label_b439ec
                                case 0x16
                                    x19_14 = 0
                                    x0_108 = 0x10
                                    goto label_b439ec
                                case 0x17
                                    x19_14 = 0
                                    x0_108 = 0x11
                                    goto label_b439ec
                                case 0x18
                                    x19_14 = 0
                                    x0_108 = 0x12
                                    goto label_b439ec
                    else
                        fp_5 = *(x20_2 * 0xc0 + 0x1835790)
                        
                        if (fp_5 != 0)
                            goto label_b438a0
                    
                    if (*(x20_2 * 0xc0 + 0x18357a0) == "tbl_exp1"
                            && *(x20_2 * 0xc0 + 0x1835798) == x28_1
                            && *(x20_2 * 0xc0 + 0x18357a8) == 0xffffffff)
                        result = UI2Exists(zx.q(*(x20_2 * 0xc0 + 0x18357d0)))
                    
                    int32_t fp_6
                    
                    if (*(x20_2 * 0xc0 + 0x18357a0) != "tbl_exp1"
                            || *(x20_2 * 0xc0 + 0x1835798) != x28_1
                            || *(x20_2 * 0xc0 + 0x18357a8) != 0xffffffff || (result.d & 1) == 0)
                        result = UI2GetHandle(zx.q(x28_1), "tbl_exp1")
                        *(x20_2 * 0xc0 + 0x18357d0) = result.d
                        
                        if (result.d != 0)
                            *(x20_2 * 0xc0 + 0x18357a0) = "tbl_exp1"
                            fp_6 = result.d
                            *(x20_2 * 0xc0 + 0x1835798) = x28_1
                            *(x20_2 * 0xc0 + 0x18357a8) = 0xffffffff
                        label_b43ab4:
                            uint64_t x0_115 = zx.q(*(*(&var_140 + (x20_2 << 4) + 8) + 0x54))
                            
                            if (x0_115.d u> 0x18)
                                break
                            
                            int32_t x8_106 = 0
                            int32_t x9_27 = 0
                            int32_t x10_4 = 0
                            int32_t x11_3 = 0
                            int32_t x19_16 = 0
                            int64_t* x1_22
                            
                            switch (x0_115)
                                case 0
                                    x1_22 = &data_182e740
                                label_b43c10:
                                    result = UI2SetState(zx.q(fp_6), x1_22, -1, 0)
                                case 1
                                    x0_115 = 2
                                    x19_16 = 1
                                label_b43c00:
                                    result = UI2SetState(zx.q(fp_6), 
                                        *(DomExpDefGetByIndex(DomGetIndxByExp(x0_115)) + 0x10), 
                                        0xffffffff, 0)
                                    
                                    if (x19_16 != 0)
                                        x1_22 = &data_18316c8
                                        goto label_b43c10
                                case 2
                                    goto label_b43c00
                                case 3
                                    x11_3 = 1
                                label_b43b08:
                                    x0_115 = 3
                                    x19_16 = x11_3
                                    goto label_b43c00
                                case 4
                                    goto label_b43b08
                                case 5
                                    x10_4 = 1
                                label_b43b18:
                                    x0_115 = 4
                                    x19_16 = x10_4
                                    goto label_b43c00
                                case 6
                                    goto label_b43b18
                                case 7
                                    x19_16 = 0
                                    x0_115 = 5
                                    goto label_b43c00
                                case 8
                                    x9_27 = 1
                                label_b43b34:
                                    x0_115 = 6
                                    x19_16 = x9_27
                                    goto label_b43c00
                                case 9
                                    goto label_b43b34
                                case 0xa
                                    x0_115 = 7
                                    x19_16 = 1
                                    goto label_b43c00
                                case 0xb
                                    x19_16 = 0
                                    x0_115 = 7
                                    goto label_b43c00
                                case 0xc
                                    x8_106 = 1
                                label_b43b5c:
                                    x0_115 = 8
                                    x19_16 = x8_106
                                    goto label_b43c00
                                case 0xd
                                    goto label_b43b5c
                                case 0xe
                                    x19_16 = 0
                                    x0_115 = 9
                                    goto label_b43c00
                                case 0xf
                                    x0_115 = 0xa
                                    x19_16 = 1
                                    goto label_b43c00
                                case 0x10
                                    x19_16 = 0
                                    x0_115 = 0xa
                                    goto label_b43c00
                                case 0x11
                                    x19_16 = 0
                                    x0_115 = 0xb
                                    goto label_b43c00
                                case 0x12
                                    x19_16 = 0
                                    x0_115 = 0xc
                                    goto label_b43c00
                                case 0x13
                                    x19_16 = 0
                                    x0_115 = 0xd
                                    goto label_b43c00
                                case 0x14
                                    x19_16 = 0
                                    x0_115 = 0xe
                                    goto label_b43c00
                                case 0x15
                                    x19_16 = 0
                                    x0_115 = 0xf
                                    goto label_b43c00
                                case 0x16
                                    x19_16 = 0
                                    x0_115 = 0x10
                                    goto label_b43c00
                                case 0x17
                                    x19_16 = 0
                                    x0_115 = 0x11
                                    goto label_b43c00
                                case 0x18
                                    x19_16 = 0
                                    x0_115 = 0x12
                                    goto label_b43c00
                    else
                        fp_6 = *(x20_2 * 0xc0 + 0x18357d0)
                        
                        if (fp_6 != 0)
                            goto label_b43ab4
                
                x27 = var_1b8c_1
        else
            x28_1 = *((x20_2 << 6) + 0x1833d60)
            
            if (x28_1 != 0)
                if (x25_2 == 1)
                    goto label_b42e70
                
                goto label_b42e0c
            
            UI2SetState(zx.q(x27), &data_182e6f8, x20_2.d, 0)
            result = UI2SetState(zx.q(x27), &data_182e6e0, x20_2.d, 0)
        x20_2 += 1
        x22_2 += 0x380
        
        if (x20_2 == zx.q(x0_18))
            return result
else if (x8 == 1)
    x1_2 = &data_182e788
    goto label_b42a40
pthread_kill(pthread_self(), 6)
return CardGalleryDispose(XNoReturn()) __tailcall
