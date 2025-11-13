// 函数: _Z16HasTrashingToken9PlayerWho11DomCardEnum
// 地址: 0xc239dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x0 = DomGameGet()
int32_t x0_1 = FindTokenAnywhere(x0, zx.q(*(x0 + 0x19d4)), 0xb00)
uint64_t x1_1 = zx.q(x0_1)

if (x0_1 == 0xffffffff)
    int32_t x0_3 = FindTokenAnywhere(x0, zx.q(*(x0 + 0x19d4)), 0xb0a)
    x1_1 = zx.q(x0_3)
    
    if (x0_3 == 0xffffffff)
        return 0

void* x0_5 = TokenGet(x0, x1_1)
return zx.q(BoardPileWhere(x0, zx.q(BoardPileSource(x0, zx.q(arg2), false))) == *(x0_5 + 8) ? 1 : 0)
