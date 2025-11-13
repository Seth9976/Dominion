// 函数: _Z14ToggleTristateR11PileIncludei
// 地址: 0xb2f62c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 2)
    *arg1 = arg2 != 1 ? 1 : 0
    return 

if (x8 == 1)
    *arg1 = (arg2 != 0 ? 1 : 0) << 1
    return 

if (x8 == 0)
    *arg1 = arg2 + 1
    return 

pthread_kill(pthread_self(), 6)
uint64_t x0_1
int32_t x1
x0_1, x1 = XNoReturn()
return QueryTristate(x0_1, x1) __tailcall
