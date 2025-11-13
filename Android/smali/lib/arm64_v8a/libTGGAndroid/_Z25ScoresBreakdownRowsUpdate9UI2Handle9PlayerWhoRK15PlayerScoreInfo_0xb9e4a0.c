// 函数: _Z25ScoresBreakdownRowsUpdate9UI2Handle9PlayerWhoRK15PlayerScoreInfo
// 地址: 0xb9e4a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gScoreDlg + 0x23300)
int32_t x10 = *(arg3 + 0x578c)
int32_t x24 = x9 * 0xc
int32_t x23 = x10 - x24
int32_t x19 = arg1.d
int32_t x20

x20 = x23 s< 0xc ? x23 : 0xc

UI2SetState(arg1, &data_1832778, 0, 0)
UI2SetState(zx.q(x19), &data_18327a8, 1, 0)
UI2SetState(zx.q(x19), &data_1832790, 2, 0)
UI2SetState(zx.q(x19), &data_18327a8, 3, 0)
UI2SetState(zx.q(x19), &data_18327c0, x20 + 4, 0)
UI2SetInt(zx.q(x19), &data_18326e8, x20 + 5, 0xffffffff)

if (x23 s>= 1)
    int64_t x20_1 = sx.q(x24)
    int64_t x21_1 = 0
    void* x24_1 = arg3 + muls.dp.d(x24, 0x1c) + 0x10
    
    do
        if (sx.q(x20 - 1) - x20_1 == x21_1)
            UI2SetState(zx.q(x19), &data_1832760, x21_1.d + 4, 0)
        
        int32_t x8_4 = *(x24_1 - 8)
        uint64_t x0_10
        XString* x2_5
        int32_t x3_4
        char var_68
        
        if (x8_4 - 1 u>= 2)
            if (x8_4 != 0)
                pthread_kill(pthread_self(), 6)
                return ScoresBreakdownUpdate(XNoReturn()) __tailcall
            
            DoTranslate("dom_taptip_vp_token_header")
            UI2SetText(zx.q(x19), &data_1832700, &var_68, x21_1.d + 4)
            XString::~XString()
            XStringFromInt(*(x24_1 - 4))
            UI2SetText(zx.q(x19), &data_1832718, &var_68, x21_1.d + 4)
            XString::~XString()
            XStringFromInt(*(x24_1 - 4))
            UI2SetText(zx.q(x19), &data_1832730, &var_68, x21_1.d + 4)
            XString::~XString()
            XString::XString(&var_68)
            x2_5 = &var_68
            x0_10 = zx.q(x19)
            x3_4 = x21_1.d + 4
        else
            int64_t x0_12 = GetCurrentLanguage()
            GetCardName(x0_12, zx.q(*(x24_1 - 4)))
            UI2SetText(zx.q(x19), &data_1832700, &var_68, x21_1.d + 4)
            XString::~XString()
            
            if (*(x24_1 - 8) != 2)
                XStringFromInt(*(x24_1 + 4))
            else
                XString::XString(&var_68)
            
            UI2SetText(zx.q(x19), &data_1832718, &var_68, x21_1.d + 4)
            XString::~XString()
            XStringFromInt(*x24_1)
            UI2SetText(zx.q(x19), &data_1832730, &var_68, x21_1.d + 4)
            XString::~XString()
            VPBannerStringFormat(zx.q(x0_12.d), zx.q(*(x24_1 - 4)), *(x24_1 + 8), *(x24_1 + 0xc), 
                *(x24_1 + 0x10))
            x2_5 = &var_68
            x0_10 = zx.q(x19)
            x3_4 = x21_1.d + 4
        UI2SetText(x0_10, &data_1832748, x2_5, x3_4)
        XString::~XString()
        x21_1 += 1
        x24_1 += 0x1c
    while (x20_1 + x21_1 s< sx.q(x20 + x24))

int32_t x0_23 = PlayerWhoToSeat(zx.q(arg2), zx.q(LocalWho()))

if (x9 s< (x10 + 0xb) s/ 0xc - 1 || x0_23 s< *(ActiveGame() + 0x11b4) - 1)
    UI2SetState(zx.q(x19), &data_1830e58, 0xffffffff, 0)

if (((x9 s> 0 ? 1 : 0) | (x0_23 s> 0 ? 1 : 0)) != 0)
    UI2SetState(zx.q(x19), &data_1830e40, 0xffffffff, 0)

return zx.q(x20 + 5)
