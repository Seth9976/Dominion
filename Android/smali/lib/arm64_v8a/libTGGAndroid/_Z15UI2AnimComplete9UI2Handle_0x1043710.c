// 函数: _Z15UI2AnimComplete9UI2Handle
// 地址: 0x1043710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int32_t x8_1 = arg1 & 0xffff
    
    if (x8_1 u< *(gUI2 + 8))
        int64_t x9_1 = *gUI2
        
        if (x9_1 != 0 && *(x9_1 + mulu.dp.d(x8_1, 0x19a8) + 0x19a0) == arg1)
            void* x0_1 = UI2TryFindFirst(x9_1 + zx.q(x8_1) * 0x19a8, 0xa)
            
            if (x0_1 != 0)
                return SpineIsComplete(*(x0_1 + 0x13c0)) __tailcall

return 0
