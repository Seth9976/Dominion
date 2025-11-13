// 函数: sub_618700
// 地址: 0x618700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
int32_t result
char const* const ecx

if (arg2 s>= 0)
    int32_t eax = arg2 * 3
    result = arg1 + (eax << 3)
    
    if (*(arg1 + (eax << 3)) == arg2)
        return result
    
    char const* const var_4_1 = "SMDefLookup"
    var_8 = 0xce67
    ecx = "defs[state].state == state"
else
    char const* const var_4 = "SMDefLookup"
    var_8 = 0xce66
    ecx = "state >= 0"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_8, 
    "SMDefLookup")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
