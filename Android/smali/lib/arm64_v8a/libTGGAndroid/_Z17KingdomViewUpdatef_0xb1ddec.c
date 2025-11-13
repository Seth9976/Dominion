// 函数: _Z17KingdomViewUpdatef
// 地址: 0xb1ddec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q

if (zx.d(*gKV) != 0)
    entry_v8 = arg1
    int32_t v0
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0, v1_1, v2_1, v3_1 = RectScreen()
    int32_t var_90 = v0
    int32_t var_8c_1 = v1_1
    int32_t var_88_1 = v2_1
    int32_t var_84_1 = v3_1
    UI2GetTransform(GameMainUI())
    int32_t var_b0
    int128_t v0_1
    v0_1.d = var_b0
    float v1_2 = UI2GetSizeSquish(GameMainUI())
    v10.d = *(gKV + 0xc)
    float x = *(gKV + 0x10)
    float v0_2 = v1_2 * fconvert.s(0.5f)
    v1_2 = *(gKV + 8) - v0_2
    
    if (v0_2 > v1_2)
        v1_2 = v0_2
    
    entry_v9.d = v10.d f+ x
    float y = fneg(v1_2)
    *(gKV + 0x18) = v0_2
    *(gKV + 0x1c) = v1_2
    *(gKV + 0x10) = entry_v9.d
    
    if (not(entry_v9.d f>= y))
        v10.d = fneg(v1_2 f+ entry_v9.d)
        v0_2, y, x = powf(float.s(0x3ba3d70a), entry_v8.d f* fconvert.s(10f), y, x)
        v0_2 = vmin_f32(vmax_f32(v0_2 f* v10.d, float.s(0x3dcccccd)), float.s(0x437a0000))
    label_b1df10:
        entry_v9.d = entry_v9.d f+ v0_2
        v10.d = 0f
        *(gKV + 0x10) = entry_v9.d
    else if (not(entry_v9.d f<= fneg(v0_2)))
        v10.d = fneg(v0_2 f+ entry_v9.d)
        v0_2, y, x = powf(float.s(0x3ba3d70a), entry_v8.d f* fconvert.s(10f), y, x)
        v0_2 = vmax_f32(vmin_f32(v0_2 f* v10.d, float.s(0xbdcccccd)), float.s(0xc37a0000))
        goto label_b1df10
    
    int64_t x0
    int128_t v0_3
    int128_t v2_2
    uint128_t v3_2
    v0_3, x0, v2_2, v3_2 = powf(*(gKV + 0x14), entry_v8.d, y, x)
    int32_t x8_1 = *(gKV + 0x3a20)
    v0_3.d = v10.d f* v0_3.d
    *(gKV + 0xc) = v0_3.d
    
    if (x8_1 s>= 1)
        int64_t var_9c
        v0_3.q = var_9c
        v2_2.q = 0
        v2_2:4.d = entry_v9.d f+ float.s(0x44800000)
        float v1_6 = fconvert.s(1f) f/ v0_1.d
        v0_3.d = v0_3.d f* v1_6
        v0_3:4.d = v0_3:4.d f* v1_6
        int64_t i = 0
        entry_v8 = vadd_f32(v0_3, v2_2)
        entry_v9 = vdup_laneq_s32(v0_1, 0)
        void* x27_1 = &data_18035d8
        v10.d = v0_1.d f* 0f
        int64_t (* var_d8_1)() = gKV + 0x30
        
        do
            void* x23_1 = gKV + i * 0x74
            int128_t v0_5
            int128_t v1_7
            v0_5, v1_7 = UI2Begin("kv label", x23_1 + 0x24, *UI2_KINGDOM_VIEW_ENTRY, &var_90, 
                &var_90, 0x36b0, 0, false)
            v0_5.q = *(x23_1 + 0x28)
            uint64_t x0_12 = zx.q(*(x23_1 + 0x24))
            int128_t v0_6 = vadd_f32(entry_v8, v0_5)
            v1_7 = *QI
            double v0_7 = vmul_f32(entry_v9, v0_6, 0)
            int32_t var_d0 = v0_1.d
            *(&var_d0 | 4) = v1_7
            double var_bc_1 = v0_7
            int32_t var_b4_1 = v10.d
            UI2SetTransform(x0_12, &var_d0)
            uint64_t x8_12 = zx.q(*(x23_1 + 0x20) - 1)
            
            if (x8_12.d u<= 3)
                int64_t* x1_6 = &data_182dea0
                
                switch (x8_12)
                    case 0
                        UI2SetState(zx.q(*(x23_1 + 0x24)), &data_182de88, 0xffffffff, 0)
                        int32_t x20_1 = *(x23_1 + 0x24)
                        uint64_t x19_1 = zx.q(*(gKV + i * 0x74 + 0x30))
                        int32_t x0_4 = GetCurrentLanguage()
                        TranslationString(zx.q(x0_4), 
                            LookupTranslationSafe(*(x19_1 * 0x18 + &data_11499a0), zx.q(x0_4)), 
                            (0x7f8fffe06 u>> x19_1).b & 1)
                        char var_78
                        XString::XString(&var_78)
                        UI2SetText(zx.q(x20_1), &data_182df00, &var_78, 0xffffffff)
                        XString::~XString()
                    case 1
                        goto label_b1e14c
                    case 2
                        x1_6 = &data_182deb8
                    label_b1e14c:
                        UI2SetState(zx.q(*(x23_1 + 0x24)), x1_6, 0xffffffff, 0)
                        UI2SetInt(zx.q(*(x23_1 + 0x24)), &data_182dee8, *(gKV + i * 0x74 + 0x90), 
                            0xffffffff)
                        
                        if (*(gKV + i * 0x74 + 0x90) s>= 1)
                            int64_t (* x26_1)() = var_d8_1
                            int64_t j = 0
                            void* x19_2 = x27_1
                            
                            do
                                int32_t x8_15 = *(x23_1 + 0x20)
                                void* x8_22
                                int32_t x20_2
                                int32_t x21_2
                                
                                if (x8_15 - 2 u>= 2)
                                    if (x8_15 != 4)
                                        pthread_kill(pthread_self(), 6)
                                        return UndoDlgUpdate(XNoReturn()) __tailcall
                                    
                                    x21_2 = *(x23_1 + 0x24)
                                    int32_t x0_21
                                    
                                    if (*(x19_2 - 0x30) == "tbl_landscapes"
                                            && *(x19_2 - 0x38) == x21_2
                                            && j == zx.q(*(x19_2 - 0x28)) && *(x19_2 - 0x20) == 0)
                                        x0_21 = UI2Exists(zx.q(*x19_2))
                                        x8_22 = x19_2
                                    
                                    if (*(x19_2 - 0x30) == "tbl_landscapes"
                                            && *(x19_2 - 0x38) == x21_2
                                            && j == zx.q(*(x19_2 - 0x28)) && *(x19_2 - 0x20) == 0
                                            && (x0_21 & 1) != 0)
                                        goto label_b1e2a0
                                    
                                    int32_t x0_23 = UI2GetHandle(zx.q(x21_2), "tbl_landscapes", j.d)
                                    *x19_2 = x0_23
                                    
                                    if (x0_23 != 0)
                                        x20_2 = x0_23
                                        *(x19_2 - 0x30) = "tbl_landscapes"
                                        goto label_b1e2d8
                                else
                                    x21_2 = *(x23_1 + 0x24)
                                    int32_t x0_17
                                    
                                    if (*(x19_2 - 0x30) == "tbl_cards" && *(x19_2 - 0x38) == x21_2
                                            && j == zx.q(*(x19_2 - 0x28)) && *(x19_2 - 0x20) == 0)
                                        x0_17 = UI2Exists(zx.q(*x19_2))
                                    
                                    if (*(x19_2 - 0x30) != "tbl_cards" || *(x19_2 - 0x38) != x21_2
                                            || j != zx.q(*(x19_2 - 0x28)) || *(x19_2 - 0x20) != 0
                                            || (x0_17 & 1) == 0)
                                        int32_t x0_19 = UI2GetHandle(zx.q(x21_2), "tbl_cards", j.d)
                                        *x19_2 = x0_19
                                        
                                        if (x0_19 != 0)
                                            x20_2 = x0_19
                                            *(x19_2 - 0x30) = "tbl_cards"
                                        label_b1e2d8:
                                            *(x19_2 - 0x38) = x21_2
                                            *(x19_2 - 0x28) = j.d
                                            *(x19_2 - 0x20) = 0
                                        label_b1e2e4:
                                            int32_t x21_3 = *x26_1
                                            uint64_t x1_8
                                            
                                            if (*(GetClient() + 0x5068) == 0)
                                                x1_8 = 0x18
                                            else
                                                x1_8 = zx.q(*(ActiveGame() + 0x30))
                                            
                                            DomCardDef* x0_27 = DomDefGet(zx.q(x21_3), x1_8)
                                            UI2SetState(zx.q(x20_2), x0_27 + 0x90, 0xffffffff, 0)
                                            DomDeclareCardComponents(zx.q(x20_2), x0_27, nullptr, 
                                                1, 0)
                                            DomDeclareType(zx.q(x20_2), x0_27, 2)
                                            DomDeclareExpansion(zx.q(x20_2), x0_27)
                                            UI2SetState(zx.q(x20_2), &data_182d4c8, 0xffffffff, 0)
                                            UI2SetInt(zx.q(x20_2), &data_182dc00, 0, 0xffffffff)
                                            int32_t x0_34 = GetCurrentLanguage()
                                            LanguageStateSet(zx.q(x20_2))
                                            
                                            if ((x0_34 & 0xfffffffc) != 0x10)
                                                int32_t x8_29 = *(GetLocalSettings() + 0x28)
                                                
                                                if (x8_29 != 0)
                                                    if (x8_29 == 2)
                                                        UI2SetState(zx.q(x20_2), UIS_TEXT_JUMBO, 
                                                            0xffffffff, 0)
                                                    else
                                                        if (x8_29 != 1)
                                                            pthread_kill(pthread_self(), 6)
                                                            return UndoDlgUpdate(XNoReturn())
                                                                __tailcall
                                                        
                                                        UI2SetState(zx.q(x20_2), UIS_TEXT_LARGE, 
                                                            0xffffffff, 0)
                                    else
                                        x8_22 = &data_18035a0 + i * 0x180 + (j << 6) + 0x38
                                    label_b1e2a0:
                                        x20_2 = *x8_22
                                        
                                        if (x20_2 != 0)
                                            goto label_b1e2e4
                                j += 1
                                x19_2 += 0x40
                                x26_1 += 0x10
                            while (j s< sx.q(*(gKV + i * 0x74 + 0x90)))
                    case 3
                        x1_6 = &data_182ded0
                        goto label_b1e14c
            
            UI2UpdateRoot(zx.q(*(x23_1 + 0x24)), false, *gSecondsPerUpdate)
            i += 1
            x27_1 += 0x180
            var_d8_1 += 0x74
        while (i s< sx.q(*(gKV + 0x3a20)))

entry_v9.q = var_70
entry_v8.q = var_68
