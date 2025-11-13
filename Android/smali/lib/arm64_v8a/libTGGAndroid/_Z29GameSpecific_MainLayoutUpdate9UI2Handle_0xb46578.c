// 函数: _Z29GameSpecific_MainLayoutUpdate9UI2Handle
// 地址: 0xb46578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
TutorialUIClickableUpdate(arg1)
int64_t var_f8

if (*(GetClient() + 0x5068) != 0)
    int64_t* x1_2
    
    if ((IsCampaignMission(zx.q(*ActiveGame()), &var_f8) & 1) == 0)
        x1_2 = GetBackground(ActiveGame(), gDomClient + 0x20728)
    else
        x1_2 = &data_1831e60
    
    UI2SetState(zx.q(x19), x1_2, 0xffffffff, 0)

if (*(GetClient() + 0x5068) == 1)
    int32_t x0_10 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_f8)
    int64_t x8_2 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_2.d s< x0_10)
        int64_t x9_1 = var_f8
        
        if (x9_1 != 0)
            UI2StateDecl* x20_1 = x9_1 + x8_2 * 0xb0
            UI2SetState(zx.q(x19), x20_1, 0xffffffff, 0)
            
            if ((zx.d(*(x20_1 + 0xac)) & 1) != 0)
                UI2SetState(zx.q(x19), &data_18319c8, 0xffffffff, 0)

if (zx.d(*gKV) != 0)
    UI2SetState(zx.q(x19), &data_1831a10, 0xffffffff, 0)

if (zx.d(*(GetLocalSettings() + 0x38)) != 0)
    int32_t x8_6 = *(GetClient() + 0x5068)
    int32_t x0_18
    
    if (x8_6 == 1)
        x0_18 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_f8)
    
    if (x8_6 != 1 || *(gDomClient + 0x205cc) s>= x0_18 || var_f8 == 0)
        UI2SetState(zx.q(x19), &data_1831c98, 0xffffffff, 0)
        int32_t x0_21
        
        if (data_182abe8 == "tbl_logEntries" && data_182a8c0 == x19 && zx.d(data_182a688) != 0)
            x0_21 = UI2Exists(zx.q(data_182a8c8))
        
        uint64_t x0_22
        
        if (data_182abe8 != "tbl_logEntries" || data_182a8c0 != x19 || zx.d(data_182a688) == 0
                || (x0_21 & 1) == 0)
            x0_22 = UI2GetHandle(zx.q(x19), "tbl_logEntries")
            data_182a8c8 = x0_22.d
            
            if (x0_22.d != 0)
                data_182abe8 = "tbl_logEntries"
                data_182a8c0 = x19
                data_182a688 = 1
                LogLinesUpdate(x0_22)
        else
            x0_22 = zx.q(data_182a8c8)
            
            if (x0_22.d != 0)
                LogLinesUpdate(x0_22)
        
        if (zx.d(*(gLogData + 0xc0c)) != 0)
            UI2SetState(zx.q(x19), &data_1831cb0, 0xffffffff, 0)

UI2SetState(zx.q(x19), UIS_GAME, 0xffffffff, 0)
UI2SetHandler(zx.q(x19), DomMainLayoutButtons)
ShadowButtonUpdate(zx.q(x19))

if (zx.d(*(gDomClient + 0x20598)) != 0)
    UI2SetState(zx.q(x19), &data_1831ab8, 0xffffffff, 0)

uint64_t x8_15 = zx.q(*(gDomClient + 0x20594) - 1)

if (x8_15.d u<= 4)
    int64_t* x1_9 = &data_1831a28
    
    switch (x8_15)
        case 1
            UI2SetState(zx.q(x19), &data_1831a40, 0xffffffff, 0)
            x1_9 = &data_1831a58
        case 2
            UI2SetState(zx.q(x19), &data_1831a40, 0xffffffff, 0)
            x1_9 = &data_1831a70
        case 3
            x1_9 = &data_1831aa0
        case 4
            x1_9 = &data_1831a88
    
    UI2SetState(zx.q(x19), x1_9, 0xffffffff, 0)

UpdateCenterArea(zx.q(x19))
UI2StateDecl* x1_10

if ((ExtraTallAspectRatio() & 1) != 0)
    x1_10 = UIS_EXTRA_TALL_ASPECT_RATIO
else
    x1_10 = UIS_EXTRA_WIDE_ASPECT_RATIO

UI2SetState(zx.q(x19), x1_10, 0xffffffff, 0)
int32_t x0_35 = NearestAspectRatio()

