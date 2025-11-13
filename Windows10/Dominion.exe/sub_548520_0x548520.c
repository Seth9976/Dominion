// 函数: sub_548520
// 地址: 0x548520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = *(sub_573400() + 0x64)
int32_t var_8
char const* const ecx

if (eax != 0)
    if (*eax == 0)
        int32_t result
        result.b = (eax[3] & 0xfffbffff) == 5
        return result
    
    char const* const var_4_1 = "CardGainCostIs"
    var_8 = 0xf4
    ecx = "c.triggerInfo->type == TRIGGERINFO_GAIN"
else
    char const* const var_4 = "CardGainCostIs"
    var_8 = 0xf3
    ecx = "c.triggerInfo"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp", var_8, 
    "CardGainCostIs")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
