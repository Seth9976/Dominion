// 函数: sub_55c700
// 地址: 0x55c700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_60ec12953824bf4c800881003a70f93c>, void>::VTable
    * const var_44 = 0x133
int64_t var_40
__builtin_memset(&var_40, 0, 0x2c)
int128_t var_a4 = var_44.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_870c70181dd23999be8e6d6c151b3913>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
var_74 = &std::_Func_impl_no_alloc<class <lambda_870c70181dd23999be8e6d6c151b3913>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0xd7
int32_t var_34
int128_t var_94 = var_34.o
int32_t var_48 = 0
int64_t var_24
int128_t xmm0_2 = var_24.o
var_44 = &std::_Func_impl_no_alloc<class <lambda_60ec12953824bf4c800881003a70f93c>, void>::`vftable'{for `std::_Func_base<void>'}
var_24:4.d = &var_44
int128_t var_84 = xmm0_2
int64_t var_1c
var_1c.d = 0xd8
var_1c:4.d = 0
int32_t var_8_1 = 0
sub_56a100(&var_a4, &var_74, 0xffffffff, 2, 1, 1, &var_a4, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
