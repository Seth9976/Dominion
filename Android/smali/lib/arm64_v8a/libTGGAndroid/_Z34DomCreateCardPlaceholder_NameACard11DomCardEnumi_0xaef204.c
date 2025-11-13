// 函数: _Z34DomCreateCardPlaceholder_NameACard11DomCardEnumi
// 地址: 0xaef204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gDomClient + 0x205f0))
int64_t x8_1
int32_t x9

if (x23.d != *(gDomClient + 0x205e8))
    x8_1 = *(gDomClient + 0x205e0)
    x9 = *(x8_1 + x23 * 0x21d8 + 0x21d0)
else
    x8_1 = *(gDomClient + 0x205e0)
    x9 = x23.d + 1
    *(gDomClient + 0x205e8) = x9

void* x20 = x8_1 + x23 * 0x21d8
*(gDomClient + 0x205f0) = x9
int64_t result = memset(x20, 0, 0x21d0)
*(x20 + 0x21d0) = x23.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
*(x20 + 0x170) = arg1
*(x20 + 0x2c) = 1
*(x20 + 0x174) = 2
*(x20 + 0x260) = 1
*(x20 + 0x268) = 0x20
*(x20 + 0x270) = 0xffffffff
*(x20 + 0x274) = arg2
*(x20 + 0x278) = zx.o(0)
*(x20 + 0x288) = zx.o(0)
*(x20 + 0x298) = zx.o(0)
*(x20 + 0x2a8) = zx.o(0)
*(x20 + 0x2b8) = zx.o(0)
*(x20 + 0x2c8) = zx.o(0)
*(x20 + 0x308) = 1
*(x20 + 0x3b0) = 1
*(x20 + 0x318) = 0xffffffff
*(x20 + 0x3c0) = 0xffffffff
*(x20 + 0x31c) = arg2
*(x20 + 0x3c4) = arg2
*(x20 + 0x2d8) = 0
*(x20 + 0x2e0) = x20
*(x20 + 0x310) = 0x20
__builtin_memset(x20 + 0x320, 0, 0x68)
*(x20 + 0x388) = x20
*(x20 + 0x3b8) = 0x20
__builtin_memset(x20 + 0x3c8, 0, 0x68)
*(x20 + 0x430) = x20
*(x20 + 0x1f78) = 0
return result
