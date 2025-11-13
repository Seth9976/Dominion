// 函数: sub_563430
// 地址: 0x563430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
uint32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
uint32_t var_10 = edx
void arg_60
int32_t eax_3 = sub_568780(&arg_60, edx, 0x3ea, &arg_60)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
char var_20 = var_10.b
int128_t arg_28 = ecx.o
uint32_t arg_ce8
__builtin_memcpy(&arg_ce8, eax_3, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
__builtin_memcpy(&arg_ce8, 
    sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 0x17, &arg_28, 5, var_20, 0), 0xc84)

if (arg3 == 0)
    CookieCheckFunction(arg3)
    return arg3

if (arg3 != 1)
    sub_591930()

uint32_t esi_2 = arg_ce8
var_10 = esi_2

if (esi_2 != 0)
    void* eax_8 = sub_573400()
    *(eax_8 + 0xc)
    *(eax_8 + 4)
    sub_582eb0(&var_10, 1, 0x3ea, 0xb, 7, 0, 0, 0, nullptr, nullptr)

CookieCheckFunction(esi_2)
return esi_2
