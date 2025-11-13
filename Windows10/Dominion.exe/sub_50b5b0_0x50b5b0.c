// 函数: sub_50b5b0
// 地址: 0x50b5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
int32_t* eax
char const* const ecx

if (arg1 s>= 3)
    eax = (arg1 - 3) * 0x9c + 0x790198
    
    if (*eax == arg1)
        return eax[1]
    
    char const* const var_8_1 = "ExpansionCampaignDefGet"
    var_c = 0x672
    ecx = "retval.exp == exp"
else
    char const* const var_8 = "ExpansionCampaignDefGet"
    var_c = 0x669
    ecx = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_c, 
    "ExpansionCampaignDefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
