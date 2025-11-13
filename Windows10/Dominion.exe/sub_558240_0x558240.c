// 函数: sub_558240
// 地址: 0x558240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_cdc6ecb770f38bd76a643c810ab6cc0d>, void>::VTable
    * const var_44 = 0xbc
int64_t var_40
__builtin_memset(&var_40, 0, 0x2c)
int128_t var_a4 = var_44.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_bd5b8173b110c2bd8bbcbeae8230c7e4>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
var_74 = &std::_Func_impl_no_alloc<class <lambda_bd5b8173b110c2bd8bbcbeae8230c7e4>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0x7a
int32_t var_34
int128_t var_94 = var_34.o
int32_t var_48 = 0
int64_t var_24
int128_t xmm0_2 = var_24.o
var_44 = &std::_Func_impl_no_alloc<class <lambda_cdc6ecb770f38bd76a643c810ab6cc0d>, void>::`vftable'{for `std::_Func_base<void>'}
var_24:4.d = &var_44
int128_t var_84 = xmm0_2
int64_t var_1c
var_1c.d = 0x7b
var_1c:4.d = 0
int32_t var_8_1 = 0
sub_56a100(&var_a4, &var_74, 0xffffffff, 2, 1, 1, &var_a4, 0x200)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
