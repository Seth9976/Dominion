// 函数: sub_4fef90
// 地址: 0x4fef90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1908)
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
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
int32_t var_10_1 = 5
int32_t var_14_1 = 0
int32_t var_18 = 7
*(ecx_2 + eax_2 + 0x17558) |= 2
void var_190c
uint32_t result = sub_567110(&var_190c, var_18, var_14_1, var_10_1)
void var_c88
__builtin_memcpy(&var_c88, result, 0xc84)

if (arg1 == 0)
    return result

return sub_561af0(result, 0, 3, 0)
