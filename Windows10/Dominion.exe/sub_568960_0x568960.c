// 函数: sub_568960
// 地址: 0x568960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_767217
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_ca8 = arg2
int32_t var_cac = 0xffffffff
void* eax_3 = sub_573400()
void var_ca0
void* eax_4 = &var_ca0
void* var_d3c = &var_ca0
void* ecx = *(eax_3 + 4)
uint32_t result_6

if (arg3 != 0)
    int32_t edx_1
    
    if (arg3 u> 0x48)
        edx_1 = *(eax_3 + 0xc)
    else
        edx_1 = 0xffffffff
    
    result_6 = sub_590990(eax_4, edx_1, ecx, arg3, var_d3c)
else
    result_6 = sub_590ad0(eax_4, *(eax_3 + 0xc), ecx, var_d3c)

uint32_t result_2 = result_6
uint32_t result_3 = result_2
void var_d68
void* var_ca4
int32_t arg_4

if ((arg_4 | arg4) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5d5378003ea5811a434182a0e3a72bad>,bool,enum CardID>::VTable
        * const var_d00 = &std::_Func_impl_no_alloc<class <lambda_5d5378003ea5811a434182a0e3a72bad>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_cfc_1 = &arg_4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5d5378003ea5811a434182a0e3a72bad>,bool,enum CardID>::VTable
        * const* var_cdc_1 = &var_d00
    int32_t var_8_1 = 0
    int32_t* var_d3c_1 = &var_ca4
    int32_t var_d40_2 = 0
    void* eax_7 = &var_ca0
    var_ca4 = &var_d68
    int32_t var_d44_1 = 0
    var_8_1.b = 2
    
    if (var_cdc_1 != 0)
        int32_t var_d44_2 = (*var_cdc_1)->vFunc_0(&var_d68)
        eax_7 = &var_ca0
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    result_2 = GSI1::OffForSym(eax_7, result_2, &var_ca0)
    uint32_t result_4 = result_2
    
    if (var_cdc_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5d5378003ea5811a434182a0e3a72bad>,bool,enum CardID>::VTable
            * const* eax_12
        eax_12.b = var_cdc_1 != &var_d00
        (*var_cdc_1)->vFunc_4(eax_12)

if (var_ca8 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_026e6266d12f1313706006cc45988d72>,bool,enum CardID>::VTable
        * const var_d28 = &std::_Func_impl_no_alloc<class <lambda_026e6266d12f1313706006cc45988d72>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_d24_1 = &var_ca8
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_026e6266d12f1313706006cc45988d72>,bool,enum CardID>::VTable
        * const* var_d04_1 = &var_d28
    int32_t var_8_3 = 3
    void** var_d3c_3 = &var_ca4
    int32_t var_d40_3 = 0
    void* eax_13 = &var_ca0
    var_ca4 = &var_d68
    int32_t var_d44_3 = 0
    var_8_3.b = 5
    
    if (var_d04_1 != 0)
        int32_t var_d44_4 = (*var_d04_1)->vFunc_0(&var_d68)
        eax_13 = &var_ca0
    
    var_8_3.b = 3
    int32_t var_8_4 = 0xffffffff
    result_2 = GSI1::OffForSym(eax_13, result_2, &var_ca0)
    uint32_t result_5 = result_2
    
    if (var_d04_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_026e6266d12f1313706006cc45988d72>,bool,enum CardID>::VTable
            * const* eax_18
        eax_18.b = var_d04_1 != &var_d28
        (*var_d04_1)->vFunc_4(eax_18)

uint32_t result

if (var_cac == 0xffffffff)
    result = result_2
else
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5f04a67bc0ce9eeb7ea37f393bba7b95>,bool,enum CardID>::VTable
        * const var_cd8 = &std::_Func_impl_no_alloc<class <lambda_5f04a67bc0ce9eeb7ea37f393bba7b95>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_cd0_1 = &var_cac
    void* var_cd4_1 = eax_3
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5f04a67bc0ce9eeb7ea37f393bba7b95>,bool,enum CardID>::VTable
        * const* var_cb4_1 = &var_cd8
    void** eax_19 = &var_ca4
    int32_t var_8_5 = 6
    void** var_d3c_5 = &var_ca4
    int32_t var_d40_4 = 0
    var_ca4 = &var_d68
    int32_t var_d44_5 = 0
    var_8_5.b = 8
    
    if (var_cb4_1 != 0)
        eax_19 = (*var_cb4_1)->vFunc_0(&var_d68)
        void** var_d44_6 = eax_19
    
    var_8_5.b = 6
    uint32_t result_1 = GSI1::OffForSym(eax_19, result_2, &var_ca0)
    
    if (var_cb4_1 != 0)
        (*var_cb4_1)->vFunc_4(var_cb4_1 != &var_cd8)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
