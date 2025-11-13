// 函数: sub_551110
// 地址: 0x551110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x2608)
__security_cookie
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
var_4.q = 0
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
*(ecx_2 + eax_4 + 0x17558) |= 2
int128_t arg_28 = 0x1b.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
void arg_58
void arg_ce0
__builtin_memcpy(&arg_ce0, sub_568780(&arg_58, edx_1, 0x3ea, &arg_58), 0xc84)
int32_t arg_1968
int32_t ecx_4 = __builtin_memcpy(&arg_ce0, 
    sub_563960(&arg_1968, 0, &arg_ce0, &arg_1968, 3, 0x19, &arg_28, 0x12, 0, 0), 0xc84)

if (arg3 != 0)
    int32_t var_1c_1 = 0
    uint32_t eax_9 = sub_56b800()
    sub_5661e0(eax_9, 0x3ea, &arg_ce0, eax_9, ecx_4)

arg_1968 = 4
void arg_196c
memcpy(&arg_196c, &arg_ce0, arg3 << 2)
int32_t arg_25ec = arg3
uint32_t result = sub_56bba0(&arg_1968, 0, sub_5512e0, &arg_1968, 1, 2)
CookieCheckFunction(result)
return result
