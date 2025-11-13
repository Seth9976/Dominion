// 函数: sub_524e30
// 地址: 0x524e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
int32_t esi
int32_t var_c = esi
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
int32_t var_14_1 = ecx_2
int32_t var_18_1 = 0
int32_t var_1c_1 = 0
*(ecx_2 + eax_4 + 0x17558) |= 8
uint32_t eax_5
int32_t ecx_3
eax_5, ecx_3 = sub_568960(eax_4, 0, 0x3ea, var_1c_1)
int32_t var_14_2 = 0x3c
void var_8
void arg_c80
int32_t esi_2 = __builtin_memcpy(&var_8, sub_5672b0(esi, &arg_c80, ecx_3), 0xc84)
void* eax_7 = sub_573400()
int32_t var_14_3 = 0xc
int32_t var_18_4 = 0
uint32_t eax_9
int32_t ecx_6
eax_9, ecx_6 = sub_568960(
    sub_588db0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), arg1, 0x3ea, 0, 0, 0, nullptr, &arg_c80, 0), 0, 
    0x3ea, 0)
int32_t var_14_4 = 0x3b
uint32_t eax_10 = sub_5672b0(esi_2, &arg_c80, ecx_6)
__builtin_memcpy(&var_8, eax_10, 0xc84)
void* result = sub_561af0(eax_10, 0, arg1, 0)
CookieCheckFunction(result)
return result
