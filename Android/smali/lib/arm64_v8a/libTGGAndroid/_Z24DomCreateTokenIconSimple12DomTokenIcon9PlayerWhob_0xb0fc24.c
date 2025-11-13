// 函数: _Z24DomCreateTokenIconSimple12DomTokenIcon9PlayerWhob
// 地址: 0xb0fc24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gDomClient + 0x205f0))
int32_t x19 = arg2
int64_t x8_1
int32_t x9

if (x23.d != *(gDomClient + 0x205e8))
    x8_1 = *(gDomClient + 0x205e0)
    x9 = *(x8_1 + x23 * 0x21d8 + 0x21d0)
else
    x8_1 = *(gDomClient + 0x205e0)
    x9 = x23.d + 1
    *(gDomClient + 0x205e8) = x9

DomGfx* result = x8_1 + x23 * 0x21d8
*(gDomClient + 0x205f0) = x9
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
*(result + 0x2c) = 6
*(result + 0x1e0) = arg1
*(result + 0x1e4) = x19
*(result + 0x1e8) = 1
int32_t x0_2 = PlayerAreaAdd(result, zx.q(x19), 0xffffffff)
*(result + 0x260) = 1
*(result + 0x270) = x19
*(result + 0x274) = x0_2
*(result + 0x268) = 0x3f100000013
__builtin_memset(result + 0x278, 0, 0x70)
*(result + 0x308) = 1
*(result + 0x3b0) = 1
*(result + 0x318) = x19
*(result + 0x3c0) = x19
*(result + 0x31c) = x0_2
*(result + 0x3c4) = x0_2
*(result + 0x310) = 0x3f100000013
__builtin_memset(result + 0x320, 0, 0x70)
*(result + 0x3b8) = 0x3f100000013
*(result + 0x1f78) = 0
__builtin_memset(result + 0x3c8, 0, 0x70)
return result
