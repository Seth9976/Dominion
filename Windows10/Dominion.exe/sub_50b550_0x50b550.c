// 函数: sub_50b550
// 地址: 0x50b550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
int32_t* result
char const* const ecx

if (arg1 s>= 3)
    result = (arg1 - 3) * 0x9c + 0x790198
    
    if (*result == arg1)
        return result
    
    char const* const var_4_1 = "ExpansionCampaignDefGet"
    var_8 = 0x672
    ecx = "retval.exp == exp"
else
    char const* const var_4 = "ExpansionCampaignDefGet"
    var_8 = 0x669
    ecx = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_8, "ExpansionCampaignDefGet")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
