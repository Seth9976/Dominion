// 函数: sub_545b30
// 地址: 0x545b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = ecx
int32_t var_24 = 0
uint32_t result
int32_t edx
result, edx = sub_568960(&ExceptionList, 0, 0x3ea, 0)

if (result s>= 5)
    void var_1954
    int32_t eax_5 = sub_568780(&var_1954, edx, 0x3ea, &var_1954)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_641fdc9af36d8d4a379cab2fd3bdfd48>,bool,enum CardID>::VTable
        * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_641fdc9af36d8d4a379cab2fd3bdfd48>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_c9c
    __builtin_memcpy(&var_c9c, eax_5, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_641fdc9af36d8d4a379cab2fd3bdfd48>,bool,enum CardID>::VTable
        * const* var_ca8_1 = &var_ccc
    void* var_ca0
    int32_t* eax_6 = &var_ca0
    int32_t var_8_1 = 0
    int32_t* var_20_2 = &var_ca0
    int32_t var_24_1 = 0
    void var_4c
    var_ca0 = &var_4c
    int32_t var_28_1 = 0
    var_8_1.b = 2
    
    if (var_ca8_1 != 0)
        eax_6 = (*var_ca8_1)->vFunc_0(&var_4c)
        int32_t* var_28_2 = eax_6
    
    var_8_1.b = 0
    int32_t eax_8 = GSI1::OffForSym(eax_6, eax_2, &var_c9c)
    int32_t var_8_2 = 0xffffffff
    int32_t esi_1 = eax_8
    
    if (var_ca8_1 != 0)
        eax_8 = (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
        int32_t var_ca8_2 = 0
    
    if (esi_1 != 0)
        result = sub_56acc0(eax_8, 0x3ea, &var_c9c, 0xb0, 0, 5)
    else
        result = sub_566800(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
