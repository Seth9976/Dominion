// 函数: sub_540a10
// 地址: 0x540a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x190c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void var_1910
int32_t eax_3 = sub_568780(&var_1910, edx, 0x3ea, &var_1910)
char var_14 = 0
void var_c8c
__builtin_memcpy(&var_c8c, eax_3, 0xc84)
uint32_t result = sub_561e00(sub_5674c0(eax_3, 0x3ea, &var_c8c, 0xb, 7, var_14), 0, 5, 0)
CookieCheckFunction(result)
return result
