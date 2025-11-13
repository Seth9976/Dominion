// 函数: sub_554b00
// 地址: 0x554b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766ade
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::VTable
    * var_d4
int32_t __saved_ebp
sub_562880(__security_cookie ^ &__saved_ebp, arg1, var_d4)
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::VTable
    * const* eax_7

if (*(esi_1 * 0x64 + edi + 0x1a50) != 0x3e9)
    var_d4 = &std::_Func_impl_no_alloc<class <lambda_c09725a696a400b13d970322e0f0804e>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::VTable
        ** var_b0_1 = &var_d4
    int32_t var_ac_1 = 0xba
    int32_t var_a8_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_5b0d2a3582c3322ef1d40ee1ce2394bc>, void>::VTable
        * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_5b0d2a3582c3322ef1d40ee1ce2394bc>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_5b0d2a3582c3322ef1d40ee1ce2394bc>, void>::VTable
        * const* var_80_1 = &var_a4
    int32_t var_7c_1 = 0xbc
    int32_t var_78_1 = 0
    int32_t var_8_2 = 1
    sub_56a100(&var_a4, &var_d4, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_7 = &var_d4
else
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6f094eeeaf4a6cbeace8c15f7f72032f>, void>::VTable
        * const* var_50_1 = &var_74
    int32_t var_4c_1 = 0xba
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c4d6c621af2a662aa9c420ce98b6dcbd>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_c4d6c621af2a662aa9c420ce98b6dcbd>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c4d6c621af2a662aa9c420ce98b6dcbd>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0xbb
    int32_t var_18_1 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_7 = &var_74

int32_t var_8_3 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(eax_7, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
