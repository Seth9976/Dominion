// 函数: sub_526a50
// 地址: 0x526a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x2620)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19ac
void var_cf8
__builtin_memcpy(&var_cf8, sub_568780(&var_19ac, edx, 2, &var_19ac), 0xc84)
sub_561940(&var_cf8)
int32_t var_24 = 0
int32_t var_28 = 4
void var_2630
void* var_2c = &var_2630
__builtin_memcpy(&var_19ac, sub_568920(), 0xc84)
uint32_t result_1
uint32_t result = result_1
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_084898625d6b0b449ee1221793ad2881>, void>::VTable
    * ecx_2 = 0x6c
void* var_78

if (var_78 != 0)
    if (result == 0)
        ecx_2 = 0x6e
    
    goto label_526b04

if (result != 0)
    ecx_2 = var_78 + 0x6d
label_526b04:
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_084898625d6b0b449ee1221793ad2881>, void>::VTable
        * const var_44 = ecx_2
    int32_t edx_3 = neg.d(var_78)
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x14)
    int128_t xmm0_1 = var_44.o
    int32_t var_28_1
    __builtin_memset(&var_28_1, 0, 0x14)
    int32_t eax_6 = neg.d(result)
    int128_t var_d28 = xmm0_1
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_562d387227112c831166beca1059eb7d>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    var_74 = &std::_Func_impl_no_alloc<class <lambda_562d387227112c831166beca1059eb7d>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = sbb.d(edx_3, edx_3, var_78 != 0) + 0x45
    int32_t var_34
    int128_t var_d18_1 = var_34.o
    int32_t var_48_1 = 0
    var_44 = &std::_Func_impl_no_alloc<class <lambda_084898625d6b0b449ee1221793ad2881>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_084898625d6b0b449ee1221793ad2881>, void>::VTable
        * const* var_20_1 = &var_44
    int128_t var_d08_1 = var_24.o
    int32_t var_1c_1 = sbb.d(eax_6, eax_6, result != 0) + 0x47
    int32_t var_8_1 = 0
    int32_t var_20_2
    sub_56a100(&var_d28, &var_74, 0xffffffff, 2, 1, 1, &var_d28, var_20_2)
    int32_t var_8_2 = 0xffffffff
    void (__fastcall* var_20_3)(void* arg1) = sub_4f8780
    int32_t var_24_2 = 2
    int32_t var_28_3 = 0x30
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_562d387227112c831166beca1059eb7d>, void>::VTable
        * const* var_2c_2 = &var_74
    result = `eh vector vbase constructor iterator'()

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
