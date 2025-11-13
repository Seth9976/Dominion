// 函数: _Z11CalcDivisorijjRjS_
// 地址: 0xf8af90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = arg2
*arg5 = arg3
uint32_t x9 = *arg4

if (x9 s<= arg1 && arg3 s<= arg1)
    return 1

int32_t x8 = 1

while (true)
    *arg4 = x9 u>> 1
    x8 += 1
    uint32_t x10_1 = *arg5 u>> 1
    *arg5 = x10_1
    x9 = *arg4
    
    if (x9 s<= arg1)
        if (x10_1 s<= arg1)
            break

return zx.q(x8)
