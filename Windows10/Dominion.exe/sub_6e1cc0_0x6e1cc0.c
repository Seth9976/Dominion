// 函数: sub_6e1cc0
// 地址: 0x6e1cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* result_1 = sub_6e17c0(ecx)
void* result = result_1
*result = 0xd
int32_t var_10
char const* const ecx_1

if (*arg2 == 3)
    *(result + 0xc) = arg2[1]
    result_1 = arg3
    
    if (*result_1 == 3)
        *(result + 0x10) = *(result_1 + 4)
        result_1 = arg4
        
        if (*result_1 == 3)
            *(result + 0x14) = *(result_1 + 4)
            return result
        
        char const* const var_c_2 = "UI2ExprMakeCurveExpression"
        var_10 = 0xee
        ecx_1 = "resultStyle.result == UIPARSERESULT_SUCCESS_EXPRESSION"
    else
        char const* const var_c_1 = "UI2ExprMakeCurveExpression"
        var_10 = 0xec
        ecx_1 = "resultSecond.result == UIPARSERESULT_SUCCESS_EXPRESSION"
else
    char const* const var_c = "UI2ExprMakeCurveExpression"
    var_10 = 0xea
    ecx_1 = "resultFirst.result == UIPARSERESULT_SUCCESS_EXPRESSION"

sub_63b870(result_1, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2Expr.cpp", var_10, 
    "UI2ExprMakeCurveExpression")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
