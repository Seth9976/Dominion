// 函数: _Z5IsWayRK6DomGfx
// 地址: 0xb22368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x30) == 0)
    return 0

return zx.q(zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb)) u>> 4) & 1
