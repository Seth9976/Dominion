// 函数: _Z9IsObelisk11DomCardEnum
// 地址: 0xc23998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x0 = DomGameGet()
uint64_t result = GetObeliskPile(x0)

if (result.d == 0)
    return result

return zx.q(BoardPileSource(x0, zx.q(arg1), false) == result.d ? 1 : 0)
