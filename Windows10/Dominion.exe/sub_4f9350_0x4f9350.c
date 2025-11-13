// 函数: sub_4f9350
// 地址: 0x4f9350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764dd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0x104
int64_t var_2c = 0
void* eax_3 = sub_573400()
int32_t var_d04
uint32_t result = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x3ea, &var_d04)
uint32_t result_1 = result
uint32_t result_2 = result_1
int128_t* var_d44
int32_t var_d40
int32_t* var_d3c
int32_t* var_18

if ((var_2c.d | var_2c:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_7c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_78_1 = &var_2c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_58_1 = &var_7c
    int32_t* eax_4 = &var_18
    int32_t var_8_1 = 0
    int32_t* var_d18_1 = &var_18
    int32_t var_d1c_1 = 0
    var_18 = &var_d44
    int32_t var_d20_1 = 0
    var_8_1.b = 2
    
    if (var_58_1 != 0)
        eax_4 = (*var_58_1)->vFunc_0(&var_d44)
        int32_t* var_d20_2 = eax_4
    
    var_8_1.b = 0
    result = GSI1::OffForSym(eax_4, result_1, &var_d04, var_d44, var_d40, var_d3c)
    int32_t var_8_2 = 0xffffffff
    result_1 = result
    uint32_t result_3 = result_1
    
    if (var_58_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_7
        eax_7.b = var_58_1 != &var_7c
        result = (*var_58_1)->vFunc_4(eax_7)

if (var_1c != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_54 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_50_1 = &var_1c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_30_1 = &var_54
    int32_t** eax_8 = &var_18
    int32_t var_8_3 = 3
    int32_t** var_d18_3 = &var_18
    int32_t var_d1c_2 = 0
    var_18 = &var_d44
    int32_t var_d20_3 = 0
    var_8_3.b = 5
    
    if (var_30_1 != 0)
        eax_8 = (*var_30_1)->vFunc_0(&var_d44)
        int32_t** var_d20_4 = eax_8
    
    var_8_3.b = 3
    result = GSI1::OffForSym(eax_8, result_1, &var_d04, var_d44, var_d40, var_d3c)
    int32_t var_8_4 = 0xffffffff
    result_1 = result
    
    if (var_30_1 != 0)
        result = (*var_30_1)->vFunc_4(var_30_1 != &var_54)
        int32_t var_30_2 = 0

if (result_1 != 0)
    var_18 = nullptr
    void* var_24_1 = nullptr
    void* eax_12 = sub_573400()
    int32_t edi_1 = var_d04
    uint32_t ebx_1 = zx.d(edi_1.w)
    int32_t eax_13 = *(eax_12 + 4)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_9 = *(eax_12 + 4)
    int32_t* var_d1c_3 = var_18
    int32_t var_d20_5 = 0
    char* var_d24_1 = nullptr
    int32_t var_d28_1 = 0
    int32_t var_d2c_1 = 0
    int32_t var_d30_1 = *(eax_12 + 0x30)
    int32_t var_d34_1 = *(eax_12 + 0x2c)
    uint32_t edx_6 = *(ebx_1 * 0x64 + eax_13 + 0x1a70)
    int32_t var_d38_1 = *(eax_12 + 0x28)
    void* var_d3c_1 = nullptr
    int32_t var_d40_1 = 0x461
    var_d44 = 0xb
    result = sub_582d10(eax_13, edx_6, ecx_9, edi_1, 0x3ea, var_d44, var_d40_1, var_d3c_1, 
        var_d38_1, var_d34_1, var_d30_1, var_d2c_1, var_d28_1, var_d24_1, var_d20_5, var_d1c_3, 
        var_24_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
