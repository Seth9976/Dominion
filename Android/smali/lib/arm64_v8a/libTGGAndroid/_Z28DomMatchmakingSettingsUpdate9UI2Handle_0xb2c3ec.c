// 函数: _Z28DomMatchmakingSettingsUpdate9UI2Handle
// 地址: 0xb2c3ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomMatchmakingSettingsClick)
UI2SetState(zx.q(x19), &data_182e5d8, 0xffffffff, 0)
void* x0_1 = GetActiveProfile()
int32_t x0_3 = IsRankedLocked(x0_1 + 0x7560)
int32_t* var_1c0
void* var_100
int32_t x8_1

if (*(x0_1 + 0x7568) == 0)
    int32_t x0_5 = DomGetExpansions(&var_1c0)
    int32_t x21_1
    
    if (x0_5 s< 1)
        x21_1 = 0
    else
        int64_t i = 0
        x21_1 = 0
        
        do
            if ((ProfileHasEntitlementForExpansion(zx.q(*(var_1c0 + i)), nullptr) & 1) != 0)
                *(&var_100 + (sx.q(x21_1) << 2)) = *(var_1c0 + i)
                x21_1 += 1
            
            i += 0x28
        while (mulu.dp.d(x0_5, 0x28) != i)
    
    x8_1 = 2
    *(x0_1 + 0x7568) = DomExpansionsBitsetFromExpansions(&var_100, x21_1)
    *(x0_1 + 0x756c) = 2
else
    x8_1 = *(x0_1 + 0x756c)

int32_t var_140
int32_t* i_1 = &var_140
int32_t var_120 = x8_1
int64_t x21_2 = 0
int64_t* fp = &var_1c0
int64_t* var_118 = &data_182e3c8
int64_t* var_110 = &data_182e350
void var_208
void* x24 = &var_208
int32_t var_108 = 0
int32_t var_128 = x0_3 & 1
int64_t* var_138 = &data_182e3b0
int64_t* var_130 = &data_182e350
var_140 = *(x0_1 + 0x7560)

