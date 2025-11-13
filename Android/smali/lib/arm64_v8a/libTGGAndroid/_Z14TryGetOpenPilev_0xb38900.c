// 函数: _Z14TryGetOpenPilev
// 地址: 0xb38900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x1f8e4)

if (x8 != 0)
    uint64_t x10_1 = zx.q(x8.w)
    
    if (x10_1.d u< *(gDomClient + 0x205e8))
        void* result = *(gDomClient + 0x205e0) + x10_1 * 0x21d8
        
        if (*(result + 0x21d0) == x8)
            return result
        
        return nullptr

return 0
