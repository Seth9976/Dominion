// 函数: sub_532240
// 地址: 0x532240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_5 = sub_573400()
sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 2, 1, 0, 0)
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 8
    return sub_56c1b0(sub_561af0(eax_2, 0, 1, 0), sub_5322d0, 0xc, 0, 0, 1)

sub_63b870(eax, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
