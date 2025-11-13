// 函数: _Z11SortCardIDs6CardIDS_
// 地址: 0xb9f24c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x19 = arg2
int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(x20))
int32_t x0_3 = CardWhat(gDomClient + 0x20728, zx.q(x19))

if (x0_1 != x0_3)
    return SortHandCards(zx.q(x0_1), zx.q(x0_3)) __tailcall

return zx.q(x20 s< x19 ? 1 : 0)
