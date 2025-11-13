// 函数: _Z15CardsAtThisCardv
// 地址: 0xae06f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
CardID* entry_x8
int64_t result = CardsAtCard(*(x0 + 8), zx.q(ThisCard(false, x1)), entry_x8)
*(entry_x8 + 0xc80) = result.d
return result
