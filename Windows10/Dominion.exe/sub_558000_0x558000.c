// 函数: sub_558000
// 地址: 0x558000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764f81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x25fc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_ca4 = 0x104
int64_t var_cac = 0
void* eax_3 = sub_573400()
void var_1984
int32_t ebx = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x3ea, &var_1984)
int32_t var_d04 = ebx
void* var_ca0
void var_50

if ((var_cac.d | var_cac:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_cd4 = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_cd0_1 = &var_cac
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_cb0_1 = &var_cd4
    int32_t* eax_5 = &var_ca0
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_ca0
    int32_t var_28_1 = 0
    var_ca0 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_cb0_1 != 0)
        eax_5 = (*var_cb0_1)->vFunc_0(&var_50)
        int32_t* var_2c_2 = eax_5
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    ebx = GSI1::OffForSym(eax_5, ebx, &var_1984)
    int32_t var_d04_1 = ebx
    
    if (var_cb0_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_9
        eax_9.b = var_cb0_1 != &var_cd4
        (*var_cb0_1)->vFunc_4(eax_9)

if (var_ca4 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_cfc = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_cf8_1 = &var_ca4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_cd8_1 = &var_cfc
    void** eax_10 = &var_ca0
    int32_t var_8_3 = 3
    void** var_24_3 = &var_ca0
    int32_t var_28_2 = 0
    var_ca0 = &var_50
    int32_t var_2c_3 = 0
    var_8_3.b = 5
    
    if (var_cd8_1 != 0)
        eax_10 = (*var_cd8_1)->vFunc_0(&var_50)
        void** var_2c_4 = eax_10
    
    var_8_3.b = 3
    int32_t var_8_4 = 0xffffffff
    ebx = GSI1::OffForSym(eax_10, ebx, &var_1984)
    int32_t var_d04_2 = ebx
    
    if (var_cd8_1 != 0)
        (*var_cd8_1)->vFunc_4(var_cd8_1 != &var_cfc)

int32_t var_24_5 = 0x3c
void* var_28_3 = 6
int32_t var_2c_5 = 0xf
void var_c9c
__builtin_memcpy(&var_c9c, &var_1984, 0xc84)
void var_260c
int32_t* eax_16 =
    sub_5671b0(&var_260c, ebx, &var_c9c, &var_260c, 0x3ea, var_2c_5, var_28_3, var_24_5)
__builtin_memcpy(&var_c9c, eax_16, 0xc84)
uint32_t result = sub_561e00(eax_16, 0, arg1, 0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
