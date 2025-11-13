// 函数: sub_52cf90
// 地址: 0x52cf90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765d6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::VTable
    * const* eax_5

if (sub_563590(0x101) == 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::VTable
        * var_d4 = &std::_Func_impl_no_alloc<class <lambda_7f201941f44b6b559950cbcd22800520>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::VTable
        ** var_b0_1 = &var_d4
    int32_t var_ac_1 = 0x6a
    int32_t var_a8_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d03a57ee4f3ea464490cce71db823836>, void>::VTable
        * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_d03a57ee4f3ea464490cce71db823836>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d03a57ee4f3ea464490cce71db823836>, void>::VTable
        * const* var_80_1 = &var_a4
    int32_t var_7c_1 = 0xd4
    int32_t var_78_1 = 0x6b
    int32_t var_8_2 = 1
    sub_56a100(&var_a4, &var_d4, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_5 = &var_d4
else
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3574a81ba551a961108761709d1cc0b>, void>::VTable
        * const* var_50_1 = &var_74
    int32_t var_4c_1 = 0x6a
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a011cb8125ca79de7f42e0959bbd3999>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_a011cb8125ca79de7f42e0959bbd3999>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a011cb8125ca79de7f42e0959bbd3999>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x6b
    int32_t var_18_1 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_5 = &var_74

int32_t var_8_3 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(eax_5, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
