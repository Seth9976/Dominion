// 函数: _Z17IsResolvingInPlayRK6DomGfx
// 地址: 0xb09348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x207a4) != 2 || *(arg1 + 0x2c) != 0)
    return 0

int32_t x8_3 = 0

if (*(arg1 + 0xa4) == 0x3e9 && *(gDomClient + 0x20758) != 0x2b)
    x8_3 = *(arg1 + 0x98) == *(gDomClient + 0x207a8) ? 1 : 0

return zx.q(x8_3)
