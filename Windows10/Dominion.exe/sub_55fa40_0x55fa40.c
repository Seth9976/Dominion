// 函数: sub_55fa40
// 地址: 0x55fa40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766e91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x197c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_56b800()
int32_t var_1930 = 0x411
int64_t var_193c = 0
void* eax_4 = sub_573400()
uint32_t var_c9c
int32_t ebx = sub_590990(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x3ea, &var_c9c)
int32_t var_1c_1 = ebx
void* var_1928
void var_50

if ((var_193c.d | var_193c:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_198c = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_1988_1 = &var_193c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_1968_1 = &var_198c
    int32_t* eax_6 = &var_1928
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_1928
    int32_t var_28_1 = 0
    var_1928 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_1968_1 != 0)
        eax_6 = (*var_1968_1)->vFunc_0(&var_50)
        int32_t* var_2c_2 = eax_6
    
    var_8_1.b = 0
    var_8 = 0xffffffff
    ebx = GSI1::OffForSym(eax_6, ebx, &var_c9c)
    int32_t var_1c_2 = ebx
    
    if (var_1968_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_10
        eax_10.b = var_1968_1 != &var_198c
        (*var_1968_1)->vFunc_4(eax_10)

if (var_1930 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_1964 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_1960_1 = &var_1930
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_1940_1 = &var_1964
    void** eax_11 = &var_1928
    int32_t var_8_2 = 3
    void** var_24_3 = &var_1928
    int32_t var_28_2 = 0
    var_1928 = &var_50
    int32_t var_2c_3 = 0
    var_8_2.b = 5
    
    if (var_1940_1 != 0)
        eax_11 = (*var_1940_1)->vFunc_0(&var_50)
        void** var_2c_4 = eax_11
    
    var_8_2.b = 3
    var_8 = 0xffffffff
    ebx = GSI1::OffForSym(eax_11, ebx, &var_c9c)
    int32_t var_1c_3 = ebx
    
    if (var_1940_1 != 0)
        (*var_1940_1)->vFunc_4(var_1940_1 != &var_1964)
        int32_t var_1940_2 = 0

int32_t eax_16 = 0
int32_t var_1924
__builtin_memcpy(&var_1924, &var_c9c, 0xc84)
int32_t var_ca4

if (ebx s> 0)
    do
        if ((&var_1924)[eax_16] == eax_3)
            var_ca4 = ebx - 1
            (&var_1924)[eax_16] = (&var_1924)[ebx - 1]
            break
        
        eax_16 += 1
    while (eax_16 s< ebx)

uint32_t edi_1 = 1
var_c9c = eax_3
int32_t var_1c_4 = 1
int32_t var_192c = 0x3e9

if (var_ca4 != 0)
    int32_t esi = var_1924
    edi_1 = 2
    int32_t var_c98_1 = esi
    var_1c_4 = 2
    uint32_t esi_1 = zx.d(esi.w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    var_1928 = *(esi_1 * 0x64 + ebx_1 + 0x1a50)

void* eax_22 = sub_573400()
int32_t var_24_5 = 0
*(eax_22 + 0xc)
*(eax_22 + 4)
void* result = sub_590de0(&var_c9c, edi_1, &var_192c, 0x12, arg1, var_8)

if (result == 2)
    sub_56e9c0(result - 1)
    int32_t i_1 = 4
    int32_t i
    
    do
        result = sub_563590(0x106)
        
        if (result != 0)
            void* eax_23 = sub_573400()
            result = sub_583720(eax_23, *(eax_23 + 0xc), *(eax_23 + 4), result, 0x3eb, nullptr, 
                0x476, 0, 0, 4)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
