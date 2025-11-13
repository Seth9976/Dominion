// 函数: sub_56e370
// 地址: 0x56e370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7673f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_fc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_1 = arg2
void* eax_3 = sub_573400()
uint32_t result = sub_576b30(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x2a, 0, 0, 0)

if (result s<= 0 || (arg4 & 1) != 0)
    void* eax_5 = sub_573400()
    result = sub_589340(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), arg3, i_1)
else
    void* var_8c = arg3
    
    if (i_1 s> 0)
        void* i
        
        do
            int64_t var_bc
            __builtin_memset(&var_bc, 0, 0x2c)
            void** var_84_1 = &var_8c
            int128_t var_f0 = 0xb3.o
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e8c79b90763ca2c426eadc8fe5725b23>, void>::VTable
                * const var_88
            int32_t* var_64_1 = &var_88
            void** var_54_1 = &var_8c
            int32_t var_b0
            int128_t var_e0_1 = var_b0.o
            var_88 = &std::_Func_impl_no_alloc<class <lambda_e8c79b90763ca2c426eadc8fe5725b23>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_60_1 = 0x6e
            int32_t var_5c_1 = 0
            int64_t var_a0
            int128_t var_d0_1 = var_a0.o
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_154e1df5e7a9985a98aae7f00e5d7048>, void>::VTable
                * const var_58 = &std::_Func_impl_no_alloc<class <lambda_154e1df5e7a9985a98aae7f00e5d7048>, void>::`vftable'{for `std::_Func_base<void>'}
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_154e1df5e7a9985a98aae7f00e5d7048>, void>::VTable
                * const* var_34_1 = &var_58
            int32_t var_30_1 = 0x6f
            int32_t var_2c_1 = 0
            int32_t var_14_1 = 0
            sub_56a100(&var_f0, &var_88, 0xffffffff, 2, 1, 1, &var_f0, 0x200)
            int32_t var_14_2 = 0xffffffff
            result = `eh vector vbase constructor iterator'(&var_88, 0x30, 2, sub_4f8780)
            i = i_1
            i_1 -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
