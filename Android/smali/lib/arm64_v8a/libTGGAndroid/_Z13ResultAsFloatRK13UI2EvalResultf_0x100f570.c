// 函数: _Z13ResultAsFloatRK13UI2EvalResultf
// 地址: 0x100f570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int128_t v1

if (x8 == 1)
    if (*(arg1 + 4) != 0)
        pthread_kill(pthread_self(), 6)
        UI2EvalResult* x0_2
        float v0_2
        x0_2, v0_2 = XNoReturn()
        return EvalValEval<float>(x0_2, v0_2) __tailcall
    
    v1.d = float.s(*(arg1 + 0x18))
else
    v1.d = 0f
    
    if (x8 == 2)
        return EvalValEval<float>(arg1, arg2) __tailcall
