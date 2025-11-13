// 函数: _Z14DomCreateArrowRK14DomArrowSourcei12DomArrowType
// 地址: 0xba907c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gDomClient + 0x205f0))
int32_t x8_1
int64_t x24

if (x23.d != *(gDomClient + 0x205e8))
    x24 = *(gDomClient + 0x205e0)
    x8_1 = *(x24 + x23 * 0x21d8 + 0x21d0)
else
    x24 = *(gDomClient + 0x205e0)
    x8_1 = x23.d + 1
    *(gDomClient + 0x205e8) = x8_1

void* result = x24 + x23 * 0x21d8
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
*(result + 0x2c) = 7
*(result + 0x224) = *arg1
*(result + 0x220) = arg3
int32_t x8_6 = *arg1
int32_t x8_7
int32_t x9_6
void* __offset(DomArrowSource, 0x4) x10_1

if (x8_6 == 1)
    x8_7 = *(arg1 + 8)
    x10_1 = arg1 + 0xc
    x9_6 = 7
else
    if (x8_6 != 0)
        pthread_kill(pthread_self(), 6)
        PodIconInfo* x0_3
        int64_t x1
        int32_t x2
        int64_t x3
        PodIconInfoEntry* x4
        x0_3, x1, x2, x3, x4 = XNoReturn()
        return TryAddPlayerIcon(x0_3, x1, x2, x3, x4) __tailcall
    
    x10_1 = arg1 + 4
    x8_7 = 0x3f1
    x9_6 = 0x13

int32_t x10_2 = *x10_1
void* x11 = x24 + x23 * 0x21d8
*(x11 + 0x260) = 1
*(x11 + 0x268) = x9_6
*(x11 + 0x26c) = x8_7
*(x11 + 0x274) = arg2
*(x11 + 0x270) = x10_2
*(x11 + 0x278) = zx.o(0)
*(x11 + 0x288) = zx.o(0)
*(x11 + 0x298) = zx.o(0)
*(x11 + 0x2a8) = zx.o(0)
*(x11 + 0x2b8) = zx.o(0)
*(x11 + 0x2c8) = zx.o(0)
*(x11 + 0x308) = 1
*(x11 + 0x3b0) = 1
*(x11 + 0x310) = x9_6
*(x11 + 0x3b8) = x9_6
*(x11 + 0x314) = x8_7
*(x11 + 0x3bc) = x8_7
*(x11 + 0x318) = x10_2
*(x11 + 0x3c0) = x10_2
*(x11 + 0x2d8) = 0
*(x11 + 0x31c) = arg2
*(x11 + 0x3c4) = arg2
*(x11 + 0x2e0) = result
__builtin_memset(x11 + 0x320, 0, 0x68)
*(x11 + 0x388) = result
*(x11 + 0x418) = zx.o(0)
*(x11 + 0x408) = zx.o(0)
*(x11 + 0x3f8) = zx.o(0)
*(x11 + 0x3e8) = zx.o(0)
*(x11 + 0x3d8) = zx.o(0)
*(x11 + 0x3c8) = zx.o(0)
*(x11 + 0x430) = result
*(x11 + 0x428) = 0
*(x11 + 0x1f78) = 0
return result
