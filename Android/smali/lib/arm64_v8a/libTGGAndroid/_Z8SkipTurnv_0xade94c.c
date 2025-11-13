// 函数: _Z8SkipTurnv
// 地址: 0xade94c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
uint64_t x1 = zx.q(x0[6])
return SkipTurn(*(x0 + 8), x1, zx.q(x1.d), &x0[7], &x0[0xc], 0, 0xb) __tailcall
