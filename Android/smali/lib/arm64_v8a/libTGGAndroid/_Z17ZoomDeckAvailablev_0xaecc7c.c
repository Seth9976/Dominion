// 函数: _Z17ZoomDeckAvailablev
// 地址: 0xaecc7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) - 1

if (x8 u> 4)
    return 0

return zx.q(0x19 u>> x8) & 1
