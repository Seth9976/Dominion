// 函数: _Z13GetCardPrefixRK8DomYieldRK13DomActiveItem
// 地址: 0xb37a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)

if (x9.d u> 4)
    pthread_kill(pthread_self(), 6)
    return GetTurnPrefix(XNoReturn()) __tailcall

XString* entry_x8

switch (x9)
    case 0
        return XString::XString(entry_x8) __tailcall
    case 1
        return GetTokenName(gDomClient + 0x20728, zx.q(*(arg2 + 4))) __tailcall
    case 2
        int32_t x9_3 = *(arg2 + 4)
        uint64_t x10_3 = zx.q(*(gDomClient + 0x205e8))
        
        if (x10_3.d != 0)
            void* i_1 = *(gDomClient + 0x205e0)
            int64_t x10_4 = i_1 + x10_3 * 0x21d8
            void* i = i_1
            
            do
                if (zx.d(*(i + 0x21d2)) != 0)
                    while (i != 0xffffffff)
                        if (*(i + 0x2c) == 0 && *(i + 0x98) == x9_3 && zx.d(*(i + 0x168)) == 0)
                            if (i != 0)
                                XString var_38
                                XString var_28
                                void* x2_7
                                XString* x4_7
                                
                                if (*(i + 0x100) s>= 2)
                                    XStringFromInt(*(i + 0xfc))
                                    XStringFromInt(*(i + 0x100))
                                    XString var_40
                                    DoTranslateWithReplacements("dom_prompt_play_again_suffix", 
                                        "[N]", &var_38, "[M]", &var_40)
                                    XString::~XString()
                                    XString::~XString()
                                    GetCardName(gDomClient + 0x20728, zx.q(*(arg2 + 4)))
                                    x2_7 = &var_38
                                    x4_7 = &var_28
                                label_b37cfc:
                                    DoTranslateWithReplacements("dom_prompt_card_suffix", "[card]", 
                                        x2_7, "[suffix]", x4_7)
                                    XString::~XString()
                                    return XString::~XString()
                                
                                if (*(i + 0x108) != 0)
                                    GetCardName(gDomClient + 0x20728, zx.q(x9_3))
                                    
                                    if ((CardIs(gDomClient + 0x20728, zx.q(*(i + 0x108)), 0x8000000)
                                            & 1) == 0)
                                        XString::XString(entry_x8)
                                        return XString::~XString()
                                    
                                    GetCardName(gDomClient + 0x20728, zx.q(*(i + 0x108)))
                                    x2_7 = &var_28
                                    x4_7 = &var_38
                                    goto label_b37cfc
                            
                            break
                        
                        if (i == 0)
                            i = i_1
                        else
                            i += 0x21d8
                        
                        if (i u>= x10_4)
                            break
                        
                        while (zx.d(*(i + 0x21d2)) == 0)
                            i += 0x21d8
                            
                            if (i u>= x10_4)
                                goto label_b37bdc
                    
                    break
                
                i += 0x21d8
            while (i u< x10_4)
        
    label_b37bdc:
        return GetCardName(gDomClient + 0x20728, zx.q(x9_3)) __tailcall
    case 3
        return GetAbilityName(gDomClient + 0x20728, zx.q(*(arg2 + 4))) __tailcall
    case 4
        return GetCardName(0, zx.q(*(arg2 + 4))) __tailcall
