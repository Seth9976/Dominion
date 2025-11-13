// 函数: sub_563050
// 地址: 0x563050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* ecx
int32_t edx
ecx, edx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
int32_t eax_4 = sub_568780(&var_1954, edx, 0x3ea, &var_1954)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_afe93c515cf8e941963de8e36c7840fc>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_afe93c515cf8e941963de8e36c7840fc>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void arg_4
void* var_cc8 = &arg_4
void* result_4
__builtin_memcpy(&result_4, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_afe93c515cf8e941963de8e36c7840fc>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* result_3
int32_t* eax_5 = &result_3
int32_t var_8_1 = 0
int32_t* var_24_1 = &result_3
int32_t var_28 = 0
void var_50
result_3 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_5

var_8_1.b = 0
void* result_1 = GSI1::OffForSym(eax_5, arg1, &result_4)
int32_t var_8_2 = 0xffffffff

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

__builtin_memcpy(&result_4, sub_563960(&var_1954, 0, &result_4, &var_1954, 1, 0x17, ecx, 5, 0, 0), 
    0xc84)
void* result = result_1

if (result != 0)
    if (result != 1)
        sub_591930()
    
    void* result_2 = result_4
    result_3 = result_2
    
    if (result_2 != 0)
        void* eax_11 = sub_573400()
        void* var_24_4 = nullptr
        void* var_28_2 = nullptr
        *(eax_11 + 0xc)
        int32_t var_2c_3 = 0
        int32_t var_30_1 = 0
        void* var_44
        __builtin_memcpy(&var_44, 
            "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
        *(eax_11 + 4)
        int32_t var_40
        int128_t* var_3c_1
        int32_t var_38_1
        char var_34_1
        sub_582eb0(&result_3, var_44, var_40, var_3c_1, var_38_1, var_34_1, var_30_1, var_2c_3, 
            var_28_2, var_24_4)
    
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
