// 函数: sub_5335a0
// 地址: 0x5335a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t esi
int32_t var_18 = esi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
void var_c9c
__builtin_memcpy(&var_c9c, sub_56f370(esi, &var_1954, 4, 0), 0xc84)
uint32_t result

if (arg1 == 0)
    result.b = 0
else
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_6b1447f7a7ead2f4c6c7d41979181c67>,bool,enum CardID>::VTable
        * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_6b1447f7a7ead2f4c6c7d41979181c67>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_6b1447f7a7ead2f4c6c7d41979181c67>,bool,enum CardID>::VTable
        * const* var_ca8_1 = &var_ccc
    void* var_ca0
    int32_t* eax_3 = &var_ca0
    int32_t var_8_1 = 0
    int32_t* var_24_1 = &var_ca0
    int32_t var_28_1 = 0
    void var_50
    var_ca0 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_ca8_1 != 0)
        eax_3 = (*var_ca8_1)->vFunc_0(&var_50)
        int32_t* var_2c_2 = eax_3
    
    var_8_1.b = 0
    uint32_t edi_1 = GSI1::OffForSym(eax_3, arg1, &var_c9c)
    
    if (var_ca8_1 != 0)
        (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
    
    result.b = edi_1 != 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
