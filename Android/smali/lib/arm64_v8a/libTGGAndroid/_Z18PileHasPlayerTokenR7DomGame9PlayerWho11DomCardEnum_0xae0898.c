// 函数: _Z18PileHasPlayerTokenR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xae0898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileSource(*(x0 + 8), zx.q(arg3), false)

if (x0_2 != 0)
    x0_2 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))

uint64_t x8 = zx.q(*(arg1 + 0x19ac))
int32_t x11

if (x8.d s< 1)
    x11 = 0
else
    int64_t x9_1 = 0
    void* __offset(DomGame, 0x15f70) x10_1 = arg1 + 0x15f70
    x11 = 1
    
    while (*x10_1 != x0_2 || *(x10_1 - 4) != arg2)
        x9_1 += 1
        x11 = x9_1 u< x8 ? 1 : 0
        x10_1 += 0x20
        
        if (x8 == x9_1)
            break

return zx.q(x11) & 1
