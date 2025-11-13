// 函数: _Z11DaysInMonthi5Month
// 地址: 0x1066a44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u<= 0xc)
    int32_t x8_1 = 1 << arg2
    
    if ((x8_1 & 0x15aa) != 0)
        return 0x1f
    
    if ((x8_1 & 0xa50) != 0)
        return 0x1e
    
    if (arg2 == 2)
        if (ror.d(0x51eb850 + arg1 * 0xc28f5c29, 4) u< 0xa3d70b)
            return 0x1d
        
        if (ror.d(0x51eb850 + arg1 * 0xc28f5c29, 2) u>= 0x28f5c29 && (arg1 & 3) == 0)
            return 0x1d
        
        return 0x1c

int64_t lr
int64_t var_10 = lr
pthread_kill(pthread_self(), 6)
Date* x0_4
Date* x1
x0_4, x1 = XNoReturn()
return operator==(x0_4, x1) __tailcall
