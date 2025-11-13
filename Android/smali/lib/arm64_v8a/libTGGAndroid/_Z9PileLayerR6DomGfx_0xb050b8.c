// 函数: _Z9PileLayerR6DomGfx
// 地址: 0xb050b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsBoardPile(zx.q(*(arg1 + 0x5c))) & 1) != 0)
    return 0x2b34

int32_t x8 = *(arg1 + 0x58)
int32_t x10 = *(gDomClient + 0x38)
int32_t x10_1

x10_1 = x10 == 0xffffffff ? 0 : x10

if (x8 == x10_1)
    return 0x2d35

if (*(gDomClient + 0x3c) == x8)
    return 0x2b9a

return 0x2b96
