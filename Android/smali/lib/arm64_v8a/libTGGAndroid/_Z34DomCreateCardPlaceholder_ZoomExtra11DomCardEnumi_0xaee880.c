// 函数: _Z34DomCreateCardPlaceholder_ZoomExtra11DomCardEnumi
// 地址: 0xaee880
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

void* result = x8_1 + x23 * 0x21d8
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
*(result + 0x2c) = 1
*(result + 0x170) = arg1
*(result + 0x174) = 1
*(result + 0x17c) = arg2
return result
