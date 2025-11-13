// 函数: sub_554c70
// 地址: 0x554c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 8
    sub_56c1b0(eax_2, sub_4fb710, 6, sub_554d00, 0x21, 1)
    return sub_567dd0() __tailcall

sub_63b870(eax, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
