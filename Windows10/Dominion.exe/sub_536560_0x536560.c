// 函数: sub_536560
// 地址: 0x536560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = __chkstk(0x190c)
int32_t __saved_ebp
int32_t __saved_esi_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi = __saved_esi_2
int32_t var_10 = ecx
sub_561e00(__saved_esi_2, 0, 3, 0)
void var_1910
int32_t var_c8c
__builtin_memcpy(&var_c8c, sub_569210(&var_1910), 0xc84)
int32_t eax_2 = var_c8c

if (arg1 == 0)
    eax_2 = 0

int32_t var_c_1 = 0

if (eax_2 != 0)
    var_c8c = eax_2
    int32_t var_c_2 = 1

int32_t result = sub_56f1a0(eax_2, &var_c8c, 0x1c, 0)
CookieCheckFunction(result)
return result
