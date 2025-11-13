// 函数: _Z17CardsOwnedScoringv
// 地址: 0xada7e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardID* entry_x8
int64_t result = CardsOwnedScoring(*(x0 + 8), zx.q(*(x0 + 0x18)), entry_x8)
*(entry_x8 + 0xc80) = result.d
return result
