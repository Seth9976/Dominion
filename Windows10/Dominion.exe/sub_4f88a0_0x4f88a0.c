// 函数: sub_4f88a0
// 地址: 0x4f88a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 2
    sub_4f8940()
    int32_t var_c90 = 0
    return sub_56bba0(&var_c90, 0, sub_4f8940, &var_c90, 1, 2)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
