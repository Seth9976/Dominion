// 函数: _Z30Sentry_Achievement_OnGameStartv
// 地址: 0xa27600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* x0 = DomAchievementDataGet()
void* x0_1 = DomGetContext()
*(x0 + 0x28) = CardsOwned(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), x0)
return 0
