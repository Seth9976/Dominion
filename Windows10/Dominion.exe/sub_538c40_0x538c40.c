// 函数: sub_538c40
// 地址: 0x538c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7660f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1910)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_56b800()
void var_c94
int32_t eax_4 = memset(&var_c94, 0, 0xc80)
int32_t var_18_1 = eax_2 + 1
int32_t var_28 = 0
uint32_t var_c98 = eax_3
sub_566370(eax_4, 0x3ea, &var_c98, var_28)
void var_c99
int32_t eax_5
int32_t ecx_2
eax_5, ecx_2 = sub_56ef50(&var_c99)
int32_t var_8_1 = 0
int32_t var_1c_1 = ecx_2
sub_561e00(eax_5, 0, 2, 0)
void var_1920
sub_569210(&var_1920)
int32_t result = sub_56efb0()
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
