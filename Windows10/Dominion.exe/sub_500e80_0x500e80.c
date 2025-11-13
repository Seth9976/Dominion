// 函数: sub_500e80
// 地址: 0x500e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76510e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_108
int32_t __saved_ebp
uint32_t result = sub_567a50(__security_cookie ^ &__saved_ebp, arg1, var_108.d)

if (result != 0)
    uint32_t edi = zx.d(result.w)
    int32_t eax_4 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    char eax_6 = sub_563820(*(edi * 0x64 + eax_4 + 0x1a4c), 4)
    int32_t var_38_1 = 0
    int64_t var_40_1 = 0
    int64_t var_30
    __builtin_memset(&var_30, 0, 0x1c)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ceae1caa499d1d2ad0fea8452f71e5b0>, void>::VTable
        * const* eax_8
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_4fa2a011e21e142cf315a5acaedd407a>, void>::VTable
        * const var_44
    int64_t var_24
    
    if (eax_6 == 0)
        var_44 = 0xe1
        int128_t xmm0_4 = var_44.o
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ceae1caa499d1d2ad0fea8452f71e5b0>, void>::VTable
            * var_d4
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ceae1caa499d1d2ad0fea8452f71e5b0>, void>::VTable
            ** var_b0_1 = &var_d4
        var_d4 = &std::_Func_impl_no_alloc<class <lambda_7cb4d2a1269c7bb52e22a7c6f2519fa8>, void>::`vftable'{for `std::_Func_base<void>'}
        var_108 = xmm0_4
        uint32_t result_1 = result
        int32_t var_ac_1 = 0xa6
        int32_t var_a8_1 = 0
        int128_t var_f8_2 = result.o
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d77c4f796b2aeea6f3c37ed17a9b9f06>, void>::VTable
            * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_d77c4f796b2aeea6f3c37ed17a9b9f06>, void>::`vftable'{for `std::_Func_base<void>'}
        uint32_t result_2 = result
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d77c4f796b2aeea6f3c37ed17a9b9f06>, void>::VTable
            * const* var_80_1 = &var_a4
        int128_t var_e8_2 = var_24.o
        int32_t var_7c_1 = 0xa8
        int32_t var_78_1 = 0
        int32_t var_8_2 = 1
        sub_56a100(&var_108, &var_d4, 0xffffffff, 2, 1, 1, &var_108, 0)
        eax_8 = &var_d4
    else
        var_44 = 0xe0
        int128_t xmm0_1 = var_44.o
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ceae1caa499d1d2ad0fea8452f71e5b0>, void>::VTable
            * const var_74
        int32_t* var_50_1 = &var_74
        var_74 = &std::_Func_impl_no_alloc<class <lambda_ceae1caa499d1d2ad0fea8452f71e5b0>, void>::`vftable'{for `std::_Func_base<void>'}
        var_108 = xmm0_1
        uint32_t result_3 = result
        int32_t var_4c_1 = 0xa6
        int32_t var_48_1 = 0
        int128_t var_f8_1 = result.o
        var_44 = &std::_Func_impl_no_alloc<class <lambda_4fa2a011e21e142cf315a5acaedd407a>, void>::`vftable'{for `std::_Func_base<void>'}
        int128_t xmm0_3 = var_24.o
        var_40_1.d = result
        var_24:4.d = &var_44
        int128_t var_e8_1 = xmm0_3
        int64_t var_1c
        var_1c.d = 0xa7
        var_1c:4.d = 0
        int32_t var_8_1 = 0
        sub_56a100(&var_108, &var_74, 0xffffffff, 2, 1, 1, &var_108, 0)
        eax_8 = &var_74
    int32_t var_8_3 = 0xffffffff
    result = `eh vector vbase constructor iterator'(eax_8, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
