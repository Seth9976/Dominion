// 函数: sub_50ac80
// 地址: 0x50ac80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14
char const* const ecx_2

if (arg3 != 0xdb1 || arg2 != 0)
    arg1 = 0
    int32_t* ecx_3 = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*ecx_3 == 0)
            *ecx_3 = arg3
            ecx_3[3] = arg4
            ecx_3[1] = arg2
            ecx_3[2] = 0xffffffff
            ecx_3[4] = arg5
            return arg5
        
        arg1 += 1
        ecx_3 = &ecx_3[5]
    while (arg1 s< 0x20)
    
    char const* const var_10_1 = "CampaignAddExtra"
    var_14 = 0x242
    ecx_2 = "Halt"
else
    char const* const var_10 = "CampaignAddExtra"
    var_14 = 0x232
    ecx_2 = "pile != CARD_NONE"

sub_63b870(arg1, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_14, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
