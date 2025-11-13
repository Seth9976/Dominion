// 函数: sub_562f10
// 地址: 0x562f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
int32_t var_10 = edx
void arg_60
int32_t eax_3 = sub_568780(&arg_60, edx, 0x3ea, &arg_60)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
char var_20 = var_10.b
int128_t arg_28 = 0x46.o
uint32_t arg_ce8
__builtin_memcpy(&arg_ce8, eax_3, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t ecx_2 = __builtin_memcpy(&arg_ce8, 
    sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 9, &arg_28, ecx, var_20, 0), 0xc84)

if (arg3 == 0)
    CookieCheckFunction(arg3)
    return arg3

if (arg3 != 1)
    sub_591930()

int32_t var_1c_1 = ecx_2
sub_5624a0(arg_ce8, 0x3ea)
uint32_t eax_7 = arg_ce8
CookieCheckFunction(eax_7)
return eax_7
