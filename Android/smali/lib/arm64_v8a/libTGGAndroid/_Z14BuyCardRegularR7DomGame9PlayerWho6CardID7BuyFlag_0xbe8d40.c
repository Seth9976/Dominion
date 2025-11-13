// 函数: _Z14BuyCardRegularR7DomGame9PlayerWho6CardID7BuyFlag
// 地址: 0xbe8d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2

if ((arg4 & 2) == 0)
    *(arg1 + 0x19f4) = 3
    SpendBuy(arg1, zx.q(x20))

if ((IsLandscape(arg1, zx.q(x19)) & 1) == 0)
    return BuyCard(arg1, zx.q(x20), zx.q(x19), ((arg4 & 2) == 0 ? 1 : 0).b) __tailcall

return BuyLandscape(arg1, zx.q(x20), zx.q(x19), false, 0) __tailcall
