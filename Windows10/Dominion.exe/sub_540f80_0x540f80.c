// 函数: sub_540f80
// 地址: 0x540f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 0, 0)
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
*(ecx_2 + eax_4 + 0x17558) |= 8
void arg_60
int32_t eax_6 = sub_568780(&arg_60, edx_1, 3, &arg_60)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0xa1.o
void arg_ce8
__builtin_memcpy(&arg_ce8, eax_6, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* eax_7 = sub_563c40(&arg_28, 0xb, 0)
uint32_t result = sub_56e370(eax_7, 1, eax_7, 0)
CookieCheckFunction(result)
return result
