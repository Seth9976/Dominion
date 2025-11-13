// 函数: sub_53f880
// 地址: 0x53f880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_56b800()
int32_t var_98 = 0
int64_t var_a0 = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x1c)
int128_t var_d4 = 0xc8.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_baf9a9e21d017a3638a08cc0709280f9>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
var_74 = &std::_Func_impl_no_alloc<class <lambda_baf9a9e21d017a3638a08cc0709280f9>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0x91
int128_t var_c4 = eax_3.o
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_45b0a4e3a4b2f43964e6574c97cb359c>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_45b0a4e3a4b2f43964e6574c97cb359c>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_45b0a4e3a4b2f43964e6574c97cb359c>, void>::VTable
    * const* var_20 = &var_44
int64_t var_84
int128_t var_b4 = var_84.o
int32_t var_1c = 2
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_d4, &var_74, 0xffffffff, 2, 1, 1, &var_d4, 0x200)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
