// 函数: sub_55f210
// 地址: 0x55f210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7652e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x196c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_197c
uint32_t result = sub_566320(&var_197c, sub_561af0(&ExceptionList, 0, 2, 0), 5, &var_197c)
void var_cf8
__builtin_memcpy(&var_cf8, result, 0xc84)
int32_t var_78

if (var_78 != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8624045888a181983019f7b20d69e321>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_8624045888a181983019f7b20d69e321>, void>::`vftable'{for `std::_Func_base<void>'}
    void* var_70_1 = &var_cf8
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8624045888a181983019f7b20d69e321>, void>::VTable
        * const* var_50_1 = &var_74
    void* var_40_1 = &var_cf8
    int32_t var_4c_1 = 0x30
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_470a0a7f594f4dc154b03d2b4bad57f5>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_470a0a7f594f4dc154b03d2b4bad57f5>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_470a0a7f594f4dc154b03d2b4bad57f5>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x31
    var_18 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0x200)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
