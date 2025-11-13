// 函数: _Z19ReplaceStartingCardR7DomGame9PlayerWho11DomCardEnumS2_
// 地址: 0xa369fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_cc0
int32_t x0 = CardsWhere(arg1, arg2, 0x3eb, &var_cc0)
int32_t x22_1

if (x0 s< 1)
label_a36a5c:
    x22_1 = 0
else
    uint64_t x23_1 = zx.q(x0)
    void* x24_1 = &var_cc0
    
    while (true)
        if ((CardIs(arg1, zx.q(*x24_1), zx.q(arg3)) & 1) != 0)
            x22_1 = *x24_1
            break
        
        uint64_t temp0_1 = x23_1
        x23_1 -= 1
        x24_1 += 4
        
        if (temp0_1 == 1)
            goto label_a36a5c

int64_t result = BoardPileTop(arg1, zx.q(BoardPileWhere(arg1, zx.q(arg4))))

if (x22_1 == 0 || result.d == 0)
    return result

int32_t var_cd0_1 = 0
int64_t var_cd8_1 = 0
int32_t var_ce0_1 = 0
int32_t var_ce8_1 = 1
int32_t var_cf0_1 = 0
MoveCardToSafe(arg1, 0xffffffff, zx.q(x22_1), 0x15, 1, 0, 0, 0)
int32_t var_cd0_2 = 0
int64_t var_cd8_2 = 0
int32_t var_ce0_2 = 0
int32_t var_ce8_2 = 1
int32_t var_cf0_2 = 0
return MoveCardToSafe(arg1, zx.q(arg2.d), zx.q(result.d), 0x15, 0x3eb, 0, 0, 0)
