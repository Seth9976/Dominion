// 函数: sub_534170
// 地址: 0x534170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = __chkstk(0x25a0)
void var_8
sub_561e00(__security_cookie ^ &var_8, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void* eax_5 = sub_573400()
int32_t var_14_1 = 0xc
uint32_t eax_6 = sub_588db0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 4, 0x3ee, 1, *(eax_5 + 0x28), 
    *(eax_5 + 0x2c), *(eax_5 + 0x30), &var_8, 0)
uint32_t arg_c78 = eax_6
int32_t var_14_2 = 5
void* const var_18_2 = 7
int32_t var_1c_2 = 0xf
void arg_1908
__builtin_memcpy(&arg_1908, &var_8, 0xc84)
void arg_c80
__builtin_memcpy(&var_8, 
    sub_5671b0(eax_6, eax_6, &arg_1908, &arg_c80, 0x3ee, var_1c_2, var_18_2, var_14_2), 0xc84)
uint32_t result = sub_569330(sub_56a0a0(&arg_1908, &var_8), 0x3ee, &arg_1908, 0x18)
CookieCheckFunction(result)
return result
