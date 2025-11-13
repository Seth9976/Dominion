// 函数: sub_584010
// 地址: 0x584010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
uint32_t edx
ecx, edx = __chkstk(0x5f08c)
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
int32_t edi = *(edx * 0x5a30 + ecx + 0x174f4)
int32_t var_5f08c[0x541]
sub_4ebd20(eax_1, ecx, &var_5f08c, edx)
int32_t var_5f090 = arg1
int32_t var_5db88 = 6
sub_586880(&var_5f090, edx, &var_5f08c, &var_5f090, 1, 0)
int32_t var_47b98[0x11edf]
uint32_t result = var_47b98[edx * 0x168c] - edi
CookieCheckFunction(result)
return result
