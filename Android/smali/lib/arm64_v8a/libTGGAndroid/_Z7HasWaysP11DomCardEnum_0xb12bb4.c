// 函数: _Z7HasWaysP11DomCardEnum
// 地址: 0xb12bb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GetFirstWayCard()

if (arg1 != 0 && x0 != 0)
    *arg1 = CardWhat(gDomClient + 0x20728, zx.q(x0))

return zx.q(x0 != 0 ? 1 : 0)
