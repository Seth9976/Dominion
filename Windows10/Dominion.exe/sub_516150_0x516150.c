// 函数: sub_516150
// 地址: 0x516150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* ecx = data_cca780
int32_t var_14
char const* const var_10
int32_t* eax
char* ecx_1

if (*ecx == 0)
    void* ecx_2 = ecx[1]
    
    if (ecx_2 s>= 3)
        eax = ecx_2 - 3
        
        if (*(eax * 0x9c + 0x790198) == ecx_2)
            int32_t esi_3 = (eax * 0x9c + 0x790198)[arg1 + 0xa]
            
            if (esi_3 == 0)
                return sub_63b5f0("missing campaign csm")
            
            sub_50a6a0(eax, arg1, esi_3, 4, 1)
            void* eax_2 = sub_571b30(esi_3, 0x18)
            
            if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) != 0)
                return sub_50e690(esi_3)
            
            eax = sub_5121c0(esi_3, &var_8)
            
            if (eax.b != 0)
                return sub_512370(esi_3, var_8)
            
            var_10 = "CampaignAddExpCSM"
            var_14 = 0x1b06
            ecx_1 = "Halt"
        else
            var_10 = "ExpansionCampaignDefGet"
            var_14 = 0x672
            ecx_1 = "retval.exp == exp"
    else
        var_10 = "ExpansionCampaignDefGet"
        var_14 = 0x669
        ecx_1 = "exp >= DOM_EXP_INTRIGUE"
else
    var_10 = "CampaignAddExpCSM"
    var_14 = 0x1aee
    ecx_1 = "setup.params.type == CAMPAIGNTYPE_EXPANSION"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
