// 函数: sub_50d0d0
// 地址: 0x50d0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca788
int32_t eax

if (ecx == 0)
    sub_63b870(eax, &data_801800, "gCampaignSetup.favoredPile != CARD_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x6cf, "CampaignContextFavoredPile")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (ecx == 0xc1d)
    eax.b = 1
    return eax

if (ecx == 0xc27)
    eax.b = 0
    return eax

int32_t eax_3
eax_3.b = *(sub_571b30(ecx, 0x17) + 0x90) - 4 u<= 1
return eax_3
