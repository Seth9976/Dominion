// 函数: _Z20LeagueOfBankers_Hintv
// 地址: 0xa1b260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000)
int32_t x8_2

if (x0_2 s< 0)
    x8_2 = x0_2 + 3
else
    x8_2 = x0_2

return zx.q(x8_2 s>> 2)
