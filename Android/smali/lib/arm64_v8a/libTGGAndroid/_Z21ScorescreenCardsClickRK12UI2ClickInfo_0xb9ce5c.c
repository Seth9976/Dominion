// 函数: _Z21ScorescreenCardsClickRK12UI2ClickInfo
// 地址: 0xb9ce5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)

if ((operator==(&var_28, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(0x29, 5)
else
    XString::~XString()
    GameDlgManagerShow(0x29, 5)

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *(gScoreDlg + 0x232f8) = 1
    *(gScoreDlg + 0x23300) = 0

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *(gScoreDlg + 0x232f8) = 0
    *(gScoreDlg + 0x23300) = 0

XString::XString(&var_28)
int32_t x0_11 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    int32_t x9_1 = *(gScoreDlg + 0x232f8)
    int64_t x8_1 = sx.q(*(gScoreDlg + 0x232fc))
    int32_t x22_1
    
    if (x9_1 == 0)
        int64_t x8_10 = muls.dp.d(*(gScoreDlg + x8_1 * 0x5dd4 + 0x578c) + 0xb, 0x2aaaaaab)
        x22_1 = (x8_10 s>> 0x21).d + (x8_10 u>> 0x3f).d
    else
        if (x9_1 != 1)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return ScorescreenNumPages() __tailcall
        
        int32_t x8_6 = (*(gScoreDlg + x8_1 * 0x5dd4 + 0x5dd0) + 0xe) s/ 0xf
        
        x22_1 = x8_6 s> 1 ? x8_6 : 1
    
    ActiveGame()
    int32_t x0_14 = PlayerWhoToSeat(zx.q(*(gScoreDlg + 0x232fc)), zx.q(LocalWho()))
    int32_t x8_12 = *(gScoreDlg + 0x23300)
    int32_t x8_13
    
    if (x8_12 != x22_1 - 1)
        x8_13 = x8_12 + 1
    else
        x8_13 = 0
        *(gScoreDlg + 0x232fc) = PlayerSeatToWho(zx.q(x0_14 + 1), zx.q(LocalWho()))
    
    *(gScoreDlg + 0x23300) = x8_13

XString::XString(&var_28)
int32_t x0_20 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_20 & 1) != 0)
    int32_t x0_23 = PlayerWhoToSeat(zx.q(*(gScoreDlg + 0x232fc)), zx.q(LocalWho()))
    int32_t x8_14 = *(gScoreDlg + 0x23300)
    int32_t x8_15
    
    if (x8_14 == 0)
        x8_15 = 0
        *(gScoreDlg + 0x232fc) = PlayerSeatToWho(zx.q(x0_23 - 1), zx.q(LocalWho()))
    else
        x8_15 = x8_14 - 1
    
    *(gScoreDlg + 0x23300) = x8_15

return 0
