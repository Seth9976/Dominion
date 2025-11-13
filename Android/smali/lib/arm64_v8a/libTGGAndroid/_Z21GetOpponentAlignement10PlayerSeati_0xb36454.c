// 函数: _Z21GetOpponentAlignement10PlayerSeati
// 地址: 0xb36454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 2)
    if (arg2 == 3)
        return zx.q((arg1 != 1 ? 1 : 0) << 1)
    
    int32_t x8_2 = arg1 << 1
    
    if (x8_2 != arg2)
        if (x8_2 s< arg2)
            return 0
        
        if (x8_2 s> arg2)
            return 2
        
        int64_t lr
        int64_t var_10 = lr
        pthread_kill(pthread_self(), 6)
        int64_t x0_5
        int64_t x1
        x0_5, x1 = XNoReturn()
        return DomOpponentLayoutUpdate(x0_5, x1) __tailcall

return 1
