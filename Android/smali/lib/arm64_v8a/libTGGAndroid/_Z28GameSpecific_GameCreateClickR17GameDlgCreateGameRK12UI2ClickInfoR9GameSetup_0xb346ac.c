// 函数: _Z28GameSpecific_GameCreateClickR17GameDlgCreateGameRK12UI2ClickInfoR9GameSetup
// 地址: 0xb346ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_19c0[0x990]
XString::XString(&var_19c0)
int32_t x0_2 = operator==(&var_19c0, *(arg2 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    UI2ClearFocus(true)
    *gCardGallery = data_71bdf0
    GameDlgManagerShow(0x7e6, 7)

XString::XString(&var_19c0)
int32_t x0_5 = operator==(&var_19c0, *(arg2 + 8))
int64_t result = XString::~XString()

if ((x0_5 & 1) == 0)
    XString::XString(&var_19c0)
    int32_t x0_8 = operator==(&var_19c0, *(arg2 + 8))
    result = XString::~XString()
    
    if ((x0_8 & 1) == 0)
        XString::XString(&var_19c0)
        int32_t x0_11 = operator==(&var_19c0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_11 & 1) != 0)
            CardsetClear(*(gDomClient + 0x82e30))
            int32_t x8_1 = *(arg3 + 0x18)
            *(arg3 + 0xc) = 0
            *(arg3 + 0x10) = 0
            *(arg3 + 0x18) = x8_1 & 0xffffffcf
            GetKingdomConfig(arg3)
            DomClearKingdom(&var_19c0)
            return SaveSetupData(arg3, &var_19c0)
        
        XString::XString(&var_19c0)
        int32_t x0_17 = operator==(&var_19c0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_17 & 1) != 0)
            GetKingdomConfig(arg3)
            int32_t var_dc4
            int32_t var_dc4_1 = (var_dc4 + 1) s% 3
            return SaveSetupData(arg3, &var_19c0)
        
        XString::XString(&var_19c0)
        int32_t x0_21 = operator==(&var_19c0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_21 & 1) != 0)
            GetKingdomConfig(arg3)
            int32_t var_dc0
            int32_t var_dc0_1 = (var_dc0 + 1) s% 3
            return SaveSetupData(arg3, &var_19c0)
        
        XString::XString(&var_19c0)
        int32_t x0_26 = operator==(&var_19c0, *(arg2 + 8))
        XString::~XString()
        
        if ((x0_26 & 1) != 0)
            GetKingdomConfig(arg3)
            return GameCreateRemoveCard(arg3, &var_19c0, &var_19c0[sx.q(*(arg2 + 0x10)) << 4])
        
        XString::XString(&var_19c0)
        int32_t x0_30 = operator==(&var_19c0, *(arg2 + 8))
        result = XString::~XString()
        
        if ((x0_30 & 1) != 0)
            GetKingdomConfig(arg3)
            return GameCreateRemoveCard(arg3, &var_19c0, 
                &var_19c0 + sx.q(*(arg2 + 0x10)) * 0x48 + 0xa0)
    else
        *(arg1 + 4) = 0
else
    *(arg1 + 4) = 1

return result
