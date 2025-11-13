// 函数: sub_52fe90
// 地址: 0x52fe90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_4 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_4 + 0x17558) |= 2
    return sub_56c1b0(eax_4, sub_52ff20, 6, sub_527c90, 2, 1)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
