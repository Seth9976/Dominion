// 函数: sub_50abe0
// 地址: 0x50abe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg3, 0x18)
int32_t eax_2 = *(eax + 0x9c) & 0x940
int32_t edx_2 = (*(eax + 0x98) & 0x7f000400) | eax_2
int32_t var_10
char const* const ecx

if (edx_2 == 0)
    if (arg3 != 0)
        int32_t i
        
        for (i = 0; i s< 0xa; i += 1)
            if (*((data_cca784 << 0xb) + data_cca780 + (i << 2) + 0xc) == arg3)
                return i
        
        return sub_50a6a0(i, edx_2, arg3, 0, arg4)
    
    char const* const var_c_3 = "CampaignKingdomAddSafe"
    var_10 = 0x1ca
    ecx = "what != CARD_NONE"
else
    char const* const var_c_1 = "CampaignKingdomAddSafe"
    var_10 = 0x1c8
    ecx = "!IsLandscape(what)"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_10, "CampaignKingdomAddSafe")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
