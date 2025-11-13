// 函数: _Z10EvalValGetIfET_12UI2StateTypeRK7EvalVal
// 地址: 0x100ee6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 3)
    double v0_1
    v0_1.d = fconvert.s(atof(XString::operator char const*()))
    return v0_1.d

if (arg1 == 2)
    return *(arg2 + 8)

if (arg1 == 1)
    return float.s(*(arg2 + 8))

pthread_kill(pthread_self(), 6)
XAsset* x0_3
EvalVal* x1
x0_3, x1 = XNoReturn()
return EvalValGet<XAsset*>(x0_3, x1) __tailcall
