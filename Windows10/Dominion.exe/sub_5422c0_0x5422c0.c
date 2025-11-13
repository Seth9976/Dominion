// 函数: sub_5422c0
// 地址: 0x5422c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t ecx
eax, ecx = __chkstk(0x1910)
int32_t var_14 = ecx
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void var_8
int32_t arg_c80
uint32_t result = sub_566e20(&arg_c80, arg1, var_8)
__builtin_memcpy(&var_8, result, 0xc84)

if (arg2 != 3)
    return result

int32_t var_14_2 = 2
arg_c80 = 0
return sub_56bba0(&arg_c80, 0, sub_4f9ea0, &arg_c80, 1, var_14_2)
