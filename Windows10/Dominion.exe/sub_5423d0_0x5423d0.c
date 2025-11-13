// 函数: sub_5423d0
// 地址: 0x5423d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7663c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_56e530(0x3ee)
uint32_t result_1 = result

if (result != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8b420d5253135b5b6f7cfd3f34c62896>, void>::VTable
        * const var_44 = 0xb3
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x2c)
    uint32_t* var_70_1 = &result_1
    int128_t var_a8 = var_44.o
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8b5cbc75cc6304c988f08d5048626a21>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    var_40.d = &result_1
    int32_t var_34
    int128_t var_98_1 = var_34.o
    var_74 = &std::_Func_impl_no_alloc<class <lambda_8b5cbc75cc6304c988f08d5048626a21>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x6e
    int32_t var_48_1 = 0
    int64_t var_24
    int128_t var_88_1 = var_24.o
    var_44 = &std::_Func_impl_no_alloc<class <lambda_8b420d5253135b5b6f7cfd3f34c62896>, void>::`vftable'{for `std::_Func_base<void>'}
    var_24:4.d = &var_44
    int64_t var_1c
    var_1c.d = 0x6f
    var_1c:4.d = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_a8, &var_74, 0xffffffff, 2, 1, 1, &var_a8, 0x200)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
