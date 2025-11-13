// 函数: sub_4fb540
// 地址: 0x4fb540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x25a0)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 8
void* eax_5 = sub_573400()
int32_t var_14_1 = 0xc
void var_8
uint32_t arg_c78 = sub_588db0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 5, 0x3ee, 1, *(eax_5 + 0x28), 
    *(eax_5 + 0x2c), *(eax_5 + 0x30), &var_8, 0)
void arg_1908
__builtin_memcpy(&arg_1908, &var_8, 0xc84)
int32_t var_14_2 = 5
int32_t var_18_2 = 0
int32_t var_1c_2 = 7
void arg_c80
__builtin_memcpy(&var_8, sub_566fc0(&arg_c80, 0x3ee, 0xe), 0xc84)
uint32_t result = sub_569330(sub_56a0a0(&arg_1908, &var_8), 0x3ee, &arg_1908, 0x18)
CookieCheckFunction(result)
return result
