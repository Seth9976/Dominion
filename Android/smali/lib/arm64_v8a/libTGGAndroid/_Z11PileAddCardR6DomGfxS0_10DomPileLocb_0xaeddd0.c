// 函数: _Z11PileAddCardR6DomGfxS0_10DomPileLocb
// 地址: 0xaeddd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(arg2 + 0x21d0))
uint64_t x1 = zx.q(*(arg1 + 0x21d0))
int32_t x21 = arg4.d
int32_t x0_1
int32_t x8_2
void* __offset(DomGfx, 0x70) x9
int128_t v0
int128_t v1

if (arg3.d == 0xffffffff)
    x0_1, v0, v1 = PileAdd(x0, x1, arg3, x21.b & 1)
    x9 = arg2 + 0x70
    int32_t i = *x9
    *(x9 - 4) += 1
    x8_2 = *(arg1 + 0x21d0)
    
    if (i != 0)
        void* x13_1
        
        do
            x13_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
            i = *(x13_1 + 0x213c)
        while (i != 0)
        
        x9 = x13_1 + 0x213c
else if (arg3.d != 0)
    uint32_t i_3 = (arg3 u>> 0x20).d
    x0_1, v0, v1 = PileAdd(x0, x1, zx.q(i_3), x21.b & 1)
    x9 = arg2 + 0x70
    *(arg2 + 0x6c) += 1
    x8_2 = *(arg1 + 0x21d0)
    
    if (i_3 != 0)
        uint32_t i_1
        
        do
            i_1 = i_3
            i_3 -= 1
            x9 = *(gDomClient + 0x205e0) + zx.q(*x9) * 0x21d8 + 0x213c
        while (i_1 != 1)
else
    x0_1, v0, v1 = PileAdd(x0, x1, arg3, x21.b & 1)
    x9 = arg2 + 0x70
    *(arg2 + 0x6c) += 1
    x8_2 = *(arg1 + 0x21d0)

*(arg1 + 0x9c) = *(arg2 + 0x21d0)
*(arg1 + 0xa0) = *(arg2 + 0x58)
int32_t x11 = *(arg2 + 0x5c)
*(arg1 + 0xa4) = x11
*(arg1 + 0xc8) = *(arg2 + 0x60)
int32_t i_2 = *x9
*(arg1 + 0xb0) = x0_1
*(arg1 + 0xb4) = x0_1
*(arg1 + 0x213c) = i_2

if (i_2 != 0)
    v0.d = 1
    v0:4.d = 1
    
    do
        void* x13_3 = *(gDomClient + 0x205e0) + mulu.dp.d(i_2 & 0xffff, 0x21d8)
        v1.q = *(x13_3 + 0xb0)
        i_2 = *(x13_3 + 0x213c)
        *(x13_3 + 0xb0) = (v1 + v0).q
    while (i_2 != 0)
    
    x11 = *(arg1 + 0xa4)

if (x11 == 0x3ea)
    *(arg1 + 0xb8) = *(arg1 + 0x98)

*x9 = x8_2
CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x1000000)

if ((x21 & 1) == 0)
    PileAdjustCards(arg2, arg1, false)

return zx.q(*(arg1 + 0x154))
