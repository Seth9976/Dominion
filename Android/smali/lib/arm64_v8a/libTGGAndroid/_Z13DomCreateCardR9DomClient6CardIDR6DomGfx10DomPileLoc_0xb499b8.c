// 函数: _Z13DomCreateCardR9DomClient6CardIDR6DomGfx10DomPileLoc
// 地址: 0xb499b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gDomClient + 0x205f0))
int32_t x22 = arg2
int32_t x8_1
int64_t x24

if (x23.d != *(gDomClient + 0x205e8))
    x24 = *(gDomClient + 0x205e0)
    x8_1 = *(x24 + x23 * 0x21d8 + 0x21d0)
else
    x24 = *(gDomClient + 0x205e0)
    x8_1 = x23.d + 1
    *(gDomClient + 0x205e8) = x8_1

DomGfx* result = x24 + x23 * 0x21d8
*(gDomClient + 0x205f0) = x8_1
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x23.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
*(result + 0x2c) = 0
*(result + 0x98) = x22
*(result + 0xa0) = *(arg3 + 0x58)
void* __offset(DomGfx, 0xa4) x27_1 = result + 0xa4
*x27_1 = *(arg3 + 0x5c)
*(result + 0xbc) = 0x100000001
*(result + 0x9c) = 0
int32_t x0_4
int32_t x8_11
int32_t x9_7

if (*(arg3 + 0x5c) != 6)
    x0_4 = PileAddCard(result, arg3, arg4, 
        (not.d(CardIs(gDomClient + 0x20728, zx.q(x22), 0x20000000800))).b & 1)
    *(x24 + x23 * 0x21d8 + 0xb0) = x0_4
    x9_7 = *(arg3 + 0x3b8)
    x8_11 = *(result + 0xa0)
else
    void* x0_3 = BoardAreaPile(CardWhat(gDomClient + 0x20728, zx.q(x22)))
    void* x10_2 = x0_3 + 0x74
    int32_t i = *x10_2
    
    if (i == 0)
        x0_4 = 0
    else
        x0_4 = 0
        void* x13_1
        
        do
            x13_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
            i = *(x13_1 + 0x213c)
            x0_4 += 1
        while (i != 0)
        
        x10_2 = x13_1 + 0x213c
    
    void* x11_1 = x24 + x23 * 0x21d8
    x27_1 = x0_3 + 0x5c
    *x10_2 = *(result + 0x21d0)
    *(x11_1 + 0x2140) = x0_4
    *(x11_1 + 0xb0) = x0_4
    x8_11 = -1
    *(result + 0x9c) = *(x0_3 + 0x21d0)
    x9_7 = 7

int32_t x10_4 = *x27_1
void* x11_2 = x24 + x23 * 0x21d8
*(x11_2 + 0x260) = 1
*(x11_2 + 0x268) = x9_7
*(x11_2 + 0x270) = x8_11
*(x11_2 + 0x274) = x0_4
*(x11_2 + 0x26c) = x10_4
*(x11_2 + 0x278) = zx.o(0)
*(x11_2 + 0x288) = zx.o(0)
*(x11_2 + 0x298) = zx.o(0)
*(x11_2 + 0x2a8) = zx.o(0)
*(x11_2 + 0x2b8) = zx.o(0)
*(x11_2 + 0x2c8) = zx.o(0)
*(x11_2 + 0x308) = 1
*(x11_2 + 0x3b0) = 1
*(x11_2 + 0x310) = x9_7
*(x11_2 + 0x3b8) = x9_7
*(x11_2 + 0x314) = x10_4
*(x11_2 + 0x3bc) = x10_4
*(x11_2 + 0x318) = x8_11
*(x11_2 + 0x3c0) = x8_11
*(x11_2 + 0x2d8) = 0
*(x11_2 + 0x31c) = x0_4
*(x11_2 + 0x3c4) = x0_4
*(x11_2 + 0x2e0) = result
__builtin_memset(x11_2 + 0x320, 0, 0x68)
*(x11_2 + 0x388) = result
*(x11_2 + 0x418) = zx.o(0)
*(x11_2 + 0x408) = zx.o(0)
*(x11_2 + 0x3f8) = zx.o(0)
*(x11_2 + 0x3e8) = zx.o(0)
*(x11_2 + 0x3d8) = zx.o(0)
*(x11_2 + 0x3c8) = zx.o(0)
*(x11_2 + 0x430) = result
*(x11_2 + 0x428) = 0
*(x11_2 + 0x1f78) = 0
return result