do
    int64_t x20_1 = sx.q(*i_1)
    UI2StateDecl* x27_1 = *(i_1 + 8)
    UI2StateDecl* x26_1 = *(i_1 + 0x10)
    int32_t x23_2 = i_1[6]
    int32_t x0_12
    int32_t x25_1
    
    if (fp[1] == "tbl_rules" && *fp == x19 && x21_2 == zx.q(fp[2].d) && fp[3] == 0)
        x25_1 = fp[7].d
        x0_12 = UI2Exists(zx.q(x25_1))
    
    if (fp[1] != "tbl_rules" || *fp != x19 || x21_2 != zx.q(fp[2].d) || fp[3] != 0
            || (x0_12 & 1) == 0)
        int32_t x0_14 = UI2GetHandle(zx.q(x19), "tbl_rules", x21_2.d)
        x25_1 = x0_14
        fp[7].d = x0_14
        
        if (x0_14 != 0)
            fp[1] = "tbl_rules"
            *fp = x19
            fp[2].d = x21_2.d
            fp[3] = 0
    
    UI2SetState(zx.q(x25_1), x27_1, 0xffffffff, 0)
    UI2SetState(zx.q(x25_1), x26_1, 0xffffffff, 0)
    uint64_t x0_10
    UI2StateDecl* x1_2
    
    if (x23_2 == 0)
        char* x26_5 = (&data_11ad3a0)[x20_1]
        int32_t x0_29
        
        if (*(x24 - 0x30) == x26_5 && *(x24 - 0x38) == x25_1 && *(x24 - 0x28) == 0xffffffff)
            x0_29 = UI2Exists(zx.q(*x24))
        
        if (*(x24 - 0x30) != x26_5 || *(x24 - 0x38) != x25_1 || *(x24 - 0x28) != 0xffffffff
                || (x0_29 & 1) == 0)
            x0_10 = UI2GetHandle(zx.q(x25_1), x26_5)
            *x24 = x0_10.d
            
            if (x0_10.d != 0)
                *(x24 - 0x30) = x26_5
                *(x24 - 0x38) = x25_1
                *(x24 - 0x28) = 0xffffffff
        else
            x0_10 = zx.q(*x24)
        
        x1_2 = &data_182e3e0
    else
        char* x26_2 = data_11ad3a0
        int32_t x0_18
        
        if (*(x24 - 0x30) == x26_2 && *(x24 - 0x38) == x25_1 && *(x24 - 0x28) == 0xffffffff)
            x0_18 = UI2Exists(zx.q(*x24))
        
        uint64_t x0_19
        
        if (*(x24 - 0x30) != x26_2 || *(x24 - 0x38) != x25_1 || *(x24 - 0x28) != 0xffffffff
                || (x0_18 & 1) == 0)
            x0_19 = UI2GetHandle(zx.q(x25_1), x26_2)
            *x24 = x0_19.d
            
            if (x0_19.d != 0)
                *(x24 - 0x30) = x26_2
                *(x24 - 0x38) = x25_1
                *(x24 - 0x28) = 0xffffffff
        else
            x0_19 = zx.q(*x24)
        
        UI2SetState(x0_19, &data_182e3e0, 0xffffffff, 0)
        char* x26_3 = data_11ad3a8
        int32_t x0_22
        
        if (*(x24 - 0x30) == x26_3 && *(x24 - 0x38) == x25_1 && *(x24 - 0x28) == 0xffffffff)
            x0_22 = UI2Exists(zx.q(*x24))
        
        uint64_t x0_23
        
        if (*(x24 - 0x30) != x26_3 || *(x24 - 0x38) != x25_1 || *(x24 - 0x28) != 0xffffffff
                || (x0_22 & 1) == 0)
            x0_23 = UI2GetHandle(zx.q(x25_1), x26_3)
            *x24 = x0_23.d
            
            if (x0_23.d != 0)
                *(x24 - 0x30) = x26_3
                *(x24 - 0x38) = x25_1
                *(x24 - 0x28) = 0xffffffff
        else
            x0_23 = zx.q(*x24)
        
        UI2SetState(x0_23, &data_182e3f8, 0xffffffff, 0)
        char* x26_4 = data_11ad3b0
        int32_t x0_26
        
        if (*(x24 - 0x30) == x26_4 && *(x24 - 0x38) == x25_1 && *(x24 - 0x28) == 0xffffffff)
            x0_26 = UI2Exists(zx.q(*x24))
        
        if (*(x24 - 0x30) == x26_4 && *(x24 - 0x38) == x25_1 && *(x24 - 0x28) == 0xffffffff
                && (x0_26 & 1) != 0)
            x0_10 = zx.q(*x24)
        else
            x0_10 = UI2GetHandle(zx.q(x25_1), x26_4)
            *x24 = x0_10.d
            
            if (x0_10.d != 0)
                *(x24 - 0x30) = x26_4
                *(x24 - 0x38) = x25_1
                *(x24 - 0x28) = 0xffffffff
        
        x1_2 = &data_182e3f8
    
    UI2SetState(x0_10, x1_2, 0xffffffff, 0)
    i_1 = &i_1[8]
    x21_2 += 1
    fp = &fp[8]
    x24 += 0x40
while (i_1 != &var_100)

int32_t x8_22 = *(x0_1 + 0x756c)

if (x8_22 == 0)
    UI2SetState(zx.q(x19), &data_182e548, 0xffffffff, 0)
    
    if (*(x0_1 + 0x756c) == 1)
    label_b2c81c:
        UI2SetState(zx.q(x19), &data_182e560, 0xffffffff, 0)
        int32_t x0_34 = DomGetExpansions(&var_100)
        
        if (x0_34 s>= 1)
            int64_t i_2 = 0
            int32_t x20_2 = 0
            
            do
                int32_t x8_25 =
                    ProfileHasEntitlementForExpansion(zx.q(*(var_100 + i_2)), nullptr) & 1
                i_2 += 0x28
                x20_2 += x8_25
            while (mulu.dp.d(x0_34, 0x28) != i_2)
            
            if (*(x0_1 + 0x756c) s> x20_2)
                UI2SetState(zx.q(x19), &data_182e578, 0xffffffff, 0)
        else if (*(x0_1 + 0x756c) s> 0)
            UI2SetState(zx.q(x19), &data_182e578, 0xffffffff, 0)
else if (x8_22 == 1)
    goto label_b2c81c

