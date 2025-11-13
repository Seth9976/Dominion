// 函数: sub_516290
// 地址: 0x516290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t eax = sub_516f30(ecx)
int32_t i = 0
int32_t* edx = eax + 0xc

do
    if (*edx == 1)
        jump(*(i * 0x26c + eax + 0x10))
    
    i += 1
    edx = &edx[0x9b]
while (i s< 4)

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x30a, "CampaignPieceDefGetFn")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
