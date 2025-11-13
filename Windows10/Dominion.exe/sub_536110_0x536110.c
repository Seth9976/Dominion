// 函数: sub_536110
// 地址: 0x536110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765fe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
int32_t eax_4 = *(eax_3 + 0xc)
void var_19b8
uint32_t var_24 = &var_19b8
uint32_t result = sub_566240(&var_19b8, edx, 2, var_24, &data_7bf9d0)
void var_cf8
__builtin_memcpy(&var_cf8, result, 0xc84)
int32_t var_78

if (var_78 != 0)
    int64_t var_40_1 = 0
    void* ecx_2 = *(ecx + 4)
    void* eax_6
    eax_6.b = ecx_2 != eax_4
    int32_t var_38_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7161c600b00559ea325e490f3f92a7db>, void>::VTable
        * const var_44 = eax_6 + 0x5c
    int128_t xmm0_1 = var_44.o
    int32_t var_30_1
    __builtin_memset(&var_30_1, 0, 0x1c)
    int128_t var_d34 = xmm0_1
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_15879144b295019a2a564834265dd546>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    char var_cf9
    var_40_1.d = &var_cf9
    var_cf9 = 0
    int128_t var_d24_1 = eax_4.o
    var_74 = &std::_Func_impl_no_alloc<class <lambda_15879144b295019a2a564834265dd546>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x4c
    int32_t var_48_1 = 0
    int128_t var_d14_1 = var_24.o
    var_44 = &std::_Func_impl_no_alloc<class <lambda_7161c600b00559ea325e490f3f92a7db>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7161c600b00559ea325e490f3f92a7db>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_8_1 = 0
    int64_t var_2c_1
    var_2c_1:4.d = 1
    var_2c_1.d = 1
    sub_56a100(&var_d34, &var_74, ecx_2, 2, var_2c_1, &var_d34, 0x200, 0x4d, 0, arg1)
    int32_t var_8_2 = 0xffffffff
    var_2c_1:4.d = 0x30
    var_2c_1.d = &var_74
    int32_t eax_9 = `eh vector vbase constructor iterator'(var_2c_1, 2, sub_4f8780)
    int32_t* ecx_3 = &var_cf8
    
    if (var_cf9 == 0)
        result = sub_569330(eax_9, 0x3ee, ecx_3, 0x18)
    else
        int32_t var_20_4 = 0
        int32_t var_24_3 = 7
        var_2c_1:4.d = 0xb
        result = sub_5674c0(eax_9, 0x3ee, ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
