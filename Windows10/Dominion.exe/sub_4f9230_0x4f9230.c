// 函数: sub_4f9230
// 地址: 0x4f9230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_ac = ecx
uint32_t eax_3 = sub_568c20()
int64_t var_30
__builtin_memset(&var_30, 0, 0x1c)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_142ce6dde16d404f2ad6d27cc72f7c37>, void>::VTable
    * const var_44
int128_t var_a4 = var_44.o
int64_t var_40
var_40.d = eax_3
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_9ea07f688ce025e59db6d36f8d7f7d46>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_9ea07f688ce025e59db6d36f8d7f7d46>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_9ea07f688ce025e59db6d36f8d7f7d46>, void>::VTable
    * const* var_50 = &var_74
int128_t var_94 = eax_3.o
int32_t var_4c = 0x5e
int32_t var_48
__builtin_memset(&var_48, 0, 0x14)
var_44 = &std::_Func_impl_no_alloc<class <lambda_142ce6dde16d404f2ad6d27cc72f7c37>, void>::`vftable'{for `std::_Func_base<void>'}
int64_t var_24
int128_t var_84 = var_24.o
var_24:4.d = &var_44
int64_t var_1c
var_1c.d = 0x5f
var_1c:4.d = 0
int32_t var_8_1 = 0
sub_56a100(&var_a4, &var_74, 0xffffffff, 2, 1, 1, &var_a4, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
