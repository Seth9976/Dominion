// 函数: sub_503b70
// 地址: 0x503b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76529b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
uint32_t eax_4 = sub_56b780()
sub_594010(eax_4, *(eax_3 + 0xc), *(eax_3 + 4), eax_4, 1)
sub_561f60(0xffffffff, 0)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_786262eab328e8c39a04fd9f3b04b6f2>, void>::VTable
    * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_786262eab328e8c39a04fd9f3b04b6f2>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_786262eab328e8c39a04fd9f3b04b6f2>, void>::VTable
    * const* var_80 = &var_a4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_bf3854b766e8e853983b956ee5be490a>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
int32_t var_7c = 0xb3
int32_t var_78 = 0
var_74 = &std::_Func_impl_no_alloc<class <lambda_bf3854b766e8e853983b956ee5be490a>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0xb4
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_26e1db710705b2a3d0cd52871fb6676e>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_26e1db710705b2a3d0cd52871fb6676e>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_26e1db710705b2a3d0cd52871fb6676e>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0xb5
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_a4, 0x30, 3, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
