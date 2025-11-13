// 函数: sub_4f9830
// 地址: 0x4f9830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_c = esi
int32_t var_14 = __chkstk(0x1918)
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
int32_t edx_1 = ecx_2 * 0x5a30
char var_14_1 = 0
*(edx_1 + eax_4 + 0x17558) |= 2
int32_t var_18_1 = 0
uint32_t eax_6
int32_t ecx_3
eax_6, ecx_3 = sub_568960(sub_561af0(eax_4, 0, 1, var_14_1), 0, 0x3ea, 0)
int32_t var_14_2 = 0x3b
int32_t var_14_3 = arg1
void arg_c80
uint32_t result = sub_564550(__builtin_memcpy(&var_8, sub_5672b0(esi, &arg_c80, ecx_3), 0xc84))
CookieCheckFunction(result)
return result
