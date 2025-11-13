// 函数: sub_5685f0
// 地址: 0x5685f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7671a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_80 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg2
void* eax_3 = sub_573400()
void* ecx = *(eax_3 + 4)
int32_t eax_4

if (arg3 != 0)
    int32_t edx_1
    
    if (arg3 u> 0x48)
        edx_1 = *(eax_3 + 0xc)
    else
        edx_1 = 0xffffffff
    
    eax_4 = sub_590990(eax_3, edx_1, ecx, arg3, arg4)
else
    eax_4 = sub_590ad0(eax_3, *(eax_3 + 0xc), ecx, arg4)

*(arg4 + 0xc80) = eax_4
void var_b0
void* var_1c
int32_t arg_8

if ((arg_8 | arg5) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_48 = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_44_1 = &arg_8
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_24_1 = &var_48
    int32_t* eax_7 = &var_1c
    int32_t var_8_1 = 0
    int32_t ebx_1 = *(arg4 + 0xc80)
    int32_t* var_84_1 = &var_1c
    int32_t var_88_2 = 0
    var_1c = &var_b0
    int32_t var_8c_1 = 0
    var_8_1.b = 2
    
    if (var_24_1 != 0)
        eax_7 = (*var_24_1)->vFunc_0(&var_b0)
        int32_t* var_8c_2 = eax_7
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    *(arg4 + 0xc80) = GSI1::OffForSym(eax_7, ebx_1, arg4)
    
    if (var_24_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_11
        eax_11.b = var_24_1 != &var_48
        (*var_24_1)->vFunc_4(eax_11)

if (var_20 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_70 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_6c_1 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_4c_1 = &var_70
    void** eax_12 = &var_1c
    int32_t var_8_3 = 3
    int32_t ebx_2 = *(arg4 + 0xc80)
    void** var_84_3 = &var_1c
    int32_t var_88_3 = 0
    var_1c = &var_b0
    int32_t var_8c_3 = 0
    var_8_3.b = 5
    
    if (var_4c_1 != 0)
        eax_12 = (*var_4c_1)->vFunc_0(&var_b0)
        void** var_8c_4 = eax_12
    
    var_8_3.b = 3
    *(arg4 + 0xc80) = GSI1::OffForSym(eax_12, ebx_2, arg4)
    
    if (var_4c_1 != 0)
        (*var_4c_1)->vFunc_4(var_4c_1 != &var_70)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg4)
return arg4
