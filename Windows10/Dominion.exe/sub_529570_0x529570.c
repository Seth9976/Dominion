// 函数: sub_529570
// 地址: 0x529570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 2, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t eax_3 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_3 + 0x17558) |= 2
void var_8
uint32_t eax_4
int32_t ecx_3
eax_4, ecx_3 = sub_566800(var_8)
int32_t var_c = ecx_3
int32_t var_10 = 0
uint32_t eax_5 = sub_568960(eax_4, 0, 0x3ea, 4)
return sub_561e00(eax_5, 0, eax_5, 0)
