// 函数: sub_529880
// 地址: 0x529880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765b71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1974)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = ecx
sub_561e00(&ExceptionList, 0, 5, 0)
sub_566800()
int32_t var_ca4 = 0x104
int64_t var_cac = 0
void* eax_4 = sub_573400()
void var_1984
int32_t esi = sub_590990(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x3ea, &var_1984)
int32_t var_d04 = esi
void* var_ca0
void var_50

if ((var_cac.d | var_cac:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_cfc = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_cf8_1 = &var_cac
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_cd8_1 = &var_cfc
    int32_t* eax_6 = &var_ca0
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_ca0
    int32_t var_28_1 = 0
    var_ca0 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_cd8_1 != 0)
        eax_6 = (*var_cd8_1)->vFunc_0(&var_50)
        int32_t* var_2c_2 = eax_6
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    esi = GSI1::OffForSym(eax_6, esi, &var_1984)
    int32_t var_d04_1 = esi
    
    if (var_cd8_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_10
        eax_10.b = var_cd8_1 != &var_cfc
        (*var_cd8_1)->vFunc_4(eax_10)

if (var_ca4 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_cd4 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_cd0_1 = &var_ca4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_cb0_1 = &var_cd4
    void** eax_11 = &var_ca0
    int32_t var_8_3 = 3
    void** var_24_3 = &var_ca0
    int32_t var_28_2 = 0
    var_ca0 = &var_50
    int32_t var_2c_3 = 0
    var_8_3.b = 5
    
    if (var_cb0_1 != 0)
        eax_11 = (*var_cb0_1)->vFunc_0(&var_50)
        void** var_2c_4 = eax_11
    
    var_8_3.b = 3
    int32_t var_8_4 = 0xffffffff
    int32_t var_d04_2 = GSI1::OffForSym(eax_11, esi, &var_1984)
    
    if (var_cb0_1 != 0)
        (*var_cb0_1)->vFunc_4(var_cb0_1 != &var_cd4)
        int32_t var_cb0_2 = 0

void var_c9c
__builtin_memcpy(&var_c9c, &var_1984, 0xc84)
void* eax_16 = sub_573400()
*(eax_16 + 0xc)
*(eax_16 + 4)
uint32_t result = sub_582eb0(&var_c9c, arg1, 0x3ea, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
