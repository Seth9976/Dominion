// 函数: _Z14IsOpponentCardR6DomGfx
// 地址: 0xb0909c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) != 3)
    int32_t x8 = *(arg1 + 0xa0)
    
    if (x8 != 0xffffffff)
        int32_t x9 = *(gDomClient + 0x38)
        int32_t x9_1
        
        x9_1 = x9 == 0xffffffff ? 0 : x9
        
        return zx.q(x8 != x9_1 ? 1 : 0)

return 0
