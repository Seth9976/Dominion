// 函数: sub_554e80
// 地址: 0x554e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766b41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x199c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19ac
uint32_t result
int32_t edx_1
result, edx_1 = sub_566320(&var_19ac, sub_561af0(&ExceptionList, 0, 1, 0), 1, &var_19ac)
int32_t var_d28
__builtin_memcpy(&var_d28, result, 0xc84)
int32_t var_a8

if (var_a8 != 0)
    int32_t esi_1 = var_d28
    
    if (esi_1 != 0)
        uint32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_5696d0(result, edx_1, esi_1.w, 4, 0)
        char eax_6
        
        if (eax_5.b == 0)
            eax_6 = sub_5696d0(eax_5, edx_2, esi_1.w, 2, 0)
        
        char eax_7
        
        if (eax_5.b != 0 || eax_6 != 0)
            eax_7 = sub_567520()
        
        int32_t var_24_4
        void (__fastcall* var_20_4)(void* arg1)
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::VTable
            * const* eax_9
        
        if ((eax_5.b == 0 && eax_6 == 0) || eax_7 != 0)
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::VTable
                * var_a4 = &std::_Func_impl_no_alloc<class <lambda_6318dde717c644bc75e3794d89844e4b>, void>::`vftable'{for `std::_Func_base<void>'}
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::VTable
                ** var_80_1 = &var_a4
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_3624971adb2078bf1371a5eadcebe510>, void>::VTable
                * const var_74
            int32_t* var_50_1 = &var_74
            int32_t var_a0_1 = esi_1
            int32_t var_7c_1 = 0x13
            int32_t var_78_1 = 0
            var_74 = &std::_Func_impl_no_alloc<class <lambda_3624971adb2078bf1371a5eadcebe510>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_70_1 = esi_1
            int32_t var_4c_1 = 0x12
            int32_t var_48_1 = 0
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_43826269568e2dde352483b0d30496e8>, void>::VTable
                * const var_44 = &std::_Func_impl_no_alloc<class <lambda_43826269568e2dde352483b0d30496e8>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_40_1 = esi_1
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_43826269568e2dde352483b0d30496e8>, void>::VTable
                * const* var_20_5 = &var_44
            int32_t var_1c_1 = 2
            var_18 = 0
            int32_t var_8_2 = 1
            sub_56a100(&var_44, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0x200)
            eax_9 = &var_a4
            var_20_4 = sub_4f8780
            var_24_4 = 3
        else
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::VTable
                * const var_164 = &std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::`vftable'{for `std::_Func_base<void>'}
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c7a16a727dd9a8662e38e3f9ea5d7116>, void>::VTable
                * const* var_140_1 = &var_164
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_327e30c9f4a5a2fb11218a97dea46b5e>, void>::VTable
                * const var_134
            int32_t* var_110_1 = &var_134
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_2d72d03e5d84c0a70741ada7ea4bcb53>, void>::VTable
                * const var_104
            int32_t* var_e0_1 = &var_104
            int32_t var_160_1 = esi_1
            int32_t var_13c_1 = 0x13
            int32_t var_138_1 = 0
            var_134 = &std::_Func_impl_no_alloc<class <lambda_327e30c9f4a5a2fb11218a97dea46b5e>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_130_1 = esi_1
            int32_t var_10c_1 = 0x12
            int32_t var_108_1 = 0
            var_104 = &std::_Func_impl_no_alloc<class <lambda_2d72d03e5d84c0a70741ada7ea4bcb53>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_100_1 = esi_1
            int32_t var_dc_1 = 0xbd
            int32_t var_d8_1 = 0
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b61068a2151d6a69e44533d0cab0ea9c>, void>::VTable
                * const var_d4 = &std::_Func_impl_no_alloc<class <lambda_b61068a2151d6a69e44533d0cab0ea9c>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_d0_1 = esi_1
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_b61068a2151d6a69e44533d0cab0ea9c>, void>::VTable
                * const* var_b0_1 = &var_d4
            int32_t var_ac_1 = 2
            int32_t var_a8_1 = 0
            int32_t var_8_1 = 0
            sub_56a100(&var_d4, &var_164, 0xffffffff, 4, 1, 1, &data_cce9d8, 0x200)
            eax_9 = &var_164
            var_20_4 = sub_4f8780
            var_24_4 = 4
        
        int32_t var_8_3 = 0xffffffff
        result = `eh vector vbase constructor iterator'(eax_9, 0x30, var_24_4, var_20_4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
