// 函数: _Z17GetAbilityMoveIdxv
// 地址: 0xadeb44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0

if (x8 == 3)
    AbilitySourceCard(*(x0 + 8), zx.q(x0[7]))
    AbilitySource(*(x0 + 8), zx.q(x0[7]))
    
    if ((AbilityIsRegistered(zx.q(x0[7])) & 1) != 0)
        return zx.q(*(AbilityGetRegistered(*(x0 + 8), zx.q(x0[7])) + 0x20))
else if (x8 == 2)
    return zx.q(x0[8])

return 0
