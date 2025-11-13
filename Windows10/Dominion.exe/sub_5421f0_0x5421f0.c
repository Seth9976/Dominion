// 函数: sub_5421f0
// 地址: 0x5421f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x25a0)
__security_cookie
void* eax_2 = sub_573400()
int32_t var_14 = 0xc
void var_8
uint32_t eax_3 = sub_588db0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 5, 0x3ee, 1, *(eax_2 + 0x28), 
    *(eax_2 + 0x2c), *(eax_2 + 0x30), &var_8, 0)
int32_t var_38 = 5
void* const var_3c = 7
int32_t var_40 = 0xf
uint32_t arg_c78 = eax_3
void arg_1908
__builtin_memcpy(&arg_1908, &var_8, 0xc84)
void arg_c80
__builtin_memcpy(&var_8, 
    sub_5671b0(eax_3, eax_3, &arg_1908, &arg_c80, 0x3ee, var_40, var_3c, var_38), 0xc84)
uint32_t result = sub_569330(sub_56a0a0(&arg_1908, &var_8), 0x3ee, &arg_1908, 0x18)
CookieCheckFunction(result)
return result
