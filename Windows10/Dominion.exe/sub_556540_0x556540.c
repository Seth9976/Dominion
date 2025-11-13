// 函数: sub_556540
// 地址: 0x556540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766c55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0x104
int64_t var_20 = 0
void* eax_3 = sub_573400()
int32_t var_cfc
void* result = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x3ea, &var_cfc)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
    * const* ecx_2 = var_20.d | var_20:4.d
void* result_1 = result
void* result_2 = result_1
void var_d3c
void* var_14

if (ecx_2 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_70_1 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_50_1 = &var_74
    int32_t* eax_4 = &var_14
    int32_t var_8_1 = 0
    int32_t* var_d10_1 = &var_14
    int32_t var_d14_1 = 0
    var_14 = &var_d3c
    int32_t var_d18_1 = 0
    var_8_1.b = 2
    
    if (var_50_1 != 0)
        eax_4 = (*var_50_1)->vFunc_0(&var_d3c)
        int32_t* var_d18_2 = eax_4
    
    var_8_1.b = 0
    result = GSI1::OffForSym(eax_4, result_1, &var_cfc)
    int32_t var_8_2 = 0xffffffff
    ecx_2 = var_50_1
    result_1 = result
    void* result_3 = result_1
    
    if (ecx_2 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_7
        eax_7.b = ecx_2 != &var_74
        result, ecx_2 = (*ecx_2)->vFunc_4(eax_7)

if (var_18 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_4c = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_48_1 = &var_18
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_28_1 = &var_4c
    void** eax_8 = &var_14
    int32_t var_8_3 = 3
    void** var_d10_3 = &var_14
    int32_t var_d14_2 = 0
    var_14 = &var_d3c
    int32_t var_d18_3 = 0
    var_8_3.b = 5
    
    if (var_28_1 != 0)
        eax_8 = (*var_28_1)->vFunc_0(&var_d3c)
        void** var_d18_4 = eax_8
    
    var_8_3.b = 3
    result = GSI1::OffForSym(eax_8, result_1, &var_cfc)
    int32_t var_8_4 = 0xffffffff
    ecx_2 = var_28_1
    result_1 = result
    
    if (ecx_2 != 0)
        result, ecx_2 = (*ecx_2)->vFunc_4(ecx_2 != &var_4c)
        int32_t var_28_2 = 0

if (result_1 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_d10_5 = ecx_2
    result = sub_5624a0(var_cfc, 0x3ea)

fsbase->NtTib.ExceptionList = ExceptionList
return result
