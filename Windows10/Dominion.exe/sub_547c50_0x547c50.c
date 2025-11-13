// 函数: sub_547c50
// 地址: 0x547c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
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
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t arg_4 = 0
int32_t var_8 = 0x1b
int32_t arg_14 = 0
void arg_60
int32_t arg_ce8
__builtin_memcpy(&arg_60, sub_568780(&arg_ce8, edx_1, 0x3ea, &arg_ce8), 0xc84)
int32_t eax_7 = arg1
int32_t var_1c_2 = 0
var_4.q = 0
char var_20_1 = 0

if (eax_7 s> 4)
    eax_7 = 4

int64_t arg_c = 0
int32_t var_24_1 = 0x3c
int64_t arg_20 = 0
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = var_8.o
int128_t arg_38 = eax_7.o
int128_t arg_48 = 0.o
int32_t* result =
    sub_563960(&arg_ce8, 0, &arg_60, &arg_ce8, eax_7, 0x19, var_28_1, var_24_1, var_20_1, var_1c_2)
int32_t ecx_4 = __builtin_memcpy(&arg_60, result, 0xc84)

if (arg1 != 0)
    int32_t var_1c_3 = 0
    uint32_t eax_9 = sub_56b800()
    sub_5661e0(eax_9, 0x3ea, &arg_60, eax_9, ecx_4)
    arg_ce8 = 4
    void arg_cec
    memcpy(&arg_cec, &arg_60, arg1 << 2)
    int32_t arg_196c = arg1
    result = sub_56bba0(&arg_ce8, 0, sub_547e20, &arg_ce8, 1, 2)

CookieCheckFunction(result)
return result
