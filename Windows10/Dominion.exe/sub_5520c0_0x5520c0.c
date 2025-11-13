// 函数: sub_5520c0
// 地址: 0x5520c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d((*(sub_573400() + 0x58)).w)
int32_t ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t esi_1 = edi * 0x64

if (*(esi_1 + ebx + 0x1a50) != 0x474)
    void* eax_1
    eax_1.b = 0
    return eax_1

void* eax_2 = sub_573400()
int32_t ebx_1 = *(eax_2 + 4)

if (edi u>= 0x320)
    eax_2 = sub_591930()

if (*(esi_1 + ebx_1 + 0x1a50) == 0x474)
    uint32_t eax_3
    eax_3.b = *(esi_1 + ebx_1 + 0x1a68) == sub_56b800()
    return eax_3

sub_63b870(eax_2, &data_801800, "card.where == CW_CARD", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1490, "CardWhereCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
