// 函数: _Z10FindBeforePKcS0_S0_
// 地址: 0xba5844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2.d - arg1.d
int32_t x0_1 = strlen(arg3)

if (x0_1 s<= x21)
    int64_t x22_1 = sx.q(x0_1)
    
    for (void* i = &arg1[sx.q(x21)] - x22_1; i u>= arg1; i -= 1)
        if (strncmp(i, arg3, x22_1) == 0)
            return i

return nullptr
