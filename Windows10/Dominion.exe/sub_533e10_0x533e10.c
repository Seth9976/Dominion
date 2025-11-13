// 函数: sub_533e10
// 地址: 0x533e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fstat@U_stat32i64@@@@YAHHQAU_stat32i64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
uint32_t result = sub_562bb0(2, 0, __security_cookie ^ &__saved_ebp)

if (result != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d5f2c09db233b3bf554df1b5d9ed1f69>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_d5f2c09db233b3bf554df1b5d9ed1f69>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d5f2c09db233b3bf554df1b5d9ed1f69>, void>::VTable
        * const* var_50_1 = &var_74
    int32_t var_4c_1 = 0x4e
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_95b251d5f651f5a098128ebd73161ce8>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_95b251d5f651f5a098128ebd73161ce8>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_95b251d5f651f5a098128ebd73161ce8>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x4f
    int32_t var_18_1 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
