// 函数: sub_5ee7d0
// 地址: 0x5ee7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_14
int32_t result
char const* const ecx

if (arg2 == &data_b80af8)
    char const* const var_10 = "PreSubmitAction"
    var_14 = 0x6c10
    ecx = "&action != &gDomClient.domState.g.yld"
else if (*(arg2 + 4) != 0)
    void* eax = sub_5cc5e0(arg1)
    result = *(eax + 0x4080)
    
    if (result s< 3)
        __builtin_memcpy(result * 0xd18 + 0x1938 + eax, arg2, 0xd18)
        *(eax + 0x4080) += 1
        return result
    
    char const* const var_10_2 = "PreSubmitAction"
    var_14 = 0x6c13
    ecx = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
else
    char const* const var_10_1 = "PreSubmitAction"
    var_14 = 0x6c11
    ecx = "action.choice != CHOICE_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_14, 
    "PreSubmitAction")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
