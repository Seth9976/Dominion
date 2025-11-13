// 函数: sub_55ee30
// 地址: 0x55ee30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764d35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0x104
int64_t var_20 = 0
void* eax_3 = sub_573400()
uint32_t var_cfc
int32_t esi = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x3ea, &var_cfc)
int32_t var_7c = esi
void var_d3c
void* var_14

if ((var_20.d | var_20:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_4c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_48_1 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_28_1 = &var_4c
    int32_t* eax_5 = &var_14
    int32_t var_8_1 = 0
    int32_t* var_d10_1 = &var_14
    int32_t var_d14_1 = 0
    var_14 = &var_d3c
    int32_t var_d18_1 = 0
    var_8_1.b = 2
    
    if (var_28_1 != 0)
        eax_5 = (*var_28_1)->vFunc_0(&var_d3c)
        int32_t* var_d18_2 = eax_5
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    esi = GSI1::OffForSym(eax_5, esi, &var_cfc)
    int32_t var_7c_1 = esi
    
    if (var_28_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_8
        eax_8.b = var_28_1 != &var_4c
        (*var_28_1)->vFunc_4(eax_8)

if (var_18 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_70_1 = &var_18
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_50_1 = &var_74
    void** eax_9 = &var_14
    int32_t var_8_3 = 3
    void** var_d10_3 = &var_14
    int32_t var_d14_2 = 0
    var_14 = &var_d3c
    int32_t var_d18_3 = 0
    var_8_3.b = 5
    
    if (var_50_1 != 0)
        eax_9 = (*var_50_1)->vFunc_0(&var_d3c)
        void** var_d18_4 = eax_9
    
    var_8_3.b = 3
    int32_t var_8_4 = 0xffffffff
    esi = GSI1::OffForSym(eax_9, esi, &var_cfc)
    
    if (var_50_1 != 0)
        (*var_50_1)->vFunc_4(var_50_1 != &var_74)

if (esi == 0)
    int32_t eax_4
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

uint32_t eax_13 = var_cfc
var_14 = eax_13

if (eax_13 != 0)
    void* eax_14 = sub_573400()
    void* var_d10_5 = nullptr
    void* var_d14_3 = nullptr
    *(eax_14 + 0xc)
    int32_t var_d18_5 = 0
    int32_t var_d1c_1 = 0
    void* var_d30
    __builtin_memcpy(&var_d30, 
        "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
    *(eax_14 + 4)
    int32_t var_d2c
    int128_t* var_d28
    int32_t var_d24
    char var_d20
    sub_582eb0(&var_14, var_d30, var_d2c, var_d28, var_d24, var_d20, var_d1c_1, var_d18_5, 
        var_d14_3, var_d10_5)

eax_13.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
