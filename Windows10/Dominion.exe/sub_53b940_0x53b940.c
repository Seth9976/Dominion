// 函数: sub_53b940
// 地址: 0x53b940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76628b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_14c[0x5]
int32_t __saved_ebp
int32_t* result = sub_562880(__security_cookie ^ &__saved_ebp, arg1, var_14c)

if (result != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ecx_1 = *(eax_3 + 0xc)
    void* edi = *(eax_3 + 4)
    int32_t var_138 = ecx_1
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_1 = var_138
    
    int32_t eax_4 = esi_1 * 0x64
    sub_576e90(eax_4, edi, &var_138, ecx_1, *(eax_4 + edi + 0x1a4c), 0)
    int32_t xmm0_1 = (*sub_576c00(&var_14c, var_138)).d
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7c2df02e55ced25f0035d39ac3b15e95>, void>::VTable
        * const var_134 = &std::_Func_impl_no_alloc<class <lambda_7c2df02e55ced25f0035d39ac3b15e95>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7c2df02e55ced25f0035d39ac3b15e95>, void>::VTable
        * const* var_110_1 = &var_134
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d7abde081ab49168691c71e6e99f73cb>, void>::VTable
        * const var_104
    int32_t* var_e0_1 = &var_104
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_56a8213a548187148477789479d19357>, void>::VTable
        * const var_d4
    int32_t* var_b0_1 = &var_d4
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_81becc3eb2cffb4d3284d1ca9795625b>, void>::VTable
        * const var_a4
    int32_t* var_80_1 = &var_a4
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_25ef0cae8dcded6f2e84decd6e26ddd4>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    int32_t var_10c_1 = 0x7c
    int32_t var_108_1 = 0
    var_104 = &std::_Func_impl_no_alloc<class <lambda_d7abde081ab49168691c71e6e99f73cb>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_dc_1 = 0x7d
    int32_t var_d8_1 = 0
    var_d4 = &std::_Func_impl_no_alloc<class <lambda_56a8213a548187148477789479d19357>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_ac_1 = 0x7e
    int32_t var_a8_1 = 0
    var_a4 = &std::_Func_impl_no_alloc<class <lambda_81becc3eb2cffb4d3284d1ca9795625b>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_7c_1 = 0x7f
    int32_t var_78_1 = 0
    var_74 = &std::_Func_impl_no_alloc<class <lambda_25ef0cae8dcded6f2e84decd6e26ddd4>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b5be06dd7ec8e28049418839fed5f2d5>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_b5be06dd7ec8e28049418839fed5f2d5>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b5be06dd7ec8e28049418839fed5f2d5>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x81
    int32_t var_18_1 = 0
    int32_t eax_6 = xmm0_1
    int32_t var_8_1 = 0
    
    if (eax_6 s> 6)
        eax_6 = 6
    
    if (eax_6 s> 6)
        eax_6 = 6
    
    sub_56a100(eax_6, &var_134, 0xffffffff, 6, eax_6, eax_6, &data_cce9d8, 0)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_134, 0x30, 6, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
