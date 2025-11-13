// 函数: _Z17TakeAllTokensHere12DomTokenType
// 地址: 0xae12b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
int32_t x0_3 = CardWhat(*(DomGetContext() + 8), zx.q(x0))
void* x0_4 = DomGetContext()
int32_t x0_6 = BoardPileSource(*(x0_4 + 8), zx.q(x0_3), false)
int32_t x20_2

if (x0_6 == 0)
    x20_2 = 0
else
    x20_2 = BoardPileWhere(*(x0_4 + 8), zx.q(x0_6))

bool x21_1 = true
void* x0_9 = DomGetContext()

if (x19 s> 0xe00)
    if (x19 != 0xe01 && x19 != 0x1200)
        x21_1 = false
else if (x19 != 0x601 && x19 != 0xc00)
    x21_1 = false

GameAssert(x21_1)
return MoveTokens(zx.q(x20_2), 0x3f1, zx.q(x19), 
    CountTokensPile(*(x0_9 + 8), 0xffffffff, zx.q(x19), zx.q(x20_2))) __tailcall
