// 函数: sub_5070b0
// 地址: 0x5070b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765330
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ca4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_56b800()
void var_c94
int32_t eax_4 = memset(&var_c94, 0, 0xc80)
int32_t var_18
int32_t var_18_1 = var_18 + 1
uint32_t var_c98 = eax_3
sub_566370(eax_4, 0x3ea, &var_c98, 0)
int32_t var_8_1 = 0
void var_c99
sub_5697d0(sub_56ef50(&var_c99), nullptr, 0, 6, 1, 0, 0, 0, nullptr)
int32_t result = sub_56efb0()
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
