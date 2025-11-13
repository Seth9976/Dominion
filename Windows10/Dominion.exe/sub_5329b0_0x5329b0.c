// 函数: sub_5329b0
// 地址: 0x5329b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_8
uint32_t eax
int32_t ecx
eax, ecx = sub_566800(var_8)
int32_t var_c = ecx
int32_t var_10 = 0
uint32_t eax_1 = sub_568960(eax, 0, 0x3ea, 8)
sub_561e00(eax_1, 0, eax_1, 0)
void* eax_2 = sub_573400()
char result = sub_593a90(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0x800)

if (result == 0)
    return result

void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 3, 0, 0)
void* eax_4 = sub_573400()
int32_t ecx_4 = *(eax_4 + 0xc)

if (ecx_4 != 0xffffffff)
    int32_t eax_6 = *(eax_4 + 4)
    int32_t ecx_5 = ecx_4 * 0x5a30
    *(ecx_5 + eax_6 + 0x17558) |= 2
    return sub_56e9c0(1)

sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
