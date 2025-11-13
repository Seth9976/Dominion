// 函数: sub_4ff420
// 地址: 0x4ff420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?SetTaskExecutionResources@ResourceManager@details@Concurrency@@SAXGPAU_GROUP_AFFINITY@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_ec[0x5]
int32_t __saved_ebp
int32_t* result = sub_562880(__security_cookie ^ &__saved_ebp, arg1, var_ec)

if (result != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ecx_1 = *(eax_3 + 0xc)
    void* edi = *(eax_3 + 4)
    int32_t var_d8 = ecx_1
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_1 = var_d8
    
    int32_t eax_4 = esi_1 * 0x64
    sub_576e90(eax_4, edi, &var_d8, ecx_1, *(eax_4 + edi + 0x1a4c), 0)
    result = (*sub_576c00(&var_ec, var_d8)).d
    
    if (result != 0)
        int32_t* result_1 = result
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a9ed7e5469f1f90a467e3e133bc49e76>, void>::VTable
            * const var_d4
        int32_t* var_b0_1 = &var_d4
        int32_t* result_2 = result
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f39bec6eb9f84ab3adc1e5e3aa15b2f1>, void>::VTable
            * const var_a4
        int32_t* var_80_1 = &var_a4
        int32_t* result_3 = result
        int32_t* result_4 = result
        var_d4 = &std::_Func_impl_no_alloc<class <lambda_a9ed7e5469f1f90a467e3e133bc49e76>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t var_ac_1 = 0x9d
        int32_t var_a8_1 = 0
        var_a4 = &std::_Func_impl_no_alloc<class <lambda_f39bec6eb9f84ab3adc1e5e3aa15b2f1>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t var_7c_1 = 0x9e
        int32_t var_78_1 = 0
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_665e067c85eafbbbcb0727b0318b691e>, void>::VTable
            * const var_74 = &std::_Func_impl_no_alloc<class <lambda_665e067c85eafbbbcb0727b0318b691e>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_665e067c85eafbbbcb0727b0318b691e>, void>::VTable
            * const* var_50_1 = &var_74
        int32_t var_4c_1 = 0x9f
        int32_t var_48_1 = 0
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_71628b94f06538a9f84e29068ed75182>, void>::VTable
            * const var_44 = &std::_Func_impl_no_alloc<class <lambda_71628b94f06538a9f84e29068ed75182>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_71628b94f06538a9f84e29068ed75182>, void>::VTable
            * const* var_20_1 = &var_44
        int32_t var_1c_1 = 0xa0
        int32_t var_18_1 = 0
        int32_t var_8_1 = 0
        sub_56a100(&var_44, &var_d4, 0xffffffff, 4, 1, 1, &data_cce9d8, 0)
        int32_t var_8_2 = 0xffffffff
        result = `eh vector vbase constructor iterator'(&var_d4, 0x30, 4, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
