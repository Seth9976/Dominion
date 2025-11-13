// 函数: _Z14DomDeclarePileR6DomGfxP9UI2Handle
// 地址: 0xb06184
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x5c)
DomGfx& x19 = arg1

if (*(arg1 + 0x2c) == 3 && x8 == 0x474)
    return 

if (x8 == 0x3e9)
    int64_t x9_1 = sx.q(*(x19 + 0x58))
    int32_t i
    
    if (x9_1.d != 0xffffffff)
        i = *(gDomClient + x9_1 * 0x4d48 + 0x40e4)
    
    int32_t x9_3
    
    if (x9_1.d == 0xffffffff || i == 0)
        x9_3 = 0
    else
        x9_3 = 0
        
        do
            i = *(*(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8) + 0x213c)
            x9_3 += 1
        while (i != 0)
    
    *(x19 + 0x2140) = x9_3

int128_t var_90
int128_t v0
int128_t v1
uint64_t x0_1

if (x8 != 0x3ee)
    x0_1 = CalcPodIconHandle(zx.q(*(x19 + 0x58)), *(x19 + 0x2140))
label_b06550:
    arg1, v0, v1 = UI2GetTransform(x0_1)
    v0 = var_90
    int128_t var_80
    v1 = var_80
else
    int32_t i_2 = *(x19 + 0x64)
    
    if (i_2 != 0)
        void* x8_1 = *(gDomClient + 0x205e0)
        void* x11_2 = x8_1
        int32_t i_1
        
        do
            i_1 = *(x11_2 + 0x21d0)
            x11_2 += 0x21d8
        while (i_1 u< 0x10000)
        void* x21_1 = x11_2 - 0x21d8
        
        while (*(x21_1 + 0x2c) != 0 || *(x21_1 + 0x98) != i_2 || zx.d(*(x21_1 + 0x168)) != 0)
            void* x12_4 = x21_1 + 0x43a8
            int32_t j
            
            do
                j = *x12_4
                x21_1 += 0x21d8
                x12_4 += 0x21d8
            while (j u< 0x10000)
        
        uint64_t x0_2 = zx.q(*(x21_1 + 0x2148))
        int32_t x21_2
        int32_t x23_1
        int32_t* x25_1
        
        if (x0_2.d == 0)
            int32_t i_4 = *(x19 + 0x68)
            
            if (i_4 != 0)
                void* x10_3 = x8_1
                int32_t i_3
                
                do
                    i_3 = *(x10_3 + 0x21d0)
                    x10_3 += 0x21d8
                while (i_3 u< 0x10000)
                void* x10_4 = x10_3 - 0x21d8
                
                while (*(x10_4 + 0x2c) != 0 || *(x10_4 + 0x98) != i_4
                        || zx.d(*(x10_4 + 0x168)) != 0)
                    void* x13_4 = x10_4 + 0x43a8
                    int32_t j_1
                    
                    do
                        j_1 = *x13_4
                        x10_4 += 0x21d8
                        x13_4 += 0x21d8
                    while (j_1 u< 0x10000)
                
                x0_2 = zx.q(*(x10_4 + 0x2148))
            
            if (i_4 != 0 && x0_2.d != 0)
                goto label_b062cc
            
            int64_t x22_2 = sx.q(*(x19 + 0x58))
            int32_t i_5
            
            if (x22_2.d != 0xffffffff)
                i_5 = *(gDomClient + x22_2 * 0x4d48 + 0x40e4)
            
            if (x22_2.d == 0xffffffff || i_5 == 0)
                x21_2 = 0
            else
                x21_2 = 0
                
                do
                    i_5 = *(x8_1 + mulu.dp.d(i_5 & 0xffff, 0x21d8) + 0x213c)
                    x21_2 += 1
                while (i_5 != 0)
            
            int32_t x0_9 = GameMainUI()
            int32_t x8_10 = *(gDomClient + 0x38)
            x23_1 = x0_9
            uint64_t x1_2
            
            if (x8_10 == 0xffffffff)
                x1_2 = 0
            else
                x1_2 = zx.q(x8_10)
            
            if (x22_2.d == 0xffffffff || x22_2.d == x1_2.d)
                x25_1 = &data_1833340
                int32_t x0_13
                
                if (data_1833348 == "tbl_player_pods" && data_1833340 == x23_1
                        && data_1833350 == x21_2 && data_1833358 == 0)
                    x0_13 = UI2Exists(zx.q(data_1833378))
                
                if (data_1833348 != "tbl_player_pods" || data_1833340 != x23_1
                        || data_1833350 != x21_2 || data_1833358 != 0 || (x0_13 & 1) == 0)
                    x0_1 = UI2GetHandle(zx.q(x23_1), "tbl_player_pods", x21_2)
                    data_1833378 = x0_1.d
                    
                    if (x0_1.d != 0)
                        goto label_b0653c
                else
                    x0_1 = zx.q(data_1833378)
            else
                x0_1 = UI2Selector::Lookup(&data_1833340, zx.q(x23_1), "tbl_opponents", 
                    zx.q(PlayerWhoToSeat(zx.q(x22_2.d), x1_2) - 1), "tbl_opponent_pods")
        else
        label_b062cc:
            x0_1 = UI2GetHandle(x0_2, "tbl_assocPile", 0)
            
            if (x0_1.d == 0)
                int64_t x22_1 = sx.q(*(x21_1 + 0xa0))
                int32_t i_6
                
                if (x22_1.d != 0xffffffff)
                    i_6 = *(gDomClient + x22_1 * 0x4d48 + 0x40e4)
                
                if (x22_1.d == 0xffffffff || i_6 == 0)
                    x21_2 = 0
                else
                    x21_2 = 0
                    
                    do
                        i_6 = *(*(gDomClient + 0x205e0) + mulu.dp.d(i_6 & 0xffff, 0x21d8) + 0x213c)
                        x21_2 += 1
                    while (i_6 != 0)
                
                int32_t x0_3 = GameMainUI()
                int32_t x8_5 = *(gDomClient + 0x38)
                x23_1 = x0_3
                uint64_t x1_1
                
                if (x8_5 == 0xffffffff)
                    x1_1 = 0
                else
                    x1_1 = zx.q(x8_5)
                
                if (x22_1.d != x1_1.d)
                    x0_1 = UI2Selector::Lookup(&data_1833300, zx.q(x23_1), "tbl_opponents", 
                        zx.q(PlayerWhoToSeat(zx.q(x22_1.d), x1_1) - 1), "tbl_opponent_pods")
                else
                    x25_1 = &data_1833300
                    int32_t x0_5
                    
                    if (data_1833308 == "tbl_player_pods" && data_1833300 == x23_1
                            && data_1833310 == x21_2 && data_1833318 == 0)
                        x0_5 = UI2Exists(zx.q(data_1833338))
                    
                    if (data_1833308 != "tbl_player_pods" || data_1833300 != x23_1
                            || data_1833310 != x21_2 || data_1833318 != 0 || (x0_5 & 1) == 0)
                        x0_1 = UI2GetHandle(zx.q(x23_1), "tbl_player_pods", x21_2)
                        data_1833338 = x0_1.d
                        
                        if (x0_1.d != 0)
                        label_b0653c:
                            *(x25_1 + 8) = "tbl_player_pods"
                            *x25_1 = x23_1
                            x25_1[4] = x21_2
                            *(x25_1 + 0x18) = 0
                    else
                        x0_1 = zx.q(data_1833338)
        goto label_b06550
    
    v0 = *TI
    v1 = *(TI + 0x10)
