// 函数: _Z17IsTopOfSupplyPileR6DomGfx
// 地址: 0xafe86c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_2 = *(arg1 + 0x9c)

if (x9_2 != 0)
    uint64_t x9 = zx.q(x9_2.w)
    int64_t x8_1 = *(gDomClient + 0x205e0)
    
    if (*(x8_1 + x9 * 0x21d8 + 0x5c) - 8 u<= 0x3e)
        return zx.q(*(x8_1 + x9 * 0x21d8 + 0x70) == *(arg1 + 0x21d0) ? 1 : 0)

return 0
