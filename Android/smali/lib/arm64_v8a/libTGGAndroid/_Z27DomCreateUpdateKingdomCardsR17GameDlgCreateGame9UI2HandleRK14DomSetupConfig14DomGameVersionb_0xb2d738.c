// 函数: _Z27DomCreateUpdateKingdomCardsR17GameDlgCreateGame9UI2HandleRK14DomSetupConfig14DomGameVersionb
// 地址: 0xb2d738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t var_2f0 = arg5.d
int32_t var_2ec = arg2
int32_t var_78 = arg4
int32_t x19 = arg2

if ((zx.d(data_182aac8) & 1) == 0)
    goto label_b2e528

while (true)
    UI2SetState(zx.q(x19), &data_182e620, 0xffffffff, 0)
    
    if ((zx.d(data_182aad0) & 1) == 0 && __cxa_guard_acquire(&data_182aad0) != 0)
        data_182e638 = _vtable_for_UI2StateDecl + 0x10
        void* x0_112 = UI2StateDeclTryLookup("have_rising_sun")
        
        if (x0_112 == 0)
            (*data_182e638)(&data_182e638, "have_rising_sun")
            uint32_t x10_6 = *UI2StateDeclI_counter
            uint64_t x11_3 = *UI2StateDeclI_head
            *UI2StateDeclI_head = &data_182e638
            *UI2StateDeclI_counter = x10_6 + 1
            data_182e640 = x11_3
        else
            (*data_182e638)(&data_182e638, *(x0_112 + 0x10))
        
        __cxa_guard_release(&data_182aad0)
        x19 = var_2ec
    
    UI2SetState(zx.q(x19), &data_182e638, 0xffffffff, 0)
    int32_t var_74
    
    if ((CardsetIsZoomed(*(gDomClient + 0x82e30), &var_74) & 1) != 0)
        UI2SetState(zx.q(x19), &data_182db58, 0xffffffff, 0)
    
    int32_t x0_6
    
    if (data_182ab78 == "txt_addItem" && data_182a7d0 == x19 && zx.d(data_182a648) != 0)
        x0_6 = UI2Exists(zx.q(data_182a7d8))
    
    uint64_t x0_7
    
    if (data_182ab78 != "txt_addItem" || data_182a7d0 != x19 || zx.d(data_182a648) == 0
            || (x0_6 & 1) == 0)
        x0_7 = UI2GetHandle(zx.q(x19), "txt_addItem")
        data_182a7d8 = x0_7.d
        
        if (x0_7.d != 0)
            data_182ab78 = "txt_addItem"
            data_182a7d0 = x19
            data_182a648 = 1
    else
        x0_7 = zx.q(data_182a7d8)
    
    if ((UI2HasFocus(x0_7) & 1) == 0)
        *(arg1 + 0x38) = 0
        *(arg1 + 0x48) = 0
        *(arg1 + 0x58) = 0
        XString::operator=(arg1 + 0x30)
    else
        UI2SetState(zx.q(x19), &data_182e068, 0xffffffff, 0)
    
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = RectScreen()
    bool cond:0_1 = data_182ab80 != "tbl_zoom"
    int32_t var_90 = v0_1
    int32_t var_8c_1 = v1_1
    int32_t var_88_1 = v2_1
    int32_t var_84_1 = v3_1
    int32_t x0_13
    
    if (not(cond:0_1) && data_182a7e0 == x19)
        x0_13 = UI2Exists(zx.q(data_182a7e8))
    
    int32_t x21_1
    
    if (cond:0_1 || data_182a7e0 != x19 || (x0_13 & 1) == 0)
        int32_t x0_15 = UI2GetHandle(zx.q(x19), "tbl_zoom", 0)
        x21_1 = x0_15
        data_182a7e8 = x0_15
        
        if (x0_15 != 0)
            data_182ab80 = "tbl_zoom"
            data_182a7e0 = x19
    else
        x21_1 = data_182a7e8
    
    int32_t x0_17
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    
    if (data_182ab88 == "tbl_zoom_landscape" && data_182a7f0 == x19)
        x0_17, v0_2, v1_2, v2_2, v3_2 = UI2Exists(zx.q(data_182a7f8))
    
    int128_t var_d0
    int128_t var_b0
    
    if (data_182ab88 != "tbl_zoom_landscape" || data_182a7f0 != x19 || (x0_17 & 1) == 0)
        int32_t x0_19
        x0_19, v0_2, v1_2, v2_2, v3_2 = UI2GetHandle(zx.q(x19), "tbl_zoom_landscape", 0)
        data_182a7f8 = x0_19
        
        if (x0_19 == 0)
        label_b2d9cc:
            v0_2 = *(TI + 0x10)
            v2_2 = *TI
            v3_2 = *(TI + 0x10)
            var_b0 = *TI
            int128_t var_a0_1 = v0_2
            var_d0 = v2_2
            int128_t var_c0_1 = v3_2
        else
            data_182ab88 = "tbl_zoom_landscape"
            data_182a7f0 = x19
            UI2GetTransform(zx.q(x21_1))
            UI2GetTransform(zx.q(x0_19))
    else
        int32_t x22_1 = data_182a7f8
        
        if (x22_1 == 0)
            goto label_b2d9cc
        
        UI2GetTransform(zx.q(x21_1))
        UI2GetTransform(zx.q(x22_1))
    
    int64_t x26_1 = 0
    int64_t x24_1 = 0
    void* __offset(GameDlgCreateGame, 0x3c) x27_1 = arg1 + 0x3c
    v8.d = fconvert.s(5f)
    v9.d = fconvert.s(1f)
    v10.d = 0f
    
    while (true)
        int32_t x0_29
        
        if (*(x26_1 + 0x18339f0) == "tblLookup" && *(x26_1 + 0x18339e8) == x19
                && x24_1 == zx.q(*(x26_1 + 0x18339f8)) && *(x26_1 + 0x1833a00) == 0)
            x0_29 = UI2Exists(zx.q(*(x26_1 + 0x1833a20)))
        
        int32_t fp_1
        
        if (*(x26_1 + 0x18339f0) != "tblLookup" || *(x26_1 + 0x18339e8) != x19
                || x24_1 != zx.q(*(x26_1 + 0x18339f8)) || *(x26_1 + 0x1833a00) != 0
                || (x0_29 & 1) == 0)
            int32_t x0_31 = UI2GetHandle(zx.q(x19), "tblLookup", x24_1.d)
            fp_1 = x0_31
            *(x26_1 + 0x1833a20) = x0_31
            
            if (x0_31 != 0)
                *(x26_1 + 0x18339f0) = "tblLookup"
                *(x26_1 + 0x18339e8) = x19
                *(x26_1 + 0x18339f8) = x24_1.d
                *(x26_1 + 0x1833a00) = 0
        else
            fp_1 = *(x26_1 + 0x1833a20)
        
        int32_t x28_2 = *(x27_1 - 4)
        int32_t x21_3
        
        if (x28_2 - 1 u>= 3)
            x21_3 = x28_2
            
            if (x28_2 != 0)
                break
        else
            x21_3 = *(DomDefGet(zx.q(*x27_1), zx.q(var_78)) + 0xc0)
            
            if ((IsLandscape(zx.q(x21_3), 0x18) & 1) == 0)
                int32_t x0_39
                
                if (*(x26_1 + 0x1833b70) == "tblLookupCard" && *(x26_1 + 0x1833b68) == fp_1
                        && *(x26_1 + 0x1833b78) == 0 && *(x26_1 + 0x1833b80) == 0)
                    x0_39 = UI2Exists(zx.q(*(x26_1 + 0x1833ba0)))
                
                if (*(x26_1 + 0x1833b70) != "tblLookupCard" || *(x26_1 + 0x1833b68) != fp_1
                        || *(x26_1 + 0x1833b78) != 0 || *(x26_1 + 0x1833b80) != 0
                        || (x0_39 & 1) == 0)
                    int32_t x0_43 = UI2GetHandle(zx.q(fp_1), "tblLookupCard", 0)
                    x28_2 = x0_43
                    *(x26_1 + 0x1833ba0) = x0_43
                    
                    if (x0_43 != 0)
                        *(x26_1 + 0x1833b70) = "tblLookupCard"
                        *(x26_1 + 0x1833b68) = fp_1
                        *(x26_1 + 0x1833b78) = 0
                        *(x26_1 + 0x1833b80) = 0
                else
                    x28_2 = *(x26_1 + 0x1833ba0)
            else
                int32_t x0_37
                
                if (*(x26_1 + 0x1833ab0) == "tblLookupLandscape" && *(x26_1 + 0x1833aa8) == fp_1
                        && *(x26_1 + 0x1833ab8) == 0 && *(x26_1 + 0x1833ac0) == 0)
                    x0_37 = UI2Exists(zx.q(*(x26_1 + 0x1833ae0)))
                
                if (*(x26_1 + 0x1833ab0) != "tblLookupLandscape" || *(x26_1 + 0x1833aa8) != fp_1
                        || *(x26_1 + 0x1833ab8) != 0 || *(x26_1 + 0x1833ac0) != 0
                        || (x0_37 & 1) == 0)
                    int32_t x0_41 = UI2GetHandle(zx.q(fp_1), "tblLookupLandscape", 0)
                    x28_2 = x0_41
                    *(x26_1 + 0x1833ae0) = x0_41
                    
                    if (x0_41 != 0)
                        *(x26_1 + 0x1833ab0) = "tblLookupLandscape"
                        *(x26_1 + 0x1833aa8) = fp_1
                        *(x26_1 + 0x1833ab8) = 0
                        *(x26_1 + 0x1833ac0) = 0
                else
                    x28_2 = *(x26_1 + 0x1833ae0)
                
                x19 = var_2ec
        
        int32_t* x0_45 = CardsetGetUI(*(gDomClient + 0x82e30), x24_1.d + 0xe)
        int128_t var_2c0
        int64_t var_190
        int128_t var_170
        
        if (x28_2 != 0 && x21_3 != 0)
            UI2GetTransform(zx.q(x28_2))
            int32_t x0_24
            int128_t v0_3
            int128_t v1_3
            x0_24, v0_3, v1_3 = IsLandscape(zx.q(x21_3), 0x18)
            int128_t* x8_11
            
            if ((x0_24 & 1) != 0)
                x8_11 = &var_d0
            else
                x8_11 = &var_b0
            
            v0_3 = *x8_11
            v1_3 = x8_11[1]
            var_190 = 0
            var_170 = v0_3
            int128_t var_160_1 = v1_3
            void* x28_1 = gCardGallery + (x24_1 << 2)
            int32_t x0_26 = CardsetGalleryIsZoomed(*(gDomClient + 0x82e30), x24_1.d + 0xe)
            float v0_4 = *gSecondsPerUpdate
            
            if ((x0_26 & 1) != 0)
                v0_4 = v0_4 f* v8.d
            else
                v0_4 = fneg(v0_4 f* v8.d)
            
            v0_4 = *(x28_1 + 0x74) + v0_4
            float temp0_1 = vmin_f32(v0_4, v9.d)
            
            v0_4 = v0_4 < 0f ? v10.d : temp0_1
            
            *(x28_1 + 0x74) = v0_4
            var_190:4.d = v0_4
            char var_310_1 = 0
            char var_318_1 = 1
            int32_t var_320_1 = 0
            DeclareCardsetCard(zx.q(x21_3), 0x32c9, x0_45, &var_90, &var_2c0, &var_170, &var_190, 2)
        else if (*x0_45 != 0)
            UI2Free(x0_45)
        
        x26_1 += 0x40
        x24_1 += 1
        x27_1 += 0x10
        
        if (x26_1 == 0xc0)
            DomSetupConfig const& x23_1 = arg3
            __builtin_memset(&var_170, 0, 0xa0)
            ToKingdomEntries(x23_1, &var_170)
            int32_t x0_49
            
            if (data_182ab90 == "rootContent" && data_182a800 == x19 && zx.d(data_182a650) != 0)
                x0_49 = UI2Exists(zx.q(data_182a808))
            
            if (data_182ab90 != "rootContent" || data_182a800 != x19 || zx.d(data_182a650) == 0
                    || (x0_49 & 1) == 0)
                int32_t x0_51 = UI2GetHandle(zx.q(x19), "rootContent")
                data_182a808 = x0_51
                var_2ec = x0_51
                
                if (x0_51 == 0)
                    var_2ec = 0
                else
                    data_182ab90 = "rootContent"
                    data_182a800 = x19
                    data_182a650 = 1
            else
                var_2ec = data_182a808
            
            int32_t x21_4 = var_2f0
            int64_t x25_1 = 0
            void* x20_1 = &data_1833618
            int128_t* x22_6 = &var_170
            void* x28_5 = &data_1835498
            v8.d = fconvert.s(5f)
            v9.d = fconvert.s(1f)
            v10.d = 0f
            
            while (true)
                int32_t x0_53
                
                if (*(x28_5 + 8) == "tblKingdom" && *x28_5 == x19 && x25_1 == zx.q(*(x28_5 + 0x10))
                        && *(x28_5 + 0x18) == 0)
                    x0_53 = UI2Exists(zx.q(*(x28_5 + 0x38)))
                
                int32_t fp_3
                
                if (*(x28_5 + 8) != "tblKingdom" || *x28_5 != x19 || x25_1 != zx.q(*(x28_5 + 0x10))
                        || *(x28_5 + 0x18) != 0 || (x0_53 & 1) == 0)
                    int32_t x0_55 = UI2GetHandle(zx.q(x19), "tblKingdom", x25_1.d)
                    fp_3 = x0_55
                    *(x28_5 + 0x38) = x0_55
                    
                    if (x0_55 != 0)
                        *(x28_5 + 8) = "tblKingdom"
                        *x28_5 = x19
                        *(x28_5 + 0x10) = x25_1.d
                        *(x28_5 + 0x18) = 0
                else
                    fp_3 = *(x28_5 + 0x38)
                
                int32_t x0_57
                int128_t v0_5
                
                if (*(arg1 + 4) == 1 && fp_3 != 0
                        && (((zx.d(*(arg1 + 0x70)) != 0 ? 1 : 0) | x21_4) & 1) != 0)
                    x0_57, v0_5 = UI2IsVisible(zx.q(var_2ec))
                int128_t var_2e0
                int64_t var_198
                
                if (*(arg1 + 4) != 1 || fp_3 == 0
                        || (((zx.d(*(arg1 + 0x70)) != 0 ? 1 : 0) | x21_4) & 1) == 0
                        || (x0_57 & 1) == 0)
                    *x20_1 = 0
                label_b2e054:
                    int32_t* x0_77 = CardsetGetUI(*(gDomClient + 0x82e30), x25_1.d)
                    
                    if (*x0_77 != 0)
                        UI2Free(x0_77)
                else
                    *x20_1 = *x22_6
                    
                    if (*x20_1 == 0)
                        goto label_b2e054
                    
                    UI2Handle* x0_59 = CardsetGetUI(*(gDomClient + 0x82e30), x25_1.d)
                    
                    if (*x20_1 - 1 u>= 3)
                        break
                    
                    int32_t x21_5 = *(DomDefGet(zx.q(*(x20_1 + 4)), zx.q(var_78)) + 0xc0)
                    UI2GetTransform(zx.q(fp_3))
                    int32_t x0_64
                    int128_t v0_6
                    int128_t v1_5
                    x0_64, v0_6, v1_5 = IsLandscape(zx.q(x21_5), 0x18)
                    int128_t* x8_46
                    
                    if ((x0_64 & 1) != 0)
                        x8_46 = &var_d0
                    else
                        x8_46 = &var_b0
                    
                    v0_6 = *x8_46
                    v1_5 = x8_46[1]
                    var_198 = 0
                    var_190.o = v0_6
                    int128_t var_180_1 = v1_5
                    void* x24_2 = gCardGallery + (x25_1 << 2)
                    int32_t x0_66 = CardsetGalleryIsZoomed(*(gDomClient + 0x82e30), x25_1.d)
                    float v0_7 = *gSecondsPerUpdate
                    
                    if ((x0_66 & 1) != 0)
                        v0_7 = v0_7 f* v8.d
                    else
                        v0_7 = fneg(v0_7 f* v8.d)
                    
                    v0_7 = *(x24_2 + 0x3c) + v0_7
                    float temp0_2 = vmin_f32(v0_7, v9.d)
                    
                    v0_7 = v0_7 < 0f ? v10.d : temp0_2
                    
                    *(x24_2 + 0x3c) = v0_7
                    var_198:4.d = v0_7
                    char var_310_2 = 0
                    char var_318_2 = 0
                    int32_t var_320_2 = 0
                    DeclareCardsetCard(zx.q(x21_5), 0x32c9, x0_59, &var_90, &var_2c0, &var_190, 
                        &var_198, 2)
                    UI2SetState(zx.q(fp_3), &data_182dfd8, 0xffffffff, 0)
                    x23_1 = arg3
                    
                    if ((HasTrait(x23_1, zx.q(x21_5), &var_2e0) & 1) != 0)
                        UI2SetState(zx.q(fp_3), &data_182d7f8, 0, 0)
                        int32_t var_2dc
                        UI2SetState(zx.q(fp_3), DomDefGet(zx.q(var_2dc), zx.q(var_78)) + 0x90, 0, 0)
                        UI2SetInt(zx.q(fp_3), &data_182dc00, 1, 0xffffffff)
                    
                    x21_4 = var_2f0
                
                x25_1 += 1
                x20_1 += 0x10
                x22_6 = &x22_6[1]
                x28_5 += 0x40
                
                if (x25_1 == 0xa)
                    __builtin_memset(&var_2c0, 0, 0x120)
                    int128_t* x20_2 = &var_2c0
                    int32_t x0_79 = ToLandscapeEntries(x23_1, &var_2c0)
                    int64_t x27_3 = 0
                    void* x24_3 = &data_1833380
                    void* x26_2 = &data_1833c60
                    v8.d = fconvert.s(5f)
                    v9.d = fconvert.s(1f)
                    v10.d = 0f
                    
                    while (true)
                        int32_t x0_92
                        
                        if (*(x26_2 - 0x30) == "tblLandscape" && *(x26_2 - 0x38) == x19
                                && x27_3 == zx.q(*(x26_2 - 0x28)) && *(x26_2 - 0x20) == 0)
                            x0_92 = UI2Exists(zx.q(*x26_2))
                        
                        int32_t fp_4
                        
                        if (*(x26_2 - 0x30) != "tblLandscape" || *(x26_2 - 0x38) != x19
                                || x27_3 != zx.q(*(x26_2 - 0x28)) || *(x26_2 - 0x20) != 0
                                || (x0_92 & 1) == 0)
                            int32_t x0_94 = UI2GetHandle(zx.q(x19), "tblLandscape", x27_3.d)
                            fp_4 = x0_94
                            *x26_2 = x0_94
                            
                            if (x0_94 != 0)
                                *(x26_2 - 0x30) = "tblLandscape"
                                *(x26_2 - 0x38) = x19
                                *(x26_2 - 0x28) = x27_3.d
                                *(x26_2 - 0x20) = 0
                        else
                            fp_4 = *x26_2
                        
                        int32_t x0_96
                        int128_t v0_8
                        
                        if (*(arg1 + 4) == 1 && fp_4 != 0
                                && (((zx.d(*(arg1 + 0x70)) != 0 ? 1 : 0) | x21_4) & 1) != 0)
                            x0_96, v0_8 = UI2IsVisible(zx.q(var_2ec))
                        int32_t x28_6
                        
                        if (*(arg1 + 4) == 1 && fp_4 != 0
                                && (((zx.d(*(arg1 + 0x70)) != 0 ? 1 : 0) | x21_4) & 1) != 0
                                && (x0_96 & 1) != 0)
                            x28_6 = x27_3.d + 0xa
                            *x24_3 = *x20_2
                            
                            if (*x24_3 == 0)
                                goto label_b2e2d8
                            
                            UI2Handle* x0_81 = CardsetGetUI(*(gDomClient + 0x82e30), x28_6)
                            
                            if (*x24_3 - 1 u>= 3)
                                break
                            
                            int32_t x22_7 = *(DomDefGet(zx.q(*(x24_3 + 4)), zx.q(var_78)) + 0xc0)
                            UI2GetTransform(zx.q(fp_4))
                            int32_t x0_86
                            int128_t v0_9
                            int128_t v1_7
                            x0_86, v0_9, v1_7 = IsLandscape(zx.q(x22_7), 0x18)
                            int128_t* x8_51
                            
                            if ((x0_86 & 1) != 0)
                                x8_51 = &var_d0
                            else
                                x8_51 = &var_b0
                            
                            v0_9 = *x8_51
                            v1_7 = x8_51[1]
                            var_198 = 0
                            Cardset* x0_87 = *(gDomClient + 0x82e30)
                            var_2e0 = v0_9
                            int128_t var_2d0_1 = v1_7
                            void* x23_2 = gCardGallery + (x27_3 << 2)
                            int32_t x0_88 = CardsetGalleryIsZoomed(x0_87, x28_6)
                            float v0_10 = *gSecondsPerUpdate
                            
                            if ((x0_88 & 1) != 0)
                                v0_10 = v0_10 f* v8.d
                            else
                                v0_10 = fneg(v0_10 f* v8.d)
                            
                            v0_10 = *(x23_2 + 0x64) + v0_10
                            float temp0_3 = vmin_f32(v0_10, v9.d)
                            
                            v0_10 = v0_10 < 0f ? v10.d : temp0_3
                            
                            *(x23_2 + 0x64) = v0_10
                            var_198:4.d = v0_10
                            char var_310_3 = 0
                            char var_318_3 = 0
                            int32_t var_320_3 = 0
                            DeclareCardsetCard(zx.q(x22_7), 0x32c9, x0_81, &var_90, &var_190, 
                                &var_2e0, &var_198, 2)
                            UI2SetState(zx.q(fp_4), &data_182dfd8, 0xffffffff, 0)
                            x21_4 = var_2f0
                        else
                            *x24_3 = 0
                            x28_6 = x27_3.d + 0xa
                        label_b2e2d8:
                            int32_t* x0_98 = CardsetGetUI(*(gDomClient + 0x82e30), x28_6)
                            
                            if (*x0_98 != 0)
                                UI2Free(x0_98)
                        x27_3 += 1
                        x24_3 += 0x10
                        x20_2 += 0x48
                        x26_2 += 0x40
                        
                        if (x27_3 == 4)
                            int32_t x20_3 = x0_79
                            int64_t x8_63 = 0
                            int32_t x9_4 = *(arg3 + 0xbcc)
                            int32_t x21_7
                            
                            if ((((x20_3 s> x9_4 ? 1 : 0) | x21_4) & 1) != 0)
                                x21_7 = x20_3
                            else
                                x21_7 = x9_4
                            
                            uint64_t result
                            
                            while (true)
                                void* x9_5 = arg3 + x8_63
                                int64_t* x1_18
                                
                                if (*(x9_5 + 0x9d0) == *(x9_5 + 0x9d4))
                                label_b2e31c:
                                    x8_63 += 0x10
                                    
                                    if (x8_63 == 0x200)
                                        if (x20_3 s<= 0)
                                            UI2SetState(zx.q(x19), &data_182e4d0, 0xffffffff, 0)
                                            return UI2SetInt(zx.q(x19), &data_182e530, x20_3, 
                                                0xffffffff)
                                        
                                        x1_18 = &data_182e518
                                        x21_7 = x20_3
                                    label_b2e3b4:
                                        UI2SetState(zx.q(x19), x1_18, 0xffffffff, 0)
                                        result =
                                            UI2SetInt(zx.q(x19), &data_182e530, x20_3, 0xffffffff)
                                        
                                        if (x20_3 s< 3)
                                            break
                                    else
                                        continue
                                else
                                    int32_t x9_6 = *(x9_5 + 0x9c8)
                                    
                                    if (x9_6 == 0xd || x9_6 == 0x10)
                                        goto label_b2e31c
                                    
                                    if (x9_6 != 0x13)
                                        if (x9_6 s<= 0xa)
                                            goto label_b2e31c
                                    else if ((zx.d(*(arg3 + x8_63 + 0x9cc)) & 4) == 0)
                                        goto label_b2e31c
                                    
                                    x1_18 = &data_182e4d0
                                    
                                    if (x21_7 == 2)
                                        UI2SetState(zx.q(x19), &data_182e4e8, 0xffffffff, 0)
                                        return UI2SetInt(zx.q(x19), &data_182e530, x21_7, 
                                            0xffffffff)
                                    
                                    if (x21_7 == 3)
                                        UI2SetState(zx.q(x19), &data_182e500, 0xffffffff, 0)
                                        UI2SetInt(zx.q(x19), &data_182e530, x21_7, 0xffffffff)
                                    else
                                        if (x21_7 != 4)
                                            x20_3 = x21_7
                                            goto label_b2e3b4
                                        
                                        UI2SetState(zx.q(x19), &data_182e518, 0xffffffff, 0)
                                        UI2SetInt(zx.q(x19), &data_182e530, x21_7, 0xffffffff)
                                void* x23_3 = &data_1833ce0
                                int64_t i = 2
                                
                                do
                                    int32_t x0_106
                                    
                                    if (*(x23_3 - 0x30) == "tblLandscape" && *(x23_3 - 0x38) == x19
                                            && i == zx.q(*(x23_3 - 0x28)) && *(x23_3 - 0x20) == 0)
                                        x0_106 = UI2Exists(zx.q(*x23_3))
                                    
                                    if (*(x23_3 - 0x30) == "tblLandscape" && *(x23_3 - 0x38) == x19
                                            && i == zx.q(*(x23_3 - 0x28)) && *(x23_3 - 0x20) == 0
                                            && (x0_106 & 1) != 0)
                                        result = zx.q(*x23_3)
                                        
                                        if (result.d != 0)
                                            result =
                                                UI2SetState(result, &data_182dff0, 0xffffffff, 0)
                                    else
                                        result = UI2GetHandle(zx.q(x19), "tblLandscape", i.d)
                                        *x23_3 = result.d
                                        
                                        if (result.d != 0)
                                            *(x23_3 - 0x30) = "tblLandscape"
                                            *(x23_3 - 0x38) = x19
                                            *(x23_3 - 0x28) = i.d
                                            *(x23_3 - 0x20) = 0
                                            result =
                                                UI2SetState(result, &data_182dff0, 0xffffffff, 0)
                                    
                                    i += 1
                                    x23_3 += 0x40
                                while (zx.q(x21_7) != i)
                                
                                break
                            
                            return result
                    
                    break
            
            break
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_b2e528:
    
    if (__cxa_guard_acquire(&data_182aac8) != 0)
        data_182e620 = _vtable_for_UI2StateDecl + 0x10
        void* x0_110 = UI2StateDeclTryLookup("have_plunder")
        
        if (x0_110 == 0)
            (*data_182e620)(&data_182e620, "have_plunder")
            uint32_t x10_4 = *UI2StateDeclI_counter
            uint64_t x11_2 = *UI2StateDeclI_head
            *UI2StateDeclI_head = &data_182e620
            *UI2StateDeclI_counter = x10_4 + 1
            data_182e628 = x11_2
        else
            (*data_182e620)(&data_182e620, *(x0_110 + 0x10))
        
        __cxa_guard_release(&data_182aac8)
        x19 = var_2ec