int32_t x8_27 = *(x0_1 + 0x7570)
int32_t x20_3

if (*(x0_1 + 0x7560) != 0)
    x20_3 = 4
else
    x20_3 = 1

void var_248

if (x8_27 == 0xffffffff)
    DoTranslate("dom_ui_matchmaking_sets_owned")
    UI2SetText(zx.q(x19), &data_182e590, &var_100, 0xffffffff)
    DoTranslate("dom_ui_matchmaking_sets_owned_short")
    UI2SetText(zx.q(x19), &data_182e5a8, &var_248, 0xffffffff)
    UI2SetState(zx.q(x19), &data_182e608, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_182e5f0, 0xffffffff, 0)
    XString::~XString()
else if (x8_27 != 0)
    int32_t x0_44
    
    x0_44 = x8_27 s< x20_3 ? x20_3 : x8_27
    
    *(x0_1 + 0x7570) = x0_44
    XStringFromInt(x0_44)
    DoTranslateWithReplacement("dom_ui_matchmaking_sets_at_least_n", "[N]", &var_248)
    XString::~XString()
    UI2SetText(zx.q(x19), &data_182e590, &var_100, 0xffffffff)
    XStringFromInt(*(x0_1 + 0x7570))
    UI2SetText(zx.q(x19), &data_182e5a8, &var_248, 0xffffffff)
    XString::~XString()
    int32_t x8_28 = *(x0_1 + 0x7570)
    
    if (x8_28 s> x20_3)
        UI2SetState(zx.q(x19), &data_182e5f0, 0xffffffff, 0)
        x8_28 = *(x0_1 + 0x7570)
    
    if (x8_28 s<= 0x10)
        UI2SetState(zx.q(x19), &data_182e608, 0xffffffff, 0)
else
    DoTranslate("dom_ui_matchmaking_sets_all")
    UI2SetText(zx.q(x19), &data_182e590, &var_100, 0xffffffff)
    DoTranslate("dom_ui_matchmaking_sets_all_short")
    UI2SetText(zx.q(x19), &data_182e5a8, &var_248, 0xffffffff)
    UI2SetState(zx.q(x19), &data_182e5f0, 0xffffffff, 0)
    XString::~XString()
XString::~XString()
int32_t x0_51 = DomExpansionsFromBitset(zx.q(*(x0_1 + 0x7568)), &var_100)
UI2SetInt(zx.q(x19), &data_182e4b8, x0_51, 0xffffffff)
void* result

if (x0_51 s<= 0xa)
    result = UI2SetInt(zx.q(x19), &data_182e5c0, 1, 0xffffffff)

if (x0_51 s> 0xa || x0_51 s>= 1)
    int64_t i_3 = 0
    void* x25_2 = &data_180f6f8
    
    do
        int32_t x0_55
        
        if (*(x25_2 - 0x30) == "tbl_expansions" && *(x25_2 - 0x38) == x19
                && i_3 == zx.q(*(x25_2 - 0x28)) && *(x25_2 - 0x20) == 0)
            x0_55 = UI2Exists(zx.q(*x25_2))
        
        int32_t x22_2
        
        if (*(x25_2 - 0x30) != "tbl_expansions" || *(x25_2 - 0x38) != x19
                || i_3 != zx.q(*(x25_2 - 0x28)) || *(x25_2 - 0x20) != 0 || (x0_55 & 1) == 0)
            int32_t x0_57 = UI2GetHandle(zx.q(x19), "tbl_expansions", i_3.d)
            x22_2 = x0_57
            *x25_2 = x0_57
            
            if (x0_57 != 0)
                *(x25_2 - 0x30) = "tbl_expansions"
                *(x25_2 - 0x38) = x19
                *(x25_2 - 0x28) = i_3.d
                *(x25_2 - 0x20) = 0
        else
            x22_2 = *x25_2
        
        result = DomExpDefGetByIndex(DomGetIndxByExp(zx.q(*(&var_100 + (i_3 << 2)))))
        
        if (x22_2 != 0)
            result = UI2SetState(zx.q(x22_2), *(result + 0x10), 0xffffffff, 0)
        
        i_3 += 1
        x25_2 += 0x40
    while (zx.q(x0_51) != i_3)

return result
