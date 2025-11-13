// 函数: sub_5488b0
// 地址: 0x5488b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 != sub_56b800())
    result.b = 0
else
    int32_t var_20_1 = 0
    void var_1954
    uint32_t eax_4 = sub_5685f0(&var_1954, 0, 0x3ea, &var_1954, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_69d08a760260baac184995816b55df38>,bool,enum CardID>::VTable
        * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_69d08a760260baac184995816b55df38>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_c9c
    __builtin_memcpy(&var_c9c, eax_4, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_69d08a760260baac184995816b55df38>,bool,enum CardID>::VTable
        * const* var_ca8_1 = &var_ccc
    void* var_ca0
    int32_t* eax_5 = &var_ca0
    int32_t var_8_1 = 0
    int32_t* var_20_2 = &var_ca0
    int32_t var_24_2 = 0
    void var_4c
    var_ca0 = &var_4c
    int32_t var_28_2 = 0
    var_8_1.b = 2
    
    if (var_ca8_1 != 0)
        eax_5 = (*var_ca8_1)->vFunc_0(&var_4c)
        int32_t* var_28_3 = eax_5
    
    var_8_1.b = 0
    uint32_t edi_1 = GSI1::OffForSym(eax_5, eax_2, &var_c9c)
    
    if (var_ca8_1 != 0)
        (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
    
    result.b = edi_1 != 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
