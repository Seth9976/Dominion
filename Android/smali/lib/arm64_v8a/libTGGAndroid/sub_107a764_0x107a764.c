// 函数: sub_107a764
// 地址: 0x107a764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19

if (arg1 != 1)
    int32_t x0_1 = socket(2, 2, 0)
    x19 = x0_1
    
    if (x0_1 == 0xffffffff)
        return zx.q(x19)
else
    int64_t x0
    
    if (arg2 == 1)
        x0 = 2
    else
        if (arg2 != 2)
            pthread_kill(pthread_self(), 6)
            return ov_clear(XNoReturn()) __tailcall
        
        x0 = 0xa
    
    int32_t x0_3 = socket(x0, 1, 0)
    x19 = x0_3
    
    if (x0_3 == 0xffffffff)
        return zx.q(x19)
    
    int32_t var_14 = 1
    setsockopt(zx.q(x19), 6, 1, &var_14, 4)

fcntl(zx.q(x19), 4, zx.q(fcntl(zx.q(x19), 3, 0)) | 0x800)
return zx.q(x19)
