// 函数: sub_515540
// 地址: 0x515540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t* ecx_1 = data_cca780
int32_t var_18
char const* const var_14
int32_t eax
char* ecx_2

if (*ecx_1 == 0)
    int32_t ecx_3 = ecx_1[1]
    
    if (ecx_3 s>= 3)
        eax = ecx_3 - 3
        
        if (*(eax * 0x9c + 0x790198) == ecx_3)
            int32_t eax_1
            int32_t edx
            int32_t edx_1
            eax_1, edx_1 = sub_50a6a0(eax, edx, *(eax * 0x9c + 0x7901cc), 2, 0)
            sub_50a6a0(eax_1, edx_1, *(eax * 0x9c + 0x7901d0), 2, 0)
            sub_58ffd0(&data_cca794, *(eax * 0x9c + 0x7901cc))
            return sub_58ffd0(&data_cca794, *(eax * 0x9c + 0x7901d0))
        
        var_14 = "ExpansionCampaignDefGet"
        var_18 = 0x672
        ecx_2 = "retval.exp == exp"
    else
        var_14 = "ExpansionCampaignDefGet"
        var_18 = 0x669
        ecx_2 = "exp >= DOM_EXP_INTRIGUE"
else
    var_14 = "MissionPiece_ExpMainSetCombo"
    var_18 = 0x192d
    ecx_2 = "setup.params.type == CAMPAIGNTYPE_EXPANSION"

sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
