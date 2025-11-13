// 函数: sub_53fbf0
// 地址: 0x53fbf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x190c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
*(ecx_2 + eax_4 + 0x17558) |= 2
void var_1910
int32_t eax_6 = sub_568780(&var_1910, edx_1, 0x3ea, &var_1910)
char var_14_1 = 0
void var_c8c
__builtin_memcpy(&var_c8c, eax_6, 0xc84)
uint32_t result = sub_561e00(sub_5674c0(eax_6, 0x3ea, &var_c8c, 0xb, 7, var_14_1), 0, 3, 0)
CookieCheckFunction(result)
return result
