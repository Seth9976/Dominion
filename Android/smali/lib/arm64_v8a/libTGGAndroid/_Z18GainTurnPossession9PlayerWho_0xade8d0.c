// 函数: _Z18GainTurnPossession9PlayerWho
// 地址: 0xade8d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
void* x8_1 = *(DomGetContext() + 8)
return GainTurn(*(x0 + 8), zx.q(arg1), zx.q(x0[6]), &x0[7], &x0[0xc], 
    zx.q((*(x8_1 + 0xd50) s> 0x11 ? 1 : 0) << 3), 0, 0) __tailcall
