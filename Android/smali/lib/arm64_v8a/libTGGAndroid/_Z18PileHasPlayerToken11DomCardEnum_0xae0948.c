// 函数: _Z18PileHasPlayerToken11DomCardEnum
// 地址: 0xae0948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x22 = *(x0 + 8)
int32_t x21 = *(x0 + 0x18)
void* x0_1 = DomGetContext()
int32_t x0_3 = BoardPileSource(*(x0_1 + 8), zx.q(arg1), false)

if (x0_3 != 0)
    x0_3 = BoardPileWhere(*(x0_1 + 8), zx.q(x0_3))

uint64_t x8 = zx.q(*(x22 + 0x19ac))
int32_t x11

if (x8.d s< 1)
    x11 = 0
else
    int64_t x9_1 = 0
    void* x10_1 = x22 + 0x15f70
    x11 = 1
    
    while (*x10_1 != x0_3 || *(x10_1 - 4) != x21)
        x9_1 += 1
        x11 = x9_1 u< x8 ? 1 : 0
        x10_1 += 0x20
        
        if (x8 == x9_1)
            break

return zx.q(x11) & 1
