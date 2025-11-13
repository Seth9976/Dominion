// 函数: sub_5326b0
// 地址: 0x5326b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = ecx
int32_t var_28 = 0
uint32_t result
int32_t edx
result, edx = sub_568960(&ExceptionList, 0, 0x3ea, 0)

if (result s>= 5)
    void var_1954
    int32_t eax_5 = sub_568780(&var_1954, edx, 0x3ea, &var_1954)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f8c79d12b732a4039cae9aacdddf557c>,bool,enum CardID>::VTable
        * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_f8c79d12b732a4039cae9aacdddf557c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t var_cc8_1 = *(ecx + 4)
    uint32_t result_2
    __builtin_memcpy(&result_2, eax_5, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f8c79d12b732a4039cae9aacdddf557c>,bool,enum CardID>::VTable
        * const* var_ca8_1 = &var_ccc
    uint32_t result_1
    uint32_t* eax_7 = &result_1
    int32_t var_8_1 = 0
    uint32_t* var_24_2 = &result_1
    int32_t var_28_1 = 0
    void var_50
    result_1 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_ca8_1 != 0)
        eax_7 = (*var_ca8_1)->vFunc_0(&var_50)
        uint32_t* var_2c_2 = eax_7
    
    var_8_1.b = 0
    int32_t eax_9 = GSI1::OffForSym(eax_7, arg1, &result_2)
    int32_t var_8_2 = 0xffffffff
    
    if (var_ca8_1 != 0)
        (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
    
    if (eax_9 s<= 0)
        sub_56e9c0(nullptr)
        result = sub_566800(eax_2)
    else
        sub_56e9c0(1)
        result = result_2
        result_1 = result
        
        if (result != 0)
            void* eax_12 = sub_573400()
            void* var_24_4 = nullptr
            void* var_28_2 = nullptr
            *(eax_12 + 0xc)
            int32_t var_2c_3 = 0
            int32_t var_30_1 = 0
            void* var_44
            __builtin_memcpy(&var_44, 
                "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
            *(eax_12 + 4)
            int32_t var_40
            int128_t* var_3c
            int32_t var_38
            char var_34
            result = sub_582eb0(&result_1, var_44, var_40, var_3c, var_38, var_34, var_30_1, 
                var_2c_3, var_28_2, var_24_4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
