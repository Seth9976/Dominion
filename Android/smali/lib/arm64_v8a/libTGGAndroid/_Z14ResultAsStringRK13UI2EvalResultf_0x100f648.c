// 函数: _Z14ResultAsStringRK13UI2EvalResultf
// 地址: 0x100f648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_1 = zx.q(*arg1 - 1)
XString* entry_x8

if (x9_1.d u<= 9)
    switch (x9_1)
        case 0
            if (*(arg1 + 4) == 0)
                *(arg1 + 0x18)
                return XFormatString("%d") __tailcall
            
            pthread_kill(pthread_self(), 6)
            return ResultAsAssetPtr(XNoReturn()) __tailcall
        case 1
            EvalValEval<float>(arg1, arg2)
            return XFormatString("%g") __tailcall
        case 2, 9
            if (*(arg1 + 4) == 0)
                return XString::XString(entry_x8) __tailcall
            
            pthread_kill(pthread_self(), 6)
            return ResultAsAssetPtr(XNoReturn()) __tailcall

return XString::XString(entry_x8) __tailcall
