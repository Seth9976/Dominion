// 函数: _Z14BlackMarketBuyR7DomGame9PlayerWhoRK7CardIDs
// 地址: 0xab0dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24 = 0
bool var_28 = false
int32_t x0_2

do
    x0_2 = DoBuy(arg1, zx.q(arg2), arg3, 2, &var_24, &var_28, zx.q(ThisCard(false, nullptr)))
while ((x0_2 & 1) == 0)
return zx.q(var_24)
