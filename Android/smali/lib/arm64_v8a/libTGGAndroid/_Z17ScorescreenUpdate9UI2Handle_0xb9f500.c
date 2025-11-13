// 函数: _Z17ScorescreenUpdate9UI2Handle
// 地址: 0xb9f500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t x19 = arg1.d
UI2SetHandler(arg1, ScorescreenClick)
void* result = GetClient()

if (*(result + 0x5068) != 0)
    UI2SetState(zx.q(x19), GetBackground(ActiveGame(), gDomClient + 0x20728), 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_1832610, 0xffffffff, 0)
    GameSave* x0_4 = ActiveGame()
    UI2SetState(zx.q(x19), sx.q(*(gDomClient + 0x21468)) * 0x18 + &data_1833898, 0xffffffff, 0)
    uint64_t x21_1 = zx.q(*(x0_4 + 0x11b4))
    UI2SetInt(zx.q(x19), &data_182c700, x21_1.d, 0xffffffff)
    void var_80
    XString var_78
    
    if (x21_1.d s>= 1)
        int64_t x22_1 = 0
        v8.d = fconvert.s(0.5f)
        v9.d = fconvert.s(-0.5f)
        
        do
            int32_t x8_4 = *(gDomClient + 0x38)
            uint64_t x1_4
            
            if (x8_4 == 0xffffffff)
                x1_4 = 0
            else
                x1_4 = zx.q(x8_4)
            
            int32_t x0_12 = PlayerSeatToWho(zx.q(x22_1.d), x1_4)
            PlayerConfig_V1* x0_14 = GameGetPlayer(x0_4 + 8, zx.q(x0_12))
            int32_t var_90
            PlayerGetNameAvatar(x0_4 + 8, x0_14, &var_90)
            UI2StateDecl* x0_17 = GameAvatarGet(zx.q(var_90))
            int32_t x0_19
            
            if (*((x22_1 << 6) + 0x1834be0) == "tbl_players" && *((x22_1 << 6) + 0x1834bd8) == x19
                    && x22_1 == zx.q(*((x22_1 << 6) + 0x1834be8))
                    && *((x22_1 << 6) + 0x1834bf0) == 0)
                x0_19 = UI2Exists(zx.q(*((x22_1 << 6) + 0x1834c10)))
            
            int32_t x25_2
            
            if (*((x22_1 << 6) + 0x1834be0) != "tbl_players" || *((x22_1 << 6) + 0x1834bd8) != x19
                    || x22_1 != zx.q(*((x22_1 << 6) + 0x1834be8))
                    || *((x22_1 << 6) + 0x1834bf0) != 0 || (x0_19 & 1) == 0)
                int32_t x0_21 = UI2GetHandle(zx.q(x19), "tbl_players", x22_1.d)
                *((x22_1 << 6) + 0x1834c10) = x0_21
                
                if (x0_21 != 0)
                    x25_2 = x0_21
                    *((x22_1 << 6) + 0x1834be0) = "tbl_players"
                    *((x22_1 << 6) + 0x1834bd8) = x19
                    *((x22_1 << 6) + 0x1834be8) = x22_1.d
                    *((x22_1 << 6) + 0x1834bf0) = 0
                label_b9f794:
                    UI2SetState(zx.q(x25_2), x0_17, 0xffffffff, 0)
                    DeclarePlayerColor(zx.q(x25_2), zx.q(x0_12))
                    void* x0_24 = GetActiveProfile()
                    
                    if ((zx.d(*(x0_4 + 0x20)) & 8) == 0 || *(x0_14 + 0x14) != 1
                            || *(x0_14 + 0x18) != *(x0_24 + 0x42ac)
                            || zx.d(*(x0_24 + 0x7ca4)) == 0)
                        UI2SetState(zx.q(x25_2), &data_1832898, 0xffffffff, 0)
                    else
                        float temp0_1 =
                            vrndm_f32(DominionGamesLevel(x0_24 + 0x7ca8) * float.s(0x42c80000))
                        float v1_1
                        
                        if (temp0_1 < 0f)
                            v1_1 = v9.d
                        else
                            v1_1 = v8.d
                        
                        XStringFromInt(vcvts_s32_f32(temp0_1 + v1_1))
                        UI2SetText(zx.q(x25_2), &data_1832880, &var_80, 0xffffffff)
                        XString::~XString()
            else
                x25_2 = *((x22_1 << 6) + 0x1834c10)
                
                if (x25_2 != 0)
                    goto label_b9f794
            UI2SetText(zx.q(x19), &data_182c718, &var_78, x22_1.d)
            int64_t (* x21_3)()
            
            if (x0_12 == 0xffffffff)
                x21_3 = gDomClient + 0x48
            else
                x21_3 = gDomClient + 0x48 + muls.dp.d(x0_12, 0x4d48)
            
            int32_t x25_3 = *(x21_3 + 0x24)
            int32_t fp_2 = *(x21_3 + 0x30)
            int32_t x0_31 = PlayerResigned(x0_4, zx.q(x0_12))
            int64_t* x1_10 = &data_1832838
            int32_t x21_4
            
            if ((x0_31 & 1) == 0)
                ActiveGame()
                x21_4 = *(x21_3 + 0x20)
                
                if ((PlayerResigned(x0_4, zx.q(x0_12)) & 1) != 0)
                    x21_4 = -1
                else if (*(x0_4 + 0x11b4) s>= 1)
                    int64_t i = 0
                    int64_t (* x24_2)() = gDomClient + 0x68
                    
                    do
                        if ((PlayerResigned(x0_4, zx.q(i.d)) & 1) != 0)
                            x21_4 -= *x24_2 s< x21_4 ? 1 : 0
                        
                        i += 1
                        x24_2 += 0x4d48
                    while (i s< sx.q(*(x0_4 + 0x11b4)))
                
                UI2SetState(zx.q(x19), muls.dp.d(x21_4, 0x18) + 0x1833570, x22_1.d, 0)
                x1_10 = &data_1832988
            
            if ((x0_31 & 1) != 0 || x21_4 == 1)
                UI2SetState(zx.q(x19), x1_10, x22_1.d, 0)
            
            if ((GameCanAddFriend(x0_14) & 1) != 0 && *(GetClient() + 0x5028) s<= 0x7f)
                UI2SetState(zx.q(x19), &data_1832568, x22_1.d, 0)
            
            if (x22_1 == 0)
                UI2SetState(zx.q(x19), &data_1832580, 0, 0)
            
            XStringFromInt(x25_3)
            UI2SetText(zx.q(x19), &data_1832808, &var_80, x22_1.d)
            XString::~XString()
            XStringFromInt(fp_2)
            UI2SetText(zx.q(x19), &data_1832820, &var_80, x22_1.d)
            XString::~XString()
            XString::~XString()
            x22_1 += 1
        while (x22_1 != x21_1)
    
    uint64_t x8_24 = zx.q(*(gScoreDlg + 0x23304))
    
    if (x8_24.d u> 4)
        pthread_kill(pthread_self(), 6)
        return ScorescreenCardsUpdate(XNoReturn()) __tailcall
    
    switch (x8_24)
        case 1
            UI2SetState(zx.q(x19), &data_1832850, 0xffffffff, 0)
        case 2
            UI2SetState(zx.q(x19), &data_1832868, 0xffffffff, 0)
        case 3
            UI2SetState(zx.q(x19), &data_18328b0, 0xffffffff, 0)
        case 4
            UI2SetState(zx.q(x19), &data_18328c8, 0xffffffff, 0)
    
    result = GetClient()
    
    if (*(result + 0x5068) == 2)
        if (CountMyNetworkGames() s>= 0x32)
            UI2SetState(zx.q(x19), &data_18329a0, 0xffffffff, 0)
        
        int32_t var_88
        int32_t var_84
        result = GetRematchStyle(x0_4, &var_84, &var_88)
        
        if (result.d u> 3)
            pthread_kill(pthread_self(), 6)
            return ScorescreenCardsUpdate(XNoReturn()) __tailcall
        
        switch (result.d)
            case 1
                UI2SetState(zx.q(x19), &data_1832910, 0xffffffff, 0)
                DoTranslate("dom_ui_score_replay_set")
                XFormatString(" (%d/%d)")
                XString::operator+(&var_80)
                XString::~XString()
                XString::~XString()
                UI2SetState(zx.q(x19), &data_1832958, 0xffffffff, 0)
                UI2SetText(zx.q(x19), &data_1832970, &var_78, 0xffffffff)
                return XString::~XString()
            case 2
                UI2SetState(zx.q(x19), &data_18328f8, 0xffffffff, 0)
                DoTranslate("dom_ui_score_replay_rematch")
                XFormatString(" (%d/%d)")
                XString::operator+(&var_80)
                XString::~XString()
                XString::~XString()
                UI2SetState(zx.q(x19), &data_1832928, 0xffffffff, 0)
                UI2SetText(zx.q(x19), &data_1832940, &var_78, 0xffffffff)
                return XString::~XString()
            case 3
                UI2SetState(zx.q(x19), &data_18328f8, 0xffffffff, 0)
                return UI2SetState(zx.q(x19), &data_1832910, 0xffffffff, 0)

return result
