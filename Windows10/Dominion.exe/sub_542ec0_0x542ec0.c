// 函数: sub_542ec0
// 地址: 0x542ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
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
int32_t var_14 = 0
*(ecx_2 + eax_4 + 0x17558) |= 2
void var_8
void arg_c80
__builtin_memcpy(&arg_c80, sub_5685f0(&var_8, 0, 0x3ea, &var_8, 8), 0xc84)
__builtin_memcpy(&arg_c80, sub_5671b0(&var_8, arg1, &arg_c80, &var_8, 0x3ea, 0xf, nullptr, 0x3c), 
    0xc84)
uint32_t result = sub_561e00(arg1, 0, arg1 * 2, 0)
CookieCheckFunction(result)
return result
