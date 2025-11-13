// 函数: sub_55b260
// 地址: 0x55b260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c94 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    int32_t var_c90 = 0
    *(ecx_3 + eax_3 + 0x17558) |= 2
    return sub_56beb0(&var_c90, sub_55b310, 9, sub_549e30, 0, &var_c90, 0)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
