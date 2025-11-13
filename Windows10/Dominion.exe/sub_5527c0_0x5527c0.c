// 函数: sub_5527c0
// 地址: 0x5527c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1910)
int32_t esi
int32_t var_c = esi
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
int32_t var_14_1 = ecx_2
int32_t var_18_1 = 0
int32_t var_1c_1 = 0
*(ecx_2 + eax_2 + 0x17558) |= 8
uint32_t eax_3
int32_t ecx_3
eax_3, ecx_3 = sub_568960(eax_2, 0, 0x3ea, var_1c_1)
int32_t var_14_2 = 5
void arg_c80
uint32_t eax_4 = sub_5672b0(esi, &arg_c80, ecx_3)
void var_8
__builtin_memcpy(&var_8, eax_4, 0xc84)
return sub_561af0(eax_4, 0, arg1, 0)
