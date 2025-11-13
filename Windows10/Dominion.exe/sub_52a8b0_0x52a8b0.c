// 函数: sub_52a8b0
// 地址: 0x52a8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765c15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1974)
int32_t** ebx
int32_t** var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_18 = 0xc08
var_20.q = 0
void* eax_3 = sub_573400()
void var_cfc
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x3ec, &var_cfc)
int32_t esi_1 = eax_4
int32_t var_7c = esi_1
int32_t* var_50
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
    * const var_4c
int32_t* var_48

if ((var_20 | arg1) != 0)
    var_4c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    var_48 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_28_1 = &var_4c
    int32_t* eax_5 = &var_14
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_14
    int32_t* var_28_2 = nullptr
    var_14 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_28_2 != 0)
        eax_5 = (**var_28_2)(&var_50)
        int32_t* var_2c_2 = eax_5
    
    var_8_1.b = 0
    int32_t eax_7
    eax_7, edx_1 = GSI1::OffForSym(eax_5, esi_1, &var_cfc, var_50, var_4c, var_48)
    int32_t var_8_2 = 0xffffffff
    esi_1 = eax_7
    var_7c = esi_1
    
    if (var_28_2 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_9
        eax_9.b = var_28_2 != &var_4c
        edx_1 = (*(*var_28_2 + 0x10))(eax_9)

if (var_18 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_70_1 = &var_18
    var_50 = &var_74
    int32_t*** eax_10 = &var_14
    int32_t var_8_3 = 3
    int32_t*** var_24_3 = &var_14
    int32_t var_28_3 = 0
    var_14 = &var_50
    int32_t var_2c_3 = 0
    var_8_3.b = 5
    int32_t* ecx_6 = var_50
    
    if (ecx_6 != 0)
        eax_10 = (**ecx_6)(&var_50)
        int32_t*** var_2c_4 = eax_10
    
    var_8_3.b = 3
    int32_t eax_12
    eax_12, edx_1 = GSI1::OffForSym(eax_10, esi_1, &var_cfc, var_50, var_4c, var_48)
    int32_t var_8_4 = 0xffffffff
    int32_t* ecx_8 = var_50
    esi_1 = eax_12
    
    if (ecx_8 != 0)
        edx_1 = (*(*ecx_8 + 0x10))(ecx_8 != &var_74)

if (esi_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

void var_1984
__builtin_memcpy(&var_cfc, sub_568780(&var_1984, edx_1, 0x3eb, &var_1984), 0xc84)
int32_t result
result.b = var_7c s> 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
