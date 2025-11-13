// 函数: _Z19DomCreatePile_Other8DomWhere9PlayerWho9ContextId6CardID
// 地址: 0xaee300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(*(gDomClient + 0x205f0))
int64_t x21 = arg3
int32_t x19 = arg2
int32_t x22 = arg1
int32_t x8_1
int64_t x25

if (x24.d != *(gDomClient + 0x205e8))
    x25 = *(gDomClient + 0x205e0)
    x8_1 = *(x25 + x24 * 0x21d8 + 0x21d0)
else
    x25 = *(gDomClient + 0x205e0)
    x8_1 = x24.d + 1
    *(gDomClient + 0x205e8) = x8_1

DomGfx* result = x25 + x24 * 0x21d8
*(gDomClient + 0x205f0) = x8_1
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x24.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
bool z

if ((x22 & 0xfffffffe) != 0x3ee)
    z = x22 == 0x3f0
else
    z = true

int32_t x8_3

x8_3 = z ? 0x15 : 6

*(result + 0x2c) = 3
*(result + 0x58) = x19
*(result + 0x5c) = x22
*(result + 0x60) = x21
*(result + 0x70) = 0
*(result + 0x68) = arg4

if (x22 - 0x44c u> 0x27)
    void* x9_17 = x25 + x24 * 0x21d8
    *(x9_17 + 0x260) = 1
    *(x9_17 + 0x268) = x8_3
    *(x9_17 + 0x26c) = x22
    *(x9_17 + 0x270) = x19
    *(x9_17 + 0x274) = 0
    *(x9_17 + 0x278) = x21
    __builtin_memset(x9_17 + 0x280, 0, 0x60)
    *(x9_17 + 0x2e0) = result
    *(x9_17 + 0x308) = 1
    *(x9_17 + 0x310) = x8_3
    *(x9_17 + 0x314) = x22
    *(x9_17 + 0x318) = x19
    *(x9_17 + 0x31c) = 0
    *(x9_17 + 0x320) = x21
    *(x9_17 + 0x378) = zx.o(0)
    *(x9_17 + 0x368) = zx.o(0)
    *(x9_17 + 0x358) = zx.o(0)
    *(x9_17 + 0x348) = zx.o(0)
    *(x9_17 + 0x338) = zx.o(0)
    *(x9_17 + 0x328) = zx.o(0)
    *(x9_17 + 0x388) = result
    *(x9_17 + 0x3b0) = 1
    *(x9_17 + 0x3b8) = x8_3
    *(x9_17 + 0x3bc) = x22
    *(x9_17 + 0x3c0) = x19
    *(x9_17 + 0x3c4) = 0
    *(x9_17 + 0x3c8) = x21
    __builtin_memset(x9_17 + 0x3d0, 0, 0x60)
else
    int32_t x0_2 = PlayerAreaAdd(result, zx.q(x19), 0xffffffff)
    void* x8_4 = x25 + x24 * 0x21d8
    *(x8_4 + 0x260) = 1
    *(x8_4 + 0x270) = x19
    *(x8_4 + 0x274) = x0_2
    *(x8_4 + 0x268) = 0x1e
    __builtin_memset(x8_4 + 0x278, 0, 0x68)
    *(x8_4 + 0x308) = 1
    *(x8_4 + 0x3b0) = 1
    *(x8_4 + 0x318) = x19
    *(x8_4 + 0x3c0) = x19
    *(x8_4 + 0x31c) = x0_2
    *(x8_4 + 0x3c4) = x0_2
    *(x8_4 + 0x2e0) = result
    *(x8_4 + 0x310) = 0x1e
    __builtin_memset(x8_4 + 0x320, 0, 0x68)
    *(x8_4 + 0x388) = result
    *(x8_4 + 0x3b8) = 0x1e
    __builtin_memset(x8_4 + 0x3c8, 0, 0x68)

void* x8_5 = x25 + x24 * 0x21d8
*(x8_5 + 0x430) = result
*(x8_5 + 0x1f78) = 0
return result
