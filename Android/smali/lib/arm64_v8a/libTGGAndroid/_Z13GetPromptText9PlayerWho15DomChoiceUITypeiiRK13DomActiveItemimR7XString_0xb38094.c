// 函数: _Z13GetPromptText9PlayerWho15DomChoiceUITypeiiRK13DomActiveItemimR7XString
// 地址: 0xb38094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_182aae0) & 1) == 0 && __cxa_guard_acquire(&data_182aae0) != 0)
    XString::XString(&data_182aad8)
    __cxa_atexit(XString::~XString, &data_182aad8, &data_1122730)
    __cxa_guard_release(&data_182aae0)

void* x0 = ActiveGame()
void* x0_1 = GetClient()
int32_t x8_1 = *(GetClient() + 0x5068)
int64_t var_58
int32_t x0_5

if (x8_1 == 1)
    x0_5 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_58)

int32_t x20_1

if (x8_1 == 1 && *(gDomClient + 0x205cc) s< x0_5 && var_58 != 0)
    x20_1 = 0
    XString::operator=(arg8)
else
    char const* const x0_8
    
    if (*(x0_1 + 0x10) != *(x0_1 + 0xc))
        x0_8 = "dom_prompt_wait_for_server"
    label_b38224:
        DoTranslate(x0_8)
        XString::operator=(&data_182aad8)
    label_b3823c:
        XString::~XString()
        x20_1 = 1
        XString::operator=(arg8)
    else
        int32_t x0_6
        int32_t x8_7
        
        if (*(gDomClient + 0x24) == 3)
            x0_6 = LocalWho()
            int32_t x8_6 = *(gDomClient + 0x38)
            
            x8_7 = x8_6 == 0xffffffff ? 0 : x8_6
        
        if (*(gDomClient + 0x24) == 3 && x0_6 != x8_7)
            x0_8 = "dom_prompt_possession_complete"
            goto label_b38224
        
        if (zx.d(*(gDomClient + 0x22134)) != 0)
        label_b381d4:
            DoTranslate("dom_prompt_game_over")
            XString::operator=(&data_182aad8)
            XString::~XString()
            
            if (*(gDomClient + 0x205a8) == 2)
                x20_1 = 1
                XString::operator=(arg8)
            else
                x20_1 = 0
        else
            void* x0_7 = ActiveGame()
            uint64_t i_1 = zx.q(*(x0_7 + 0x11b4))
            
            if (i_1.d s>= 1)
                void* x9_2 = x0_7 + 0x74
                uint64_t i
                
                do
                    int32_t x12_2 = *x9_2 - 0x3e9
                    
                    if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                        goto label_b381d4
                    
                    i = i_1
                    i_1 -= 1
                    x9_2 += 0x22c
                while (i != 1)
            
            uint64_t x1_2 = zx.q(*(gDomClient + 0x207a0))
            PlayerAvatarType var_68
            
            if (x1_2.d != arg1)
                PlayerGetNameAvatar(x0 + 8, GameGetPlayer(x0 + 8, x1_2), &var_68)
                DoTranslateWithReplacement("dom_prompt_wait", "[player]", &var_58)
                XString::operator=(&data_182aad8)
            label_b386b4:
                XString::~XString()
                goto label_b3823c
            
            int32_t x8_10 = *(gDomClient + 0x38)
            int32_t x8_11
            
            x8_11 = x8_10 == 0xffffffff ? 0 : x8_10
            
            char var_60
            
            if (x8_11 != *(gDomClient + 0x2079c))
                GetTurnPrefix(gDomClient + 0x20748)
                XString::XString()
                int32_t x20_3 = *(gDomClient + 0x2079c)
                int32_t x0_17 = LocalWho()
                int32_t x8_14 = *(gDomClient + 0x24)
                
                if (x20_3 == x0_17)
                    if (x8_14 == 3)
                        pthread_kill(pthread_self(), 6)
                        XNoReturn()
                        return ZoomNumExtrasPages() __tailcall
                    
                    DoTranslate("dom_prompt_possession_continue_self")
                    XString::operator=(&var_60)
                    XString::~XString()
                else
                    void var_70
                    
                    if (x8_14 == 2)
                        int32_t x20_6 = *(gDomClient + 0x2079c)
                        GameSetup* x21_2 = ActiveGame() + 8
                        PlayerGetNameAvatar(x21_2, GameGetPlayer(x21_2, zx.q(x20_6)), &var_68)
                        DoTranslateWithReplacement("dom_prompt_possession_continue", "[player]", 
                            &var_70)
                        XString::operator=(&var_60)
                        XString::~XString()
                        XString::~XString()
                    else
                        int64_t* x0_24
                        
                        if (x8_14 != 1)
                            XString::operator=(&var_60)
                            x0_24 = &var_58
                        else
                            int32_t x20_4 = *(gDomClient + 0x2079c)
                            GameSetup* x21_1 = ActiveGame() + 8
                            PlayerGetNameAvatar(x21_1, GameGetPlayer(x21_1, zx.q(x20_4)), &var_68)
                            DoTranslateWithReplacement("dom_prompt_possession_start", "[player]", 
                                &var_70)
                            XString::operator=(&var_60)
                            XString::~XString()
                            XString::~XString()
                            x0_24 = &var_58
                        
                        XString::operator=(x0_24)
                
                if ((XString::IsEmpty() & 1) == 0)
                    StringReplace(XString::operator char const*(), "[prompt]", 
                        XString::operator char const*())
                else
                    XString::operator+(&var_58)
                
                XString::operator=(&data_182aad8)
                XString::~XString()
                goto label_b386b4
            
            int32_t x8_12 = *(gDomClient + 0x2074c)
            
            if (x8_12 != 0)
                if (x8_12 == 6)
                    if (*(gDomClient + 0x20758) != 0x1d)
                        x0_8 = "dom_prompt_ability"
                        goto label_b38224
                    
                    DomDefName(DomDefGet(gDomClient + 0x20728, zx.q(*(gDomClient + 0x20774))), 0, 
                        nullptr, false)
                    DoTranslateWithReplacement("dom_prompt_reaction_reveal", "[card]", &var_60)
                    XString::operator=(&data_182aad8)
                    XString::~XString()
                    goto label_b3823c
                
                GetCardPrefix(GetTurnPrefix(gDomClient + 0x20748), gDomClient + 0x207a4)
                GetChoicePrompt(zx.q(*(gDomClient + 0x2079c)), zx.q(*(gDomClient + 0x2074c)), 
                    zx.q(arg2), arg3, arg4, arg6, arg7)
                XString::operator=(&data_182aad8)
                
                if ((XString::IsEmpty() & 1) == 0)
                    DoTranslateWithReplacements("dom_prompt_card_prefix", "[prefix]", &var_60, 
                        "[prompt]", &data_182aad8)
                    XString::operator=(&data_182aad8)
                    XString::~XString()
                
                if ((XString::IsEmpty() & 1) == 0)
                    StringReplace(XString::operator char const*(), "[prompt]", 
                        XString::operator char const*())
                    XString::operator=(&data_182aad8)
                    XString::~XString()
                
                XString::~XString()
                goto label_b386b4
            
            XString::operator=(&data_182aad8)
            x20_1 = 1
            XString::operator=(arg8)

return zx.q(x20_1)
