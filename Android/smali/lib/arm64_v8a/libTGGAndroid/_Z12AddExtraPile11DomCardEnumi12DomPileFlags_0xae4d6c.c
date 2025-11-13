// 函数: _Z12AddExtraPile11DomCardEnumi12DomPileFlags
// 地址: 0xae4d6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = NextAvailableNonSupplyPile(*(x0 + 8))
AddPileWhere(*(x0 + 8), zx.q(x0_2), zx.q(arg1), *(x0 + 0x90), zx.q(arg3), arg2)
return zx.q(x0_2)
