// 函数: sub_568780
// 地址: 0x568780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int64_t var_24 = 0
void* eax_3 = sub_573400()
void var_cfc
void* var_d10 = &var_cfc
void* ecx = *(eax_3 + 4)
int32_t eax_4

if (arg3 != 0)
    int32_t edx_1
    
    if (arg3 u> 0x48)
        edx_1 = *(eax_3 + 0xc)
    else
        edx_1 = 0xffffffff
    
    eax_4 = sub_590990(eax_3, edx_1, ecx, arg3, var_d10)
else
    eax_4 = sub_590ad0(eax_3, *(eax_3 + 0xc), ecx, var_d10)

int32_t esi_1 = eax_4
int32_t var_7c = esi_1
void var_d3c
void* var_14

if ((var_24.d | var_24:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_4c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_48_1 = &var_24
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_28_1 = &var_4c
    int32_t* eax_7 = &var_14
    int32_t var_8_1 = 0
    int32_t* var_d10_1 = &var_14
    int32_t var_d14_2 = 0
    var_14 = &var_d3c
    int32_t var_d18_1 = 0
    var_8_1.b = 2
    
    if (var_28_1 != 0)
        eax_7 = (*var_28_1)->vFunc_0(&var_d3c)
        int32_t* var_d18_2 = eax_7
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    esi_1 = GSI1::OffForSym(eax_7, esi_1, &var_cfc)
    int32_t var_7c_1 = esi_1
    
    if (var_28_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_11
        eax_11.b = var_28_1 != &var_4c
        (*var_28_1)->vFunc_4(eax_11)

if (var_18 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_70_1 = &var_18
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_50_1 = &var_74
    void** eax_12 = &var_14
    int32_t var_8_3 = 3
    void** var_d10_3 = &var_14
    int32_t var_d14_3 = 0
    var_14 = &var_d3c
    int32_t var_d18_3 = 0
    var_8_3.b = 5
    
    if (var_50_1 != 0)
        eax_12 = (*var_50_1)->vFunc_0(&var_d3c)
        void** var_d18_4 = eax_12
    
    var_8_3.b = 3
    int32_t var_7c_2 = GSI1::OffForSym(eax_12, esi_1, &var_cfc)
    
    if (var_50_1 != 0)
        (*var_50_1)->vFunc_4(var_50_1 != &var_74)

__builtin_memcpy(arg4, &var_cfc, 0xc84)
fsbase->NtTib.ExceptionList = ExceptionList
return arg4
