// 函数: _Z13ValidToOupostv
// 地址: 0xade81c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()

if ((FirstTimePlayingCard(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x416) & 1) == 0)
    return 0

return zx.q(PrevTurnPlayer(*(x0 + 8)) != *(x0 + 0x18) ? 1 : 0)
