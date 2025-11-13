// 函数: sub_560490
// 地址: 0x560490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c90 = 0
void* eax = sub_573400()

if (*eax != 2)
    sub_591930()

void* eax_1 = sub_5768a0(*(eax + 4))
*(eax_1 + 0x14) = *(eax + 0xc)
*(eax_1 + 0x18) = 0xffffffff
int32_t edx = *(eax + 0x10)
int32_t ecx_2 = *(eax + 0x14)
*(eax_1 + 0x1c) = edx
*(eax_1 + 0x20) = ecx_2

if (edx == 0)
    sub_63b870(eax_1, &data_801800, "ability.which.which != CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1394, "UntilStarOfNextTurn")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_3 = *(eax + 0x20)
*(eax_1 + 0x44) = *(eax + 0x1c)
*(eax_1 + 0x48) = ecx_3
*(eax_1 + 0x28) = *(eax + 0x24)
*eax_1 = 2
*(eax_1 + 4) = 2
*(eax_1 + 0x4c) = 2
*(eax_1 + 0x54) = sub_5127a0
*(eax_1 + 0x50) = 0x11
*(eax_1 + 0x58) = sub_5605c0
*(eax_1 + 0x60) = 2
*(eax_1 + 0x70) = 0
*(eax_1 + 0x74) = 0
*(eax_1 + 0x7c) = 0
*(eax_1 + 0x84) = 0x28
sub_56b8e0(eax_1 + 0x78, eax_1 + 0x70, *(eax + 4), eax_1 + 0x74, eax_1 + 0x78, &var_c90)
var_c90 = 0
return sub_56bba0(&var_c90, 0, sub_4fa160, &var_c90, 0x27, 2)
