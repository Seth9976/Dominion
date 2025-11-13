// 函数: sub_538170
// 地址: 0x538170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76613b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1a2c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t var_d84
__builtin_memset(&var_d84, 0, 0x2c)
int128_t var_db8 = 0x35.o
int32_t var_d78
int128_t var_da8 = var_d78.o
int64_t var_d68
int128_t var_d98 = var_d68.o
char var_24 = 0
void var_1a3c
int32_t* result_1
__builtin_memcpy(&result_1, sub_568780(&var_1a3c, edx, 0x3ea, &var_1a3c), 0xc84)
int32_t* result = sub_563c40(&var_db8, 0x11, var_24)

if (result != 0)
    void var_d54
    int32_t eax_5 = memset(&var_d54, 0, 0xc80)
    int32_t var_d8
    int32_t var_d8_1 = var_d8 + 1
    int32_t var_2c_1 = 0
    result_1 = result
    sub_566370(eax_5, 0x3ea, &result_1, var_2c_1)
    void* eax_6 = sub_564930(result.w)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_229ec1de3ce698aac8a44a89d8292feb>, void>::VTable
        * const var_d4 = &std::_Func_impl_no_alloc<class <lambda_229ec1de3ce698aac8a44a89d8292feb>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_229ec1de3ce698aac8a44a89d8292feb>, void>::VTable
        * const* var_b0_1 = &var_d4
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b569e3e4670783221f9aea82c8737581>, void>::VTable
        * const var_a4
    int32_t* var_80_1 = &var_a4
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d89beb3dcdbd5c84689ede49caff869c>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    int32_t var_ac_1 = 0x20
    int32_t var_a8_1 = 0
    var_a4 = &std::_Func_impl_no_alloc<class <lambda_b569e3e4670783221f9aea82c8737581>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_7c_1 = 0x21
    int32_t var_78_1 = 0
    var_74 = &std::_Func_impl_no_alloc<class <lambda_d89beb3dcdbd5c84689ede49caff869c>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x22
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e1f901a740c5c566179bd832750e2189>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_e1f901a740c5c566179bd832750e2189>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e1f901a740c5c566179bd832750e2189>, void>::VTable
        * const* var_20_2 = &var_44
    int32_t var_1c_1 = 0x23
    var_18 = 0
    int32_t var_8_1 = 0
    
    if (eax_6 s> 4)
        eax_6 = 4
    
    sub_56a100(eax_6, &var_d4, 0xffffffff, 4, eax_6, eax_6, &data_cce9d8, 0)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_d4, 0x30, 4, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
