// 函数: sub_520610
// 地址: 0x520610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 8
    sub_561af0(eax_2, 0, 3, 0)
    void var_c88
    return sub_567110(&var_c88, 7, 0, 5)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
