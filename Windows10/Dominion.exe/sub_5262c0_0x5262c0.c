// 函数: sub_5262c0
// 地址: 0x5262c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765a58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1970)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1980
uint32_t result = sub_566320(&var_1980, edx, 3, &var_1980)
void var_cf8
__builtin_memcpy(&var_cf8, result, 0xc84)
int32_t var_cfc = 0x3ee
int32_t var_78

if (var_78 s> 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_97957b286da32954df7ec85250b96c35>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_97957b286da32954df7ec85250b96c35>, void>::`vftable'{for `std::_Func_base<void>'}
    void* var_70_1 = &var_cf8
    int32_t* var_6c_1 = &var_cfc
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_97957b286da32954df7ec85250b96c35>, void>::VTable
        * const* var_50_1 = &var_74
    void* var_40_1 = &var_cf8
    int32_t var_4c_1 = 0x3c
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_eae15c7ec8076b123d179ebbaceeb13a>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_eae15c7ec8076b123d179ebbaceeb13a>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t* var_3c_1 = &var_cfc
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_eae15c7ec8076b123d179ebbaceeb13a>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x3d
    var_18 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
