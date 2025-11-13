// 函数: sub_5125f0
// 地址: 0x5125f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t eax_1 = sub_56b780()
sub_590760(eax_1, *(eax + 0xc), *(eax + 4), 2, 1, eax_1, 0)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t result = *(eax_2 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + result + 0x17558) |= 8
    return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
