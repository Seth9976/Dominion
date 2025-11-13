// 函数: sub_5191a0
// 地址: 0x5191a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_50e1c0()
void* result = sub_571b30(eax, 0x18)
int32_t i = (*(result + 0x98) & 0x7f000400) | (*(result + 0x9c) & 0x940)
int32_t var_c
char const* const var_8
char* ecx_6

if (i != 0)
    var_8 = "Theme_PileChangesB_AddVictory"
    var_c = 0x20be
    ecx_6 = "!IsLandscape(what)"
else
    result = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*result == 0)
            *(result + 4) = eax
            *result = 0xdb8
            *(result + 8) = 0xffffffff
            *(result + 0xc) = 0
            *(result + 0x10) = 0
            return result
        
        i += 1
        result += 0x14
    while (i s< 0x20)
    
    var_8 = "CampaignAddExtra"
    var_c = 0x242
    ecx_6 = "Halt"

sub_63b870(result, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
