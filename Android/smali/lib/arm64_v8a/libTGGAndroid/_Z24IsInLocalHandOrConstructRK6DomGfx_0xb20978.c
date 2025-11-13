// 函数: _Z24IsInLocalHandOrConstructRK6DomGfx
// 地址: 0xb20978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 0)
    int32_t x8 = *(gDomClient + 0x38)
    int32_t x8_1
    
    x8_1 = x8 == 0xffffffff ? 0 : x8
    
    if (*(arg1 + 0xa0) == x8_1 && *(arg1 + 0x1f78) == 0 && *(arg1 + 0x3b0) == 1
            && (*(arg1 + 0x3b8) & 0xfffffffe) == 6 && *(arg1 + 0x3bc) == 0x3ea)
        return 1

return 0