int32_t x8_15 = *(x19 + 0x5c)

if (x8_15 - 0x3ea u< 4 || (x8_15 == 0x3e9 && *(x19 + 0x58) == *(gDomClient + 0x205c4)))
    return 

*(x19 + 0x2158) = v0
*(x19 + 0x2168) = v1
XAsset* x23_2 = *UI2_POD_ICONS
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = RectScreen()
var_90.d = v0_1
var_90:4.d = v1_1
var_90:8.d = v2_1
var_90:0xc.d = v3_1
int32_t x5_2

if ((IsBoardPile(zx.q(*(x19 + 0x5c))) & 1) == 0)
    int32_t x9_10 = *(gDomClient + 0x38)
    int32_t x8_17 = *(x19 + 0x58)
    int32_t x9_11
    
    x9_11 = x9_10 == 0xffffffff ? 0 : x9_10
    
    if (x8_17 == x9_11)
        x5_2 = 0x2d35
    else if (*(gDomClient + 0x3c) == x8_17)
        x5_2 = 0x2b9a
    else
        x5_2 = 0x2b96
else
    x5_2 = 0x2b34

UI2Begin("pod", x19 + 0x2148, x23_2, &var_90, &var_90, x5_2, 0, false)
UI2SetHandler(zx.q(*(x19 + 0x2148)), PodClick)
LanguageStateSet(zx.q(*(x19 + 0x2148)))
UI2Handle* x20_1

if (arg2 == 0)
    x20_1 = x19 + 0x2148
else
    x20_1 = arg2

UI2SetTransform(zx.q(*x20_1), x19 + 0x2158)
UI2SetState(zx.q(*x20_1), UIS_GAME, 0xffffffff, 0)
UI2StateDecl* x1_8

if (*(GetLocalSettings() + 0xc) == 0)
    x1_8 = UIS_GFX_HIGH
else
    x1_8 = UIS_GFX_LOW

UI2SetState(zx.q(*x20_1), x1_8, 0xffffffff, 0)
int32_t x8_19 = *(x19 + 0x58)

if (x8_19 != 0xffffffff)
    int32_t x9_13 = *(gDomClient + 0x38)
    int32_t x9_14
    
    x9_14 = x9_13 == 0xffffffff ? 0 : x9_13
    
    if (x8_19 != x9_14)
        UI2SetState(zx.q(*(x19 + 0x2148)), &data_182c688, 0xffffffff, 0)

void* const var_48

if (zx.d(*(gDomClient + 0x1d000)) != 0)
    var_48 = &data_1151768
    int64_t x0_25 = UI2GetTaptip(zx.q(*x20_1))
    
    if (x0_25.d != 0)
        DeclareSmartplays(x0_25, 1, &var_48)

if ((TutorialGlow(x19) & 1) != 0)
    UI2SetState(zx.q(*x20_1), &data_182c580, 0xffffffff, 0)

if (*(GetClient() + 0x5068) == 1)
    int32_t x0_32 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_48)
    int64_t x8_23 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_23.d s< x0_32)
        void* const x9_15 = var_48
        
        if (x9_15 != 0)
            UI2SetState(zx.q(*x20_1), x9_15 + x8_23 * 0xb0, 0xffffffff, 0)

if (*(x19 + 0x21d0) == *(gDomClient + 0x1f8e4))
    UI2SetState(zx.q(*x20_1), &data_182dcd8, 0xffffffff, 0)

void* __offset(DomGfx, 0x58) x8_26

if (*(x19 + 0x2c) == 3)
    x8_26 = x19 + 0x58
else
    x8_26 = x19 + 0x1c4

uint64_t x8_28 = zx.q(*x8_26 + 1)
uint64_t x0_37
uint64_t x0_73
int32_t x1_15

if (x8_28.d u> 6)
label_b06a50:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_b06a6c:
    UI2SetState(zx.q(*x20_1), UIS_POD_IN_PLAY_OPPONENT_TURN, 0xffffffff, 0)
    uint64_t x10_11 = zx.q(*(gDomClient + 0x205e8))
    x0_37 = zx.q(*x20_1)
    
    if (x10_11.d == 0)
    label_b0856c:
        x1_15 = 0
    label_b08574:
        SetPodCounter(x0_37, x1_15, false)
        x0_73 = zx.q(*(x19 + 0x5c))
        
        if (x0_73.d != 0x3ee)
            goto label_b087a0
        
        goto label_b08584
    
    void* i_44 = *(gDomClient + 0x205e0)
    int64_t x10_12 = i_44 + x10_11 * 0x21d8
    void* i_7 = i_44
    
    while (zx.d(*(i_7 + 0x21d2)) == 0)
        i_7 += 0x21d8
        
        if (i_7 u>= x10_12)
            goto label_b0856c
    
    if (i_7 == 0xffffffff)
        goto label_b0856c
    
    x1_15 = 0
    
    do
        if (*(i_7 + 0x2c) == 0 && *(i_7 + 0xa0) == *(x19 + 0x58) && *(i_7 + 0xa4) == 0x3e9
                && *(i_7 + 0xc8) == 0)
            x1_15 += 1
        
        if (i_7 == 0)
            i_7 = i_44
        else
            i_7 += 0x21d8
        
        if (i_7 u>= x10_12)
            break
        
        while (zx.d(*(i_7 + 0x21d2)) == 0)
            i_7 += 0x21d8
            
            if (i_7 u>= x10_12)
                goto label_b08574
    while (i_7 != 0xffffffff)
    
    goto label_b08574

switch (x8_28)
    case 1
        UI2SetState(zx.q(*x20_1), &data_182b488, 0xffffffff, 0)
    case 2
        UI2SetState(zx.q(*x20_1), &data_182b4a0, 0xffffffff, 0)
    case 3
        UI2SetState(zx.q(*x20_1), &data_182b4b8, 0xffffffff, 0)
    case 4
        UI2SetState(zx.q(*x20_1), &data_182b4d0, 0xffffffff, 0)
    case 5
        UI2SetState(zx.q(*x20_1), &data_182b4e8, 0xffffffff, 0)
    case 6
        UI2SetState(zx.q(*x20_1), &data_182b500, 0xffffffff, 0)

