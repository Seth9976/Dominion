// 函数: sub_5167f0
// 地址: 0x5167f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_cce9a8

if (eax s>= 0x20)
    sub_63b870(eax, &data_801800, "gCampaignSetup.numDeferFns < MAX_DEFER_FUNCTIONS", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x930, "CampaignDefer")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx = eax * 5
data_cce9a8 = eax + 1
*((ecx << 2) + &data_cce728) = 0x516a50
*((ecx << 2) + &data_cce72c) = 3
int32_t result = data_cca790
*((ecx << 2) + &data_cce730) = result
*((ecx << 2) + &data_cce734) = 0
*((ecx << 2) + &data_cce738) = 0
return result
