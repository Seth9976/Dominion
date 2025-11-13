// 函数: sub_5044e0
// 地址: 0x5044e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x2608)
__security_cookie
void* eax_2 = sub_573400()
uint32_t eax_3 = sub_56b780()
sub_594010(eax_3, *(eax_2 + 0xc), *(eax_2 + 4), eax_3, 1)
sub_561f60(0xffffffff, 0)
void* eax_4 = sub_573400()
int32_t var_24 = 0xc
void arg_58
uint32_t eax_5 = sub_588db0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 3, 0x3ee, 1, *(eax_4 + 0x28), 
    *(eax_4 + 0x2c), *(eax_4 + 0x30), &arg_58, 0)
uint32_t arg_cd8 = eax_5
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int32_t var_1c_1 = 0
char var_20_1 = 0
void arg_ce0
__builtin_memcpy(&arg_ce0, &arg_58, 0xc84)
int32_t var_24_1 = 5
int128_t arg_28
int128_t* var_28_1 = &arg_28
arg_28 = 0xf7.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
void arg_1968
__builtin_memcpy(&arg_1968, 
    sub_563960(&arg_58, 0, &arg_ce0, &arg_58, eax_5, 0x17, var_28_1, var_24_1, var_20_1, var_1c_1), 
    0xc84)
void* eax_8 = sub_573400()
*(eax_8 + 0xc)
*(eax_8 + 4)
sub_582eb0(&arg_1968, arg3, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
uint32_t result = sub_569330(sub_56a0a0(&arg_ce0, &arg_1968), 0x3ee, &arg_ce0, 0x18)
CookieCheckFunction(result)
return result
