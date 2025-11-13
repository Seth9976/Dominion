// 函数: _Z23UI2ExpressionEvalTreeRTR13UI2ExprTreeRTiRK16UI2StateBindings
// 地址: 0x1010dd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = UI2ExpressionParse(arg1)
char var_28

if (x0 == 2)
    UI2Expr* x0_3 = *(arg1 + 0xa0)
    
    if (x0_3 != 0)
        return UI2ExpressionEval(x0_3, arg2, arg3) __tailcall
    
    XString::XString(&var_28)
    UI2EvalResultMakeString(&var_28)
else
    UI2EvalResult* entry_x8
    
    if (x0 == 3)
        return UI2EvalResult::UI2EvalResult(entry_x8) __tailcall
    *(arg1 + 0x98)
    XString::XString(&var_28)
    UI2EvalResultMakeString(&var_28)
return XString::~XString()
