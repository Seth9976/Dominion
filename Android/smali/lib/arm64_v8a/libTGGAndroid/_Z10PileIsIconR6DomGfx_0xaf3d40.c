// 函数: _Z10PileIsIconR6DomGfx
// 地址: 0xaf3d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsBoardPile(zx.q(*(arg1 + 0x5c))) & 1) != 0)
    return 0

int32_t x8 = *(arg1 + 0x5c)

if (x8 - 0x3ea u< 8 || x8 == 0x474)
    return 0

if (x8 != 0x3e9)
    return 1

return zx.q(*(arg1 + 0x58) != *(gDomClient + 0x205c4) ? 1 : 0)
