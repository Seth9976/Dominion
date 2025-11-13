// 函数: _Z26LeagueOfShopkeepers_OnPlayv
// 地址: 0xa1b370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()

if (CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000) s>= 5)
    MoneyPlus(1, 0, false)

void* x0_3 = DomGetContext()
int64_t result = CountTokensPlayer(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0x1000)

if (result.d s< 0xa)
    return result

Action(1, 0)
return Buy(1, 0) __tailcall
