// 函数: _Z17DomCreateCardPile9PlayerWho6CardID
// 地址: 0xb2416c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(gDomClient + 0x205f0))
int32_t i_1 = arg2
int32_t x20 = arg1
int32_t x9_1
int64_t x23

if (x22.d != *(gDomClient + 0x205e8))
    x23 = *(gDomClient + 0x205e0)
    x9_1 = *(x23 + x22 * 0x21d8 + 0x21d0)
else
    x23 = *(gDomClient + 0x205e0)
    x9_1 = x22.d + 1
    *(gDomClient + 0x205e8) = x9_1

void* result = x23 + x22 * 0x21d8
*(gDomClient + 0x205f0) = x9_1
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x22.d | *(gDomClient + 0x205f8) << 0x10
int32_t x8_2 = *(gDomClient + 0x205f8)
int32_t x8_3

if (x8_2 == 0xffff)
    x8_3 = 1
else
    x8_3 = x8_2 + 1

*(gDomClient + 0x205f4) += 1
*(gDomClient + 0x205f8) = x8_3
*(result + 0x2c) = 3
*(result + 0x58) = x20
*(result + 0x5c) = 0x474
*(result + 0x68) = i_1
*(result + 0x70) = 0
void* x8_4 = *(gDomClient + 0x205e0)
int32_t i

do
    i = *(x8_4 + 0x21d0)
    x8_4 += 0x21d8
while (i u< 0x10000)
void* x8_5 = x8_4 - 0x21d8

while (*(x8_5 + 0x2c) != 0 || *(x8_5 + 0x98) != i_1 || zx.d(*(x8_5 + 0x168)) != 0)
    void* x11_4 = x8_5 + 0x43a8
    int32_t j
    
    do
        j = *x11_4
        x8_5 += 0x21d8
        x11_4 += 0x21d8
    while (j u< 0x10000)

void* x10_3 = x23 + x22 * 0x21d8
*(x8_5 + 0xd4) = *(result + 0x21d0)
*(x10_3 + 0x260) = 1
*(x10_3 + 0x268) = 0x1d
*(x10_3 + 0x26c) = i_1
*(x10_3 + 0x270) = x20
*(x10_3 + 0x274) = zx.o(0)
*(x10_3 + 0x284) = zx.o(0)
*(x10_3 + 0x294) = zx.o(0)
*(x10_3 + 0x2a4) = zx.o(0)
*(x10_3 + 0x2b4) = zx.o(0)
*(x10_3 + 0x2c4) = zx.o(0)
*(x10_3 + 0x2d4) = zx.o(0)
*(x10_3 + 0x2e4) = 0
*(x10_3 + 0x308) = 1
*(x10_3 + 0x310) = 0x1d
*(x10_3 + 0x314) = i_1
*(x10_3 + 0x318) = x20
*(x10_3 + 0x31c) = zx.o(0)
*(x10_3 + 0x32c) = zx.o(0)
*(x10_3 + 0x33c) = zx.o(0)
*(x10_3 + 0x34c) = zx.o(0)
*(x10_3 + 0x35c) = zx.o(0)
*(x10_3 + 0x36c) = zx.o(0)
*(x10_3 + 0x37c) = zx.o(0)
*(x10_3 + 0x3bc) = i_1
*(x10_3 + 0x3c0) = x20
*(x10_3 + 0x3b0) = 1
*(x10_3 + 0x3b8) = 0x1d
*(x10_3 + 0x38c) = 0
*(x10_3 + 0x1f78) = 0
__builtin_memset(x10_3 + 0x3c4, 0, 0x74)
return result
