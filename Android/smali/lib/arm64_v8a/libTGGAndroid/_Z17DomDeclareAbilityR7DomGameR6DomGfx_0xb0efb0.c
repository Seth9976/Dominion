// 函数: _Z17DomDeclareAbilityR7DomGameR6DomGfx
// 地址: 0xb0efb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame& x28 = arg1
int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
int32_t var_70 = v0
int32_t var_6c = v1
int32_t var_68 = v2
int32_t var_64 = v3
void* result
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
result, v0_1, v1_1, v2_1, v3_1 = RectScreenSafe()
int32_t var_80 = v0_1
int32_t var_7c = v1_1
int32_t var_78 = v2_1
int32_t var_74 = v3_1

if (*(arg2 + 0x21c) != 0)
    int32_t x19_1 = *(GetClient() + 0x10)
    result = GetClient()
    
    if (x19_1 == *(result + 0xc))
        result = CurrentTransformWithMouseover(arg2)
        int32_t var_8c
        int32_t var_88
        int32_t var_84
        
        if (var_8c f!= *V0 || var_88 f!= *(V0 + 4) || not(var_84 f== *(V0 + 8)))
            UI2Begin("ability", arg2 + 0x2148, *UI2_CARD_LAYOUT_BANNER, &var_70, &var_80, 0x2c88, 
                0, false)
            Transform var_a0
            UI2SetTransform(zx.q(*(arg2 + 0x2148)), &var_a0)
            UI2SetHandler(zx.q(*(arg2 + 0x2148)), AbilityClick)
            
            if ((TutorialGlow(arg2) & 1) != 0)
                UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182c580, 0xffffffff, 0)
            
            UI2StateDecl* x1_3
            
            if (*(GetLocalSettings() + 0xc) == 0)
                x1_3 = UIS_GFX_HIGH
            else
                x1_3 = UIS_GFX_LOW
            
            UI2SetState(zx.q(*(arg2 + 0x2148)), x1_3, 0xffffffff, 0)
            int32_t x8_3 = *(arg2 + 0x204)
            int32_t x9_1 = *(arg2 + 0x208)
            int32_t x22_1
            
            x22_1 = x8_3 == 0xf34 ? x9_1 : x8_3
            
            int32_t x23_1
            
            x23_1 = x8_3 == 0xf34 ? x8_3 : x9_1
            
            DomCardDef* x0_10 = DomDefGet(zx.q(x22_1), zx.q(*(x28 + 0xd50)))
            int32_t x0_12 = UI2GetHandle(zx.q(*(arg2 + 0x2148)), "btn_item")
            int32_t x24_1
            
            if (x0_12 == 0)
                x24_1 = *(arg2 + 0x2148)
            else
                x24_1 = x0_12
            
            UI2SetState(zx.q(x24_1), x0_10 + 0xa8, 0xffffffff, 0)
            DomDeclareCardComponents(zx.q(x24_1), x0_10, nullptr, 0, 0)
            DomDeclareType(zx.q(x24_1), x0_10, 0)
            int32_t x0_17 = AbilityGetIndex(x28, zx.q(*(arg2 + 0x1f4)))
            int32_t x8_7 = *(arg2 + 0x210) - 0x55
            uint64_t x0_20
            DomCardDef* x1_10
            uint64_t x2_2
            
            if (x8_7 u> 0x11)
                x2_2 = zx.q(x0_17)
                x0_20 = zx.q(x24_1)
                x1_10 = x0_10
            else
                x1_10 = DomDefGet(zx.q(*(&data_801b3c + (sx.q(x8_7) << 2))), zx.q(*(x28 + 0xd50)))
                x0_20 = zx.q(x24_1)
                x2_2 = 0
            
            DomDeclareAbilityPower(x0_20, x1_10, x2_2)
            uint64_t x1_11 = zx.q(*(arg2 + 0x1f4))
            int32_t x25_2 = *(arg2 + 0x21c)
            DomGfx* var_19a0[0x26c]
            int32_t x19_2
            
            if ((x1_11 & 0x30) == 0)
                void* x0_23 = AbilityGetRegistered(x28, x1_11)
                int32_t x8_9 = *(x0_23 + 0x4c)
                
                if (x8_9 == 0)
                    x19_2 = 0
                    
                    if (x25_2 s>= 2)
                        goto label_b0f264
                else
                    if (x8_9 != 2)
                        pthread_kill(pthread_self(), 6)
                        return IsObelisk(XNoReturn()) __tailcall
                    
                    x19_2 = zx.d(*(x0_23 + 0x70)) u>> 1 & 1
                    
                    if (x25_2 s>= 2)
                        goto label_b0f264
            else
                x19_2 = zx.d(*(AbilityGetStatic(x28, x1_11) + 0xb4)) u>> 1 & 1
                
                if (x25_2 s>= 2)
                label_b0f264:
                    UI2SetState(zx.q(x24_1), &data_182cf40, 0xffffffff, 0)
                    XStringFromInt(x25_2)
                    UI2SetText(zx.q(x24_1), &data_182cf58, &var_19a0, 0xffffffff)
                    XString::~XString()
                    
                    if (x19_2 != 0)
                        UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182cf70, 0xffffffff, 0)
            LanguageStateSet(zx.q(*(arg2 + 0x2148)))
            DomGame& var_2630_1 = x28
            
            if (*(arg2 + 0x200) == 3 && *(arg2 + 0x208) == 0x1025 && *(arg2 + 0x210) == 0x25)
                int32_t x0_34 = CountTokensCard(gDomClient + 0x20728, 
                    zx.q(AbilitySourceCard(gDomClient + 0x20728, zx.q(*(arg2 + 0x1fc)))), 0x1001, 
                    *(AbilityGetRegistered(x28, zx.q(*(arg2 + 0x1fc))) + 0x38))
                int32_t x26_1 = *(arg2 + 0x2148)
                int32_t x0_36
                
                if (data_182ab50 == "tbl_banner_icon_prince" && data_182a780 == x26_1
                        && zx.d(data_182a628) != 0)
                    x0_36 = UI2Exists(zx.q(data_182a788))
                
                int32_t x25_4
                
                if (data_182ab50 != "tbl_banner_icon_prince" || data_182a780 != x26_1
                        || zx.d(data_182a628) == 0 || (x0_36 & 1) == 0)
                    int32_t x0_38 = UI2GetHandle(zx.q(x26_1), "tbl_banner_icon_prince")
                    data_182a788 = x0_38
                    x28 = var_2630_1
                    
                    if (x0_38 != 0)
                        x25_4 = x0_38
                        data_182ab50 = "tbl_banner_icon_prince"
                        data_182a780 = x26_1
                        data_182a628 = 1
                    label_b0f3c8:
                        UI2SetState(zx.q(x25_4), &data_182ccd0, 0xffffffff, 0)
                        XStringFromInt(x0_34)
                        UI2SetText(zx.q(x25_4), &data_182cce8, &var_19a0, 0xffffffff)
                        XString::~XString()
                else
                    x25_4 = data_182a788
                    x28 = var_2630_1
                    
                    if (x25_4 != 0)
                        goto label_b0f3c8
            
            if (*(arg2 + 0x20c) == 1)
                int32_t x24_4 = *(arg2 + 0x2148)
                int32_t x0_43
                
                if (data_182ab58 == "tbl_banner_icon_prince" && data_182a790 == x24_4
                        && zx.d(data_182a630) != 0)
                    x0_43 = UI2Exists(zx.q(data_182a798))
                
                uint64_t x0_44
                
                if (data_182ab58 != "tbl_banner_icon_prince" || data_182a790 != x24_4
                        || zx.d(data_182a630) == 0 || (x0_43 & 1) == 0)
                    x0_44 = UI2GetHandle(zx.q(x24_4), "tbl_banner_icon_prince")
                    data_182a798 = x0_44.d
                    
                    if (x0_44.d != 0)
                        data_182ab58 = "tbl_banner_icon_prince"
                        data_182a790 = x24_4
                        data_182a630 = 1
                        UI2SetState(x0_44, &data_182cc88, 0xffffffff, 0)
                else
                    x0_44 = zx.q(data_182a798)
                    
                    if (x0_44.d != 0)
                        UI2SetState(x0_44, &data_182cc88, 0xffffffff, 0)
            
            if (*(arg2 + 0x200) != 1 && x22_1 != x23_1 && x23_1 != 0)
                int32_t x25_5 = *(arg2 + 0x2148)
                
                if (x22_1 != 0xf44)
                    int32_t x0_51
                    
                    if (data_182ab68 == "tbl_card_mouse" && data_182a7b0 == x25_5
                            && zx.d(data_182a638) != 0)
                        x0_51 = UI2Exists(zx.q(data_182a7b8))
                    
                    int32_t x24_6
                    
                    if (data_182ab68 != "tbl_card_mouse" || data_182a7b0 != x25_5
                            || zx.d(data_182a638) == 0 || (x0_51 & 1) == 0)
                        int32_t x0_57 = UI2GetHandle(zx.q(x25_5), "tbl_card_mouse")
                        data_182a7b8 = x0_57
                        
                        if (x0_57 != 0)
                            x24_6 = x0_57
                            data_182ab68 = "tbl_card_mouse"
                            data_182a7b0 = x25_5
                            data_182a638 = 1
                        label_b0f5fc:
                            uint64_t x1_16
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_16 = 0x18
                            else
                                x1_16 = zx.q(*(ActiveGame() + 0x30))
                            
                            DomCardDef* x0_67 = DomDefGet(zx.q(x23_1), x1_16)
                            UI2SetState(zx.q(x24_6), &data_182ccb8, 0xffffffff, 0)
                            UI2SetState(zx.q(x24_6), x0_67 + 0x90, 0xffffffff, 0)
                            DomDeclareCardComponents(zx.q(x24_6), x0_67, nullptr, 0, 0)
                            DomDeclareType(zx.q(x24_6), x0_67, 0)
                            DomDeclareExpansion(zx.q(x24_6), x0_67)
                    else
                        x24_6 = data_182a7b8
                        
                        if (x24_6 != 0)
                            goto label_b0f5fc
                else
                    UI2SetState(zx.q(x25_5), &data_182cf88, 0xffffffff, 0)
                    UI2SetInt(zx.q(*(arg2 + 0x2148)), &data_182cfa0, 1, 0xffffffff)
                    int32_t x24_5 = *(arg2 + 0x2148)
                    int32_t x0_49
                    
                    if (data_182ab60 == "tbl_cards" && data_182a7a0 == x24_5)
                        x0_49 = UI2Exists(zx.q(data_182a7a8))
                    
                    int32_t x23_2
                    
                    if (data_182ab60 != "tbl_cards" || data_182a7a0 != x24_5 || (x0_49 & 1) == 0)
                        int32_t x0_53 = UI2GetHandle(zx.q(x24_5), "tbl_cards", 0)
                        data_182a7a8 = x0_53
                        
                        if (x0_53 != 0)
                            x23_2 = x0_53
                            data_182ab60 = "tbl_cards"
                            data_182a7a0 = x24_5
                        label_b0f5a4:
                            int32_t x24_7 = *(arg2 + 0x208)
                            uint64_t x1_15
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_15 = 0x18
                            else
                                x1_15 = zx.q(*(ActiveGame() + 0x30))
                            
                            DomCardDef* x0_61 = DomDefGet(zx.q(x24_7), x1_15)
                            UI2SetState(zx.q(x23_2), x0_61 + 0x90, 0xffffffff, 0)
                            DomDeclareCardComponents(zx.q(x23_2), x0_61, nullptr, 0, 0)
                            DomDeclareType(zx.q(x23_2), x0_61, 0)
                            DomDeclareExpansion(zx.q(x23_2), x0_61)
                    else
                        x23_2 = data_182a7a8
                        
                        if (x23_2 != 0)
                            goto label_b0f5a4
            
            if ((zx.d(data_182aa58) & 1) == 0 && __cxa_guard_acquire(&data_182aa58) != 0)
                data_182d4b0 = _vtable_for_UI2StateDecl + 0x10
                void* x0_105 = UI2StateDeclTryLookup("isLandscape")
                
                if (x0_105 == 0)
                    (*data_182d4b0)(&data_182d4b0, "isLandscape")
                    uint32_t x10_2 = *UI2StateDeclI_counter
                    uint64_t x11_1 = *UI2StateDeclI_head
                    *UI2StateDeclI_head = &data_182d4b0
                    *UI2StateDeclI_counter = x10_2 + 1
                    data_182d4b8 = x11_1
                else
                    (*data_182d4b0)(&data_182d4b0, *(x0_105 + 0x10))
                
                __cxa_guard_release(&data_182aa58)
                x28 = var_2630_1
            
            int32_t x0_73
            int128_t v0_3
            x0_73, v0_3 = ShouldAssocAbility(zx.q(x22_1), zx.q(*(arg2 + 0x210)))
            
            if ((x0_73 & 1) != 0)
                int32_t var_2620[0x4]
                uint64_t x21_1
                
                if (x22_1 != 0x1121)
                    int32_t i = *(arg2 + 0x218)
                    int32_t x0_78
                    
                    if (i == 0)
                        x21_1 = 0
                        
                        if (x22_1 != 0xf47 && x22_1 != 0xd16)
                            goto label_b0f798
                        
                        x0_78, v0_3 = CoallesceSameCards(&var_19a0, x21_1.d, &var_2620)
                        x21_1 = zx.q(x0_78)
                    else
                        x21_1 = 0
                        int64_t x9_2 = *(gDomClient + 0x205e0)
                        
                        do
                            void* x8_31 = x9_2 + mulu.dp.d(i & 0xffff, 0x21d8)
                            var_19a0[x21_1] = x8_31
                            i = *(x8_31 + 0xd0)
                            x21_1 += 1
                        while (i != 0)
                        
                        if (x22_1 != 0xf47 && x22_1 != 0xd16)
                            goto label_b0f798
                        
                        x0_78, v0_3 = CoallesceSameCards(&var_19a0, x21_1.d, &var_2620)
                        x21_1 = zx.q(x0_78)
                else
                    int32_t x0_76
                    x0_76, v0_3 =
                        GetCardsHere(AbilitySourceCard(x28, zx.q(*(arg2 + 0x1f4))), &var_19a0)
                    x21_1 = zx.q(x0_76)
                label_b0f798:
                    
                    if (x21_1.d s>= 1)
                        uint64_t x8_32 = zx.q(x21_1.d)
                        int64_t i_5
                        
                        if (x21_1.d u>= 8)
                            i_5 = x8_32 & 0xfffffff8
                            void var_2610
                            void* x10_1 = &var_2610
                            v0_3.d = 1
                            v0_3:4.d = 1
                            v0_3:8.d = 1
                            v0_3:0xc.d = 1
                            int64_t i_4 = i_5
                            int64_t i_1
                            
                            do
                                *(x10_1 - 0x10) = v0_3
                                *x10_1 = v0_3
                                i_1 = i_4
                                i_4 -= 8
                                x10_1 += 0x20
                            while (i_1 != 8)
                            
                            if (i_5 != x8_32)
                                goto label_b0f7e4
                        else
                            i_5 = 0
                        label_b0f7e4:
                            int64_t i_3 = x8_32 - i_5
                            void* x9_3 = &var_2620[i_5]
                            int64_t i_2
                            
                            do
                                i_2 = i_3
                                i_3 -= 1
                                *x9_3 = 1
                                x9_3 += 4
                            while (i_2 != 1)
                
                if (x21_1.d != 0)
                    UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182cf88, 0xffffffff, 0)
                    UI2SetInt(zx.q(*(arg2 + 0x2148)), &data_182cfa0, x21_1.d, 0xffffffff)
                    int32_t x8_33
                    
                    if (x21_1.d s< 0x10)
                        x8_33 = x21_1.d
                    else
                        x8_33 = 0x10
                    
                    if (x21_1.d s>= 1)
                        int64_t x21_2 = 0
                        void* fp_1 = &data_1836590
                        uint64_t x19_3
                        
                        if (x8_33 s> 1)
                            x19_3 = zx.q(x8_33)
                        else
                            x19_3 = 1
                        
                        do
                            DomCardDef* x0_82 = CardDef(x28, var_19a0[x21_2])
                            int32_t x27_1 = *(x0_82 + 0xc0)
                            uint64_t x1_29
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_29 = 0x18
                            else
                                x1_29 = zx.q(*(ActiveGame() + 0x30))
                            
                            int32_t x0_86 = IsLandscape(zx.q(x27_1), x1_29)
                            int32_t x28_1 = *(arg2 + 0x2148)
                            int64_t x8_35 = *(fp_1 - 0x30)
                            int32_t x27_2
                            
                            if ((x0_86 & 1) == 0)
                                int32_t x0_90
                                
                                if (x8_35 == "tbl_cards" && *(fp_1 - 0x38) == x28_1
                                        && x21_2 == zx.q(*(fp_1 - 0x28)) && *(fp_1 - 0x20) == 0)
                                    x0_90, v0_3 = UI2Exists(zx.q(*fp_1))
                                
                                if (x8_35 != "tbl_cards" || *(fp_1 - 0x38) != x28_1
                                        || x21_2 != zx.q(*(fp_1 - 0x28)) || *(fp_1 - 0x20) != 0
                                        || (x0_90 & 1) == 0)
                                    int32_t x0_95
                                    x0_95, v0_3 = UI2GetHandle(zx.q(x28_1), "tbl_cards", x21_2.d)
                                    *fp_1 = x0_95
                                    
                                    if (x0_95 != 0)
                                        x27_2 = x0_95
                                        *(fp_1 - 0x30) = "tbl_cards"
                                        *(fp_1 - 0x38) = x28_1
                                        *(fp_1 - 0x28) = x21_2.d
                                        *(fp_1 - 0x20) = 0
                                    label_b0f9d0:
                                        UI2SetState(zx.q(x27_2), x0_82 + 0x90, 0xffffffff, 0)
                                        DomDeclareCardComponents(zx.q(x27_2), x0_82, nullptr, 0, 0)
                                        DomDeclareType(zx.q(x27_2), x0_82, 0)
                                        DomDeclareExpansion(zx.q(x27_2), x0_82)
                                        int32_t x26_3 = var_2620[x21_2]
                                        
                                        if (x26_3 s>= 2)
                                            UI2SetState(zx.q(x27_2), &data_182cbf8, 0xffffffff, 0)
                                            XStringFromInt(x26_3)
                                            void var_2628
                                            UI2SetText(zx.q(x27_2), &data_182cc10, &var_2628, 
                                                0xffffffff)
                                            XString::~XString()
                                else
                                    x27_2 = *fp_1
                                    
                                    if (x27_2 != 0)
                                        goto label_b0f9d0
                            else
                                int32_t x0_88
                                
                                if (x8_35 == "tbl_cards_landscape" && *(fp_1 - 0x38) == x28_1
                                        && x21_2 == zx.q(*(fp_1 - 0x28)) && *(fp_1 - 0x20) == 0)
                                    x0_88 = UI2Exists(zx.q(*fp_1))
                                
                                if (x8_35 != "tbl_cards_landscape" || *(fp_1 - 0x38) != x28_1
                                        || x21_2 != zx.q(*(fp_1 - 0x28)) || *(fp_1 - 0x20) != 0
                                        || (x0_88 & 1) == 0)
                                    int32_t x0_92 =
                                        UI2GetHandle(zx.q(x28_1), "tbl_cards_landscape", x21_2.d)
                                    x27_2 = x0_92
                                    *fp_1 = x0_92
                                    
                                    if (x0_92 != 0)
                                        *(fp_1 - 0x30) = "tbl_cards_landscape"
                                        *(fp_1 - 0x38) = x28_1
                                        *(fp_1 - 0x28) = x21_2.d
                                        *(fp_1 - 0x20) = 0
                                else
                                    x27_2 = *fp_1
                                
                                UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182d4b0, 0xffffffff, 0)
                                
                                if (x27_2 != 0)
                                    goto label_b0f9d0
                            x28 = var_2630_1
                            x21_2 += 1
                            fp_1 += 0x40
                        while (x19_3 != x21_2)
            
            v0_3.d = *gSecondsPerUpdate
            return UI2UpdateRoot(zx.q(*(arg2 + 0x2148)), false, v0_3.d)

return result
