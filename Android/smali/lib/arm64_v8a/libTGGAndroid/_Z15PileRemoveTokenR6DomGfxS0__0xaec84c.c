// 函数: _Z15PileRemoveTokenR6DomGfxS0_
// 地址: 0xaec84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomGfx, 0x74) x11_1 = arg2 + 0x74
int32_t x9 = *x11_1

if (x9 == 0)
label_aec9ec:
    pthread_kill(pthread_self(), 6)
    return PileResetCurved(XNoReturn()) __tailcall

int32_t x10_1 = *(arg1 + 0x21d0)

if (x9 != x10_1)
    void* x14_1
    
    do
        x14_1 = *(gDomClient + 0x205e0) + mulu.dp.d(x9 & 0xffff, 0x21d8)
        x9 = *(x14_1 + 0x213c)
        
        if (x9 == 0)
            goto label_aec9ec
    while (x9 != x10_1)
    
    x11_1 = x14_1 + 0x213c

*x11_1 = *(arg1 + 0x213c)
int32_t i = *(arg1 + 0x213c)
*(arg1 + 0x213c) = 0
void* x14_3

for (; i != 0; i = *(x14_3 + 0x213c))
    int32_t x15_1 = i & 0xffff
    
    if (x15_1 u>= *(gDomClient + 0x205e8))
        break
    
    int64_t x16_2 = *(gDomClient + 0x205e0)
    
    if (*(x16_2 + mulu.dp.d(x15_1, 0x21d8) + 0x21d0) != i)
        break
    
    x14_3 = x16_2 + zx.q(x15_1) * 0x21d8
    int32_t x15_3 = *(x14_3 + 0x2140) - 1
    *(x14_3 + 0x2140) = x15_3
    int32_t x0 = *(arg2 + 0x58)
    int32_t x17_3 = *(arg2 + 0x5c)
    *(x14_3 + 0x260) = 1
    *(x14_3 + 0x268) = 7
    *(x14_3 + 0x274) = x15_3
    *(x14_3 + 0x26c) = x17_3
    *(x14_3 + 0x270) = x0
    *(x14_3 + 0x278) = zx.o(0)
    *(x14_3 + 0x288) = zx.o(0)
    *(x14_3 + 0x298) = zx.o(0)
    *(x14_3 + 0x2a8) = zx.o(0)
    *(x14_3 + 0x2b8) = zx.o(0)
    *(x14_3 + 0x2c8) = zx.o(0)
    *(x14_3 + 0x2d8) = zx.o(0)
    *(x14_3 + 0x314) = x17_3
    *(x14_3 + 0x3bc) = x17_3
    *(x14_3 + 0x318) = x0
    *(x14_3 + 0x3c0) = x0
    *(x14_3 + 0x31c) = x15_3
    *(x14_3 + 0x3c4) = x15_3
    *(x14_3 + 0x308) = 1
    *(x14_3 + 0x310) = 7
    __builtin_memset(x14_3 + 0x320, 0, 0x70)
    *(x14_3 + 0x3b0) = 1
    *(x14_3 + 0x3b8) = 7
    *(x14_3 + 0x1f78) = 0
    __builtin_memset(x14_3 + 0x3c8, 0, 0x70)
