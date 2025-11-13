// 函数: sub_510ed0
// 地址: 0x510ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t eax_1 = sub_50af00(sub_516f30(0x9d6), &var_8)
int32_t eax_3 = sub_516f30(sub_50af60(eax_1, var_8, &data_cc8de0, eax_1))
int32_t i = 0
int32_t* edx_2 = eax_3 + 0xc

do
    if (*edx_2 == 1)
        return (*(i * 0x26c + eax_3 + 0x10))()
    
    i += 1
    edx_2 = &edx_2[0x9b]
while (i s< 4)

sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x30a, "CampaignPieceDefGetFn")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
