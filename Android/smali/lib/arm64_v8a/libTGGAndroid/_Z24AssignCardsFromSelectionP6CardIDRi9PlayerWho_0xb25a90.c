// 函数: _Z24AssignCardsFromSelectionP6CardIDRi9PlayerWho
// 地址: 0xb25a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x2056c))

if (x11.d s>= 1)
    int64_t x9_1 = 0
    
    do
        int64_t x11_1 = x9_1 << 2
        x9_1 += 1
        *(arg1 + x11_1) = *(gDomClient + x11_1 + 0x1f8ec)
        x11 = sx.q(*(gDomClient + 0x2056c))
    while (x9_1 s< x11)

*arg2 = x11.d
