// 函数: _Z29GameSpecific_GameCreateCommitR17GameDlgCreateGameRK13UI2CommitInfoR9GameSetup
// 地址: 0xb2b6e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetKingdomConfig(arg3)
DomKingdomEntry var_4be0
DomSetupConfig var_19e0
int32_t x0_2 = ExistingKingdomCards(&var_19e0, &var_4be0)
int32_t x0_7 = FindCards(XString::operator char const*(), arg1 + 0x38, 3, &var_4be0, x0_2, 
    zx.q(GetCurrentLanguage()))
int64_t result = XString::operator=(arg1 + 0x30)

if (x0_7 s<= 2)
    int64_t x8_1 = sx.q(x0_7)
    int64_t i_4
    
    if (2 != x0_7)
        void* x11_1 = arg1 + (x8_1 << 4)
        i_4 = (zx.q(2 - x0_7) + 1) & 0x1fffffffe
        x8_1 += i_4
        void* x11_2 = x11_1 + 0x48
        int64_t i_3 = i_4
        int64_t i
        
        do
            *(x11_2 - 0x10) = 0
            *x11_2 = 0
            x11_2 += 0x20
            i = i_3
            i_3 -= 2
        while (i != 2)
    
    if (2 == x0_7 || zx.q(2 - x0_7) + 1 != i_4)
        void* x9_4 = arg1 + (x8_1 << 4) + 0x38
        int32_t i_2 = x8_1.d - 3
        int32_t i_1
        
        do
            i_1 = i_2
            i_2 += 1
            *x9_4 = 0
            x9_4 += 0x10
        while (i_1 u< 0xffffffff)

if (zx.d(*(arg2 + 0x1c)) != 0)
    if (*(arg1 + 0x38) == 0)
        void var_48
        XString::XString(&var_48)
        char var_5be0[0x670]
        SafeStrcpy(&var_5be0, XString::operator char const*(), 0x1000)
        DomSetupConfig var_7570
        ParseNewDombotKingdom(&var_5be0, &var_7570)
        MergeSetup(arg3, &var_19e0, &var_7570)
        UI2SetFocus(zx.q(*arg2), nullptr, false)
        return XString::~XString()
    
    result = GameCreateAddCard(arg3, &var_19e0, arg1 + 0x38)
    
    if ((result.d & 1) != 0)
        *(arg1 + 0x38) = 0
        return UI2SetFocus(zx.q(*arg2), nullptr, false)

return result
