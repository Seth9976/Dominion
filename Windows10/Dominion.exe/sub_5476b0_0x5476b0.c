// 函数: sub_5476b0
// 地址: 0x5476b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7666d5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_88 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int64_t var_28 = 0
void* eax_3 = sub_573400()
int32_t ebx = 0
int32_t i = 0
void* var_1c = eax_3
*(arg1 + 0xc80) = 0
void* ecx = *(eax_3 + 4)

if (*(ecx + 0xd38) s> 0)
    do
        void* eax_4 = arg1 + (ebx << 2)
        int32_t eax_5 = sub_590990(eax_4, i, ecx, 0x3e9, eax_4)
        i += 1
        ebx = *(arg1 + 0xc80) + eax_5
        void* eax_6 = var_1c
        *(arg1 + 0xc80) = ebx
        ecx = *(eax_6 + 4)
    while (i s< *(ecx + 0xd38))

void var_b8

if ((var_28.d | var_28:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e24c5f996840e57a8f69038479b0803a>,bool,enum CardID>::VTable
        * const var_50 = &std::_Func_impl_no_alloc<class <lambda_e24c5f996840e57a8f69038479b0803a>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_4c_1 = &var_28
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e24c5f996840e57a8f69038479b0803a>,bool,enum CardID>::VTable
        * const* var_2c_1 = &var_50
    void** eax_9 = &var_1c
    int32_t var_8_1 = 0
    void** var_8c_2 = &var_1c
    int32_t var_90_2 = 0
    var_1c = &var_b8
    int32_t var_94_1 = 0
    var_8_1.b = 2
    
    if (var_2c_1 != 0)
        eax_9 = (*var_2c_1)->vFunc_0(&var_b8)
        void** var_94_2 = eax_9
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0xc80) = GSI1::OffForSym(eax_9, ebx, arg1)
    
    if (var_2c_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e24c5f996840e57a8f69038479b0803a>,bool,enum CardID>::VTable
            * const* eax_13
        eax_13.b = var_2c_1 != &var_50
        (*var_2c_1)->vFunc_4(eax_13)

if (var_20 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_775e5c88632ae5d08ab97eaccaaaba15>,bool,enum CardID>::VTable
        * const var_78 = &std::_Func_impl_no_alloc<class <lambda_775e5c88632ae5d08ab97eaccaaaba15>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_74_1 = &var_20
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_775e5c88632ae5d08ab97eaccaaaba15>,bool,enum CardID>::VTable
        * const* var_54_1 = &var_78
    void** eax_14 = &var_1c
    int32_t var_8_3 = 3
    int32_t ebx_2 = *(arg1 + 0xc80)
    void** var_8c_4 = &var_1c
    int32_t var_90_3 = 0
    var_1c = &var_b8
    int32_t var_94_3 = 0
    var_8_3.b = 5
    
    if (var_54_1 != 0)
        eax_14 = (*var_54_1)->vFunc_0(&var_b8)
        void** var_94_4 = eax_14
    
    var_8_3.b = 3
    *(arg1 + 0xc80) = GSI1::OffForSym(eax_14, ebx_2, arg1)
    
    if (var_54_1 != 0)
        (*var_54_1)->vFunc_4(var_54_1 != &var_78)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
