// 函数: sub_521400
// 地址: 0x521400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765791
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1974)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1924
void* ebx = &var_1924
int32_t var_c9c[0x312]
__builtin_memcpy(&var_1924, sub_568780(&var_c9c, edx, 0x3e9, &var_c9c), 0xc84)
uint32_t result = 0
int32_t var_ca4
void* eax_6 = &var_1924 + (var_ca4 << 2)
void* var_1928 = eax_6
int32_t var_192c

if (&var_1924 != eax_6)
    do
        uint32_t esi_2 = zx.d((*ebx).w)
        var_192c = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t i = *(esi_2 * 0x64 + var_192c + 0x1a4c)
        int32_t eax_10 = 0
        
        if (result s<= 0)
        label_5214be:
            var_c9c[result] = i
            result += 1
        else
            while (var_c9c[eax_10] != i)
                eax_10 += 1
                
                if (eax_10 s>= result)
                    goto label_5214be
        
        ebx += 4
    while (ebx != var_1928)

var_192c = 0x709
int64_t var_1934 = 0
void* eax_11 = sub_573400()
int32_t esi_3 = sub_590990(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), 0x3e9, &var_c9c)
int32_t var_1c_1 = esi_3
void var_50

if ((var_1934.d | var_1934:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_195c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_1958_1 = &var_1934
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_1938_1 = &var_195c
    int32_t var_8_1 = 0
    void** var_24_2 = &var_1928
    int32_t var_28_1 = 0
    int32_t (* eax_13)[0x312] = &var_c9c
    var_1928 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_1938_1 != 0)
        int32_t var_2c_2 = (*var_1938_1)->vFunc_0(&var_50)
        eax_13 = &var_c9c
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    esi_3 = GSI1::OffForSym(eax_13, esi_3, &var_c9c)
    var_1c_1 = esi_3
    
    if (var_1938_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_18
        eax_18.b = var_1938_1 != &var_195c
        (*var_1938_1)->vFunc_4(eax_18)

if (var_192c != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_1984 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_1980_1 = &var_192c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_1960_1 = &var_1984
    int32_t var_8_3 = 3
    void** var_24_4 = &var_1928
    int32_t var_28_2 = 0
    int32_t (* eax_19)[0x312] = &var_c9c
    var_1928 = &var_50
    int32_t var_2c_3 = 0
    var_8_3.b = 5
    
    if (var_1960_1 != 0)
        int32_t var_2c_4 = (*var_1960_1)->vFunc_0(&var_50)
        eax_19 = &var_c9c
    
    var_8_3.b = 3
    esi_3 = GSI1::OffForSym(eax_19, esi_3, &var_c9c)
    
    if (var_1960_1 != 0)
        (*var_1960_1)->vFunc_4(var_1960_1 != &var_1984)

if (esi_3 == 0)
    result += 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
