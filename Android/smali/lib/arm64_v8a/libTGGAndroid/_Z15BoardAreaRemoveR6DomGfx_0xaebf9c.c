// 函数: _Z15BoardAreaRemoveR6DomGfx
// 地址: 0xaebf9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gDomClient + 0x1f8dc)

if (x9 == 0)
label_aec12c:
    pthread_kill(pthread_self(), 6)
    return CountPlayerAreaItems(XNoReturn()) __tailcall

int32_t x10_1 = *(arg1 + 0x21d0)
int32_t i

if (x9 != x10_1)
    void* x14_1
    
    do
        x14_1 = *(gDomClient + 0x205e0) + mulu.dp.d(x9 & 0xffff, 0x21d8)
        x9 = *(x14_1 + 0x213c)
        
        if (x9 == 0)
            goto label_aec12c
    while (x9 != x10_1)
    
    i = *(arg1 + 0x213c)
    *(x14_1 + 0x213c) = i
    *(arg1 + 0x213c) = 0
    
    if (i != 0)
        goto label_aec118
    
    return 

i = *(arg1 + 0x213c)
*(gDomClient + 0x1f8dc) = i
*(arg1 + 0x213c) = 0

if (i == 0)
    return 

label_aec118:

do
    void* x13_2 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
    int32_t x12_1 = *(x13_2 + 0x2140)
    int32_t x14_2 = *(x13_2 + 0x58)
    *(x13_2 + 0x260) = 1
    *(x13_2 + 0x268) = 6
    *(x13_2 + 0x270) = x14_2
    *(x13_2 + 0x2140) = x12_1 - 1
    *(x13_2 + 0x274) = x12_1 - 1
    *(x13_2 + 0x278) = zx.o(0)
    *(x13_2 + 0x288) = zx.o(0)
    *(x13_2 + 0x298) = zx.o(0)
    *(x13_2 + 0x2a8) = zx.o(0)
    *(x13_2 + 0x2b8) = zx.o(0)
    *(x13_2 + 0x2c8) = zx.o(0)
    *(x13_2 + 0x318) = x14_2
    *(x13_2 + 0x3c0) = x14_2
    *(x13_2 + 0x2d8) = 0
    *(x13_2 + 0x31c) = x12_1 - 1
    *(x13_2 + 0x3c4) = x12_1 - 1
    *(x13_2 + 0x2e0) = x13_2
    *(x13_2 + 0x308) = 1
    *(x13_2 + 0x310) = 6
    __builtin_memset(x13_2 + 0x320, 0, 0x68)
    *(x13_2 + 0x388) = x13_2
    *(x13_2 + 0x3b0) = 1
    *(x13_2 + 0x3b8) = 6
    __builtin_memset(x13_2 + 0x3c8, 0, 0x68)
    i = *(x13_2 + 0x213c)
    *(x13_2 + 0x430) = x13_2
    *(x13_2 + 0x1f78) = 0
while (i != 0)
