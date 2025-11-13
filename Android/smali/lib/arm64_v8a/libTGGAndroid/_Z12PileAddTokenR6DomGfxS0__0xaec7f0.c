// 函数: _Z12PileAddTokenR6DomGfxS0_
// 地址: 0xaec7f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomGfx, 0x74) x1 = arg2 + 0x74
int32_t i = *x1
int32_t x8

if (i == 0)
    x8 = 0
else
    x8 = 0
    void* x13_1
    
    do
        x13_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
        i = *(x13_1 + 0x213c)
        x8 += 1
    while (i != 0)
    
    x1 = x13_1 + 0x213c

*x1 = *(arg1 + 0x21d0)
*(arg1 + 0x2140) = x8
return zx.q(x8)
