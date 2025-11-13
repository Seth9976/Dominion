// 函数: _Z20DomMainLayoutButtonsRK12UI2ClickInfo
// 地址: 0xb35380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((TaptipHandleClick(arg1) & 1) == 0)
    LogItemClick(arg1)
    DomGfx* var_e8
    XString::XString(&var_e8)
    int32_t x0_4 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    int128_t var_110
    
    if ((x0_4 & 1) != 0)
        void var_ec
        
        if (CalcDeckShadows(&var_ec, &var_110, nullptr, &var_e8) == 1)
            return zx.q(DomGfxActivate(var_e8, V20, true, false, false) != 0 ? 1 : 0)
        
        ZoomDeckToggle()
    
    XString::XString(&var_e8)
    int32_t x0_12 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_12 & 1) != 0)
        *(gLogData + 0xc10) = 0xffffffff
        *(gLogData + 0xc0c) = 0
    
    XString::XString(&var_e8)
    int32_t x0_15 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_15 & 1) != 0)
        *(gDomSetSave + 8) = -0xffffffff
        XString::operator=(gDomSetSave)
        GameDlgManagerShow(0x7f0, 7)
        ClearTaptip()
    
    XString::XString(&var_e8)
    operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    XString::XString(&var_e8)
    int32_t x0_21 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_21 & 1) != 0)
        uint32_t x8_1 = zx.d(*(GetLocalSettings() + 0x38))
        int32_t x0_26
        int32_t x8_2
        
        if (x8_1 != 0)
            x8_2 = *(GetClient() + 0x5068)
            
            if (x8_2 == 1)
                x0_26 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_e8)
        
        if (x8_1 != 0 && (x8_2 != 1 || *(gDomClient + 0x205cc) s>= x0_26 || var_e8 == 0))
            *(GetLocalSettings() + 0x38) = 0
            SaveLocalSettings()
            GameDlgManagerRefreshMainLayout()
        else
            GameDlgManagerShow(0x28, 5)
            *(gDomClient + 0x20588) = 3
    
    XString::XString(&var_e8)
    int32_t x0_30 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_30 & 1) != 0)
        if ((IsPassAndPlay() & 1) == 0)
            if ((CanCtrlZUndo() & 1) != 0)
                DomGameUndoRequest(DomLogGetLastPlayerDecision(LocalWho(), &var_e8), zx.q(var_e8.d))
        else
            int32_t x0_32 = DomLogGetLastPlayerDecision(0xffffffff, &var_110)
            DomMinimizePileAny()
            GameDlgManagerDismiss(2, false)
            GameDlgManagerDismiss(5, (not.d(GameDlgManagerDialogActive(0x29, 5))).b & 1)
            GameUndo(ActiveGame(), x0_32)
    
    XString::XString(&var_e8)
    int32_t x0_40 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_40 & 1) != 0)
        void* x0_41 = GetLocalSettings()
        *(x0_41 + 0x2c) = *(x0_41 + 0x2c) != 1 ? 1 : 0
        SaveLocalSettings()
    
    XString::XString(&var_e8)
    int32_t x0_44 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_44 & 1) != 0)
        DomMinimizePileAny()
    
    XString::XString(&var_e8)
    int32_t x0_47 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_47 & 1) != 0 && (HasNextGame(&var_e8) & 1) != 0)
        if (var_e8.d != 1)
            GameResumeMultiplayer(zx.q(var_e8:4.d))
        else
            GameQueueResume(GetLocalGameIndex())
    
    XString::XString(&var_e8)
    int32_t x0_54 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_54 & 1) != 0)
        void* x0_55
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        x0_55, v0_1, v1_1, v2_1, v3_1 = GetClient()
        
        if (*(x0_55 + 0x5068) == 1)
            v0_1, v1_1, v2_1, v3_1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_e8)
        
        uint64_t x22_1 = zx.q(*(gDomClient + 0x1d01c))
        int64_t x23_1 = *(gDomClient + 0x205e0)
        DomGfx* x20_11 = x23_1 + x22_1 * 0x21d8
        v1_1 = *(x20_11 + 0x2080)
        v2_1 = *(x20_11 + 0x2090)
        v3_1 = *(x20_11 + 0x20a0)
        *(x20_11 + 0x20f0) = *(x20_11 + 0x2070)
        v0_1 = *(x20_11 + 0x2030)
        *(x20_11 + 0x2100) = v1_1
        v1_1 = *(x20_11 + 0x2040)
        *(x20_11 + 0x2110) = v2_1
        v2_1 = *(x20_11 + 0x2050)
        *(x20_11 + 0x2120) = v3_1
        v3_1 = *(x20_11 + 0x2060)
        *(x20_11 + 0x20b0) = v0_1
        *(x20_11 + 0x20c0) = v1_1
        *(x20_11 + 0x20d0) = v2_1
        *(x20_11 + 0x20e0) = v3_1
        *(gDomClient + 0x1d01c) = 0
        *(gDomClient + 0x1d00c) = 0
        int32_t x0_59
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        x0_59, v0_2, v1_2, v2_2, v3_2 = DomGfxActivate(x20_11, V20, false, false, false)
        
        if (x0_59 == 2)
            v0_2.q = 0
            v0_2:8.q = 0
            var_110 = zx.o(0)
            int128_t var_100_1 = zx.o(0)
            var_110.q = x20_11
            var_110:8.d = 0
            var_100_1:8.d = 0
            var_e8.d = 1
            int128_t var_c0_1 = *(x20_11 + 0x2050)
            int128_t var_b0_1 = *(x20_11 + 0x2060)
            int128_t var_e0_1 = *(x20_11 + 0x2030)
            int128_t var_d0_1 = *(x20_11 + 0x2040)
            int128_t var_70_1 = *(x20_11 + 0x20a0)
            int128_t var_80_1 = *(x20_11 + 0x2090)
            int128_t var_90_1 = *(x20_11 + 0x2080)
            int128_t var_a0_1 = *(x20_11 + 0x2070)
            MoveComponent<DomLoc, DomMoveCallback>::Move(x23_1 + x22_1 * 0x21d8 + 0x258, &var_e8, 
                6, 1)
    
    if (*(arg1 + 0x20) == 2)
        void* const x8_13
        
        if (*(GetClient() + 0x5068) == 1)
            int32_t x0_64 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_e8)
            int64_t x8_12 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_12.d s< x0_64)
                x8_13 = var_e8 + x8_12 * 0xb0
            else
                x8_13 = nullptr
            
            if (zx.d(*gKV) == 0)
                goto label_b3592c
            
            goto label_b358d0
        
        x8_13 = nullptr
        
        if (zx.d(*gKV) != 0)
        label_b358d0:
            
            if (*(gKV + 0x3a20) s>= 1)
                int64_t i = 0
                int64_t (* x20_12)() = gKV + 0x24
                
                do
                    UI2Free(x20_12)
                    i += 1
                    x20_12 += 0x74
                while (i s< sx.q(*(gKV + 0x3a20)))
            
            *gKV = 0
            *(gKV + 0x3a20) = 0
        else
        label_b3592c:
            
            if (*(gDomClient + 0x1d00c) == 0 || (x8_13 != 0 && *(x8_13 + 0x1c) != 0x12))
                GameDlgManagerShow(0x11, 5)
            else
                DomZoomDismiss(false)
    
    XString::XString(&var_e8)
    int32_t x0_68 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_68 & 1) != 0)
        CalcKingdomView(gDomClient + 0x20728, gKV)
        *gKV = 1
        KingdomViewUpdate(0f)
    
    XString::XString(&var_e8)
    int32_t x0_72 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_72 & 1) != 0)
        GameDlgManagerShow(0x11, 5)
    
    XString::XString(&var_e8)
    int32_t x0_75 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_75 & 1) != 0)
        DomHandleOk(*(arg1 + 0x10))
    
    XString::XString(&var_e8)
    int32_t x0_79 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_79 & 1) != 0)
        ZoomTrashToggle()
    
    XString::XString(&var_e8)
    int32_t x0_82 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_82 & 1) != 0)
        ZoomDeckToggle()
    
    XString::XString(&var_e8)
    int32_t x0_85 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_85 & 1) != 0)
        ZoomDiscardToggle()
    
    XString::XString(&var_e8)
    int32_t x0_88 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_88 & 1) != 0)
        ZoomOppDeckToggle(zx.q(*(arg1 + 0x10) + 1))
    
    XString::XString(&var_e8)
    int32_t x0_92 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_92 & 1) != 0)
        ZoomOppDiscardToggle(zx.q(*(arg1 + 0x10) + 1))
    
    XString::XString(&var_e8)
    int32_t x0_96 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_96 & 1) != 0)
        DomMinimizePileAny()
    
    XString::XString(&var_e8)
    int32_t x0_99 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_99 & 1) != 0)
        DomZoomDismiss(false)
    
    XString::XString(&var_e8)
    operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    XString::XString(&var_e8)
    int32_t x0_104 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_104 & 1) != 0)
        int32_t x9_6 = *(gDomClient + 0x38)
        uint64_t x1_59
        
        if (x9_6 == 0xffffffff)
            x1_59 = 0
        else
            x1_59 = zx.q(x9_6)
        
        uint32_t x0_106 = PlayerSeatToWho(zx.q(*(arg1 + 0x10) + 1), x1_59)
        *gPlayerInfoPopup = x0_106
        int64_t x0_110
        
        if (*(GameGetPlayer(ActiveGame() + 8, zx.q(x0_106)) + 0x14) == 3)
            x0_110 = 0x7f4
        else
            x0_110 = 0x7f3
        
        GameDlgManagerShow(x0_110, 5)
        void* x0_111 = GetActiveProfile()
        *(x0_111 + 0x4344) |= 4
        SaveProfiles()
    
    XString::XString(&var_e8)
    int32_t x0_114 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_114 & 1) != 0)
        uint32_t x8_21 = *(gDomClient + 0x38)
        uint32_t x20_26
        
        x20_26 = x8_21 == 0xffffffff ? 0 : x8_21
        
        *gPlayerInfoPopup = x20_26
        int64_t x0_118
        
        if (*(GameGetPlayer(ActiveGame() + 8, zx.q(x20_26)) + 0x14) == 3)
            x0_118 = 0x7f4
        else
            x0_118 = 0x7f3
        
        GameDlgManagerShow(x0_118, 5)
    
    XString::XString(&var_e8)
    int32_t x0_121 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_121 & 1) != 0)
        int32_t x9_9 = *(gDomClient + 0x38)
        uint64_t x1_66
        
        if (x9_9 == 0xffffffff)
            x1_66 = 0
        else
            x1_66 = zx.q(x9_9)
        
        int32_t x0_123 = PlayerSeatToWho(zx.q(*(arg1 + 0x10) + 1), x1_66)
        int32_t x8_25
        
        if (*(gDomClient + 0x3c) != x0_123)
            x8_25 = x0_123
        else
            x8_25 = -1
        
        *(gDomClient + 0x3c) = x8_25
    
    XString::XString(&var_e8)
    int32_t x0_126 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_126 & 1) != 0)
        ZoomSwipe(0)
    
    XString::XString(&var_e8)
    int32_t x0_129 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_129 & 1) != 0)
        ZoomSwipe(1)
    
    XString::XString(&var_e8)
    int32_t x0_132 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_132 & 1) != 0)
        *(gDomClient + 0x1d00c) = 2
    
    XString::XString(&var_e8)
    int32_t x0_135 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_135 & 1) != 0)
        *(gDomClient + 0x1d004) = fneg(*(gDomClient + 0x1d004))
    
    XString::XString(&var_e8)
    int32_t x0_138 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_138 & 1) != 0)
        *(gDomClient + 0x1d00c) = 3
    
    XString::XString(&var_e8)
    int32_t x0_141 = operator==(&var_e8, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_141 & 1) != 0)
        void* x0_142 = GetActiveProfile()
        *(x0_142 + 0x4344) |= 4
        SaveProfiles()

return 0
