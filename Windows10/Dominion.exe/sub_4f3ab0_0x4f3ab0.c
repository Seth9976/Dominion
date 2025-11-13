// 函数: sub_4f3ab0
// 地址: 0x4f3ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = *(arg2 + 0xbc)
int32_t var_20
char const* const ecx

if (result == *(arg3 + 4))
    result = *(arg2 + 0xc0)
    
    if (result == *(arg3 + 0x40))
        int32_t ebx_1 = *(arg2 + 0xd4)
        sub_4f22d0(arg2, arg3)
        
        if (ebx_1 != *(arg2 + 0xd4))
            result = sub_4f22d0(arg2, arg3)
        
        if (ebx_1 == *(arg2 + 0xd4) || ebx_1 == *(arg2 + 0xd4))
            result.b = 1
            return result
        
        char const* const var_1c_4 = "ValidateNode"
        var_20 = 0x145a
        ecx = "n == node->numEdges"
    else
        char const* const var_1c_1 = "ValidateNode"
        var_20 = 0x144f
        ecx = "node->aiHint == yld.aiHint"
else
    char const* const var_1c = "ValidateNode"
    var_20 = 0x144e
    ecx = "node->choice == yld.choice"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_20, 
    "ValidateNode")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
