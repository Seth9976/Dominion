// 函数: _Z23GameSpecfic_HandleInputRK9InputData
// 地址: 0xb9c4c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double var_50

if ((HasActiveGame() & 1) != 0 && *arg1 == 9)
    if (zx.d(*gKV) != 0)
        float v0_1 = float.s(*(arg1 + 0xc))
        float v2_1 = *scroll
        *(gKV + 1) = 1
        *(gKV + 0xc) = v2_1 * v0_1 * fconvert.s(0.5f)
        *(gKV + 0x14) = 0x358637bd
        return 1
    
    if (zx.d(*(GetLocalSettings() + 0x38)) != 0)
        int32_t x8_3 = *(GetClient() + 0x5068)
        int32_t x0_5
        
        if (x8_3 == 1)
            x0_5 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_50)
        
        if (x8_3 != 1 || *(gDomClient + 0x205cc) s>= x0_5 || var_50 == 0)
            int32_t x0_7 = GameMainUI()
            int32_t x0_9
            
            if (data_182ac50 == "tbl_logEntries" && data_182a990 == x0_7 && zx.d(data_182a6f0) != 0)
                x0_9 = UI2Exists(zx.q(data_182a998))
            
            uint64_t x0_10
            
            if (data_182ac50 != "tbl_logEntries" || data_182a990 != x0_7 || zx.d(data_182a6f0) == 0
                    || (x0_9 & 1) == 0)
                x0_10 = UI2GetHandle(zx.q(x0_7), "tbl_logEntries")
                data_182a998 = x0_10.d
                
                if (x0_10.d != 0)
                    data_182ac50 = "tbl_logEntries"
                    data_182a990 = x0_7
                    data_182a6f0 = 1
            else
                x0_10 = zx.q(data_182a998)
            
            LogLinesScroll(x0_10, 
                vcvts_s32_f32(float.s(*(arg1 + 0xc)) * fconvert.s(-3f) / float.s(0x42f00000)))
            return 1

int32_t x8_6 = *arg1

if (x8_6 == 0)
    int32_t x8_10 = *(arg1 + 4)
    
    if (x8_10 == 0x6c)
        if (zx.d(*(*gpGameData + 0x3c)) != 0)
            ToggleTextSize()
            x8_6 = *arg1
        
        if (zx.d(*(*gpGameData + 0x3c)) != 0 && x8_6 != 0)
            goto label_b9c598
        
        x8_10 = *(arg1 + 4)
    
    if (x8_10 == 0x6a)
        if (zx.d(*(*gpGameData + 0x3c)) != 0)
            ToggleLanguage()
            return 1
    else if (x8_10 == 0x70)
        if (zx.d(*(*gpGameData + 0x3c)) != 0)
            uint32_t x9_6 = *gTestStyleOffset
            uint32_t x9_7
            
            if ((zx.d(*(arg1 + 8)) & 1) == 0)
                x9_7 = x9_6 + 1
            else if (x9_6 s> 0)
                x9_7 = x9_6 - 1
            else
                x9_7 = 0
            
            *gTestStyleOffset = x9_7
    else if (x8_10 == 0x76 && zx.d(*(*gpGameData + 0x3c)) != 0)
        int32_t x9_2 = data_182a730
        int32_t x9_3
        
        if (x9_2 + 1 s< 0)
            x9_3 = x9_2 + 4
        else
            x9_3 = x9_2 + 1
        
        data_182a730 = x9_2 + 1 - (x9_3 & 0xfffffffc)
else
label_b9c598:
    
    if (x8_6 == 1 && *(arg1 + 4) == 0x52 && zx.d(*(*gpGameData + 0x3c)) != 0
            && (GameDlgManagerDialogActive(0x7e3, 5) & 1) != 0)
        CampaignReroll()

if (*arg1 == 1)
    int32_t x8_23 = *(arg1 + 4)
    
    if (x8_23 != 0x4d)
        if (x8_23 != 0x42)
            goto label_b9c830
        
        if (zx.d(*(*gpGameData + 0x3c)) == 0)
            goto label_b9c808
        
        int32_t x9_8 = *(arg1 + 8)
        
        if ((x9_8 & 2) != 0)
            *gTestingButtons = *gTestingButtons == 0 ? 1 : 0
        
        uint32_t x10_6 = *gTestingButtons
        
        if ((x9_8 & 1) != 0)
            int32_t x9_15
            
            if (x10_6 == 0)
                x9_15 = 0xdd
            else
                x9_15 = x10_6 - 6
            
            *gTestingButtons = x9_15 & not.d(x9_15 s>> 0x1f)
            return 1
        
        uint32_t x9_10
        
        if (x10_6 != 0)
            x9_10 = x10_6 + 6
        else
            x9_10 = 1
        
        uint32_t x9_11
        
        x9_11 = x9_10 u> 0xe2 ? 0 : x9_10
        
        *gTestingButtons = x9_11
        return 1
    
    if (*(arg1 + 8) != 2 || zx.d(*(*gpGameData + 0x3c)) == 0)
    label_b9c808:
        x8_23 = *(arg1 + 4)
    label_b9c830:
        
        if (x8_23 == 0x41 && *(arg1 + 8) == 2 && zx.d(*(*gpGameData + 0x3c)) != 0)
            XAsset* x0_12 = *SOUND_SOUND_LOAD_ALWAYS_FX_CAMPAIGN_DOT_APPEAR
            *(gCampaignDlg + 0x506c) = 1
            AssetPreload(x0_12)
        
        if (x8_23 != 0x41 || *(arg1 + 8) != 2 || zx.d(*(*gpGameData + 0x3c)) == 0 || *arg1 == 1)
            int32_t x8_38 = *(arg1 + 4)
            
            if (x8_38 != 0x4d)
                goto label_b9c8a4
            
            if (*(arg1 + 8) == 2 && zx.d(*(*gpGameData + 0x3c)) != 0)
                DomMapAssetPurgeAll()
            
            if (*(arg1 + 8) != 2 || zx.d(*(*gpGameData + 0x3c)) == 0 || *arg1 == 1)
                x8_38 = *(arg1 + 4)
            label_b9c8a4:
                
                if (x8_38 == 0x49 && *(arg1 + 8) == 2 && zx.d(*(*gpGameData + 0x3c)) != 0)
                    DebugDumpLoadedAtlases()
    else
        DomMapGenerateTest()
        
        if (*arg1 == 1)
            goto label_b9c808

