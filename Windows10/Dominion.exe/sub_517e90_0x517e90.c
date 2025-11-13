// 函数: sub_517e90
// 地址: 0x517e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca790
int32_t esi = data_cca784
int32_t* eax
int32_t* edi_2

if (ecx != 2)
    eax = data_cca780
    edi_2 = &eax[(ecx + 0xa02) * 2]
else
    edi_2 = data_cca780 + 0x540 + (esi << 0xb)

int32_t var_14
char const* const var_10
char* ecx_3

if (*edi_2 == 0x834)
    if (esi != 4 && esi != 9)
        goto label_517f25
    
    int32_t ecx_4 = edi_2[1]
    
    if (ecx_4 s>= 3)
        eax = (ecx_4 - 3) * 0x9c + 0x790198
        
        if (*eax == ecx_4)
            sub_50b2a0(eax[1])
        label_517f25:
            
            if (esi == 2 || esi == 8)
                sub_515fe0(edi_2[1])
            
            return 
        
        var_10 = "ExpansionCampaignDefGet"
        var_14 = 0x672
        ecx_3 = "retval.exp == exp"
    else
        var_10 = "ExpansionCampaignDefGet"
        var_14 = 0x669
        ecx_3 = "exp >= DOM_EXP_INTRIGUE"
else
    var_10 = "ThemeExpansionBasics"
    var_14 = 0x1f4c
    ecx_3 = "theme.piece == CTHEME_EXPANSION"

sub_63b870(eax, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
