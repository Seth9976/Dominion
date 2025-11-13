// 函数: _Z26LeagueOfBankers_StartOfBuyv
// 地址: 0xa1b294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t result = CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000)

if (result.d + 3 u< 7)
    return result

int32_t x8_2

if (result.d s< 0)
    x8_2 = result.d + 3
else
    x8_2 = result.d

return MoneyPlus(x8_2 s>> 2, 0, false) __tailcall
