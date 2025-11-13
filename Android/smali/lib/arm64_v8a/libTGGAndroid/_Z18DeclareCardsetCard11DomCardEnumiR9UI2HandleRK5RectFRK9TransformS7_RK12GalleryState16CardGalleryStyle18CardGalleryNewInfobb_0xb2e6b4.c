// 函数: _Z18DeclareCardsetCard11DomCardEnumiR9UI2HandleRK5RectFRK9TransformS7_RK12GalleryState16CardGalleryStyle18CardGalleryNewInfobb
// 地址: 0xb2e6b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t fp = zx.d(arg11)
int32_t x21 = arg8
DomCardDef* x0 = DomDefGet(arg1, 0x18)

if (data_182a730 != 3)
    XAsset** x8_5
    
    if ((IsLandscape(zx.q(*(x0 + 0xc0)), 0x18) & 1) == 0)
        x8_5 = UI2_CARD_LAYOUT
    else
        x8_5 = UI2_LANDSCAPE_LAYOUT
    
    UI2Begin("card gallery", arg3, *x8_5, arg4, arg4, arg2, 0, true)
    
    if ((fp & 1) != 0)
    label_b2ea3c:
        
        if (not(*(arg7 + 4) f!= fconvert.s(1f)))
            UI2SetState(zx.q(*arg3), &data_182d510, 0xffffffff, 0)
else
    UI2Begin("card gallery", arg3, *UI2_ABILITY_BANNER_SET, arg4, arg4, arg2, 0, true)
    int32_t x2_3
    
    if (*(x0 + 0x6e0) == 0)
        x2_3 = 0
    else
        int32_t x26_1 = *arg3
        int32_t x0_2
        
        if (data_182abb0 == "tbl_abilities" && data_182a840 == x26_1 && data_182a848 == 0)
            x0_2 = UI2Exists(zx.q(data_182a850))
        
        uint64_t x0_3
        
        if (data_182abb0 != "tbl_abilities" || data_182a840 != x26_1 || data_182a848 != 0
                || (x0_2 & 1) == 0)
            x0_3 = UI2GetHandle(zx.q(x26_1), "tbl_abilities", 0)
            data_182a850 = x0_3.d
            
            if (x0_3.d != 0)
                data_182abb0 = "tbl_abilities"
                data_182a840 = x26_1
                data_182a848 = 0
                DomDeclareAbilityPower(x0_3, x0, zx.q(*(x0 + 0x6e0)))
        else
            x0_3 = zx.q(data_182a850)
            
            if (x0_3.d != 0)
                DomDeclareAbilityPower(x0_3, x0, zx.q(*(x0 + 0x6e0)))
        
        if (*(x0 + 0x6f0) == 0)
            x2_3 = 1
        else
            int32_t x26_2 = *arg3
            int32_t x0_8
            
            if (data_182abb0 == "tbl_abilities" && data_182a840 == x26_2 && data_182a848 == 1)
                x0_8 = UI2Exists(zx.q(data_182a850))
            
            uint64_t x0_9
            
            if (data_182abb0 != "tbl_abilities" || data_182a840 != x26_2 || data_182a848 != 1
                    || (x0_8 & 1) == 0)
                x0_9 = UI2GetHandle(zx.q(x26_2), "tbl_abilities", 1)
                data_182a850 = x0_9.d
                
                if (x0_9.d != 0)
                    data_182abb0 = "tbl_abilities"
                    data_182a840 = x26_2
                    data_182a848 = 1
                    DomDeclareAbilityPower(x0_9, x0, zx.q(*(x0 + 0x6f0)))
            else
                x0_9 = zx.q(data_182a850)
                
                if (x0_9.d != 0)
                    DomDeclareAbilityPower(x0_9, x0, zx.q(*(x0 + 0x6f0)))
            
            if (*(x0 + 0x700) == 0)
                x2_3 = 2
            else
                int32_t x26_3 = *arg3
                int32_t x0_12
                
                if (data_182abb0 == "tbl_abilities" && data_182a840 == x26_3 && data_182a848 == 2)
                    x0_12 = UI2Exists(zx.q(data_182a850))
                
                uint64_t x0_13
                
                if (data_182abb0 != "tbl_abilities" || data_182a840 != x26_3 || data_182a848 != 2
                        || (x0_12 & 1) == 0)
                    x0_13 = UI2GetHandle(zx.q(x26_3), "tbl_abilities", 2)
                    data_182a850 = x0_13.d
                    
                    if (x0_13.d != 0)
                        data_182abb0 = "tbl_abilities"
                        data_182a840 = x26_3
                        data_182a848 = 2
                        DomDeclareAbilityPower(x0_13, x0, zx.q(*(x0 + 0x700)))
                else
                    x0_13 = zx.q(data_182a850)
                    
                    if (x0_13.d != 0)
                        DomDeclareAbilityPower(x0_13, x0, zx.q(*(x0 + 0x700)))
                
                if (*(x0 + 0x710) == 0)
                    x2_3 = 3
                else
                    int32_t x26_4 = *arg3
                    int32_t x0_16
                    
                    if (data_182abb0 == "tbl_abilities" && data_182a840 == x26_4
                            && data_182a848 == 3)
                        x0_16 = UI2Exists(zx.q(data_182a850))
                    
                    uint64_t x0_17
                    
                    if (data_182abb0 != "tbl_abilities" || data_182a840 != x26_4
                            || data_182a848 != 3 || (x0_16 & 1) == 0)
                        x0_17 = UI2GetHandle(zx.q(x26_4), "tbl_abilities", 3)
                        data_182a850 = x0_17.d
                        
                        if (x0_17.d != 0)
                            data_182abb0 = "tbl_abilities"
                            data_182a840 = x26_4
                            data_182a848 = 3
                            DomDeclareAbilityPower(x0_17, x0, zx.q(*(x0 + 0x710)))
                    else
                        x0_17 = zx.q(data_182a850)
                        
                        if (x0_17.d != 0)
                            DomDeclareAbilityPower(x0_17, x0, zx.q(*(x0 + 0x710)))
                    x2_3 = 4
    
    UI2SetInt(zx.q(*arg3), &data_18306f0, x2_3, 0xffffffff)
    
    if ((fp & 1) != 0)
        goto label_b2ea3c

