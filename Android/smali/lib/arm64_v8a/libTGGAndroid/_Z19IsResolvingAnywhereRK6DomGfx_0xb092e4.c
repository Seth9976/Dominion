// 函数: _Z19IsResolvingAnywhereRK6DomGfx
// 地址: 0xb092e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x207a4) != 2)
    return 0

if (*(arg1 + 0x2c) == 0 && *(gDomClient + 0x20758) != 0x2b)
    return zx.q(*(arg1 + 0x98) == *(gDomClient + 0x207a8) ? 1 : 0)

return 0
