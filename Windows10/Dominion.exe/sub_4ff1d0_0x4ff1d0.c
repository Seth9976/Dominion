// 函数: sub_4ff1d0
// 地址: 0x4ff1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x2608)
__security_cookie
void* eax_2 = sub_573400()
int32_t var_1c = 0xc
void arg_58
uint32_t eax_3 = sub_588db0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 5, 0x3ee, 1, *(eax_2 + 0x28), 
    *(eax_2 + 0x2c), *(eax_2 + 0x30), &arg_58, 0)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int32_t var_1c_1 = 0
char var_20_1 = 0
int32_t var_24_1 = 7
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = 0x13.o
int32_t var_2c_1 = 9
void arg_ce0
__builtin_memcpy(&arg_ce0, &arg_58, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
void arg_1968
__builtin_memcpy(&arg_58, 
    sub_563960(&arg_1968, 0, &arg_ce0, &arg_1968, 2, var_2c_1, var_28_1, var_24_1, var_20_1, 
        var_1c_1), 
    0xc84)
void* eax_6 = sub_573400()
*(eax_6 + 0xc)
int32_t var_c = *(eax_6 + 4)
int32_t ecx_3
int32_t edi_1

if (eax_3 s> 0)
    edi_1, ecx_3 = __memfill_u32(&arg_1968, 0x3ee, eax_3)
int32_t var_1c_2 = 0
void var_10
sub_590de0(&arg_58, eax_3, &arg_1968, 0x12, var_10, __return_addr)
uint32_t result = sub_569330(sub_56a0a0(&arg_ce0, &arg_58), 0x3ee, &arg_ce0, 0x18)
CookieCheckFunction(result)
return result