LanguageStateSet(zx.q(*arg3))

if (x21 == 1 && (ProfileHasEntitlementForCard(zx.q(arg1.d)) & 1) == 0 && not(*(arg7 + 4) f!= 0f))
    UI2SetState(zx.q(*arg3), &data_1830720, 0xffffffff, 0)

int32_t var_80
int32_t x0_26 = DomCardExp(zx.q(*(x0 + 0xc0)), &var_80)
void* __offset(GalleryState, 0x4) x25_2

if (arg9.d == 1)
    if (x0_26 == 0xa)
        if (*x0 != 2 || x21 u> 1)
            goto label_b2eb08
    else if (x0_26 != 7 || *x0 != 2 || x21 u> 1)
        goto label_b2eb08
    
    x25_2 = arg7 + 4
    
    if (not(*x25_2 f!= 0f))
        UI2SetState(zx.q(*arg3), &data_1830750, 0xffffffff, 0)
    
    goto label_b2eb1c

label_b2eb08:
x25_2 = arg7 + 4
uint64_t x0_30
UI2StateDecl* x1_7

if (x21 != 2 || not(*x25_2 f== 0f))
label_b2eb1c:
    uint64_t x8_19 = zx.q(data_182a730)
    
    if (x8_19.d u<= 3)
        switch (x8_19)
            case 0
                if (GetCurrentLanguage() == 0x10)
                    goto label_b2eb90
                
                int32_t x8_20 = *(GetLocalSettings() + 0x28)
                
                if (x8_20 == 0)
                    goto label_b2eb90
                
                if (x8_20 == 2)
                    x0_30 = zx.q(*arg3)
                    x1_7 = UIS_TEXT_JUMBO
                    goto label_b2eb8c
                
                if (x8_20 == 1)
                    x0_30 = zx.q(*arg3)
                    x1_7 = UIS_TEXT_LARGE
                    goto label_b2eb8c
            case 1
                goto label_b2eb78
            case 2
                x0_30 = zx.q(*arg3)
                x1_7 = &data_182c6e8
                goto label_b2eb8c
            case 3
                goto label_b2eb90
