// 函数: _Z31ScorescreenUpdateHybridCardsTab9UI2Handle9PlayerWhoRK15PlayerScoreInfo
// 地址: 0xb9ed3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2
int32_t x19 = arg1.d
UI2SetState(arg1, &data_18325f8, 0xffffffff, 0)
int32_t x23 = *(arg3 + 0x578c)
int32_t x27 = *(gScoreDlg + 0x23300)
int32_t x9 = *(arg3 + 0x5788) - x23
int32_t x10_2 = (x9 + 4) s/ 5
int32_t x8_4 = (x23 + 4) s/ 5
int32_t x13_2

if (x10_2 + 3 s< 0)
    x13_2 = x10_2 + 6
else
    x13_2 = x10_2 + 3

uint32_t x10_5 = (x8_4 + 2) s/ 3
uint32_t x12_2 = (x8_4 + 2 + (x13_2 s>> 2)) s/ 3
uint32_t x12_3

x12_3 = x12_2 s> 1 ? x12_2 : 1

int64_t x8_7
int32_t x21
int32_t x28
int32_t fp

if (x27 s>= x10_5 - 1)
    int32_t x10_6 = x8_4 - (x10_5 - 1) * 3
    
    if (x27 s>= x10_5)
        fp = x23 + (3 - x10_6) * 0x14
        int32_t x9_1
        
        x9_1 = x9 s< 0x3c ? x9 : 0x3c
        
        x8_7 = 0
        x21 = 0
        x28 = fp + x9_1
        x23 = 0
    else
        x21 = x27 * 0xf
        x8_7 = 3
        
        if (x10_6 != 3)
            int32_t x8_11 = (3 - x10_6) * 0x14
            int32_t x8_12
            
            x8_12 = x9 s< x8_11 ? x9 : x8_11
            
            x28 = x8_12 + x23
            x8_7 = sx.q(x10_6)
            fp = x23
        else
            x28 = 0
            fp = 0
else
    x21 = x27 * 0xf
    x28 = 0
    fp = 0
    
    if (x23 s>= x21 + 0xf)
        x23 = x21 + 0xf
    
    x8_7 = 3

UI2SetState(zx.q(x19), x8_7 * 0x18 + &data_1833448, 0xffffffff, 0)
UI2SetInt(zx.q(x19), &data_18327d8, x23 - x21, 0xffffffff)
UI2SetInt(zx.q(x19), &data_18327f0, x28 - fp, 0xffffffff)
void var_70

if (x23 s> x21)
    int32_t i = 0
    void* x24_1 = arg3 + muls.dp.d(x21, 0x1c) + 8
    void* x21_1 = (sx.q(x21) << 6) + 0x1835dd8
    
    do
        int32_t x0_5
        
        if (*(x21_1 + 8) == "tbl_scores" && *x21_1 == x19 && i == *(x21_1 + 0x10)
                && *(x21_1 + 0x18) == 0)
            x0_5 = UI2Exists(zx.q(*(x21_1 + 0x38)))
        
        int32_t x8_20
        int32_t x26_1
        
        if (*(x21_1 + 8) != "tbl_scores" || *x21_1 != x19 || i != *(x21_1 + 0x10)
                || *(x21_1 + 0x18) != 0 || (x0_5 & 1) == 0)
            int32_t x0_7 = UI2GetHandle(zx.q(x19), "tbl_scores", i)
            *(x21_1 + 0x38) = x0_7
            
            if (x0_7 != 0)
                x26_1 = x0_7
                *(x21_1 + 8) = "tbl_scores"
                *x21_1 = x19
                *(x21_1 + 0x10) = i
                *(x21_1 + 0x18) = 0
                x8_20 = *x24_1
                
                if (x8_20 - 1 u< 2)
                    DeclareVPCardEntry(zx.q(x26_1), x24_1)
                else
                label_b9f00c:
                    
                    if (x8_20 != 0)
                    label_b9f244:
                        pthread_kill(pthread_self(), 6)
                        uint64_t x0_28
                        int64_t x1_6
                        x0_28, x1_6 = XNoReturn()
                        return SortCardIDs(x0_28, x1_6) __tailcall
                    
                    UI2SetState(zx.q(x26_1), &data_18326a0, 0xffffffff, 0)
                    XStringFromInt(*(x24_1 + 4))
                    UI2SetText(zx.q(x26_1), &data_1832628, &var_70, 0xffffffff)
                    XString::~XString()
        else
            x26_1 = *(x21_1 + 0x38)
            
            if (x26_1 != 0)
                x8_20 = *x24_1
                
                if (x8_20 - 1 u>= 2)
                    goto label_b9f00c
                
                DeclareVPCardEntry(zx.q(x26_1), x24_1)
        i += 1
        x24_1 += 0x1c
        x21_1 += 0x40
    while (x23 - x21 != i)

if (x28 s> fp)
    int32_t i_1 = 0
    void* x21_2 = &data_18245d8 + (sx.q(fp) << 6)
    void* x23_1 = arg3 + muls.dp.d(fp, 0x1c) + 8
    
    do
        int32_t x0_12
        
        if (*(x21_2 + 8) == "tbl_cards" && *x21_2 == x19 && i_1 == *(x21_2 + 0x10)
                && *(x21_2 + 0x18) == 0)
            x0_12 = UI2Exists(zx.q(*(x21_2 + 0x38)))
        
        uint64_t x0_13
        
        if (*(x21_2 + 8) != "tbl_cards" || *x21_2 != x19 || i_1 != *(x21_2 + 0x10)
                || *(x21_2 + 0x18) != 0 || (x0_12 & 1) == 0)
            x0_13 = UI2GetHandle(zx.q(x19), "tbl_cards", i_1)
            *(x21_2 + 0x38) = x0_13.d
            
            if (x0_13.d != 0)
                *(x21_2 + 8) = "tbl_cards"
                *x21_2 = x19
                *(x21_2 + 0x10) = i_1
                *(x21_2 + 0x18) = 0
            label_b9f10c:
                
                if (*x23_1 != 3)
                    goto label_b9f244
                
                DeclareCardEntry(x0_13, x23_1)
        else
            x0_13 = zx.q(*(x21_2 + 0x38))
            
            if (x0_13.d != 0)
                goto label_b9f10c
        i_1 += 1
        x23_1 += 0x1c
        x21_2 += 0x40
    while (x28 - fp != i_1)

GameSetup* x22_2 = ActiveGame() + 8
void var_64
PlayerGetNameAvatar(x22_2, GameGetPlayer(x22_2, zx.q(x22)), &var_64)
UI2SetText(zx.q(x19), &data_1832670, &var_70, 0xffffffff)
XString::~XString()
XStringFromInt(*arg3)
UI2SetText(zx.q(x19), &data_1832688, &var_70, 0xffffffff)
XString::~XString()
int32_t x0_24 = PlayerWhoToSeat(zx.q(x22), zx.q(LocalWho()))
void* result = ActiveGame()

if (x27 s< x12_3 - 1 || x0_24 s< *(result + 0x11b4) - 1)
    result = UI2SetState(zx.q(x19), &data_1830e58, 0xffffffff, 0)

if (((x27 s> 0 ? 1 : 0) | (x0_24 s> 0 ? 1 : 0)) == 0)
    return result

return UI2SetState(zx.q(x19), &data_1830e40, 0xffffffff, 0)
