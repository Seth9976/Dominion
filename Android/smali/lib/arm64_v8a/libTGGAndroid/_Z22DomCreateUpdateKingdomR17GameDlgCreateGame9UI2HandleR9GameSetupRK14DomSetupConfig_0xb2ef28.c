// 函数: _Z22DomCreateUpdateKingdomR17GameDlgCreateGame9UI2HandleR9GameSetupRK14DomSetupConfig
// 地址: 0xb2ef28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t var_1a20[0xc]
int32_t x0_1 = CollectModifiers(arg4, &var_1a20)
UI2SetInt(zx.q(x20), &data_182e4a0, x0_1, 0xffffffff)

if (x0_1 s>= 1)
    int64_t i = 0
    void* x27_1 = &data_18100f8
    
    do
        int32_t x0_5
        
        if (*(x27_1 - 0x30) == "tbl_modifiers" && *(x27_1 - 0x38) == x20
                && i == zx.q(*(x27_1 - 0x28)) && *(x27_1 - 0x20) == 0)
            x0_5 = UI2Exists(zx.q(*x27_1))
        
        uint64_t x0_3
        
        if (*(x27_1 - 0x30) == "tbl_modifiers" && *(x27_1 - 0x38) == x20
                && i == zx.q(*(x27_1 - 0x28)) && *(x27_1 - 0x20) == 0 && (x0_5 & 1) != 0)
            x0_3 = zx.q(*x27_1)
            
            if (x0_3.d != 0)
                UI2SetState(x0_3, &(&data_1834460)[zx.q(var_1a20[i]) * 4], 0xffffffff, 0)
        else
            x0_3 = UI2GetHandle(zx.q(x20), "tbl_modifiers", i.d)
            *x27_1 = x0_3.d
            
            if (x0_3.d != 0)
                *(x27_1 - 0x30) = "tbl_modifiers"
                *(x27_1 - 0x38) = x20
                *(x27_1 - 0x28) = i.d
                *(x27_1 - 0x20) = 0
                UI2SetState(x0_3, &(&data_1834460)[zx.q(var_1a20[i]) * 4], 0xffffffff, 0)
        i += 1
        x27_1 += 0x40
    while (zx.q(x0_1) != i)

DomSetupConfigFromString(XString::operator char const*(), *(arg3 + 0x28))
int64_t i_1 = 0
int32_t x24_1 = 0
int32_t var_1ac0[0x28]
int32_t var_19f0

do
    void* x11_1 = &var_19f0 + i_1
    int32_t x10_1 = *(x11_1 + 0x9c8)
    
    if (x10_1 == 0)
        break
    
    if (*(x11_1 + 0x9d0) != *(x11_1 + 0x9d4))
        var_1ac0[sx.q(x24_1)] = x10_1
        x24_1 += 1
    
    i_1 += 0x10
while (i_1 != 0x200)

UI2SetInt(zx.q(x20), &data_182e4b8, x24_1, 0xffffffff)

if (x24_1 s>= 1)
    int64_t i_2 = 0
    void* x27_2 = &data_18100f8
    
    do
        int32_t x0_11
        
        if (*(x27_2 - 0x30) == "tbl_expansions" && *(x27_2 - 0x38) == x20
                && i_2 == zx.q(*(x27_2 - 0x28)) && *(x27_2 - 0x20) == 0)
            x0_11 = UI2Exists(zx.q(*x27_2))
        
        int32_t x25_1
        
        if (*(x27_2 - 0x30) != "tbl_expansions" || *(x27_2 - 0x38) != x20
                || i_2 != zx.q(*(x27_2 - 0x28)) || *(x27_2 - 0x20) != 0 || (x0_11 & 1) == 0)
            int32_t x0_13 = UI2GetHandle(zx.q(x20), "tbl_expansions", i_2.d)
            x25_1 = x0_13
            *x27_2 = x0_13
            
            if (x0_13 != 0)
                *(x27_2 - 0x30) = "tbl_expansions"
                *(x27_2 - 0x38) = x20
                *(x27_2 - 0x28) = i_2.d
                *(x27_2 - 0x20) = 0
        else
            x25_1 = *x27_2
        
        void* x0_16 = DomExpDefGetByIndex(DomGetIndxByExp(zx.q(var_1ac0[i_2])))
        
        if (x25_1 != 0)
            UI2SetState(zx.q(x25_1), *(x0_16 + 0x10), 0xffffffff, 0)
        
        i_2 += 1
        x27_2 += 0x40
    while (zx.q(x24_1) != i_2)

int32_t x8_11 = *(arg3 + 0xc)
bool x23_3

if (x8_11 == 0)
    x23_3 = false
else if (x8_11 == 1)
    void* x0_28 = GetActiveProfile()
    uint64_t x8_13 = zx.q(*(arg3 + 0x10))
    
    if ((x8_13.d & 0x80000000) != 0 || x8_13.d s>= *(x0_28 + 0x7558))
        x23_3 = false
    else
        SafeStrcpy(&data_18333c0, XString::operator char const*(), 0x40)
        UI2SetState(zx.q(x20), &data_182e650, 0xffffffff, 0)
        UI2SetState(zx.q(x20), &data_182e668, 0xffffffff, 0)
        x23_3 = true
else
    if (x8_11 != 2)
        pthread_kill(pthread_self(), 6)
        return DomCreateUpdateRulesCustomClick(XNoReturn()) __tailcall
    
    void* x0_19 = DomSetGet(*(arg3 + 0x10))
    SafeStrcpy(&data_18333c0, *(x0_19 + 8), 0x40)
    UI2SetState(zx.q(x20), &data_182e650, 0xffffffff, 0)
    int32_t x0_22 = SyncedDataKeyFromRecommendedSet(*(x0_19 + 4))
    bool var_1ac4
    
    if ((AILevelFromSyncedAchievementLevel(SyncedDataGet(GetActiveProfile(), zx.q(x0_22)), 
            &var_1ac4, &var_19f0) & 1) == 0)
        UI2SetState(zx.q(x20), &data_182e6e0, 0xffffffff, 0)
        x23_3 = true
    else
        int64_t* x1_7
        
        if (zx.d(var_1ac4) == 0)
            x1_7 = &data_182e728
        else
            x1_7 = &data_182e710
        
        UI2SetState(zx.q(x20), x1_7, 0xffffffff, 0)
        DecalreAILevel(zx.q(x20), zx.q(var_19f0))
        x23_3 = true

XString::XString(&var_19f0)
UI2SetText(zx.q(x20), &data_182e680, &var_19f0, 0xffffffff)
XString::~XString()
return DomCreateUpdateKingdomCards(arg1, zx.q(x20), arg4, zx.q(*(arg3 + 0x28)), x23_3)
