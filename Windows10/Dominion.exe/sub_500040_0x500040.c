// 函数: sub_500040
// 地址: 0x500040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
void var_10
sub_561af0(__security_cookie ^ &var_10, 0, 2, 0)
void* eax_2 = sub_573400()
int32_t var_1c_1 = 0
int32_t var_20 = 0xffffffff
int32_t var_2c
uint32_t var_28
sub_571fa0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0x1000, 1, 0x476, nullptr, var_2c, var_28, 0)
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
int32_t var_1c_2 = 0
int32_t var_20_1 = 4
*(ecx_2 + eax_4 + 0x17558) |= 0x80
int32_t arg_ce8
uint32_t eax_6 = sub_5685f0(&arg_ce8, 0, 0x3ea, &arg_ce8, var_20_1)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int32_t var_1c_3 = 0
char var_20_2 = 0
int32_t var_24_2 = 0x1a
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = 0xdb.o
int32_t var_2c_1 = 0x19
int32_t* arg_60
__builtin_memcpy(&arg_60, eax_6, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* result =
    sub_563960(&arg_ce8, 0, &arg_60, &arg_ce8, 1, var_2c_1, var_28_1, var_24_2, var_20_2, var_1c_3)
__builtin_memcpy(&arg_60, result, 0xc84)

if (arg3 != 0)
    int32_t* edi_1 = arg_60
    
    if (edi_1 != 0)
        int128_t* esi_2 = sub_56b800()
        void* eax_9 = sub_573400()
        int32_t var_1c_4 = 0
        result = sub_5820c0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), edi_1, 0x3ea, esi_2, 0xb, 0, 
            *(eax_9 + 0x28), *(eax_9 + 0x2c), 0, nullptr)
        
        if (result.b != 0)
            int32_t var_1c_5 = 2
            arg_ce8 = 1
            int32_t* arg_cec = edi_1
            int32_t arg_196c = 1
            result = sub_56bba0(&arg_ce8, 0, sub_4ffce0, &arg_ce8, 1, var_1c_5)

CookieCheckFunction(result)
return result
