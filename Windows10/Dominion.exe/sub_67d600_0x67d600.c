// 函数: sub_67d600
// 地址: 0x67d600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t eax = arg1[1]
int32_t eax_1 = eax
int32_t var_c
char const* const var_8
char const* const ecx

if (eax == 0)
    if (*arg1 == 1)
        return arg1[4]
    
    var_8 = "EvalValGet"
    var_c = 0x8f4
    ecx = "stateType == UISTATE_INT"
else
    ecx = "Halt"
    var_8 = "EvalValEval"
    int32_t temp1_1 = eax_1
    eax_1 -= 1
    
    var_c = temp1_1 == 1 ? 0xca5 : 0xca9

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
