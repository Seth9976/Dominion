// 函数: _Z11EvalValEvalIfET_RK13UI2EvalResultf
// 地址: 0x100f5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 4) == 0)
    int32_t x8_1 = *arg1
    
    if (x8_1 == 3)
        double v0
        v0.d = fconvert.s(atof(XString::operator char const*()))
        return v0.d
    
    if (x8_1 == 2)
        return *(arg1 + 0x18)
    
    if (x8_1 == 1)
        return float.s(*(arg1 + 0x18))

pthread_kill(pthread_self(), 6)
UI2EvalResult* x0_3
float v0_1
x0_3, v0_1 = XNoReturn()
return ResultAsImage(x0_3, v0_1) __tailcall
