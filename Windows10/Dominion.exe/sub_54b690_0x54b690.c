// 函数: sub_54b690
// 地址: 0x54b690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
void var_10
sub_561af0(__security_cookie ^ &var_10, 0, 3, 0)
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
int32_t arg_ce8
int32_t eax_6 = sub_568780(&arg_ce8, edx_1, 0x3ea, &arg_ce8)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int32_t var_1c_3 = 0
char var_20_1 = 0
int32_t var_24_1 = 0x12
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = 0x1a.o
int32_t var_2c = 0x19
int32_t* arg_60
__builtin_memcpy(&arg_60, eax_6, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* result =
    sub_563960(&arg_ce8, 0, &arg_60, &arg_ce8, 1, var_2c, var_28_1, var_24_1, var_20_1, var_1c_3)
__builtin_memcpy(&arg_60, result, 0xc84)

if (arg3 != 0)
    int32_t* edi_1 = arg_60
    
    if (edi_1 != 0)
        uint32_t eax_8 = sub_56b800()
        void* eax_9 = sub_573400()
        int32_t var_1c_4 = 0
        uint32_t eax_10 = sub_5820c0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), edi_1, 0x3ea, eax_8, 0xb, 
            4, *(eax_9 + 0x28), *(eax_9 + 0x2c), 0, nullptr)
        int32_t var_44_1 = 0
        int32_t var_48_1 = 1
        arg_ce8 = 1
        int32_t* arg_cec = edi_1
        int32_t arg_196c = 1
        result = sub_56bd60(eax_10, &arg_ce8, sub_54b870, var_48_1, var_44_1)

CookieCheckFunction(result)
return result
