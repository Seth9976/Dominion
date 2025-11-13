// 函数: sub_55e030
// 地址: 0x55e030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x1988)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
var_4.q = 0
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
*(ecx_3 + eax_4 + 0x17558) |= 2
int128_t arg_28 = 0x1a.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t arg_60
void arg_ce8
__builtin_memcpy(&arg_ce8, sub_568780(&arg_60, edx_1, 0x3ea, &arg_60), 0xc84)
int32_t* result = sub_563c40(&arg_28, 0x12, 0)

if (result != 0)
    uint32_t eax_7 = sub_56b800()
    void* eax_8 = sub_573400()
    int32_t var_1c_2 = 0
    sub_5820c0(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), result, 0x3ea, eax_7, 0xb, 4, *(eax_8 + 0x28), 
        *(eax_8 + 0x2c), 0, nullptr)
    arg_60 = 1
    int32_t* result_1 = result
    int32_t arg_ce4 = 1
    result = sub_56bba0(&arg_60, 0, sub_56f110, &arg_60, 1, 2)

CookieCheckFunction(result)
return result
