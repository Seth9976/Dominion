// 函数: _Z20FilterCardsInKingdomR10DomKingdomP11DomCardEnumRi
// 地址: 0xbf7310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *arg3

if (x22 s< 1)
    return 

DomKingdom& x21_1 = arg1
int32_t x23_1 = 0

do
    if ((IsInKingdom(x21_1, zx.q(*(arg2 + (sx.q(x23_1) << 2)))).d & 1) != 0)
        *arg3 = x22 - 1
        int64_t x9_1 = sx.q(x23_1)
        x23_1 -= 1
        *(arg2 + (x9_1 << 2)) = *(arg2 + (sx.q(x22 - 1) << 2))
        x22 = *arg3
    
    x23_1 += 1
while (x23_1 s< x22)
