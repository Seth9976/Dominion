// 函数: sub_504680
// 地址: 0x504680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7652e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x196c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_197c
uint32_t result = sub_568780(&var_197c, edx, 0x3ea, &var_197c)
void var_cf8
__builtin_memcpy(&var_cf8, result, 0xc84)
int32_t var_78

if (var_78 s> 4)
    void* eax_4 = sub_573400()
    
    if (sub_583fc0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1000) s<= 0 || var_78 - 4 s<= 0)
        result = sub_568c60() - 4
        
        if (result s> 0)
            result = sub_567110(&var_cf8, 7, 0, 5)
    else
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ed5676ca526006098c27f7d549d5a670>, void>::VTable
            * const var_74 = &std::_Func_impl_no_alloc<class <lambda_ed5676ca526006098c27f7d549d5a670>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ed5676ca526006098c27f7d549d5a670>, void>::VTable
            * const* var_50_1 = &var_74
        int32_t var_4c_1 = 0x93
        int32_t var_48_1 = 0
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_061d2653c2380451b8cce306fb21480c>, void>::VTable
            * const var_44 = &std::_Func_impl_no_alloc<class <lambda_061d2653c2380451b8cce306fb21480c>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_061d2653c2380451b8cce306fb21480c>, void>::VTable
            * const* var_20_2 = &var_44
        int32_t var_1c_1 = 0x12
        var_18 = 0
        int32_t var_8_1 = 0
        sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0x200)
        int32_t var_8_2 = 0xffffffff
        result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
