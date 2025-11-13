// 函数: _Z11BlackMarketv
// 地址: 0xab0e24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(2, 0, false)
void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x21 = *(x0 + 0x18)
RevealBlackMarket(3)
PauseUI(true)
int32_t var_34 = 0
bool var_38 = false
int32_t var_cc8[0x320]
int32_t x0_3

do
    x0_3 = DoBuy(x19, zx.q(x21), &var_cc8, 2, &var_34, &var_38, zx.q(ThisCard(false, nullptr)))
while ((x0_3 & 1) == 0)
uint64_t x1_2 = zx.q(var_34)

if (x1_2.d != 0)
    operator-=(&var_cc8, x1_2)

int64_t result = BoardPileWhere(*(x0 + 8), 0x1301)
int32_t var_48

if (var_48 s>= 1)
    int32_t x20_1 = result.d
    int64_t i = 0
    
    do
        MarkFateDiscarded(x19, zx.q(var_cc8[i]), true)
        int32_t var_cd8_1 = 0
        int64_t var_ce0_1 = 0
        int32_t var_ce8_1 = 0
        int32_t var_cf0_1 = 0
        int32_t var_cf8_1 = 0
        int64_t var_d00_1 = 0
        result = MoveCardTo(x19, 0xffffffff, zx.q(var_cc8[i]), 0x3ee, 8, zx.q(x20_1), 0, 0)
        i += 1
    while (i s< sx.q(var_48))

return result
