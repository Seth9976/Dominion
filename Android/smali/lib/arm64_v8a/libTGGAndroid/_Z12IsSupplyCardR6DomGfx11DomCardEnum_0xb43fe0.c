// 函数: _Z12IsSupplyCardR6DomGfx11DomCardEnum
// 地址: 0xb43fe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x2c)
int32_t x19 = arg2

if (x8 == 3)
    if (*(arg1 + 0x30) == x19)
        return 1
    
    int32_t x9_1 = *(arg1 + 0x70)
    
    if (x9_1 != 0)
        int64_t x10_1 = *(gDomClient + 0x205e0)
        
        if (x10_1 != 0 && (x19 == 0 || (CardIs(gDomClient + 0x20728, 
                zx.q(*(x10_1 + zx.q(x9_1.w) * 0x21d8 + 0x98)), zx.q(x19)) & 1) != 0))
            return 1
else if (x8 == 0 && (CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), zx.q(x19)) & 1) != 0)
    return 1

return 0
