// 函数: sub_53c880
// 地址: 0x53c880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765b71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1974)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_53af70()

if (result == 0)
    int32_t var_ca4 = 0x100
    int64_t var_cac = 0
    void* eax_3 = sub_573400()
    void var_1984
    result = sub_590990(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x462, &var_1984)
    uint32_t result_1 = result
    uint32_t result_2 = result_1
    void* var_ca0
    void var_50
    
    if ((var_cac.d | var_cac:4.d) != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const var_cfc = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        int64_t* var_cf8_1 = &var_cac
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* var_cd8_1 = &var_cfc
        int32_t* eax_4 = &var_ca0
        int32_t var_8_1 = 0
        int32_t* var_24_2 = &var_ca0
        int32_t var_28_2 = 0
        var_ca0 = &var_50
        int32_t var_2c_1 = 0
        var_8_1.b = 2
        
        if (var_cd8_1 != 0)
            eax_4 = (*var_cd8_1)->vFunc_0(&var_50)
            int32_t* var_2c_2 = eax_4
        
        var_8_1.b = 0
        result = GSI1::OffForSym(eax_4, result_1, &var_1984)
        int32_t var_8_2 = 0xffffffff
        result_1 = result
        uint32_t result_3 = result_1
        
        if (var_cd8_1 != 0)
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
                * const* eax_7
            eax_7.b = var_cd8_1 != &var_cfc
            result = (*var_cd8_1)->vFunc_4(eax_7)
    
    if (var_ca4 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
            * const var_cd4 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        int32_t* var_cd0_1 = &var_ca4
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
            * const* var_cb0_1 = &var_cd4
        void** eax_8 = &var_ca0
        int32_t var_8_3 = 3
        void** var_24_4 = &var_ca0
        int32_t var_28_3 = 0
        var_ca0 = &var_50
        int32_t var_2c_3 = 0
        var_8_3.b = 5
        
        if (var_cb0_1 != 0)
            eax_8 = (*var_cb0_1)->vFunc_0(&var_50)
            void** var_2c_4 = eax_8
        
        var_8_3.b = 3
        result = GSI1::OffForSym(eax_8, result_1, &var_1984)
        int32_t var_8_4 = 0xffffffff
        result_1 = result
        uint32_t result_4 = result_1
        
        if (var_cb0_1 != 0)
            result = (*var_cb0_1)->vFunc_4(var_cb0_1 != &var_cd4)
            int32_t var_cb0_2 = 0
    
    void var_c9c
    __builtin_memcpy(&var_c9c, &var_1984, 0xc84)
    
    if (result_1 != 0)
        sub_56e9c0(1)
        void* eax_12 = sub_573400()
        *(eax_12 + 0xc)
        *(eax_12 + 4)
        result = sub_582eb0(&var_c9c, arg1, 0x462, 0xb, 7, 0, 0, 0, nullptr, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
