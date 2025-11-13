// 函数: sub_546bc0
// 地址: 0x546bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76524b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1938)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1948
uint32_t result = sub_568780(&var_1948, edx, 0x3ea, &var_1948)
void var_c98
__builtin_memcpy(&var_c98, result, 0xc84)

if (arg1 s>= 5)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ad7891f6948ee8d0bb32dbe8706017b7>,bool,enum CardID>::VTable
        * const var_cc4 = &std::_Func_impl_no_alloc<class <lambda_ad7891f6948ee8d0bb32dbe8706017b7>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t var_cc0_1 = ecx + 4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ad7891f6948ee8d0bb32dbe8706017b7>,bool,enum CardID>::VTable
        * const* var_ca0_1 = &var_cc4
    void* var_c9c
    int32_t* eax_5 = &var_c9c
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_c9c
    int32_t var_28_1 = 0
    void var_50
    var_c9c = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_ca0_1 != 0)
        eax_5 = (*var_ca0_1)->vFunc_0(&var_50)
        int32_t* var_2c_2 = eax_5
    
    var_8_1.b = 0
    int32_t eax_7 = GSI1::OffForSym(eax_5, arg1, &var_c98)
    int32_t var_8_2 = 0xffffffff
    int32_t esi_1 = eax_7
    int32_t var_18 = esi_1
    
    if (var_ca0_1 != 0)
        eax_7 = (*var_ca0_1)->vFunc_4(var_ca0_1 != &var_cc4)
        int32_t var_ca0_2 = 0
    
    if (esi_1 != 0)
        result = sub_56acc0(eax_7, 0x3ea, &var_c98, 0xab, 0, 5)
    else
        result = sub_566800(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
