// 函数: sub_aaf960
// 地址: 0xaaf960
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardsWhere(0x3eb)
void var_cd8
MoveCardsTo(&var_cd8, 0x3eb, 0x3ea, 0, 0, 1, 0xb)
int32_t* x0_4 = LandscapeRefPiles(*(DomGetContext() + 8) + 0xd54, 0x114e)
int64_t x24 = 0

while (*(x0_4 + x24) != 0)
    CardsWhere(0x3ea)
    int128_t var_1960
    memcpy(&var_cd8, &var_1960, 0xc84)
    __builtin_memset(&var_1960, 0, 0x30)
    var_1960.d = 0x121
    int128_t var_1950_1
    var_1950_1:0xc.d = 0
    int128_t var_1940_1
    var_1940_1:8.q = 0
    int64_t var_1930_1 = 0
    int32_t x0_15 = ChooseCard(&var_cd8, 9, &var_1960, 7, 0)
    operator-=(&var_cd8, zx.q(x0_15))
    int32_t x0_18 = BoardPileSource(*(x0 + 8), zx.q(x0_15))
    int32_t x22_1 = 1
    
    if (x0_18 != 0 && x0_18 != 0x101)
        if ((IsSupplyPile(BoardPileWhere(*(x0 + 8), zx.q(x0_18))) & 1) != 0)
            int64_t x0_6 = BoardPileWhere(*(x0 + 8), zx.q(x0_18))
            x22_1 = x0_6.d
            IsSupplyPile(x0_6)
        else
            x22_1 = 1
    
    int32_t var_1970_1 = 0
    int64_t var_1978_1 = 0
    int32_t var_1980_1 = 0
    int32_t var_1988_1 = 0
    int32_t var_1990_1 = 0
    MoveCardToSafe(*(x0 + 8), 0xffffffff, zx.q(x0_15), 0x15, zx.q(x22_1), 0, 0, 0)
    int64_t x0_9 = GetPileTop(zx.q(*(x0_4 + x24)))
    int32_t x21_1 = x0_9.d
    MoveCardToPlayer(zx.q(x21_1), zx.q(CardWhere(x0_9)), zx.q(*(x0 + 0x18)), 0x3ea, 0, 0, nullptr, 
        0xc)
    operator+=(&var_cd8, zx.q(x21_1))
    x24 += 4
    
    if (x24 == 0x38)
        break

return MoveCardsTo(&var_cd8, 0x3ea, 0x3eb, 0, 0, 1, 0xb)
