// 函数: _Z17DomGfxCreate_HintR6DomGfx11DomHintTypei12DomTokenIconi
// 地址: 0xba89a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(*(gDomClient + 0x205f0))
int32_t x8_1
int64_t x26

if (x25.d != *(gDomClient + 0x205e8))
    x26 = *(gDomClient + 0x205e0)
    x8_1 = *(x26 + x25 * 0x21d8 + 0x21d0)
else
    x26 = *(gDomClient + 0x205e0)
    x8_1 = x25.d + 1
    *(gDomClient + 0x205e8) = x8_1

void* result = x26 + x25 * 0x21d8
*(gDomClient + 0x205f0) = x8_1
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x25.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
*(result + 0x2c) = 8
*(result + 0x234) = arg2
*(result + 0x238) = arg3
*(result + 0x23c) = arg4
*(result + 0x240) = *(arg1 + 0x21d0)
int32_t x8_6 = *(arg1 + 0x2c)
int32_t x8_7
int32_t x9_6
void* __offset(DomGfx, 0x5c) x10_1

if (x8_6 == 0)
    x8_7 = *(arg1 + 0xa0)
    x10_1 = arg1 + 0x98
    x9_6 = 9
else
    if (x8_6 != 3)
        pthread_kill(pthread_self(), 6)
        return ComputePodIconInfo(XNoReturn()) __tailcall
    
    x10_1 = arg1 + 0x5c
    x8_7 = -1
    x9_6 = 7

int32_t x10_2 = *x10_1
void* x11 = x26 + x25 * 0x21d8
*(x11 + 0x260) = 1
*(x11 + 0x268) = x9_6
*(x11 + 0x270) = x8_7
*(x11 + 0x274) = arg5
*(x11 + 0x26c) = x10_2
*(x11 + 0x278) = zx.o(0)
*(x11 + 0x288) = zx.o(0)
*(x11 + 0x298) = zx.o(0)
*(x11 + 0x2a8) = zx.o(0)
*(x11 + 0x2b8) = zx.o(0)
*(x11 + 0x2c8) = zx.o(0)
*(x11 + 0x2d8) = zx.o(0)
*(x11 + 0x31c) = arg5
*(x11 + 0x3c4) = arg5
*(x11 + 0x308) = 1
*(x11 + 0x3b0) = 1
*(x11 + 0x310) = x9_6
*(x11 + 0x3b8) = x9_6
*(x11 + 0x314) = x10_2
*(x11 + 0x3bc) = x10_2
*(x11 + 0x318) = x8_7
*(x11 + 0x3c0) = x8_7
__builtin_memset(x11 + 0x320, 0, 0x70)
*(x11 + 0x1f78) = 0
__builtin_memset(x11 + 0x3c8, 0, 0x70)
return result
