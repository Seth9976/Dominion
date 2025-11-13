// 函数: _Z11ResultAsIntRK13UI2EvalResultf
// 地址: 0x100f52c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 1)
    return 0

if (*(arg1 + 4) == 0)
    return zx.q(*(arg1 + 0x18))

pthread_kill(pthread_self(), 6)
UI2EvalResult* x0_3
float v0
x0_3, v0 = XNoReturn()
return ResultAsFloat(x0_3, v0) __tailcall
