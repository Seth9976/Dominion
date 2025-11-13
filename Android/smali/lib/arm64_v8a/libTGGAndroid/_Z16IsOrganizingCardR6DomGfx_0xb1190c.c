// 函数: _Z16IsOrganizingCardR6DomGfx
// 地址: 0xb1190c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gDomClient + 0x38)
int32_t x20

x20 = x9 == 0xffffffff ? 0 : x9

int32_t x0_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))

if (x0_1 == 4)
    if (*(arg1 + 0xa4) == 0x44e && *(arg1 + 0xa0) == x20)
        return 1
else if (x0_1 == 1 && *(arg1 + 0xa4) == 0x3eb && *(arg1 + 0xa0) == x20)
    return 1

return 0
