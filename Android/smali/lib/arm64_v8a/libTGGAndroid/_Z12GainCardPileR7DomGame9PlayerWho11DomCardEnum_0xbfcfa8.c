// 函数: _Z12GainCardPileR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbfcfa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = PileOfTypeExact(arg1, zx.q(arg3))
int32_t x20

if (x0 == 0)
    x20 = 0
else
    x20 = *(x0 + 8)
    
    if (x20 != 0)
        int32_t var_30_1 = 4
        GainCard(arg1, zx.q(arg2), zx.q(x20), 0x476, 0, 0x476, 0, 0)

return zx.q(x20)
