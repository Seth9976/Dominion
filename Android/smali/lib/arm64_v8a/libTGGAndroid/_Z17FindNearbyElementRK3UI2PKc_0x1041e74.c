// 函数: _Z17FindNearbyElementRK3UI2PKc
// 地址: 0x1041e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 0x17d0)

if (i != 0)
    void* __offset(UI2, 0x17d0) x21_1 = arg1 + 0x17d0
    
    do
        int32_t x0_1 = UI2SelectByName(zx.q(*(i + 0x19a0)), arg2, *(arg1 + 0x1658))
        
        if (x0_1 != 0)
            return *gUI2 + mulu.dp.d(x0_1 & 0xffff, 0x19a8)
        
        arg1 = *x21_1
        i = *(arg1 + 0x17d0)
        x21_1 = arg1 + 0x17d0
    while (i != 0)

return 0