if (*(GetClient() + 0x5068) == 0)
    return 0

int32_t x8_43 = *arg1

if (x8_43 == 9)
    if (GameDlgMangerGetUI(0x28, 5, false) != 0)
        float v0_3 = float.s(*(arg1 + 0xc))
        int64_t x0_16 = UI2GetHandle(GameDlgMangerGetUI(0x28, 5, false), "tbl_logEntries")
        int32_t x19_1 = x0_16.d
        UI2GetTransform(x0_16)
        float v0_4 = var_50.d
        int128_t v0_5
        int32_t v1_3
        int128_t v2_2
        int128_t v3_1
        int128_t v4_1
        v0_5, v1_3, v2_2, v3_1, v4_1 = UI2GetScrollPos(zx.q(x19_1))
        v3_1.d = 0x43160000
        v3_1:4.d = 0x43160000
        v2_2.q = *V2Y
        v4_1.d = 0x3c088889
        v4_1:4.d = 0x3c088889
        v2_2.d = v2_2.d f* v0_3
        v2_2:4.d = v2_2:4.d f* v0_3
        v0_5:4.d = v1_3
        v2_2.d = v2_2.d f* v0_4
        v2_2:4.d = v2_2:4.d f* v0_4
        var_50 = vadd_f32(v0_5, vmul_f32(vmul_f32(v2_2, v3_1, 0), v4_1, 0))
        UI2SetScrollPos(zx.q(x19_1), &var_50)
        return 1
    
    x8_43 = *arg1

if (x8_43 == 1)
    if (*(arg1 + 4) != 0x6f)
    label_b9c9c8:
        
        if (*(arg1 + 4) != 0x5a || *(arg1 + 8) != 2)
            return 0
        
        if ((CanCtrlZUndo() & 1) != 0)
            if ((IsPassAndPlay() & 1) == 0)
                DomGameUndoRequest(DomLogGetLastPlayerDecision(LocalWho(), &var_50), zx.q(var_50.d))
            else
                void var_54
                int32_t x0_22 = DomLogGetLastPlayerDecision(0xffffffff, &var_54)
                DomMinimizePileAny()
                GameDlgManagerDismiss(2, false)
                GameDlgManagerDismiss(5, (not.d(GameDlgManagerDialogActive(0x29, 5))).b & 1)
                GameUndo(ActiveGame(), x0_22)
        
        return 1
    
    if ((DomMinimizePileAny() & 1) != 0)
        return 1
    
    x8_43 = *arg1
    
    if (x8_43 == 1)
        goto label_b9c9c8

if (zx.d(*(*gpGameData + 0x3c)) == 0 || x8_43 != 0)
    return 0

int64_t result = 0
uint64_t x8_49 = zx.q(*(arg1 + 4) - 0x67)

if (x8_49.d u> 0xe)
    return result

uint8_t* const x8_50

switch (x8_49)
    case 0
        x8_50 = doGfx
    case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xd
        return result
    case 0xb
        uint64_t x8_51 = zx.q(*(gDomClient + 0x205e8))
        
        if (x8_51.d != 0)
            void* x9_18 = *(gDomClient + 0x205e0)
            void* x10_8 = x9_18
            
            while (zx.d(*(x10_8 + 0x21d2)) == 0)
                x10_8 += 0x21d8
                
                if (x10_8 u>= x9_18 + x8_51 * 0x21d8)
                    return 1
            
            if (x10_8 != 0xffffffff)
                int32_t x17_1 = *(gDomClient + 0x38)
                int32_t x12_2 = 0
                int32_t x17_2
                
                x17_2 = x17_1 == 0xffffffff ? 0 : x17_1
                
                while (true)
                    if (*(x10_8 + 0xa4) == 0x3ea)
                        int32_t x0_28 = *(x10_8 + 0xa0)
                        *(x10_8 + 0x128) = 1
                        *(x10_8 + 0x134) = 5
                        *(x10_8 + 0x130) = x12_2
                        x9_18 = *(gDomClient + 0x205e0)
                        x8_51 = zx.q(*(gDomClient + 0x205e8))
                        
                        if (x0_28 != x17_2)
                            x12_2 += 1
                    
                    if (x10_8 == 0)
                        x10_8 = x9_18
                    else
                        x10_8 += 0x21d8
                    
                    void* x2_1 = x9_18 + mulu.dp.d(x8_51.d, 0x21d8)
                    
                    if (x10_8 u>= x2_1)
                        return 1
                    
                    while (zx.d(*(x10_8 + 0x21d2)) == 0)
                        x10_8 += 0x21d8
                        
                        if (x10_8 u>= x2_1)
                            return 1
                    
                    if (x10_8 == 0xffffffff)
                        return 1
        
        return 1
    case 0xc
        ToggleScore()
        return 1
    case 0xe
        x8_50 = doUpdate

*x8_50 ^= 1
return 1
