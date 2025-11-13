// 函数: sub_516570
// 地址: 0x516570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_cca790
int32_t ecx = data_cca780
int32_t edx_1

if (eax != 2)
    edx_1 = ecx + ((eax + 0xa02) << 3)
else
    edx_1 = ecx + 0x540 + (data_cca784 << 0xb)

if (edx_1 != ecx + 0x5018)
    return sub_516630()

int32_t eax_4 = data_cce9a8

if (eax_4 s>= 0x20)
    sub_63b870(eax_4, &data_801800, "gCampaignSetup.numDeferFns < MAX_DEFER_FUNCTIONS", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x930, "CampaignDefer")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_1 = eax_4 * 5
data_cce9a8 = eax_4 + 1
*((ecx_1 << 2) + &data_cce728) = sub_516630
*((ecx_1 << 2) + &data_cce72c) = 2
int32_t result = data_cca790
*((ecx_1 << 2) + &data_cce730) = result
*((ecx_1 << 2) + &data_cce734) = 0
*((ecx_1 << 2) + &data_cce738) = 0
return result
