// 函数: _Z16PileAddTokenSlotR6DomGfxS0_i
// 地址: 0xaec680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomGfx, 0x74) x1 = arg2 + 0x74
int32_t i = *x1
int32_t x9 = 0

if (arg3 != 0 && i != 0)
    x9 = 0
    
    do
        void* x15_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
        i = *(x15_1 + 0x213c)
        x1 = x15_1 + 0x213c
        bool cond:0_1 = arg3 - 1 == x9
        x9 += 1
        
        if (cond:0_1)
            break
    while (i != 0)

int32_t x11_2 = *(arg1 + 0x21d0)
*(arg1 + 0x213c) = i
*(arg1 + 0x2140) = x9
*x1 = x11_2
int32_t i_1 = *(arg1 + 0x213c)
uint64_t result = zx.q(x9 + 1)

while (i_1 != 0)
    result = zx.q(result.d + 1)
    void* x12_3 = *(gDomClient + 0x205e0) + mulu.dp.d(i_1 & 0xffff, 0x21d8)
    int32_t x14_1 = *(x12_3 + 0x3b8)
    int32_t x15_2 = *(x12_3 + 0x3bc)
    int32_t x16_1 = *(x12_3 + 0x3c0)
    int32_t x13_2 = *(x12_3 + 0x2140) + 1
    *(x12_3 + 0x260) = 1
    *(x12_3 + 0x268) = x14_1
    *(x12_3 + 0x26c) = x15_2
    *(x12_3 + 0x270) = x16_1
    *(x12_3 + 0x2140) = x13_2
    *(x12_3 + 0x274) = x13_2
    *(x12_3 + 0x278) = zx.o(0)
    *(x12_3 + 0x288) = zx.o(0)
    *(x12_3 + 0x298) = zx.o(0)
    *(x12_3 + 0x2a8) = zx.o(0)
    *(x12_3 + 0x2b8) = zx.o(0)
    *(x12_3 + 0x2c8) = zx.o(0)
    *(x12_3 + 0x310) = x14_1
    *(x12_3 + 0x2d8) = 0
    *(x12_3 + 0x314) = x15_2
    *(x12_3 + 0x318) = x16_1
    *(x12_3 + 0x31c) = x13_2
    *(x12_3 + 0x3c4) = x13_2
    *(x12_3 + 0x2e0) = x12_3
    *(x12_3 + 0x308) = 1
    __builtin_memset(x12_3 + 0x320, 0, 0x68)
    *(x12_3 + 0x388) = x12_3
    *(x12_3 + 0x3b0) = 1
    __builtin_memset(x12_3 + 0x3c8, 0, 0x68)
    i_1 = *(x12_3 + 0x213c)
    *(x12_3 + 0x430) = x12_3
    *(x12_3 + 0x1f78) = 0

return result
