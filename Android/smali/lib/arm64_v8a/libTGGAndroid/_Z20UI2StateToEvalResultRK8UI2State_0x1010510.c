// 函数: _Z20UI2StateToEvalResultRK8UI2State
// 地址: 0x1010510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0xc))

if (x9.d u<= 8)
    switch (x9)
        case 1
            return UI2EvalResultMakeInt(*(arg1 + 0x28)) __tailcall
        case 2
            return UI2EvalResultMakeFloat(*(arg1 + 0x28)) __tailcall
        case 3
            *(arg1 + 0x18)
            **(arg1 + 0x10)
            char var_18
            XString::XString(&var_18)
            UI2EvalResultMakeString(&var_18)
            return XString::~XString()
        case 4
            return UI2EvalResultMakeAsset(*(arg1 + 0x28)) __tailcall
        case 8
            return UI2EvalResultMakeColor(arg1 + 0x28) __tailcall

pthread_kill(pthread_self(), 6)
int64_t* x0_11 = XNoReturn()
XString::~XString()
sub_1101e04(x0_11)
noreturn