else
label_b2eb78:
    x0_30 = zx.q(*arg3)
    x1_7 = &data_182c6b8
label_b2eb8c:
    UI2SetState(x0_30, x1_7, 0xffffffff, 0)
label_b2eb90:
    int32_t x0_31
    int128_t v1_2
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    x0_31, v1_2, v2_1, v3_1, v4_1 = GetCurrentLanguage()
    
    if (x0_31 == 0x10)
        goto label_b2ec14
    
    int32_t x0_32
    x0_32, v1_2, v2_1, v3_1, v4_1 = GetCurrentLanguage()
    
    if (x0_32 == 0x11)
        goto label_b2ec14
    
    int32_t x0_33
    x0_33, v1_2, v2_1, v3_1, v4_1 = GetCurrentLanguage()
    
    if (x0_33 == 0x12)
        goto label_b2ec14
    
    int32_t x0_34
    x0_34, v1_2, v2_1, v3_1, v4_1 = GetCurrentLanguage()
    
    if (x0_34 == 0x13)
        goto label_b2ec14
    
    void* x0_35
    x0_35, v1_2, v2_1, v3_1, v4_1 = GetLocalSettings()
    int32_t x8_21 = *(x0_35 + 0x28)
    
    if (x8_21 - 1 u< 2)
        v1_2, v2_1, v3_1, v4_1 = UI2SetState(zx.q(*arg3), &data_182c748, 0xffffffff, 0)
    label_b2ec14:
        v1_2.q = *(arg6 + 0x14)
        v2_1.q = *(arg5 + 0x14)
        v3_1.d = *(arg6 + 0x1c)
        v4_1.d = *(arg5 + 0x1c)
        float v0_4 = *x25_2
        v3_1.d = v3_1.d f- v4_1.d
        int128_t v1_3
        v1_3.d = vsub_f32(v1_2, v2_1).d f* v0_4
        v1_3:4.d = v1_3:4.d f* v0_4
        v3_1.d = v0_4 f* v3_1.d
        int128_t v1_4 = vadd_f32(v2_1, v1_3)
        v2_1.d = v4_1.d f+ v3_1.d
        int64_t var_6c_1 = v1_4.q
        int32_t var_64_1 = v2_1.d
        v1_4.d = *arg5
        v2_1.d = *arg6
        v2_1.d = v2_1.d f- v1_4.d
        v2_1.d = v0_4 f* v2_1.d
        v1_4.d = v1_4.d f+ v2_1.d
        var_80 = v1_4.d
        v2_1.q = *(arg6 + 0xc)
        v3_1.q = *(arg5 + 0xc)
        v1_4.q = *(arg6 + 4)
        v4_1.q = *(arg5 + 4)
        uint128_t v5_1 = vmul_f32(v2_1, v3_1, 0)
        int128_t v7_1 = vdup_laneq_s32(v5_1, 1)
        uint128_t v6_1 = vmul_f32(v1_4, v4_1, 0)
        int128_t v7_2
        v7_2.d = 0f
        uint128_t v5_3 =
            vcgt_f32(v7_2, vadd_f32(vadd_f32(vadd_f32(v7_1, v6_1), vdup_laneq_s32(v6_1, 1)), v5_1))
        int128_t v6_4 = vneg_f32(v2_1)
        int128_t v5_4 = vdup_laneq_s32(v5_3, 0)
        int128_t v7_3 = vneg_f32(v1_4)
        int128_t v2_2 = vbsl_s8(v5_4, v6_4, v2_1)
        int128_t v1_5 = vbsl_s8(v5_4, v7_3, v1_4)
        int128_t v2_3
        v2_3.d = vsub_f32(v2_2, v3_1).d f* v0_4
        v2_3:4.d = v2_3:4.d f* v0_4
        int128_t v1_6
        v1_6.d = vsub_f32(v1_5, v4_1).d f* v0_4
        v1_6:4.d = v1_6:4.d f* v0_4
        int128_t v2_4 = vadd_f32(v3_1, v2_3)
        int128_t v1_7 = vadd_f32(v4_1, v1_6)
        uint128_t v3_2 = vmul_f32(v2_4, v2_4, 0)
        uint128_t v4_2 = vmul_f32(v1_7, v1_7, 0)
        int128_t v5_5 = vdup_laneq_s32(v3_2, 1)
        uint128_t v3_3
        v3_3.d = sqrt(vadd_f32(v3_2, vadd_f32(vdup_laneq_s32(v4_2, 1), vadd_f32(v5_5, v4_2))).d)
        int128_t v3_4 = vdup_laneq_s32(v3_3, 0)
        double var_7c_1 = vdiv_f32(v1_7, v3_4)
        double var_74_1 = vdiv_f32(v2_4, v3_4)
        
        if (not(v0_4 <= 0f))
            v3_4.d = float.s(0x447a0000)
            float temp0_1 = vrndp_f32(v0_4 f* v3_4.d)
            double v1_8
            v1_8.d = fconvert.s(0.5f)
            double v2_5
            v2_5.d = fconvert.s(-0.5f)
            
            if (temp0_1 < 0f)
                v1_8.d = v2_5.d
            else
                v1_8.d = v1_8.d
            
            UI2SetLayer(zx.q(*arg3), vcvts_s32_f32(temp0_1 f+ v1_8.d) + 0x3a98)
        
        v0_4 = *x25_2
        
        if (not(v0_4 != 0f))
            UI2SetState(zx.q(*arg3), &data_182d4c8, 0xffffffff, 0)
            v0_4 = *x25_2
        
        if (zx.d(*(arg7 + 1)) != 0 && not(v0_4 != 0f))
            UI2SetState(zx.q(*arg3), &data_1830630, 0xffffffff, 0)
        
        if (x21 == 0 && zx.d(*(arg7 + 2)) != 0)
            UI2SetState(zx.q(*arg3), &data_18306a8, 0xffffffff, 0)
        
        if (zx.d(*arg7) != 0 && not(*(arg7 + 4) != 0f))
            UI2SetState(zx.q(*arg3), &data_1830678, 0xffffffff, 0)
        
        UI2SetTransform(zx.q(*arg3), &var_80)
        
        if (x21 u< 3)
            int64_t* x8_26 = *(x0 + 0x68)
            
            if (x8_26 != 0 && (zx.d(*(x0 + 0xce)) & 2) == 0)
                PreloadTexture(gDomClient + 0x82eb8, *x8_26, 
                    IsLandscape(zx.q(*(x0 + 0xc0)), 0x18) & 1)
            
            void* __offset(DomCardDef, 0xa8) x1_11
            
            if (data_182a730 == 3)
                x1_11 = x0 + 0xa8
            else
                x1_11 = x0 + 0x90
            
            UI2SetState(zx.q(*arg3), x1_11, 0xffffffff, 0)
            DomDeclareCardComponents(zx.q(*arg3), x0, nullptr, 0, 0)
            DomDeclareType(zx.q(*arg3), x0, 0)
            DomDeclareExpansion(zx.q(*arg3), x0)
            
            if ((zx.d(arg10) & 1) != 0)
                UI2SetState(zx.q(*arg3), &data_182d4e0, 0xffffffff, 0)
            
            return UI2UpdateRoot(zx.q(*arg3), false, *gSecondsPerUpdate)
    else if (x8_21 == 0)
        goto label_b2ec14
pthread_kill(pthread_self(), 6)
int64_t x0_54
int64_t x1_15
x0_54, x1_15 = XNoReturn()
return DecalreAILevel(x0_54, x1_15) __tailcall
