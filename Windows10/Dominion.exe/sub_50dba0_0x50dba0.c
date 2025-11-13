// 函数: sub_50dba0
// 地址: 0x50dba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_cca780
int32_t ecx_1 = data_cca784 << 0xb
*(ecx_1 + eax + 0x550) |= 1
int32_t eax_1 = data_cca788

if (eax_1 != 0)
    return sub_50d8d0(eax_1, 4, 0x50dc10, eax_1)

sub_63b870(eax_1, &data_801800, "gCampaignSetup.favoredPile != CARD_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x6cf, "CampaignContextFavoredPile")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