if (x0_35 u<= 3)
    switch (x0_35)
        case 0
            UI2SetState(zx.q(x19), &data_182f3d0, 0xffffffff, 0)
        case 1
            UI2SetState(zx.q(x19), &data_182f3b8, 0xffffffff, 0)
        case 2
            UI2SetState(zx.q(x19), &data_182f3e8, 0xffffffff, 0)
    
    TimeRemainingUpdate(zx.q(x19))
    DragUpdateDropTargets(zx.q(x19))
    PlayerRevealUpdate(zx.q(x19))
    GetClient()
    int32_t x8_17 = *(gDomClient + 0x82b48)
    
    if (x8_17 u< 3)
        goto label_b469a4
    
    if (x8_17 == 3)
    label_b4699c:
        UI2SetState(zx.q(x19), &data_18319f8, 0xffffffff, 0)
    label_b469a4:
        int32_t x10_3 = *(gDomClient + 0x38)
        uint64_t x9_3 = zx.q(*(gDomClient + 0x205e8))
        uint64_t x0_41
        
        if (x10_3 == 0xffffffff)
            x0_41 = 0
        else
            x0_41 = zx.q(x10_3)
        
        void* i_8
        int64_t x9_4
        void* i
        
        if (x9_3.d != 0)
            i_8 = *(gDomClient + 0x205e0)
            x9_4 = i_8 + x9_3 * 0x21d8
            i = i_8
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x9_4)
                    goto label_b46aa4
        
        int32_t x20_3
        
        if (x9_3.d == 0 || i == 0xffffffff)
        label_b46aa4:
            x20_3 = 0
        else
            do
                if (*(i + 0x2c) == 3 && *(i + 0x58) == x0_41.d && *(i + 0x5c) == 0x3ea
                        && *(i + 0x60) == 0)
                    if (i == 0)
                        goto label_b46aa4
                    
                    int32_t j = *(i + 0x70)
                    
                    if (j == 0)
                        goto label_b46aa4
                    
                    x20_3 = 0
                    
                    do
                        void* x10_5 = i_8 + mulu.dp.d(j & 0xffff, 0x21d8)
                        j = *(x10_5 + 0x213c)
                        
                        if (*(x10_5 + 0xc0) != 0)
                            x20_3 += 1
                    while (j != 0)
                    
                    break
                
                if (i == 0)
                    i = i_8
                else
                    i += 0x21d8
                
                if (i u>= x9_4)
                    goto label_b46aa4
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x9_4)
                        goto label_b46aa4
                
                x20_3 = 0
            while (i != 0xffffffff)
        
        int32_t x0_42 = PileIsCurved(x0_41, 0x3ea)
        int32_t x8_20
        
        x8_20 = x20_3 s> 1 ? x20_3 : 1
        
        int32_t x2
        
        if ((x0_42 & 1) == 0)
            x2 = x8_20
        else
            x2 = 1
        
        UI2SetInt(zx.q(x19), &data_182f4a8, x2, 0xffffffff)
        uint64_t x9_5 = zx.q(*(gDomClient + 0x205e8))
        int64_t x21 = sx.q(*(gDomClient + 0x205c4))
        void* i_9
        int64_t x9_6
        void* i_1
        
        if (x9_5.d != 0)
            i_9 = *(gDomClient + 0x205e0)
            x9_6 = i_9 + x9_5 * 0x21d8
            i_1 = i_9
            
            while (zx.d(*(i_1 + 0x21d2)) == 0)
                i_1 += 0x21d8
                
                if (i_1 u>= x9_6)
                    goto label_b46bb4
        
        int32_t x2_1
        
        if (x9_5.d == 0 || i_1 == 0xffffffff)
        label_b46bb4:
            x2_1 = 1
        else
            x2_1 = 1
            
            do
                if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == x21.d && *(i_1 + 0x5c) == 0x3e9
                        && *(i_1 + 0x60) == 0)
                    if (i_1 == 0)
                        goto label_b46bb4
                    
                    int32_t x8_22 = *(i_1 + 0x88)
                    
                    x2_1 = x8_22 s> 1 ? x8_22 : 1
                    
                    break
                
                if (i_1 == 0)
                    i_1 = i_9
                else
                    i_1 += 0x21d8
                
                if (i_1 u>= x9_6)
                    goto label_b46bb4
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x9_6)
                        goto label_b46bb4
            while (i_1 != 0xffffffff)
        
        UI2SetInt(zx.q(x19), &data_182f538, x2_1, 0xffffffff)
        
        if (x21.d == 0xffffffff)
            XStringFromInt(0)
            UI2SetText(zx.q(x19), &data_182efc8, &var_f8, 0xffffffff)
            XString::~XString()
            XStringFromInt(0)
            UI2SetText(zx.q(x19), &data_182efe0, &var_f8, 0xffffffff)
            XString::~XString()
            XStringFromInt(0)
            UI2SetText(zx.q(x19), &data_182efb0, &var_f8, 0xffffffff)
            XString::~XString()
        else
            void* x8_23 = gDomClient + x21 * 0x4d48
            int32_t x24_1 = *(x8_23 + 0x4c)
            int32_t x25_1 = *(x8_23 + 0x50)
            int32_t x23_1 = *(x8_23 + 0x54)
            XStringFromInt(*(x8_23 + 0x48))
            UI2SetText(zx.q(x19), &data_182efc8, &var_f8, 0xffffffff)
            XString::~XString()
            XStringFromInt(x24_1)
            UI2SetText(zx.q(x19), &data_182efe0, &var_f8, 0xffffffff)
            XString::~XString()
            XStringFromInt(x25_1)
            UI2SetText(zx.q(x19), &data_182efb0, &var_f8, 0xffffffff)
            XString::~XString()
            XStringFromInt(x23_1)
            UI2SetText(zx.q(x19), &data_182eff8, &var_f8, 0xffffffff)
            XString::~XString()
            
            if (x23_1 s>= 1)
                UI2SetState(zx.q(x19), &data_182f010, 0xffffffff, 0)
            
            int32_t x0_55
            
            if (data_182abf0 == "grpTurnResources" && data_182a8d0 == x19
                    && zx.d(data_182a690) != 0)
                x0_55 = UI2Exists(zx.q(data_182a8d8))
            
            uint64_t x0_56
            
            if (data_182abf0 != "grpTurnResources" || data_182a8d0 != x19 || zx.d(data_182a690) == 0
                    || (x0_55 & 1) == 0)
                x0_56 = UI2GetHandle(zx.q(x19), "grpTurnResources")
                data_182a8d8 = x0_56.d
                
                if (x0_56.d != 0)
                    data_182abf0 = "grpTurnResources"
                    data_182a8d0 = x19
                    data_182a690 = 1
                    DeclarePlayerColor(x0_56, zx.q(x21.d))
            else
                x0_56 = zx.q(data_182a8d8)
                
                if (x0_56.d != 0)
                    DeclarePlayerColor(x0_56, zx.q(x21.d))
        
        int32_t x8_27 = *(gDomClient + 0x38)
        int32_t x20_4
        
        x20_4 = x8_27 == 0xffffffff ? 0 : x8_27
        
        int32_t x0_62
        
        if (data_182abf8 == "grp_player_color" && data_182a8e0 == x19 && zx.d(data_182a698) != 0)
            x0_62 = UI2Exists(zx.q(data_182a8e8))
        
        uint64_t x0_63
        
        if (data_182abf8 != "grp_player_color" || data_182a8e0 != x19 || zx.d(data_182a698) == 0
                || (x0_62 & 1) == 0)
            x0_63 = UI2GetHandle(zx.q(x19), "grp_player_color")
            data_182a8e8 = x0_63.d
            
            if (x0_63.d != 0)
                data_182abf8 = "grp_player_color"
                data_182a8e0 = x19
                data_182a698 = 1
            label_b46e28:
                int32_t x8_30 = *(gDomClient + 0x38)
                uint64_t x1_13
                
                if (x8_30 == 0xffffffff)
                    x1_13 = 0
                else
                    x1_13 = zx.q(x8_30)
                
                DeclarePlayerColor(x0_63, x1_13)
        else
            x0_63 = zx.q(data_182a8e8)
            
            if (x0_63.d != 0)
                goto label_b46e28
        GameSave* x0_65 = ActiveGame()
        int32_t x8_31 = *(gDomClient + 0x38)
        uint64_t x1_14
        
        if (x8_31 == 0xffffffff)
            x1_14 = 0
        else
            x1_14 = zx.q(x8_31)
        
        int32_t var_68
        
        if ((IsWinner(x0_65, x1_14, &var_f8, &var_68) & 1) != 0)
            UI2SetState(zx.q(x19), &data_182f040, 0xffffffff, 0)
        
        XStringFromInt(*(gDomClient + sx.q(x20_4) * 0x4d48 + 0x6c))
        UI2SetText(zx.q(x19), &data_182f028, &var_f8, 0xffffffff)
        XString::~XString()
        uint64_t x9_8 = zx.q(*(gDomClient + 0x205e8))
        void* i_10
        int64_t x9_9
        void* i_2
        
        if (x9_8.d != 0)
            i_10 = *(gDomClient + 0x205e0)
            x9_9 = i_10 + x9_8 * 0x21d8
            i_2 = i_10
            
            while (zx.d(*(i_2 + 0x21d2)) == 0)
                i_2 += 0x21d8
                
                if (i_2 u>= x9_9)
                    goto label_b46f50
        
        int32_t x0_70
        
        if (x9_8.d == 0 || i_2 == 0xffffffff)
        label_b46f50:
            x0_70 = 0
        else
            x0_70 = 0
            
            do
                if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa4) == 2)
                    x0_70 += 1
                
                if (i_2 == 0)
                    i_2 = i_10
                else
                    i_2 += 0x21d8
                
                if (i_2 u>= x9_9)
                    break
                
                while (zx.d(*(i_2 + 0x21d2)) == 0)
                    i_2 += 0x21d8
                    
                    if (i_2 u>= x9_9)
                        goto label_b46f58
            while (i_2 != 0xffffffff)
        
    label_b46f58:
        XStringFromInt(x0_70)
        UI2SetText(zx.q(x19), &data_182f568, &var_f8, 0xffffffff)
        XString::~XString()
        
        if (NumStandardCards() s>= 9)
            UI2SetState(zx.q(x19), &data_1831938, 0xffffffff, 0)
        
        if ((IsTrashGlowing() & 1) != 0)
            int32_t x0_76
            
            if (data_182ac00 == "btn_trash" && data_182a8f0 == x19 && zx.d(data_182a6a0) != 0)
                x0_76 = UI2Exists(zx.q(data_182a8f8))
            
            uint64_t x0_77
            
            if (data_182ac00 != "btn_trash" || data_182a8f0 != x19 || zx.d(data_182a6a0) == 0
                    || (x0_76 & 1) == 0)
                x0_77 = UI2GetHandle(zx.q(x19), "btn_trash")
                data_182a8f8 = x0_77.d
                
                if (x0_77.d != 0)
                    data_182ac00 = "btn_trash"
                    data_182a8f0 = x19
                    data_182a6a0 = 1
                    UI2SetState(x0_77, &data_182c640, 0xffffffff, 0)
            else
                x0_77 = zx.q(data_182a8f8)
                
                if (x0_77.d != 0)
                    UI2SetState(x0_77, &data_182c640, 0xffffffff, 0)
        
        if ((IsDiscardGlowing() & 1) != 0)
            int32_t x0_81
            
            if (data_182ac08 == "grp_discard" && data_182a900 == x19 && zx.d(data_182a6a8) != 0)
                x0_81 = UI2Exists(zx.q(data_182a908))
            
            uint64_t x0_82
            
            if (data_182ac08 != "grp_discard" || data_182a900 != x19 || zx.d(data_182a6a8) == 0
                    || (x0_81 & 1) == 0)
                x0_82 = UI2GetHandle(zx.q(x19), "grp_discard")
                data_182a908 = x0_82.d
                
                if (x0_82.d != 0)
                    data_182ac08 = "grp_discard"
                    data_182a900 = x19
                    data_182a6a8 = 1
                    UI2SetState(x0_82, &data_182c640, 0xffffffff, 0)
            else
                x0_82 = zx.q(data_182a908)
                
                if (x0_82.d != 0)
                    UI2SetState(x0_82, &data_182c640, 0xffffffff, 0)
        
        if ((IsDeckGlowing() & 1) != 0)
            int32_t x0_86
            
            if (data_182ac10 == "btn_deck" && data_182a910 == x19 && zx.d(data_182a6b0) != 0)
                x0_86 = UI2Exists(zx.q(data_182a918))
            
            uint64_t x0_87
            
            if (data_182ac10 != "btn_deck" || data_182a910 != x19 || zx.d(data_182a6b0) == 0
                    || (x0_86 & 1) == 0)
                x0_87 = UI2GetHandle(zx.q(x19), "btn_deck")
                data_182a918 = x0_87.d
                
                if (x0_87.d != 0)
                    data_182ac10 = "btn_deck"
                    data_182a910 = x19
                    data_182a6b0 = 1
                    UI2SetState(x0_87, &data_182c640, 0xffffffff, 0)
            else
                x0_87 = zx.q(data_182a918)
                
                if (x0_87.d != 0)
                    UI2SetState(x0_87, &data_182c640, 0xffffffff, 0)
        
        int32_t x0_90
        
        if (data_182ac18 == "img_playerAvatar" && data_182a920 == x19 && zx.d(data_182a6b8) != 0)
            x0_90 = UI2Exists(zx.q(data_182a928))
        
        int32_t x21_1
        
        if (data_182ac18 != "img_playerAvatar" || data_182a920 != x19 || zx.d(data_182a6b8) == 0
                || (x0_90 & 1) == 0)
            int32_t x0_92 = UI2GetHandle(zx.q(x19), "img_playerAvatar")
            data_182a928 = x0_92
            
            if (x0_92 != 0)
                x21_1 = x0_92
                data_182ac18 = "img_playerAvatar"
                data_182a920 = x19
                data_182a6b8 = 1
            label_b471d8:
                void* x0_93 = ActiveGame()
                int32_t x8_46 = *(gDomClient + 0x38)
                uint64_t x1_15
                
                if (x8_46 == 0xffffffff)
                    x1_15 = 0
                else
                    x1_15 = zx.q(x8_46)
                
                PlayerGetNameAvatar(x0_93 + 8, GameGetPlayer(x0_93 + 8, x1_15), &var_68)
                UI2SetState(zx.q(x21_1), GameAvatarGet(zx.q(var_68)), 0xffffffff, 0)
                XString::~XString()
        else
            x21_1 = data_182a928
            
            if (x21_1 != 0)
                goto label_b471d8
        int32_t x8_47 = *(gDomClient + 0x38)
        uint64_t x11_4 = zx.q(*(gDomClient + 0x205e8))
        int32_t x8_48
        
        x8_48 = x8_47 == 0xffffffff ? 0 : x8_47
        
        int32_t x21_2
        int32_t x22_2
        
        if (x11_4.d == 0)
            x21_2 = 0
        label_b473a8:
            x22_2 = 0
        else
            void* i_13 = *(gDomClient + 0x205e0)
            void* i_4 = i_13
            int64_t x11_5 = i_13 + x11_4 * 0x21d8
            void* i_3 = i_13
            
            while (true)
                if (zx.d(*(i_3 + 0x21d2)) == 0)
                    i_3 += 0x21d8
                    
                    if (i_3 u< x11_5)
                        continue
                else if (i_3 != 0xffffffff)
                    x21_2 = 0
                    
                    do
                        if (*(i_3 + 0x2c) == 0 && *(i_3 + 0xa0) == x8_48 && *(i_3 + 0xa4) == 0x3eb
                                && *(i_3 + 0xc8) == 0)
                            x21_2 += 1
                        
                        if (i_3 == 0)
                            i_3 = i_13
                        else
                            i_3 += 0x21d8
                        
                        if (i_3 u>= x11_5)
                            break
                        
                        while (zx.d(*(i_3 + 0x21d2)) == 0)
                            i_3 += 0x21d8
                            
                            if (i_3 u>= x11_5)
                                goto label_b47314
                    while (i_3 != 0xffffffff)
                    
                    break
                
                x21_2 = 0
                break
            
        label_b47314:
            
            while (zx.d(*(i_4 + 0x21d2)) == 0)
                i_4 += 0x21d8
                
                if (i_4 u>= x11_5)
                    goto label_b473a8_1
            
            if (i_4 == 0xffffffff)
            label_b473a8_1:
                x22_2 = 0
            else
                x22_2 = 0
                
                do
                    if (*(i_4 + 0x2c) == 0 && *(i_4 + 0xa0) == x8_48 && *(i_4 + 0xa4) == 0x3ec
                            && *(i_4 + 0xc8) == 0)
                        x22_2 += 1
                    
                    if (i_4 == 0)
                        i_4 = i_13
                    else
                        i_4 += 0x21d8
                    
                    if (i_4 u>= x11_5)
                        break
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x11_5)
                            goto label_b473b4
                while (i_4 != 0xffffffff)
        
    label_b473b4:
        XStringFromInt(x21_2)
        UI2SetText(zx.q(x19), &data_182f058, &var_f8, 0xffffffff)
        XString::~XString()
        XStringFromInt(x22_2)
        UI2SetText(zx.q(x19), &data_182f070, &var_f8, 0xffffffff)
        XString::~XString()
        int32_t x0_105
        
        if (data_182ac20 == "grp_discard" && data_182a930 == x19 && zx.d(data_182a6c0) != 0)
            x0_105 = UI2Exists(zx.q(data_182a938))
        
        uint64_t x0_106
        
        if (data_182ac20 != "grp_discard" || data_182a930 != x19 || zx.d(data_182a6c0) == 0
                || (x0_105 & 1) == 0)
            x0_106 = UI2GetHandle(zx.q(x19), "grp_discard")
            data_182a938 = x0_106.d
            
            if (x0_106.d != 0)
                data_182ac20 = "grp_discard"
                data_182a930 = x19
                data_182a6c0 = 1
            label_b47478:
                int32_t x8_52 = *(gDomClient + 0x38)
                uint64_t x10_6 = zx.q(*(gDomClient + 0x205e8))
                int32_t x8_53
                
                x8_53 = x8_52 == 0xffffffff ? 0 : x8_52
                
                if (x10_6.d != 0)
                    void* x9_12 = *(gDomClient + 0x205e0)
                    int64_t x11_6 = x9_12 + x10_6 * 0x21d8
                    void* x10_7 = x9_12
                    
                    do
                        if (zx.d(*(x10_7 + 0x21d2)) != 0)
                            if (x10_7 != 0xffffffff)
                                while (true)
                                    if (*(x10_7 + 0x2c) == 3 && *(x10_7 + 0x58) == x8_53
                                            && *(x10_7 + 0x5c) == 0x3ec && *(x10_7 + 0x60) == 0)
                                        if (x10_7 == 0)
                                            break
                                        
                                        if (*(x10_7 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                            break
                                        
                                        goto label_b47548
                                    
                                    if (x10_7 == 0)
                                        x10_7 = x9_12
                                    else
                                        x10_7 += 0x21d8
                                    
                                    if (x10_7 u>= x11_6)
                                        goto label_b47538
                                    
                                    while (zx.d(*(x10_7 + 0x21d2)) == 0)
                                        x10_7 += 0x21d8
                                        
                                        if (x10_7 u>= x11_6)
                                            goto label_b47538
                                    
                                    if (x10_7 == 0xffffffff)
                                        goto label_b47538
                            
                            break
                        
                        x10_7 += 0x21d8
                    while (x10_7 u< x11_6)
                
            label_b47538:
                UI2StateDecl* x1_18
                
                if (x22_2 == 0)
                    x1_18 = &data_182ed88
                else if (x22_2 == 1)
                label_b47548:
                    x1_18 = &data_182ed70
                else if (x22_2 - 1 u< 4)
                    x1_18 = &data_182eda0
                else if (x22_2 - 5 u< 6)
                    x1_18 = &data_182edb8
                else if (x22_2 - 0xb u< 6)
                    x1_18 = &data_182edd0
                else
                    x1_18 = &data_182ede8
                
                UI2SetState(x0_106, x1_18, 0xffffffff, 0)
        else
            x0_106 = zx.q(data_182a938)
            
            if (x0_106.d != 0)
                goto label_b47478
        int32_t x0_109
        
        if (data_182ac28 == "btn_deck" && data_182a940 == x19 && zx.d(data_182a6c8) != 0)
            x0_109 = UI2Exists(zx.q(data_182a948))
        
        uint64_t x0_110
        
        if (data_182ac28 != "btn_deck" || data_182a940 != x19 || zx.d(data_182a6c8) == 0
                || (x0_109 & 1) == 0)
            x0_110 = UI2GetHandle(zx.q(x19), "btn_deck")
            data_182a948 = x0_110.d
            
            if (x0_110.d != 0)
                data_182ac28 = "btn_deck"
                data_182a940 = x19
                data_182a6c8 = 1
            label_b47620:
                int32_t x8_60 = *(gDomClient + 0x38)
                uint64_t x10_8 = zx.q(*(gDomClient + 0x205e8))
                int32_t x8_61
                
                x8_61 = x8_60 == 0xffffffff ? 0 : x8_60
                
                if (x10_8.d != 0)
                    void* x9_14 = *(gDomClient + 0x205e0)
                    int64_t x11_7 = x9_14 + x10_8 * 0x21d8
                    void* x10_9 = x9_14
                    
                    do
                        if (zx.d(*(x10_9 + 0x21d2)) != 0)
                            if (x10_9 != 0xffffffff)
                                while (true)
                                    if (*(x10_9 + 0x2c) == 3 && *(x10_9 + 0x58) == x8_61
                                            && *(x10_9 + 0x5c) == 0x3eb && *(x10_9 + 0x60) == 0)
                                        if (x10_9 == 0)
                                            break
                                        
                                        if (*(x10_9 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                            break
                                        
                                        goto label_b476f0
                                    
                                    if (x10_9 == 0)
                                        x10_9 = x9_14
                                    else
                                        x10_9 += 0x21d8
                                    
                                    if (x10_9 u>= x11_7)
                                        goto label_b476e0
                                    
                                    while (zx.d(*(x10_9 + 0x21d2)) == 0)
                                        x10_9 += 0x21d8
                                        
                                        if (x10_9 u>= x11_7)
                                            goto label_b476e0
                                    
                                    if (x10_9 == 0xffffffff)
                                        goto label_b476e0
                            
                            break
                        
                        x10_9 += 0x21d8
                    while (x10_9 u< x11_7)
                
            label_b476e0:
                UI2StateDecl* x1_19
                
                if (x21_2 == 0)
                    x1_19 = &data_182ed88
                else if (x21_2 == 1)
                label_b476f0:
                    x1_19 = &data_182ed70
                else if (x21_2 - 1 u< 4)
                    x1_19 = &data_182eda0
                else if (x21_2 - 5 u< 6)
                    x1_19 = &data_182edb8
                else if (x21_2 - 0xb u< 6)
                    x1_19 = &data_182edd0
                else
                    x1_19 = &data_182ede8
                
                UI2SetState(x0_110, x1_19, 0xffffffff, 0)
        else
            x0_110 = zx.q(data_182a948)
            
            if (x0_110.d != 0)
                goto label_b47620
        int32_t x8_65 = *(gDomClient + 0x38)
        uint64_t x0_112
        
        if (x8_65 == 0xffffffff)
            x0_112 = 0
        else
            x0_112 = zx.q(x8_65)
        
        if ((TopCardIsStash(x0_112) & 1) != 0)
            UI2SetState(zx.q(x19), &data_182f268, 0xffffffff, 0)
        
        CalcOkState()
        int32_t x8_66 = *(GetClient() + 0x5068)
        
        if (x8_66 == 1)
        label_b477d0:
            int32_t var_100
            
            if ((HasNextGame(&var_100) & 1) != 0)
                UI2SetState(zx.q(x19), &data_182f580, 0xffffffff, 0)
                
                if (var_100 == 1)
                    UI2SetState(zx.q(x19), &data_182f598, 0xffffffff, 0)
        else if (x8_66 == 2 && *(ActiveGame() + 0x28) != 5 && *(gDomClient + 0x207a0) != LocalWho())
            goto label_b477d0
        
        uint64_t x9_15 = zx.q(*(gDomClient + 0x205e8))
        void* i_11
        int64_t x9_16
        void* i_5
        
        if (x9_15.d != 0)
            i_11 = *(gDomClient + 0x205e0)
            x9_16 = i_11 + x9_15 * 0x21d8
            i_5 = i_11
            
            while (zx.d(*(i_5 + 0x21d2)) == 0)
                i_5 += 0x21d8
                
                if (i_5 u>= x9_16)
                    goto label_b478d8
        
        int32_t x20_7
        
        if (x9_15.d == 0 || i_5 == 0xffffffff)
        label_b478d8:
            x20_7 = 0
        else
            int32_t x13_5 = *(gDomClient + 0x38)
            x20_7 = 0
            int32_t x13_6
            
            x13_6 = x13_5 == 0xffffffff ? 0 : x13_5
            
            do
                if (*(i_5 + 0x2c) == 5 && *(i_5 + 0x1f0) == x13_6 && *(i_5 + 0x21c) != 0)
                    x20_7 += 1
                
                if (i_5 == 0)
                    i_5 = i_11
                else
                    i_5 += 0x21d8
                
                if (i_5 u>= x9_16)
                    break
                
                while (zx.d(*(i_5 + 0x21d2)) == 0)
                    i_5 += 0x21d8
                    
                    if (i_5 u>= x9_16)
                        goto label_b478dc
            while (i_5 != 0xffffffff)
        
    label_b478dc:
        void* x0_122 = GetClient()
        int32_t x2_15
        
        if (*(x0_122 + 0x10) == *(x0_122 + 0xc))
            x2_15 = x20_7
        else
            x2_15 = 0
        
        UI2SetInt(zx.q(x19), &data_18319b0, x2_15, 0xffffffff)
        int32_t x9_18 = *(gDomClient + 0x207bc)
        int32_t x10_10 = *(gDomClient + 0x2074c)
        bool z
        
        if (x9_18 s> 6)
            z = x10_10 == 4
        else
            z = false
        
        int32_t x8_71
        
        x8_71 = z ? x9_18 : 6
        
        if (x10_10 == 4 && x9_18 s>= 6 && *(gDomClient + 0x207b0) != *(gDomClient + 0x207ac))
            x8_71 += 1
        
        int32_t x22_3
        
        if (*(x0_122 + 0x10) == *(x0_122 + 0xc))
            x22_3 = x8_71
        else
            x22_3 = 0
        
        UI2SetInt(zx.q(x19), &data_18319e0, x22_3, 0xffffffff)
        
        if (x22_3 s>= 1)
            uint32_t x26_1 = *gTestingButtons
            int64_t i_6 = 0
            
            do
                if (x26_1 == 0)
                    uint64_t x8_76 = zx.q(*(&var_f8 + (i_6 << 2) + 0x30))
                    
                    if (x8_76.d u<= 4)
                        switch (x8_76)
                            case 0
                                UI2SetState(zx.q(x19), &data_1831950, i_6.d, 0)
                            case 2
                                UI2SetState(zx.q(x19), &data_1831980, i_6.d, 0)
                            case 3
                                UI2SetState(zx.q(x19), &data_1831968, i_6.d, 0)
                            case 4
                                UI2SetState(zx.q(x19), &data_1831998, i_6.d, 0)
                    
                    void* x8_77 = &var_f8 + (i_6 << 2)
                    DeclareOkButton(zx.q(x19), i_6.d, zx.q(*x8_77), *(x8_77 + 0x60))
                    x26_1 = 0
                else if (x26_1 u> 0xe2)
                    UI2SetState(zx.q(x19), &data_1831950, i_6.d, 0)
                else
                    void* x8_74 = (zx.q(x26_1) << 5) + 0x114dad8
                    
                    while (true)
                        char* x9_21 = *x8_74
                        
                        if (x9_21 != 0 && zx.d(*x9_21) != 0)
                            break
                        
                        x26_1 += 1
                        x8_74 += 0x20
                    
                    DeclareOkButton(zx.q(x19), i_6.d, zx.q(x26_1), 1)
                    x26_1 += 1
                
                i_6 += 1
            while (i_6 != zx.q(x22_3))
        
        void* x0_129 = ActiveGame()
        int32_t x20_8 = *(x0_129 + 0x11b4)
        UI2SetInt(zx.q(x19), &data_182f100, x20_8 - 1, 0xffffffff)
        
        if ((CanCtrlZUndo() & 1) != 0
                && DomLogGetLastPlayerDecision(LocalWho(), &var_68) != 0xffffffff)
            GetClient()
            int32_t x0_135 = GetUndoStyleFlag(gDomClient + 0x81450)
            
            if (x0_135 != 0)
                int32_t x8_78 = var_68
                
                if (x0_135 != 1 || x8_78 != 2)
                    int32_t x9_24 = *(x0_129 + 0x20)
                    
                    if ((x8_78 != 2 || (x9_24 & 4) == 0) && (x8_78 != 2 || (x9_24 & 0x80) == 0))
                        UI2SetState(zx.q(x19), &data_1831908, 0xffffffff, 0)
                        
                        if (var_68 == 2)
                            UI2SetState(zx.q(x19), &data_1831920, 0xffffffff, 0)
        
        if (x20_8 - 2 u< 5)
            UI2SetState(zx.q(x19), (&data_1153ef8)[sx.q(x20_8 - 2)], 0xffffffff, 0)
        label_b47bc0:
            int64_t x23_2 = 0
            void* x25_2 = &data_1834a90
            bool cond:7_1
            
            do
                int32_t x8_81 = *(gDomClient + 0x38)
                uint64_t x1_26
                
                if (x8_81 == 0xffffffff)
                    x1_26 = 0
                else
                    x1_26 = zx.q(x8_81)
                
                int32_t x0_141 = PlayerSeatToWho(zx.q((x23_2 + 1).d), x1_26)
                int32_t x0_143
                
                if (*(x25_2 - 0x30) == "tbl_opponents" && *(x25_2 - 0x38) == x19
                        && x23_2 == zx.q(*(x25_2 - 0x28)) && *(x25_2 - 0x20) == 0)
                    x0_143 = UI2Exists(zx.q(*x25_2))
                
                uint64_t x0_139
                
                if (*(x25_2 - 0x30) == "tbl_opponents" && *(x25_2 - 0x38) == x19
                        && x23_2 == zx.q(*(x25_2 - 0x28)) && *(x25_2 - 0x20) == 0
                        && (x0_143 & 1) != 0)
                    x0_139 = zx.q(*x25_2)
                    
                    if (x0_139.d != 0)
                        DomOpponentLayoutUpdate(x0_139, zx.q(x0_141))
                else
                    x0_139 = UI2GetHandle(zx.q(x19), "tbl_opponents", x23_2.d)
                    *x25_2 = x0_139.d
                    
                    if (x0_139.d != 0)
                        *(x25_2 - 0x30) = "tbl_opponents"
                        *(x25_2 - 0x38) = x19
                        *(x25_2 - 0x28) = x23_2.d
                        *(x25_2 - 0x20) = 0
                        DomOpponentLayoutUpdate(x0_139, zx.q(x0_141))
                cond:7_1 = zx.q(x20_8 - 1) == x23_2 + 1
                x25_2 += 0x40
                x23_2 += 1
            while (not(cond:7_1))
        else if (x20_8 s> 1)
            goto label_b47bc0
        
        XString::XString()
        
        if (*(GetClient() + 0x5068) == 1)
            int32_t x0_148 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_68)
            
            if (*(gDomClient + 0x205cc) s< x0_148 && var_68.q != 0)
                UI2SetState(zx.q(x19), &data_182ef98, 0xffffffff, 0)
        
        int64_t x0_150
        DomActiveItem* x4
        x0_150, x4 = LocalWho()
        XString var_108
        
        if ((GetPromptText(x0_150, zx.q(*(gDomClient + 0x20758)), *(gDomClient + 0x2056c), 
                *(gDomClient + 0x207ac), x4, *(gDomClient + 0x20774), *(gDomClient + 0x20778), 
                &var_108) & 1) == 0)
            UI2SetState(zx.q(x19), &data_182f130, 0xffffffff, 0)
        
        UI2SetText(zx.q(x19), &data_182f118, &var_108, 0xffffffff)
        
        if (*(gDomClient + 0x1d00c) != 0)
            UI2SetState(zx.q(x19), &data_182db58, 0xffffffff, 0)
            int32_t* x8_90 = *(gDomClient + 0x1f0a8)
            
            if (x8_90 == 0)
                UI2SetState(zx.q(x19), &data_182f238, 0xffffffff, 0)
                UI2SetInt(zx.q(x19), &data_182f250, 1, 0xffffffff)
            else
                int32_t x21_5 = *x8_90
                
                if (x21_5 != 0)
                    UI2SetState(zx.q(x19), &data_182f238, 0xffffffff, 0)
                    UI2SetInt(zx.q(x19), &data_182f250, x21_5, 0xffffffff)
            
            if (*(gDomClient + 0x1d00c) - 1 u<= 2)
                int32_t x8_93 = *(GetClient() + 0x5068)
                int32_t x0_160
                
                if (x8_93 == 1)
                    x0_160 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_68)
                
                if (x8_93 != 1 || *(gDomClient + 0x205cc) s>= x0_160 || var_68.q == 0)
                    if ((CanSwipe(0) & 1) != 0)
                        UI2SetState(zx.q(x19), &data_182f148, 0xffffffff, 0)
                    
                    if ((CanSwipe(1) & 1) != 0)
                        UI2SetState(zx.q(x19), &data_182f160, 0xffffffff, 0)
                
                if (*(gDomClient + 0x1d00c) == 1)
                    if (*(gDomClient + 0x1f8b8) s>= 0xf)
                        UI2SetState(zx.q(x19), &data_1831d58, 0xffffffff, 0)
                    
                    if (*(gDomClient + 0x1f0a4) s>= 4)
                        UI2SetState(zx.q(x19), &data_1831d40, 0xffffffff, 0)
            
            int32_t x8_99 = *(gDomClient + 0x1d00c)
            
            if (x8_99 != 3 && *(gDomClient + 0x1d010) != 3)
                if (x8_99 != 2)
                    goto label_b47f60
                
                goto label_b47f14
            
            UI2SetState(zx.q(x19), &data_1831d70, 0xffffffff, 0)
            int32_t x8_100
            
            if (*(gDomClient + 0x1d00c) == 2)
            label_b47f14:
                UI2SetState(zx.q(x19), &data_1831d88, 0xffffffff, 0)
                x8_100 = *(gDomClient + 0x1d01c)
                
                if (x8_100 != 0)
                label_b47f74:
                    uint64_t x9_26 = zx.q(x8_100.w)
                    
                    if (x9_26.d u< *(gDomClient + 0x205e8))
                        int64_t x10_15 = *(gDomClient + 0x205e0)
                        
                        if (*(x10_15 + x9_26 * 0x21d8 + 0x21d0) == x8_100)
                            int32_t x21_6 = *(x10_15 + x9_26 * 0x21d8 + 0x170)
                            
                            if (*(GetClient() + 0x5068) == 0)
                                if ((IsLandscape(zx.q(x21_6), 0x18) & 1) != 0)
                                    UI2SetState(zx.q(x19), &data_1831da0, 0xffffffff, 0)
                            else if ((IsLandscape(zx.q(x21_6), zx.q(*(ActiveGame() + 0x30))) & 1)
                                    != 0)
                                UI2SetState(zx.q(x19), &data_1831da0, 0xffffffff, 0)
                            
                            if ((*(gDomClient + 0x1d00c) | 2) == 3)
                                int32_t x20_10 = *(gDomClient + 0x1f0a0)
                                int32_t x0_174 = GetCurrentLanguage()
                                
                                if (x20_10 != 0)
                                    int32_t x22_6 = 0
                                    int32_t* i_7 = gDomClient + 0x1d020
                                    
                                    do
                                        uint64_t x8_109 = zx.q(i_7[1])
                                        uint8_t x9_31 = (0x170 u>> x8_109).b
                                        bool x24_3
                                        
                                        if (((0xf1f3 u>> x8_109).d & 1) == 0)
                                            x24_3 = (x9_31 & 1) | (*i_7 s> 1 ? 1 : 0).b
                                        else
                                            x24_3 = x9_31 & 1
                                        
                                        TranslationString(zx.q(x0_174), 
                                            LookupTranslation(*(x8_109 * 0x18 + &data_11495f8), 
                                                nullptr, zx.q(x0_174)), 
                                            x24_3)
                                        UI2SetState(zx.q(x19), &data_1831cc8, x22_6, 0)
                                        XString::XString(&var_68)
                                        UI2SetText(zx.q(x19), &data_1831ce0, &var_68, x22_6)
                                        XString::~XString()
                                        UI2SetInt(zx.q(x19), &data_1831cf8, *i_7, x22_6)
                                        x22_6 += 1
                                        void* i_12 = i_7 + sx.q(8 + *i_7 * 0xc)
                                        
                                        if (i_12 == gDomClient + sx.q(*(gDomClient + 0x1f0a0))
                                                + 0x1d020)
                                            i_7 = nullptr
                                        else
                                            i_7 = i_12
                                    while (i_7 != 0)
                            
                            int32_t x10_19 = *(gDomClient + 0x1f0a4)
                            int32_t x8_111
                            
                            if (*(gDomClient + 0x1d00c) == 3)
                                x8_111 = 0xc
                            else
                                x8_111 = 3
                            
                            int32_t x2_31
                            
                            x2_31 = x10_19 s< 3 ? x10_19 : 3
                            
                            int32_t x21_8
                            
                            x21_8 = x8_111 s< x10_19 ? x8_111 : x10_19
                            
                            UI2SetInt(zx.q(x19), &data_1831d28, x2_31, 0xffffffff)
                            UI2SetInt(zx.q(x19), &data_1831d10, x21_8, 0xffffffff)
            else
            label_b47f60:
                x8_100 = *(gDomClient + 0x1d01c)
                
                if (x8_100 != 0)
                    goto label_b47f74
        
        int32_t x0_186
        
        if (data_182ac30 == "tbl_global_play" && data_182a950 == x19 && zx.d(data_182a6d0) != 0)
            x0_186 = UI2Exists(zx.q(data_182a958))
        
        int32_t x21_9
        
        if (data_182ac30 != "tbl_global_play" || data_182a950 != x19 || zx.d(data_182a6d0) == 0
                || (x0_186 & 1) == 0)
            int32_t x0_188 = UI2GetHandle(zx.q(x19), "tbl_global_play")
            x21_9 = x0_188
            data_182a958 = x0_188
            
            if (x0_188 != 0)
                data_182ac30 = "tbl_global_play"
                data_182a950 = x19
                data_182a6d0 = 1
        else
            x21_9 = data_182a958
        
        int32_t x0_190
        
        if (data_182ac38 == "tbl_global_play_center" && data_182a960 == x19
                && zx.d(data_182a6d8) != 0)
            x0_190 = UI2Exists(zx.q(data_182a968))
        
        int32_t x22_7
        
        if (data_182ac38 != "tbl_global_play_center" || data_182a960 != x19
                || zx.d(data_182a6d8) == 0 || (x0_190 & 1) == 0)
            int32_t x0_192 = UI2GetHandle(zx.q(x19), "tbl_global_play_center")
            x22_7 = x0_192
            data_182a968 = x0_192
            
            if (x0_192 != 0)
                data_182ac38 = "tbl_global_play_center"
                data_182a960 = x19
                data_182a6d8 = 1
        else
            x22_7 = data_182a968
        
        int32_t x0_194
        
        if (data_182ac40 == "tbl_player_hand" && data_182a970 == x19 && zx.d(data_182a6e0) != 0)
            x0_194 = UI2Exists(zx.q(data_182a978))
        
        int32_t x23_3
        
        if (data_182ac40 == "tbl_player_hand" && data_182a970 == x19 && zx.d(data_182a6e0) != 0
                && (x0_194 & 1) != 0)
            x23_3 = data_182a978
            goto label_b48300
        
        int32_t x0_196 = UI2GetHandle(zx.q(x19), "tbl_player_hand")
        data_182a978 = x0_196
        int32_t x8_121
        
        if (x0_196 == 0)
            x8_121 = x0_35 s> 0 ? 1 : 0
            
            if (x21_9 != 0)
            label_b4835c:
                
                if (x8_121 != 0)
                    float v0_1
                    float v1_1
                    float v2_1
                    float v3_1
                    v0_1, v1_1, v2_1, v3_1 = RectScreen()
                    
                    if (not((v2_1 - v0_1) / (v3_1 - v1_1) < float.s(0x3fe10e10)))
                        UI2SetState(zx.q(x21_9), &data_182c6b8, 0xffffffff, 0)
        else
            x23_3 = x0_196
            data_182ac40 = "tbl_player_hand"
            data_182a970 = x19
            data_182a6e0 = 1
        label_b48300:
            x8_121 = x0_35 s> 0 ? 1 : 0
            
            if (x0_35 s>= 1 && x23_3 != 0)
                int32_t x8_122 = *(gDomClient + 0x38)
                uint64_t x0_197
                
                if (x8_122 == 0xffffffff)
                    x0_197 = 0
                else
                    x0_197 = zx.q(x8_122)
                
                if ((PileIsCurved(x0_197, 0x3ea) & 1) != 0)
                    UI2SetState(zx.q(x23_3), &data_182c6b8, 0xffffffff, 0)
                
                x8_121 = 1
            
            if (x21_9 != 0)
                goto label_b4835c
        
        if (x22_7 != 0)
            float v0_2
            float v1_2
            float v2_2
            float v3_2
            v0_2, v1_2, v2_2, v3_2 = RectScreen()
            
            if (not((v2_2 - v0_2) / (v3_2 - v1_2) < float.s(0x3fe10e10)))
                UI2SetState(zx.q(x22_7), &data_182c6b8, 0xffffffff, 0)
        
        UI2StateDecl* x1_33
        
        if (*(GetLocalSettings() + 0xc) == 0)
            x1_33 = UIS_GFX_HIGH
        else
            x1_33 = UIS_GFX_LOW
        
        UI2SetState(zx.q(x19), x1_33, 0xffffffff, 0)
        return XString::~XString()
    
    if (x8_17 == 4)
        int32_t x8_18 = *(gDomClient + 0x82b58)
        
        if (x8_18 - 1 u< 2)
            goto label_b469a4
        
        if (x8_18 == 0)
            goto label_b4699c

pthread_kill(pthread_self(), 6)
return LogLinesUpdate(XNoReturn()) __tailcall
