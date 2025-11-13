// 函数: sub_6548e0
// 地址: 0x6548e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
uint32_t result
char const* const ecx

if (arg2 s>= 0)
    void* eax = sub_64c870(arg1, arg2)
    
    if (eax == 0)
        return sub_64e7a0(sub_64c870(arg1, eax)) __tailcall
    
    result = sub_64e7a0(eax)
    
    if (*(result + 0x1718) == arg1)
        return result
    
    char const* const var_8_3 = "UI2GetChild"
    var_c = 0x1845
    ecx = "child.parent == &ui"
else
    char const* const var_8 = "UI2GetChild"
    var_c = 0x1841
    ecx = "i >= 0"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_c, "UI2GetChild")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
