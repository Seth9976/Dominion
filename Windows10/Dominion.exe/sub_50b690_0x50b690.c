// 函数: sub_50b690
// 地址: 0x50b690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = data_cca788
int32_t var_c
char const* const var_8
int32_t* result
char* ecx

if (esi != 0)
    int32_t i = 0
    result = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*result == 0)
            result[1] = esi
            *result = 0xdb9
            result[2] = 0xffffffff
            result[3] = 0
            result[4] = 0
            return result
        
        i += 1
        result = &result[5]
    while (i s< 0x20)
    
    var_8 = "CampaignAddExtra"
    var_c = 0x242
    ecx = "Halt"
else
    var_8 = "CampaignContextFavoredPile"
    var_c = 0x6cf
    ecx = "gCampaignSetup.favoredPile != CARD_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
