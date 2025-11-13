// 函数: sub_5666c0
// 地址: 0x5666c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x2608)
__security_cookie
void arg_58
int32_t eax_3 = sub_568780(&arg_58, edx, 0x3ea, &arg_58)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0x39.o
void arg_1968
__builtin_memcpy(&arg_1968, eax_3, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
uint32_t result_1
__builtin_memcpy(&result_1, 
    sub_563960(&arg_58, 1, &arg_1968, &arg_58, 1, 0x20, &arg_28, 0x15, 0, 0), 0xc84)

if (arg3 == 0)
    CookieCheckFunction(0)
    return 0

void* eax_6 = sub_573400()
int32_t var_1c_1 = 0
sub_579a20(eax_6, &result_1, *(eax_6 + 4), 0x3ea)
uint32_t result = result_1
CookieCheckFunction(result)
return result
