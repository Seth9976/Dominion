// 函数: sub_502b80
// 地址: 0x502b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_environment_block@_W@@YAHQBQB_WQAPA_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_61e35b5dda50077deb82234c324d389a>, void>::VTable
    * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_61e35b5dda50077deb82234c324d389a>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_61e35b5dda50077deb82234c324d389a>, void>::VTable
    * const* var_80 = &var_a4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_2d2fcebeb8a5e19a5eee2b041e746369>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
int32_t var_7c = 0xad
int32_t var_78 = 0
var_74 = &std::_Func_impl_no_alloc<class <lambda_2d2fcebeb8a5e19a5eee2b041e746369>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0xae
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_61e377bfe7b3779492227fbd332c11d1>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_61e377bfe7b3779492227fbd332c11d1>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_61e377bfe7b3779492227fbd332c11d1>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0xaf
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_a4, 0x30, 3, sub_4f8780)
void* result = sub_4febe0(0x102d)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
