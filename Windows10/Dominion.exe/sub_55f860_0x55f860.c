// 函数: sub_55f860
// 地址: 0x55f860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_6 = *(esi_1 * 0x64 + edi + 0x1a50)

if (eax_6 != 0x3ea && eax_6 != 0x3e9)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t var_18 = 0x411
int64_t var_20 = 0
int32_t ebx
ebx.b = eax_6 == 0x3ea
void* eax_8 = sub_573400()
void var_cfc
int32_t esi_2 = sub_590990(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), 0x3ea, &var_cfc)
int32_t var_7c = esi_2
void var_d3c
void* var_14

if ((var_20.d | var_20:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_4c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_48_1 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_28_1 = &var_4c
    int32_t var_8_1 = 0
    int32_t* var_d10_1 = &var_14
    int32_t var_d14_1 = 0
    void* eax_10 = &var_cfc
    var_14 = &var_d3c
    int32_t var_d18_1 = 0
    var_8_1.b = 2
    
    if (var_28_1 != 0)
        int32_t var_d18_2 = (*var_28_1)->vFunc_0(&var_d3c)
        eax_10 = &var_cfc
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    esi_2 = GSI1::OffForSym(eax_10, esi_2, &var_cfc)
    int32_t var_7c_1 = esi_2
    
    if (var_28_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_15
        eax_15.b = var_28_1 != &var_4c
        (*var_28_1)->vFunc_4(eax_15)

if (var_18 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_70_1 = &var_18
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_50_1 = &var_74
    int32_t var_8_3 = 3
    void** var_d10_3 = &var_14
    int32_t var_d14_2 = 0
    void* eax_16 = &var_cfc
    var_14 = &var_d3c
    int32_t var_d18_3 = 0
    var_8_3.b = 5
    
    if (var_50_1 != 0)
        int32_t var_d18_4 = (*var_50_1)->vFunc_0(&var_d3c)
        eax_16 = &var_cfc
    
    var_8_3.b = 3
    esi_2 = GSI1::OffForSym(eax_16, esi_2, &var_cfc)
    
    if (var_50_1 != 0)
        (*var_50_1)->vFunc_4(var_50_1 != &var_74)

int32_t result
result.b = esi_2 s< ebx + 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
