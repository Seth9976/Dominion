// 函数: _Z13PlayerAreaAddR6DomGfx9PlayerWhoi
// 地址: 0xaec18c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2, 0x4d48)

int64_t (* x11)() = x8_1 + 0x409c
int32_t i = *x11
uint64_t result = 0

if (arg3 == 0xffffffff)
    if (i != 0)
        void* x14_1
        
        do
            x14_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
            i = *(x14_1 + 0x213c)
            result = zx.q(result.d + 1)
        while (i != 0)
        
        x11 = x14_1 + 0x213c
else if (arg3 != 0 && i != 0)
    result = 0
    
    do
        void* x11_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
        i = *(x11_1 + 0x213c)
        x11 = x11_1 + 0x213c
        bool cond:2_1 = arg3 - 1 == result.d
        result = zx.q(result.d + 1)
        
        if (cond:2_1)
            break
    while (i != 0)

int32_t x12_2 = *(arg1 + 0x21d0)
*(arg1 + 0x213c) = i
*x11 = x12_2
uint64_t x10_3 = zx.q(*(arg1 + 0x2c))
*(arg1 + 0x2140) = result.d
int32_t i_1

if (x10_3.d u<= 7)
    switch (x10_3)
        case 0
            *(arg1 + 0xa4) = 0x3f1
        label_aec27c:
            i_1 = *(arg1 + 0x213c)
            
            if (i_1 == 0)
                return result
            
        label_aec290:
            int32_t x8_3 = result.d + 1
            
            do
                void* x14_3 = *(gDomClient + 0x205e0) + mulu.dp.d(i_1 & 0xffff, 0x21d8)
                int32_t x13_4 = *(x14_3 + 0x2140)
                *(x14_3 + 0x260) = 1
                *(x14_3 + 0x268) = 0x1e
                *(x14_3 + 0x270) = arg2
                *(x14_3 + 0x2140) = x13_4 + 1
                *(x14_3 + 0x274) = x8_3
                *(x14_3 + 0x278) = zx.o(0)
                *(x14_3 + 0x288) = zx.o(0)
                *(x14_3 + 0x298) = zx.o(0)
                *(x14_3 + 0x2a8) = zx.o(0)
                *(x14_3 + 0x2b8) = zx.o(0)
                *(x14_3 + 0x2c8) = zx.o(0)
                *(x14_3 + 0x2d8) = 0
                *(x14_3 + 0x2e0) = x14_3
                *(x14_3 + 0x308) = 1
                *(x14_3 + 0x310) = 0x1e
                *(x14_3 + 0x318) = arg2
                *(x14_3 + 0x31c) = x8_3
                __builtin_memset(x14_3 + 0x320, 0, 0x68)
                *(x14_3 + 0x388) = x14_3
                *(x14_3 + 0x3b0) = 1
                *(x14_3 + 0x3b8) = 0x1e
                *(x14_3 + 0x3c0) = arg2
                *(x14_3 + 0x3c4) = x8_3
                *(x14_3 + 0x3c8) = zx.o(0)
                *(x14_3 + 0x3d8) = zx.o(0)
                *(x14_3 + 0x3e8) = zx.o(0)
                *(x14_3 + 0x3f8) = zx.o(0)
                *(x14_3 + 0x408) = zx.o(0)
                *(x14_3 + 0x418) = zx.o(0)
                i_1 = *(x14_3 + 0x213c)
                x8_3 += 1
                *(x14_3 + 0x428) = 0
                *(x14_3 + 0x430) = x14_3
                *(x14_3 + 0x1f78) = 0
            while (i_1 != 0)
            
            return result
        case 3, 6, 7
            goto label_aec27c
        case 4
            *(arg1 + 0x1bc) = 0x3f1
            i_1 = *(arg1 + 0x213c)
            
            if (i_1 != 0)
                goto label_aec290
            
            return result
pthread_kill(pthread_self(), 6)
return GfxGetOwner(XNoReturn()) __tailcall
