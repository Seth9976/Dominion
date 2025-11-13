// 函数: sub_546f90
// 地址: 0x546f90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
void* ecx = __chkstk(0x1998)
__security_cookie
int32_t arg_1978 = 1
void* arg_cf8 = **(ecx + 4)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int32_t arg_8 = 0xa9
void* eax_4 = sub_573400()
int128_t arg_38 = arg_8.o
int32_t edx = *(eax_4 + 0x2c)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
arg_58.d = *(eax_4 + 0x28)
void* __return_addr_1 = *eax_4
int32_t var_1c = 0
void arg_70
__builtin_memcpy(&arg_70, &arg_cf8, 0xc84)
char var_20 = 0
int32_t var_24 = 0xb
__return_addr = __return_addr_1
int32_t arg_4 = *(eax_4 + 0x10)
arg_58:4.d = edx
uint32_t result = sub_5869d0(&arg_70, &__return_addr, *(eax_4 + 4), *(eax_4 + 0xc), 1, &arg_70, 1, 
    1, 0, 1, &arg_38, var_24, var_20, var_1c)

if (result != 0)
    result = sub_56e370(result, 1, arg_cf8, 0)

CookieCheckFunction(result)
return result