int32_t x9_18 = *(x19 + 0x5c)
uint64_t x8_29 = zx.q(x9_18 - 0x3e9)
uint64_t x0_44
UI2StateDecl* x1_18

if (x8_29.d u> 0x89)
    if (x9_18 != 3)
        goto label_b06a50
    
label_b0877c:
    x0_44 = zx.q(*x20_1)
    x1_18 = UIS_POD_PILE
    goto label_b0878c

switch (x8_29)
    case 0
        goto label_b06a6c
    case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
            0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
            0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
            0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
            0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 
            0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
            0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63
        goto label_b06a50
    case 5
        goto label_b0877c
    case 0x64, 0x65, 0x66, 0x67
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_SHUFFLING, 0xffffffff, 0)
        uint64_t x11_5 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_5.d == 0)
            goto label_b0856c
        
        void* i_41 = *(gDomClient + 0x205e0)
        int64_t x11_6 = i_41 + x11_5 * 0x21d8
        void* i_8 = i_41
        
        while (zx.d(*(i_8 + 0x21d2)) == 0)
            i_8 += 0x21d8
            
            if (i_8 u>= x11_6)
                goto label_b0856c
        
        if (i_8 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_8 + 0x2c) == 0 && *(i_8 + 0xa0) == *(x19 + 0x58)
                    && *(i_8 + 0xa4) == *(x19 + 0x5c) && *(i_8 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_8 == 0)
                i_8 = i_41
            else
                i_8 += 0x21d8
            
            if (i_8 u>= x11_6)
                break
            
            while (zx.d(*(i_8 + 0x21d2)) == 0)
                i_8 += 0x21d8
                
                if (i_8 u>= x11_6)
                    goto label_b08574
        while (i_8 != 0xffffffff)
        
        goto label_b08574
    case 0x68
        UI2SetState(zx.q(*x20_1), UIS_POD_DURATION, 0xffffffff, 0)
        uint64_t x10_13 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x10_13.d == 0)
            goto label_b0856c
        
        void* i_45 = *(gDomClient + 0x205e0)
        int64_t x10_14 = i_45 + x10_13 * 0x21d8
        void* i_9 = i_45
        
        while (zx.d(*(i_9 + 0x21d2)) == 0)
            i_9 += 0x21d8
            
            if (i_9 u>= x10_14)
                goto label_b0856c
        
        if (i_9 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_9 + 0x2c) == 0 && *(i_9 + 0xa0) == *(x19 + 0x58) && *(i_9 + 0xa4) == 0x451
                    && *(i_9 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_9 == 0)
                i_9 = i_45
            else
                i_9 += 0x21d8
            
            if (i_9 u>= x10_14)
                break
            
            while (zx.d(*(i_9 + 0x21d2)) == 0)
                i_9 += 0x21d8
                
                if (i_9 u>= x10_14)
                    goto label_b08574
        while (i_9 != 0xffffffff)
        
        goto label_b08574
    case 0x69, 0x6a
        UI2SetState(zx.q(*x20_1), UIS_POD_PILE, 0xffffffff, 0)
        uint64_t x11_7 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_7.d == 0)
            goto label_b0856c
        
        void* i_42 = *(gDomClient + 0x205e0)
        int64_t x11_8 = i_42 + x11_7 * 0x21d8
        void* i_10 = i_42
        
        while (zx.d(*(i_10 + 0x21d2)) == 0)
            i_10 += 0x21d8
            
            if (i_10 u>= x11_8)
                goto label_b0856c
        
        if (i_10 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_10 + 0x2c) == 0 && *(i_10 + 0xa0) == *(x19 + 0x58)
                    && *(i_10 + 0xa4) == *(x19 + 0x5c) && *(i_10 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_10 == 0)
                i_10 = i_42
            else
                i_10 += 0x21d8
            
            if (i_10 u>= x11_8)
                break
            
            while (zx.d(*(i_10 + 0x21d2)) == 0)
                i_10 += 0x21d8
                
                if (i_10 u>= x11_8)
                    goto label_b08574
        while (i_10 != 0xffffffff)
        
        goto label_b08574
    case 0x6b
        x0_44 = zx.q(*x20_1)
        x1_18 = UIS_POD_INHERITANCE
    label_b0878c:
        UI2SetState(x0_44, x1_18, 0xffffffff, 0)
        x0_73 = zx.q(*(x19 + 0x5c))
        
        if (x0_73.d == 0x3ee)
        label_b08584:
            int32_t x8_63 = *(gDomClient + 0x38)
            int32_t x8_64
            
            x8_64 = x8_63 == 0xffffffff ? 0 : x8_63
            
            if (*(gDomClient + 0x207a0) == x8_64)
                int32_t x8_65 = *(x19 + 0x68)
                
                if (x8_65 == 0)
                    int32_t x8_66 = *(x19 + 0x70)
                    
                    if (x8_66 != 0 && (IsCardInActiveSet(
                        *(gDomClient + 0x205e0) + zx.q(x8_66.w) * 0x21d8, nullptr, false) & 1) != 0)
                    label_b086dc:
                        UI2SetState(zx.q(*x20_1), &data_182c5f8, 0xffffffff, 0)
                else
                    uint64_t x10_48 = zx.q(*(gDomClient + 0x205e8))
                    void* i_74
                    int64_t x10_49
                    void* i_11
                    
                    if (x10_48.d != 0)
                        i_74 = *(gDomClient + 0x205e0)
                        x10_49 = i_74 + x10_48 * 0x21d8
                        i_11 = i_74
                        
                        while (zx.d(*(i_11 + 0x21d2)) == 0)
                            i_11 += 0x21d8
                            
                            if (i_11 u>= x10_49)
                                goto label_b08690
                    
                    void* i_75
                    
                    if (x10_48.d == 0 || i_11 == 0xffffffff)
                    label_b08690:
                        i_75 = nullptr
                    else
                        do
                            if (*(i_11 + 0x2c) == 0 && *(i_11 + 0x98) == x8_65
                                    && zx.d(*(i_11 + 0x168)) == 0)
                                i_75 = i_11
                                break
                            
                            if (i_11 == 0)
                                i_11 = i_74
                            else
                                i_11 += 0x21d8
                            
                            if (i_11 u>= x10_49)
                                goto label_b08690
                            
                            while (zx.d(*(i_11 + 0x21d2)) == 0)
                                i_11 += 0x21d8
                                
                                if (i_11 u>= x10_49)
                                    goto label_b08690
                            
                            i_75 = nullptr
                        while (i_11 != 0xffffffff)
                    
                    if (*(gDomClient + 0x207a4) == 2 && *(i_75 + 0x2c) == 0
                            && *(gDomClient + 0x20758) != 0x2b
                            && *(i_75 + 0x98) == *(gDomClient + 0x207a8))
                        goto label_b086dc
        else
        label_b087a0:
            
            if ((IsPileGlowing(x0_73, zx.q(*(x19 + 0x58))) & 1) != 0)
                UI2StateDecl* x1_46
                
                if (*(x19 + 0x5c) != 3)
                    x1_46 = &data_182c5e0
                else
                    x1_46 = &data_182c5f8
                
                UI2SetState(zx.q(*x20_1), x1_46, 0xffffffff, 0)
    case 0x6c
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_SAVE, 0xffffffff, 0)
        uint64_t x11_11 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_11.d == 0)
            goto label_b0856c
        
        void* i_46 = *(gDomClient + 0x205e0)
        int64_t x11_12 = i_46 + x11_11 * 0x21d8
        void* i_12 = i_46
        
        while (zx.d(*(i_12 + 0x21d2)) == 0)
            i_12 += 0x21d8
            
            if (i_12 u>= x11_12)
                goto label_b0856c
        
        if (i_12 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_12 + 0x2c) == 0 && *(i_12 + 0xa0) == *(x19 + 0x58)
                    && *(i_12 + 0xa4) == *(x19 + 0x5c) && *(i_12 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_12 == 0)
                i_12 = i_46
            else
                i_12 += 0x21d8
            
            if (i_12 u>= x11_12)
                break
            
            while (zx.d(*(i_12 + 0x21d2)) == 0)
                i_12 += 0x21d8
                
                if (i_12 u>= x11_12)
                    goto label_b08574
        while (i_12 != 0xffffffff)
        
        goto label_b08574
    case 0x6d
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_CONTRACT, 0xffffffff, 0)
        uint64_t x11_13 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_13.d == 0)
            goto label_b0856c
        
        void* i_47 = *(gDomClient + 0x205e0)
        int64_t x11_14 = i_47 + x11_13 * 0x21d8
        void* i_13 = i_47
        
        while (zx.d(*(i_13 + 0x21d2)) == 0)
            i_13 += 0x21d8
            
            if (i_13 u>= x11_14)
                goto label_b0856c
        
        if (i_13 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_13 + 0x2c) == 0 && *(i_13 + 0xa0) == *(x19 + 0x58)
                    && *(i_13 + 0xa4) == *(x19 + 0x5c) && *(i_13 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_13 == 0)
                i_13 = i_47
            else
                i_13 += 0x21d8
            
            if (i_13 u>= x11_14)
                break
            
            while (zx.d(*(i_13 + 0x21d2)) == 0)
                i_13 += 0x21d8
                
                if (i_13 u>= x11_14)
                    goto label_b08574
        while (i_13 != 0xffffffff)
        
        goto label_b08574
    case 0x6e
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_ENCAMPMENT, 0xffffffff, 0)
        uint64_t x11_15 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_15.d == 0)
            goto label_b0856c
        
        void* i_48 = *(gDomClient + 0x205e0)
        int64_t x11_16 = i_48 + x11_15 * 0x21d8
        void* i_14 = i_48
        
        while (zx.d(*(i_14 + 0x21d2)) == 0)
            i_14 += 0x21d8
            
            if (i_14 u>= x11_16)
                goto label_b0856c
        
        if (i_14 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_14 + 0x2c) == 0 && *(i_14 + 0xa0) == *(x19 + 0x58)
                    && *(i_14 + 0xa4) == *(x19 + 0x5c) && *(i_14 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_14 == 0)
                i_14 = i_48
            else
                i_14 += 0x21d8
            
            if (i_14 u>= x11_16)
                break
            
            while (zx.d(*(i_14 + 0x21d2)) == 0)
                i_14 += 0x21d8
                
                if (i_14 u>= x11_16)
                    goto label_b08574
        while (i_14 != 0xffffffff)
        
        goto label_b08574
    case 0x6f
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_FAITHFUL_HOUND, 0xffffffff, 0)
        uint64_t x11_17 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_17.d == 0)
            goto label_b0856c
        
        void* i_49 = *(gDomClient + 0x205e0)
        int64_t x11_18 = i_49 + x11_17 * 0x21d8
        void* i_15 = i_49
        
        while (zx.d(*(i_15 + 0x21d2)) == 0)
            i_15 += 0x21d8
            
            if (i_15 u>= x11_18)
                goto label_b0856c
        
        if (i_15 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_15 + 0x2c) == 0 && *(i_15 + 0xa0) == *(x19 + 0x58)
                    && *(i_15 + 0xa4) == *(x19 + 0x5c) && *(i_15 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_15 == 0)
                i_15 = i_49
            else
                i_15 += 0x21d8
            
            if (i_15 u>= x11_18)
                break
            
            while (zx.d(*(i_15 + 0x21d2)) == 0)
                i_15 += 0x21d8
                
                if (i_15 u>= x11_18)
                    goto label_b08574
        while (i_15 != 0xffffffff)
        
        goto label_b08574
    case 0x70
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_HORSE_TRADERS, 0xffffffff, 0)
        uint64_t x11_19 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_19.d == 0)
            goto label_b0856c
        
        void* i_50 = *(gDomClient + 0x205e0)
        int64_t x11_20 = i_50 + x11_19 * 0x21d8
        void* i_16 = i_50
        
        while (zx.d(*(i_16 + 0x21d2)) == 0)
            i_16 += 0x21d8
            
            if (i_16 u>= x11_20)
                goto label_b0856c
        
        if (i_16 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_16 + 0x2c) == 0 && *(i_16 + 0xa0) == *(x19 + 0x58)
                    && *(i_16 + 0xa4) == *(x19 + 0x5c) && *(i_16 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_16 == 0)
                i_16 = i_50
            else
                i_16 += 0x21d8
            
            if (i_16 u>= x11_20)
                break
            
            while (zx.d(*(i_16 + 0x21d2)) == 0)
                i_16 += 0x21d8
                
                if (i_16 u>= x11_20)
                    goto label_b08574
        while (i_16 != 0xffffffff)
        
        goto label_b08574
    case 0x71
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_DELAY, 0xffffffff, 0)
        uint64_t x11_21 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_21.d == 0)
            goto label_b0856c
        
        void* i_51 = *(gDomClient + 0x205e0)
        int64_t x11_22 = i_51 + x11_21 * 0x21d8
        void* i_17 = i_51
        
        while (zx.d(*(i_17 + 0x21d2)) == 0)
            i_17 += 0x21d8
            
            if (i_17 u>= x11_22)
                goto label_b0856c
        
        if (i_17 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_17 + 0x2c) == 0 && *(i_17 + 0xa0) == *(x19 + 0x58)
                    && *(i_17 + 0xa4) == *(x19 + 0x5c) && *(i_17 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_17 == 0)
                i_17 = i_51
            else
                i_17 += 0x21d8
            
            if (i_17 u>= x11_22)
                break
            
            while (zx.d(*(i_17 + 0x21d2)) == 0)
                i_17 += 0x21d8
                
                if (i_17 u>= x11_22)
                    goto label_b08574
        while (i_17 != 0xffffffff)
        
        goto label_b08574
    case 0x72
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_REAP, 0xffffffff, 0)
        uint64_t x11_23 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_23.d == 0)
            goto label_b0856c
        
        void* i_52 = *(gDomClient + 0x205e0)
        int64_t x11_24 = i_52 + x11_23 * 0x21d8
        void* i_18 = i_52
        
        while (zx.d(*(i_18 + 0x21d2)) == 0)
            i_18 += 0x21d8
            
            if (i_18 u>= x11_24)
                goto label_b0856c
        
        if (i_18 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_18 + 0x2c) == 0 && *(i_18 + 0xa0) == *(x19 + 0x58)
                    && *(i_18 + 0xa4) == *(x19 + 0x5c) && *(i_18 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_18 == 0)
                i_18 = i_52
            else
                i_18 += 0x21d8
            
            if (i_18 u>= x11_24)
                break
            
            while (zx.d(*(i_18 + 0x21d2)) == 0)
                i_18 += 0x21d8
                
                if (i_18 u>= x11_24)
                    goto label_b08574
        while (i_18 != 0xffffffff)
        
        goto label_b08574
    case 0x73
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_WAYOFTHETURTLE, 0xffffffff, 0)
        uint64_t x11_25 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_25.d == 0)
            goto label_b0856c
        
        void* i_53 = *(gDomClient + 0x205e0)
        int64_t x11_26 = i_53 + x11_25 * 0x21d8
        void* i_19 = i_53
        
        while (zx.d(*(i_19 + 0x21d2)) == 0)
            i_19 += 0x21d8
            
            if (i_19 u>= x11_26)
                goto label_b0856c
        
        if (i_19 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_19 + 0x2c) == 0 && *(i_19 + 0xa0) == *(x19 + 0x58)
                    && *(i_19 + 0xa4) == *(x19 + 0x5c) && *(i_19 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_19 == 0)
                i_19 = i_53
            else
                i_19 += 0x21d8
            
            if (i_19 u>= x11_26)
                break
            
            while (zx.d(*(i_19 + 0x21d2)) == 0)
                i_19 += 0x21d8
                
                if (i_19 u>= x11_26)
                    goto label_b08574
        while (i_19 != 0xffffffff)
        
        goto label_b08574
    case 0x74
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_PRINCE, 0xffffffff, 0)
        uint64_t x11_27 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_27.d == 0)
            goto label_b0856c
        
        void* i_54 = *(gDomClient + 0x205e0)
        int64_t x11_28 = i_54 + x11_27 * 0x21d8
        void* i_20 = i_54
        
        while (zx.d(*(i_20 + 0x21d2)) == 0)
            i_20 += 0x21d8
            
            if (i_20 u>= x11_28)
                goto label_b0856c
        
        if (i_20 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_20 + 0x2c) == 0 && *(i_20 + 0xa0) == *(x19 + 0x58)
                    && *(i_20 + 0xa4) == *(x19 + 0x5c) && *(i_20 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_20 == 0)
                i_20 = i_54
            else
                i_20 += 0x21d8
            
            if (i_20 u>= x11_28)
                break
            
            while (zx.d(*(i_20 + 0x21d2)) == 0)
                i_20 += 0x21d8
                
                if (i_20 u>= x11_28)
                    goto label_b08574
        while (i_20 != 0xffffffff)
        
        goto label_b08574
    case 0x75
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_SUMMON, 0xffffffff, 0)
        uint64_t x11_29 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_29.d == 0)
            goto label_b0856c
        
        void* i_55 = *(gDomClient + 0x205e0)
        int64_t x11_30 = i_55 + x11_29 * 0x21d8
        void* i_21 = i_55
        
        while (zx.d(*(i_21 + 0x21d2)) == 0)
            i_21 += 0x21d8
            
            if (i_21 u>= x11_30)
                goto label_b0856c
        
        if (i_21 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_21 + 0x2c) == 0 && *(i_21 + 0xa0) == *(x19 + 0x58)
                    && *(i_21 + 0xa4) == *(x19 + 0x5c) && *(i_21 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_21 == 0)
                i_21 = i_55
            else
                i_21 += 0x21d8
            
            if (i_21 u>= x11_30)
                break
            
            while (zx.d(*(i_21 + 0x21d2)) == 0)
                i_21 += 0x21d8
                
                if (i_21 u>= x11_30)
                    goto label_b08574
        while (i_21 != 0xffffffff)
        
        goto label_b08574
    case 0x76
        UI2SetState(zx.q(*x20_1), UIS_POD_NATIVE_VILLAGE, 0xffffffff, 0)
        uint64_t x10_25 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x10_25.d == 0)
            goto label_b0856c
        
        void* i_56 = *(gDomClient + 0x205e0)
        int64_t x10_26 = i_56 + x10_25 * 0x21d8
        void* i_22 = i_56
        
        while (zx.d(*(i_22 + 0x21d2)) == 0)
            i_22 += 0x21d8
            
            if (i_22 u>= x10_26)
                goto label_b0856c
        
        if (i_22 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_22 + 0x2c) == 0 && *(i_22 + 0xa0) == *(x19 + 0x58) && *(i_22 + 0xa4) == 0x45f
                    && *(i_22 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_22 == 0)
                i_22 = i_56
            else
                i_22 += 0x21d8
            
            if (i_22 u>= x10_26)
                break
            
            while (zx.d(*(i_22 + 0x21d2)) == 0)
                i_22 += 0x21d8
                
                if (i_22 u>= x10_26)
                    goto label_b08574
        while (i_22 != 0xffffffff)
        
        goto label_b08574
    case 0x77
        UI2SetState(zx.q(*x20_1), UIS_POD_ISLAND, 0xffffffff, 0)
        uint64_t x10_27 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x10_27.d == 0)
            goto label_b0856c
        
        void* i_57 = *(gDomClient + 0x205e0)
        int64_t x10_28 = i_57 + x10_27 * 0x21d8
        void* i_23 = i_57
        
        while (zx.d(*(i_23 + 0x21d2)) == 0)
            i_23 += 0x21d8
            
            if (i_23 u>= x10_28)
                goto label_b0856c
        
        if (i_23 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_23 + 0x2c) == 0 && *(i_23 + 0xa0) == *(x19 + 0x58) && *(i_23 + 0xa4) == 0x460
                    && *(i_23 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_23 == 0)
                i_23 = i_57
            else
                i_23 += 0x21d8
            
            if (i_23 u>= x10_28)
                break
            
            while (zx.d(*(i_23 + 0x21d2)) == 0)
                i_23 += 0x21d8
                
                if (i_23 u>= x10_28)
                    goto label_b08574
        while (i_23 != 0xffffffff)
        
        goto label_b08574
    case 0x78
        UI2SetState(zx.q(*x20_1), UIS_POD_TAVERN, 0xffffffff, 0)
        uint64_t x10_29 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x10_29.d == 0)
            goto label_b0856c
        
        void* i_58 = *(gDomClient + 0x205e0)
        int64_t x10_30 = i_58 + x10_29 * 0x21d8
        void* i_24 = i_58
        
        while (zx.d(*(i_24 + 0x21d2)) == 0)
            i_24 += 0x21d8
            
            if (i_24 u>= x10_30)
                goto label_b0856c
        
        if (i_24 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_24 + 0x2c) == 0 && *(i_24 + 0xa0) == *(x19 + 0x58) && *(i_24 + 0xa4) == 0x461
                    && *(i_24 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_24 == 0)
                i_24 = i_58
            else
                i_24 += 0x21d8
            
            if (i_24 u>= x10_30)
                break
            
            while (zx.d(*(i_24 + 0x21d2)) == 0)
                i_24 += 0x21d8
                
                if (i_24 u>= x10_30)
                    goto label_b08574
        while (i_24 != 0xffffffff)
        
        goto label_b08574
    case 0x79
        UI2SetState(zx.q(*x20_1), UIS_POD_EXILE, 0xffffffff, 0)
        uint64_t x10_31 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x10_31.d == 0)
            goto label_b0856c
        
        void* i_59 = *(gDomClient + 0x205e0)
        int64_t x10_32 = i_59 + x10_31 * 0x21d8
        void* i_25 = i_59
        
        while (zx.d(*(i_25 + 0x21d2)) == 0)
            i_25 += 0x21d8
            
            if (i_25 u>= x10_32)
                goto label_b0856c
        
        if (i_25 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_25 + 0x2c) == 0 && *(i_25 + 0xa0) == *(x19 + 0x58) && *(i_25 + 0xa4) == 0x462
                    && *(i_25 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_25 == 0)
                i_25 = i_59
            else
                i_25 += 0x21d8
            
            if (i_25 u>= x10_32)
                break
            
            while (zx.d(*(i_25 + 0x21d2)) == 0)
                i_25 += 0x21d8
                
                if (i_25 u>= x10_32)
                    goto label_b08574
        while (i_25 != 0xffffffff)
        
        goto label_b08574
    case 0x7a, 0x7b
        UI2SetState(zx.q(*x20_1), UIS_POD_BOON, 0xffffffff, 0)
        uint64_t x11_9 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_9.d == 0)
            goto label_b0856c
        
        void* i_43 = *(gDomClient + 0x205e0)
        int64_t x11_10 = i_43 + x11_9 * 0x21d8
        void* i_26 = i_43
        
        while (zx.d(*(i_26 + 0x21d2)) == 0)
            i_26 += 0x21d8
            
            if (i_26 u>= x11_10)
                goto label_b0856c
        
        if (i_26 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_26 + 0x2c) == 0 && *(i_26 + 0xa0) == *(x19 + 0x58)
                    && *(i_26 + 0xa4) == *(x19 + 0x5c) && *(i_26 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_26 == 0)
                i_26 = i_43
            else
                i_26 += 0x21d8
            
            if (i_26 u>= x11_10)
                break
            
            while (zx.d(*(i_26 + 0x21d2)) == 0)
                i_26 += 0x21d8
                
                if (i_26 u>= x11_10)
                    goto label_b08574
        while (i_26 != 0xffffffff)
        
        goto label_b08574
    case 0x7c
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_BLOCKADE, 0xffffffff, 0)
        uint64_t x11_31 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_31.d == 0)
            goto label_b0856c
        
        void* i_60 = *(gDomClient + 0x205e0)
        int64_t x11_32 = i_60 + x11_31 * 0x21d8
        void* i_27 = i_60
        
        while (zx.d(*(i_27 + 0x21d2)) == 0)
            i_27 += 0x21d8
            
            if (i_27 u>= x11_32)
                goto label_b0856c
        
        if (i_27 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_27 + 0x2c) == 0 && *(i_27 + 0xa0) == *(x19 + 0x58)
                    && *(i_27 + 0xa4) == *(x19 + 0x5c) && *(i_27 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_27 == 0)
                i_27 = i_60
            else
                i_27 += 0x21d8
            
            if (i_27 u>= x11_32)
                break
            
            while (zx.d(*(i_27 + 0x21d2)) == 0)
                i_27 += 0x21d8
                
                if (i_27 u>= x11_32)
                    goto label_b08574
        while (i_27 != 0xffffffff)
        
        goto label_b08574
    case 0x7d
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_CAGE, 0xffffffff, 0)
        uint64_t x11_33 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_33.d == 0)
            goto label_b0856c
        
        void* i_61 = *(gDomClient + 0x205e0)
        int64_t x11_34 = i_61 + x11_33 * 0x21d8
        void* i_28 = i_61
        
        while (zx.d(*(i_28 + 0x21d2)) == 0)
            i_28 += 0x21d8
            
            if (i_28 u>= x11_34)
                goto label_b0856c
        
        if (i_28 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_28 + 0x2c) == 0 && *(i_28 + 0xa0) == *(x19 + 0x58)
                    && *(i_28 + 0xa4) == *(x19 + 0x5c) && *(i_28 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_28 == 0)
                i_28 = i_61
            else
                i_28 += 0x21d8
            
            if (i_28 u>= x11_34)
                break
            
            while (zx.d(*(i_28 + 0x21d2)) == 0)
                i_28 += 0x21d8
                
                if (i_28 u>= x11_34)
                    goto label_b08574
        while (i_28 != 0xffffffff)
        
        goto label_b08574
    case 0x7e
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_TRICKSTER, 0xffffffff, 0)
        uint64_t x11_35 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_35.d == 0)
            goto label_b0856c
        
        void* i_62 = *(gDomClient + 0x205e0)
        int64_t x11_36 = i_62 + x11_35 * 0x21d8
        void* i_29 = i_62
        
        while (zx.d(*(i_29 + 0x21d2)) == 0)
            i_29 += 0x21d8
            
            if (i_29 u>= x11_36)
                goto label_b0856c
        
        if (i_29 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_29 + 0x2c) == 0 && *(i_29 + 0xa0) == *(x19 + 0x58)
                    && *(i_29 + 0xa4) == *(x19 + 0x5c) && *(i_29 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_29 == 0)
                i_29 = i_62
            else
                i_29 += 0x21d8
            
            if (i_29 u>= x11_36)
                break
            
            while (zx.d(*(i_29 + 0x21d2)) == 0)
                i_29 += 0x21d8
                
                if (i_29 u>= x11_36)
                    goto label_b08574
        while (i_29 != 0xffffffff)
        
        goto label_b08574
    case 0x7f
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_DELIVER, 0xffffffff, 0)
        uint64_t x11_37 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_37.d == 0)
            goto label_b0856c
        
        void* i_63 = *(gDomClient + 0x205e0)
        int64_t x11_38 = i_63 + x11_37 * 0x21d8
        void* i_30 = i_63
        
        while (zx.d(*(i_30 + 0x21d2)) == 0)
            i_30 += 0x21d8
            
            if (i_30 u>= x11_38)
                goto label_b0856c
        
        if (i_30 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_30 + 0x2c) == 0 && *(i_30 + 0xa0) == *(x19 + 0x58)
                    && *(i_30 + 0xa4) == *(x19 + 0x5c) && *(i_30 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_30 == 0)
                i_30 = i_63
            else
                i_30 += 0x21d8
            
            if (i_30 u>= x11_38)
                break
            
            while (zx.d(*(i_30 + 0x21d2)) == 0)
                i_30 += 0x21d8
                
                if (i_30 u>= x11_38)
                    goto label_b08574
        while (i_30 != 0xffffffff)
        
        goto label_b08574
    case 0x80
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_PREPARE, 0xffffffff, 0)
        uint64_t x11_39 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_39.d == 0)
            goto label_b0856c
        
        void* i_64 = *(gDomClient + 0x205e0)
        int64_t x11_40 = i_64 + x11_39 * 0x21d8
        void* i_31 = i_64
        
        while (zx.d(*(i_31 + 0x21d2)) == 0)
            i_31 += 0x21d8
            
            if (i_31 u>= x11_40)
                goto label_b0856c
        
        if (i_31 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_31 + 0x2c) == 0 && *(i_31 + 0xa0) == *(x19 + 0x58)
                    && *(i_31 + 0xa4) == *(x19 + 0x5c) && *(i_31 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_31 == 0)
                i_31 = i_64
            else
                i_31 += 0x21d8
            
            if (i_31 u>= x11_40)
                break
            
            while (zx.d(*(i_31 + 0x21d2)) == 0)
                i_31 += 0x21d8
                
                if (i_31 u>= x11_40)
                    goto label_b08574
        while (i_31 != 0xffffffff)
        
        goto label_b08574
    case 0x81
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_HASTY, 0xffffffff, 0)
        uint64_t x11_41 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_41.d == 0)
            goto label_b0856c
        
        void* i_65 = *(gDomClient + 0x205e0)
        int64_t x11_42 = i_65 + x11_41 * 0x21d8
        void* i_32 = i_65
        
        while (zx.d(*(i_32 + 0x21d2)) == 0)
            i_32 += 0x21d8
            
            if (i_32 u>= x11_42)
                goto label_b0856c
        
        if (i_32 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_32 + 0x2c) == 0 && *(i_32 + 0xa0) == *(x19 + 0x58)
                    && *(i_32 + 0xa4) == *(x19 + 0x5c) && *(i_32 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_32 == 0)
                i_32 = i_65
            else
                i_32 += 0x21d8
            
            if (i_32 u>= x11_42)
                break
            
            while (zx.d(*(i_32 + 0x21d2)) == 0)
                i_32 += 0x21d8
                
                if (i_32 u>= x11_42)
                    goto label_b08574
        while (i_32 != 0xffffffff)
        
        goto label_b08574
    case 0x82
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_PATIENT, 0xffffffff, 0)
        uint64_t x11_43 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_43.d == 0)
            goto label_b0856c
        
        void* i_66 = *(gDomClient + 0x205e0)
        int64_t x11_44 = i_66 + x11_43 * 0x21d8
        void* i_33 = i_66
        
        while (zx.d(*(i_33 + 0x21d2)) == 0)
            i_33 += 0x21d8
            
            if (i_33 u>= x11_44)
                goto label_b0856c
        
        if (i_33 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_33 + 0x2c) == 0 && *(i_33 + 0xa0) == *(x19 + 0x58)
                    && *(i_33 + 0xa4) == *(x19 + 0x5c) && *(i_33 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_33 == 0)
                i_33 = i_66
            else
                i_33 += 0x21d8
            
            if (i_33 u>= x11_44)
                break
            
            while (zx.d(*(i_33 + 0x21d2)) == 0)
                i_33 += 0x21d8
                
                if (i_33 u>= x11_44)
                    goto label_b08574
        while (i_33 != 0xffffffff)
        
        goto label_b08574
    case 0x83
        UI2SetState(zx.q(*x20_1), UIS_POD_TIRELESS, 0xffffffff, 0)
        uint64_t x11_45 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_45.d == 0)
            goto label_b0856c
        
        void* i_67 = *(gDomClient + 0x205e0)
        int64_t x11_46 = i_67 + x11_45 * 0x21d8
        void* i_34 = i_67
        
        while (zx.d(*(i_34 + 0x21d2)) == 0)
            i_34 += 0x21d8
            
            if (i_34 u>= x11_46)
                goto label_b0856c
        
        if (i_34 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_34 + 0x2c) == 0 && *(i_34 + 0xa0) == *(x19 + 0x58)
                    && *(i_34 + 0xa4) == *(x19 + 0x5c) && *(i_34 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_34 == 0)
                i_34 = i_67
            else
                i_34 += 0x21d8
            
            if (i_34 u>= x11_46)
                break
            
            while (zx.d(*(i_34 + 0x21d2)) == 0)
                i_34 += 0x21d8
                
                if (i_34 u>= x11_46)
                    goto label_b08574
        while (i_34 != 0xffffffff)
        
        goto label_b08574
    case 0x84
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_FARMHANDS, 0xffffffff, 0)
        uint64_t x11_47 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_47.d == 0)
            goto label_b0856c
        
        void* i_68 = *(gDomClient + 0x205e0)
        int64_t x11_48 = i_68 + x11_47 * 0x21d8
        void* i_35 = i_68
        
        while (zx.d(*(i_35 + 0x21d2)) == 0)
            i_35 += 0x21d8
            
            if (i_35 u>= x11_48)
                goto label_b0856c
        
        if (i_35 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_35 + 0x2c) == 0 && *(i_35 + 0xa0) == *(x19 + 0x58)
                    && *(i_35 + 0xa4) == *(x19 + 0x5c) && *(i_35 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_35 == 0)
                i_35 = i_68
            else
                i_35 += 0x21d8
            
            if (i_35 u>= x11_48)
                break
            
            while (zx.d(*(i_35 + 0x21d2)) == 0)
                i_35 += 0x21d8
                
                if (i_35 u>= x11_48)
                    goto label_b08574
        while (i_35 != 0xffffffff)
        
        goto label_b08574
    case 0x85
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_JOUST, 0xffffffff, 0)
        uint64_t x11_49 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_49.d == 0)
            goto label_b0856c
        
        void* i_69 = *(gDomClient + 0x205e0)
        int64_t x11_50 = i_69 + x11_49 * 0x21d8
        void* i_36 = i_69
        
        while (zx.d(*(i_36 + 0x21d2)) == 0)
            i_36 += 0x21d8
            
            if (i_36 u>= x11_50)
                goto label_b0856c
        
        if (i_36 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_36 + 0x2c) == 0 && *(i_36 + 0xa0) == *(x19 + 0x58)
                    && *(i_36 + 0xa4) == *(x19 + 0x5c) && *(i_36 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_36 == 0)
                i_36 = i_69
            else
                i_36 += 0x21d8
            
            if (i_36 u>= x11_50)
                break
            
            while (zx.d(*(i_36 + 0x21d2)) == 0)
                i_36 += 0x21d8
                
                if (i_36 u>= x11_50)
                    goto label_b08574
        while (i_36 != 0xffffffff)
        
        goto label_b08574
    case 0x86
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_BIDING_TIME, 0xffffffff, 0)
        uint64_t x11_51 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_51.d == 0)
            goto label_b0856c
        
        void* i_70 = *(gDomClient + 0x205e0)
        int64_t x11_52 = i_70 + x11_51 * 0x21d8
        void* i_37 = i_70
        
        while (zx.d(*(i_37 + 0x21d2)) == 0)
            i_37 += 0x21d8
            
            if (i_37 u>= x11_52)
                goto label_b0856c
        
        if (i_37 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_37 + 0x2c) == 0 && *(i_37 + 0xa0) == *(x19 + 0x58)
                    && *(i_37 + 0xa4) == *(x19 + 0x5c) && *(i_37 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_37 == 0)
                i_37 = i_70
            else
                i_37 += 0x21d8
            
            if (i_37 u>= x11_52)
                break
            
            while (zx.d(*(i_37 + 0x21d2)) == 0)
                i_37 += 0x21d8
                
                if (i_37 u>= x11_52)
                    goto label_b08574
        while (i_37 != 0xffffffff)
        
        goto label_b08574
    case 0x87
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_RAPID_EXPANSION, 0xffffffff, 0)
        uint64_t x11_53 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_53.d == 0)
            goto label_b0856c
        
        void* i_71 = *(gDomClient + 0x205e0)
        int64_t x11_54 = i_71 + x11_53 * 0x21d8
        void* i_38 = i_71
        
        while (zx.d(*(i_38 + 0x21d2)) == 0)
            i_38 += 0x21d8
            
            if (i_38 u>= x11_54)
                goto label_b0856c
        
        if (i_38 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_38 + 0x2c) == 0 && *(i_38 + 0xa0) == *(x19 + 0x58)
                    && *(i_38 + 0xa4) == *(x19 + 0x5c) && *(i_38 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_38 == 0)
                i_38 = i_71
            else
                i_38 += 0x21d8
            
            if (i_38 u>= x11_54)
                break
            
            while (zx.d(*(i_38 + 0x21d2)) == 0)
                i_38 += 0x21d8
                
                if (i_38 u>= x11_54)
                    goto label_b08574
        while (i_38 != 0xffffffff)
        
        goto label_b08574
    case 0x88
        UI2SetState(zx.q(*x20_1), UIS_POD_ASIDE_FORESIGHT, 0xffffffff, 0)
        uint64_t x11_55 = zx.q(*(gDomClient + 0x205e8))
        x0_37 = zx.q(*x20_1)
        
        if (x11_55.d == 0)
            goto label_b0856c
        
        void* i_72 = *(gDomClient + 0x205e0)
        int64_t x11_56 = i_72 + x11_55 * 0x21d8
        void* i_39 = i_72
        
        while (zx.d(*(i_39 + 0x21d2)) == 0)
            i_39 += 0x21d8
            
            if (i_39 u>= x11_56)
                goto label_b0856c
        
        if (i_39 == 0xffffffff)
            goto label_b0856c
        
        x1_15 = 0
        
        do
            if (*(i_39 + 0x2c) == 0 && *(i_39 + 0xa0) == *(x19 + 0x58)
                    && *(i_39 + 0xa4) == *(x19 + 0x5c) && *(i_39 + 0xc8) == 0)
                x1_15 += 1
            
            if (i_39 == 0)
                i_39 = i_72
            else
                i_39 += 0x21d8
            
            if (i_39 u>= x11_56)
                break
            
            while (zx.d(*(i_39 + 0x21d2)) == 0)
                i_39 += 0x21d8
                
                if (i_39 u>= x11_56)
                    goto label_b08574
        while (i_39 != 0xffffffff)
        
        goto label_b08574
    case 0x89
        uint64_t x10_46 = zx.q(*(gDomClient + 0x205e8))
        void* i_73
        int64_t x10_47
        void* i_40
        
        if (x10_46.d != 0)
            i_73 = *(gDomClient + 0x205e0)
            x10_47 = i_73 + x10_46 * 0x21d8
            i_40 = i_73
            
            while (zx.d(*(i_40 + 0x21d2)) == 0)
                i_40 += 0x21d8
                
                if (i_40 u>= x10_47)
                    goto label_b0876c
        
        int32_t x1_47
        
        if (x10_46.d == 0 || i_40 == 0xffffffff)
        label_b0876c:
            x1_47 = 0
        else
            x1_47 = 0
            
            do
                if (*(i_40 + 0x2c) == 0 && *(i_40 + 0xa0) == *(x19 + 0x58)
                        && *(i_40 + 0xa4) == 0x472 && *(i_40 + 0xc8) == 0)
                    x1_47 += 1
                
                if (i_40 == 0)
                    i_40 = i_73
                else
                    i_40 += 0x21d8
                
                if (i_40 u>= x10_47)
                    break
                
                while (zx.d(*(i_40 + 0x21d2)) == 0)
                    i_40 += 0x21d8
                    
                    if (i_40 u>= x10_47)
                        goto label_b08774
            while (i_40 != 0xffffffff)
        
    label_b08774:
        SetPodCounter(zx.q(*x20_1), x1_47, false)
        goto label_b0877c

UI2UpdateRoot(zx.q(*x20_1), false, *gSecondsPerUpdate)
