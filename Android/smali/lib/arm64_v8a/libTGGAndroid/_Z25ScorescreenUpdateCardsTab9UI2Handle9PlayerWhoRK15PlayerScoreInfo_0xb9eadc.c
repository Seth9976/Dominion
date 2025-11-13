// 函数: _Z25ScorescreenUpdateCardsTab9UI2Handle9PlayerWhoRK15PlayerScoreInfo
// 地址: 0xb9eadc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg3 + 0x5dd0)
int32_t x24 = *(gScoreDlg + 0x23300)
int32_t x20 = x24 * 0xf
int32_t x22 = x8 - x20
int32_t x8_2 = (x8 + 0xe) s/ 0xf
int32_t x8_3

x8_3 = x8_2 s> 1 ? x8_2 : 1

int32_t x23

x23 = x22 s< 0xf ? x22 : 0xf

int32_t x19 = arg1.d
UI2SetInt(arg1, &data_18327f0, x23, 0xffffffff)

if (x22 s>= 1)
    int64_t x26_1 = sx.q(x20)
    int64_t x22_1 = 0
    void* x20_1 = (x26_1 << 6) + 0x1835a50
    
    do
        int64_t x25_1 = sx.q(*(arg3 + (sx.q(x20) << 1) + 0x5790 + (x22_1 << 1)))
        int32_t x0_1
        
        if (*(x20_1 - 0x30) == "tbl_cards" && *(x20_1 - 0x38) == x19 && x22_1.d == *(x20_1 - 0x28)
                && *(x20_1 - 0x20) == 0)
            x0_1 = UI2Exists(zx.q(*x20_1))
        
        uint64_t x0_2
        
        if (*(x20_1 - 0x30) != "tbl_cards" || *(x20_1 - 0x38) != x19 || x22_1.d != *(x20_1 - 0x28)
                || *(x20_1 - 0x20) != 0 || (x0_1 & 1) == 0)
            x0_2 = UI2GetHandle(zx.q(x19), "tbl_cards", x22_1.d)
            *x20_1 = x0_2.d
            
            if (x0_2.d != 0)
                *(x20_1 - 0x30) = "tbl_cards"
                *(x20_1 - 0x38) = x19
                *(x20_1 - 0x28) = x22_1.d
                *(x20_1 - 0x20) = 0
            label_b9ec50:
                int32_t x8_12 = *(arg3 + x25_1 * 0x1c + 8)
                
                if (x8_12 == 1)
                    DeclarePlainVPCardEntry(x0_2, arg3 + x25_1 * 0x1c + 8)
                else
                    if (x8_12 != 3)
                        pthread_kill(pthread_self(), 6)
                        void* x0_11
                        int64_t x1_3
                        PlayerScoreInfo* x2_3
                        x0_11, x1_3, x2_3 = XNoReturn()
                        return ScorescreenUpdateHybridCardsTab(x0_11, x1_3, x2_3) __tailcall
                    
                    DeclareCardEntry(x0_2, arg3 + x25_1 * 0x1c + 8)
        else
            x0_2 = zx.q(*x20_1)
            
            if (x0_2.d != 0)
                goto label_b9ec50
        x22_1 += 1
        x20_1 += 0x40
    while (x26_1 + x22_1 s< sx.q(x23 + x20))

int32_t x0_6 = PlayerWhoToSeat(zx.q(arg2), zx.q(LocalWho()))
void* result = ActiveGame()
int32_t x21_1 = (x24 s> 0 ? 1 : 0) | (x0_6 s> 0 ? 1 : 0)

if (x24 s< x8_3 - 1 || x0_6 s< *(result + 0x11b4) - 1)
    result = UI2SetState(zx.q(x19), &data_1830e58, 0xffffffff, 0)
    
    if (x21_1 == 0)
        return result
else if (x21_1 == 0)
    return result

return UI2SetState(zx.q(x19), &data_1830e40, 0xffffffff, 0) __tailcall
