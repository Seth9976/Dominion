// 函数: sub_538b10
// 地址: 0x538b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fstat@U_stat32i64@@@@YAHHQAU_stat32i64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_78 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_4791e66fa3a41b9441a007f34b2e16e7>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_4791e66fa3a41b9441a007f34b2e16e7>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_4791e66fa3a41b9441a007f34b2e16e7>, void>::VTable
    * const* var_50 = &var_74
int32_t var_4c = 0x2a
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e066e147efdf50b8ab3c51817271f40c>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_e066e147efdf50b8ab3c51817271f40c>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e066e147efdf50b8ab3c51817271f40c>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0x2b
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
