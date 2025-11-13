// 函数: sub_557a70
// 地址: 0x557a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766c9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_b0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_561af0(&ExceptionList, 0, 3, 0)
uint32_t eax_4 = sub_568c00(2, 0)
uint32_t eax_5 = sub_568c00(2, 0)
char eax_6 = sub_56e1b0(0xe1b)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ffba4c5e1d04fa9cc3b5271ebde04d7f>, void>::VTable
    * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_ffba4c5e1d04fa9cc3b5271ebde04d7f>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_78 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ffba4c5e1d04fa9cc3b5271ebde04d7f>, void>::VTable
    * const* var_80 = &var_a4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8f4d212e3e675a5331276741dfc40dcd>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_8f4d212e3e675a5331276741dfc40dcd>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t ecx_2 = 0x77
int32_t var_48 = 0

if (eax_4 != 0)
    ecx_2 = 0x74

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_899558db24e099d4f97d8db2ab1998a0>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_899558db24e099d4f97d8db2ab1998a0>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_7c = ecx_2
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8f4d212e3e675a5331276741dfc40dcd>, void>::VTable
    * const* var_50 = &var_74
int32_t var_18 = 0
int32_t eax_7 = 0x78

if (eax_5 != 0)
    eax_7 = 0x75

int32_t var_4c = eax_7
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_899558db24e099d4f97d8db2ab1998a0>, void>::VTable
    * const* var_20 = &var_44
int32_t eax_8 = 0x76

if (eax_6 != 0)
    eax_8 = 0x79

int32_t var_1c = eax_8
int32_t var_8_1 = 0
sub_56a100(eax_8, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_a4, 0x30, 3, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
